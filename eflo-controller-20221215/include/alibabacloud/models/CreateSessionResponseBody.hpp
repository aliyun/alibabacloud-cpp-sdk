// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerSn, serverSn_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionToken, sessionToken_);
      DARABONBA_PTR_TO_JSON(WssEndpoint, wssEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerSn, serverSn_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionToken, sessionToken_);
      DARABONBA_PTR_FROM_JSON(WssEndpoint, wssEndpoint_);
    };
    CreateSessionResponseBody() = default ;
    CreateSessionResponseBody(const CreateSessionResponseBody &) = default ;
    CreateSessionResponseBody(CreateSessionResponseBody &&) = default ;
    CreateSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSessionResponseBody() = default ;
    CreateSessionResponseBody& operator=(const CreateSessionResponseBody &) = default ;
    CreateSessionResponseBody& operator=(CreateSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serverSn_ == nullptr && return this->sessionId_ == nullptr && return this->sessionToken_ == nullptr && return this->wssEndpoint_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverSn Field Functions 
    bool hasServerSn() const { return this->serverSn_ != nullptr;};
    void deleteServerSn() { this->serverSn_ = nullptr;};
    inline string serverSn() const { DARABONBA_PTR_GET_DEFAULT(serverSn_, "") };
    inline CreateSessionResponseBody& setServerSn(string serverSn) { DARABONBA_PTR_SET_VALUE(serverSn_, serverSn) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionToken Field Functions 
    bool hasSessionToken() const { return this->sessionToken_ != nullptr;};
    void deleteSessionToken() { this->sessionToken_ = nullptr;};
    inline string sessionToken() const { DARABONBA_PTR_GET_DEFAULT(sessionToken_, "") };
    inline CreateSessionResponseBody& setSessionToken(string sessionToken) { DARABONBA_PTR_SET_VALUE(sessionToken_, sessionToken) };


    // wssEndpoint Field Functions 
    bool hasWssEndpoint() const { return this->wssEndpoint_ != nullptr;};
    void deleteWssEndpoint() { this->wssEndpoint_ = nullptr;};
    inline string wssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(wssEndpoint_, "") };
    inline CreateSessionResponseBody& setWssEndpoint(string wssEndpoint) { DARABONBA_PTR_SET_VALUE(wssEndpoint_, wssEndpoint) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The node ID.
    std::shared_ptr<string> serverSn_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The session credential.
    std::shared_ptr<string> sessionToken_ = nullptr;
    // The WebSocket address.
    std::shared_ptr<string> wssEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
