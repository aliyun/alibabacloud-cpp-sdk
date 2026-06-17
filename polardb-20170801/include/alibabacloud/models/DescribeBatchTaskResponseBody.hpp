// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TaskBegin, taskBegin_);
      DARABONBA_PTR_TO_JSON(TaskEnd, taskEnd_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TaskBegin, taskBegin_);
      DARABONBA_PTR_FROM_JSON(TaskEnd, taskEnd_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchTaskResponseBody() = default ;
    DescribeBatchTaskResponseBody(const DescribeBatchTaskResponseBody &) = default ;
    DescribeBatchTaskResponseBody(DescribeBatchTaskResponseBody &&) = default ;
    DescribeBatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchTaskResponseBody() = default ;
    DescribeBatchTaskResponseBody& operator=(const DescribeBatchTaskResponseBody &) = default ;
    DescribeBatchTaskResponseBody& operator=(DescribeBatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubTasks& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskBegin, taskBegin_);
        DARABONBA_PTR_TO_JSON(TaskEnd, taskEnd_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, SubTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskBegin, taskBegin_);
        DARABONBA_PTR_FROM_JSON(TaskEnd, taskEnd_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      SubTasks() = default ;
      SubTasks(const SubTasks &) = default ;
      SubTasks(SubTasks &&) = default ;
      SubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubTasks() = default ;
      SubTasks& operator=(const SubTasks &) = default ;
      SubTasks& operator=(SubTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->instanceId_ == nullptr && this->status_ == nullptr && this->taskBegin_ == nullptr && this->taskEnd_ == nullptr && this->taskId_ == nullptr; };
      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline SubTasks& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SubTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SubTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskBegin Field Functions 
      bool hasTaskBegin() const { return this->taskBegin_ != nullptr;};
      void deleteTaskBegin() { this->taskBegin_ = nullptr;};
      inline string getTaskBegin() const { DARABONBA_PTR_GET_DEFAULT(taskBegin_, "") };
      inline SubTasks& setTaskBegin(string taskBegin) { DARABONBA_PTR_SET_VALUE(taskBegin_, taskBegin) };


      // taskEnd Field Functions 
      bool hasTaskEnd() const { return this->taskEnd_ != nullptr;};
      void deleteTaskEnd() { this->taskEnd_ = nullptr;};
      inline string getTaskEnd() const { DARABONBA_PTR_GET_DEFAULT(taskEnd_, "") };
      inline SubTasks& setTaskEnd(string taskEnd) { DARABONBA_PTR_SET_VALUE(taskEnd_, taskEnd) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline SubTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The status of the subtask.
      shared_ptr<string> status_ {};
      // The time when the subtask started.
      shared_ptr<string> taskBegin_ {};
      // The time when the subtask ended.
      shared_ptr<string> taskEnd_ {};
      // The ID of the subtask.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->batchId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->subTasks_ == nullptr && this->successCount_ == nullptr
        && this->taskBegin_ == nullptr && this->taskEnd_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeBatchTaskResponseBody& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline DescribeBatchTaskResponseBody& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBatchTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subTasks Field Functions 
    bool hasSubTasks() const { return this->subTasks_ != nullptr;};
    void deleteSubTasks() { this->subTasks_ = nullptr;};
    inline const vector<DescribeBatchTaskResponseBody::SubTasks> & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<DescribeBatchTaskResponseBody::SubTasks>) };
    inline vector<DescribeBatchTaskResponseBody::SubTasks> getSubTasks() { DARABONBA_PTR_GET(subTasks_, vector<DescribeBatchTaskResponseBody::SubTasks>) };
    inline DescribeBatchTaskResponseBody& setSubTasks(const vector<DescribeBatchTaskResponseBody::SubTasks> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
    inline DescribeBatchTaskResponseBody& setSubTasks(vector<DescribeBatchTaskResponseBody::SubTasks> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeBatchTaskResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskBegin Field Functions 
    bool hasTaskBegin() const { return this->taskBegin_ != nullptr;};
    void deleteTaskBegin() { this->taskBegin_ = nullptr;};
    inline string getTaskBegin() const { DARABONBA_PTR_GET_DEFAULT(taskBegin_, "") };
    inline DescribeBatchTaskResponseBody& setTaskBegin(string taskBegin) { DARABONBA_PTR_SET_VALUE(taskBegin_, taskBegin) };


    // taskEnd Field Functions 
    bool hasTaskEnd() const { return this->taskEnd_ != nullptr;};
    void deleteTaskEnd() { this->taskEnd_ = nullptr;};
    inline string getTaskEnd() const { DARABONBA_PTR_GET_DEFAULT(taskEnd_, "") };
    inline DescribeBatchTaskResponseBody& setTaskEnd(string taskEnd) { DARABONBA_PTR_SET_VALUE(taskEnd_, taskEnd) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeBatchTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeBatchTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBatchTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> applicationType_ {};
    // The ID of the batch task.
    shared_ptr<string> batchId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task status.
    shared_ptr<string> status_ {};
    // A list of subtasks.
    shared_ptr<vector<DescribeBatchTaskResponseBody::SubTasks>> subTasks_ {};
    // The number of successful subtasks.
    shared_ptr<int32_t> successCount_ {};
    // The time when the task started.
    shared_ptr<string> taskBegin_ {};
    // The time when the task ended.
    shared_ptr<string> taskEnd_ {};
    // The name of the task.
    shared_ptr<string> taskName_ {};
    // The type of the task.
    shared_ptr<string> taskType_ {};
    // The total number of subtasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
