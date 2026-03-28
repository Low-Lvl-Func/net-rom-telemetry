#include "SpeedEvent.h"

SpeedEvent::SpeedEvent(int id, int timestamp, float speed):
	TelemetryEvent(id, timestamp), speed(speed) { }

std::string SpeedEvent::getSummary() const {
	return std::format("SpeedEvent: {}, speed: {:.2f}", getCommon(), speed);
}

std::optional<std::string> SpeedEvent::getAlert() const {
	return speed > 110 ? std::make_optional(" !!SPEED TOO BIG!! ") : std::nullopt;
}