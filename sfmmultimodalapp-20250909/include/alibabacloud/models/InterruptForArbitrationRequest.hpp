// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERRUPTFORARBITRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTERRUPTFORARBITRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class InterruptForArbitrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterruptForArbitrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(HubRequestId, hubRequestId_);
      DARABONBA_PTR_TO_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, InterruptForArbitrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(HubRequestId, hubRequestId_);
      DARABONBA_PTR_FROM_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    InterruptForArbitrationRequest() = default ;
    InterruptForArbitrationRequest(const InterruptForArbitrationRequest &) = default ;
    InterruptForArbitrationRequest(InterruptForArbitrationRequest &&) = default ;
    InterruptForArbitrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterruptForArbitrationRequest() = default ;
    InterruptForArbitrationRequest& operator=(const InterruptForArbitrationRequest &) = default ;
    InterruptForArbitrationRequest& operator=(InterruptForArbitrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Interrupt : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Interrupt& obj) { 
        DARABONBA_PTR_TO_JSON(Submit, submit_);
      };
      friend void from_json(const Darabonba::Json& j, Interrupt& obj) { 
        DARABONBA_PTR_FROM_JSON(Submit, submit_);
      };
      Interrupt() = default ;
      Interrupt(const Interrupt &) = default ;
      Interrupt(Interrupt &&) = default ;
      Interrupt(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Interrupt() = default ;
      Interrupt& operator=(const Interrupt &) = default ;
      Interrupt& operator=(Interrupt &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->submit_ == nullptr; };
      // submit Field Functions 
      bool hasSubmit() const { return this->submit_ != nullptr;};
      void deleteSubmit() { this->submit_ = nullptr;};
      inline bool getSubmit() const { DARABONBA_PTR_GET_DEFAULT(submit_, false) };
      inline Interrupt& setSubmit(bool submit) { DARABONBA_PTR_SET_VALUE(submit_, submit) };


    protected:
      // This parameter is required.
      shared_ptr<bool> submit_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->chatId_ == nullptr && this->hubRequestId_ == nullptr && this->interrupt_ == nullptr && this->sessionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InterruptForArbitrationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline InterruptForArbitrationRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // hubRequestId Field Functions 
    bool hasHubRequestId() const { return this->hubRequestId_ != nullptr;};
    void deleteHubRequestId() { this->hubRequestId_ = nullptr;};
    inline string getHubRequestId() const { DARABONBA_PTR_GET_DEFAULT(hubRequestId_, "") };
    inline InterruptForArbitrationRequest& setHubRequestId(string hubRequestId) { DARABONBA_PTR_SET_VALUE(hubRequestId_, hubRequestId) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline const InterruptForArbitrationRequest::Interrupt & getInterrupt() const { DARABONBA_PTR_GET_CONST(interrupt_, InterruptForArbitrationRequest::Interrupt) };
    inline InterruptForArbitrationRequest::Interrupt getInterrupt() { DARABONBA_PTR_GET(interrupt_, InterruptForArbitrationRequest::Interrupt) };
    inline InterruptForArbitrationRequest& setInterrupt(const InterruptForArbitrationRequest::Interrupt & interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };
    inline InterruptForArbitrationRequest& setInterrupt(InterruptForArbitrationRequest::Interrupt && interrupt) { DARABONBA_PTR_SET_RVALUE(interrupt_, interrupt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InterruptForArbitrationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> chatId_ {};
    // This parameter is required.
    shared_ptr<string> hubRequestId_ {};
    // This parameter is required.
    shared_ptr<InterruptForArbitrationRequest::Interrupt> interrupt_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
