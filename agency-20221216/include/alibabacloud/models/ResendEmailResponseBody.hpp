// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDEMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESENDEMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ResendEmailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendEmailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ResendEmailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ResendEmailResponseBody() = default ;
    ResendEmailResponseBody(const ResendEmailResponseBody &) = default ;
    ResendEmailResponseBody(ResendEmailResponseBody &&) = default ;
    ResendEmailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendEmailResponseBody() = default ;
    ResendEmailResponseBody& operator=(const ResendEmailResponseBody &) = default ;
    ResendEmailResponseBody& operator=(ResendEmailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResendEmailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResendEmailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResendEmailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ResendEmailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code.
    // Error code. Valid values:
    // - 200: OK.
    // - 1109: System error.
    // - 3058: Emails are sent too frequently. A maximum of 10 emails can be sent within 5 minutes.
    // - 3057: InviteId is empty.
    // - 3060: No sending record found for the specified InviteId.
    // - 3061: The registration URL has expired and the email cannot be resent.
    shared_ptr<string> code_ {};
    // The result message.
    shared_ptr<string> message_ {};
    // The request ID. A unique identifier that Alibaba Cloud generates for the request.
    shared_ptr<string> requestId_ {};
    // Valid values: True/False. Indicates whether the current API call itself is successful. This does not indicate the success of subsequent business operations.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
