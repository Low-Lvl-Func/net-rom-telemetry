#include "EventProcessor.h"

#include <iostream>

void EventProcessor::setEvents(std::vector<std::unique_ptr<TelemetryEvent>> events) {
	this->events = std::move(events);
}

void EventProcessor::addChannel(std::shared_ptr<NotifChannel> ch) {
	channels.push_back(ch);
}

void EventProcessor::showEvents() const {
	for (const auto& event : events) {
		std::cout << event->getSummary() << std::endl;
	}
}