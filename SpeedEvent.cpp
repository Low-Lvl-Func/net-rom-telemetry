#include "SpeedEvent.h"

SpeedEvent::SpeedEvent(int id, int timestamp, float speed):
	TelemetryEvent(id, timestamp), speed(speed) { }

std::string SpeedEvent::getSummary() const {
	return std::format("SpeedEvent: {}, speed: {:.2f}", getCommon(), speed);
}