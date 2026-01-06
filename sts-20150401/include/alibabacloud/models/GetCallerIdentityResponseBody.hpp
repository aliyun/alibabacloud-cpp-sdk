// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLERIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCALLERIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sts20150401
{
namespace Models
{
  class GetCallerIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallerIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallerIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetCallerIdentityResponseBody() = default ;
    GetCallerIdentityResponseBody(const GetCallerIdentityResponseBody &) = default ;
    GetCallerIdentityResponseBody(GetCallerIdentityResponseBody &&) = default ;
    GetCallerIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallerIdentityResponseBody() = default ;
    GetCallerIdentityResponseBody& operator=(const GetCallerIdentityResponseBody &) = default ;
    GetCallerIdentityResponseBody& operator=(GetCallerIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->arn_ == nullptr && this->identityType_ == nullptr && this->principalId_ == nullptr && this->requestId_ == nullptr && this->roleId_ == nullptr
        && this->userId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetCallerIdentityResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline GetCallerIdentityResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline GetCallerIdentityResponseBody& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline GetCallerIdentityResponseBody& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCallerIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline GetCallerIdentityResponseBody& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetCallerIdentityResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> arn_ {};
    shared_ptr<string> identityType_ {};
    shared_ptr<string> principalId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> roleId_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sts20150401
#endif
