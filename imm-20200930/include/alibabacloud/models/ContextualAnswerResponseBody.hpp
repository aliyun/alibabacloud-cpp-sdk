// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTEXTUALANSWERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTEXTUALANSWERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Answer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ContextualAnswerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContextualAnswerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ContextualAnswerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ContextualAnswerResponseBody() = default ;
    ContextualAnswerResponseBody(const ContextualAnswerResponseBody &) = default ;
    ContextualAnswerResponseBody(ContextualAnswerResponseBody &&) = default ;
    ContextualAnswerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContextualAnswerResponseBody() = default ;
    ContextualAnswerResponseBody& operator=(const ContextualAnswerResponseBody &) = default ;
    ContextualAnswerResponseBody& operator=(ContextualAnswerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline const Answer & answer() const { DARABONBA_PTR_GET_CONST(answer_, Answer) };
    inline Answer answer() { DARABONBA_PTR_GET(answer_, Answer) };
    inline ContextualAnswerResponseBody& setAnswer(const Answer & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
    inline ContextualAnswerResponseBody& setAnswer(Answer && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ContextualAnswerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ContextualAnswerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContextualAnswerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Content of the response from the large model.
    std::shared_ptr<Answer> answer_ = nullptr;
    // Error code.
    std::shared_ptr<string> code_ = nullptr;
    // Error message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
