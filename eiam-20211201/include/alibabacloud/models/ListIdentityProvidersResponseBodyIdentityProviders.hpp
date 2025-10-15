// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODYIDENTITYPROVIDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODYIDENTITYPROVIDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListIdentityProvidersResponseBodyIdentityProviders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersResponseBodyIdentityProviders& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedStatus, advancedStatus_);
      DARABONBA_PTR_TO_JSON(AuthnSourceSupplier, authnSourceSupplier_);
      DARABONBA_PTR_TO_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_TO_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdentityProviderExternalId, identityProviderExternalId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_TO_JSON(UdPullStatus, udPullStatus_);
      DARABONBA_PTR_TO_JSON(UdPullTargetScope, udPullTargetScope_);
      DARABONBA_PTR_TO_JSON(UdPushStatus, udPushStatus_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersResponseBodyIdentityProviders& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedStatus, advancedStatus_);
      DARABONBA_PTR_FROM_JSON(AuthnSourceSupplier, authnSourceSupplier_);
      DARABONBA_PTR_FROM_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_FROM_JSON(AuthnStatus, authnStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderExternalId, identityProviderExternalId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_FROM_JSON(UdPullStatus, udPullStatus_);
      DARABONBA_PTR_FROM_JSON(UdPullTargetScope, udPullTargetScope_);
      DARABONBA_PTR_FROM_JSON(UdPushStatus, udPushStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListIdentityProvidersResponseBodyIdentityProviders() = default ;
    ListIdentityProvidersResponseBodyIdentityProviders(const ListIdentityProvidersResponseBodyIdentityProviders &) = default ;
    ListIdentityProvidersResponseBodyIdentityProviders(ListIdentityProvidersResponseBodyIdentityProviders &&) = default ;
    ListIdentityProvidersResponseBodyIdentityProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersResponseBodyIdentityProviders() = default ;
    ListIdentityProvidersResponseBodyIdentityProviders& operator=(const ListIdentityProvidersResponseBodyIdentityProviders &) = default ;
    ListIdentityProvidersResponseBodyIdentityProviders& operator=(ListIdentityProvidersResponseBodyIdentityProviders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedStatus_ == nullptr
        && return this->authnSourceSupplier_ == nullptr && return this->authnSourceType_ == nullptr && return this->authnStatus_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->identityProviderExternalId_ == nullptr && return this->identityProviderId_ == nullptr && return this->identityProviderName_ == nullptr && return this->identityProviderType_ == nullptr && return this->incrementalCallbackStatus_ == nullptr
        && return this->instanceId_ == nullptr && return this->lastStatusCheckJobResult_ == nullptr && return this->lockReason_ == nullptr && return this->logoUrl_ == nullptr && return this->periodicSyncStatus_ == nullptr
        && return this->udPullStatus_ == nullptr && return this->udPullTargetScope_ == nullptr && return this->udPushStatus_ == nullptr && return this->updateTime_ == nullptr; };
    // advancedStatus Field Functions 
    bool hasAdvancedStatus() const { return this->advancedStatus_ != nullptr;};
    void deleteAdvancedStatus() { this->advancedStatus_ = nullptr;};
    inline string advancedStatus() const { DARABONBA_PTR_GET_DEFAULT(advancedStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setAdvancedStatus(string advancedStatus) { DARABONBA_PTR_SET_VALUE(advancedStatus_, advancedStatus) };


    // authnSourceSupplier Field Functions 
    bool hasAuthnSourceSupplier() const { return this->authnSourceSupplier_ != nullptr;};
    void deleteAuthnSourceSupplier() { this->authnSourceSupplier_ = nullptr;};
    inline string authnSourceSupplier() const { DARABONBA_PTR_GET_DEFAULT(authnSourceSupplier_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setAuthnSourceSupplier(string authnSourceSupplier) { DARABONBA_PTR_SET_VALUE(authnSourceSupplier_, authnSourceSupplier) };


    // authnSourceType Field Functions 
    bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
    void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
    inline string authnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


    // authnStatus Field Functions 
    bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
    void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
    inline string authnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identityProviderExternalId Field Functions 
    bool hasIdentityProviderExternalId() const { return this->identityProviderExternalId_ != nullptr;};
    void deleteIdentityProviderExternalId() { this->identityProviderExternalId_ = nullptr;};
    inline string identityProviderExternalId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderExternalId_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setIdentityProviderExternalId(string identityProviderExternalId) { DARABONBA_PTR_SET_VALUE(identityProviderExternalId_, identityProviderExternalId) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string identityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastStatusCheckJobResult Field Functions 
    bool hasLastStatusCheckJobResult() const { return this->lastStatusCheckJobResult_ != nullptr;};
    void deleteLastStatusCheckJobResult() { this->lastStatusCheckJobResult_ = nullptr;};
    inline string lastStatusCheckJobResult() const { DARABONBA_PTR_GET_DEFAULT(lastStatusCheckJobResult_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setLastStatusCheckJobResult(string lastStatusCheckJobResult) { DARABONBA_PTR_SET_VALUE(lastStatusCheckJobResult_, lastStatusCheckJobResult) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string logoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string periodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // udPullStatus Field Functions 
    bool hasUdPullStatus() const { return this->udPullStatus_ != nullptr;};
    void deleteUdPullStatus() { this->udPullStatus_ = nullptr;};
    inline string udPullStatus() const { DARABONBA_PTR_GET_DEFAULT(udPullStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setUdPullStatus(string udPullStatus) { DARABONBA_PTR_SET_VALUE(udPullStatus_, udPullStatus) };


    // udPullTargetScope Field Functions 
    bool hasUdPullTargetScope() const { return this->udPullTargetScope_ != nullptr;};
    void deleteUdPullTargetScope() { this->udPullTargetScope_ = nullptr;};
    inline string udPullTargetScope() const { DARABONBA_PTR_GET_DEFAULT(udPullTargetScope_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setUdPullTargetScope(string udPullTargetScope) { DARABONBA_PTR_SET_VALUE(udPullTargetScope_, udPullTargetScope) };


    // udPushStatus Field Functions 
    bool hasUdPushStatus() const { return this->udPushStatus_ != nullptr;};
    void deleteUdPushStatus() { this->udPushStatus_ = nullptr;};
    inline string udPushStatus() const { DARABONBA_PTR_GET_DEFAULT(udPushStatus_, "") };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setUdPushStatus(string udPushStatus) { DARABONBA_PTR_SET_VALUE(udPushStatus_, udPushStatus) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListIdentityProvidersResponseBodyIdentityProviders& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Advanced configuration capabilities
    std::shared_ptr<string> advancedStatus_ = nullptr;
    // Authentication source product.
    // - urn:alibaba:idaas:idp:okta:okta
    // - urn:alibaba:idaas:idp:google:account
    // - urn:alibaba:idaas:idp:microsoft:aad
    // - urn:alibaba:idaas:idp:microsoft:ad
    // - urn:alibaba:idaas:idp:bytedance:lark
    // - urn:alibaba:idaas:idp:unknown:ldap
    // - urn:alibaba:idaas:idp:alibaba:idaas
    // - urn:alibaba:idaas:idp:tencent:wecom
    // - urn:alibaba:idaas:idp:alibaba:aliyunram
    std::shared_ptr<string> authnSourceSupplier_ = nullptr;
    // Authentication method type.
    // - urn:alibaba:idaas:authntype:oidc
    // - urn:alibaba:idaas:authntype:saml2
    std::shared_ptr<string> authnSourceType_ = nullptr;
    // Does the corresponding IdP support authentication.
    std::shared_ptr<string> authnStatus_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the Identity provider.
    std::shared_ptr<string> description_ = nullptr;
    // Identity provider external ID.
    std::shared_ptr<string> identityProviderExternalId_ = nullptr;
    // Identity provider ID.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // Identity provider name.
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
    std::shared_ptr<string> identityProviderType_ = nullptr;
    // Incremental callback status, whether to process the incremental callback data from IdP.
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Last status check result.
    std::shared_ptr<string> lastStatusCheckJobResult_ = nullptr;
    // The reason why write operations are locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // IdP logo url.
    std::shared_ptr<string> logoUrl_ = nullptr;
    // Regular verification status.
    std::shared_ptr<string> periodicSyncStatus_ = nullptr;
    // Whether support UD synchronization.Values:
    // - enabled
    // - disabled
    std::shared_ptr<string> udPullStatus_ = nullptr;
    // When supporting the range in the UD of ud_pullIDaaS side.
    std::shared_ptr<string> udPullTargetScope_ = nullptr;
    // Synchronize capabilities
    std::shared_ptr<string> udPushStatus_ = nullptr;
    // The time when the service was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
