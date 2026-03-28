#include <iostream>
#include <memory>
#include <vector>

#include "EventProcessor.h"

#include "SpeedEvent.h"
#include "TelemetryEvent.h"
#include "LocationEvent.h"
#include "BatteryEvent.h"

int main() {
    auto ep = std::make_unique<EventProcessor>();

    std::vector<std::unique_ptr<TelemetryEvent>> events;
    events.push_back(std::make_unique<SpeedEvent>(1, 1231, 33.0f));
    events.push_back(std::make_unique<LocationEvent>(2, 32, 2.0f, 23.0f));
    events.push_back(std::make_unique<SpeedEvent>(3, 322, 212.0f));
    events.push_back(std::make_unique<BatteryEvent>(4, 2, 99));

    ep->setEvents(std::move(events));

    ep->showEvents();
    return 0;
}
