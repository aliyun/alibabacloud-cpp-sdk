// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPROXYINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPROXYINPUT_HPP_
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
  class UpdateModelProxyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelProxyInput& obj) { 
      DARABONBA_PTR_TO_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(proxyConfig, proxyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelProxyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(armsConfiguration, armsConfiguration_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(logConfiguration, logConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(proxyConfig, proxyConfig_);
    };
    UpdateModelProxyInput() = default ;
    UpdateModelProxyInput(const UpdateModelProxyInput &) = default ;
    UpdateModelProxyInput(UpdateModelProxyInput &&) = default ;
    UpdateModelProxyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelProxyInput() = default ;
    UpdateModelProxyInput& operator=(const UpdateModelProxyInput &) = default ;
    UpdateModelProxyInput& operator=(UpdateModelProxyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armsConfiguration_ == nullptr
        && this->credentialName_ == nullptr && this->description_ == nullptr && this->executionRoleArn_ == nullptr && this->logConfiguration_ == nullptr && this->networkConfiguration_ == nullptr
        && this->proxyConfig_ == nullptr; };
    // armsConfiguration Field Functions 
    bool hasArmsConfiguration() const { return this->armsConfiguration_ != nullptr;};
    void deleteArmsConfiguration() { this->armsConfiguration_ = nullptr;};
    inline const ArmsConfiguration & getArmsConfiguration() const { DARABONBA_PTR_GET_CONST(armsConfiguration_, ArmsConfiguration) };
    inline ArmsConfiguration getArmsConfiguration() { DARABONBA_PTR_GET(armsConfiguration_, ArmsConfiguration) };
    inline UpdateModelProxyInput& setArmsConfiguration(const ArmsConfiguration & armsConfiguration) { DARABONBA_PTR_SET_VALUE(armsConfiguration_, armsConfiguration) };
    inline UpdateModelProxyInput& setArmsConfiguration(ArmsConfiguration && armsConfiguration) { DARABONBA_PTR_SET_RVALUE(armsConfiguration_, armsConfiguration) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline UpdateModelProxyInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelProxyInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateModelProxyInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // logConfiguration Field Functions 
    bool hasLogConfiguration() const { return this->logConfiguration_ != nullptr;};
    void deleteLogConfiguration() { this->logConfiguration_ = nullptr;};
    inline const LogConfiguration & getLogConfiguration() const { DARABONBA_PTR_GET_CONST(logConfiguration_, LogConfiguration) };
    inline LogConfiguration getLogConfiguration() { DARABONBA_PTR_GET(logConfiguration_, LogConfiguration) };
    inline UpdateModelProxyInput& setLogConfiguration(const LogConfiguration & logConfiguration) { DARABONBA_PTR_SET_VALUE(logConfiguration_, logConfiguration) };
    inline UpdateModelProxyInput& setLogConfiguration(LogConfiguration && logConfiguration) { DARABONBA_PTR_SET_RVALUE(logConfiguration_, logConfiguration) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline UpdateModelProxyInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline UpdateModelProxyInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // proxyConfig Field Functions 
    bool hasProxyConfig() const { return this->proxyConfig_ != nullptr;};
    void deleteProxyConfig() { this->proxyConfig_ = nullptr;};
    inline const ProxyConfig & getProxyConfig() const { DARABONBA_PTR_GET_CONST(proxyConfig_, ProxyConfig) };
    inline ProxyConfig getProxyConfig() { DARABONBA_PTR_GET(proxyConfig_, ProxyConfig) };
    inline UpdateModelProxyInput& setProxyConfig(const ProxyConfig & proxyConfig) { DARABONBA_PTR_SET_VALUE(proxyConfig_, proxyConfig) };
    inline UpdateModelProxyInput& setProxyConfig(ProxyConfig && proxyConfig) { DARABONBA_PTR_SET_RVALUE(proxyConfig_, proxyConfig) };


  protected:
    shared_ptr<ArmsConfiguration> armsConfiguration_ {};
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<LogConfiguration> logConfiguration_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<ProxyConfig> proxyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
