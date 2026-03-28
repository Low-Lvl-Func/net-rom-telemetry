#include "EmailNotifCh.h"

#include <iostream>

EmailNotifCh::EmailNotifCh(std::string email)
	: email(std::move(email)) { }

void EmailNotifCh::notify(const std::string& msg) {
	std::cout << "sending email to " << email << " .... " << msg << "\n";
}