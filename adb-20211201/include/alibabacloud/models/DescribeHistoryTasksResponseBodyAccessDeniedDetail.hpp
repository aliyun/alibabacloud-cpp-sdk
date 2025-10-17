// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODYACCESSDENIEDDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSRESPONSEBODYACCESSDENIEDDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeHistoryTasksResponseBodyAccessDeniedDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryTasksResponseBodyAccessDeniedDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
      DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
      DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
      DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryTasksResponseBodyAccessDeniedDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
      DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
      DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
      DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    DescribeHistoryTasksResponseBodyAccessDeniedDetail() = default ;
    DescribeHistoryTasksResponseBodyAccessDeniedDetail(const DescribeHistoryTasksResponseBodyAccessDeniedDetail &) = default ;
    DescribeHistoryTasksResponseBodyAccessDeniedDetail(DescribeHistoryTasksResponseBodyAccessDeniedDetail &&) = default ;
    DescribeHistoryTasksResponseBodyAccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryTasksResponseBodyAccessDeniedDetail() = default ;
    DescribeHistoryTasksResponseBodyAccessDeniedDetail& operator=(const DescribeHistoryTasksResponseBodyAccessDeniedDetail &) = default ;
    DescribeHistoryTasksResponseBodyAccessDeniedDetail& operator=(DescribeHistoryTasksResponseBodyAccessDeniedDetail &&) = default ;
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
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


    // authPrincipalDisplayName Field Functions 
    bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
    void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
    inline string authPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


    // authPrincipalOwnerId Field Functions 
    bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
    void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
    inline string authPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


    // authPrincipalType Field Functions 
    bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
    void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
    inline string authPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


    // encodedDiagnosticMessage Field Functions 
    bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
    void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
    inline string encodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


    // noPermissionType Field Functions 
    bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
    void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
    inline string noPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeHistoryTasksResponseBodyAccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    std::shared_ptr<string> authAction_ = nullptr;
    std::shared_ptr<string> authPrincipalDisplayName_ = nullptr;
    std::shared_ptr<string> authPrincipalOwnerId_ = nullptr;
    std::shared_ptr<string> authPrincipalType_ = nullptr;
    std::shared_ptr<string> encodedDiagnosticMessage_ = nullptr;
    std::shared_ptr<string> noPermissionType_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
