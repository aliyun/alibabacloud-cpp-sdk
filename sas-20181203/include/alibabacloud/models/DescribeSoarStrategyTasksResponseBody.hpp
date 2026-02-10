// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODY_HPP_
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
  class DescribeSoarStrategyTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SoarStrategyTasks, soarStrategyTasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SoarStrategyTasks, soarStrategyTasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarStrategyTasksResponseBody() = default ;
    DescribeSoarStrategyTasksResponseBody(const DescribeSoarStrategyTasksResponseBody &) = default ;
    DescribeSoarStrategyTasksResponseBody(DescribeSoarStrategyTasksResponseBody &&) = default ;
    DescribeSoarStrategyTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTasksResponseBody() = default ;
    DescribeSoarStrategyTasksResponseBody& operator=(const DescribeSoarStrategyTasksResponseBody &) = default ;
    DescribeSoarStrategyTasksResponseBody& operator=(DescribeSoarStrategyTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SoarStrategyTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoarStrategyTasks& obj) { 
        DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtFinish, gmtFinish_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, SoarStrategyTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtFinish, gmtFinish_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      };
      SoarStrategyTasks() = default ;
      SoarStrategyTasks(const SoarStrategyTasks &) = default ;
      SoarStrategyTasks(SoarStrategyTasks &&) = default ;
      SoarStrategyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoarStrategyTasks() = default ;
      SoarStrategyTasks& operator=(const SoarStrategyTasks &) = default ;
      SoarStrategyTasks& operator=(SoarStrategyTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failedNum_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtFinish_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->runMode_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr && this->successNum_ == nullptr && this->totalNum_ == nullptr; };
      // failedNum Field Functions 
      bool hasFailedNum() const { return this->failedNum_ != nullptr;};
      void deleteFailedNum() { this->failedNum_ = nullptr;};
      inline int32_t getFailedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
      inline SoarStrategyTasks& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline SoarStrategyTasks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtFinish Field Functions 
      bool hasGmtFinish() const { return this->gmtFinish_ != nullptr;};
      void deleteGmtFinish() { this->gmtFinish_ = nullptr;};
      inline int64_t getGmtFinish() const { DARABONBA_PTR_GET_DEFAULT(gmtFinish_, 0L) };
      inline SoarStrategyTasks& setGmtFinish(int64_t gmtFinish) { DARABONBA_PTR_SET_VALUE(gmtFinish_, gmtFinish) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline SoarStrategyTasks& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SoarStrategyTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SoarStrategyTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
      inline SoarStrategyTasks& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SoarStrategyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline SoarStrategyTasks& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // successNum Field Functions 
      bool hasSuccessNum() const { return this->successNum_ != nullptr;};
      void deleteSuccessNum() { this->successNum_ = nullptr;};
      inline int32_t getSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
      inline SoarStrategyTasks& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline SoarStrategyTasks& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      // The number of execution failures.
      shared_ptr<int32_t> failedNum_ {};
      // The timestamp when the policy task was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The timestamp when the policy task was complete. Unit: milliseconds.
      shared_ptr<int64_t> gmtFinish_ {};
      // The timestamp when the policy task was modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the policy task.
      shared_ptr<int64_t> id_ {};
      // The name of the policy task.
      shared_ptr<string> name_ {};
      // The execution mode. Valid values:
      // 
      // *   runmode_TRIGGER_BY_USER: manually executed
      shared_ptr<string> runMode_ {};
      // The status of the policy task. Valid values:
      // 
      // *   \\-1: waiting
      // *   0: starting
      // *   1: running
      // *   2: finished
      // *   3: schedule
      // *   4: pause
      shared_ptr<string> status_ {};
      // The ID of the policy.
      shared_ptr<int64_t> strategyId_ {};
      // The number of successful executions.
      shared_ptr<int32_t> successNum_ {};
      // The total number of executions.
      shared_ptr<int32_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->soarStrategyTasks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategyTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // soarStrategyTasks Field Functions 
    bool hasSoarStrategyTasks() const { return this->soarStrategyTasks_ != nullptr;};
    void deleteSoarStrategyTasks() { this->soarStrategyTasks_ = nullptr;};
    inline const vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks> & getSoarStrategyTasks() const { DARABONBA_PTR_GET_CONST(soarStrategyTasks_, vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks>) };
    inline vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks> getSoarStrategyTasks() { DARABONBA_PTR_GET(soarStrategyTasks_, vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks>) };
    inline DescribeSoarStrategyTasksResponseBody& setSoarStrategyTasks(const vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks> & soarStrategyTasks) { DARABONBA_PTR_SET_VALUE(soarStrategyTasks_, soarStrategyTasks) };
    inline DescribeSoarStrategyTasksResponseBody& setSoarStrategyTasks(vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks> && soarStrategyTasks) { DARABONBA_PTR_SET_RVALUE(soarStrategyTasks_, soarStrategyTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarStrategyTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The policy tasks.
    shared_ptr<vector<DescribeSoarStrategyTasksResponseBody::SoarStrategyTasks>> soarStrategyTasks_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
