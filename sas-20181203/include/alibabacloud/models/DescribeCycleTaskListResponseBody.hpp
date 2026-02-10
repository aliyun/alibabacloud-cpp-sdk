// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODY_HPP_
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
  class DescribeCycleTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCycleTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CycleScheduleResponseList, cycleScheduleResponseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCycleTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleScheduleResponseList, cycleScheduleResponseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCycleTaskListResponseBody() = default ;
    DescribeCycleTaskListResponseBody(const DescribeCycleTaskListResponseBody &) = default ;
    DescribeCycleTaskListResponseBody(DescribeCycleTaskListResponseBody &&) = default ;
    DescribeCycleTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCycleTaskListResponseBody() = default ;
    DescribeCycleTaskListResponseBody& operator=(const DescribeCycleTaskListResponseBody &) = default ;
    DescribeCycleTaskListResponseBody& operator=(DescribeCycleTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CycleScheduleResponseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CycleScheduleResponseList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(FirstDateStr, firstDateStr_);
        DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
        DARABONBA_PTR_TO_JSON(LastTaskId, lastTaskId_);
        DARABONBA_PTR_TO_JSON(NextStartTimeStr, nextStartTimeStr_);
        DARABONBA_PTR_TO_JSON(Param, param_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(TargetEndTime, targetEndTime_);
        DARABONBA_PTR_TO_JSON(TargetStartTime, targetStartTime_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, CycleScheduleResponseList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(FirstDateStr, firstDateStr_);
        DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
        DARABONBA_PTR_FROM_JSON(LastTaskId, lastTaskId_);
        DARABONBA_PTR_FROM_JSON(NextStartTimeStr, nextStartTimeStr_);
        DARABONBA_PTR_FROM_JSON(Param, param_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(TargetEndTime, targetEndTime_);
        DARABONBA_PTR_FROM_JSON(TargetStartTime, targetStartTime_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      CycleScheduleResponseList() = default ;
      CycleScheduleResponseList(const CycleScheduleResponseList &) = default ;
      CycleScheduleResponseList(CycleScheduleResponseList &&) = default ;
      CycleScheduleResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CycleScheduleResponseList() = default ;
      CycleScheduleResponseList& operator=(const CycleScheduleResponseList &) = default ;
      CycleScheduleResponseList& operator=(CycleScheduleResponseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->firstDateStr_ == nullptr && this->intervalPeriod_ == nullptr && this->lastTaskId_ == nullptr && this->nextStartTimeStr_ == nullptr
        && this->param_ == nullptr && this->periodUnit_ == nullptr && this->targetEndTime_ == nullptr && this->targetStartTime_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline CycleScheduleResponseList& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline CycleScheduleResponseList& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // firstDateStr Field Functions 
      bool hasFirstDateStr() const { return this->firstDateStr_ != nullptr;};
      void deleteFirstDateStr() { this->firstDateStr_ = nullptr;};
      inline int64_t getFirstDateStr() const { DARABONBA_PTR_GET_DEFAULT(firstDateStr_, 0L) };
      inline CycleScheduleResponseList& setFirstDateStr(int64_t firstDateStr) { DARABONBA_PTR_SET_VALUE(firstDateStr_, firstDateStr) };


      // intervalPeriod Field Functions 
      bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
      void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
      inline int32_t getIntervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
      inline CycleScheduleResponseList& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


      // lastTaskId Field Functions 
      bool hasLastTaskId() const { return this->lastTaskId_ != nullptr;};
      void deleteLastTaskId() { this->lastTaskId_ = nullptr;};
      inline string getLastTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastTaskId_, "") };
      inline CycleScheduleResponseList& setLastTaskId(string lastTaskId) { DARABONBA_PTR_SET_VALUE(lastTaskId_, lastTaskId) };


      // nextStartTimeStr Field Functions 
      bool hasNextStartTimeStr() const { return this->nextStartTimeStr_ != nullptr;};
      void deleteNextStartTimeStr() { this->nextStartTimeStr_ = nullptr;};
      inline int64_t getNextStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(nextStartTimeStr_, 0L) };
      inline CycleScheduleResponseList& setNextStartTimeStr(int64_t nextStartTimeStr) { DARABONBA_PTR_SET_VALUE(nextStartTimeStr_, nextStartTimeStr) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline CycleScheduleResponseList& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline CycleScheduleResponseList& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // targetEndTime Field Functions 
      bool hasTargetEndTime() const { return this->targetEndTime_ != nullptr;};
      void deleteTargetEndTime() { this->targetEndTime_ = nullptr;};
      inline int32_t getTargetEndTime() const { DARABONBA_PTR_GET_DEFAULT(targetEndTime_, 0) };
      inline CycleScheduleResponseList& setTargetEndTime(int32_t targetEndTime) { DARABONBA_PTR_SET_VALUE(targetEndTime_, targetEndTime) };


      // targetStartTime Field Functions 
      bool hasTargetStartTime() const { return this->targetStartTime_ != nullptr;};
      void deleteTargetStartTime() { this->targetStartTime_ = nullptr;};
      inline int32_t getTargetStartTime() const { DARABONBA_PTR_GET_DEFAULT(targetStartTime_, 0) };
      inline CycleScheduleResponseList& setTargetStartTime(int32_t targetStartTime) { DARABONBA_PTR_SET_VALUE(targetStartTime_, targetStartTime) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline CycleScheduleResponseList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline CycleScheduleResponseList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The configuration ID.
      shared_ptr<string> configId_ {};
      // Indicates whether the configuration for the task interval was enabled. Valid values:
      // 
      // *   **1**: enabled.
      // *   **0**: disabled.
      shared_ptr<int32_t> enable_ {};
      // The time when the task first started.
      shared_ptr<int64_t> firstDateStr_ {};
      // The interval between which two consecutive tasks are run.
      shared_ptr<int32_t> intervalPeriod_ {};
      // The ID of the last task.
      shared_ptr<string> lastTaskId_ {};
      // The time when the next task starts. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> nextStartTimeStr_ {};
      // The extended information.
      shared_ptr<string> param_ {};
      // The unit of the scan interval. Valid values:
      // 
      // *   **day**
      // *   **hour**
      shared_ptr<string> periodUnit_ {};
      // The end time of the task. The time must be a time frame.
      shared_ptr<int32_t> targetEndTime_ {};
      // The start time of the task. The start time must be a time frame.
      shared_ptr<int32_t> targetStartTime_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The type of the task.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->cycleScheduleResponseList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // cycleScheduleResponseList Field Functions 
    bool hasCycleScheduleResponseList() const { return this->cycleScheduleResponseList_ != nullptr;};
    void deleteCycleScheduleResponseList() { this->cycleScheduleResponseList_ = nullptr;};
    inline const vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList> & getCycleScheduleResponseList() const { DARABONBA_PTR_GET_CONST(cycleScheduleResponseList_, vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList>) };
    inline vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList> getCycleScheduleResponseList() { DARABONBA_PTR_GET(cycleScheduleResponseList_, vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList>) };
    inline DescribeCycleTaskListResponseBody& setCycleScheduleResponseList(const vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList> & cycleScheduleResponseList) { DARABONBA_PTR_SET_VALUE(cycleScheduleResponseList_, cycleScheduleResponseList) };
    inline DescribeCycleTaskListResponseBody& setCycleScheduleResponseList(vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList> && cycleScheduleResponseList) { DARABONBA_PTR_SET_RVALUE(cycleScheduleResponseList_, cycleScheduleResponseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCycleTaskListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCycleTaskListResponseBody::PageInfo) };
    inline DescribeCycleTaskListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCycleTaskListResponseBody::PageInfo) };
    inline DescribeCycleTaskListResponseBody& setPageInfo(const DescribeCycleTaskListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCycleTaskListResponseBody& setPageInfo(DescribeCycleTaskListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCycleTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of periodic scan tasks.
    shared_ptr<vector<DescribeCycleTaskListResponseBody::CycleScheduleResponseList>> cycleScheduleResponseList_ {};
    // The pagination information.
    shared_ptr<DescribeCycleTaskListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
