// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnsResourceUsage, ensResourceUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsResourceUsage, ensResourceUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsResourceUsageResponseBody() = default ;
    DescribeEnsResourceUsageResponseBody(const DescribeEnsResourceUsageResponseBody &) = default ;
    DescribeEnsResourceUsageResponseBody(DescribeEnsResourceUsageResponseBody &&) = default ;
    DescribeEnsResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsResourceUsageResponseBody() = default ;
    DescribeEnsResourceUsageResponseBody& operator=(const DescribeEnsResourceUsageResponseBody &) = default ;
    DescribeEnsResourceUsageResponseBody& operator=(DescribeEnsResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnsResourceUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnsResourceUsage& obj) { 
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
      friend void from_json(const Darabonba::Json& j, EnsResourceUsage& obj) { 
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
      EnsResourceUsage() = default ;
      EnsResourceUsage(const EnsResourceUsage &) = default ;
      EnsResourceUsage(EnsResourceUsage &&) = default ;
      EnsResourceUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnsResourceUsage() = default ;
      EnsResourceUsage& operator=(const EnsResourceUsage &) = default ;
      EnsResourceUsage& operator=(EnsResourceUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeResourceCount_ == nullptr
        && this->cpuSum_ == nullptr && this->diskCount_ == nullptr && this->downCount_ == nullptr && this->expiredCount_ == nullptr && this->expiringCount_ == nullptr
        && this->gpuSum_ == nullptr && this->instanceCount_ == nullptr && this->runningCount_ == nullptr && this->serviceType_ == nullptr && this->storageSum_ == nullptr; };
      // computeResourceCount Field Functions 
      bool hasComputeResourceCount() const { return this->computeResourceCount_ != nullptr;};
      void deleteComputeResourceCount() { this->computeResourceCount_ = nullptr;};
      inline int32_t getComputeResourceCount() const { DARABONBA_PTR_GET_DEFAULT(computeResourceCount_, 0) };
      inline EnsResourceUsage& setComputeResourceCount(int32_t computeResourceCount) { DARABONBA_PTR_SET_VALUE(computeResourceCount_, computeResourceCount) };


      // cpuSum Field Functions 
      bool hasCpuSum() const { return this->cpuSum_ != nullptr;};
      void deleteCpuSum() { this->cpuSum_ = nullptr;};
      inline int64_t getCpuSum() const { DARABONBA_PTR_GET_DEFAULT(cpuSum_, 0L) };
      inline EnsResourceUsage& setCpuSum(int64_t cpuSum) { DARABONBA_PTR_SET_VALUE(cpuSum_, cpuSum) };


      // diskCount Field Functions 
      bool hasDiskCount() const { return this->diskCount_ != nullptr;};
      void deleteDiskCount() { this->diskCount_ = nullptr;};
      inline int32_t getDiskCount() const { DARABONBA_PTR_GET_DEFAULT(diskCount_, 0) };
      inline EnsResourceUsage& setDiskCount(int32_t diskCount) { DARABONBA_PTR_SET_VALUE(diskCount_, diskCount) };


      // downCount Field Functions 
      bool hasDownCount() const { return this->downCount_ != nullptr;};
      void deleteDownCount() { this->downCount_ = nullptr;};
      inline int32_t getDownCount() const { DARABONBA_PTR_GET_DEFAULT(downCount_, 0) };
      inline EnsResourceUsage& setDownCount(int32_t downCount) { DARABONBA_PTR_SET_VALUE(downCount_, downCount) };


      // expiredCount Field Functions 
      bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
      void deleteExpiredCount() { this->expiredCount_ = nullptr;};
      inline int32_t getExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
      inline EnsResourceUsage& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


      // expiringCount Field Functions 
      bool hasExpiringCount() const { return this->expiringCount_ != nullptr;};
      void deleteExpiringCount() { this->expiringCount_ = nullptr;};
      inline int32_t getExpiringCount() const { DARABONBA_PTR_GET_DEFAULT(expiringCount_, 0) };
      inline EnsResourceUsage& setExpiringCount(int32_t expiringCount) { DARABONBA_PTR_SET_VALUE(expiringCount_, expiringCount) };


      // gpuSum Field Functions 
      bool hasGpuSum() const { return this->gpuSum_ != nullptr;};
      void deleteGpuSum() { this->gpuSum_ = nullptr;};
      inline int64_t getGpuSum() const { DARABONBA_PTR_GET_DEFAULT(gpuSum_, 0L) };
      inline EnsResourceUsage& setGpuSum(int64_t gpuSum) { DARABONBA_PTR_SET_VALUE(gpuSum_, gpuSum) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline EnsResourceUsage& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
      inline EnsResourceUsage& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline EnsResourceUsage& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // storageSum Field Functions 
      bool hasStorageSum() const { return this->storageSum_ != nullptr;};
      void deleteStorageSum() { this->storageSum_ = nullptr;};
      inline int64_t getStorageSum() const { DARABONBA_PTR_GET_DEFAULT(storageSum_, 0L) };
      inline EnsResourceUsage& setStorageSum(int64_t storageSum) { DARABONBA_PTR_SET_VALUE(storageSum_, storageSum) };


    protected:
      // The number of edge services. This parameter is available only when you set the ServiceType parameter to 2.
      shared_ptr<int32_t> computeResourceCount_ {};
      // The CPU usage. Unit: cores.
      shared_ptr<int64_t> cpuSum_ {};
      // The number of data disks.
      shared_ptr<int32_t> diskCount_ {};
      // The number of stopped VMs.
      shared_ptr<int32_t> downCount_ {};
      // The number of expired VM instances.
      shared_ptr<int32_t> expiredCount_ {};
      // The number of VM instances that are about to expire.
      shared_ptr<int32_t> expiringCount_ {};
      // The number of GPUs.
      shared_ptr<int64_t> gpuSum_ {};
      // The number of instances.
      shared_ptr<int32_t> instanceCount_ {};
      // The number of running instances.
      shared_ptr<int32_t> runningCount_ {};
      // The type of the service. Valid values:
      // 
      // *   1: subscription instance.
      // *   2: edge service instance.
      // *   3: pay-as-you-go instance.
      shared_ptr<string> serviceType_ {};
      // The total disk size.
      shared_ptr<int64_t> storageSum_ {};
    };

    virtual bool empty() const override { return this->ensResourceUsage_ == nullptr
        && this->requestId_ == nullptr; };
    // ensResourceUsage Field Functions 
    bool hasEnsResourceUsage() const { return this->ensResourceUsage_ != nullptr;};
    void deleteEnsResourceUsage() { this->ensResourceUsage_ = nullptr;};
    inline const vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage> & getEnsResourceUsage() const { DARABONBA_PTR_GET_CONST(ensResourceUsage_, vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage>) };
    inline vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage> getEnsResourceUsage() { DARABONBA_PTR_GET(ensResourceUsage_, vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage>) };
    inline DescribeEnsResourceUsageResponseBody& setEnsResourceUsage(const vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage> & ensResourceUsage) { DARABONBA_PTR_SET_VALUE(ensResourceUsage_, ensResourceUsage) };
    inline DescribeEnsResourceUsageResponseBody& setEnsResourceUsage(vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage> && ensResourceUsage) { DARABONBA_PTR_SET_RVALUE(ensResourceUsage_, ensResourceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The resource usage data.
    shared_ptr<vector<DescribeEnsResourceUsageResponseBody::EnsResourceUsage>> ensResourceUsage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
