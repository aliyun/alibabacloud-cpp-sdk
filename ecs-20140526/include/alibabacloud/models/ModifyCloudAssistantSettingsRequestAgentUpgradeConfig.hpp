// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTAGENTUPGRADECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUESTAGENTUPGRADECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequestAgentUpgradeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig() = default ;
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig(const ModifyCloudAssistantSettingsRequestAgentUpgradeConfig &) = default ;
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig(ModifyCloudAssistantSettingsRequestAgentUpgradeConfig &&) = default ;
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequestAgentUpgradeConfig() = default ;
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& operator=(const ModifyCloudAssistantSettingsRequestAgentUpgradeConfig &) = default ;
    ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& operator=(ModifyCloudAssistantSettingsRequestAgentUpgradeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedUpgradeWindow_ == nullptr
        && return this->enabled_ == nullptr && return this->timeZone_ == nullptr; };
    // allowedUpgradeWindow Field Functions 
    bool hasAllowedUpgradeWindow() const { return this->allowedUpgradeWindow_ != nullptr;};
    void deleteAllowedUpgradeWindow() { this->allowedUpgradeWindow_ = nullptr;};
    inline const vector<string> & allowedUpgradeWindow() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindow_, vector<string>) };
    inline vector<string> allowedUpgradeWindow() { DARABONBA_PTR_GET(allowedUpgradeWindow_, vector<string>) };
    inline ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& setAllowedUpgradeWindow(const vector<string> & allowedUpgradeWindow) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };
    inline ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& setAllowedUpgradeWindow(vector<string> && allowedUpgradeWindow) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ModifyCloudAssistantSettingsRequestAgentUpgradeConfig& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The time windows during which Cloud Assistant Agent can be upgraded. The time windows can be accurate to minutes. The Coordinated Universal Time (UTC) time zone is used by default.
    // 
    // Make sure that the upgrade windows specified by this parameter are not shorter than 1 hour.
    // 
    // Specify each upgrade window in the following format: \\<Start time in the HH:mm format>-\\<End time in the HH:mm format>.
    // 
    // For example, [ "02:00-03:00", "05:00-06:00" ] specifies that Cloud Assistant Agent can be upgraded from 2:00:00 to 3:00:00 and from 5:00:00 to 6:00:00 every day in the UTC time zone.
    std::shared_ptr<vector<string>> allowedUpgradeWindow_ = nullptr;
    // Specifies whether to enable custom upgrade for Cloud Assistant Agent. If you set this parameter to false, an upgrade attempt is performed for Cloud Assistant Agent every 30 minutes.
    // 
    // Default value: false.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time zone of the time windows. Default value: UTC. You can specify a time zone in the following forms:
    // 
    // *   The time zone name. Examples: Asia/Shanghai and America/Los_Angeles.
    // *   The time offset from GMT. Examples: GMT+8:00 (UTC+8) and GMT-7:00 (UTC-7). You cannot add leading zeros to the hour value.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
