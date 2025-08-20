// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanJobsResponseBodyJobs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanJobsResponseBodyJobs& obj) { 
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
    DescribeElasticPlanJobsResponseBodyJobs() = default ;
    DescribeElasticPlanJobsResponseBodyJobs(const DescribeElasticPlanJobsResponseBodyJobs &) = default ;
    DescribeElasticPlanJobsResponseBodyJobs(DescribeElasticPlanJobsResponseBodyJobs &&) = default ;
    DescribeElasticPlanJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanJobsResponseBodyJobs() = default ;
    DescribeElasticPlanJobsResponseBodyJobs& operator=(const DescribeElasticPlanJobsResponseBodyJobs &) = default ;
    DescribeElasticPlanJobsResponseBodyJobs& operator=(DescribeElasticPlanJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticAcu_ != nullptr
        && this->elasticPlanName_ != nullptr && this->endTime_ != nullptr && this->instanceSize_ != nullptr && this->reserveAcu_ != nullptr && this->resourceGroupName_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->targetSize_ != nullptr && this->totalAcu_ != nullptr && this->type_ != nullptr; };
    // elasticAcu Field Functions 
    bool hasElasticAcu() const { return this->elasticAcu_ != nullptr;};
    void deleteElasticAcu() { this->elasticAcu_ = nullptr;};
    inline string elasticAcu() const { DARABONBA_PTR_GET_DEFAULT(elasticAcu_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setElasticAcu(string elasticAcu) { DARABONBA_PTR_SET_VALUE(elasticAcu_, elasticAcu) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceSize Field Functions 
    bool hasInstanceSize() const { return this->instanceSize_ != nullptr;};
    void deleteInstanceSize() { this->instanceSize_ = nullptr;};
    inline int32_t instanceSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSize_, 0) };
    inline DescribeElasticPlanJobsResponseBodyJobs& setInstanceSize(int32_t instanceSize) { DARABONBA_PTR_SET_VALUE(instanceSize_, instanceSize) };


    // reserveAcu Field Functions 
    bool hasReserveAcu() const { return this->reserveAcu_ != nullptr;};
    void deleteReserveAcu() { this->reserveAcu_ = nullptr;};
    inline string reserveAcu() const { DARABONBA_PTR_GET_DEFAULT(reserveAcu_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setReserveAcu(string reserveAcu) { DARABONBA_PTR_SET_VALUE(reserveAcu_, reserveAcu) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline string targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


    // totalAcu Field Functions 
    bool hasTotalAcu() const { return this->totalAcu_ != nullptr;};
    void deleteTotalAcu() { this->totalAcu_ = nullptr;};
    inline string totalAcu() const { DARABONBA_PTR_GET_DEFAULT(totalAcu_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setTotalAcu(string totalAcu) { DARABONBA_PTR_SET_VALUE(totalAcu_, totalAcu) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeElasticPlanJobsResponseBodyJobs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The amount of elastic resources.
    // 
    // > 
    // 
    // *   If Type is set to EXECUTOR, ElasticAcu indicates the amount of elastic resources in the current resource group.
    // 
    // *   If Type is set to WORKER, ElasticAcu indicates the total amount of elastic storage resources in the current cluster.
    std::shared_ptr<string> elasticAcu_ = nullptr;
    // The name of the scaling plan.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // The end time of the scaling plan job.
    // 
    // >  The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The number of compute nodes or storage replica sets.
    // 
    // > 
    // 
    // *   If Type is set to EXECUTOR, InstanceSize indicates the number of compute nodes in the cluster.
    // 
    // *   If Type is set to EXECUTOR, InstanceSize indicates the number of storage replica sets in the cluster.
    std::shared_ptr<int32_t> instanceSize_ = nullptr;
    // The amount of reserved resources.
    // 
    // > 
    // 
    // *   If Type is set to EXECUTOR, ReserveAcu indicates the amount of reserved resources in the current resource group.
    // 
    // *   If Type is set to WORKER, ReserveAcu indicates the total amount of reserved storage resources in the current cluster.
    std::shared_ptr<string> reserveAcu_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The start time of the scaling plan job.
    // 
    // >  The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the scaling plan job. Valid values:
    // 
    // *   RUNNING
    // *   SUCCESSFUL
    // *   FAILED
    std::shared_ptr<string> status_ = nullptr;
    // The desired specifications of elastic resources after scaling.
    std::shared_ptr<string> targetSize_ = nullptr;
    // The total amount of resources.
    // 
    // > 
    // 
    // *   If Type is set to EXECUTOR, TotalAcu indicates the total amount of computing resources in the current resource group.
    // 
    // *   If Type is set to WORKER, TotalAcu indicates the total amount of storage resources in the cluster.
    std::shared_ptr<string> totalAcu_ = nullptr;
    // The type of the scaling plan job. Valid values:
    // 
    // *   EXECUTOR: the interactive resource group type, which indicates the computing resource type.
    // *   WORKER: the EIU type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
