// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYERROR_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYERROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatResponseBodyError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatResponseBodyError& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatResponseBodyError& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    LlmStreamChatResponseBodyError() = default ;
    LlmStreamChatResponseBodyError(const LlmStreamChatResponseBodyError &) = default ;
    LlmStreamChatResponseBodyError(LlmStreamChatResponseBodyError &&) = default ;
    LlmStreamChatResponseBodyError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatResponseBodyError() = default ;
    LlmStreamChatResponseBodyError& operator=(const LlmStreamChatResponseBodyError &) = default ;
    LlmStreamChatResponseBodyError& operator=(LlmStreamChatResponseBodyError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->param_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline LlmStreamChatResponseBodyError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LlmStreamChatResponseBodyError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline LlmStreamChatResponseBodyError& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LlmStreamChatResponseBodyError& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Error code
    std::shared_ptr<string> code_ = nullptr;
    // Error message
    std::shared_ptr<string> message_ = nullptr;
    // Parameter that caused the error
    std::shared_ptr<string> param_ = nullptr;
    // Error type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
