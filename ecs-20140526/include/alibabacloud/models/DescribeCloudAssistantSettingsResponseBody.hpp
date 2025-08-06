// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig.hpp>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs.hpp>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodySessionManagerConfig.hpp>
#include <alibabacloud/models/DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCloudAssistantSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(OssDeliveryConfigs, ossDeliveryConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfigs, ossDeliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
    };
    DescribeCloudAssistantSettingsResponseBody() = default ;
    DescribeCloudAssistantSettingsResponseBody(const DescribeCloudAssistantSettingsResponseBody &) = default ;
    DescribeCloudAssistantSettingsResponseBody(DescribeCloudAssistantSettingsResponseBody &&) = default ;
    DescribeCloudAssistantSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBody() = default ;
    DescribeCloudAssistantSettingsResponseBody& operator=(const DescribeCloudAssistantSettingsResponseBody &) = default ;
    DescribeCloudAssistantSettingsResponseBody& operator=(DescribeCloudAssistantSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentUpgradeConfig_ != nullptr
        && this->ossDeliveryConfigs_ != nullptr && this->requestId_ != nullptr && this->sessionManagerConfig_ != nullptr && this->slsDeliveryConfigs_ != nullptr; };
    // agentUpgradeConfig Field Functions 
    bool hasAgentUpgradeConfig() const { return this->agentUpgradeConfig_ != nullptr;};
    void deleteAgentUpgradeConfig() { this->agentUpgradeConfig_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig & agentUpgradeConfig() const { DARABONBA_PTR_GET_CONST(agentUpgradeConfig_, DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig agentUpgradeConfig() { DARABONBA_PTR_GET(agentUpgradeConfig_, DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setAgentUpgradeConfig(const DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig & agentUpgradeConfig) { DARABONBA_PTR_SET_VALUE(agentUpgradeConfig_, agentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setAgentUpgradeConfig(DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig && agentUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(agentUpgradeConfig_, agentUpgradeConfig) };


    // ossDeliveryConfigs Field Functions 
    bool hasOssDeliveryConfigs() const { return this->ossDeliveryConfigs_ != nullptr;};
    void deleteOssDeliveryConfigs() { this->ossDeliveryConfigs_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs & ossDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs ossDeliveryConfigs() { DARABONBA_PTR_GET(ossDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setOssDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs & ossDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfigs_, ossDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setOssDeliveryConfigs(DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs && ossDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfigs_, ossDeliveryConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudAssistantSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionManagerConfig Field Functions 
    bool hasSessionManagerConfig() const { return this->sessionManagerConfig_ != nullptr;};
    void deleteSessionManagerConfig() { this->sessionManagerConfig_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBodySessionManagerConfig & sessionManagerConfig() const { DARABONBA_PTR_GET_CONST(sessionManagerConfig_, DescribeCloudAssistantSettingsResponseBodySessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBodySessionManagerConfig sessionManagerConfig() { DARABONBA_PTR_GET(sessionManagerConfig_, DescribeCloudAssistantSettingsResponseBodySessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setSessionManagerConfig(const DescribeCloudAssistantSettingsResponseBodySessionManagerConfig & sessionManagerConfig) { DARABONBA_PTR_SET_VALUE(sessionManagerConfig_, sessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setSessionManagerConfig(DescribeCloudAssistantSettingsResponseBodySessionManagerConfig && sessionManagerConfig) { DARABONBA_PTR_SET_RVALUE(sessionManagerConfig_, sessionManagerConfig) };


    // slsDeliveryConfigs Field Functions 
    bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
    void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs & slsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs slsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setSlsDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setSlsDeliveryConfigs(DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


  protected:
    // The configurations for upgrading Cloud Assistant Agent.
    std::shared_ptr<DescribeCloudAssistantSettingsResponseBodyAgentUpgradeConfig> agentUpgradeConfig_ = nullptr;
    // The configurations for delivering items to Object Storage Service (OSS).
    std::shared_ptr<DescribeCloudAssistantSettingsResponseBodyOssDeliveryConfigs> ossDeliveryConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeCloudAssistantSettingsResponseBodySessionManagerConfig> sessionManagerConfig_ = nullptr;
    // The configurations for delivering items to Simple Log Service.
    std::shared_ptr<DescribeCloudAssistantSettingsResponseBodySlsDeliveryConfigs> slsDeliveryConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
