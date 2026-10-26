// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateAgentConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(currentRunStatus, currentRunStatus_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(scenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(currentRunStatus, currentRunStatus_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(scenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CreateAgentConversationResponseBody() = default ;
    CreateAgentConversationResponseBody(const CreateAgentConversationResponseBody &) = default ;
    CreateAgentConversationResponseBody(CreateAgentConversationResponseBody &&) = default ;
    CreateAgentConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentConversationResponseBody() = default ;
    CreateAgentConversationResponseBody& operator=(const CreateAgentConversationResponseBody &) = default ;
    CreateAgentConversationResponseBody& operator=(CreateAgentConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->createdAt_ == nullptr && this->currentRunStatus_ == nullptr && this->id_ == nullptr && this->runId_ == nullptr && this->scenarioId_ == nullptr
        && this->title_ == nullptr && this->updatedAt_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateAgentConversationResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateAgentConversationResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // currentRunStatus Field Functions 
    bool hasCurrentRunStatus() const { return this->currentRunStatus_ != nullptr;};
    void deleteCurrentRunStatus() { this->currentRunStatus_ = nullptr;};
    inline string getCurrentRunStatus() const { DARABONBA_PTR_GET_DEFAULT(currentRunStatus_, "") };
    inline CreateAgentConversationResponseBody& setCurrentRunStatus(string currentRunStatus) { DARABONBA_PTR_SET_VALUE(currentRunStatus_, currentRunStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateAgentConversationResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline CreateAgentConversationResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateAgentConversationResponseBody& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateAgentConversationResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CreateAgentConversationResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> conversationId_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> currentRunStatus_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> runId_ {};
    shared_ptr<string> scenarioId_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
