#pragma once
#include "TelemetryEvent.h"

class LocationEvent : public TelemetryEvent {
public:
	LocationEvent(int, int, float, float);
	std::string getSummary() const override;
	std::optional<std::string> getAlert() const override;

private:
	float lat, lon;
};

