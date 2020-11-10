#pragma once
#include "NotificationBase.h"

class CNotificationLogitechMediaServer : public CNotificationBase {
public:
	CNotificationLogitechMediaServer();
	~CNotificationLogitechMediaServer() override;
	bool IsConfigured() override;

      protected:
	bool SendMessageImplementation(const uint64_t Idx, const std::string &Name, const std::string &Subject, const std::string &Text, const std::string &ExtraData, const int Priority,
				       const std::string &Sound, const bool bFromNotification) override;

      private:
	std::string _PlayerMac;
	int _Duration;
};
