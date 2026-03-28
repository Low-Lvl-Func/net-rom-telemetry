#pragma once
#include "TelemetryEvent.h"

#include <optional>
#include <string>
#include <format>

class SpeedEvent : public TelemetryEvent {
public:
    SpeedEvent(int id, int timestamp, float speed);
    std::string getSummary() const override;

private:
    float speed;
};

