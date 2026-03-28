#include "BatteryEvent.h"

BatteryEvent::BatteryEvent(int id, int timestamp, short remaining):
	TelemetryEvent(id, timestamp), remaining(remaining) { }

std::string BatteryEvent::getSummary() const {
	return std::format("LocationEvent: {}, remaining: {}", getCommon(), remaining);
}