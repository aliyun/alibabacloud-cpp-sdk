// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels.hpp>
#include <alibabacloud/models/GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& obj) { 
      DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings &&) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& operator=(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& operator=(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inhibitionInterval_ != nullptr
        && this->notificationChannels_ != nullptr && this->notificationReceivers_ != nullptr; };
    // inhibitionInterval Field Functions 
    bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
    void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
    inline int32_t inhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& setInhibitionInterval(int32_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels>) };
    inline vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels>) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& setNotificationChannels(const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& setNotificationChannels(vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers>) };
    inline vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers>) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& setNotificationReceivers(const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings& setNotificationReceivers(vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // The duration of the alert suppression interval. Unit: minutes.
    std::shared_ptr<int32_t> inhibitionInterval_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels>> notificationChannels_ = nullptr;
    // The alert notification recipients.
    std::shared_ptr<vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
