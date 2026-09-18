// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTCHATSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTCHATSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotChatStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotChatStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotChatStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    KopilotChatStreamRequest() = default ;
    KopilotChatStreamRequest(const KopilotChatStreamRequest &) = default ;
    KopilotChatStreamRequest(KopilotChatStreamRequest &&) = default ;
    KopilotChatStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotChatStreamRequest() = default ;
    KopilotChatStreamRequest& operator=(const KopilotChatStreamRequest &) = default ;
    KopilotChatStreamRequest& operator=(KopilotChatStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->message_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline KopilotChatStreamRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline KopilotChatStreamRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KopilotChatStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline KopilotChatStreamRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The language for system operation prompts. Valid values: zh-CN, en-US, and ja-JP. If not specified, the compatible language parameter is read. If neither is specified, the request language is used. This parameter does not guarantee that the language of freely generated model content will change.
    shared_ptr<string> acceptLanguage_ {};
    // The chat message content entered by the user.
    shared_ptr<string> message_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
