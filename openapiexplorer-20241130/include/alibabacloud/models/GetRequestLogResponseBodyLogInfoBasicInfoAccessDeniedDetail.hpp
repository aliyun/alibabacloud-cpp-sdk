// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFOACCESSDENIEDDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOBASICINFOACCESSDENIEDDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& obj) { 
      DARABONBA_PTR_TO_JSON(authAction, authAction_);
      DARABONBA_PTR_TO_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_TO_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_TO_JSON(authPrincipalType, authPrincipalType_);
      DARABONBA_PTR_TO_JSON(encodedDiagnosticMessage, encodedDiagnosticMessage_);
      DARABONBA_PTR_TO_JSON(noPermissionType, noPermissionType_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(authAction, authAction_);
      DARABONBA_PTR_FROM_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_FROM_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_FROM_JSON(authPrincipalType, authPrincipalType_);
      DARABONBA_PTR_FROM_JSON(encodedDiagnosticMessage, encodedDiagnosticMessage_);
      DARABONBA_PTR_FROM_JSON(noPermissionType, noPermissionType_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
    };
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail(const GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail(GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail &&) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& operator=(const GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail &) = default ;
    GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& operator=(GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authAction_ == nullptr
        && return this->authPrincipalDisplayName_ == nullptr && return this->authPrincipalOwnerId_ == nullptr && return this->authPrincipalType_ == nullptr && return this->encodedDiagnosticMessage_ == nullptr && return this->noPermissionType_ == nullptr
        && return this->policyType_ == nullptr; };
    // authAction Field Functions 
    bool hasAuthAction() const { return this->authAction_ != nullptr;};
    void deleteAuthAction() { this->authAction_ = nullptr;};
    inline string authAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


    // authPrincipalDisplayName Field Functions 
    bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
    void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
    inline string authPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


    // authPrincipalOwnerId Field Functions 
    bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
    void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
    inline string authPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


    // authPrincipalType Field Functions 
    bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
    void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
    inline string authPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


    // encodedDiagnosticMessage Field Functions 
    bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
    void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
    inline string encodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


    // noPermissionType Field Functions 
    bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
    void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
    inline string noPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The operation that the operator does not have permissions to perform.
    std::shared_ptr<string> authAction_ = nullptr;
    // The identity.
    std::shared_ptr<string> authPrincipalDisplayName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the current identity belongs.
    std::shared_ptr<string> authPrincipalOwnerId_ = nullptr;
    // The identity type of the operator.
    std::shared_ptr<string> authPrincipalType_ = nullptr;
    // The information after encoding, which can be used for troubleshooting. You can call the DecodeDiagnosticMessage operation of Resource Access Management (RAM) for further diagnostics.
    std::shared_ptr<string> encodedDiagnosticMessage_ = nullptr;
    // The cause of the permission-related error.
    std::shared_ptr<string> noPermissionType_ = nullptr;
    // The type of the policy that causes the permission-related error.
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
