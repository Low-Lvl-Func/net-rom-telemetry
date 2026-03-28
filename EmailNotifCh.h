#pragma once
#include "NotifChannel.h"

#include <string>

class EmailNotifCh : public NotifChannel {
public:
	explicit EmailNotifCh(std::string email);
	void notify(const std::string& msg) override;

private:
	std::string email;
};

