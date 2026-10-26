// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTCONVERSATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListAgentConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentConversationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentConversationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListAgentConversationsResponseBody() = default ;
    ListAgentConversationsResponseBody(const ListAgentConversationsResponseBody &) = default ;
    ListAgentConversationsResponseBody(ListAgentConversationsResponseBody &&) = default ;
    ListAgentConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentConversationsResponseBody() = default ;
    ListAgentConversationsResponseBody& operator=(const ListAgentConversationsResponseBody &) = default ;
    ListAgentConversationsResponseBody& operator=(ListAgentConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(access, access_);
        DARABONBA_ANY_TO_JSON(agent, agent_);
        DARABONBA_ANY_TO_JSON(analysisCoverage, analysisCoverage_);
        DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(currentRunStatus, currentRunStatus_);
        DARABONBA_PTR_TO_JSON(editMonitorId, editMonitorId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_ANY_TO_JSON(owner, owner_);
        DARABONBA_ANY_TO_JSON(project, project_);
        DARABONBA_PTR_TO_JSON(scenarioId, scenarioId_);
        DARABONBA_PTR_TO_JSON(shareScope, shareScope_);
        DARABONBA_PTR_TO_JSON(sourceSessionId, sourceSessionId_);
        DARABONBA_ANY_TO_JSON(tagging, tagging_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(toolCallCount, toolCallCount_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(usedSkills, usedSkills_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(access, access_);
        DARABONBA_ANY_FROM_JSON(agent, agent_);
        DARABONBA_ANY_FROM_JSON(analysisCoverage, analysisCoverage_);
        DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(currentRunStatus, currentRunStatus_);
        DARABONBA_PTR_FROM_JSON(editMonitorId, editMonitorId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_ANY_FROM_JSON(owner, owner_);
        DARABONBA_ANY_FROM_JSON(project, project_);
        DARABONBA_PTR_FROM_JSON(scenarioId, scenarioId_);
        DARABONBA_PTR_FROM_JSON(shareScope, shareScope_);
        DARABONBA_PTR_FROM_JSON(sourceSessionId, sourceSessionId_);
        DARABONBA_ANY_FROM_JSON(tagging, tagging_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(toolCallCount, toolCallCount_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(usedSkills, usedSkills_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->access_ == nullptr
        && this->agent_ == nullptr && this->analysisCoverage_ == nullptr && this->conversationId_ == nullptr && this->createdAt_ == nullptr && this->createdBy_ == nullptr
        && this->currentRunStatus_ == nullptr && this->editMonitorId_ == nullptr && this->id_ == nullptr && this->owner_ == nullptr && this->project_ == nullptr
        && this->scenarioId_ == nullptr && this->shareScope_ == nullptr && this->sourceSessionId_ == nullptr && this->tagging_ == nullptr && this->title_ == nullptr
        && this->toolCallCount_ == nullptr && this->updatedAt_ == nullptr && this->usedSkills_ == nullptr; };
      // access Field Functions 
      bool hasAccess() const { return this->access_ != nullptr;};
      void deleteAccess() { this->access_ = nullptr;};
      inline       const Darabonba::Json & getAccess() const { DARABONBA_GET(access_) };
      Darabonba::Json & getAccess() { DARABONBA_GET(access_) };
      inline Data& setAccess(const Darabonba::Json & access) { DARABONBA_SET_VALUE(access_, access) };
      inline Data& setAccess(Darabonba::Json && access) { DARABONBA_SET_RVALUE(access_, access) };


      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline       const Darabonba::Json & getAgent() const { DARABONBA_GET(agent_) };
      Darabonba::Json & getAgent() { DARABONBA_GET(agent_) };
      inline Data& setAgent(const Darabonba::Json & agent) { DARABONBA_SET_VALUE(agent_, agent) };
      inline Data& setAgent(Darabonba::Json && agent) { DARABONBA_SET_RVALUE(agent_, agent) };


      // analysisCoverage Field Functions 
      bool hasAnalysisCoverage() const { return this->analysisCoverage_ != nullptr;};
      void deleteAnalysisCoverage() { this->analysisCoverage_ = nullptr;};
      inline       const Darabonba::Json & getAnalysisCoverage() const { DARABONBA_GET(analysisCoverage_) };
      Darabonba::Json & getAnalysisCoverage() { DARABONBA_GET(analysisCoverage_) };
      inline Data& setAnalysisCoverage(const Darabonba::Json & analysisCoverage) { DARABONBA_SET_VALUE(analysisCoverage_, analysisCoverage) };
      inline Data& setAnalysisCoverage(Darabonba::Json && analysisCoverage) { DARABONBA_SET_RVALUE(analysisCoverage_, analysisCoverage) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Data& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Data& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // currentRunStatus Field Functions 
      bool hasCurrentRunStatus() const { return this->currentRunStatus_ != nullptr;};
      void deleteCurrentRunStatus() { this->currentRunStatus_ = nullptr;};
      inline string getCurrentRunStatus() const { DARABONBA_PTR_GET_DEFAULT(currentRunStatus_, "") };
      inline Data& setCurrentRunStatus(string currentRunStatus) { DARABONBA_PTR_SET_VALUE(currentRunStatus_, currentRunStatus) };


      // editMonitorId Field Functions 
      bool hasEditMonitorId() const { return this->editMonitorId_ != nullptr;};
      void deleteEditMonitorId() { this->editMonitorId_ = nullptr;};
      inline string getEditMonitorId() const { DARABONBA_PTR_GET_DEFAULT(editMonitorId_, "") };
      inline Data& setEditMonitorId(string editMonitorId) { DARABONBA_PTR_SET_VALUE(editMonitorId_, editMonitorId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline       const Darabonba::Json & getOwner() const { DARABONBA_GET(owner_) };
      Darabonba::Json & getOwner() { DARABONBA_GET(owner_) };
      inline Data& setOwner(const Darabonba::Json & owner) { DARABONBA_SET_VALUE(owner_, owner) };
      inline Data& setOwner(Darabonba::Json && owner) { DARABONBA_SET_RVALUE(owner_, owner) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline       const Darabonba::Json & getProject() const { DARABONBA_GET(project_) };
      Darabonba::Json & getProject() { DARABONBA_GET(project_) };
      inline Data& setProject(const Darabonba::Json & project) { DARABONBA_SET_VALUE(project_, project) };
      inline Data& setProject(Darabonba::Json && project) { DARABONBA_SET_RVALUE(project_, project) };


      // scenarioId Field Functions 
      bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
      void deleteScenarioId() { this->scenarioId_ = nullptr;};
      inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
      inline Data& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


      // shareScope Field Functions 
      bool hasShareScope() const { return this->shareScope_ != nullptr;};
      void deleteShareScope() { this->shareScope_ = nullptr;};
      inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
      inline Data& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


      // sourceSessionId Field Functions 
      bool hasSourceSessionId() const { return this->sourceSessionId_ != nullptr;};
      void deleteSourceSessionId() { this->sourceSessionId_ = nullptr;};
      inline string getSourceSessionId() const { DARABONBA_PTR_GET_DEFAULT(sourceSessionId_, "") };
      inline Data& setSourceSessionId(string sourceSessionId) { DARABONBA_PTR_SET_VALUE(sourceSessionId_, sourceSessionId) };


      // tagging Field Functions 
      bool hasTagging() const { return this->tagging_ != nullptr;};
      void deleteTagging() { this->tagging_ = nullptr;};
      inline       const Darabonba::Json & getTagging() const { DARABONBA_GET(tagging_) };
      Darabonba::Json & getTagging() { DARABONBA_GET(tagging_) };
      inline Data& setTagging(const Darabonba::Json & tagging) { DARABONBA_SET_VALUE(tagging_, tagging) };
      inline Data& setTagging(Darabonba::Json && tagging) { DARABONBA_SET_RVALUE(tagging_, tagging) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // toolCallCount Field Functions 
      bool hasToolCallCount() const { return this->toolCallCount_ != nullptr;};
      void deleteToolCallCount() { this->toolCallCount_ = nullptr;};
      inline int64_t getToolCallCount() const { DARABONBA_PTR_GET_DEFAULT(toolCallCount_, 0L) };
      inline Data& setToolCallCount(int64_t toolCallCount) { DARABONBA_PTR_SET_VALUE(toolCallCount_, toolCallCount) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // usedSkills Field Functions 
      bool hasUsedSkills() const { return this->usedSkills_ != nullptr;};
      void deleteUsedSkills() { this->usedSkills_ = nullptr;};
      inline const vector<string> & getUsedSkills() const { DARABONBA_PTR_GET_CONST(usedSkills_, vector<string>) };
      inline vector<string> getUsedSkills() { DARABONBA_PTR_GET(usedSkills_, vector<string>) };
      inline Data& setUsedSkills(const vector<string> & usedSkills) { DARABONBA_PTR_SET_VALUE(usedSkills_, usedSkills) };
      inline Data& setUsedSkills(vector<string> && usedSkills) { DARABONBA_PTR_SET_RVALUE(usedSkills_, usedSkills) };


    protected:
      Darabonba::Json access_ {};
      Darabonba::Json agent_ {};
      Darabonba::Json analysisCoverage_ {};
      shared_ptr<string> conversationId_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> createdBy_ {};
      shared_ptr<string> currentRunStatus_ {};
      shared_ptr<string> editMonitorId_ {};
      shared_ptr<string> id_ {};
      Darabonba::Json owner_ {};
      Darabonba::Json project_ {};
      shared_ptr<string> scenarioId_ {};
      shared_ptr<string> shareScope_ {};
      shared_ptr<string> sourceSessionId_ {};
      Darabonba::Json tagging_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> toolCallCount_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<vector<string>> usedSkills_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentConversationsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentConversationsResponseBody::Data>) };
    inline vector<ListAgentConversationsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentConversationsResponseBody::Data>) };
    inline ListAgentConversationsResponseBody& setData(const vector<ListAgentConversationsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentConversationsResponseBody& setData(vector<ListAgentConversationsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentConversationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentConversationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<ListAgentConversationsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
