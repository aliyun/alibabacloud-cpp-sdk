// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIDENTITYPROVIDERSCIMCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEIDENTITYPROVIDERSCIMCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteIdentityProviderSCIMCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIdentityProviderSCIMCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIdentityProviderSCIMCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteIdentityProviderSCIMCredentialResponseBody() = default ;
    DeleteIdentityProviderSCIMCredentialResponseBody(const DeleteIdentityProviderSCIMCredentialResponseBody &) = default ;
    DeleteIdentityProviderSCIMCredentialResponseBody(DeleteIdentityProviderSCIMCredentialResponseBody &&) = default ;
    DeleteIdentityProviderSCIMCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIdentityProviderSCIMCredentialResponseBody() = default ;
    DeleteIdentityProviderSCIMCredentialResponseBody& operator=(const DeleteIdentityProviderSCIMCredentialResponseBody &) = default ;
    DeleteIdentityProviderSCIMCredentialResponseBody& operator=(DeleteIdentityProviderSCIMCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteIdentityProviderSCIMCredentialResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteIdentityProviderSCIMCredentialResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteIdentityProviderSCIMCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteIdentityProviderSCIMCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteIdentityProviderSCIMCredentialResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. Handle failures based on the HTTP status code and message.
    shared_ptr<string> code_ {};
    // The HTTP status code of the request. This does not indicate the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned for the request. For asynchronous tasks, query the task result by calling the corresponding API operation.
    shared_ptr<string> message_ {};
    // The request ID. You can use this ID to troubleshoot issues. Keep the ID if the request fails.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. A value of true indicates that the request was successful. For asynchronous write operations, you must still query the task result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
