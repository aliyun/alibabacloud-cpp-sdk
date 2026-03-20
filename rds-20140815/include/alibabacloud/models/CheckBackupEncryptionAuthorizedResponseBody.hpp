// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBACKUPENCRYPTIONAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKBACKUPENCRYPTIONAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckBackupEncryptionAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBackupEncryptionAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBackupEncryptionAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
    };
    CheckBackupEncryptionAuthorizedResponseBody() = default ;
    CheckBackupEncryptionAuthorizedResponseBody(const CheckBackupEncryptionAuthorizedResponseBody &) = default ;
    CheckBackupEncryptionAuthorizedResponseBody(CheckBackupEncryptionAuthorizedResponseBody &&) = default ;
    CheckBackupEncryptionAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBackupEncryptionAuthorizedResponseBody() = default ;
    CheckBackupEncryptionAuthorizedResponseBody& operator=(const CheckBackupEncryptionAuthorizedResponseBody &) = default ;
    CheckBackupEncryptionAuthorizedResponseBody& operator=(CheckBackupEncryptionAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationState_ == nullptr
        && this->requestId_ == nullptr && this->roleARN_ == nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline string getAuthorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, "") };
    inline CheckBackupEncryptionAuthorizedResponseBody& setAuthorizationState(string authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckBackupEncryptionAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline CheckBackupEncryptionAuthorizedResponseBody& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


  protected:
    shared_ptr<string> authorizationState_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> roleARN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
