// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSASYNCRESPONSEBODYJOBGROUPSPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSASYNCRESPONSEBODYJOBGROUPSPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsAsyncResponseBodyJobGroupsProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsAsyncResponseBodyJobGroupsProgress& obj) { 
      DARABONBA_PTR_TO_JSON(CancelledNum, cancelledNum_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExecutingNum, executingNum_);
      DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_TO_JSON(PausedNum, pausedNum_);
      DARABONBA_PTR_TO_JSON(Scheduling, scheduling_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
      DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_TO_JSON(TotalNotAnswered, totalNotAnswered_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsAsyncResponseBodyJobGroupsProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelledNum, cancelledNum_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExecutingNum, executingNum_);
      DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
      DARABONBA_PTR_FROM_JSON(PausedNum, pausedNum_);
      DARABONBA_PTR_FROM_JSON(Scheduling, scheduling_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCompleted, totalCompleted_);
      DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_FROM_JSON(TotalNotAnswered, totalNotAnswered_);
    };
    ListJobGroupsAsyncResponseBodyJobGroupsProgress() = default ;
    ListJobGroupsAsyncResponseBodyJobGroupsProgress(const ListJobGroupsAsyncResponseBodyJobGroupsProgress &) = default ;
    ListJobGroupsAsyncResponseBodyJobGroupsProgress(ListJobGroupsAsyncResponseBodyJobGroupsProgress &&) = default ;
    ListJobGroupsAsyncResponseBodyJobGroupsProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsAsyncResponseBodyJobGroupsProgress() = default ;
    ListJobGroupsAsyncResponseBodyJobGroupsProgress& operator=(const ListJobGroupsAsyncResponseBodyJobGroupsProgress &) = default ;
    ListJobGroupsAsyncResponseBodyJobGroupsProgress& operator=(ListJobGroupsAsyncResponseBodyJobGroupsProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelledNum_ == nullptr
        && return this->duration_ == nullptr && return this->executingNum_ == nullptr && return this->failedNum_ == nullptr && return this->pausedNum_ == nullptr && return this->scheduling_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->totalCompleted_ == nullptr && return this->totalJobs_ == nullptr && return this->totalNotAnswered_ == nullptr; };
    // cancelledNum Field Functions 
    bool hasCancelledNum() const { return this->cancelledNum_ != nullptr;};
    void deleteCancelledNum() { this->cancelledNum_ = nullptr;};
    inline int32_t cancelledNum() const { DARABONBA_PTR_GET_DEFAULT(cancelledNum_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setCancelledNum(int32_t cancelledNum) { DARABONBA_PTR_SET_VALUE(cancelledNum_, cancelledNum) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // executingNum Field Functions 
    bool hasExecutingNum() const { return this->executingNum_ != nullptr;};
    void deleteExecutingNum() { this->executingNum_ = nullptr;};
    inline int32_t executingNum() const { DARABONBA_PTR_GET_DEFAULT(executingNum_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setExecutingNum(int32_t executingNum) { DARABONBA_PTR_SET_VALUE(executingNum_, executingNum) };


    // failedNum Field Functions 
    bool hasFailedNum() const { return this->failedNum_ != nullptr;};
    void deleteFailedNum() { this->failedNum_ = nullptr;};
    inline int32_t failedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


    // pausedNum Field Functions 
    bool hasPausedNum() const { return this->pausedNum_ != nullptr;};
    void deletePausedNum() { this->pausedNum_ = nullptr;};
    inline int32_t pausedNum() const { DARABONBA_PTR_GET_DEFAULT(pausedNum_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setPausedNum(int32_t pausedNum) { DARABONBA_PTR_SET_VALUE(pausedNum_, pausedNum) };


    // scheduling Field Functions 
    bool hasScheduling() const { return this->scheduling_ != nullptr;};
    void deleteScheduling() { this->scheduling_ = nullptr;};
    inline int32_t scheduling() const { DARABONBA_PTR_GET_DEFAULT(scheduling_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setScheduling(int32_t scheduling) { DARABONBA_PTR_SET_VALUE(scheduling_, scheduling) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCompleted Field Functions 
    bool hasTotalCompleted() const { return this->totalCompleted_ != nullptr;};
    void deleteTotalCompleted() { this->totalCompleted_ = nullptr;};
    inline int32_t totalCompleted() const { DARABONBA_PTR_GET_DEFAULT(totalCompleted_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setTotalCompleted(int32_t totalCompleted) { DARABONBA_PTR_SET_VALUE(totalCompleted_, totalCompleted) };


    // totalJobs Field Functions 
    bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
    void deleteTotalJobs() { this->totalJobs_ = nullptr;};
    inline int32_t totalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


    // totalNotAnswered Field Functions 
    bool hasTotalNotAnswered() const { return this->totalNotAnswered_ != nullptr;};
    void deleteTotalNotAnswered() { this->totalNotAnswered_ = nullptr;};
    inline int32_t totalNotAnswered() const { DARABONBA_PTR_GET_DEFAULT(totalNotAnswered_, 0) };
    inline ListJobGroupsAsyncResponseBodyJobGroupsProgress& setTotalNotAnswered(int32_t totalNotAnswered) { DARABONBA_PTR_SET_VALUE(totalNotAnswered_, totalNotAnswered) };


  protected:
    std::shared_ptr<int32_t> cancelledNum_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<int32_t> executingNum_ = nullptr;
    std::shared_ptr<int32_t> failedNum_ = nullptr;
    std::shared_ptr<int32_t> pausedNum_ = nullptr;
    std::shared_ptr<int32_t> scheduling_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalCompleted_ = nullptr;
    std::shared_ptr<int32_t> totalJobs_ = nullptr;
    std::shared_ptr<int32_t> totalNotAnswered_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
