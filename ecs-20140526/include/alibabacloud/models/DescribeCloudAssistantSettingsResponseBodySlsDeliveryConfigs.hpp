// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYSLSDELIVERYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYSLSDELIVERYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs() = default ;
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs &) = default ;
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs(DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs &&) = default ;
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs() = default ;
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& operator=(const DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs &) = default ;
    DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& operator=(DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsDeliveryConfig_ == nullptr; };
    // slsDeliveryConfig Field Functions 
    bool hasSlsDeliveryConfig() const { return this->slsDeliveryConfig_ != nullptr;};
    void deleteSlsDeliveryConfig() { this->slsDeliveryConfig_ = nullptr;};
    inline const vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig> & slsDeliveryConfig() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfig_, vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig>) };
    inline vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig> slsDeliveryConfig() { DARABONBA_PTR_GET(slsDeliveryConfig_, vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig>) };
    inline DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& setSlsDeliveryConfig(const vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig> & slsDeliveryConfig) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfig_, slsDeliveryConfig) };
    inline DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs& setSlsDeliveryConfig(vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig> && slsDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfig_, slsDeliveryConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigsSlsDeliveryConfig>> slsDeliveryConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
