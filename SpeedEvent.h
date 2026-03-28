#pragma once
#include "TelemetryEvent.h"

class SpeedEvent : public TelemetryEvent {
public:
    SpeedEvent(int id, int timestamp, float speed);
    std::string getSummary() const override;
    std::optional<std::string> getAlert() const override;

private:
    float speed;
};

