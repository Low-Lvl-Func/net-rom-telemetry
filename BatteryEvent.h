#pragma once
#include "TelemetryEvent.h"

class BatteryEvent : public TelemetryEvent {
public:
	BatteryEvent(int, int, short);
	std::string getSummary() const override;
	std::optional<std::string> getAlert() const override;

private:
	short remaining;
};

