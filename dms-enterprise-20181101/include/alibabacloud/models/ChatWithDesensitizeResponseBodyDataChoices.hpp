// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATACHOICES_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATACHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithDesensitizeResponseBodyDataChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeResponseBodyDataChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeResponseBodyDataChoices& obj) { 
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_ANY_TO_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeResponseBodyDataChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_ANY_FROM_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ChatWithDesensitizeResponseBodyDataChoices() = default ;
    ChatWithDesensitizeResponseBodyDataChoices(const ChatWithDesensitizeResponseBodyDataChoices &) = default ;
    ChatWithDesensitizeResponseBodyDataChoices(ChatWithDesensitizeResponseBodyDataChoices &&) = default ;
    ChatWithDesensitizeResponseBodyDataChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeResponseBodyDataChoices() = default ;
    ChatWithDesensitizeResponseBodyDataChoices& operator=(const ChatWithDesensitizeResponseBodyDataChoices &) = default ;
    ChatWithDesensitizeResponseBodyDataChoices& operator=(ChatWithDesensitizeResponseBodyDataChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishReason_ == nullptr
        && return this->logprobs_ == nullptr && return this->message_ == nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline ChatWithDesensitizeResponseBodyDataChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline     const Darabonba::Json & logprobs() const { DARABONBA_GET(logprobs_) };
    Darabonba::Json & logprobs() { DARABONBA_GET(logprobs_) };
    inline ChatWithDesensitizeResponseBodyDataChoices& setLogprobs(const Darabonba::Json & logprobs) { DARABONBA_SET_VALUE(logprobs_, logprobs) };
    inline ChatWithDesensitizeResponseBodyDataChoices& setLogprobs(Darabonba::Json & logprobs) { DARABONBA_SET_RVALUE(logprobs_, logprobs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::ChatWithDesensitizeResponseBodyDataChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::ChatWithDesensitizeResponseBodyDataChoicesMessage) };
    inline Models::ChatWithDesensitizeResponseBodyDataChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::ChatWithDesensitizeResponseBodyDataChoicesMessage) };
    inline ChatWithDesensitizeResponseBodyDataChoices& setMessage(const Models::ChatWithDesensitizeResponseBodyDataChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline ChatWithDesensitizeResponseBodyDataChoices& setMessage(Models::ChatWithDesensitizeResponseBodyDataChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    Darabonba::Json logprobs_ = nullptr;
    std::shared_ptr<Models::ChatWithDesensitizeResponseBodyDataChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
