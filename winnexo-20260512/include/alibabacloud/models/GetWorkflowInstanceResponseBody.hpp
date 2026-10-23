// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetWorkflowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(businessId, businessId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(currentNode, currentNode_);
      DARABONBA_PTR_TO_JSON(currentNodes, currentNodes_);
      DARABONBA_PTR_TO_JSON(endedAt, endedAt_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pauseScope, pauseScope_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewStatus, reviewStatus_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(runtimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(businessId, businessId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(currentNode, currentNode_);
      DARABONBA_PTR_FROM_JSON(currentNodes, currentNodes_);
      DARABONBA_PTR_FROM_JSON(endedAt, endedAt_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pauseScope, pauseScope_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewStatus, reviewStatus_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(runtimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody(GetWorkflowInstanceResponseBody &&) = default ;
    GetWorkflowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody& operator=(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody& operator=(GetWorkflowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Progress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Progress& obj) { 
        DARABONBA_PTR_TO_JSON(completedCount, completedCount_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Progress& obj) { 
        DARABONBA_PTR_FROM_JSON(completedCount, completedCount_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Progress() = default ;
      Progress(const Progress &) = default ;
      Progress(Progress &&) = default ;
      Progress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Progress() = default ;
      Progress& operator=(const Progress &) = default ;
      Progress& operator=(Progress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completedCount_ == nullptr
        && this->totalCount_ == nullptr; };
      // completedCount Field Functions 
      bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
      void deleteCompletedCount() { this->completedCount_ = nullptr;};
      inline int64_t getCompletedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
      inline Progress& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Progress& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of visible nodes that have succeeded or been skipped.
      shared_ptr<int64_t> completedCount_ {};
      // The total number of visible nodes in the current graph. This number is not fixed to six.
      shared_ptr<int64_t> totalCount_ {};
    };

    class CurrentNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentNodes& obj) { 
        DARABONBA_PTR_TO_JSON(handler, handler_);
        DARABONBA_PTR_TO_JSON(handlerId, handlerId_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(handler, handler_);
        DARABONBA_PTR_FROM_JSON(handlerId, handlerId_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      CurrentNodes() = default ;
      CurrentNodes(const CurrentNodes &) = default ;
      CurrentNodes(CurrentNodes &&) = default ;
      CurrentNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentNodes() = default ;
      CurrentNodes& operator=(const CurrentNodes &) = default ;
      CurrentNodes& operator=(CurrentNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->handler_ == nullptr
        && this->handlerId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->status_ == nullptr; };
      // handler Field Functions 
      bool hasHandler() const { return this->handler_ != nullptr;};
      void deleteHandler() { this->handler_ = nullptr;};
      inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
      inline CurrentNodes& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


      // handlerId Field Functions 
      bool hasHandlerId() const { return this->handlerId_ != nullptr;};
      void deleteHandlerId() { this->handlerId_ = nullptr;};
      inline string getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, "") };
      inline CurrentNodes& setHandlerId(string handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline CurrentNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline CurrentNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline CurrentNodes& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CurrentNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The display name of the current handler.
      shared_ptr<string> handler_ {};
      // The identifier of the handler or digital worker.
      shared_ptr<string> handlerId_ {};
      // The nodeKey of the actual running node.
      shared_ptr<string> nodeId_ {};
      // The display name of the node.
      shared_ptr<string> nodeName_ {};
      // The actual node type. Valid values: AGENT, HUMAN, and CONDITION.
      shared_ptr<string> nodeType_ {};
      // The running status of the node.
      shared_ptr<string> status_ {};
    };

    class CurrentNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentNode& obj) { 
        DARABONBA_PTR_TO_JSON(handler, handler_);
        DARABONBA_PTR_TO_JSON(handlerId, handlerId_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentNode& obj) { 
        DARABONBA_PTR_FROM_JSON(handler, handler_);
        DARABONBA_PTR_FROM_JSON(handlerId, handlerId_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      CurrentNode() = default ;
      CurrentNode(const CurrentNode &) = default ;
      CurrentNode(CurrentNode &&) = default ;
      CurrentNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentNode() = default ;
      CurrentNode& operator=(const CurrentNode &) = default ;
      CurrentNode& operator=(CurrentNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->handler_ == nullptr
        && this->handlerId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->status_ == nullptr; };
      // handler Field Functions 
      bool hasHandler() const { return this->handler_ != nullptr;};
      void deleteHandler() { this->handler_ = nullptr;};
      inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
      inline CurrentNode& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


      // handlerId Field Functions 
      bool hasHandlerId() const { return this->handlerId_ != nullptr;};
      void deleteHandlerId() { this->handlerId_ = nullptr;};
      inline string getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, "") };
      inline CurrentNode& setHandlerId(string handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline CurrentNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline CurrentNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline CurrentNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CurrentNode& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The display name of the current handler.
      shared_ptr<string> handler_ {};
      // The identifier of the handler or digital worker.
      shared_ptr<string> handlerId_ {};
      // The nodeKey of the actual running node.
      shared_ptr<string> nodeId_ {};
      // The display name of the node.
      shared_ptr<string> nodeName_ {};
      // The actual node type. Valid values: AGENT, HUMAN, and CONDITION.
      shared_ptr<string> nodeType_ {};
      // The running status of the node.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->businessId_ == nullptr
        && this->code_ == nullptr && this->collaborationGroupId_ == nullptr && this->createdAt_ == nullptr && this->currentNode_ == nullptr && this->currentNodes_ == nullptr
        && this->endedAt_ == nullptr && this->initiator_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr && this->pauseScope_ == nullptr
        && this->planId_ == nullptr && this->progress_ == nullptr && this->requestId_ == nullptr && this->reviewStatus_ == nullptr && this->revision_ == nullptr
        && this->runId_ == nullptr && this->runtimeStatus_ == nullptr && this->startedAt_ == nullptr && this->stateVersion_ == nullptr && this->status_ == nullptr
        && this->templateId_ == nullptr && this->title_ == nullptr && this->workItemId_ == nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline GetWorkflowInstanceResponseBody& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkflowInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetWorkflowInstanceResponseBody& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetWorkflowInstanceResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // currentNode Field Functions 
    bool hasCurrentNode() const { return this->currentNode_ != nullptr;};
    void deleteCurrentNode() { this->currentNode_ = nullptr;};
    inline const GetWorkflowInstanceResponseBody::CurrentNode & getCurrentNode() const { DARABONBA_PTR_GET_CONST(currentNode_, GetWorkflowInstanceResponseBody::CurrentNode) };
    inline GetWorkflowInstanceResponseBody::CurrentNode getCurrentNode() { DARABONBA_PTR_GET(currentNode_, GetWorkflowInstanceResponseBody::CurrentNode) };
    inline GetWorkflowInstanceResponseBody& setCurrentNode(const GetWorkflowInstanceResponseBody::CurrentNode & currentNode) { DARABONBA_PTR_SET_VALUE(currentNode_, currentNode) };
    inline GetWorkflowInstanceResponseBody& setCurrentNode(GetWorkflowInstanceResponseBody::CurrentNode && currentNode) { DARABONBA_PTR_SET_RVALUE(currentNode_, currentNode) };


    // currentNodes Field Functions 
    bool hasCurrentNodes() const { return this->currentNodes_ != nullptr;};
    void deleteCurrentNodes() { this->currentNodes_ = nullptr;};
    inline const vector<GetWorkflowInstanceResponseBody::CurrentNodes> & getCurrentNodes() const { DARABONBA_PTR_GET_CONST(currentNodes_, vector<GetWorkflowInstanceResponseBody::CurrentNodes>) };
    inline vector<GetWorkflowInstanceResponseBody::CurrentNodes> getCurrentNodes() { DARABONBA_PTR_GET(currentNodes_, vector<GetWorkflowInstanceResponseBody::CurrentNodes>) };
    inline GetWorkflowInstanceResponseBody& setCurrentNodes(const vector<GetWorkflowInstanceResponseBody::CurrentNodes> & currentNodes) { DARABONBA_PTR_SET_VALUE(currentNodes_, currentNodes) };
    inline GetWorkflowInstanceResponseBody& setCurrentNodes(vector<GetWorkflowInstanceResponseBody::CurrentNodes> && currentNodes) { DARABONBA_PTR_SET_RVALUE(currentNodes_, currentNodes) };


    // endedAt Field Functions 
    bool hasEndedAt() const { return this->endedAt_ != nullptr;};
    void deleteEndedAt() { this->endedAt_ = nullptr;};
    inline string getEndedAt() const { DARABONBA_PTR_GET_DEFAULT(endedAt_, "") };
    inline GetWorkflowInstanceResponseBody& setEndedAt(string endedAt) { DARABONBA_PTR_SET_VALUE(endedAt_, endedAt) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline GetWorkflowInstanceResponseBody& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetWorkflowInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkflowInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pauseScope Field Functions 
    bool hasPauseScope() const { return this->pauseScope_ != nullptr;};
    void deletePauseScope() { this->pauseScope_ = nullptr;};
    inline string getPauseScope() const { DARABONBA_PTR_GET_DEFAULT(pauseScope_, "") };
    inline GetWorkflowInstanceResponseBody& setPauseScope(string pauseScope) { DARABONBA_PTR_SET_VALUE(pauseScope_, pauseScope) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline GetWorkflowInstanceResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const GetWorkflowInstanceResponseBody::Progress & getProgress() const { DARABONBA_PTR_GET_CONST(progress_, GetWorkflowInstanceResponseBody::Progress) };
    inline GetWorkflowInstanceResponseBody::Progress getProgress() { DARABONBA_PTR_GET(progress_, GetWorkflowInstanceResponseBody::Progress) };
    inline GetWorkflowInstanceResponseBody& setProgress(const GetWorkflowInstanceResponseBody::Progress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline GetWorkflowInstanceResponseBody& setProgress(GetWorkflowInstanceResponseBody::Progress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewStatus Field Functions 
    bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
    void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
    inline string getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, "") };
    inline GetWorkflowInstanceResponseBody& setReviewStatus(string reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline GetWorkflowInstanceResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetWorkflowInstanceResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string getRuntimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline GetWorkflowInstanceResponseBody& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline GetWorkflowInstanceResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline GetWorkflowInstanceResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkflowInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetWorkflowInstanceResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetWorkflowInstanceResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline GetWorkflowInstanceResponseBody& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The unique external requirement number within the workspace.
    shared_ptr<string> businessId_ {};
    // The business status code from the unified POP response wrapper.
    shared_ptr<string> code_ {};
    // The ID of the collaboration workspace.
    shared_ptr<string> collaborationGroupId_ {};
    // The creation time of the logical instance in ISO 8601 format.
    shared_ptr<string> createdAt_ {};
    // The first active node. This value is null when the instance reaches a terminal state.
    shared_ptr<GetWorkflowInstanceResponseBody::CurrentNode> currentNode_ {};
    // All active nodes. Parallel DAGs are supported.
    shared_ptr<vector<GetWorkflowInstanceResponseBody::CurrentNodes>> currentNodes_ {};
    // The time when the current plan reached a terminal state. This value is null if the plan has not ended.
    shared_ptr<string> endedAt_ {};
    // The external initiator label. This label is not used for authentication.
    shared_ptr<string> initiator_ {};
    // The stable logical instance ID. This ID does not change when the work item is restarted.
    shared_ptr<string> instanceId_ {};
    // The user-visible error description from the unified POP response wrapper.
    shared_ptr<string> message_ {};
    // The raw plan pause scope.
    shared_ptr<string> pauseScope_ {};
    // The revision ID of the current physical plan.
    shared_ptr<string> planId_ {};
    // The visible graph progress.
    shared_ptr<GetWorkflowInstanceResponseBody::Progress> progress_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The raw plan review status.
    shared_ptr<string> reviewStatus_ {};
    // The revision number of the current physical plan.
    shared_ptr<int64_t> revision_ {};
    // The current run ID. This ID changes after a restart.
    shared_ptr<string> runId_ {};
    // The raw runtime status. Valid values: BUILDING, RUNNING, SUCCEEDED, FAILED, and CANCELLED.
    shared_ptr<string> runtimeStatus_ {};
    // The time when the current plan node started for the first time. This value is null if the node has not been executed.
    shared_ptr<string> startedAt_ {};
    // The runtime status version.
    shared_ptr<int64_t> stateVersion_ {};
    // Running/Completed/Failed/Terminated
    shared_ptr<string> status_ {};
    // The ID of the workflow template bound at creation.
    shared_ptr<string> templateId_ {};
    // The current requirement title.
    shared_ptr<string> title_ {};
    // The ID of the associated work item.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
