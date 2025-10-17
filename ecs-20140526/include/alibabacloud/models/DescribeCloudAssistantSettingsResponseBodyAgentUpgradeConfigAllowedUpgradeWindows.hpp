// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYAGENTUPGRADECONFIGALLOWEDUPGRADEWINDOWS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYAGENTUPGRADECONFIGALLOWEDUPGRADEWINDOWS_HPP_
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
  class DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
    };
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows() = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows(const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows &) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows(DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows &&) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows() = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& operator=(const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows &) = default ;
    DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& operator=(DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedUpgradeWindow_ == nullptr; };
    // allowedUpgradeWindow Field Functions 
    bool hasAllowedUpgradeWindow() const { return this->allowedUpgradeWindow_ != nullptr;};
    void deleteAllowedUpgradeWindow() { this->allowedUpgradeWindow_ = nullptr;};
    inline const vector<string> & allowedUpgradeWindow() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindow_, vector<string>) };
    inline vector<string> allowedUpgradeWindow() { DARABONBA_PTR_GET(allowedUpgradeWindow_, vector<string>) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& setAllowedUpgradeWindow(const vector<string> & allowedUpgradeWindow) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfigAllowedUpgradeWindows& setAllowedUpgradeWindow(vector<string> && allowedUpgradeWindow) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };


  protected:
    std::shared_ptr<vector<string>> allowedUpgradeWindow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
