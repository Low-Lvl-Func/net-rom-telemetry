#pragma once

#include <optional>
#include <string>
#include <format> // C++20 feature

class TelemetryEvent {
public:
	TelemetryEvent(int id, int timestamp) : id(id), timestamp(timestamp) {}
	virtual ~TelemetryEvent() = default; // Essential for polymorphic deletion

	virtual std::string getSummary() const = 0;
	virtual std::optional<std::string> getAlert() const = 0;

	inline std::string getCommon() const {
		return std::format("id: {}, timestamp: {}", id, timestamp);
	}
protected:
	int id, timestamp;
};

