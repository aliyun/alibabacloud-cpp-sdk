// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetApplicationProvisioningConfigRequestCallbackProvisioningConfig.hpp>
#include <alibabacloud/models/SetApplicationProvisioningConfigRequestScimProvisioningConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_TO_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_TO_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_FROM_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_FROM_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
    };
    SetApplicationProvisioningConfigRequest() = default ;
    SetApplicationProvisioningConfigRequest(const SetApplicationProvisioningConfigRequest &) = default ;
    SetApplicationProvisioningConfigRequest(SetApplicationProvisioningConfigRequest &&) = default ;
    SetApplicationProvisioningConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequest() = default ;
    SetApplicationProvisioningConfigRequest& operator=(const SetApplicationProvisioningConfigRequest &) = default ;
    SetApplicationProvisioningConfigRequest& operator=(SetApplicationProvisioningConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->callbackProvisioningConfig_ != nullptr && this->instanceId_ != nullptr && this->networkAccessEndpointId_ != nullptr && this->provisionPassword_ != nullptr && this->provisionProtocolType_ != nullptr
        && this->scimProvisioningConfig_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationProvisioningConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // callbackProvisioningConfig Field Functions 
    bool hasCallbackProvisioningConfig() const { return this->callbackProvisioningConfig_ != nullptr;};
    void deleteCallbackProvisioningConfig() { this->callbackProvisioningConfig_ = nullptr;};
    inline const SetApplicationProvisioningConfigRequestCallbackProvisioningConfig & callbackProvisioningConfig() const { DARABONBA_PTR_GET_CONST(callbackProvisioningConfig_, SetApplicationProvisioningConfigRequestCallbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequestCallbackProvisioningConfig callbackProvisioningConfig() { DARABONBA_PTR_GET(callbackProvisioningConfig_, SetApplicationProvisioningConfigRequestCallbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setCallbackProvisioningConfig(const SetApplicationProvisioningConfigRequestCallbackProvisioningConfig & callbackProvisioningConfig) { DARABONBA_PTR_SET_VALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setCallbackProvisioningConfig(SetApplicationProvisioningConfigRequestCallbackProvisioningConfig && callbackProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationProvisioningConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline SetApplicationProvisioningConfigRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // provisionPassword Field Functions 
    bool hasProvisionPassword() const { return this->provisionPassword_ != nullptr;};
    void deleteProvisionPassword() { this->provisionPassword_ = nullptr;};
    inline bool provisionPassword() const { DARABONBA_PTR_GET_DEFAULT(provisionPassword_, false) };
    inline SetApplicationProvisioningConfigRequest& setProvisionPassword(bool provisionPassword) { DARABONBA_PTR_SET_VALUE(provisionPassword_, provisionPassword) };


    // provisionProtocolType Field Functions 
    bool hasProvisionProtocolType() const { return this->provisionProtocolType_ != nullptr;};
    void deleteProvisionProtocolType() { this->provisionProtocolType_ = nullptr;};
    inline string provisionProtocolType() const { DARABONBA_PTR_GET_DEFAULT(provisionProtocolType_, "") };
    inline SetApplicationProvisioningConfigRequest& setProvisionProtocolType(string provisionProtocolType) { DARABONBA_PTR_SET_VALUE(provisionProtocolType_, provisionProtocolType) };


    // scimProvisioningConfig Field Functions 
    bool hasScimProvisioningConfig() const { return this->scimProvisioningConfig_ != nullptr;};
    void deleteScimProvisioningConfig() { this->scimProvisioningConfig_ = nullptr;};
    inline const SetApplicationProvisioningConfigRequestScimProvisioningConfig & scimProvisioningConfig() const { DARABONBA_PTR_GET_CONST(scimProvisioningConfig_, SetApplicationProvisioningConfigRequestScimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequestScimProvisioningConfig scimProvisioningConfig() { DARABONBA_PTR_GET(scimProvisioningConfig_, SetApplicationProvisioningConfigRequestScimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setScimProvisioningConfig(const SetApplicationProvisioningConfigRequestScimProvisioningConfig & scimProvisioningConfig) { DARABONBA_PTR_SET_VALUE(scimProvisioningConfig_, scimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setScimProvisioningConfig(SetApplicationProvisioningConfigRequestScimProvisioningConfig && scimProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(scimProvisioningConfig_, scimProvisioningConfig) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The configuration of event callback synchronization. This parameter is required when the ProvisionProtocolType parameter is set to idaas_callback.
    std::shared_ptr<SetApplicationProvisioningConfigRequestCallbackProvisioningConfig> callbackProvisioningConfig_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // Specifies whether to synchronize the password in IDaaS user event callbacks. Valid values:
    // 
    // *   true: synchronize the password.
    // *   false: do not synchronize the password.
    std::shared_ptr<bool> provisionPassword_ = nullptr;
    // The synchronization protocol type of the application. Valid values:
    // 
    // *   idaas_callback: custom event callback protocol of IDaaS.
    // *   scim2: System for Cross-domain Identity Management (SCIM) protocol.
    // 
    // This parameter is required.
    std::shared_ptr<string> provisionProtocolType_ = nullptr;
    // The configuration of SCIM-based IDaaS synchronization. This parameter is required when the ProvisionProtocolType parameter is set to scim2.
    std::shared_ptr<SetApplicationProvisioningConfigRequestScimProvisioningConfig> scimProvisioningConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
