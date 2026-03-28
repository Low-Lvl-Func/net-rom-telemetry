#include "BatteryEvent.h"

BatteryEvent::BatteryEvent(int id, int timestamp, short remaining):
	TelemetryEvent(id, timestamp), remaining(remaining) { }

std::string BatteryEvent::getSummary() const {
	return std::format("BatteryEvent: {}, remaining: {}", getCommon(), remaining);
}

std::optional<std::string> BatteryEvent::getAlert() const {
	return remaining < 15 ? std::make_optional(" !!BATTERY LOW!! ") : std::nullopt;
}