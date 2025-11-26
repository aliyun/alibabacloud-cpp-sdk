// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupProgressBriefs.hpp>
#include <alibabacloud/models/DescribeJobGroupResponseBodyJobGroupProgressCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroupProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroupProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Briefs, briefs_);
      DARABONBA_PTR_TO_JSON(Cancelled, cancelled_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Executing, executing_);
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Paused, paused_);
      DARABONBA_PTR_TO_JSON(Scheduling, scheduling_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
      DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_TO_JSON(TotalNotAnswered, totalNotAnswered_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroupProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Briefs, briefs_);
      DARABONBA_PTR_FROM_JSON(Cancelled, cancelled_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Executing, executing_);
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
      DARABONBA_PTR_FROM_JSON(Scheduling, scheduling_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCompleted, totalCompleted_);
      DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_FROM_JSON(TotalNotAnswered, totalNotAnswered_);
    };
    DescribeJobGroupResponseBodyJobGroupProgress() = default ;
    DescribeJobGroupResponseBodyJobGroupProgress(const DescribeJobGroupResponseBodyJobGroupProgress &) = default ;
    DescribeJobGroupResponseBodyJobGroupProgress(DescribeJobGroupResponseBodyJobGroupProgress &&) = default ;
    DescribeJobGroupResponseBodyJobGroupProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroupProgress() = default ;
    DescribeJobGroupResponseBodyJobGroupProgress& operator=(const DescribeJobGroupResponseBodyJobGroupProgress &) = default ;
    DescribeJobGroupResponseBodyJobGroupProgress& operator=(DescribeJobGroupResponseBodyJobGroupProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->briefs_ == nullptr
        && return this->cancelled_ == nullptr && return this->categories_ == nullptr && return this->duration_ == nullptr && return this->executing_ == nullptr && return this->failed_ == nullptr
        && return this->paused_ == nullptr && return this->scheduling_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->totalCompleted_ == nullptr
        && return this->totalJobs_ == nullptr && return this->totalNotAnswered_ == nullptr; };
    // briefs Field Functions 
    bool hasBriefs() const { return this->briefs_ != nullptr;};
    void deleteBriefs() { this->briefs_ = nullptr;};
    inline const vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs> & briefs() const { DARABONBA_PTR_GET_CONST(briefs_, vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs>) };
    inline vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs> briefs() { DARABONBA_PTR_GET(briefs_, vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs>) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setBriefs(const vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs> & briefs) { DARABONBA_PTR_SET_VALUE(briefs_, briefs) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setBriefs(vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs> && briefs) { DARABONBA_PTR_SET_RVALUE(briefs_, briefs) };


    // cancelled Field Functions 
    bool hasCancelled() const { return this->cancelled_ != nullptr;};
    void deleteCancelled() { this->cancelled_ = nullptr;};
    inline int32_t cancelled() const { DARABONBA_PTR_GET_DEFAULT(cancelled_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setCancelled(int32_t cancelled) { DARABONBA_PTR_SET_VALUE(cancelled_, cancelled) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories>) };
    inline vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories>) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setCategories(const vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setCategories(vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // executing Field Functions 
    bool hasExecuting() const { return this->executing_ != nullptr;};
    void deleteExecuting() { this->executing_ = nullptr;};
    inline int32_t executing() const { DARABONBA_PTR_GET_DEFAULT(executing_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setExecuting(int32_t executing) { DARABONBA_PTR_SET_VALUE(executing_, executing) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline int32_t paused() const { DARABONBA_PTR_GET_DEFAULT(paused_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setPaused(int32_t paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


    // scheduling Field Functions 
    bool hasScheduling() const { return this->scheduling_ != nullptr;};
    void deleteScheduling() { this->scheduling_ = nullptr;};
    inline int32_t scheduling() const { DARABONBA_PTR_GET_DEFAULT(scheduling_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setScheduling(int32_t scheduling) { DARABONBA_PTR_SET_VALUE(scheduling_, scheduling) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCompleted Field Functions 
    bool hasTotalCompleted() const { return this->totalCompleted_ != nullptr;};
    void deleteTotalCompleted() { this->totalCompleted_ = nullptr;};
    inline int32_t totalCompleted() const { DARABONBA_PTR_GET_DEFAULT(totalCompleted_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setTotalCompleted(int32_t totalCompleted) { DARABONBA_PTR_SET_VALUE(totalCompleted_, totalCompleted) };


    // totalJobs Field Functions 
    bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
    void deleteTotalJobs() { this->totalJobs_ = nullptr;};
    inline int32_t totalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


    // totalNotAnswered Field Functions 
    bool hasTotalNotAnswered() const { return this->totalNotAnswered_ != nullptr;};
    void deleteTotalNotAnswered() { this->totalNotAnswered_ = nullptr;};
    inline int32_t totalNotAnswered() const { DARABONBA_PTR_GET_DEFAULT(totalNotAnswered_, 0) };
    inline DescribeJobGroupResponseBodyJobGroupProgress& setTotalNotAnswered(int32_t totalNotAnswered) { DARABONBA_PTR_SET_VALUE(totalNotAnswered_, totalNotAnswered) };


  protected:
    std::shared_ptr<vector<Models::DescribeJobGroupResponseBodyJobGroupProgressBriefs>> briefs_ = nullptr;
    std::shared_ptr<int32_t> cancelled_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobGroupResponseBodyJobGroupProgressCategories>> categories_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<int32_t> executing_ = nullptr;
    std::shared_ptr<int32_t> failed_ = nullptr;
    std::shared_ptr<int32_t> paused_ = nullptr;
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
