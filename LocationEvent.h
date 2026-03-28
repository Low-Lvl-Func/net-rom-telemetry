#pragma once
#include "TelemetryEvent.h"

#include <string>

class LocationEvent : public TelemetryEvent {
public:
	LocationEvent(int, int, float, float);
	std::string getSummary() const override;

private:
	float lat, lon;
};

