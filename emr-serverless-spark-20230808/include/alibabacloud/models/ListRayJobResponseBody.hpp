// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListRayJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(rayJobs, rayJobs_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(rayJobs, rayJobs_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListRayJobResponseBody() = default ;
    ListRayJobResponseBody(const ListRayJobResponseBody &) = default ;
    ListRayJobResponseBody(ListRayJobResponseBody &&) = default ;
    ListRayJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayJobResponseBody() = default ;
    ListRayJobResponseBody& operator=(const ListRayJobResponseBody &) = default ;
    ListRayJobResponseBody& operator=(ListRayJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RayJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RayJobs& obj) { 
        DARABONBA_PTR_TO_JSON(clusterState, clusterState_);
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
        DARABONBA_PTR_TO_JSON(dashboardUrl, dashboardUrl_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceQueue, resourceQueue_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
        DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
      };
      friend void from_json(const Darabonba::Json& j, RayJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterState, clusterState_);
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
        DARABONBA_PTR_FROM_JSON(dashboardUrl, dashboardUrl_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceQueue, resourceQueue_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
        DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
      };
      RayJobs() = default ;
      RayJobs(const RayJobs &) = default ;
      RayJobs(RayJobs &&) = default ;
      RayJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RayJobs() = default ;
      RayJobs& operator=(const RayJobs &) = default ;
      RayJobs& operator=(RayJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterState_ == nullptr
        && this->creatorName_ == nullptr && this->cuHours_ == nullptr && this->dashboardUrl_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr
        && this->name_ == nullptr && this->resourceQueue_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->submissionId_ == nullptr
        && this->submitTime_ == nullptr; };
      // clusterState Field Functions 
      bool hasClusterState() const { return this->clusterState_ != nullptr;};
      void deleteClusterState() { this->clusterState_ = nullptr;};
      inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
      inline RayJobs& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline RayJobs& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // cuHours Field Functions 
      bool hasCuHours() const { return this->cuHours_ != nullptr;};
      void deleteCuHours() { this->cuHours_ = nullptr;};
      inline double getCuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
      inline RayJobs& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


      // dashboardUrl Field Functions 
      bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
      void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
      inline string getDashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
      inline RayJobs& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline RayJobs& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline RayJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RayJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceQueue Field Functions 
      bool hasResourceQueue() const { return this->resourceQueue_ != nullptr;};
      void deleteResourceQueue() { this->resourceQueue_ = nullptr;};
      inline string getResourceQueue() const { DARABONBA_PTR_GET_DEFAULT(resourceQueue_, "") };
      inline RayJobs& setResourceQueue(string resourceQueue) { DARABONBA_PTR_SET_VALUE(resourceQueue_, resourceQueue) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline RayJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RayJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submissionId Field Functions 
      bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
      void deleteSubmissionId() { this->submissionId_ = nullptr;};
      inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
      inline RayJobs& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline int64_t getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
      inline RayJobs& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    protected:
      shared_ptr<string> clusterState_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<double> cuHours_ {};
      shared_ptr<string> dashboardUrl_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> resourceQueue_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> submissionId_ {};
      shared_ptr<int64_t> submitTime_ {};
    };

    virtual bool empty() const override { return this->rayJobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // rayJobs Field Functions 
    bool hasRayJobs() const { return this->rayJobs_ != nullptr;};
    void deleteRayJobs() { this->rayJobs_ = nullptr;};
    inline const vector<ListRayJobResponseBody::RayJobs> & getRayJobs() const { DARABONBA_PTR_GET_CONST(rayJobs_, vector<ListRayJobResponseBody::RayJobs>) };
    inline vector<ListRayJobResponseBody::RayJobs> getRayJobs() { DARABONBA_PTR_GET(rayJobs_, vector<ListRayJobResponseBody::RayJobs>) };
    inline ListRayJobResponseBody& setRayJobs(const vector<ListRayJobResponseBody::RayJobs> & rayJobs) { DARABONBA_PTR_SET_VALUE(rayJobs_, rayJobs) };
    inline ListRayJobResponseBody& setRayJobs(vector<ListRayJobResponseBody::RayJobs> && rayJobs) { DARABONBA_PTR_SET_RVALUE(rayJobs_, rayJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRayJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRayJobResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRayJobResponseBody::RayJobs>> rayJobs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
