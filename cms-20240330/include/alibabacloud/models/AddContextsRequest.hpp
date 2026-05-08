// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTEXTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTEXTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddContextsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContextsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(memoryType, memoryType_);
    };
    friend void from_json(const Darabonba::Json& j, AddContextsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(memoryType, memoryType_);
    };
    AddContextsRequest() = default ;
    AddContextsRequest(const AddContextsRequest &) = default ;
    AddContextsRequest(AddContextsRequest &&) = default ;
    AddContextsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContextsRequest() = default ;
    AddContextsRequest& operator=(const AddContextsRequest &) = default ;
    AddContextsRequest& operator=(AddContextsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(categories, categories_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(customInstructions, customInstructions_);
        DARABONBA_ANY_TO_JSON(experience, experience_);
        DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
        DARABONBA_PTR_TO_JSON(immutable, immutable_);
        DARABONBA_PTR_TO_JSON(infer, infer_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(messages, messages_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(triggerCondition, triggerCondition_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(categories, categories_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(customInstructions, customInstructions_);
        DARABONBA_ANY_FROM_JSON(experience, experience_);
        DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
        DARABONBA_PTR_FROM_JSON(immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(infer, infer_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(messages, messages_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(triggerCondition, triggerCondition_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->categories_ == nullptr && this->content_ == nullptr && this->customInstructions_ == nullptr && this->experience_ == nullptr
        && this->expirationDate_ == nullptr && this->immutable_ == nullptr && this->infer_ == nullptr && this->labels_ == nullptr && this->messages_ == nullptr
        && this->metadata_ == nullptr && this->runId_ == nullptr && this->timestamp_ == nullptr && this->triggerCondition_ == nullptr && this->userId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Items& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Items& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Items& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // customInstructions Field Functions 
      bool hasCustomInstructions() const { return this->customInstructions_ != nullptr;};
      void deleteCustomInstructions() { this->customInstructions_ = nullptr;};
      inline string getCustomInstructions() const { DARABONBA_PTR_GET_DEFAULT(customInstructions_, "") };
      inline Items& setCustomInstructions(string customInstructions) { DARABONBA_PTR_SET_VALUE(customInstructions_, customInstructions) };


      // experience Field Functions 
      bool hasExperience() const { return this->experience_ != nullptr;};
      void deleteExperience() { this->experience_ = nullptr;};
      inline       const Darabonba::Json & getExperience() const { DARABONBA_GET(experience_) };
      Darabonba::Json & getExperience() { DARABONBA_GET(experience_) };
      inline Items& setExperience(const Darabonba::Json & experience) { DARABONBA_SET_VALUE(experience_, experience) };
      inline Items& setExperience(Darabonba::Json && experience) { DARABONBA_SET_RVALUE(experience_, experience) };


      // expirationDate Field Functions 
      bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
      void deleteExpirationDate() { this->expirationDate_ = nullptr;};
      inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
      inline Items& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


      // immutable Field Functions 
      bool hasImmutable() const { return this->immutable_ != nullptr;};
      void deleteImmutable() { this->immutable_ = nullptr;};
      inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
      inline Items& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


      // infer Field Functions 
      bool hasInfer() const { return this->infer_ != nullptr;};
      void deleteInfer() { this->infer_ = nullptr;};
      inline bool getInfer() const { DARABONBA_PTR_GET_DEFAULT(infer_, false) };
      inline Items& setInfer(bool infer) { DARABONBA_PTR_SET_VALUE(infer_, infer) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Items& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Items& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Darabonba::Json> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getMessages() { DARABONBA_PTR_GET(messages_, vector<Darabonba::Json>) };
      inline Items& setMessages(const vector<Darabonba::Json> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Items& setMessages(vector<Darabonba::Json> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Items& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Items& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Items& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Items& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // triggerCondition Field Functions 
      bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
      void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
      inline string getTriggerCondition() const { DARABONBA_PTR_GET_DEFAULT(triggerCondition_, "") };
      inline Items& setTriggerCondition(string triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Items& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> appId_ {};
      shared_ptr<vector<string>> categories_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> customInstructions_ {};
      Darabonba::Json experience_ {};
      shared_ptr<string> expirationDate_ {};
      shared_ptr<bool> immutable_ {};
      shared_ptr<bool> infer_ {};
      shared_ptr<map<string, string>> labels_ {};
      shared_ptr<vector<Darabonba::Json>> messages_ {};
      Darabonba::Json metadata_ {};
      shared_ptr<string> runId_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<string> triggerCondition_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->contextType_ == nullptr
        && this->items_ == nullptr && this->memoryType_ == nullptr; };
    // contextType Field Functions 
    bool hasContextType() const { return this->contextType_ != nullptr;};
    void deleteContextType() { this->contextType_ = nullptr;};
    inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
    inline AddContextsRequest& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<AddContextsRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<AddContextsRequest::Items>) };
    inline vector<AddContextsRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<AddContextsRequest::Items>) };
    inline AddContextsRequest& setItems(const vector<AddContextsRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline AddContextsRequest& setItems(vector<AddContextsRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // memoryType Field Functions 
    bool hasMemoryType() const { return this->memoryType_ != nullptr;};
    void deleteMemoryType() { this->memoryType_ = nullptr;};
    inline string getMemoryType() const { DARABONBA_PTR_GET_DEFAULT(memoryType_, "") };
    inline AddContextsRequest& setMemoryType(string memoryType) { DARABONBA_PTR_SET_VALUE(memoryType_, memoryType) };


  protected:
    // This parameter is required.
    shared_ptr<string> contextType_ {};
    // This parameter is required.
    shared_ptr<vector<AddContextsRequest::Items>> items_ {};
    shared_ptr<string> memoryType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
