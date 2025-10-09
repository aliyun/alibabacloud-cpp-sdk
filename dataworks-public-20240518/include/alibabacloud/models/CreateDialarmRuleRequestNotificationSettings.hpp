// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUESTNOTIFICATIONSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUESTNOTIFICATIONSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels.hpp>
#include <alibabacloud/models/CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIAlarmRuleRequestNotificationSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleRequestNotificationSettings& obj) { 
      DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_TO_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleRequestNotificationSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_FROM_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    CreateDIAlarmRuleRequestNotificationSettings() = default ;
    CreateDIAlarmRuleRequestNotificationSettings(const CreateDIAlarmRuleRequestNotificationSettings &) = default ;
    CreateDIAlarmRuleRequestNotificationSettings(CreateDIAlarmRuleRequestNotificationSettings &&) = default ;
    CreateDIAlarmRuleRequestNotificationSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleRequestNotificationSettings() = default ;
    CreateDIAlarmRuleRequestNotificationSettings& operator=(const CreateDIAlarmRuleRequestNotificationSettings &) = default ;
    CreateDIAlarmRuleRequestNotificationSettings& operator=(CreateDIAlarmRuleRequestNotificationSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inhibitionInterval_ != nullptr
        && this->muteInterval_ != nullptr && this->notificationChannels_ != nullptr && this->notificationReceivers_ != nullptr; };
    // inhibitionInterval Field Functions 
    bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
    void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
    inline int32_t inhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setInhibitionInterval(int32_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


    // muteInterval Field Functions 
    bool hasMuteInterval() const { return this->muteInterval_ != nullptr;};
    void deleteMuteInterval() { this->muteInterval_ = nullptr;};
    inline int32_t muteInterval() const { DARABONBA_PTR_GET_DEFAULT(muteInterval_, 0) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setMuteInterval(int32_t muteInterval) { DARABONBA_PTR_SET_VALUE(muteInterval_, muteInterval) };


    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels>) };
    inline vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels>) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setNotificationChannels(const vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setNotificationChannels(vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>) };
    inline vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setNotificationReceivers(const vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline CreateDIAlarmRuleRequestNotificationSettings& setNotificationReceivers(vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // This parameter is deprecated and replaced by the MuteInterval parameter.
    std::shared_ptr<int32_t> inhibitionInterval_ = nullptr;
    // The duration of the alert suppression interval. Default value: 5. Unit: minutes.
    std::shared_ptr<int32_t> muteInterval_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationChannels>> notificationChannels_ = nullptr;
    // The settings of alert notification recipients.
    std::shared_ptr<vector<Models::CreateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
