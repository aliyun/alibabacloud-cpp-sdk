// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOACMECHALLENGERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOACMECHALLENGERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody() = default ;
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody(const CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody &) = default ;
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody(CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody &&) = default ;
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody() = default ;
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& operator=(const CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody &) = default ;
    CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& operator=(CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The unauthorized operation that was attempted.
      shared_ptr<string> authAction_ {};
      // The display name of the authorization principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authorization principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The identity type.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded complete diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The reason for the authentication failure. Valid values:
      // - ExplicitDeny: explicit deny.
      // - ImplicitDeny: implicit deny.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->agentRegisterInfoId_ == nullptr && this->createTimestamp_ == nullptr && this->expireTimestamp_ == nullptr && this->recordName_ == nullptr && this->recordType_ == nullptr
        && this->recordValue_ == nullptr && this->requestId_ == nullptr && this->updateTimestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail) };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail) };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setAccessDeniedDetail(const CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setAccessDeniedDetail(CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // agentRegisterInfoId Field Functions 
    bool hasAgentRegisterInfoId() const { return this->agentRegisterInfoId_ != nullptr;};
    void deleteAgentRegisterInfoId() { this->agentRegisterInfoId_ = nullptr;};
    inline string getAgentRegisterInfoId() const { DARABONBA_PTR_GET_DEFAULT(agentRegisterInfoId_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setAgentRegisterInfoId(string agentRegisterInfoId) { DARABONBA_PTR_SET_VALUE(agentRegisterInfoId_, agentRegisterInfoId) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline string getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setCreateTimestamp(string createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline string getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setExpireTimestamp(string expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // recordValue Field Functions 
    bool hasRecordValue() const { return this->recordValue_ != nullptr;};
    void deleteRecordValue() { this->recordValue_ = nullptr;};
    inline string getRecordValue() const { DARABONBA_PTR_GET_DEFAULT(recordValue_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setRecordValue(string recordValue) { DARABONBA_PTR_SET_VALUE(recordValue_, recordValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline string getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, "") };
    inline CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody& setUpdateTimestamp(string updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The details of the access denial. This field is returned only when RAM authentication fails.
    shared_ptr<CreateAtiAgentRegisterInfoAcmeChallengeRecordResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The agent registration ID. This ID is automatically generated by the Alibaba Cloud ATS platform and is globally unique within the platform. It is automatically generated during the agent registration process. In the multi-step API registration process, this ID must be carried throughout to ensure that all steps are associated with the same agent and the complete registration process is fulfilled.
    shared_ptr<string> agentRegisterInfoId_ {};
    // The creation time (timestamp).
    shared_ptr<string> createTimestamp_ {};
    // The UNIX timestamp when the instance expires.
    shared_ptr<string> expireTimestamp_ {};
    // The host record of the DNS record for domain ownership verification.
    shared_ptr<string> recordName_ {};
    // The DNS record type for domain ownership verification. The value is typically TXT.
    shared_ptr<string> recordType_ {};
    // The record value of the DNS record for domain ownership verification.
    shared_ptr<string> recordValue_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The update time (timestamp).
    shared_ptr<string> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
