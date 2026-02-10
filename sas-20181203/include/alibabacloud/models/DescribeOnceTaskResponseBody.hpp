// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskManageResponseList, taskManageResponseList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskManageResponseList, taskManageResponseList_);
    };
    DescribeOnceTaskResponseBody() = default ;
    DescribeOnceTaskResponseBody(const DescribeOnceTaskResponseBody &) = default ;
    DescribeOnceTaskResponseBody(DescribeOnceTaskResponseBody &&) = default ;
    DescribeOnceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskResponseBody() = default ;
    DescribeOnceTaskResponseBody& operator=(const DescribeOnceTaskResponseBody &) = default ;
    DescribeOnceTaskResponseBody& operator=(DescribeOnceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskManageResponseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskManageResponseList& obj) { 
        DARABONBA_PTR_TO_JSON(DetailData, detailData_);
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskStatusText, taskStatusText_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskManageResponseList& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskStatusText, taskStatusText_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TaskManageResponseList() = default ;
      TaskManageResponseList(const TaskManageResponseList &) = default ;
      TaskManageResponseList(TaskManageResponseList &&) = default ;
      TaskManageResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskManageResponseList() = default ;
      TaskManageResponseList& operator=(const TaskManageResponseList &) = default ;
      TaskManageResponseList& operator=(TaskManageResponseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detailData_ == nullptr
        && this->failCount_ == nullptr && this->progress_ == nullptr && this->resultInfo_ == nullptr && this->successCount_ == nullptr && this->taskEndTime_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStartTime_ == nullptr && this->taskStatus_ == nullptr && this->taskStatusText_ == nullptr
        && this->taskType_ == nullptr; };
      // detailData Field Functions 
      bool hasDetailData() const { return this->detailData_ != nullptr;};
      void deleteDetailData() { this->detailData_ = nullptr;};
      inline string getDetailData() const { DARABONBA_PTR_GET_DEFAULT(detailData_, "") };
      inline TaskManageResponseList& setDetailData(string detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline TaskManageResponseList& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline TaskManageResponseList& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // resultInfo Field Functions 
      bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
      void deleteResultInfo() { this->resultInfo_ = nullptr;};
      inline string getResultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
      inline TaskManageResponseList& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline TaskManageResponseList& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline int64_t getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
      inline TaskManageResponseList& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskManageResponseList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskManageResponseList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline int64_t getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
      inline TaskManageResponseList& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline TaskManageResponseList& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusText Field Functions 
      bool hasTaskStatusText() const { return this->taskStatusText_ != nullptr;};
      void deleteTaskStatusText() { this->taskStatusText_ = nullptr;};
      inline string getTaskStatusText() const { DARABONBA_PTR_GET_DEFAULT(taskStatusText_, "") };
      inline TaskManageResponseList& setTaskStatusText(string taskStatusText) { DARABONBA_PTR_SET_VALUE(taskStatusText_, taskStatusText) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskManageResponseList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The execution details of the task. The value of this parameter is in the JSON format.
      // 
      // *   **causeCode**: the returned code for the cause.
      // *   **causeMsg**: the returned message for the cause.
      // *   **resCode**: the returned code for troubleshooting.
      // *   **resMsg**: the returned message for troubleshooting.
      // *   **problemType**: the type of the issue.
      // *   **dispatchType**: the task delivery method.
      // *   **uuid**: the UUID of the server.
      // *   **instanceId**: the instance ID of the server.
      // *   **internetIp**: the public IP address of the server.
      // *   **intranetIp**: the private IP address of the server.
      // *   **instanceName**: the instance name of the server.
      // *   **url**: the download URL of the troubleshooting log.
      shared_ptr<string> detailData_ {};
      // The number of tasks that fail to be executed.
      shared_ptr<int32_t> failCount_ {};
      // The progress of the task. Unit: percent (%).
      shared_ptr<string> progress_ {};
      // The execution result of the task.
      shared_ptr<string> resultInfo_ {};
      // The number of tasks that are executed.
      shared_ptr<int32_t> successCount_ {};
      // The timestamp that indicates the time when the task ends. Unit: milliseconds.
      shared_ptr<int64_t> taskEndTime_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The timestamp that indicates the time when the task starts. Unit: milliseconds.
      shared_ptr<int64_t> taskStartTime_ {};
      // The status of the task. Valid values:
      // 
      // *   **1**: The task is started.
      // *   **2**: The task is complete.
      // *   **3**: The task fails.
      // *   **4**: The task times out.
      shared_ptr<int32_t> taskStatus_ {};
      // The text description of the status for the task. Valid values:
      // 
      // *   **INIT**: The task is pending start.
      // *   **START**: The task is started.
      // *   **DISPATCH**: The self-check command is issued.
      // *   **SUCCESS**: The self-check is complete.
      // *   **FAIL**: The task fails.
      // *   **TIMEOUT**: The task times out.
      shared_ptr<string> taskStatusText_ {};
      // The type of the task. Valid values:
      // 
      // *   **CLIENT_PROBLEM_CHECK**: a task of the Security Center client
      // *   **CLIENT_DEV_OPS**: an O\\&M task of Cloud Assistant
      // *   **ASSET_SECURITY_CHECK**: a task for asset information collection
      shared_ptr<string> taskType_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->taskManageResponseList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeOnceTaskResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeOnceTaskResponseBody::PageInfo) };
    inline DescribeOnceTaskResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeOnceTaskResponseBody::PageInfo) };
    inline DescribeOnceTaskResponseBody& setPageInfo(const DescribeOnceTaskResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeOnceTaskResponseBody& setPageInfo(DescribeOnceTaskResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskManageResponseList Field Functions 
    bool hasTaskManageResponseList() const { return this->taskManageResponseList_ != nullptr;};
    void deleteTaskManageResponseList() { this->taskManageResponseList_ = nullptr;};
    inline const vector<DescribeOnceTaskResponseBody::TaskManageResponseList> & getTaskManageResponseList() const { DARABONBA_PTR_GET_CONST(taskManageResponseList_, vector<DescribeOnceTaskResponseBody::TaskManageResponseList>) };
    inline vector<DescribeOnceTaskResponseBody::TaskManageResponseList> getTaskManageResponseList() { DARABONBA_PTR_GET(taskManageResponseList_, vector<DescribeOnceTaskResponseBody::TaskManageResponseList>) };
    inline DescribeOnceTaskResponseBody& setTaskManageResponseList(const vector<DescribeOnceTaskResponseBody::TaskManageResponseList> & taskManageResponseList) { DARABONBA_PTR_SET_VALUE(taskManageResponseList_, taskManageResponseList) };
    inline DescribeOnceTaskResponseBody& setTaskManageResponseList(vector<DescribeOnceTaskResponseBody::TaskManageResponseList> && taskManageResponseList) { DARABONBA_PTR_SET_RVALUE(taskManageResponseList_, taskManageResponseList) };


  protected:
    // The pagination information.
    shared_ptr<DescribeOnceTaskResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the tasks.
    shared_ptr<vector<DescribeOnceTaskResponseBody::TaskManageResponseList>> taskManageResponseList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
