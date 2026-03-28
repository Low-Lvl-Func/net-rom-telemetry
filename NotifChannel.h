#pragma once

#include <string>

class NotifChannel {
public:
	virtual ~NotifChannel() = default;
	virtual void notify(const std::string& alertMessage) = 0;
};