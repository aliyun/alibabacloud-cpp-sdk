// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTRESPONSEBODYRESULTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InviteSubAccountResponseBodyResultsResultResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountResponseBodyResultsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountResponseBodyResultsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InviteSubAccountResponseBodyResultsResult() = default ;
    InviteSubAccountResponseBodyResultsResult(const InviteSubAccountResponseBodyResultsResult &) = default ;
    InviteSubAccountResponseBodyResultsResult(InviteSubAccountResponseBodyResultsResult &&) = default ;
    InviteSubAccountResponseBodyResultsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountResponseBodyResultsResult() = default ;
    InviteSubAccountResponseBodyResultsResult& operator=(const InviteSubAccountResponseBodyResultsResult &) = default ;
    InviteSubAccountResponseBodyResultsResult& operator=(InviteSubAccountResponseBodyResultsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->result_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InviteSubAccountResponseBodyResultsResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InviteSubAccountResponseBodyResultsResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::InviteSubAccountResponseBodyResultsResultResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::InviteSubAccountResponseBodyResultsResultResult) };
    inline Models::InviteSubAccountResponseBodyResultsResultResult result() { DARABONBA_PTR_GET(result_, Models::InviteSubAccountResponseBodyResultsResultResult) };
    inline InviteSubAccountResponseBodyResultsResult& setResult(const Models::InviteSubAccountResponseBodyResultsResultResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline InviteSubAccountResponseBodyResultsResult& setResult(Models::InviteSubAccountResponseBodyResultsResultResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InviteSubAccountResponseBodyResultsResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error Code, 200 OK
    std::shared_ptr<string> code_ = nullptr;
    // Message, Notes of Code
    std::shared_ptr<string> message_ = nullptr;
    // Returning Message of Invitation Results
    std::shared_ptr<Models::InviteSubAccountResponseBodyResultsResultResult> result_ = nullptr;
    // Always true.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
