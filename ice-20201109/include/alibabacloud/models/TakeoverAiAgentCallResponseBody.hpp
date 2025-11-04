// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAKEOVERAIAGENTCALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TAKEOVERAIAGENTCALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class TakeoverAIAgentCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TakeoverAIAgentCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(HumanAgentUserId, humanAgentUserId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, TakeoverAIAgentCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(HumanAgentUserId, humanAgentUserId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    TakeoverAIAgentCallResponseBody() = default ;
    TakeoverAIAgentCallResponseBody(const TakeoverAIAgentCallResponseBody &) = default ;
    TakeoverAIAgentCallResponseBody(TakeoverAIAgentCallResponseBody &&) = default ;
    TakeoverAIAgentCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TakeoverAIAgentCallResponseBody() = default ;
    TakeoverAIAgentCallResponseBody& operator=(const TakeoverAIAgentCallResponseBody &) = default ;
    TakeoverAIAgentCallResponseBody& operator=(TakeoverAIAgentCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->humanAgentUserId_ == nullptr && return this->requestId_ == nullptr && return this->token_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline TakeoverAIAgentCallResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // humanAgentUserId Field Functions 
    bool hasHumanAgentUserId() const { return this->humanAgentUserId_ != nullptr;};
    void deleteHumanAgentUserId() { this->humanAgentUserId_ = nullptr;};
    inline string humanAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(humanAgentUserId_, "") };
    inline TakeoverAIAgentCallResponseBody& setHumanAgentUserId(string humanAgentUserId) { DARABONBA_PTR_SET_VALUE(humanAgentUserId_, humanAgentUserId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TakeoverAIAgentCallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline TakeoverAIAgentCallResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The ID of the ARTC channel.
    std::shared_ptr<string> channelId_ = nullptr;
    // The ID of the human agent.
    std::shared_ptr<string> humanAgentUserId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ARTC token.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
