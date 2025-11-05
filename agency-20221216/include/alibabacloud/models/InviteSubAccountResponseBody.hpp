// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InviteSubAccountResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InviteSubAccountResponseBody() = default ;
    InviteSubAccountResponseBody(const InviteSubAccountResponseBody &) = default ;
    InviteSubAccountResponseBody(InviteSubAccountResponseBody &&) = default ;
    InviteSubAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountResponseBody() = default ;
    InviteSubAccountResponseBody& operator=(const InviteSubAccountResponseBody &) = default ;
    InviteSubAccountResponseBody& operator=(InviteSubAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InviteSubAccountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InviteSubAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InviteSubAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const InviteSubAccountResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, InviteSubAccountResponseBodyResults) };
    inline InviteSubAccountResponseBodyResults results() { DARABONBA_PTR_GET(results_, InviteSubAccountResponseBodyResults) };
    inline InviteSubAccountResponseBody& setResults(const InviteSubAccountResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline InviteSubAccountResponseBody& setResults(InviteSubAccountResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InviteSubAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error Code: </br>
    // • 200 OK</br>
    // • 1109 System Error</br>
    std::shared_ptr<string> code_ = nullptr;
    // Message</br>
    std::shared_ptr<string> message_ = nullptr;
    // Request ID, Alibaba Cloud will track errors with this ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of invitation sending results
    std::shared_ptr<InviteSubAccountResponseBodyResults> results_ = nullptr;
    // Candidate Values: True/False, this value states if the current API calling action is successful. It does not guarantee the success of subsequent business operations.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
