#include "LocationEvent.h"

LocationEvent::LocationEvent(int id, int timestamp, float lat, float lon):
	TelemetryEvent(id, timestamp), lat(lat), lon(lon) { }

std::string LocationEvent::getSummary() const {
	return std::format("LocationEvent: {}, lat: {:.2f}, lon: {:.2f}", getCommon(), lat, lon);
}

std::optional<std::string> LocationEvent::getAlert() const {
	if (lat < -90 || lat > 90 || lon < -180 || lon > 180) {
		return " !!CORRUPTED COORDINATES!! ";
	}
	return std::nullopt;
}