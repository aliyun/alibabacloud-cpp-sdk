// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELPROXYINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELPROXYINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ArmsConfiguration.hpp>
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
  class CreateModelProxyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelProxyInput& obj) { 
      DARABONBA_PTR_TO_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(litellmVersion, litellmVersion_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(modelProxyName, modelProxyName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(proxyConfig, proxyConfig_);
      DARABONBA_PTR_TO_JSON(proxyMode, proxyMode_);
      DARABONBA_PTR_TO_JSON(serviceRegionId, serviceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelProxyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(litellmVersion, litellmVersion_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(modelProxyName, modelProxyName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(proxyConfig, proxyConfig_);
      DARABONBA_PTR_FROM_JSON(proxyMode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(serviceRegionId, serviceRegionId_);
    };
    CreateModelProxyInput() = default ;
    CreateModelProxyInput(const CreateModelProxyInput &) = default ;
    CreateModelProxyInput(CreateModelProxyInput &&) = default ;
    CreateModelProxyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelProxyInput() = default ;
    CreateModelProxyInput& operator=(const CreateModelProxyInput &) = default ;
    CreateModelProxyInput& operator=(CreateModelProxyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armsConfiguration_ == nullptr
        && this->cpu_ == nullptr && this->credentialName_ == nullptr && this->description_ == nullptr && this->executionRoleArn_ == nullptr && this->litellmVersion_ == nullptr
        && this->logConfiguration_ == nullptr && this->memory_ == nullptr && this->modelProxyName_ == nullptr && this->modelType_ == nullptr && this->networkConfiguration_ == nullptr
        && this->proxyConfig_ == nullptr && this->proxyMode_ == nullptr && this->serviceRegionId_ == nullptr; };
    // armsConfiguration Field Functions 
    bool hasArmsConfiguration() const { return this->armsConfiguration_ != nullptr;};
    void deleteArmsConfiguration() { this->armsConfiguration_ = nullptr;};
    inline const ArmsConfiguration & getArmsConfiguration() const { DARABONBA_PTR_GET_CONST(armsConfiguration_, ArmsConfiguration) };
    inline ArmsConfiguration getArmsConfiguration() { DARABONBA_PTR_GET(armsConfiguration_, ArmsConfiguration) };
    inline CreateModelProxyInput& setArmsConfiguration(const ArmsConfiguration & armsConfiguration) { DARABONBA_PTR_SET_VALUE(armsConfiguration_, armsConfiguration) };
    inline CreateModelProxyInput& setArmsConfiguration(ArmsConfiguration && armsConfiguration) { DARABONBA_PTR_SET_RVALUE(armsConfiguration_, armsConfiguration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateModelProxyInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateModelProxyInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelProxyInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateModelProxyInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // litellmVersion Field Functions 
    bool hasLitellmVersion() const { return this->litellmVersion_ != nullptr;};
    void deleteLitellmVersion() { this->litellmVersion_ = nullptr;};
    inline string getLitellmVersion() const { DARABONBA_PTR_GET_DEFAULT(litellmVersion_, "") };
    inline CreateModelProxyInput& setLitellmVersion(string litellmVersion) { DARABONBA_PTR_SET_VALUE(litellmVersion_, litellmVersion) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline CreateModelProxyInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline CreateModelProxyInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateModelProxyInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // modelProxyName Field Functions 
    bool hasModelProxyName() const { return this->modelProxyName_ != nullptr;};
    void deleteModelProxyName() { this->modelProxyName_ = nullptr;};
    inline string getModelProxyName() const { DARABONBA_PTR_GET_DEFAULT(modelProxyName_, "") };
    inline CreateModelProxyInput& setModelProxyName(string modelProxyName) { DARABONBA_PTR_SET_VALUE(modelProxyName_, modelProxyName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateModelProxyInput& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateModelProxyInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateModelProxyInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // proxyConfig Field Functions 
    bool hasProxyConfig() const { return this->proxyConfig_ != nullptr;};
    void deleteProxyConfig() { this->proxyConfig_ = nullptr;};
    inline const ProxyConfig & getProxyConfig() const { DARABONBA_PTR_GET_CONST(proxyConfig_, ProxyConfig) };
    inline ProxyConfig getProxyConfig() { DARABONBA_PTR_GET(proxyConfig_, ProxyConfig) };
    inline CreateModelProxyInput& setProxyConfig(const ProxyConfig & proxyConfig) { DARABONBA_PTR_SET_VALUE(proxyConfig_, proxyConfig) };
    inline CreateModelProxyInput& setProxyConfig(ProxyConfig && proxyConfig) { DARABONBA_PTR_SET_RVALUE(proxyConfig_, proxyConfig) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string getProxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline CreateModelProxyInput& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline CreateModelProxyInput& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


  protected:
    shared_ptr<ArmsConfiguration> armsConfiguration_ {};
    // This parameter is required.
    shared_ptr<float> cpu_ {};
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<string> litellmVersion_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    // This parameter is required.
    shared_ptr<int32_t> memory_ {};
    // This parameter is required.
    shared_ptr<string> modelProxyName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    // This parameter is required.
    shared_ptr<ProxyConfig> proxyConfig_ {};
    // This parameter is required.
    shared_ptr<string> proxyMode_ {};
    shared_ptr<string> serviceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
