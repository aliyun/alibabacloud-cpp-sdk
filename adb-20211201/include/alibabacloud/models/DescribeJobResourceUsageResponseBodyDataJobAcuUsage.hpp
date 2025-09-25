// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATAJOBACUUSAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATAJOBACUUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeJobResourceUsageResponseBodyDataJobAcuUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResourceUsageResponseBodyDataJobAcuUsage& obj) { 
      DARABONBA_PTR_TO_JSON(AcuUsageDetail, acuUsageDetail_);
      DARABONBA_PTR_TO_JSON(JobEndTime, jobEndTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStartTime, jobStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(UseCachePool, useCachePool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResourceUsageResponseBodyDataJobAcuUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuUsageDetail, acuUsageDetail_);
      DARABONBA_PTR_FROM_JSON(JobEndTime, jobEndTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStartTime, jobStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(UseCachePool, useCachePool_);
    };
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage() = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage(const DescribeJobResourceUsageResponseBodyDataJobAcuUsage &) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage(DescribeJobResourceUsageResponseBodyDataJobAcuUsage &&) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResourceUsageResponseBodyDataJobAcuUsage() = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage& operator=(const DescribeJobResourceUsageResponseBodyDataJobAcuUsage &) = default ;
    DescribeJobResourceUsageResponseBodyDataJobAcuUsage& operator=(DescribeJobResourceUsageResponseBodyDataJobAcuUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acuUsageDetail_ != nullptr
        && this->jobEndTime_ != nullptr && this->jobId_ != nullptr && this->jobStartTime_ != nullptr && this->resourceGroupName_ != nullptr && this->useCachePool_ != nullptr; };
    // acuUsageDetail Field Functions 
    bool hasAcuUsageDetail() const { return this->acuUsageDetail_ != nullptr;};
    void deleteAcuUsageDetail() { this->acuUsageDetail_ = nullptr;};
    inline const Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail & acuUsageDetail() const { DARABONBA_PTR_GET_CONST(acuUsageDetail_, Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail) };
    inline Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail acuUsageDetail() { DARABONBA_PTR_GET(acuUsageDetail_, Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setAcuUsageDetail(const Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail & acuUsageDetail) { DARABONBA_PTR_SET_VALUE(acuUsageDetail_, acuUsageDetail) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setAcuUsageDetail(Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail && acuUsageDetail) { DARABONBA_PTR_SET_RVALUE(acuUsageDetail_, acuUsageDetail) };


    // jobEndTime Field Functions 
    bool hasJobEndTime() const { return this->jobEndTime_ != nullptr;};
    void deleteJobEndTime() { this->jobEndTime_ = nullptr;};
    inline string jobEndTime() const { DARABONBA_PTR_GET_DEFAULT(jobEndTime_, "") };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setJobEndTime(string jobEndTime) { DARABONBA_PTR_SET_VALUE(jobEndTime_, jobEndTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStartTime Field Functions 
    bool hasJobStartTime() const { return this->jobStartTime_ != nullptr;};
    void deleteJobStartTime() { this->jobStartTime_ = nullptr;};
    inline string jobStartTime() const { DARABONBA_PTR_GET_DEFAULT(jobStartTime_, "") };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setJobStartTime(string jobStartTime) { DARABONBA_PTR_SET_VALUE(jobStartTime_, jobStartTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // useCachePool Field Functions 
    bool hasUseCachePool() const { return this->useCachePool_ != nullptr;};
    void deleteUseCachePool() { this->useCachePool_ = nullptr;};
    inline bool useCachePool() const { DARABONBA_PTR_GET_DEFAULT(useCachePool_, false) };
    inline DescribeJobResourceUsageResponseBodyDataJobAcuUsage& setUseCachePool(bool useCachePool) { DARABONBA_PTR_SET_VALUE(useCachePool_, useCachePool) };


  protected:
    // The ACU usage.
    std::shared_ptr<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsageAcuUsageDetail> acuUsageDetail_ = nullptr;
    // The end time of the job. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> jobEndTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The start time of the job. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> jobStartTime_ = nullptr;
    // The name of the job resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<bool> useCachePool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
