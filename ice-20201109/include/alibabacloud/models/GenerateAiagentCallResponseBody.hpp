// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAIAGENTCALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateAIAgentCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAIAgentCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentUserId, AIAgentUserId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAIAgentCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentUserId, AIAgentUserId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateAIAgentCallResponseBody() = default ;
    GenerateAIAgentCallResponseBody(const GenerateAIAgentCallResponseBody &) = default ;
    GenerateAIAgentCallResponseBody(GenerateAIAgentCallResponseBody &&) = default ;
    GenerateAIAgentCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAIAgentCallResponseBody() = default ;
    GenerateAIAgentCallResponseBody& operator=(const GenerateAIAgentCallResponseBody &) = default ;
    GenerateAIAgentCallResponseBody& operator=(GenerateAIAgentCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentUserId_ != nullptr
        && this->channelId_ != nullptr && this->instanceId_ != nullptr && this->requestId_ != nullptr && this->token_ != nullptr && this->userId_ != nullptr; };
    // AIAgentUserId Field Functions 
    bool hasAIAgentUserId() const { return this->AIAgentUserId_ != nullptr;};
    void deleteAIAgentUserId() { this->AIAgentUserId_ = nullptr;};
    inline string AIAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentUserId_, "") };
    inline GenerateAIAgentCallResponseBody& setAIAgentUserId(string AIAgentUserId) { DARABONBA_PTR_SET_VALUE(AIAgentUserId_, AIAgentUserId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GenerateAIAgentCallResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateAIAgentCallResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAIAgentCallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateAIAgentCallResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateAIAgentCallResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The username of the AI agent in the Alibaba Real-Time Communication (ARTC) channel.
    std::shared_ptr<string> AIAgentUserId_ = nullptr;
    // The ARTC channel ID.
    std::shared_ptr<string> channelId_ = nullptr;
    // The ID of the AI agent.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ARTC token of the client.
    std::shared_ptr<string> token_ = nullptr;
    // The username in the ARTC channel.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
