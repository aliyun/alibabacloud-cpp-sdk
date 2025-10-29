// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTNOTIFICATIONSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTNOTIFICATIONSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels.hpp>
#include <alibabacloud/models/UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIAlarmRuleRequestNotificationSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIAlarmRuleRequestNotificationSettings& obj) { 
      DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_TO_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIAlarmRuleRequestNotificationSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
      DARABONBA_PTR_FROM_JSON(MuteInterval, muteInterval_);
      DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
      DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
    };
    UpdateDIAlarmRuleRequestNotificationSettings() = default ;
    UpdateDIAlarmRuleRequestNotificationSettings(const UpdateDIAlarmRuleRequestNotificationSettings &) = default ;
    UpdateDIAlarmRuleRequestNotificationSettings(UpdateDIAlarmRuleRequestNotificationSettings &&) = default ;
    UpdateDIAlarmRuleRequestNotificationSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIAlarmRuleRequestNotificationSettings() = default ;
    UpdateDIAlarmRuleRequestNotificationSettings& operator=(const UpdateDIAlarmRuleRequestNotificationSettings &) = default ;
    UpdateDIAlarmRuleRequestNotificationSettings& operator=(UpdateDIAlarmRuleRequestNotificationSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inhibitionInterval_ == nullptr
        && return this->muteInterval_ == nullptr && return this->notificationChannels_ == nullptr && return this->notificationReceivers_ == nullptr; };
    // inhibitionInterval Field Functions 
    bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
    void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
    inline int64_t inhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0L) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setInhibitionInterval(int64_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


    // muteInterval Field Functions 
    bool hasMuteInterval() const { return this->muteInterval_ != nullptr;};
    void deleteMuteInterval() { this->muteInterval_ = nullptr;};
    inline int64_t muteInterval() const { DARABONBA_PTR_GET_DEFAULT(muteInterval_, 0L) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setMuteInterval(int64_t muteInterval) { DARABONBA_PTR_SET_VALUE(muteInterval_, muteInterval) };


    // notificationChannels Field Functions 
    bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
    void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
    inline const vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels> & notificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels>) };
    inline vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels> notificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels>) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setNotificationChannels(const vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setNotificationChannels(vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


    // notificationReceivers Field Functions 
    bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
    void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
    inline const vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> & notificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>) };
    inline vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> notificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setNotificationReceivers(const vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
    inline UpdateDIAlarmRuleRequestNotificationSettings& setNotificationReceivers(vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


  protected:
    // This parameter is deprecated and replaced by the MuteInterval parameter.
    std::shared_ptr<int64_t> inhibitionInterval_ = nullptr;
    // The duration of the alert suppression interval. Default value: 5. Unit: minutes.
    std::shared_ptr<int64_t> muteInterval_ = nullptr;
    // The alert notification methods.
    std::shared_ptr<vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels>> notificationChannels_ = nullptr;
    // The settings of alert notification recipients.
    std::shared_ptr<vector<Models::UpdateDIAlarmRuleRequestNotificationSettingsNotificationReceivers>> notificationReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
