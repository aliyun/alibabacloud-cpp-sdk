// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGSNOTIFICATIONCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULENOTIFICATIONSETTINGSNOTIFICATIONCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels &&) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& operator=(const GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& operator=(GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->severity_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> channels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettingsNotificationChannels& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // The alert notification methods.
    std::shared_ptr<vector<string>> channels_ = nullptr;
    // The severity level. Valid values:
    // 
    // *   Warning
    // *   Critical
    std::shared_ptr<string> severity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
