// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAVATARSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTAVATARSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class StartAvatarSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAvatarSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(channelToken, channelToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(webSocketUrl, webSocketUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartAvatarSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(channelToken, channelToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(webSocketUrl, webSocketUrl_);
    };
    StartAvatarSessionResponseBody() = default ;
    StartAvatarSessionResponseBody(const StartAvatarSessionResponseBody &) = default ;
    StartAvatarSessionResponseBody(StartAvatarSessionResponseBody &&) = default ;
    StartAvatarSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAvatarSessionResponseBody() = default ;
    StartAvatarSessionResponseBody& operator=(const StartAvatarSessionResponseBody &) = default ;
    StartAvatarSessionResponseBody& operator=(StartAvatarSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelToken_ == nullptr
        && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->token_ == nullptr && this->webSocketUrl_ == nullptr; };
    // channelToken Field Functions 
    bool hasChannelToken() const { return this->channelToken_ != nullptr;};
    void deleteChannelToken() { this->channelToken_ = nullptr;};
    inline string getChannelToken() const { DARABONBA_PTR_GET_DEFAULT(channelToken_, "") };
    inline StartAvatarSessionResponseBody& setChannelToken(string channelToken) { DARABONBA_PTR_SET_VALUE(channelToken_, channelToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartAvatarSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAvatarSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline StartAvatarSessionResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // webSocketUrl Field Functions 
    bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
    void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
    inline string getWebSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
    inline StartAvatarSessionResponseBody& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


  protected:
    shared_ptr<string> channelToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> webSocketUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
