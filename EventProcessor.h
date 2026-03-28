#pragma once

#include "TelemetryEvent.h"
#include "NotifChannel.h"

#include <vector>
#include <memory>

class EventProcessor {
public:
	void setEvents(std::vector<std::unique_ptr<TelemetryEvent>>);
	void showEvents() const;
	void addChannel(std::shared_ptr<NotifChannel>);

private:
	std::vector<std::unique_ptr<TelemetryEvent>> events;
	std::vector<std::shared_ptr<NotifChannel>> channels;
};

