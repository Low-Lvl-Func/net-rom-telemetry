#pragma once

#include "TelemetryEvent.h"

#include <vector>
#include <memory>

class EventProcessor {
public:
	void setEvents(std::vector<std::unique_ptr<TelemetryEvent>>);
	void showEvents() const;

private:
	std::vector<std::unique_ptr<TelemetryEvent>> events;
};

