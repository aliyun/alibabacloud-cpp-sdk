// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODY_HPP_
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
  class DescribeSyncAssetTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskRecords, taskRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskRecords, taskRecords_);
    };
    DescribeSyncAssetTaskListResponseBody() = default ;
    DescribeSyncAssetTaskListResponseBody(const DescribeSyncAssetTaskListResponseBody &) = default ;
    DescribeSyncAssetTaskListResponseBody(DescribeSyncAssetTaskListResponseBody &&) = default ;
    DescribeSyncAssetTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskListResponseBody() = default ;
    DescribeSyncAssetTaskListResponseBody& operator=(const DescribeSyncAssetTaskListResponseBody &) = default ;
    DescribeSyncAssetTaskListResponseBody& operator=(DescribeSyncAssetTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
        DARABONBA_PTR_TO_JSON(ProcessRate, processRate_);
        DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
        DARABONBA_PTR_FROM_JSON(ProcessRate, processRate_);
        DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TaskRecords() = default ;
      TaskRecords(const TaskRecords &) = default ;
      TaskRecords(TaskRecords &&) = default ;
      TaskRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskRecords() = default ;
      TaskRecords& operator=(const TaskRecords &) = default ;
      TaskRecords& operator=(TaskRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetCount_ == nullptr
        && this->ipSegments_ == nullptr && this->processRate_ == nullptr && this->rootTaskId_ == nullptr && this->taskEndTime_ == nullptr && this->taskName_ == nullptr
        && this->taskStartTime_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int32_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
      inline TaskRecords& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // ipSegments Field Functions 
      bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
      void deleteIpSegments() { this->ipSegments_ = nullptr;};
      inline string getIpSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
      inline TaskRecords& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


      // processRate Field Functions 
      bool hasProcessRate() const { return this->processRate_ != nullptr;};
      void deleteProcessRate() { this->processRate_ = nullptr;};
      inline int32_t getProcessRate() const { DARABONBA_PTR_GET_DEFAULT(processRate_, 0) };
      inline TaskRecords& setProcessRate(int32_t processRate) { DARABONBA_PTR_SET_VALUE(processRate_, processRate) };


      // rootTaskId Field Functions 
      bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
      void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
      inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
      inline TaskRecords& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline int64_t getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
      inline TaskRecords& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskRecords& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline int64_t getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
      inline TaskRecords& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline TaskRecords& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskRecords& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The number of assets that are detected by the task.
      shared_ptr<int32_t> assetCount_ {};
      // The CIDR blocks that are used for scanning. Multiple CIDR blocks are separated by commas (,).
      shared_ptr<string> ipSegments_ {};
      // The progress of the task, in percentage.
      shared_ptr<int32_t> processRate_ {};
      // The ID of the root task.
      shared_ptr<string> rootTaskId_ {};
      // The timestamp when the task ended.
      shared_ptr<int64_t> taskEndTime_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The timestamp when the task started. Unit: milliseconds.
      shared_ptr<int64_t> taskStartTime_ {};
      // The status of the IDC scan task. Valid Values:
      // 
      // *   **INIT**: The task is not started.
      // *   **START**: The task is started.
      // *   **MESSAGE_SEND**: The command is sent.
      // *   **SUCCESS**: The task is complete.
      // *   **FAIL**: The task failed.
      // *   **TIMEOUT**: The task timed out.
      shared_ptr<string> taskStatus_ {};
      // The type of the task. The value is fixed as **IDC_PROBE_SCAN**, which indicates an IDC scan task.
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
      // The number of IDC scan tasks on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of IDC scan tasks per page. Default value: 20. If you leave this parameter empty, 20 IDC scan tasks are returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of IDC scan tasks returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->taskRecords_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSyncAssetTaskListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSyncAssetTaskListResponseBody::PageInfo) };
    inline DescribeSyncAssetTaskListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSyncAssetTaskListResponseBody::PageInfo) };
    inline DescribeSyncAssetTaskListResponseBody& setPageInfo(const DescribeSyncAssetTaskListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSyncAssetTaskListResponseBody& setPageInfo(DescribeSyncAssetTaskListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAssetTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskRecords Field Functions 
    bool hasTaskRecords() const { return this->taskRecords_ != nullptr;};
    void deleteTaskRecords() { this->taskRecords_ = nullptr;};
    inline const vector<DescribeSyncAssetTaskListResponseBody::TaskRecords> & getTaskRecords() const { DARABONBA_PTR_GET_CONST(taskRecords_, vector<DescribeSyncAssetTaskListResponseBody::TaskRecords>) };
    inline vector<DescribeSyncAssetTaskListResponseBody::TaskRecords> getTaskRecords() { DARABONBA_PTR_GET(taskRecords_, vector<DescribeSyncAssetTaskListResponseBody::TaskRecords>) };
    inline DescribeSyncAssetTaskListResponseBody& setTaskRecords(const vector<DescribeSyncAssetTaskListResponseBody::TaskRecords> & taskRecords) { DARABONBA_PTR_SET_VALUE(taskRecords_, taskRecords) };
    inline DescribeSyncAssetTaskListResponseBody& setTaskRecords(vector<DescribeSyncAssetTaskListResponseBody::TaskRecords> && taskRecords) { DARABONBA_PTR_SET_RVALUE(taskRecords_, taskRecords) };


  protected:
    // The pagination information.
    shared_ptr<DescribeSyncAssetTaskListResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IDC scan tasks.
    shared_ptr<vector<DescribeSyncAssetTaskListResponseBody::TaskRecords>> taskRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
