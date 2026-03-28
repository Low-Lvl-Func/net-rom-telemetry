#include <iostream>
#include <memory>
#include <vector>

#include "EventProcessor.h"

#include "SpeedEvent.h"
#include "LocationEvent.h"
#include "BatteryEvent.h"

#include "SMSNotifCh.h"
#include "EmailNotifCh.h"

int main() {
    auto ep = std::make_unique<EventProcessor>();

    std::vector<std::unique_ptr<TelemetryEvent>> events;
    events.push_back(std::make_unique<SpeedEvent>(1, 1231, 33.0f));
    events.push_back(std::make_unique<LocationEvent>(2, 32, 2.0f, 23.0f));
    events.push_back(std::make_unique<SpeedEvent>(3, 322, 212.0f));
    events.push_back(std::make_unique<BatteryEvent>(4, 2, 99));
    events.push_back(std::make_unique<BatteryEvent>(4, 2, 9));

    ep->setEvents(std::move(events));

    auto smsCh = std::make_shared<SMSNotifCh>("+40771234567");
    ep->addChannel(smsCh);
    ep->showEvents();
    std::cout << "-----------------------------------------\n";

    auto emailCh = std::make_shared<EmailNotifCh>("john@example.com");
    ep->addChannel(emailCh);
    ep->showEvents();
    return 0;
}
