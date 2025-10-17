// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYOSSDELIVERYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODYOSSDELIVERYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(OssDeliveryConfig, ossDeliveryConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfig, ossDeliveryConfig_);
    };
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs() = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs &) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs(DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs &&) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs() = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& operator=(const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs &) = default ;
    DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& operator=(DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossDeliveryConfig_ == nullptr; };
    // ossDeliveryConfig Field Functions 
    bool hasOssDeliveryConfig() const { return this->ossDeliveryConfig_ != nullptr;};
    void deleteOssDeliveryConfig() { this->ossDeliveryConfig_ = nullptr;};
    inline const vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig> & ossDeliveryConfig() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfig_, vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig>) };
    inline vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig> ossDeliveryConfig() { DARABONBA_PTR_GET(ossDeliveryConfig_, vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig>) };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& setOssDeliveryConfig(const vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig> & ossDeliveryConfig) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfig_, ossDeliveryConfig) };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs& setOssDeliveryConfig(vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig> && ossDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfig_, ossDeliveryConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigsOssDeliveryConfig>> ossDeliveryConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
