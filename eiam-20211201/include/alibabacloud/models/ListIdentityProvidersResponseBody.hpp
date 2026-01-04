// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListIdentityProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody(ListIdentityProvidersResponseBody &&) = default ;
    ListIdentityProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody& operator=(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody& operator=(ListIdentityProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProviders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProviders& obj) { 
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
      friend void from_json(const Darabonba::Json& j, IdentityProviders& obj) { 
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
      IdentityProviders() = default ;
      IdentityProviders(const IdentityProviders &) = default ;
      IdentityProviders(IdentityProviders &&) = default ;
      IdentityProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProviders() = default ;
      IdentityProviders& operator=(const IdentityProviders &) = default ;
      IdentityProviders& operator=(IdentityProviders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advancedStatus_ == nullptr
        && this->authnSourceSupplier_ == nullptr && this->authnSourceType_ == nullptr && this->authnStatus_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->identityProviderExternalId_ == nullptr && this->identityProviderId_ == nullptr && this->identityProviderName_ == nullptr && this->identityProviderType_ == nullptr && this->incrementalCallbackStatus_ == nullptr
        && this->instanceId_ == nullptr && this->lastStatusCheckJobResult_ == nullptr && this->lockReason_ == nullptr && this->logoUrl_ == nullptr && this->periodicSyncStatus_ == nullptr
        && this->udPullStatus_ == nullptr && this->udPullTargetScope_ == nullptr && this->udPushStatus_ == nullptr && this->updateTime_ == nullptr; };
      // advancedStatus Field Functions 
      bool hasAdvancedStatus() const { return this->advancedStatus_ != nullptr;};
      void deleteAdvancedStatus() { this->advancedStatus_ = nullptr;};
      inline string getAdvancedStatus() const { DARABONBA_PTR_GET_DEFAULT(advancedStatus_, "") };
      inline IdentityProviders& setAdvancedStatus(string advancedStatus) { DARABONBA_PTR_SET_VALUE(advancedStatus_, advancedStatus) };


      // authnSourceSupplier Field Functions 
      bool hasAuthnSourceSupplier() const { return this->authnSourceSupplier_ != nullptr;};
      void deleteAuthnSourceSupplier() { this->authnSourceSupplier_ = nullptr;};
      inline string getAuthnSourceSupplier() const { DARABONBA_PTR_GET_DEFAULT(authnSourceSupplier_, "") };
      inline IdentityProviders& setAuthnSourceSupplier(string authnSourceSupplier) { DARABONBA_PTR_SET_VALUE(authnSourceSupplier_, authnSourceSupplier) };


      // authnSourceType Field Functions 
      bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
      void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
      inline string getAuthnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
      inline IdentityProviders& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


      // authnStatus Field Functions 
      bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
      void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
      inline string getAuthnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
      inline IdentityProviders& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline IdentityProviders& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IdentityProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // identityProviderExternalId Field Functions 
      bool hasIdentityProviderExternalId() const { return this->identityProviderExternalId_ != nullptr;};
      void deleteIdentityProviderExternalId() { this->identityProviderExternalId_ = nullptr;};
      inline string getIdentityProviderExternalId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderExternalId_, "") };
      inline IdentityProviders& setIdentityProviderExternalId(string identityProviderExternalId) { DARABONBA_PTR_SET_VALUE(identityProviderExternalId_, identityProviderExternalId) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline IdentityProviders& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline IdentityProviders& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline IdentityProviders& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // incrementalCallbackStatus Field Functions 
      bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
      void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
      inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
      inline IdentityProviders& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdentityProviders& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastStatusCheckJobResult Field Functions 
      bool hasLastStatusCheckJobResult() const { return this->lastStatusCheckJobResult_ != nullptr;};
      void deleteLastStatusCheckJobResult() { this->lastStatusCheckJobResult_ = nullptr;};
      inline string getLastStatusCheckJobResult() const { DARABONBA_PTR_GET_DEFAULT(lastStatusCheckJobResult_, "") };
      inline IdentityProviders& setLastStatusCheckJobResult(string lastStatusCheckJobResult) { DARABONBA_PTR_SET_VALUE(lastStatusCheckJobResult_, lastStatusCheckJobResult) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline IdentityProviders& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline IdentityProviders& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // periodicSyncStatus Field Functions 
      bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
      void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
      inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
      inline IdentityProviders& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


      // udPullStatus Field Functions 
      bool hasUdPullStatus() const { return this->udPullStatus_ != nullptr;};
      void deleteUdPullStatus() { this->udPullStatus_ = nullptr;};
      inline string getUdPullStatus() const { DARABONBA_PTR_GET_DEFAULT(udPullStatus_, "") };
      inline IdentityProviders& setUdPullStatus(string udPullStatus) { DARABONBA_PTR_SET_VALUE(udPullStatus_, udPullStatus) };


      // udPullTargetScope Field Functions 
      bool hasUdPullTargetScope() const { return this->udPullTargetScope_ != nullptr;};
      void deleteUdPullTargetScope() { this->udPullTargetScope_ = nullptr;};
      inline string getUdPullTargetScope() const { DARABONBA_PTR_GET_DEFAULT(udPullTargetScope_, "") };
      inline IdentityProviders& setUdPullTargetScope(string udPullTargetScope) { DARABONBA_PTR_SET_VALUE(udPullTargetScope_, udPullTargetScope) };


      // udPushStatus Field Functions 
      bool hasUdPushStatus() const { return this->udPushStatus_ != nullptr;};
      void deleteUdPushStatus() { this->udPushStatus_ = nullptr;};
      inline string getUdPushStatus() const { DARABONBA_PTR_GET_DEFAULT(udPushStatus_, "") };
      inline IdentityProviders& setUdPushStatus(string udPushStatus) { DARABONBA_PTR_SET_VALUE(udPushStatus_, udPushStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline IdentityProviders& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Advanced configuration capabilities
      shared_ptr<string> advancedStatus_ {};
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
      shared_ptr<string> authnSourceSupplier_ {};
      // Authentication method type.
      // - urn:alibaba:idaas:authntype:oidc
      // - urn:alibaba:idaas:authntype:saml2
      shared_ptr<string> authnSourceType_ {};
      // Does the corresponding IdP support authentication.
      shared_ptr<string> authnStatus_ {};
      // The time when the instance was created.
      shared_ptr<int64_t> createTime_ {};
      // The description of the Identity provider.
      shared_ptr<string> description_ {};
      // Identity provider external ID.
      shared_ptr<string> identityProviderExternalId_ {};
      // Identity provider ID.
      shared_ptr<string> identityProviderId_ {};
      // Identity provider name.
      shared_ptr<string> identityProviderName_ {};
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
      shared_ptr<string> identityProviderType_ {};
      // Incremental callback status, whether to process the incremental callback data from IdP.
      shared_ptr<string> incrementalCallbackStatus_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Last status check result.
      shared_ptr<string> lastStatusCheckJobResult_ {};
      // The reason why write operations are locked.
      shared_ptr<string> lockReason_ {};
      // IdP logo url.
      shared_ptr<string> logoUrl_ {};
      // Regular verification status.
      shared_ptr<string> periodicSyncStatus_ {};
      // Whether support UD synchronization.Values:
      // - enabled
      // - disabled
      shared_ptr<string> udPullStatus_ {};
      // When supporting the range in the UD of ud_pullIDaaS side.
      shared_ptr<string> udPullTargetScope_ {};
      // Synchronize capabilities
      shared_ptr<string> udPushStatus_ {};
      // The time when the service was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->identityProviders_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identityProviders Field Functions 
    bool hasIdentityProviders() const { return this->identityProviders_ != nullptr;};
    void deleteIdentityProviders() { this->identityProviders_ = nullptr;};
    inline const vector<ListIdentityProvidersResponseBody::IdentityProviders> & getIdentityProviders() const { DARABONBA_PTR_GET_CONST(identityProviders_, vector<ListIdentityProvidersResponseBody::IdentityProviders>) };
    inline vector<ListIdentityProvidersResponseBody::IdentityProviders> getIdentityProviders() { DARABONBA_PTR_GET(identityProviders_, vector<ListIdentityProvidersResponseBody::IdentityProviders>) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(const vector<ListIdentityProvidersResponseBody::IdentityProviders> & identityProviders) { DARABONBA_PTR_SET_VALUE(identityProviders_, identityProviders) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(vector<ListIdentityProvidersResponseBody::IdentityProviders> && identityProviders) { DARABONBA_PTR_SET_RVALUE(identityProviders_, identityProviders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProvidersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Identity provider information array.
    shared_ptr<vector<ListIdentityProvidersResponseBody::IdentityProviders>> identityProviders_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
