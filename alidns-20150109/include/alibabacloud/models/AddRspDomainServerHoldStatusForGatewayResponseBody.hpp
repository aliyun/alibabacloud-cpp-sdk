// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRSPDOMAINSERVERHOLDSTATUSFORGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDRSPDOMAINSERVERHOLDSTATUSFORGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddRspDomainServerHoldStatusForGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRspDomainServerHoldStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddRspDomainServerHoldStatusForGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecoverableError, recoverableError_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddRspDomainServerHoldStatusForGatewayResponseBody() = default ;
    AddRspDomainServerHoldStatusForGatewayResponseBody(const AddRspDomainServerHoldStatusForGatewayResponseBody &) = default ;
    AddRspDomainServerHoldStatusForGatewayResponseBody(AddRspDomainServerHoldStatusForGatewayResponseBody &&) = default ;
    AddRspDomainServerHoldStatusForGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRspDomainServerHoldStatusForGatewayResponseBody() = default ;
    AddRspDomainServerHoldStatusForGatewayResponseBody& operator=(const AddRspDomainServerHoldStatusForGatewayResponseBody &) = default ;
    AddRspDomainServerHoldStatusForGatewayResponseBody& operator=(AddRspDomainServerHoldStatusForGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      shared_ptr<string> domainName_ {};
    };

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
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->recoverableError_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setAccessDeniedDetail(const AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setAccessDeniedDetail(AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddRspDomainServerHoldStatusForGatewayResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddRspDomainServerHoldStatusForGatewayResponseBody::Data) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddRspDomainServerHoldStatusForGatewayResponseBody::Data) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setData(const AddRspDomainServerHoldStatusForGatewayResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setData(AddRspDomainServerHoldStatusForGatewayResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recoverableError Field Functions 
    bool hasRecoverableError() const { return this->recoverableError_ != nullptr;};
    void deleteRecoverableError() { this->recoverableError_ = nullptr;};
    inline bool getRecoverableError() const { DARABONBA_PTR_GET_DEFAULT(recoverableError_, false) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setRecoverableError(bool recoverableError) { DARABONBA_PTR_SET_VALUE(recoverableError_, recoverableError) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddRspDomainServerHoldStatusForGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<AddRspDomainServerHoldStatusForGatewayResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<AddRspDomainServerHoldStatusForGatewayResponseBody::Data> data_ {};
    shared_ptr<bool> recoverableError_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
