// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODYACTIONPLANACTIVITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODYACTIONPLANACTIVITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlanActivitiesResponseBodyActionPlanActivities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlanActivitiesResponseBodyActionPlanActivities& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanActivityId, actionPlanActivityId_);
      DARABONBA_PTR_TO_JSON(CreatedCapacity, createdCapacity_);
      DARABONBA_PTR_TO_JSON(DestroyCapacity, destroyCapacity_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlanActivitiesResponseBodyActionPlanActivities& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanActivityId, actionPlanActivityId_);
      DARABONBA_PTR_FROM_JSON(CreatedCapacity, createdCapacity_);
      DARABONBA_PTR_FROM_JSON(DestroyCapacity, destroyCapacity_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListActionPlanActivitiesResponseBodyActionPlanActivities() = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivities(const ListActionPlanActivitiesResponseBodyActionPlanActivities &) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivities(ListActionPlanActivitiesResponseBodyActionPlanActivities &&) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlanActivitiesResponseBodyActionPlanActivities() = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivities& operator=(const ListActionPlanActivitiesResponseBodyActionPlanActivities &) = default ;
    ListActionPlanActivitiesResponseBodyActionPlanActivities& operator=(ListActionPlanActivitiesResponseBodyActionPlanActivities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanActivityId_ == nullptr
        && return this->createdCapacity_ == nullptr && return this->destroyCapacity_ == nullptr && return this->endTime_ == nullptr && return this->jobs_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // actionPlanActivityId Field Functions 
    bool hasActionPlanActivityId() const { return this->actionPlanActivityId_ != nullptr;};
    void deleteActionPlanActivityId() { this->actionPlanActivityId_ = nullptr;};
    inline string actionPlanActivityId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanActivityId_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setActionPlanActivityId(string actionPlanActivityId) { DARABONBA_PTR_SET_VALUE(actionPlanActivityId_, actionPlanActivityId) };


    // createdCapacity Field Functions 
    bool hasCreatedCapacity() const { return this->createdCapacity_ != nullptr;};
    void deleteCreatedCapacity() { this->createdCapacity_ = nullptr;};
    inline float createdCapacity() const { DARABONBA_PTR_GET_DEFAULT(createdCapacity_, 0.0) };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setCreatedCapacity(float createdCapacity) { DARABONBA_PTR_SET_VALUE(createdCapacity_, createdCapacity) };


    // destroyCapacity Field Functions 
    bool hasDestroyCapacity() const { return this->destroyCapacity_ != nullptr;};
    void deleteDestroyCapacity() { this->destroyCapacity_ = nullptr;};
    inline float destroyCapacity() const { DARABONBA_PTR_GET_DEFAULT(destroyCapacity_, 0.0) };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setDestroyCapacity(float destroyCapacity) { DARABONBA_PTR_SET_VALUE(destroyCapacity_, destroyCapacity) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs>) };
    inline vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs>) };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setJobs(const vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setJobs(vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListActionPlanActivitiesResponseBodyActionPlanActivities& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The activity ID of the execution plan.
    std::shared_ptr<string> actionPlanActivityId_ = nullptr;
    // The increased capacity of this execution plan activity.
    std::shared_ptr<float> createdCapacity_ = nullptr;
    // The capacity released by this execution plan activity.
    std::shared_ptr<float> destroyCapacity_ = nullptr;
    // The end time of the execution plan activity.
    std::shared_ptr<string> endTime_ = nullptr;
    // The list of Instant jobs involved in the execution plan.
    std::shared_ptr<vector<Models::ListActionPlanActivitiesResponseBodyActionPlanActivitiesJobs>> jobs_ = nullptr;
    // The start time of the implementation of the planned activity.
    std::shared_ptr<string> startTime_ = nullptr;
    // The implementation status of the execution plan activity. Valid values:
    // 
    // *   InProcess
    // *   Completed
    // *   Failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
