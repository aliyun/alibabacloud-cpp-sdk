// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody(GetSecretValueResponseBody &&) = default ;
    GetSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretValueResponseBody() = default ;
    GetSecretValueResponseBody& operator=(const GetSecretValueResponseBody &) = default ;
    GetSecretValueResponseBody& operator=(GetSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->DBInstanceId_ == nullptr && this->description_ == nullptr && this->message_ == nullptr && this->password_ == nullptr && this->requestId_ == nullptr
        && this->secretArn_ == nullptr && this->secretName_ == nullptr && this->status_ == nullptr && this->username_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecretValueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline GetSecretValueResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSecretValueResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecretValueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetSecretValueResponseBody& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string getSecretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline GetSecretValueResponseBody& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline GetSecretValueResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSecretValueResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetSecretValueResponseBody& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The description of the access credential.
    shared_ptr<string> description_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The password of the database account.
    shared_ptr<string> password_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ARN of the access credential for the created Data API account. Format: `acs:gpdb:{{region}}:{{accountId}}:secret/{{secretName}}-{{32 digits random string}`.
    shared_ptr<string> secretArn_ {};
    // The name of the access credential.
    shared_ptr<string> secretName_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
    // The name of the database account.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
