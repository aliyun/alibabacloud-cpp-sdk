// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LLMDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PolicyConfig.hpp>
#include <alibabacloud/models/TargetServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class LLMDeployConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LLMDeployConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, LLMDeployConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
    };
    LLMDeployConfig() = default ;
    LLMDeployConfig(const LLMDeployConfig &) = default ;
    LLMDeployConfig(LLMDeployConfig &&) = default ;
    LLMDeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LLMDeployConfig() = default ;
    LLMDeployConfig& operator=(const LLMDeployConfig &) = default ;
    LLMDeployConfig& operator=(LLMDeployConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDeploy_ == nullptr
        && return this->backendScene_ == nullptr && return this->customDomainIds_ == nullptr && return this->gatewayType_ == nullptr && return this->policyConfigs_ == nullptr && return this->serviceConfigs_ == nullptr; };
    // autoDeploy Field Functions 
    bool hasAutoDeploy() const { return this->autoDeploy_ != nullptr;};
    void deleteAutoDeploy() { this->autoDeploy_ = nullptr;};
    inline bool autoDeploy() const { DARABONBA_PTR_GET_DEFAULT(autoDeploy_, false) };
    inline LLMDeployConfig& setAutoDeploy(bool autoDeploy) { DARABONBA_PTR_SET_VALUE(autoDeploy_, autoDeploy) };


    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string backendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline LLMDeployConfig& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // customDomainIds Field Functions 
    bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
    void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
    inline const vector<string> & customDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
    inline vector<string> customDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
    inline LLMDeployConfig& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
    inline LLMDeployConfig& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline LLMDeployConfig& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<PolicyConfig> & policyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<PolicyConfig>) };
    inline vector<PolicyConfig> policyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<PolicyConfig>) };
    inline LLMDeployConfig& setPolicyConfigs(const vector<PolicyConfig> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline LLMDeployConfig& setPolicyConfigs(vector<PolicyConfig> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<TargetServiceConfig> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<TargetServiceConfig>) };
    inline vector<TargetServiceConfig> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<TargetServiceConfig>) };
    inline LLMDeployConfig& setServiceConfigs(const vector<TargetServiceConfig> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline LLMDeployConfig& setServiceConfigs(vector<TargetServiceConfig> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


  protected:
    std::shared_ptr<bool> autoDeploy_ = nullptr;
    std::shared_ptr<string> backendScene_ = nullptr;
    std::shared_ptr<vector<string>> customDomainIds_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<vector<PolicyConfig>> policyConfigs_ = nullptr;
    std::shared_ptr<vector<TargetServiceConfig>> serviceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
