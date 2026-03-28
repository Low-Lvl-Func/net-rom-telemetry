#include "SMSNotifCh.h"

#include <iostream>

SMSNotifCh::SMSNotifCh(std::string nr)
	: nr(std::move(nr)) { }

void SMSNotifCh::notify(const std::string& msg) {
	std::cout << "sending sms to " << nr << ".... " << msg << "\n";
}