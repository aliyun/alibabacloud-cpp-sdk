// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDAIAGENTDATACHANNELMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDAIAGENTDATACHANNELMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendAIAgentDataChannelMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAIAgentDataChannelMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SendAIAgentDataChannelMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    SendAIAgentDataChannelMessageRequest() = default ;
    SendAIAgentDataChannelMessageRequest(const SendAIAgentDataChannelMessageRequest &) = default ;
    SendAIAgentDataChannelMessageRequest(SendAIAgentDataChannelMessageRequest &&) = default ;
    SendAIAgentDataChannelMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAIAgentDataChannelMessageRequest() = default ;
    SendAIAgentDataChannelMessageRequest& operator=(const SendAIAgentDataChannelMessageRequest &) = default ;
    SendAIAgentDataChannelMessageRequest& operator=(SendAIAgentDataChannelMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->message_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendAIAgentDataChannelMessageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendAIAgentDataChannelMessageRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The ID of the AI agent in the conversation.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The DataChannel message you want to send. You must specify a JSON string. The value can be up to 8,192 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
