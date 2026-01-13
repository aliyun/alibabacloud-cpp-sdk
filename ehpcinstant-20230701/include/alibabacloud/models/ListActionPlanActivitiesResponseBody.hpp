// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANACTIVITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlanActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlanActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanActivities, actionPlanActivities_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlanActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanActivities, actionPlanActivities_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListActionPlanActivitiesResponseBody() = default ;
    ListActionPlanActivitiesResponseBody(const ListActionPlanActivitiesResponseBody &) = default ;
    ListActionPlanActivitiesResponseBody(ListActionPlanActivitiesResponseBody &&) = default ;
    ListActionPlanActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlanActivitiesResponseBody() = default ;
    ListActionPlanActivitiesResponseBody& operator=(const ListActionPlanActivitiesResponseBody &) = default ;
    ListActionPlanActivitiesResponseBody& operator=(ListActionPlanActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ActionPlanActivities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionPlanActivities& obj) { 
        DARABONBA_PTR_TO_JSON(ActionPlanActivityId, actionPlanActivityId_);
        DARABONBA_PTR_TO_JSON(CreatedCapacity, createdCapacity_);
        DARABONBA_PTR_TO_JSON(DestroyCapacity, destroyCapacity_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Jobs, jobs_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ActionPlanActivities& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionPlanActivityId, actionPlanActivityId_);
        DARABONBA_PTR_FROM_JSON(CreatedCapacity, createdCapacity_);
        DARABONBA_PTR_FROM_JSON(DestroyCapacity, destroyCapacity_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ActionPlanActivities() = default ;
      ActionPlanActivities(const ActionPlanActivities &) = default ;
      ActionPlanActivities(ActionPlanActivities &&) = default ;
      ActionPlanActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActionPlanActivities() = default ;
      ActionPlanActivities& operator=(const ActionPlanActivities &) = default ;
      ActionPlanActivities& operator=(ActionPlanActivities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Jobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobOperationType, jobOperationType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobOperationType, jobOperationType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        Jobs() = default ;
        Jobs(const Jobs &) = default ;
        Jobs(Jobs &&) = default ;
        Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Jobs() = default ;
        Jobs& operator=(const Jobs &) = default ;
        Jobs& operator=(Jobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobOperationType_ == nullptr && this->regionId_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobOperationType Field Functions 
        bool hasJobOperationType() const { return this->jobOperationType_ != nullptr;};
        void deleteJobOperationType() { this->jobOperationType_ = nullptr;};
        inline string getJobOperationType() const { DARABONBA_PTR_GET_DEFAULT(jobOperationType_, "") };
        inline Jobs& setJobOperationType(string jobOperationType) { DARABONBA_PTR_SET_VALUE(jobOperationType_, jobOperationType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Jobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The ID of the job.
        shared_ptr<string> jobId_ {};
        // The operation type of the execution plan activity on the job. Possible values are as follows:
        // 
        // *   Create
        // *   Delete
        shared_ptr<string> jobOperationType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->actionPlanActivityId_ == nullptr
        && this->createdCapacity_ == nullptr && this->destroyCapacity_ == nullptr && this->endTime_ == nullptr && this->jobs_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
      // actionPlanActivityId Field Functions 
      bool hasActionPlanActivityId() const { return this->actionPlanActivityId_ != nullptr;};
      void deleteActionPlanActivityId() { this->actionPlanActivityId_ = nullptr;};
      inline string getActionPlanActivityId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanActivityId_, "") };
      inline ActionPlanActivities& setActionPlanActivityId(string actionPlanActivityId) { DARABONBA_PTR_SET_VALUE(actionPlanActivityId_, actionPlanActivityId) };


      // createdCapacity Field Functions 
      bool hasCreatedCapacity() const { return this->createdCapacity_ != nullptr;};
      void deleteCreatedCapacity() { this->createdCapacity_ = nullptr;};
      inline float getCreatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(createdCapacity_, 0.0) };
      inline ActionPlanActivities& setCreatedCapacity(float createdCapacity) { DARABONBA_PTR_SET_VALUE(createdCapacity_, createdCapacity) };


      // destroyCapacity Field Functions 
      bool hasDestroyCapacity() const { return this->destroyCapacity_ != nullptr;};
      void deleteDestroyCapacity() { this->destroyCapacity_ = nullptr;};
      inline float getDestroyCapacity() const { DARABONBA_PTR_GET_DEFAULT(destroyCapacity_, 0.0) };
      inline ActionPlanActivities& setDestroyCapacity(float destroyCapacity) { DARABONBA_PTR_SET_VALUE(destroyCapacity_, destroyCapacity) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ActionPlanActivities& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<ActionPlanActivities::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ActionPlanActivities::Jobs>) };
      inline vector<ActionPlanActivities::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ActionPlanActivities::Jobs>) };
      inline ActionPlanActivities& setJobs(const vector<ActionPlanActivities::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline ActionPlanActivities& setJobs(vector<ActionPlanActivities::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ActionPlanActivities& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ActionPlanActivities& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The activity ID of the execution plan.
      shared_ptr<string> actionPlanActivityId_ {};
      // The increased capacity of this execution plan activity.
      shared_ptr<float> createdCapacity_ {};
      // The capacity released by this execution plan activity.
      shared_ptr<float> destroyCapacity_ {};
      // The end time of the execution plan activity.
      shared_ptr<string> endTime_ {};
      // The list of Instant jobs involved in the execution plan.
      shared_ptr<vector<ActionPlanActivities::Jobs>> jobs_ {};
      // The start time of the implementation of the planned activity.
      shared_ptr<string> startTime_ {};
      // The implementation status of the execution plan activity. Valid values:
      // 
      // *   InProcess
      // *   Completed
      // *   Failed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->actionPlanActivities_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // actionPlanActivities Field Functions 
    bool hasActionPlanActivities() const { return this->actionPlanActivities_ != nullptr;};
    void deleteActionPlanActivities() { this->actionPlanActivities_ = nullptr;};
    inline const vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities> & getActionPlanActivities() const { DARABONBA_PTR_GET_CONST(actionPlanActivities_, vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities>) };
    inline vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities> getActionPlanActivities() { DARABONBA_PTR_GET(actionPlanActivities_, vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities>) };
    inline ListActionPlanActivitiesResponseBody& setActionPlanActivities(const vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities> & actionPlanActivities) { DARABONBA_PTR_SET_VALUE(actionPlanActivities_, actionPlanActivities) };
    inline ListActionPlanActivitiesResponseBody& setActionPlanActivities(vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities> && actionPlanActivities) { DARABONBA_PTR_SET_RVALUE(actionPlanActivities_, actionPlanActivities) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlanActivitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlanActivitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionPlanActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListActionPlanActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of execution details of the execution plan.
    shared_ptr<vector<ListActionPlanActivitiesResponseBody::ActionPlanActivities>> actionPlanActivities_ {};
    // The maximum number of records returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Total data count under the current request conditions (optional; not returned by default).
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
