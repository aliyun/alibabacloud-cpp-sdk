// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATARUNS_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATARUNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineKeyPathResponseBodyDataRuns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineKeyPathResponseBodyDataRuns& obj) { 
      DARABONBA_PTR_TO_JSON(AbsTime, absTime_);
      DARABONBA_PTR_TO_JSON(BeginCast, beginCast_);
      DARABONBA_PTR_TO_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_TO_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_TO_JSON(EndCast, endCast_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineKeyPathResponseBodyDataRuns& obj) { 
      DARABONBA_PTR_FROM_JSON(AbsTime, absTime_);
      DARABONBA_PTR_FROM_JSON(BeginCast, beginCast_);
      DARABONBA_PTR_FROM_JSON(BeginRunningTime, beginRunningTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitResTime, beginWaitResTime_);
      DARABONBA_PTR_FROM_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
      DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetBaselineKeyPathResponseBodyDataRuns() = default ;
    GetBaselineKeyPathResponseBodyDataRuns(const GetBaselineKeyPathResponseBodyDataRuns &) = default ;
    GetBaselineKeyPathResponseBodyDataRuns(GetBaselineKeyPathResponseBodyDataRuns &&) = default ;
    GetBaselineKeyPathResponseBodyDataRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineKeyPathResponseBodyDataRuns() = default ;
    GetBaselineKeyPathResponseBodyDataRuns& operator=(const GetBaselineKeyPathResponseBodyDataRuns &) = default ;
    GetBaselineKeyPathResponseBodyDataRuns& operator=(GetBaselineKeyPathResponseBodyDataRuns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->absTime_ != nullptr
        && this->beginCast_ != nullptr && this->beginRunningTime_ != nullptr && this->beginWaitResTime_ != nullptr && this->beginWaitTimeTime_ != nullptr && this->endCast_ != nullptr
        && this->finishTime_ != nullptr && this->status_ != nullptr; };
    // absTime Field Functions 
    bool hasAbsTime() const { return this->absTime_ != nullptr;};
    void deleteAbsTime() { this->absTime_ = nullptr;};
    inline int64_t absTime() const { DARABONBA_PTR_GET_DEFAULT(absTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setAbsTime(int64_t absTime) { DARABONBA_PTR_SET_VALUE(absTime_, absTime) };


    // beginCast Field Functions 
    bool hasBeginCast() const { return this->beginCast_ != nullptr;};
    void deleteBeginCast() { this->beginCast_ = nullptr;};
    inline int64_t beginCast() const { DARABONBA_PTR_GET_DEFAULT(beginCast_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setBeginCast(int64_t beginCast) { DARABONBA_PTR_SET_VALUE(beginCast_, beginCast) };


    // beginRunningTime Field Functions 
    bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
    void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
    inline int64_t beginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


    // beginWaitResTime Field Functions 
    bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
    void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
    inline int64_t beginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


    // beginWaitTimeTime Field Functions 
    bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
    void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
    inline int64_t beginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


    // endCast Field Functions 
    bool hasEndCast() const { return this->endCast_ != nullptr;};
    void deleteEndCast() { this->endCast_ = nullptr;};
    inline int64_t endCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetBaselineKeyPathResponseBodyDataRuns& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBaselineKeyPathResponseBodyDataRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp obtained by adding the predicted time when the instance started to run to the historical average running duration of the instance.
    std::shared_ptr<int64_t> absTime_ = nullptr;
    // The timestamp of the predicted time when the instance started to run.
    std::shared_ptr<int64_t> beginCast_ = nullptr;
    // The timestamp of the actual time when the instance started to run.
    std::shared_ptr<int64_t> beginRunningTime_ = nullptr;
    // The timestamp when the instance started to wait for resources.
    std::shared_ptr<int64_t> beginWaitResTime_ = nullptr;
    // The timestamp when the instance started to wait for the scheduling time.
    std::shared_ptr<int64_t> beginWaitTimeTime_ = nullptr;
    // The timestamp of the predicted time when the instance finished running.
    std::shared_ptr<int64_t> endCast_ = nullptr;
    // The timestamp of the actual time when the instance finished running.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The status of the instance. Valid values: NOT_RUN, WAIT_TIME, WAIT_RESOURCE, RUNNING, CHECKING, CHECKING_CONDITION, FAILURE, and SUCCESS. The value NOT_RUN indicates that the instance is not run. The value WAIT_TIME indicates that the instance is waiting to be run. The value WAIT_RESOURCE indicates that the instance is waiting for resources. The value RUNNING indicates that the instance is running. The value CHECKING indicates that data quality is being checked for the instance. The value CHECKING_CONDITION indicates that branch conditions are being checked for the instance. The value FAILURE indicates that the instance fails to run. The value SUCCESS indicates that the instance is run.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
