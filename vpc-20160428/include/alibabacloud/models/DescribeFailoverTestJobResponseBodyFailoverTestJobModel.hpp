// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODYFAILOVERTESTJOBMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBRESPONSEBODYFAILOVERTESTJOBMODEL_HPP_
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
  class DescribeFailoverTestJobResponseBodyFailoverTestJobModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailoverTestJobResponseBodyFailoverTestJobModel& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeFailoverTestJobResponseBodyFailoverTestJobModel& obj) { 
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
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel() = default ;
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel(const DescribeFailoverTestJobResponseBodyFailoverTestJobModel &) = default ;
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel(DescribeFailoverTestJobResponseBodyFailoverTestJobModel &&) = default ;
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailoverTestJobResponseBodyFailoverTestJobModel() = default ;
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel& operator=(const DescribeFailoverTestJobResponseBodyFailoverTestJobModel &) = default ;
    DescribeFailoverTestJobResponseBodyFailoverTestJobModel& operator=(DescribeFailoverTestJobResponseBodyFailoverTestJobModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->jobDuration_ != nullptr && this->jobId_ != nullptr && this->jobType_ != nullptr && this->name_ != nullptr && this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->stopTime_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jobDuration Field Functions 
    bool hasJobDuration() const { return this->jobDuration_ != nullptr;};
    void deleteJobDuration() { this->jobDuration_ = nullptr;};
    inline string jobDuration() const { DARABONBA_PTR_GET_DEFAULT(jobDuration_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setJobDuration(string jobDuration) { DARABONBA_PTR_SET_VALUE(jobDuration_, jobDuration) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeFailoverTestJobResponseBodyFailoverTestJobModel& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    // The description of the failover test.
    // 
    // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the failover test. Unit: minutes. Valid values: **1 to 4320**.
    std::shared_ptr<string> jobDuration_ = nullptr;
    // The ID of the failover test.
    std::shared_ptr<string> jobId_ = nullptr;
    // Indicates whether the failover test is performed immediately. Valid values:
    // 
    // *   **StartNow**
    // *   **StartLater**
    std::shared_ptr<string> jobType_ = nullptr;
    // The name of the failover test.
    // 
    // The name must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of failover test resources.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The type of failover test resource. Only **PHYSICALCONNECTION** is returned.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The start time of the failover test. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the failover test. Valid values:
    // 
    // *   **Init**
    // *   **Starting**
    // *   **Testing**
    // *   **Stopping**
    // *   **Stopped**
    std::shared_ptr<string> status_ = nullptr;
    // The end time of the failover test. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
