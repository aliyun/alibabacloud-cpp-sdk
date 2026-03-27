// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(asyncMode, asyncMode_);
      DARABONBA_PTR_TO_JSON(customInstructions, customInstructions_);
      DARABONBA_PTR_TO_JSON(infer, infer_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(asyncMode, asyncMode_);
      DARABONBA_PTR_FROM_JSON(customInstructions, customInstructions_);
      DARABONBA_PTR_FROM_JSON(infer, infer_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    AddMemoriesRequest() = default ;
    AddMemoriesRequest(const AddMemoriesRequest &) = default ;
    AddMemoriesRequest(AddMemoriesRequest &&) = default ;
    AddMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMemoriesRequest() = default ;
    AddMemoriesRequest& operator=(const AddMemoriesRequest &) = default ;
    AddMemoriesRequest& operator=(AddMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->asyncMode_ == nullptr && this->customInstructions_ == nullptr && this->infer_ == nullptr && this->messages_ == nullptr
        && this->metadata_ == nullptr && this->runId_ == nullptr && this->timestamp_ == nullptr && this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline AddMemoriesRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddMemoriesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // asyncMode Field Functions 
    bool hasAsyncMode() const { return this->asyncMode_ != nullptr;};
    void deleteAsyncMode() { this->asyncMode_ = nullptr;};
    inline bool getAsyncMode() const { DARABONBA_PTR_GET_DEFAULT(asyncMode_, false) };
    inline AddMemoriesRequest& setAsyncMode(bool asyncMode) { DARABONBA_PTR_SET_VALUE(asyncMode_, asyncMode) };


    // customInstructions Field Functions 
    bool hasCustomInstructions() const { return this->customInstructions_ != nullptr;};
    void deleteCustomInstructions() { this->customInstructions_ = nullptr;};
    inline string getCustomInstructions() const { DARABONBA_PTR_GET_DEFAULT(customInstructions_, "") };
    inline AddMemoriesRequest& setCustomInstructions(string customInstructions) { DARABONBA_PTR_SET_VALUE(customInstructions_, customInstructions) };


    // infer Field Functions 
    bool hasInfer() const { return this->infer_ != nullptr;};
    void deleteInfer() { this->infer_ = nullptr;};
    inline bool getInfer() const { DARABONBA_PTR_GET_DEFAULT(infer_, false) };
    inline AddMemoriesRequest& setInfer(bool infer) { DARABONBA_PTR_SET_VALUE(infer_, infer) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<AddMemoriesRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<AddMemoriesRequest::Messages>) };
    inline vector<AddMemoriesRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<AddMemoriesRequest::Messages>) };
    inline AddMemoriesRequest& setMessages(const vector<AddMemoriesRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AddMemoriesRequest& setMessages(vector<AddMemoriesRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline AddMemoriesRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline AddMemoriesRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline AddMemoriesRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AddMemoriesRequest& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddMemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<bool> asyncMode_ {};
    shared_ptr<string> customInstructions_ {};
    shared_ptr<bool> infer_ {};
    shared_ptr<vector<AddMemoriesRequest::Messages>> messages_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
