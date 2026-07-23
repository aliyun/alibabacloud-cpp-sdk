// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ChatConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ChatConversationRequest() = default ;
    ChatConversationRequest(const ChatConversationRequest &) = default ;
    ChatConversationRequest(ChatConversationRequest &&) = default ;
    ChatConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatConversationRequest() = default ;
    ChatConversationRequest& operator=(const ChatConversationRequest &) = default ;
    ChatConversationRequest& operator=(ChatConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->content_ == nullptr && this->conversationId_ == nullptr && this->instanceId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ChatConversationRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatConversationRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatConversationRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChatConversationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The additional information input in JSON format.
    shared_ptr<string> config_ {};
    // The message content.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The session ID. If this parameter is not specified, a new session is created. If this parameter is specified, the conversation continues in the context of the existing session.
    shared_ptr<string> conversationId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
