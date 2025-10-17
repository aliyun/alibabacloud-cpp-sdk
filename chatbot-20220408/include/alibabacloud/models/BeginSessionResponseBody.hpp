// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BEGINSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BEGINSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class BeginSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BeginSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsrMaxEndSilence, asrMaxEndSilence_);
      DARABONBA_PTR_TO_JSON(Interruptible, interruptible_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SilenceReplyTimeout, silenceReplyTimeout_);
      DARABONBA_PTR_TO_JSON(WelcomeMessage, welcomeMessage_);
    };
    friend void from_json(const Darabonba::Json& j, BeginSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrMaxEndSilence, asrMaxEndSilence_);
      DARABONBA_PTR_FROM_JSON(Interruptible, interruptible_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SilenceReplyTimeout, silenceReplyTimeout_);
      DARABONBA_PTR_FROM_JSON(WelcomeMessage, welcomeMessage_);
    };
    BeginSessionResponseBody() = default ;
    BeginSessionResponseBody(const BeginSessionResponseBody &) = default ;
    BeginSessionResponseBody(BeginSessionResponseBody &&) = default ;
    BeginSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BeginSessionResponseBody() = default ;
    BeginSessionResponseBody& operator=(const BeginSessionResponseBody &) = default ;
    BeginSessionResponseBody& operator=(BeginSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrMaxEndSilence_ == nullptr
        && return this->interruptible_ == nullptr && return this->requestId_ == nullptr && return this->silenceReplyTimeout_ == nullptr && return this->welcomeMessage_ == nullptr; };
    // asrMaxEndSilence Field Functions 
    bool hasAsrMaxEndSilence() const { return this->asrMaxEndSilence_ != nullptr;};
    void deleteAsrMaxEndSilence() { this->asrMaxEndSilence_ = nullptr;};
    inline int32_t asrMaxEndSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxEndSilence_, 0) };
    inline BeginSessionResponseBody& setAsrMaxEndSilence(int32_t asrMaxEndSilence) { DARABONBA_PTR_SET_VALUE(asrMaxEndSilence_, asrMaxEndSilence) };


    // interruptible Field Functions 
    bool hasInterruptible() const { return this->interruptible_ != nullptr;};
    void deleteInterruptible() { this->interruptible_ = nullptr;};
    inline bool interruptible() const { DARABONBA_PTR_GET_DEFAULT(interruptible_, false) };
    inline BeginSessionResponseBody& setInterruptible(bool interruptible) { DARABONBA_PTR_SET_VALUE(interruptible_, interruptible) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BeginSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // silenceReplyTimeout Field Functions 
    bool hasSilenceReplyTimeout() const { return this->silenceReplyTimeout_ != nullptr;};
    void deleteSilenceReplyTimeout() { this->silenceReplyTimeout_ = nullptr;};
    inline int32_t silenceReplyTimeout() const { DARABONBA_PTR_GET_DEFAULT(silenceReplyTimeout_, 0) };
    inline BeginSessionResponseBody& setSilenceReplyTimeout(int32_t silenceReplyTimeout) { DARABONBA_PTR_SET_VALUE(silenceReplyTimeout_, silenceReplyTimeout) };


    // welcomeMessage Field Functions 
    bool hasWelcomeMessage() const { return this->welcomeMessage_ != nullptr;};
    void deleteWelcomeMessage() { this->welcomeMessage_ = nullptr;};
    inline string welcomeMessage() const { DARABONBA_PTR_GET_DEFAULT(welcomeMessage_, "") };
    inline BeginSessionResponseBody& setWelcomeMessage(string welcomeMessage) { DARABONBA_PTR_SET_VALUE(welcomeMessage_, welcomeMessage) };


  protected:
    std::shared_ptr<int32_t> asrMaxEndSilence_ = nullptr;
    std::shared_ptr<bool> interruptible_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // 静默超时时间
    std::shared_ptr<int32_t> silenceReplyTimeout_ = nullptr;
    std::shared_ptr<string> welcomeMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
