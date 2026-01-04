// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBSRESPONSEBODY_HPP_
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
  class DescribeFailoverTestJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailoverTestJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FailoverTestJobList, failoverTestJobList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailoverTestJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FailoverTestJobList, failoverTestJobList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFailoverTestJobsResponseBody() = default ;
    DescribeFailoverTestJobsResponseBody(const DescribeFailoverTestJobsResponseBody &) = default ;
    DescribeFailoverTestJobsResponseBody(DescribeFailoverTestJobsResponseBody &&) = default ;
    DescribeFailoverTestJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailoverTestJobsResponseBody() = default ;
    DescribeFailoverTestJobsResponseBody& operator=(const DescribeFailoverTestJobsResponseBody &) = default ;
    DescribeFailoverTestJobsResponseBody& operator=(DescribeFailoverTestJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailoverTestJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailoverTestJobList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, FailoverTestJobList& obj) { 
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
      FailoverTestJobList() = default ;
      FailoverTestJobList(const FailoverTestJobList &) = default ;
      FailoverTestJobList(FailoverTestJobList &&) = default ;
      FailoverTestJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailoverTestJobList() = default ;
      FailoverTestJobList& operator=(const FailoverTestJobList &) = default ;
      FailoverTestJobList& operator=(FailoverTestJobList &&) = default ;
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
      inline FailoverTestJobList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // jobDuration Field Functions 
      bool hasJobDuration() const { return this->jobDuration_ != nullptr;};
      void deleteJobDuration() { this->jobDuration_ = nullptr;};
      inline string getJobDuration() const { DARABONBA_PTR_GET_DEFAULT(jobDuration_, "") };
      inline FailoverTestJobList& setJobDuration(string jobDuration) { DARABONBA_PTR_SET_VALUE(jobDuration_, jobDuration) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline FailoverTestJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline FailoverTestJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FailoverTestJobList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
      inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
      inline FailoverTestJobList& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
      inline FailoverTestJobList& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline FailoverTestJobList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline FailoverTestJobList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FailoverTestJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopTime Field Functions 
      bool hasStopTime() const { return this->stopTime_ != nullptr;};
      void deleteStopTime() { this->stopTime_ = nullptr;};
      inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
      inline FailoverTestJobList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    protected:
      // The description of the failover test.
      // 
      // The description must be 0 to 256 characters in length and cannot start with \\*\\*http:// **or** https://\\*\\*.
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
      // The IDs of the failover test resources.
      shared_ptr<vector<string>> resourceId_ {};
      // The type of the failover test resource. Only **PHYSICALCONNECTION** is returned.
      shared_ptr<string> resourceType_ {};
      // The beginning of the fault drill task. The time must be in UTC. Specify the time in the ISO 8601 standard in `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> startTime_ {};
      // The status of the failover test. Valid values:
      // 
      // *   **Init**
      // *   **Starting**
      // *   **Testing**
      // *   **Stopping**
      // *   **Stopped**
      shared_ptr<string> status_ {};
      // The end of the fault drill task. The time must be in UTC. Specify the time in the ISO 8601 standard in `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> stopTime_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->failoverTestJobList_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // failoverTestJobList Field Functions 
    bool hasFailoverTestJobList() const { return this->failoverTestJobList_ != nullptr;};
    void deleteFailoverTestJobList() { this->failoverTestJobList_ = nullptr;};
    inline const vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList> & getFailoverTestJobList() const { DARABONBA_PTR_GET_CONST(failoverTestJobList_, vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList>) };
    inline vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList> getFailoverTestJobList() { DARABONBA_PTR_GET(failoverTestJobList_, vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList>) };
    inline DescribeFailoverTestJobsResponseBody& setFailoverTestJobList(const vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList> & failoverTestJobList) { DARABONBA_PTR_SET_VALUE(failoverTestJobList_, failoverTestJobList) };
    inline DescribeFailoverTestJobsResponseBody& setFailoverTestJobList(vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList> && failoverTestJobList) { DARABONBA_PTR_SET_RVALUE(failoverTestJobList_, failoverTestJobList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFailoverTestJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFailoverTestJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries on the current page.
    shared_ptr<int32_t> count_ {};
    // The list of failover tests.
    shared_ptr<vector<DescribeFailoverTestJobsResponseBody::FailoverTestJobList>> failoverTestJobList_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
