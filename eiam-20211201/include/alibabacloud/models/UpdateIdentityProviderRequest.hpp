// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestDingtalkAppConfig.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestLarkConfig.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestLdapConfig.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestOidcConfig.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestWeComConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
    };
    UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest(UpdateIdentityProviderRequest &&) = default ;
    UpdateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequest() = default ;
    UpdateIdentityProviderRequest& operator=(const UpdateIdentityProviderRequest &) = default ;
    UpdateIdentityProviderRequest& operator=(UpdateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dingtalkAppConfig_ == nullptr && return this->identityProviderId_ == nullptr && return this->identityProviderName_ == nullptr && return this->instanceId_ == nullptr && return this->larkConfig_ == nullptr
        && return this->ldapConfig_ == nullptr && return this->logoUrl_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->oidcConfig_ == nullptr && return this->weComConfig_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIdentityProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dingtalkAppConfig Field Functions 
    bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
    void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequestDingtalkAppConfig & dingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, UpdateIdentityProviderRequestDingtalkAppConfig) };
    inline UpdateIdentityProviderRequestDingtalkAppConfig dingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, UpdateIdentityProviderRequestDingtalkAppConfig) };
    inline UpdateIdentityProviderRequest& setDingtalkAppConfig(const UpdateIdentityProviderRequestDingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
    inline UpdateIdentityProviderRequest& setDingtalkAppConfig(UpdateIdentityProviderRequestDingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline UpdateIdentityProviderRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline UpdateIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateIdentityProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // larkConfig Field Functions 
    bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
    void deleteLarkConfig() { this->larkConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequestLarkConfig & larkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, UpdateIdentityProviderRequestLarkConfig) };
    inline UpdateIdentityProviderRequestLarkConfig larkConfig() { DARABONBA_PTR_GET(larkConfig_, UpdateIdentityProviderRequestLarkConfig) };
    inline UpdateIdentityProviderRequest& setLarkConfig(const UpdateIdentityProviderRequestLarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
    inline UpdateIdentityProviderRequest& setLarkConfig(UpdateIdentityProviderRequestLarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequestLdapConfig & ldapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, UpdateIdentityProviderRequestLdapConfig) };
    inline UpdateIdentityProviderRequestLdapConfig ldapConfig() { DARABONBA_PTR_GET(ldapConfig_, UpdateIdentityProviderRequestLdapConfig) };
    inline UpdateIdentityProviderRequest& setLdapConfig(const UpdateIdentityProviderRequestLdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline UpdateIdentityProviderRequest& setLdapConfig(UpdateIdentityProviderRequestLdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline UpdateIdentityProviderRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline UpdateIdentityProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcConfig Field Functions 
    bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
    void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequestOidcConfig & oidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, UpdateIdentityProviderRequestOidcConfig) };
    inline UpdateIdentityProviderRequestOidcConfig oidcConfig() { DARABONBA_PTR_GET(oidcConfig_, UpdateIdentityProviderRequestOidcConfig) };
    inline UpdateIdentityProviderRequest& setOidcConfig(const UpdateIdentityProviderRequestOidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
    inline UpdateIdentityProviderRequest& setOidcConfig(UpdateIdentityProviderRequestOidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


    // weComConfig Field Functions 
    bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
    void deleteWeComConfig() { this->weComConfig_ = nullptr;};
    inline const UpdateIdentityProviderRequestWeComConfig & weComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, UpdateIdentityProviderRequestWeComConfig) };
    inline UpdateIdentityProviderRequestWeComConfig weComConfig() { DARABONBA_PTR_GET(weComConfig_, UpdateIdentityProviderRequestWeComConfig) };
    inline UpdateIdentityProviderRequest& setWeComConfig(const UpdateIdentityProviderRequestWeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
    inline UpdateIdentityProviderRequest& setWeComConfig(UpdateIdentityProviderRequestWeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // 钉钉出基本信息
    std::shared_ptr<UpdateIdentityProviderRequestDingtalkAppConfig> dingtalkAppConfig_ = nullptr;
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // 身份提供方名称
    std::shared_ptr<string> identityProviderName_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 飞书配置
    std::shared_ptr<UpdateIdentityProviderRequestLarkConfig> larkConfig_ = nullptr;
    // AD/LDAP基本信息
    std::shared_ptr<UpdateIdentityProviderRequestLdapConfig> ldapConfig_ = nullptr;
    std::shared_ptr<string> logoUrl_ = nullptr;
    // 网络端点ID
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC IdP配置。
    std::shared_ptr<UpdateIdentityProviderRequestOidcConfig> oidcConfig_ = nullptr;
    // 企业微信基本信息
    std::shared_ptr<UpdateIdentityProviderRequestWeComConfig> weComConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
