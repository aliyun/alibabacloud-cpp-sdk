// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODYSOARSTRATEGYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKSRESPONSEBODYSOARSTRATEGYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTasksResponseBodySoarStrategyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& obj) { 
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
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks() = default ;
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks(const DescribeSoarStrategyTasksResponseBodySoarStrategyTasks &) = default ;
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks(DescribeSoarStrategyTasksResponseBodySoarStrategyTasks &&) = default ;
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTasksResponseBodySoarStrategyTasks() = default ;
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& operator=(const DescribeSoarStrategyTasksResponseBodySoarStrategyTasks &) = default ;
    DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& operator=(DescribeSoarStrategyTasksResponseBodySoarStrategyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedNum_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtFinish_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->runMode_ != nullptr && this->status_ != nullptr && this->strategyId_ != nullptr && this->successNum_ != nullptr && this->totalNum_ != nullptr; };
    // failedNum Field Functions 
    bool hasFailedNum() const { return this->failedNum_ != nullptr;};
    void deleteFailedNum() { this->failedNum_ = nullptr;};
    inline int32_t failedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtFinish Field Functions 
    bool hasGmtFinish() const { return this->gmtFinish_ != nullptr;};
    void deleteGmtFinish() { this->gmtFinish_ = nullptr;};
    inline int64_t gmtFinish() const { DARABONBA_PTR_GET_DEFAULT(gmtFinish_, 0L) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setGmtFinish(int64_t gmtFinish) { DARABONBA_PTR_SET_VALUE(gmtFinish_, gmtFinish) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // successNum Field Functions 
    bool hasSuccessNum() const { return this->successNum_ != nullptr;};
    void deleteSuccessNum() { this->successNum_ = nullptr;};
    inline int32_t successNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeSoarStrategyTasksResponseBodySoarStrategyTasks& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The number of execution failures.
    std::shared_ptr<int32_t> failedNum_ = nullptr;
    // The timestamp when the policy task was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the policy task was complete. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtFinish_ = nullptr;
    // The timestamp when the policy task was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the policy task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the policy task.
    std::shared_ptr<string> name_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   runmode_TRIGGER_BY_USER: manually executed
    std::shared_ptr<string> runMode_ = nullptr;
    // The status of the policy task. Valid values:
    // 
    // *   \\-1: waiting
    // *   0: starting
    // *   1: running
    // *   2: finished
    // *   3: schedule
    // *   4: pause
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The number of successful executions.
    std::shared_ptr<int32_t> successNum_ = nullptr;
    // The total number of executions.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
