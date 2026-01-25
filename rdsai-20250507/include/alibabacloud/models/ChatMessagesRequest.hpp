// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ChatMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(EventMode, eventMode_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(EventMode, eventMode_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ChatMessagesRequest() = default ;
    ChatMessagesRequest(const ChatMessagesRequest &) = default ;
    ChatMessagesRequest(ChatMessagesRequest &&) = default ;
    ChatMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatMessagesRequest() = default ;
    ChatMessagesRequest& operator=(const ChatMessagesRequest &) = default ;
    ChatMessagesRequest& operator=(ChatMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Inputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      };
      Inputs() = default ;
      Inputs(const Inputs &) = default ;
      Inputs(Inputs &&) = default ;
      Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Inputs() = default ;
      Inputs& operator=(const Inputs &) = default ;
      Inputs& operator=(Inputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->language_ == nullptr && this->regionId_ == nullptr && this->timezone_ == nullptr; };
      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline Inputs& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Inputs& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Inputs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Inputs& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    protected:
      shared_ptr<string> customAgentId_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> timezone_ {};
    };

    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->eventMode_ == nullptr && this->inputs_ == nullptr && this->parentMessageId_ == nullptr && this->query_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // eventMode Field Functions 
    bool hasEventMode() const { return this->eventMode_ != nullptr;};
    void deleteEventMode() { this->eventMode_ = nullptr;};
    inline string getEventMode() const { DARABONBA_PTR_GET_DEFAULT(eventMode_, "") };
    inline ChatMessagesRequest& setEventMode(string eventMode) { DARABONBA_PTR_SET_VALUE(eventMode_, eventMode) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const ChatMessagesRequest::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, ChatMessagesRequest::Inputs) };
    inline ChatMessagesRequest::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, ChatMessagesRequest::Inputs) };
    inline ChatMessagesRequest& setInputs(const ChatMessagesRequest::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ChatMessagesRequest& setInputs(ChatMessagesRequest::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string getParentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline ChatMessagesRequest& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ChatMessagesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The query content.
    shared_ptr<string> conversationId_ {};
    shared_ptr<string> eventMode_ {};
    // The ID of the parent message.
    shared_ptr<ChatMessagesRequest::Inputs> inputs_ {};
    // The ID of the conversation.
    shared_ptr<string> parentMessageId_ {};
    // The operation that you want to perform. Set the value to **ChatMessages**.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
