// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODYENSRESOURCEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODYENSRESOURCEUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsResourceUsageResponseBodyEnsResourceUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsResourceUsageResponseBodyEnsResourceUsage& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResourceCount, computeResourceCount_);
      DARABONBA_PTR_TO_JSON(CpuSum, cpuSum_);
      DARABONBA_PTR_TO_JSON(DiskCount, diskCount_);
      DARABONBA_PTR_TO_JSON(DownCount, downCount_);
      DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_TO_JSON(ExpiringCount, expiringCount_);
      DARABONBA_PTR_TO_JSON(GpuSum, gpuSum_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StorageSum, storageSum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsResourceUsageResponseBodyEnsResourceUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResourceCount, computeResourceCount_);
      DARABONBA_PTR_FROM_JSON(CpuSum, cpuSum_);
      DARABONBA_PTR_FROM_JSON(DiskCount, diskCount_);
      DARABONBA_PTR_FROM_JSON(DownCount, downCount_);
      DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_FROM_JSON(ExpiringCount, expiringCount_);
      DARABONBA_PTR_FROM_JSON(GpuSum, gpuSum_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StorageSum, storageSum_);
    };
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage() = default ;
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage(const DescribeEnsResourceUsageResponseBodyEnsResourceUsage &) = default ;
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage(DescribeEnsResourceUsageResponseBodyEnsResourceUsage &&) = default ;
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsResourceUsageResponseBodyEnsResourceUsage() = default ;
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage& operator=(const DescribeEnsResourceUsageResponseBodyEnsResourceUsage &) = default ;
    DescribeEnsResourceUsageResponseBodyEnsResourceUsage& operator=(DescribeEnsResourceUsageResponseBodyEnsResourceUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResourceCount_ != nullptr
        && this->cpuSum_ != nullptr && this->diskCount_ != nullptr && this->downCount_ != nullptr && this->expiredCount_ != nullptr && this->expiringCount_ != nullptr
        && this->gpuSum_ != nullptr && this->instanceCount_ != nullptr && this->runningCount_ != nullptr && this->serviceType_ != nullptr && this->storageSum_ != nullptr; };
    // computeResourceCount Field Functions 
    bool hasComputeResourceCount() const { return this->computeResourceCount_ != nullptr;};
    void deleteComputeResourceCount() { this->computeResourceCount_ = nullptr;};
    inline int32_t computeResourceCount() const { DARABONBA_PTR_GET_DEFAULT(computeResourceCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setComputeResourceCount(int32_t computeResourceCount) { DARABONBA_PTR_SET_VALUE(computeResourceCount_, computeResourceCount) };


    // cpuSum Field Functions 
    bool hasCpuSum() const { return this->cpuSum_ != nullptr;};
    void deleteCpuSum() { this->cpuSum_ = nullptr;};
    inline int64_t cpuSum() const { DARABONBA_PTR_GET_DEFAULT(cpuSum_, 0L) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setCpuSum(int64_t cpuSum) { DARABONBA_PTR_SET_VALUE(cpuSum_, cpuSum) };


    // diskCount Field Functions 
    bool hasDiskCount() const { return this->diskCount_ != nullptr;};
    void deleteDiskCount() { this->diskCount_ = nullptr;};
    inline int32_t diskCount() const { DARABONBA_PTR_GET_DEFAULT(diskCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setDiskCount(int32_t diskCount) { DARABONBA_PTR_SET_VALUE(diskCount_, diskCount) };


    // downCount Field Functions 
    bool hasDownCount() const { return this->downCount_ != nullptr;};
    void deleteDownCount() { this->downCount_ = nullptr;};
    inline int32_t downCount() const { DARABONBA_PTR_GET_DEFAULT(downCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setDownCount(int32_t downCount) { DARABONBA_PTR_SET_VALUE(downCount_, downCount) };


    // expiredCount Field Functions 
    bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
    void deleteExpiredCount() { this->expiredCount_ = nullptr;};
    inline int32_t expiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


    // expiringCount Field Functions 
    bool hasExpiringCount() const { return this->expiringCount_ != nullptr;};
    void deleteExpiringCount() { this->expiringCount_ = nullptr;};
    inline int32_t expiringCount() const { DARABONBA_PTR_GET_DEFAULT(expiringCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setExpiringCount(int32_t expiringCount) { DARABONBA_PTR_SET_VALUE(expiringCount_, expiringCount) };


    // gpuSum Field Functions 
    bool hasGpuSum() const { return this->gpuSum_ != nullptr;};
    void deleteGpuSum() { this->gpuSum_ = nullptr;};
    inline int64_t gpuSum() const { DARABONBA_PTR_GET_DEFAULT(gpuSum_, 0L) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setGpuSum(int64_t gpuSum) { DARABONBA_PTR_SET_VALUE(gpuSum_, gpuSum) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // storageSum Field Functions 
    bool hasStorageSum() const { return this->storageSum_ != nullptr;};
    void deleteStorageSum() { this->storageSum_ = nullptr;};
    inline int64_t storageSum() const { DARABONBA_PTR_GET_DEFAULT(storageSum_, 0L) };
    inline DescribeEnsResourceUsageResponseBodyEnsResourceUsage& setStorageSum(int64_t storageSum) { DARABONBA_PTR_SET_VALUE(storageSum_, storageSum) };


  protected:
    // The number of edge services. This parameter is available only when you set the ServiceType parameter to 2.
    std::shared_ptr<int32_t> computeResourceCount_ = nullptr;
    // The CPU usage. Unit: cores.
    std::shared_ptr<int64_t> cpuSum_ = nullptr;
    // The number of data disks.
    std::shared_ptr<int32_t> diskCount_ = nullptr;
    // The number of stopped VMs.
    std::shared_ptr<int32_t> downCount_ = nullptr;
    // The number of expired VM instances.
    std::shared_ptr<int32_t> expiredCount_ = nullptr;
    // The number of VM instances that are about to expire.
    std::shared_ptr<int32_t> expiringCount_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<int64_t> gpuSum_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The number of running instances.
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   1: subscription instance.
    // *   2: edge service instance.
    // *   3: pay-as-you-go instance.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The total disk size.
    std::shared_ptr<int64_t> storageSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
