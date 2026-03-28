#pragma once
#include "TelemetryEvent.h"

#include <string>

class BatteryEvent : public TelemetryEvent {
public:
	BatteryEvent(int, int, short);
	std::string getSummary() const override;

private:
	short remaining;
};

