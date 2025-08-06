// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestAuthnConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestAutoCreateUserConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestAutoUpdateUserConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestBindingConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestDingtalkAppConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestLarkConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestLdapConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestOidcConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestUdPullConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestUdPushConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestWeComConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnConfig, authnConfig_);
      DARABONBA_PTR_TO_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_TO_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_TO_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_TO_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnConfig, authnConfig_);
      DARABONBA_PTR_FROM_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_FROM_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_FROM_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_FROM_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
    };
    CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest(CreateIdentityProviderRequest &&) = default ;
    CreateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest& operator=(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest& operator=(CreateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authnConfig_ != nullptr
        && this->autoCreateUserConfig_ != nullptr && this->autoUpdateUserConfig_ != nullptr && this->bindingConfig_ != nullptr && this->clientToken_ != nullptr && this->dingtalkAppConfig_ != nullptr
        && this->identityProviderName_ != nullptr && this->identityProviderType_ != nullptr && this->instanceId_ != nullptr && this->larkConfig_ != nullptr && this->ldapConfig_ != nullptr
        && this->logoUrl_ != nullptr && this->networkAccessEndpointId_ != nullptr && this->oidcConfig_ != nullptr && this->udPullConfig_ != nullptr && this->udPushConfig_ != nullptr
        && this->weComConfig_ != nullptr; };
    // authnConfig Field Functions 
    bool hasAuthnConfig() const { return this->authnConfig_ != nullptr;};
    void deleteAuthnConfig() { this->authnConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestAuthnConfig & authnConfig() const { DARABONBA_PTR_GET_CONST(authnConfig_, CreateIdentityProviderRequestAuthnConfig) };
    inline CreateIdentityProviderRequestAuthnConfig authnConfig() { DARABONBA_PTR_GET(authnConfig_, CreateIdentityProviderRequestAuthnConfig) };
    inline CreateIdentityProviderRequest& setAuthnConfig(const CreateIdentityProviderRequestAuthnConfig & authnConfig) { DARABONBA_PTR_SET_VALUE(authnConfig_, authnConfig) };
    inline CreateIdentityProviderRequest& setAuthnConfig(CreateIdentityProviderRequestAuthnConfig && authnConfig) { DARABONBA_PTR_SET_RVALUE(authnConfig_, authnConfig) };


    // autoCreateUserConfig Field Functions 
    bool hasAutoCreateUserConfig() const { return this->autoCreateUserConfig_ != nullptr;};
    void deleteAutoCreateUserConfig() { this->autoCreateUserConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestAutoCreateUserConfig & autoCreateUserConfig() const { DARABONBA_PTR_GET_CONST(autoCreateUserConfig_, CreateIdentityProviderRequestAutoCreateUserConfig) };
    inline CreateIdentityProviderRequestAutoCreateUserConfig autoCreateUserConfig() { DARABONBA_PTR_GET(autoCreateUserConfig_, CreateIdentityProviderRequestAutoCreateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoCreateUserConfig(const CreateIdentityProviderRequestAutoCreateUserConfig & autoCreateUserConfig) { DARABONBA_PTR_SET_VALUE(autoCreateUserConfig_, autoCreateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoCreateUserConfig(CreateIdentityProviderRequestAutoCreateUserConfig && autoCreateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoCreateUserConfig_, autoCreateUserConfig) };


    // autoUpdateUserConfig Field Functions 
    bool hasAutoUpdateUserConfig() const { return this->autoUpdateUserConfig_ != nullptr;};
    void deleteAutoUpdateUserConfig() { this->autoUpdateUserConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestAutoUpdateUserConfig & autoUpdateUserConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateUserConfig_, CreateIdentityProviderRequestAutoUpdateUserConfig) };
    inline CreateIdentityProviderRequestAutoUpdateUserConfig autoUpdateUserConfig() { DARABONBA_PTR_GET(autoUpdateUserConfig_, CreateIdentityProviderRequestAutoUpdateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoUpdateUserConfig(const CreateIdentityProviderRequestAutoUpdateUserConfig & autoUpdateUserConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoUpdateUserConfig(CreateIdentityProviderRequestAutoUpdateUserConfig && autoUpdateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestBindingConfig & bindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, CreateIdentityProviderRequestBindingConfig) };
    inline CreateIdentityProviderRequestBindingConfig bindingConfig() { DARABONBA_PTR_GET(bindingConfig_, CreateIdentityProviderRequestBindingConfig) };
    inline CreateIdentityProviderRequest& setBindingConfig(const CreateIdentityProviderRequestBindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline CreateIdentityProviderRequest& setBindingConfig(CreateIdentityProviderRequestBindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIdentityProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dingtalkAppConfig Field Functions 
    bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
    void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestDingtalkAppConfig & dingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, CreateIdentityProviderRequestDingtalkAppConfig) };
    inline CreateIdentityProviderRequestDingtalkAppConfig dingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, CreateIdentityProviderRequestDingtalkAppConfig) };
    inline CreateIdentityProviderRequest& setDingtalkAppConfig(const CreateIdentityProviderRequestDingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
    inline CreateIdentityProviderRequest& setDingtalkAppConfig(CreateIdentityProviderRequestDingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string identityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline CreateIdentityProviderRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIdentityProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // larkConfig Field Functions 
    bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
    void deleteLarkConfig() { this->larkConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestLarkConfig & larkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, CreateIdentityProviderRequestLarkConfig) };
    inline CreateIdentityProviderRequestLarkConfig larkConfig() { DARABONBA_PTR_GET(larkConfig_, CreateIdentityProviderRequestLarkConfig) };
    inline CreateIdentityProviderRequest& setLarkConfig(const CreateIdentityProviderRequestLarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
    inline CreateIdentityProviderRequest& setLarkConfig(CreateIdentityProviderRequestLarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestLdapConfig & ldapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, CreateIdentityProviderRequestLdapConfig) };
    inline CreateIdentityProviderRequestLdapConfig ldapConfig() { DARABONBA_PTR_GET(ldapConfig_, CreateIdentityProviderRequestLdapConfig) };
    inline CreateIdentityProviderRequest& setLdapConfig(const CreateIdentityProviderRequestLdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline CreateIdentityProviderRequest& setLdapConfig(CreateIdentityProviderRequestLdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline CreateIdentityProviderRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline CreateIdentityProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcConfig Field Functions 
    bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
    void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestOidcConfig & oidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, CreateIdentityProviderRequestOidcConfig) };
    inline CreateIdentityProviderRequestOidcConfig oidcConfig() { DARABONBA_PTR_GET(oidcConfig_, CreateIdentityProviderRequestOidcConfig) };
    inline CreateIdentityProviderRequest& setOidcConfig(const CreateIdentityProviderRequestOidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
    inline CreateIdentityProviderRequest& setOidcConfig(CreateIdentityProviderRequestOidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


    // udPullConfig Field Functions 
    bool hasUdPullConfig() const { return this->udPullConfig_ != nullptr;};
    void deleteUdPullConfig() { this->udPullConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestUdPullConfig & udPullConfig() const { DARABONBA_PTR_GET_CONST(udPullConfig_, CreateIdentityProviderRequestUdPullConfig) };
    inline CreateIdentityProviderRequestUdPullConfig udPullConfig() { DARABONBA_PTR_GET(udPullConfig_, CreateIdentityProviderRequestUdPullConfig) };
    inline CreateIdentityProviderRequest& setUdPullConfig(const CreateIdentityProviderRequestUdPullConfig & udPullConfig) { DARABONBA_PTR_SET_VALUE(udPullConfig_, udPullConfig) };
    inline CreateIdentityProviderRequest& setUdPullConfig(CreateIdentityProviderRequestUdPullConfig && udPullConfig) { DARABONBA_PTR_SET_RVALUE(udPullConfig_, udPullConfig) };


    // udPushConfig Field Functions 
    bool hasUdPushConfig() const { return this->udPushConfig_ != nullptr;};
    void deleteUdPushConfig() { this->udPushConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestUdPushConfig & udPushConfig() const { DARABONBA_PTR_GET_CONST(udPushConfig_, CreateIdentityProviderRequestUdPushConfig) };
    inline CreateIdentityProviderRequestUdPushConfig udPushConfig() { DARABONBA_PTR_GET(udPushConfig_, CreateIdentityProviderRequestUdPushConfig) };
    inline CreateIdentityProviderRequest& setUdPushConfig(const CreateIdentityProviderRequestUdPushConfig & udPushConfig) { DARABONBA_PTR_SET_VALUE(udPushConfig_, udPushConfig) };
    inline CreateIdentityProviderRequest& setUdPushConfig(CreateIdentityProviderRequestUdPushConfig && udPushConfig) { DARABONBA_PTR_SET_RVALUE(udPushConfig_, udPushConfig) };


    // weComConfig Field Functions 
    bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
    void deleteWeComConfig() { this->weComConfig_ = nullptr;};
    inline const CreateIdentityProviderRequestWeComConfig & weComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, CreateIdentityProviderRequestWeComConfig) };
    inline CreateIdentityProviderRequestWeComConfig weComConfig() { DARABONBA_PTR_GET(weComConfig_, CreateIdentityProviderRequestWeComConfig) };
    inline CreateIdentityProviderRequest& setWeComConfig(const CreateIdentityProviderRequestWeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
    inline CreateIdentityProviderRequest& setWeComConfig(CreateIdentityProviderRequestWeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


  protected:
    // Authentication configuration information.
    std::shared_ptr<CreateIdentityProviderRequestAuthnConfig> authnConfig_ = nullptr;
    // Auto-create account rule configuration.
    std::shared_ptr<CreateIdentityProviderRequestAutoCreateUserConfig> autoCreateUserConfig_ = nullptr;
    // Auto-update account rule configuration.
    std::shared_ptr<CreateIdentityProviderRequestAutoUpdateUserConfig> autoUpdateUserConfig_ = nullptr;
    // OIDC identity provider account binding rule configuration.
    std::shared_ptr<CreateIdentityProviderRequestBindingConfig> bindingConfig_ = nullptr;
    // Idp client token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // DingTalk configuration information.
    std::shared_ptr<CreateIdentityProviderRequestDingtalkAppConfig> dingtalkAppConfig_ = nullptr;
    // Identity provider name.
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderName_ = nullptr;
    // Identity provider synchronization type.
    // 
    // - Inbound to DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk:pull
    // 
    // - Outbound to DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk:push
    // 
    // - Inbound to WeCom: urn:alibaba:idaas:idp:tencent:wecom:pull
    // 
    // - Inbound to Lark: urn:alibaba:idaas:idp:bytedance:lark:pull
    // 
    // - Inbound to AD: urn:alibaba:idaas:idp:microsoft:ad:pull
    // 
    // - Inbound to LDAP: urn:alibaba:idaas:idp:unknown:ldap:pull
    // 
    // - Standard OIDC: urn:alibaba:idaas:idp:standard:oidc
    // 
    // - SASE Custom OIDC: urn:alibaba:idaas:idp:alibaba:sase
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderType_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Lark (Feishu) configuration information.
    std::shared_ptr<CreateIdentityProviderRequestLarkConfig> larkConfig_ = nullptr;
    // AD/LDAP configuration information.
    std::shared_ptr<CreateIdentityProviderRequestLdapConfig> ldapConfig_ = nullptr;
    // IdP logo url.
    std::shared_ptr<string> logoUrl_ = nullptr;
    // The unique identifier of the network access endpoint.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC IdP configuration.
    std::shared_ptr<CreateIdentityProviderRequestOidcConfig> oidcConfig_ = nullptr;
    // Inbound synchronization configuration information.
    std::shared_ptr<CreateIdentityProviderRequestUdPullConfig> udPullConfig_ = nullptr;
    // Outbound synchronization configuration information.
    std::shared_ptr<CreateIdentityProviderRequestUdPushConfig> udPushConfig_ = nullptr;
    // WeCom configuration information.
    std::shared_ptr<CreateIdentityProviderRequestWeComConfig> weComConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
