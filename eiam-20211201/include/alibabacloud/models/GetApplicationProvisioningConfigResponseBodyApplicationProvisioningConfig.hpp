// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODYAPPLICATIONPROVISIONINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODYAPPLICATIONPROVISIONINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig.hpp>
#include <alibabacloud/models/GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(ConfigOperateMode, configOperateMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(ProvisionJwksEndpoint, provisionJwksEndpoint_);
      DARABONBA_PTR_TO_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_TO_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_TO_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(ConfigOperateMode, configOperateMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(ProvisionJwksEndpoint, provisionJwksEndpoint_);
      DARABONBA_PTR_FROM_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_FROM_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_FROM_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig() = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig(const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig &) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig(GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig &&) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig() = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& operator=(const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig &) = default ;
    GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& operator=(GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->callbackProvisioningConfig_ == nullptr && return this->configOperateMode_ == nullptr && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->provisionJwksEndpoint_ == nullptr
        && return this->provisionPassword_ == nullptr && return this->provisionProtocolType_ == nullptr && return this->scimProvisioningConfig_ == nullptr && return this->status_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // callbackProvisioningConfig Field Functions 
    bool hasCallbackProvisioningConfig() const { return this->callbackProvisioningConfig_ != nullptr;};
    void deleteCallbackProvisioningConfig() { this->callbackProvisioningConfig_ = nullptr;};
    inline const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig & callbackProvisioningConfig() const { DARABONBA_PTR_GET_CONST(callbackProvisioningConfig_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig) };
    inline Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig callbackProvisioningConfig() { DARABONBA_PTR_GET(callbackProvisioningConfig_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setCallbackProvisioningConfig(const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig & callbackProvisioningConfig) { DARABONBA_PTR_SET_VALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setCallbackProvisioningConfig(Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig && callbackProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };


    // configOperateMode Field Functions 
    bool hasConfigOperateMode() const { return this->configOperateMode_ != nullptr;};
    void deleteConfigOperateMode() { this->configOperateMode_ = nullptr;};
    inline string configOperateMode() const { DARABONBA_PTR_GET_DEFAULT(configOperateMode_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setConfigOperateMode(string configOperateMode) { DARABONBA_PTR_SET_VALUE(configOperateMode_, configOperateMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // provisionJwksEndpoint Field Functions 
    bool hasProvisionJwksEndpoint() const { return this->provisionJwksEndpoint_ != nullptr;};
    void deleteProvisionJwksEndpoint() { this->provisionJwksEndpoint_ = nullptr;};
    inline string provisionJwksEndpoint() const { DARABONBA_PTR_GET_DEFAULT(provisionJwksEndpoint_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setProvisionJwksEndpoint(string provisionJwksEndpoint) { DARABONBA_PTR_SET_VALUE(provisionJwksEndpoint_, provisionJwksEndpoint) };


    // provisionPassword Field Functions 
    bool hasProvisionPassword() const { return this->provisionPassword_ != nullptr;};
    void deleteProvisionPassword() { this->provisionPassword_ = nullptr;};
    inline bool provisionPassword() const { DARABONBA_PTR_GET_DEFAULT(provisionPassword_, false) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setProvisionPassword(bool provisionPassword) { DARABONBA_PTR_SET_VALUE(provisionPassword_, provisionPassword) };


    // provisionProtocolType Field Functions 
    bool hasProvisionProtocolType() const { return this->provisionProtocolType_ != nullptr;};
    void deleteProvisionProtocolType() { this->provisionProtocolType_ = nullptr;};
    inline string provisionProtocolType() const { DARABONBA_PTR_GET_DEFAULT(provisionProtocolType_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setProvisionProtocolType(string provisionProtocolType) { DARABONBA_PTR_SET_VALUE(provisionProtocolType_, provisionProtocolType) };


    // scimProvisioningConfig Field Functions 
    bool hasScimProvisioningConfig() const { return this->scimProvisioningConfig_ != nullptr;};
    void deleteScimProvisioningConfig() { this->scimProvisioningConfig_ = nullptr;};
    inline const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig & scimProvisioningConfig() const { DARABONBA_PTR_GET_CONST(scimProvisioningConfig_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig) };
    inline Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig scimProvisioningConfig() { DARABONBA_PTR_GET(scimProvisioningConfig_, Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setScimProvisioningConfig(const Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig & scimProvisioningConfig) { DARABONBA_PTR_SET_VALUE(scimProvisioningConfig_, scimProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setScimProvisioningConfig(Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig && scimProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(scimProvisioningConfig_, scimProvisioningConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The configuration of the custom event callback protocol of IDaaS.
    std::shared_ptr<Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigCallbackProvisioningConfig> callbackProvisioningConfig_ = nullptr;
    // The rendering mode of the account synchronization page. Valid values:
    // 
    // *   standard: standard mode
    // *   template: template mode
    std::shared_ptr<string> configOperateMode_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // The public key endpoint for signature verification of the synchronization callback information.
    std::shared_ptr<string> provisionJwksEndpoint_ = nullptr;
    // Indicates whether the password is synchronized in IDaaS user event callbacks. Valid values:
    // 
    // *   true: The password is synchronized.
    // *   false: The password is not synchronized.
    std::shared_ptr<bool> provisionPassword_ = nullptr;
    // The synchronization protocol type of the application. Valid values:
    // 
    // *   idaas_callback: custom event callback protocol of IDaaS.
    // *   scim2: System for Cross-domain Identity Management (SCIM) protocol.
    std::shared_ptr<string> provisionProtocolType_ = nullptr;
    // The configuration of SCIM-based IDaaS synchronization.
    std::shared_ptr<Models::GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfigScimProvisioningConfig> scimProvisioningConfig_ = nullptr;
    // The status of the IDaaS account synchronization feature. Valid values:
    // 
    // *   enabled: The feature is enabled.
    // *   disabled: The feature is disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
