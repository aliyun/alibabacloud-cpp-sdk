// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFailoverTestJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailoverTestJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverTestJobModel, failoverTestJobModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailoverTestJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverTestJobModel, failoverTestJobModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFailoverTestJobResponseBody() = default ;
    DescribeFailoverTestJobResponseBody(const DescribeFailoverTestJobResponseBody &) = default ;
    DescribeFailoverTestJobResponseBody(DescribeFailoverTestJobResponseBody &&) = default ;
    DescribeFailoverTestJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailoverTestJobResponseBody() = default ;
    DescribeFailoverTestJobResponseBody& operator=(const DescribeFailoverTestJobResponseBody &) = default ;
    DescribeFailoverTestJobResponseBody& operator=(DescribeFailoverTestJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailoverTestJobModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailoverTestJobModel& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(JobDuration, jobDuration_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      };
      friend void from_json(const Darabonba::Json& j, FailoverTestJobModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(JobDuration, jobDuration_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      };
      FailoverTestJobModel() = default ;
      FailoverTestJobModel(const FailoverTestJobModel &) = default ;
      FailoverTestJobModel(FailoverTestJobModel &&) = default ;
      FailoverTestJobModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailoverTestJobModel() = default ;
      FailoverTestJobModel& operator=(const FailoverTestJobModel &) = default ;
      FailoverTestJobModel& operator=(FailoverTestJobModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->jobDuration_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->name_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->stopTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FailoverTestJobModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // jobDuration Field Functions 
      bool hasJobDuration() const { return this->jobDuration_ != nullptr;};
      void deleteJobDuration() { this->jobDuration_ = nullptr;};
      inline string getJobDuration() const { DARABONBA_PTR_GET_DEFAULT(jobDuration_, "") };
      inline FailoverTestJobModel& setJobDuration(string jobDuration) { DARABONBA_PTR_SET_VALUE(jobDuration_, jobDuration) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline FailoverTestJobModel& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline FailoverTestJobModel& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FailoverTestJobModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
      inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
      inline FailoverTestJobModel& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
      inline FailoverTestJobModel& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline FailoverTestJobModel& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline FailoverTestJobModel& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FailoverTestJobModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopTime Field Functions 
      bool hasStopTime() const { return this->stopTime_ != nullptr;};
      void deleteStopTime() { this->stopTime_ = nullptr;};
      inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
      inline FailoverTestJobModel& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    protected:
      // The description of the failover test.
      // 
      // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The duration of the failover test. Unit: minutes. Valid values: **1 to 4320**.
      shared_ptr<string> jobDuration_ {};
      // The ID of the failover test.
      shared_ptr<string> jobId_ {};
      // Indicates whether the failover test is performed immediately. Valid values:
      // 
      // *   **StartNow**
      // *   **StartLater**
      shared_ptr<string> jobType_ {};
      // The name of the failover test.
      // 
      // The name must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> name_ {};
      // The IDs of failover test resources.
      shared_ptr<vector<string>> resourceId_ {};
      // The type of failover test resource. Only **PHYSICALCONNECTION** is returned.
      shared_ptr<string> resourceType_ {};
      // The start time of the failover test. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The status of the failover test. Valid values:
      // 
      // *   **Init**
      // *   **Starting**
      // *   **Testing**
      // *   **Stopping**
      // *   **Stopped**
      shared_ptr<string> status_ {};
      // The end time of the failover test. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> stopTime_ {};
    };

    virtual bool empty() const override { return this->failoverTestJobModel_ == nullptr
        && this->requestId_ == nullptr; };
    // failoverTestJobModel Field Functions 
    bool hasFailoverTestJobModel() const { return this->failoverTestJobModel_ != nullptr;};
    void deleteFailoverTestJobModel() { this->failoverTestJobModel_ = nullptr;};
    inline const DescribeFailoverTestJobResponseBody::FailoverTestJobModel & getFailoverTestJobModel() const { DARABONBA_PTR_GET_CONST(failoverTestJobModel_, DescribeFailoverTestJobResponseBody::FailoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBody::FailoverTestJobModel getFailoverTestJobModel() { DARABONBA_PTR_GET(failoverTestJobModel_, DescribeFailoverTestJobResponseBody::FailoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBody& setFailoverTestJobModel(const DescribeFailoverTestJobResponseBody::FailoverTestJobModel & failoverTestJobModel) { DARABONBA_PTR_SET_VALUE(failoverTestJobModel_, failoverTestJobModel) };
    inline DescribeFailoverTestJobResponseBody& setFailoverTestJobModel(DescribeFailoverTestJobResponseBody::FailoverTestJobModel && failoverTestJobModel) { DARABONBA_PTR_SET_RVALUE(failoverTestJobModel_, failoverTestJobModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFailoverTestJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The failover test.
    shared_ptr<DescribeFailoverTestJobResponseBody::FailoverTestJobModel> failoverTestJobModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
