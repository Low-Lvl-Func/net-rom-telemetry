#pragma once
#include "NotifChannel.h"

#include <string>

class SMSNotifCh : public NotifChannel {
public:
	explicit SMSNotifCh(std::string nr);
	void notify(const std::string& msg) override;

private:
	std::string nr;
};

