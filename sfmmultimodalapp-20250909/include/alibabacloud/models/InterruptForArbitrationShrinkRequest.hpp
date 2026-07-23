// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERRUPTFORARBITRATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTERRUPTFORARBITRATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class InterruptForArbitrationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterruptForArbitrationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(HubRequestId, hubRequestId_);
      DARABONBA_PTR_TO_JSON(Interrupt, interruptShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, InterruptForArbitrationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(HubRequestId, hubRequestId_);
      DARABONBA_PTR_FROM_JSON(Interrupt, interruptShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    InterruptForArbitrationShrinkRequest() = default ;
    InterruptForArbitrationShrinkRequest(const InterruptForArbitrationShrinkRequest &) = default ;
    InterruptForArbitrationShrinkRequest(InterruptForArbitrationShrinkRequest &&) = default ;
    InterruptForArbitrationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterruptForArbitrationShrinkRequest() = default ;
    InterruptForArbitrationShrinkRequest& operator=(const InterruptForArbitrationShrinkRequest &) = default ;
    InterruptForArbitrationShrinkRequest& operator=(InterruptForArbitrationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->chatId_ == nullptr && this->hubRequestId_ == nullptr && this->interruptShrink_ == nullptr && this->sessionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InterruptForArbitrationShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline InterruptForArbitrationShrinkRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // hubRequestId Field Functions 
    bool hasHubRequestId() const { return this->hubRequestId_ != nullptr;};
    void deleteHubRequestId() { this->hubRequestId_ = nullptr;};
    inline string getHubRequestId() const { DARABONBA_PTR_GET_DEFAULT(hubRequestId_, "") };
    inline InterruptForArbitrationShrinkRequest& setHubRequestId(string hubRequestId) { DARABONBA_PTR_SET_VALUE(hubRequestId_, hubRequestId) };


    // interruptShrink Field Functions 
    bool hasInterruptShrink() const { return this->interruptShrink_ != nullptr;};
    void deleteInterruptShrink() { this->interruptShrink_ = nullptr;};
    inline string getInterruptShrink() const { DARABONBA_PTR_GET_DEFAULT(interruptShrink_, "") };
    inline InterruptForArbitrationShrinkRequest& setInterruptShrink(string interruptShrink) { DARABONBA_PTR_SET_VALUE(interruptShrink_, interruptShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InterruptForArbitrationShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> chatId_ {};
    // This parameter is required.
    shared_ptr<string> hubRequestId_ {};
    // This parameter is required.
    shared_ptr<string> interruptShrink_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
