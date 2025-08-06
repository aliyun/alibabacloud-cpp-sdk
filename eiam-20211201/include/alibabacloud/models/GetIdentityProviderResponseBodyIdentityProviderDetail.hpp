// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedStatus, advancedStatus_);
      DARABONBA_PTR_TO_JSON(AuthnSourceSupplier, authnSourceSupplier_);
      DARABONBA_PTR_TO_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_TO_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_TO_JSON(DingtalkProvisioningConfig, dingtalkProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderExternalId, identityProviderExternalId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_TO_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_TO_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_TO_JSON(UdPullStatus, udPullStatus_);
      DARABONBA_PTR_TO_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_TO_JSON(UdPushStatus, udPushStatus_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedStatus, advancedStatus_);
      DARABONBA_PTR_FROM_JSON(AuthnSourceSupplier, authnSourceSupplier_);
      DARABONBA_PTR_FROM_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_FROM_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_FROM_JSON(DingtalkProvisioningConfig, dingtalkProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderExternalId, identityProviderExternalId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_FROM_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_FROM_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_FROM_JSON(UdPullStatus, udPullStatus_);
      DARABONBA_PTR_FROM_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_FROM_JSON(UdPushStatus, udPushStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetail() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetail(const GetIdentityProviderResponseBodyIdentityProviderDetail &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetail(GetIdentityProviderResponseBodyIdentityProviderDetail &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetail() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetail& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetail &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetail& operator=(GetIdentityProviderResponseBodyIdentityProviderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedStatus_ != nullptr
        && this->authnSourceSupplier_ != nullptr && this->authnSourceType_ != nullptr && this->authnStatus_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr
        && this->dingtalkAppConfig_ != nullptr && this->dingtalkProvisioningConfig_ != nullptr && this->identityProviderExternalId_ != nullptr && this->identityProviderId_ != nullptr && this->identityProviderName_ != nullptr
        && this->identityProviderType_ != nullptr && this->instanceId_ != nullptr && this->larkConfig_ != nullptr && this->lastStatusCheckJobResult_ != nullptr && this->ldapConfig_ != nullptr
        && this->lockReason_ != nullptr && this->logoUrl_ != nullptr && this->networkAccessEndpointId_ != nullptr && this->oidcConfig_ != nullptr && this->udPullConfig_ != nullptr
        && this->udPullStatus_ != nullptr && this->udPushConfig_ != nullptr && this->udPushStatus_ != nullptr && this->updateTime_ != nullptr && this->weComConfig_ != nullptr; };
    // advancedStatus Field Functions 
    bool hasAdvancedStatus() const { return this->advancedStatus_ != nullptr;};
    void deleteAdvancedStatus() { this->advancedStatus_ = nullptr;};
    inline string advancedStatus() const { DARABONBA_PTR_GET_DEFAULT(advancedStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setAdvancedStatus(string advancedStatus) { DARABONBA_PTR_SET_VALUE(advancedStatus_, advancedStatus) };


    // authnSourceSupplier Field Functions 
    bool hasAuthnSourceSupplier() const { return this->authnSourceSupplier_ != nullptr;};
    void deleteAuthnSourceSupplier() { this->authnSourceSupplier_ = nullptr;};
    inline string authnSourceSupplier() const { DARABONBA_PTR_GET_DEFAULT(authnSourceSupplier_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setAuthnSourceSupplier(string authnSourceSupplier) { DARABONBA_PTR_SET_VALUE(authnSourceSupplier_, authnSourceSupplier) };


    // authnSourceType Field Functions 
    bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
    void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
    inline string authnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


    // authnStatus Field Functions 
    bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
    void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
    inline string authnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dingtalkAppConfig Field Functions 
    bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
    void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig & dingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig dingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setDingtalkAppConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setDingtalkAppConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


    // dingtalkProvisioningConfig Field Functions 
    bool hasDingtalkProvisioningConfig() const { return this->dingtalkProvisioningConfig_ != nullptr;};
    void deleteDingtalkProvisioningConfig() { this->dingtalkProvisioningConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig & dingtalkProvisioningConfig() const { DARABONBA_PTR_GET_CONST(dingtalkProvisioningConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig dingtalkProvisioningConfig() { DARABONBA_PTR_GET(dingtalkProvisioningConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setDingtalkProvisioningConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig & dingtalkProvisioningConfig) { DARABONBA_PTR_SET_VALUE(dingtalkProvisioningConfig_, dingtalkProvisioningConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setDingtalkProvisioningConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig && dingtalkProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkProvisioningConfig_, dingtalkProvisioningConfig) };


    // identityProviderExternalId Field Functions 
    bool hasIdentityProviderExternalId() const { return this->identityProviderExternalId_ != nullptr;};
    void deleteIdentityProviderExternalId() { this->identityProviderExternalId_ = nullptr;};
    inline string identityProviderExternalId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderExternalId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setIdentityProviderExternalId(string identityProviderExternalId) { DARABONBA_PTR_SET_VALUE(identityProviderExternalId_, identityProviderExternalId) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string identityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // larkConfig Field Functions 
    bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
    void deleteLarkConfig() { this->larkConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig & larkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig larkConfig() { DARABONBA_PTR_GET(larkConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLarkConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLarkConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


    // lastStatusCheckJobResult Field Functions 
    bool hasLastStatusCheckJobResult() const { return this->lastStatusCheckJobResult_ != nullptr;};
    void deleteLastStatusCheckJobResult() { this->lastStatusCheckJobResult_ = nullptr;};
    inline string lastStatusCheckJobResult() const { DARABONBA_PTR_GET_DEFAULT(lastStatusCheckJobResult_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLastStatusCheckJobResult(string lastStatusCheckJobResult) { DARABONBA_PTR_SET_VALUE(lastStatusCheckJobResult_, lastStatusCheckJobResult) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig & ldapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig ldapConfig() { DARABONBA_PTR_GET(ldapConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLdapConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLdapConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcConfig Field Functions 
    bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
    void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig & oidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig oidcConfig() { DARABONBA_PTR_GET(oidcConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setOidcConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setOidcConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


    // udPullConfig Field Functions 
    bool hasUdPullConfig() const { return this->udPullConfig_ != nullptr;};
    void deleteUdPullConfig() { this->udPullConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig & udPullConfig() const { DARABONBA_PTR_GET_CONST(udPullConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig udPullConfig() { DARABONBA_PTR_GET(udPullConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPullConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig & udPullConfig) { DARABONBA_PTR_SET_VALUE(udPullConfig_, udPullConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPullConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig && udPullConfig) { DARABONBA_PTR_SET_RVALUE(udPullConfig_, udPullConfig) };


    // udPullStatus Field Functions 
    bool hasUdPullStatus() const { return this->udPullStatus_ != nullptr;};
    void deleteUdPullStatus() { this->udPullStatus_ = nullptr;};
    inline string udPullStatus() const { DARABONBA_PTR_GET_DEFAULT(udPullStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPullStatus(string udPullStatus) { DARABONBA_PTR_SET_VALUE(udPullStatus_, udPullStatus) };


    // udPushConfig Field Functions 
    bool hasUdPushConfig() const { return this->udPushConfig_ != nullptr;};
    void deleteUdPushConfig() { this->udPushConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig & udPushConfig() const { DARABONBA_PTR_GET_CONST(udPushConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig udPushConfig() { DARABONBA_PTR_GET(udPushConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPushConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig & udPushConfig) { DARABONBA_PTR_SET_VALUE(udPushConfig_, udPushConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPushConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig && udPushConfig) { DARABONBA_PTR_SET_RVALUE(udPushConfig_, udPushConfig) };


    // udPushStatus Field Functions 
    bool hasUdPushStatus() const { return this->udPushStatus_ != nullptr;};
    void deleteUdPushStatus() { this->udPushStatus_ = nullptr;};
    inline string udPushStatus() const { DARABONBA_PTR_GET_DEFAULT(udPushStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUdPushStatus(string udPushStatus) { DARABONBA_PTR_SET_VALUE(udPushStatus_, udPushStatus) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // weComConfig Field Functions 
    bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
    void deleteWeComConfig() { this->weComConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig & weComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig weComConfig() { DARABONBA_PTR_GET(weComConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setWeComConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail& setWeComConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


  protected:
    // Advanced configuration capability. 
    // Value range:  
    // Disabled: disabled  
    // Enable: enabled
    std::shared_ptr<string> advancedStatus_ = nullptr;
    // The corresponding identity provider product, e.g., Okta, Google, or Azure AD. Possible values:
    // 
    // DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk
    // 
    // LDAP: urn:alibaba:idaas:idp:unknown:ldap
    // 
    // Alibaba Cloud IDaaS: urn:alibaba:idaas:idp:alibaba:idaas
    // 
    // WeCom (Enterprise WeChat): urn:alibaba:idaas:idp:tencent:wecom
    // 
    // Lark (Feishu): urn:alibaba:idaas:idp:bytedance:lark
    // 
    // Active Directory: urn:alibaba:idaas:idp:microsoft:ad
    // 
    // Azure Active Directory: urn:alibaba:idaas:idp:microsoft:aad
    // 
    // Alibaba Cloud SASE: urn:alibaba:idaas:idp:alibaba:sase
    std::shared_ptr<string> authnSourceSupplier_ = nullptr;
    // Authentication type — OIDC or SAML. Possible values:
    // 
    // OIDC: urn:alibaba:idaas:authntype:oidc
    // 
    // SAML: urn:alibaba:idaas:authntype:saml2
    std::shared_ptr<string> authnSourceType_ = nullptr;
    // Whether the corresponding IdP supports authentication. Value range: 
    // Disabled: disabled  
    // Enabled: enabled
    std::shared_ptr<string> authnStatus_ = nullptr;
    // The time when the version was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Identity provider description.
    std::shared_ptr<string> description_ = nullptr;
    // DingTalk Basic Configuration
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkAppConfig> dingtalkAppConfig_ = nullptr;
    // DingTalk synchronous configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig> dingtalkProvisioningConfig_ = nullptr;
    // Identity provider external ID.
    std::shared_ptr<string> identityProviderExternalId_ = nullptr;
    // Identity provider ID.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // Identity provider name.
    std::shared_ptr<string> identityProviderName_ = nullptr;
    // Identity provider type.
    std::shared_ptr<string> identityProviderType_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Lark configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailLarkConfig> larkConfig_ = nullptr;
    // Last status check result.
    std::shared_ptr<string> lastStatusCheckJobResult_ = nullptr;
    // AD/LDAP Identity provider information.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig> ldapConfig_ = nullptr;
    // The reason why write operations on the instance are locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The URL of the application logo.
    std::shared_ptr<string> logoUrl_ = nullptr;
    // The unique identifier of the network access endpoint.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC IdP configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig> oidcConfig_ = nullptr;
    // Sync in configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig> udPullConfig_ = nullptr;
    // Indicates whether the IDaaS EIAM system supports UD (User Directory) synchronization.
    std::shared_ptr<string> udPullStatus_ = nullptr;
    // Outbound synchronization configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig> udPushConfig_ = nullptr;
    // Outbound synchronization capability.
    std::shared_ptr<string> udPushStatus_ = nullptr;
    // The time when the serviceInstance  was last updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // WeCom configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailWeComConfig> weComConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
