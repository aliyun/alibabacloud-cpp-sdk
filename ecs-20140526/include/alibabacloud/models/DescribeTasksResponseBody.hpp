// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskSet, taskSet_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskSet, taskSet_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody(DescribeTasksResponseBody &&) = default ;
    DescribeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody& operator=(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody& operator=(DescribeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskSet& obj) { 
        DARABONBA_PTR_TO_JSON(Task, task_);
      };
      friend void from_json(const Darabonba::Json& j, TaskSet& obj) { 
        DARABONBA_PTR_FROM_JSON(Task, task_);
      };
      TaskSet() = default ;
      TaskSet(const TaskSet &) = default ;
      TaskSet(TaskSet &&) = default ;
      TaskSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskSet() = default ;
      TaskSet& operator=(const TaskSet &) = default ;
      TaskSet& operator=(TaskSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(SupportCancel, supportCancel_);
          DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(SupportCancel, supportCancel_);
          DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->finishedTime_ == nullptr && this->resourceId_ == nullptr && this->supportCancel_ == nullptr && this->taskAction_ == nullptr && this->taskId_ == nullptr
        && this->taskStatus_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Task& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
        inline Task& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Task& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // supportCancel Field Functions 
        bool hasSupportCancel() const { return this->supportCancel_ != nullptr;};
        void deleteSupportCancel() { this->supportCancel_ = nullptr;};
        inline string getSupportCancel() const { DARABONBA_PTR_GET_DEFAULT(supportCancel_, "") };
        inline Task& setSupportCancel(string supportCancel) { DARABONBA_PTR_SET_VALUE(supportCancel_, supportCancel) };


        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline Task& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline Task& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      protected:
        // The time when the task was created.
        shared_ptr<string> creationTime_ {};
        // The time when the task ended.
        shared_ptr<string> finishedTime_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // Indicates whether the task can be canceled.
        shared_ptr<string> supportCancel_ {};
        // The name of the operation that generates the task.
        shared_ptr<string> taskAction_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The task status.
        shared_ptr<string> taskStatus_ {};
      };

      virtual bool empty() const override { return this->task_ == nullptr; };
      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const vector<TaskSet::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<TaskSet::Task>) };
      inline vector<TaskSet::Task> getTask() { DARABONBA_PTR_GET(task_, vector<TaskSet::Task>) };
      inline TaskSet& setTask(const vector<TaskSet::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline TaskSet& setTask(vector<TaskSet::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    protected:
      shared_ptr<vector<TaskSet::Task>> task_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->taskSet_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTasksResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskSet Field Functions 
    bool hasTaskSet() const { return this->taskSet_ != nullptr;};
    void deleteTaskSet() { this->taskSet_ = nullptr;};
    inline const DescribeTasksResponseBody::TaskSet & getTaskSet() const { DARABONBA_PTR_GET_CONST(taskSet_, DescribeTasksResponseBody::TaskSet) };
    inline DescribeTasksResponseBody::TaskSet getTaskSet() { DARABONBA_PTR_GET(taskSet_, DescribeTasksResponseBody::TaskSet) };
    inline DescribeTasksResponseBody& setTaskSet(const DescribeTasksResponseBody::TaskSet & taskSet) { DARABONBA_PTR_SET_VALUE(taskSet_, taskSet) };
    inline DescribeTasksResponseBody& setTaskSet(DescribeTasksResponseBody::TaskSet && taskSet) { DARABONBA_PTR_SET_RVALUE(taskSet_, taskSet) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the tasks.
    shared_ptr<DescribeTasksResponseBody::TaskSet> taskSet_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
