// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFODIJOBALARMRULESNOTIFICATIONSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFODIJOBALARMRULESNOTIFICATIONSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels.hpp>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& obj) { 
      DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_TO_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_FROM_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings() = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings(const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings(ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings &&) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings() = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& operator=(const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& operator=(ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inhibitionInterval_ != nullptr
        && this->muteInterval_ != nullptr && this->notificationChannels_ != nullptr && this->notificationReceivers_ != nullptr; };
    // inhibitionInterval Field Functions 
    bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
    void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
    inline int64_t inhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setInhibitionInterval(int64_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


    // muteInterval Field Functions 
    bool hasMuteInterval() const { return this->muteInterval_ != nullptr;};
    void deleteMuteInterval() { this->muteInterval_ = nullptr;};
    inline int64_t muteInterval() const { DARABONBA_PTR_GET_DEFAULT(muteInterval_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setMuteInterval(int64_t muteInterval) { DARABONBA_PTR_SET_VALUE(muteInterval_, muteInterval) };


    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels>) };
    inline vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels>) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setNotificationChannels(const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setNotificationChannels(vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers>) };
    inline vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers>) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setNotificationReceivers(const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings& setNotificationReceivers(vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // This parameter is deprecated and replaced by the MuteInterval parameter.
    std::shared_ptr<int64_t> inhibitionInterval_ = nullptr;
    // The duration of the alert suppression interval. Unit: minutes.
    std::shared_ptr<int64_t> muteInterval_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationChannels>> notificationChannels_ = nullptr;
    // The settings of alert notification recipients.
    std::shared_ptr<vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettingsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
