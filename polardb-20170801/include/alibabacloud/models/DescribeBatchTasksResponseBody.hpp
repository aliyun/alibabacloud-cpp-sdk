// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKSRESPONSEBODY_HPP_
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
  class DescribeBatchTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchTasksResponseBody() = default ;
    DescribeBatchTasksResponseBody(const DescribeBatchTasksResponseBody &) = default ;
    DescribeBatchTasksResponseBody(DescribeBatchTasksResponseBody &&) = default ;
    DescribeBatchTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchTasksResponseBody() = default ;
    DescribeBatchTasksResponseBody& operator=(const DescribeBatchTasksResponseBody &) = default ;
    DescribeBatchTasksResponseBody& operator=(DescribeBatchTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TaskBegin, taskBegin_);
        DARABONBA_PTR_TO_JSON(TaskEnd, taskEnd_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TaskBegin, taskBegin_);
        DARABONBA_PTR_FROM_JSON(TaskEnd, taskEnd_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->status_ == nullptr && this->successCount_ == nullptr && this->taskBegin_ == nullptr && this->taskEnd_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline TaskList& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline TaskList& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // taskBegin Field Functions 
      bool hasTaskBegin() const { return this->taskBegin_ != nullptr;};
      void deleteTaskBegin() { this->taskBegin_ = nullptr;};
      inline string getTaskBegin() const { DARABONBA_PTR_GET_DEFAULT(taskBegin_, "") };
      inline TaskList& setTaskBegin(string taskBegin) { DARABONBA_PTR_SET_VALUE(taskBegin_, taskBegin) };


      // taskEnd Field Functions 
      bool hasTaskEnd() const { return this->taskEnd_ != nullptr;};
      void deleteTaskEnd() { this->taskEnd_ = nullptr;};
      inline string getTaskEnd() const { DARABONBA_PTR_GET_DEFAULT(taskEnd_, "") };
      inline TaskList& setTaskEnd(string taskEnd) { DARABONBA_PTR_SET_VALUE(taskEnd_, taskEnd) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline TaskList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The batch ID.
      shared_ptr<string> batchId_ {};
      // The task status.
      shared_ptr<string> status_ {};
      // The number of successfully completed subtasks in the batch.
      shared_ptr<int32_t> successCount_ {};
      // The task start time.
      shared_ptr<string> taskBegin_ {};
      // The task end time.
      shared_ptr<string> taskEnd_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task type.
      shared_ptr<string> taskType_ {};
      // The total number of subtasks in the batch.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->taskList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBatchTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBatchTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeBatchTasksResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeBatchTasksResponseBody::TaskList>) };
    inline vector<DescribeBatchTasksResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeBatchTasksResponseBody::TaskList>) };
    inline DescribeBatchTasksResponseBody& setTaskList(const vector<DescribeBatchTasksResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeBatchTasksResponseBody& setTaskList(vector<DescribeBatchTasksResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBatchTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned results.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task list.
    shared_ptr<vector<DescribeBatchTasksResponseBody::TaskList>> taskList_ {};
    // The total number of tasks that match the query, ignoring pagination.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
