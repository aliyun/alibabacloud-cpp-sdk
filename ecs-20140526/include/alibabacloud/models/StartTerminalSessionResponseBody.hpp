// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTERMINALSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTTERMINALSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartTerminalSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTerminalSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WebSocketUrl, webSocketUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartTerminalSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WebSocketUrl, webSocketUrl_);
    };
    StartTerminalSessionResponseBody() = default ;
    StartTerminalSessionResponseBody(const StartTerminalSessionResponseBody &) = default ;
    StartTerminalSessionResponseBody(StartTerminalSessionResponseBody &&) = default ;
    StartTerminalSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTerminalSessionResponseBody() = default ;
    StartTerminalSessionResponseBody& operator=(const StartTerminalSessionResponseBody &) = default ;
    StartTerminalSessionResponseBody& operator=(StartTerminalSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->securityToken_ == nullptr && return this->sessionId_ == nullptr && return this->webSocketUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartTerminalSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline StartTerminalSessionResponseBody& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartTerminalSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // webSocketUrl Field Functions 
    bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
    void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
    inline string webSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
    inline StartTerminalSessionResponseBody& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The URL of the WebSocket session that is used to connect to the instance. The URL includes the session ID (`SessionId`) and the authentication token (`SecurityToken`).
    std::shared_ptr<string> webSocketUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
