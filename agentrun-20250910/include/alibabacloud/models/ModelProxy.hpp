// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPROXY_HPP_
#define ALIBABACLOUD_MODELS_MODELPROXY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LogConfiguration.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/ProxyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelProxy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelProxy& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(litellmVersion, litellmVersion_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(modelProxyId, modelProxyId_);
      DARABONBA_PTR_TO_JSON(modelProxyName, modelProxyName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(proxyConfig, proxyConfig_);
      DARABONBA_PTR_TO_JSON(proxyMode, proxyMode_);
      DARABONBA_PTR_TO_JSON(serviceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, ModelProxy& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(litellmVersion, litellmVersion_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(modelProxyId, modelProxyId_);
      DARABONBA_PTR_FROM_JSON(modelProxyName, modelProxyName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(proxyConfig, proxyConfig_);
      DARABONBA_PTR_FROM_JSON(proxyMode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(serviceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
    };
    ModelProxy() = default ;
    ModelProxy(const ModelProxy &) = default ;
    ModelProxy(ModelProxy &&) = default ;
    ModelProxy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelProxy() = default ;
    ModelProxy& operator=(const ModelProxy &) = default ;
    ModelProxy& operator=(ModelProxy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->createdAt_ == nullptr && return this->credentialName_ == nullptr && return this->description_ == nullptr && return this->endpoint_ == nullptr && return this->functionName_ == nullptr
        && return this->lastUpdatedAt_ == nullptr && return this->litellmVersion_ == nullptr && return this->logConfiguration_ == nullptr && return this->memory_ == nullptr && return this->modelProxyId_ == nullptr
        && return this->modelProxyName_ == nullptr && return this->modelType_ == nullptr && return this->networkConfiguration_ == nullptr && return this->proxyConfig_ == nullptr && return this->proxyMode_ == nullptr
        && return this->serviceRegionId_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ModelProxy& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ModelProxy& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline ModelProxy& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelProxy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ModelProxy& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline ModelProxy& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string lastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline ModelProxy& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // litellmVersion Field Functions 
    bool hasLitellmVersion() const { return this->litellmVersion_ != nullptr;};
    void deleteLitellmVersion() { this->litellmVersion_ = nullptr;};
    inline string litellmVersion() const { DARABONBA_PTR_GET_DEFAULT(litellmVersion_, "") };
    inline ModelProxy& setLitellmVersion(string litellmVersion) { DARABONBA_PTR_SET_VALUE(litellmVersion_, litellmVersion) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & logConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration logConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline ModelProxy& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline ModelProxy& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ModelProxy& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // modelProxyId Field Functions 
    bool hasModelProxyId() const { return this->modelProxyId_ != nullptr;};
    void deleteModelProxyId() { this->modelProxyId_ = nullptr;};
    inline string modelProxyId() const { DARABONBA_PTR_GET_DEFAULT(modelProxyId_, "") };
    inline ModelProxy& setModelProxyId(string modelProxyId) { DARABONBA_PTR_SET_VALUE(modelProxyId_, modelProxyId) };


    // modelProxyName Field Functions 
    bool hasModelProxyName() const { return this->modelProxyName_ != nullptr;};
    void deleteModelProxyName() { this->modelProxyName_ = nullptr;};
    inline string modelProxyName() const { DARABONBA_PTR_GET_DEFAULT(modelProxyName_, "") };
    inline ModelProxy& setModelProxyName(string modelProxyName) { DARABONBA_PTR_SET_VALUE(modelProxyName_, modelProxyName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelProxy& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline ModelProxy& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline ModelProxy& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // proxyConfig Field Functions 
    bool hasProxyConfig() const { return this->proxyConfig_ != nullptr;};
    void deleteProxyConfig() { this->proxyConfig_ = nullptr;};
    inline const ProxyConfig & proxyConfig() const { DARABONBA_PTR_GET_CONST(proxyConfig_, ProxyConfig) };
    inline ProxyConfig proxyConfig() { DARABONBA_PTR_GET(proxyConfig_, ProxyConfig) };
    inline ModelProxy& setProxyConfig(const ProxyConfig & proxyConfig) { DARABONBA_PTR_SET_VALUE(proxyConfig_, proxyConfig) };
    inline ModelProxy& setProxyConfig(ProxyConfig && proxyConfig) { DARABONBA_PTR_SET_RVALUE(proxyConfig_, proxyConfig) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline ModelProxy& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline ModelProxy& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelProxy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ModelProxy& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> credentialName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> lastUpdatedAt_ = nullptr;
    std::shared_ptr<string> litellmVersion_ = nullptr;
    std::shared_ptr<LogConfiguration> logConfiguration_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> modelProxyId_ = nullptr;
    std::shared_ptr<string> modelProxyName_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<ProxyConfig> proxyConfig_ = nullptr;
    std::shared_ptr<string> proxyMode_ = nullptr;
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
