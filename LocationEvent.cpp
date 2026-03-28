#include "LocationEvent.h"

LocationEvent::LocationEvent(int id, int timestamp, float lat, float lon):
	TelemetryEvent(id, timestamp), lat(lat), lon(lon) { }

std::string LocationEvent::getSummary() const {
	return std::format("LocationEvent: {}, lat: {:.2f}, lon: {:.2f}", getCommon(), lat, lon);
}