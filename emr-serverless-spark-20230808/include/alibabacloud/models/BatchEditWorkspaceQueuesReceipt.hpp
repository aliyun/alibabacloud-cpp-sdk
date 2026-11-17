// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEDITWORKSPACEQUEUESRECEIPT_HPP_
#define ALIBABACLOUD_MODELS_BATCHEDITWORKSPACEQUEUESRECEIPT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class BatchEditWorkspaceQueuesReceipt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEditWorkspaceQueuesReceipt& obj) { 
      DARABONBA_PTR_TO_JSON(acceptedQueues, acceptedQueues_);
      DARABONBA_PTR_TO_JSON(skippedQueues, skippedQueues_);
      DARABONBA_PTR_TO_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEditWorkspaceQueuesReceipt& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptedQueues, acceptedQueues_);
      DARABONBA_PTR_FROM_JSON(skippedQueues, skippedQueues_);
      DARABONBA_PTR_FROM_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    BatchEditWorkspaceQueuesReceipt() = default ;
    BatchEditWorkspaceQueuesReceipt(const BatchEditWorkspaceQueuesReceipt &) = default ;
    BatchEditWorkspaceQueuesReceipt(BatchEditWorkspaceQueuesReceipt &&) = default ;
    BatchEditWorkspaceQueuesReceipt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEditWorkspaceQueuesReceipt() = default ;
    BatchEditWorkspaceQueuesReceipt& operator=(const BatchEditWorkspaceQueuesReceipt &) = default ;
    BatchEditWorkspaceQueuesReceipt& operator=(BatchEditWorkspaceQueuesReceipt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptedQueues_ == nullptr
        && this->skippedQueues_ == nullptr && this->workflowInstanceId_ == nullptr && this->workspaceId_ == nullptr; };
    // acceptedQueues Field Functions 
    bool hasAcceptedQueues() const { return this->acceptedQueues_ != nullptr;};
    void deleteAcceptedQueues() { this->acceptedQueues_ = nullptr;};
    inline const vector<string> & getAcceptedQueues() const { DARABONBA_PTR_GET_CONST(acceptedQueues_, vector<string>) };
    inline vector<string> getAcceptedQueues() { DARABONBA_PTR_GET(acceptedQueues_, vector<string>) };
    inline BatchEditWorkspaceQueuesReceipt& setAcceptedQueues(const vector<string> & acceptedQueues) { DARABONBA_PTR_SET_VALUE(acceptedQueues_, acceptedQueues) };
    inline BatchEditWorkspaceQueuesReceipt& setAcceptedQueues(vector<string> && acceptedQueues) { DARABONBA_PTR_SET_RVALUE(acceptedQueues_, acceptedQueues) };


    // skippedQueues Field Functions 
    bool hasSkippedQueues() const { return this->skippedQueues_ != nullptr;};
    void deleteSkippedQueues() { this->skippedQueues_ = nullptr;};
    inline const vector<string> & getSkippedQueues() const { DARABONBA_PTR_GET_CONST(skippedQueues_, vector<string>) };
    inline vector<string> getSkippedQueues() { DARABONBA_PTR_GET(skippedQueues_, vector<string>) };
    inline BatchEditWorkspaceQueuesReceipt& setSkippedQueues(const vector<string> & skippedQueues) { DARABONBA_PTR_SET_VALUE(skippedQueues_, skippedQueues) };
    inline BatchEditWorkspaceQueuesReceipt& setSkippedQueues(vector<string> && skippedQueues) { DARABONBA_PTR_SET_RVALUE(skippedQueues_, skippedQueues) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline BatchEditWorkspaceQueuesReceipt& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchEditWorkspaceQueuesReceipt& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The target states of these queues are progressively written during the workflow.
    shared_ptr<vector<string>> acceptedQueues_ {};
    // The current values are already equal to the target values, so no write operations are required.
    shared_ptr<vector<string>> skippedQueues_ {};
    // A null value indicates that all queues in this request are already in the target state and no workflow is started (idempotent no-op).
    shared_ptr<int64_t> workflowInstanceId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
