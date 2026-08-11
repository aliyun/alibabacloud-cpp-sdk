// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(ParentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(EventMode, eventMode_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
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
        DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ThinkEffort, thinkEffort_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ThinkEffort, thinkEffort_);
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
        && this->enableThinking_ == nullptr && this->language_ == nullptr && this->modelId_ == nullptr && this->regionId_ == nullptr && this->thinkEffort_ == nullptr
        && this->timezone_ == nullptr; };
      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline Inputs& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // enableThinking Field Functions 
      bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
      void deleteEnableThinking() { this->enableThinking_ = nullptr;};
      inline string getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, "") };
      inline Inputs& setEnableThinking(string enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Inputs& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Inputs& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Inputs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // thinkEffort Field Functions 
      bool hasThinkEffort() const { return this->thinkEffort_ != nullptr;};
      void deleteThinkEffort() { this->thinkEffort_ = nullptr;};
      inline string getThinkEffort() const { DARABONBA_PTR_GET_DEFAULT(thinkEffort_, "") };
      inline Inputs& setThinkEffort(string thinkEffort) { DARABONBA_PTR_SET_VALUE(thinkEffort_, thinkEffort) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Inputs& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    protected:
      // The user-specific agent ID.
      shared_ptr<string> customAgentId_ {};
      shared_ptr<string> enableThinking_ {};
      // The conversation language.
      shared_ptr<string> language_ {};
      shared_ptr<string> modelId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> thinkEffort_ {};
      // The time zone. Default value: **Asia/Shanghai**.
      shared_ptr<string> timezone_ {};
    };

    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(TransferMethod, transferMethod_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UploadFileId, uploadFileId_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(TransferMethod, transferMethod_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UploadFileId, uploadFileId_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->transferMethod_ == nullptr
        && this->type_ == nullptr && this->uploadFileId_ == nullptr; };
      // transferMethod Field Functions 
      bool hasTransferMethod() const { return this->transferMethod_ != nullptr;};
      void deleteTransferMethod() { this->transferMethod_ = nullptr;};
      inline string getTransferMethod() const { DARABONBA_PTR_GET_DEFAULT(transferMethod_, "") };
      inline Files& setTransferMethod(string transferMethod) { DARABONBA_PTR_SET_VALUE(transferMethod_, transferMethod) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Files& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uploadFileId Field Functions 
      bool hasUploadFileId() const { return this->uploadFileId_ != nullptr;};
      void deleteUploadFileId() { this->uploadFileId_ = nullptr;};
      inline string getUploadFileId() const { DARABONBA_PTR_GET_DEFAULT(uploadFileId_, "") };
      inline Files& setUploadFileId(string uploadFileId) { DARABONBA_PTR_SET_VALUE(uploadFileId_, uploadFileId) };


    protected:
      shared_ptr<string> transferMethod_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uploadFileId_ {};
    };

    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->eventMode_ == nullptr && this->files_ == nullptr && this->inputs_ == nullptr && this->parentMessageId_ == nullptr && this->query_ == nullptr; };
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


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ChatMessagesRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<ChatMessagesRequest::Files>) };
    inline vector<ChatMessagesRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<ChatMessagesRequest::Files>) };
    inline ChatMessagesRequest& setFiles(const vector<ChatMessagesRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ChatMessagesRequest& setFiles(vector<ChatMessagesRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


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
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The event output type. Valid values: inline and separate. Default value: inline. When set to inline, tool invocation events, sub-node events, and document events are included in the answer field of event = message. When set to separate, tool invocation events, sub-node events, and document events each have their own event.
    shared_ptr<string> eventMode_ {};
    shared_ptr<vector<ChatMessagesRequest::Files>> files_ {};
    // The task input.
    shared_ptr<ChatMessagesRequest::Inputs> inputs_ {};
    // The parent message ID.
    shared_ptr<string> parentMessageId_ {};
    // The query content.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
