// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEDITWORKSPACEQUEUESBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHEDITWORKSPACEQUEUESBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEditQueueSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class BatchEditWorkspaceQueuesBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEditWorkspaceQueuesBody& obj) { 
      DARABONBA_PTR_TO_JSON(queues, queues_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEditWorkspaceQueuesBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queues, queues_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    BatchEditWorkspaceQueuesBody() = default ;
    BatchEditWorkspaceQueuesBody(const BatchEditWorkspaceQueuesBody &) = default ;
    BatchEditWorkspaceQueuesBody(BatchEditWorkspaceQueuesBody &&) = default ;
    BatchEditWorkspaceQueuesBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEditWorkspaceQueuesBody() = default ;
    BatchEditWorkspaceQueuesBody& operator=(const BatchEditWorkspaceQueuesBody &) = default ;
    BatchEditWorkspaceQueuesBody& operator=(BatchEditWorkspaceQueuesBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queues_ == nullptr
        && this->workspaceId_ == nullptr; };
    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<BatchEditQueueSpec> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<BatchEditQueueSpec>) };
    inline vector<BatchEditQueueSpec> getQueues() { DARABONBA_PTR_GET(queues_, vector<BatchEditQueueSpec>) };
    inline BatchEditWorkspaceQueuesBody& setQueues(const vector<BatchEditQueueSpec> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline BatchEditWorkspaceQueuesBody& setQueues(vector<BatchEditQueueSpec> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchEditWorkspaceQueuesBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of queues to update. Each entry independently specifies the absolute target state of a queue. Queue names must be unique within the same request.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchEditQueueSpec>> queues_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
