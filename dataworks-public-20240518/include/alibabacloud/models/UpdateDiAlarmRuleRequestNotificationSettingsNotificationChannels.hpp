// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTNOTIFICATIONSETTINGSNOTIFICATIONCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTNOTIFICATIONSETTINGSNOTIFICATIONCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels() = default ;
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels(const UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels &) = default ;
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels(UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels &&) = default ;
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels() = default ;
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& operator=(const UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels &) = default ;
    UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& operator=(UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->severity_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDIAlarmRuleRequestNotificationSettingsNotificationChannels& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // The alert notification method. Valid values:
    // 
    // *   Mail
    // *   Phone
    // *   Sms
    // *   Ding
    std::shared_ptr<vector<string>> channels_ = nullptr;
    // The severity level. Valid values:
    // 
    // *   Warning
    // *   Critical
    std::shared_ptr<string> severity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
