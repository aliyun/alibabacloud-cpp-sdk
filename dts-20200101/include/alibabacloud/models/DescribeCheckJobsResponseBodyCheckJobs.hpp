// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODYCHECKJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODYCHECKJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeCheckJobsResponseBodyCheckJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckJobsResponseBodyCheckJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_TO_JSON(DiffSum, diffSum_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_TO_JSON(ParentJobType, parentJobType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckJobsResponseBodyCheckJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_FROM_JSON(DiffSum, diffSum_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_FROM_JSON(ParentJobType, parentJobType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCheckJobsResponseBodyCheckJobs() = default ;
    DescribeCheckJobsResponseBodyCheckJobs(const DescribeCheckJobsResponseBodyCheckJobs &) = default ;
    DescribeCheckJobsResponseBodyCheckJobs(DescribeCheckJobsResponseBodyCheckJobs &&) = default ;
    DescribeCheckJobsResponseBodyCheckJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckJobsResponseBodyCheckJobs() = default ;
    DescribeCheckJobsResponseBodyCheckJobs& operator=(const DescribeCheckJobsResponseBodyCheckJobs &) = default ;
    DescribeCheckJobsResponseBodyCheckJobs& operator=(DescribeCheckJobsResponseBodyCheckJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->checkPoint_ == nullptr && return this->checkType_ == nullptr && return this->diffCount_ == nullptr && return this->diffSum_ == nullptr && return this->dtsInstanceID_ == nullptr
        && return this->dtsJobId_ == nullptr && return this->finishCount_ == nullptr && return this->groupId_ == nullptr && return this->instanceClass_ == nullptr && return this->jobName_ == nullptr
        && return this->jobStepId_ == nullptr && return this->parentJobType_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->totalCount_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // checkPoint Field Functions 
    bool hasCheckPoint() const { return this->checkPoint_ != nullptr;};
    void deleteCheckPoint() { this->checkPoint_ = nullptr;};
    inline int64_t checkPoint() const { DARABONBA_PTR_GET_DEFAULT(checkPoint_, 0L) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setCheckPoint(int64_t checkPoint) { DARABONBA_PTR_SET_VALUE(checkPoint_, checkPoint) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // diffCount Field Functions 
    bool hasDiffCount() const { return this->diffCount_ != nullptr;};
    void deleteDiffCount() { this->diffCount_ = nullptr;};
    inline int64_t diffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


    // diffSum Field Functions 
    bool hasDiffSum() const { return this->diffSum_ != nullptr;};
    void deleteDiffSum() { this->diffSum_ = nullptr;};
    inline int64_t diffSum() const { DARABONBA_PTR_GET_DEFAULT(diffSum_, 0L) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setDiffSum(int64_t diffSum) { DARABONBA_PTR_SET_VALUE(diffSum_, diffSum) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int64_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0L) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setFinishCount(int64_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobStepId Field Functions 
    bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
    void deleteJobStepId() { this->jobStepId_ = nullptr;};
    inline string jobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


    // parentJobType Field Functions 
    bool hasParentJobType() const { return this->parentJobType_ != nullptr;};
    void deleteParentJobType() { this->parentJobType_ = nullptr;};
    inline string parentJobType() const { DARABONBA_PTR_GET_DEFAULT(parentJobType_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setParentJobType(string parentJobType) { DARABONBA_PTR_SET_VALUE(parentJobType_, parentJobType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCheckJobsResponseBodyCheckJobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCheckJobsResponseBodyCheckJobs& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Billing type, return values: - **POSTPAY**: Pay-as-you-go (postpaid). - **PREPAY**: Subscription (prepaid).
    std::shared_ptr<string> chargeType_ = nullptr;
    // checkpoint
    std::shared_ptr<int64_t> checkPoint_ = nullptr;
    // Data validation method, with values:
    // - **1**: Full validation. - **2**: Incremental validation.
    std::shared_ptr<int32_t> checkType_ = nullptr;
    // Number of rows with data inconsistency
    std::shared_ptr<int64_t> diffCount_ = nullptr;
    // Synchronization initialization progress, in percentage.
    std::shared_ptr<int64_t> diffSum_ = nullptr;
    // Migration, synchronization, or subscription instance ID.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // Migration, synchronization, or subscription task ID.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The number of data rows in the table that have completed validation.
    std::shared_ptr<int64_t> finishCount_ = nullptr;
    // DTS task ID. In most cases, there is no need to set this parameter.
    std::shared_ptr<string> groupId_ = nullptr;
    // Instance specification.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // Check the name of the task.
    std::shared_ptr<string> jobName_ = nullptr;
    // Task ID.
    std::shared_ptr<string> jobStepId_ = nullptr;
    // This parameter will be deprecated.
    std::shared_ptr<string> parentJobType_ = nullptr;
    // Region ID to which it belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Check result, return values: -**0**: Check passed -**1**: Check failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // Verify the total number of rows in the data.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
