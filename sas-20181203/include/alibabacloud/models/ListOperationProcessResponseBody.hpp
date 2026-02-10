// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSRESPONSEBODY_HPP_
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
  class ListOperationProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationProcessResponseBody() = default ;
    ListOperationProcessResponseBody(const ListOperationProcessResponseBody &) = default ;
    ListOperationProcessResponseBody(ListOperationProcessResponseBody &&) = default ;
    ListOperationProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessResponseBody() = default ;
    ListOperationProcessResponseBody& operator=(const ListOperationProcessResponseBody &) = default ;
    ListOperationProcessResponseBody& operator=(ListOperationProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Processes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processes& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DetailTaskReadyCount, detailTaskReadyCount_);
        DARABONBA_PTR_TO_JSON(DetailTaskTotalCount, detailTaskTotalCount_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskSource, taskSource_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Processes& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DetailTaskReadyCount, detailTaskReadyCount_);
        DARABONBA_PTR_FROM_JSON(DetailTaskTotalCount, detailTaskTotalCount_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskSource, taskSource_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Processes() = default ;
      Processes(const Processes &) = default ;
      Processes(Processes &&) = default ;
      Processes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Processes() = default ;
      Processes& operator=(const Processes &) = default ;
      Processes& operator=(Processes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->detailTaskReadyCount_ == nullptr && this->detailTaskTotalCount_ == nullptr && this->endTime_ == nullptr && this->finishCount_ == nullptr && this->startTime_ == nullptr
        && this->statusCode_ == nullptr && this->taskId_ == nullptr && this->taskSource_ == nullptr && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Processes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detailTaskReadyCount Field Functions 
      bool hasDetailTaskReadyCount() const { return this->detailTaskReadyCount_ != nullptr;};
      void deleteDetailTaskReadyCount() { this->detailTaskReadyCount_ = nullptr;};
      inline int32_t getDetailTaskReadyCount() const { DARABONBA_PTR_GET_DEFAULT(detailTaskReadyCount_, 0) };
      inline Processes& setDetailTaskReadyCount(int32_t detailTaskReadyCount) { DARABONBA_PTR_SET_VALUE(detailTaskReadyCount_, detailTaskReadyCount) };


      // detailTaskTotalCount Field Functions 
      bool hasDetailTaskTotalCount() const { return this->detailTaskTotalCount_ != nullptr;};
      void deleteDetailTaskTotalCount() { this->detailTaskTotalCount_ = nullptr;};
      inline int32_t getDetailTaskTotalCount() const { DARABONBA_PTR_GET_DEFAULT(detailTaskTotalCount_, 0) };
      inline Processes& setDetailTaskTotalCount(int32_t detailTaskTotalCount) { DARABONBA_PTR_SET_VALUE(detailTaskTotalCount_, detailTaskTotalCount) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Processes& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finishCount Field Functions 
      bool hasFinishCount() const { return this->finishCount_ != nullptr;};
      void deleteFinishCount() { this->finishCount_ = nullptr;};
      inline int32_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
      inline Processes& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Processes& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
      inline Processes& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Processes& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskSource Field Functions 
      bool hasTaskSource() const { return this->taskSource_ != nullptr;};
      void deleteTaskSource() { this->taskSource_ = nullptr;};
      inline string getTaskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
      inline Processes& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Processes& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Processes& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when the task was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // Number of completed subtasks
      shared_ptr<int32_t> detailTaskReadyCount_ {};
      // Total number of subtasks.
      shared_ptr<int32_t> detailTaskTotalCount_ {};
      // The end time of the task. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The number of tasks that are complete.
      shared_ptr<int32_t> finishCount_ {};
      // The start time of the task. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The task status code. Valid values:
      // 
      // *   0: not started.
      // *   1: running.
      // *   2: complete.
      // *   3: times out.
      shared_ptr<int32_t> statusCode_ {};
      // The ID of the operation task.
      shared_ptr<string> taskId_ {};
      // Task source. Values: 
      // - **YAO_CHI**: YaoChi.
      shared_ptr<string> taskSource_ {};
      // The task type. Valid values:
      // 
      // *   CHECK_ALL: full check.
      // *   CHECK_POLICY: policy-based check for which check items are configured.
      // *   CHECK_SCHEDULE: scheduled check.
      // *   CHECK_ITEM: specific check item-based check.
      // *   CHECK_INSTANCE: specific check item-based check on specific instances.
      shared_ptr<string> taskType_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->processes_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOperationProcessResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOperationProcessResponseBody::PageInfo) };
    inline ListOperationProcessResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOperationProcessResponseBody::PageInfo) };
    inline ListOperationProcessResponseBody& setPageInfo(const ListOperationProcessResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOperationProcessResponseBody& setPageInfo(ListOperationProcessResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<ListOperationProcessResponseBody::Processes> & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, vector<ListOperationProcessResponseBody::Processes>) };
    inline vector<ListOperationProcessResponseBody::Processes> getProcesses() { DARABONBA_PTR_GET(processes_, vector<ListOperationProcessResponseBody::Processes>) };
    inline ListOperationProcessResponseBody& setProcesses(const vector<ListOperationProcessResponseBody::Processes> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ListOperationProcessResponseBody& setProcesses(vector<ListOperationProcessResponseBody::Processes> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListOperationProcessResponseBody::PageInfo> pageInfo_ {};
    // The information about the operation tasks.
    shared_ptr<vector<ListOperationProcessResponseBody::Processes>> processes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
