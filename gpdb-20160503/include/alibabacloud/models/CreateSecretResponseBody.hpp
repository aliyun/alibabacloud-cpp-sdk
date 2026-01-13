// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateSecretResponseBody() = default ;
    CreateSecretResponseBody(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody(CreateSecretResponseBody &&) = default ;
    CreateSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretResponseBody() = default ;
    CreateSecretResponseBody& operator=(const CreateSecretResponseBody &) = default ;
    CreateSecretResponseBody& operator=(CreateSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->secretArn_ == nullptr && this->secretName_ == nullptr && this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSecretResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string getSecretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline CreateSecretResponseBody& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline CreateSecretResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateSecretResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Alibaba Cloud Resource Name (ARN) of the access credential for the created Data API account. Format: `acs:gpdb:{{region}}:{{accountId}}:secret/{{secretName}}-{{32 digits random string}`.
    shared_ptr<string> secretArn_ {};
    // The name of the access credential.
    shared_ptr<string> secretName_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
