// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODYFAILURESFAILURES_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODYFAILURESFAILURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures(const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures(PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures &&) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& operator=(const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& operator=(PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The response code. Valid values:
    // 
    // *   **200**: success
    // *   **400**: client error
    // *   **401**: identity authentication failed
    // *   **404**: requested page not found
    // *   **500**: server error
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
