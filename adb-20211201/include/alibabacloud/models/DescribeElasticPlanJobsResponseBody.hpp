// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticPlanJobsResponseBody() = default ;
    DescribeElasticPlanJobsResponseBody(const DescribeElasticPlanJobsResponseBody &) = default ;
    DescribeElasticPlanJobsResponseBody(DescribeElasticPlanJobsResponseBody &&) = default ;
    DescribeElasticPlanJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanJobsResponseBody() = default ;
    DescribeElasticPlanJobsResponseBody& operator=(const DescribeElasticPlanJobsResponseBody &) = default ;
    DescribeElasticPlanJobsResponseBody& operator=(DescribeElasticPlanJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticAcu, elasticAcu_);
        DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_TO_JSON(ReserveAcu, reserveAcu_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_TO_JSON(TotalAcu, totalAcu_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticAcu, elasticAcu_);
        DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceSize, instanceSize_);
        DARABONBA_PTR_FROM_JSON(ReserveAcu, reserveAcu_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_FROM_JSON(TotalAcu, totalAcu_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->elasticAcu_ == nullptr
        && this->elasticPlanName_ == nullptr && this->endTime_ == nullptr && this->instanceSize_ == nullptr && this->reserveAcu_ == nullptr && this->resourceGroupName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->targetSize_ == nullptr && this->totalAcu_ == nullptr && this->type_ == nullptr; };
      // elasticAcu Field Functions 
      bool hasElasticAcu() const { return this->elasticAcu_ != nullptr;};
      void deleteElasticAcu() { this->elasticAcu_ = nullptr;};
      inline string getElasticAcu() const { DARABONBA_PTR_GET_DEFAULT(elasticAcu_, "") };
      inline Jobs& setElasticAcu(string elasticAcu) { DARABONBA_PTR_SET_VALUE(elasticAcu_, elasticAcu) };


      // elasticPlanName Field Functions 
      bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
      void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
      inline string getElasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
      inline Jobs& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Jobs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceSize Field Functions 
      bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
      void deleteInstanceSize() { this->instanceSize_ = nullptr;};
      inline int32_t getInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, 0) };
      inline Jobs& setInstanceSize(int32_t instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


      // reserveAcu Field Functions 
      bool hasReserveAcu() const { return this->reserveAcu_ != nullptr;};
      void deleteReserveAcu() { this->reserveAcu_ = nullptr;};
      inline string getReserveAcu() const { DARABONBA_PTR_GET_DEFAULT(reserveAcu_, "") };
      inline Jobs& setReserveAcu(string reserveAcu) { DARABONBA_PTR_SET_VALUE(reserveAcu_, reserveAcu) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline Jobs& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Jobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetSize Field Functions 
      bool hasTargetSize() const { return this->targetSize_ != nullptr;};
      void deleteTargetSize() { this->targetSize_ = nullptr;};
      inline string getTargetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
      inline Jobs& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


      // totalAcu Field Functions 
      bool hasTotalAcu() const { return this->totalAcu_ != nullptr;};
      void deleteTotalAcu() { this->totalAcu_ = nullptr;};
      inline string getTotalAcu() const { DARABONBA_PTR_GET_DEFAULT(totalAcu_, "") };
      inline Jobs& setTotalAcu(string totalAcu) { DARABONBA_PTR_SET_VALUE(totalAcu_, totalAcu) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Jobs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The amount of elastic resources.
      // 
      // > 
      // 
      // *   If Type is set to EXECUTOR, ElasticAcu indicates the amount of elastic resources in the current resource group.
      // 
      // *   If Type is set to WORKER, ElasticAcu indicates the total amount of elastic storage resources in the current cluster.
      shared_ptr<string> elasticAcu_ {};
      // The name of the scaling plan.
      shared_ptr<string> elasticPlanName_ {};
      // The end time of the scaling plan job.
      // 
      // >  The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The number of compute nodes or storage replica sets.
      // 
      // > 
      // 
      // *   If Type is set to EXECUTOR, InstanceSize indicates the number of compute nodes in the cluster.
      // 
      // *   If Type is set to EXECUTOR, InstanceSize indicates the number of storage replica sets in the cluster.
      shared_ptr<int32_t> instanceSize_ {};
      // The amount of reserved resources.
      // 
      // > 
      // 
      // *   If Type is set to EXECUTOR, ReserveAcu indicates the amount of reserved resources in the current resource group.
      // 
      // *   If Type is set to WORKER, ReserveAcu indicates the total amount of reserved storage resources in the current cluster.
      shared_ptr<string> reserveAcu_ {};
      // The name of the resource group.
      shared_ptr<string> resourceGroupName_ {};
      // The start time of the scaling plan job.
      // 
      // >  The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The state of the scaling plan job. Valid values:
      // 
      // *   RUNNING
      // *   SUCCESSFUL
      // *   FAILED
      shared_ptr<string> status_ {};
      // The desired specifications of elastic resources after scaling.
      shared_ptr<string> targetSize_ {};
      // The total amount of resources.
      // 
      // > 
      // 
      // *   If Type is set to EXECUTOR, TotalAcu indicates the total amount of computing resources in the current resource group.
      // 
      // *   If Type is set to WORKER, TotalAcu indicates the total amount of storage resources in the cluster.
      shared_ptr<string> totalAcu_ {};
      // The type of the scaling plan job. Valid values:
      // 
      // *   EXECUTOR: the interactive resource group type, which indicates the computing resource type.
      // *   WORKER: the EIU type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<DescribeElasticPlanJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<DescribeElasticPlanJobsResponseBody::Jobs>) };
    inline vector<DescribeElasticPlanJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<DescribeElasticPlanJobsResponseBody::Jobs>) };
    inline DescribeElasticPlanJobsResponseBody& setJobs(const vector<DescribeElasticPlanJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline DescribeElasticPlanJobsResponseBody& setJobs(vector<DescribeElasticPlanJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried scaling plan jobs.
    shared_ptr<vector<DescribeElasticPlanJobsResponseBody::Jobs>> jobs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of scaling plan jobs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
