// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEBACKUPENCRYPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEBACKUPENCRYPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AuthorizeBackupEncryptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeBackupEncryptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeBackupEncryptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
    };
    AuthorizeBackupEncryptionResponseBody() = default ;
    AuthorizeBackupEncryptionResponseBody(const AuthorizeBackupEncryptionResponseBody &) = default ;
    AuthorizeBackupEncryptionResponseBody(AuthorizeBackupEncryptionResponseBody &&) = default ;
    AuthorizeBackupEncryptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeBackupEncryptionResponseBody() = default ;
    AuthorizeBackupEncryptionResponseBody& operator=(const AuthorizeBackupEncryptionResponseBody &) = default ;
    AuthorizeBackupEncryptionResponseBody& operator=(AuthorizeBackupEncryptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationState_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->roleARN_ == nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline int32_t getAuthorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, 0) };
    inline AuthorizeBackupEncryptionResponseBody& setAuthorizationState(int32_t authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthorizeBackupEncryptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthorizeBackupEncryptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline AuthorizeBackupEncryptionResponseBody& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


  protected:
    shared_ptr<int32_t> authorizationState_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> roleARN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
