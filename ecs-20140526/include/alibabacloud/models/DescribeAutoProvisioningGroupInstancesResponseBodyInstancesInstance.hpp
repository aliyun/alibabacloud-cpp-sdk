// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance() = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance(const DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance &) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance(DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance &&) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance() = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& operator=(const DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance &) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& operator=(DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPU_ != nullptr
        && this->creationTime_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->ioOptimized_ != nullptr && this->isSpot_ != nullptr
        && this->memory_ != nullptr && this->networkType_ != nullptr && this->osType_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr
        && this->zoneId_ != nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline bool ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, false) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setIoOptimized(bool ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // isSpot Field Functions 
    bool hasIsSpot() const { return this->isSpot_ != nullptr;};
    void deleteIsSpot() { this->isSpot_ = nullptr;};
    inline bool isSpot() const { DARABONBA_PTR_GET_DEFAULT(isSpot_, false) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setIsSpot(bool isSpot) { DARABONBA_PTR_SET_VALUE(isSpot_, isSpot) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of vCPU cores of the instance.
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ECS instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Indicates whether the instance is an I/O optimized instance.
    std::shared_ptr<bool> ioOptimized_ = nullptr;
    // Indicates whether the instance is a spot instance.
    std::shared_ptr<bool> isSpot_ = nullptr;
    // The memory capacity of the instance. Unit: MiB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   vpc: Virtual Private Cloud (VPC)
    // *   classic: classic network
    std::shared_ptr<string> networkType_ = nullptr;
    // The operating system type of the instance. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> osType_ = nullptr;
    // The region ID of the container group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the zone to which the instance belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
