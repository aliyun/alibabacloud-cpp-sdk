// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCESSDENIEDDETAIL_HPP_
#define ALIBABACLOUD_MODELS_ACCESSDENIEDDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AccessDeniedDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
      DARABONBA_PTR_TO_JSON(authAction, authAction_);
      DARABONBA_PTR_TO_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_TO_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_TO_JSON(authPrincipalType, authPrincipalType_);
      DARABONBA_PTR_TO_JSON(encodedDiagnosticInfo, encodedDiagnosticInfo_);
      DARABONBA_PTR_TO_JSON(noPermissionType, noPermissionType_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(authAction, authAction_);
      DARABONBA_PTR_FROM_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
      DARABONBA_PTR_FROM_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
      DARABONBA_PTR_FROM_JSON(authPrincipalType, authPrincipalType_);
      DARABONBA_PTR_FROM_JSON(encodedDiagnosticInfo, encodedDiagnosticInfo_);
      DARABONBA_PTR_FROM_JSON(noPermissionType, noPermissionType_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
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
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticInfo_ == nullptr && this->noPermissionType_ == nullptr
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


    // encodedDiagnosticInfo Field Functions 
    bool hasEncodedDiagnosticInfo() const { return this->encodedDiagnosticInfo_ != nullptr;};
    void deleteEncodedDiagnosticInfo() { this->encodedDiagnosticInfo_ = nullptr;};
    inline string getEncodedDiagnosticInfo() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticInfo_, "") };
    inline AccessDeniedDetail& setEncodedDiagnosticInfo(string encodedDiagnosticInfo) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticInfo_, encodedDiagnosticInfo) };


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
    // 被拒绝的 RAM action，如 agentrun:ListTemplates
    shared_ptr<string> authAction_ {};
    // 鉴权主体展示名
    shared_ptr<string> authPrincipalDisplayName_ {};
    // 鉴权主体所属账号 ID
    shared_ptr<string> authPrincipalOwnerId_ {};
    // 鉴权主体类型，如 SubUser、AssumedRoleUser
    shared_ptr<string> authPrincipalType_ {};
    // Base64 编码的诊断信息，可用于 RAM 控制台自诊断
    shared_ptr<string> encodedDiagnosticInfo_ {};
    // 无权限类型：ImplicitDeny 或 ExplicitDeny
    shared_ptr<string> noPermissionType_ {};
    // 策略类型，如 ResourceBasedPolicy、IdentityBasedPolicy
    shared_ptr<string> policyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
