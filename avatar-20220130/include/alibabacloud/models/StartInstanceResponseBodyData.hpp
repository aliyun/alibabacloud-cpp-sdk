// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartInstanceResponseBodyDataChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class StartInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    StartInstanceResponseBodyData() = default ;
    StartInstanceResponseBodyData(const StartInstanceResponseBodyData &) = default ;
    StartInstanceResponseBodyData(StartInstanceResponseBodyData &&) = default ;
    StartInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceResponseBodyData() = default ;
    StartInstanceResponseBodyData& operator=(const StartInstanceResponseBodyData &) = default ;
    StartInstanceResponseBodyData& operator=(StartInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->requestId_ != nullptr && this->sessionId_ != nullptr && this->token_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const Models::StartInstanceResponseBodyDataChannel & channel() const { DARABONBA_PTR_GET_CONST(channel_, Models::StartInstanceResponseBodyDataChannel) };
    inline Models::StartInstanceResponseBodyDataChannel channel() { DARABONBA_PTR_GET(channel_, Models::StartInstanceResponseBodyDataChannel) };
    inline StartInstanceResponseBodyData& setChannel(const Models::StartInstanceResponseBodyDataChannel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline StartInstanceResponseBodyData& setChannel(Models::StartInstanceResponseBodyDataChannel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartInstanceResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartInstanceResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline StartInstanceResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<Models::StartInstanceResponseBodyDataChannel> channel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
