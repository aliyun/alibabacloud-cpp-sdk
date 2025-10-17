// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYAGENTUPGRADECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYAGENTUPGRADECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedUpgradeWindows, allowedUpgradeWindows_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindows, allowedUpgradeWindows_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig(const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig(DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig &&) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig() = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& operator=(const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig &) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& operator=(DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedUpgradeWindows_ == nullptr
        && return this->enabled_ == nullptr && return this->timeZone_ == nullptr; };
    // allowedUpgradeWindows Field Functions 
    bool hasAllowedUpgradeWindows() const { return this->allowedUpgradeWindows_ != nullptr;};
    void deleteAllowedUpgradeWindows() { this->allowedUpgradeWindows_ = nullptr;};
    inline const Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows & allowedUpgradeWindows() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindows_, Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows) };
    inline Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows allowedUpgradeWindows() { DARABONBA_PTR_GET(allowedUpgradeWindows_, Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& setAllowedUpgradeWindows(const Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows & allowedUpgradeWindows) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindows_, allowedUpgradeWindows) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& setAllowedUpgradeWindows(Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows && allowedUpgradeWindows) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindows_, allowedUpgradeWindows) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The time windows during which Cloud Assistant Agent can be upgraded.
    std::shared_ptr<Models::DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows> allowedUpgradeWindows_ = nullptr;
    // Indicates whether custom upgrade is enabled for Cloud Assistant Agent. If the value is false or empty, an upgrade attempt is performed for Cloud Assistant Agent every 30 minutes.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time zone of the time windows.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
