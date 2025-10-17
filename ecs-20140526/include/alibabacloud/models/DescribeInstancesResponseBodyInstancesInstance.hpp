// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceClockOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceCpuOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceEipAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceHibernationOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceImageOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceMetadataOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceOperationLocks.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePublicIpAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceTags.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceVpcAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(ClockOptions, clockOptions_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_TO_JSON(DedicatedInstanceAttribute, dedicatedInstanceAttribute_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceAvailable, deviceAvailable_);
      DARABONBA_PTR_TO_JSON(EcsCapacityReservationAttr, ecsCapacityReservationAttr_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EnableNVS, enableNVS_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_TO_JSON(HibernationOptions, hibernationOptions_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MetadataOptions, metadataOptions_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RdmaIpAddress, rdmaIpAddress_);
      DARABONBA_PTR_TO_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SaleCycle, saleCycle_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(ClockOptions, clockOptions_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_FROM_JSON(DedicatedInstanceAttribute, dedicatedInstanceAttribute_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceAvailable, deviceAvailable_);
      DARABONBA_PTR_FROM_JSON(EcsCapacityReservationAttr, ecsCapacityReservationAttr_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EnableNVS, enableNVS_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_FROM_JSON(HibernationOptions, hibernationOptions_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MetadataOptions, metadataOptions_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSNameEn, OSNameEn_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RdmaIpAddress, rdmaIpAddress_);
      DARABONBA_PTR_FROM_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SaleCycle, saleCycle_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstancesResponseBodyInstancesInstance() = default ;
    DescribeInstancesResponseBodyInstancesInstance(const DescribeInstancesResponseBodyInstancesInstance &) = default ;
    DescribeInstancesResponseBodyInstancesInstance(DescribeInstancesResponseBodyInstancesInstance &&) = default ;
    DescribeInstancesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstance() = default ;
    DescribeInstancesResponseBodyInstancesInstance& operator=(const DescribeInstancesResponseBodyInstancesInstance &) = default ;
    DescribeInstancesResponseBodyInstancesInstance& operator=(DescribeInstancesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalInfo_ == nullptr
        && return this->autoReleaseTime_ == nullptr && return this->clockOptions_ == nullptr && return this->clusterId_ == nullptr && return this->cpu_ == nullptr && return this->cpuOptions_ == nullptr
        && return this->creationTime_ == nullptr && return this->creditSpecification_ == nullptr && return this->dedicatedHostAttribute_ == nullptr && return this->dedicatedInstanceAttribute_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->deploymentSetGroupNo_ == nullptr && return this->deploymentSetId_ == nullptr && return this->description_ == nullptr && return this->deviceAvailable_ == nullptr && return this->ecsCapacityReservationAttr_ == nullptr
        && return this->eipAddress_ == nullptr && return this->enableNVS_ == nullptr && return this->expiredTime_ == nullptr && return this->GPUAmount_ == nullptr && return this->GPUSpec_ == nullptr
        && return this->hibernationOptions_ == nullptr && return this->hostName_ == nullptr && return this->hpcClusterId_ == nullptr && return this->ISP_ == nullptr && return this->imageId_ == nullptr
        && return this->imageOptions_ == nullptr && return this->innerIpAddress_ == nullptr && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthIn_ == nullptr
        && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->keyPairName_ == nullptr && return this->localStorageAmount_ == nullptr && return this->localStorageCapacity_ == nullptr
        && return this->memory_ == nullptr && return this->metadataOptions_ == nullptr && return this->networkInterfaces_ == nullptr && return this->OSName_ == nullptr && return this->OSNameEn_ == nullptr
        && return this->OSType_ == nullptr && return this->operationLocks_ == nullptr && return this->privateDnsNameOptions_ == nullptr && return this->publicIpAddress_ == nullptr && return this->rdmaIpAddress_ == nullptr
        && return this->recyclable_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->saleCycle_ == nullptr && return this->securityGroupIds_ == nullptr
        && return this->serialNumber_ == nullptr && return this->spotDuration_ == nullptr && return this->spotInterruptionBehavior_ == nullptr && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->stoppedMode_ == nullptr && return this->tags_ == nullptr && return this->vlanId_ == nullptr
        && return this->vpcAttributes_ == nullptr && return this->zoneId_ == nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo & additionalInfo() const { DARABONBA_PTR_GET_CONST(additionalInfo_, Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo additionalInfo() { DARABONBA_PTR_GET(additionalInfo_, Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo) };
    inline DescribeInstancesResponseBodyInstancesInstance& setAdditionalInfo(const Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo & additionalInfo) { DARABONBA_PTR_SET_VALUE(additionalInfo_, additionalInfo) };
    inline DescribeInstancesResponseBodyInstancesInstance& setAdditionalInfo(Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo && additionalInfo) { DARABONBA_PTR_SET_RVALUE(additionalInfo_, additionalInfo) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // clockOptions Field Functions 
    bool hasClockOptions() const { return this->clockOptions_ != nullptr;};
    void deleteClockOptions() { this->clockOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions & clockOptions() const { DARABONBA_PTR_GET_CONST(clockOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions clockOptions() { DARABONBA_PTR_GET(clockOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setClockOptions(const Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions & clockOptions) { DARABONBA_PTR_SET_VALUE(clockOptions_, clockOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setClockOptions(Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions && clockOptions) { DARABONBA_PTR_SET_RVALUE(clockOptions_, clockOptions) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions & cpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions cpuOptions() { DARABONBA_PTR_GET(cpuOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setCpuOptions(const Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setCpuOptions(Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dedicatedHostAttribute Field Functions 
    bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
    void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute & dedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute dedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDedicatedHostAttribute(const Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDedicatedHostAttribute(Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


    // dedicatedInstanceAttribute Field Functions 
    bool hasDedicatedInstanceAttribute() const { return this->dedicatedInstanceAttribute_ != nullptr;};
    void deleteDedicatedInstanceAttribute() { this->dedicatedInstanceAttribute_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute & dedicatedInstanceAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedInstanceAttribute_, Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute dedicatedInstanceAttribute() { DARABONBA_PTR_GET(dedicatedInstanceAttribute_, Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDedicatedInstanceAttribute(const Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute & dedicatedInstanceAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceAttribute_, dedicatedInstanceAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDedicatedInstanceAttribute(Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute && dedicatedInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedInstanceAttribute_, dedicatedInstanceAttribute) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetGroupNo Field Functions 
    bool hasDeploymentSetGroupNo() const { return this->deploymentSetGroupNo_ != nullptr;};
    void deleteDeploymentSetGroupNo() { this->deploymentSetGroupNo_ = nullptr;};
    inline int32_t deploymentSetGroupNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetGroupNo_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDeploymentSetGroupNo(int32_t deploymentSetGroupNo) { DARABONBA_PTR_SET_VALUE(deploymentSetGroupNo_, deploymentSetGroupNo) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAvailable Field Functions 
    bool hasDeviceAvailable() const { return this->deviceAvailable_ != nullptr;};
    void deleteDeviceAvailable() { this->deviceAvailable_ = nullptr;};
    inline bool deviceAvailable() const { DARABONBA_PTR_GET_DEFAULT(deviceAvailable_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDeviceAvailable(bool deviceAvailable) { DARABONBA_PTR_SET_VALUE(deviceAvailable_, deviceAvailable) };


    // ecsCapacityReservationAttr Field Functions 
    bool hasEcsCapacityReservationAttr() const { return this->ecsCapacityReservationAttr_ != nullptr;};
    void deleteEcsCapacityReservationAttr() { this->ecsCapacityReservationAttr_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr & ecsCapacityReservationAttr() const { DARABONBA_PTR_GET_CONST(ecsCapacityReservationAttr_, Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr ecsCapacityReservationAttr() { DARABONBA_PTR_GET(ecsCapacityReservationAttr_, Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr) };
    inline DescribeInstancesResponseBodyInstancesInstance& setEcsCapacityReservationAttr(const Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr & ecsCapacityReservationAttr) { DARABONBA_PTR_SET_VALUE(ecsCapacityReservationAttr_, ecsCapacityReservationAttr) };
    inline DescribeInstancesResponseBodyInstancesInstance& setEcsCapacityReservationAttr(Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr && ecsCapacityReservationAttr) { DARABONBA_PTR_SET_RVALUE(ecsCapacityReservationAttr_, ecsCapacityReservationAttr) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress & eipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress eipAddress() { DARABONBA_PTR_GET(eipAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setEipAddress(const Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setEipAddress(Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    // enableNVS Field Functions 
    bool hasEnableNVS() const { return this->enableNVS_ != nullptr;};
    void deleteEnableNVS() { this->enableNVS_ = nullptr;};
    inline bool enableNVS() const { DARABONBA_PTR_GET_DEFAULT(enableNVS_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setEnableNVS(bool enableNVS) { DARABONBA_PTR_SET_VALUE(enableNVS_, enableNVS) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // GPUAmount Field Functions 
    bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
    void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
    inline int32_t GPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


    // GPUSpec Field Functions 
    bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
    void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
    inline string GPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


    // hibernationOptions Field Functions 
    bool hasHibernationOptions() const { return this->hibernationOptions_ != nullptr;};
    void deleteHibernationOptions() { this->hibernationOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions & hibernationOptions() const { DARABONBA_PTR_GET_CONST(hibernationOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions hibernationOptions() { DARABONBA_PTR_GET(hibernationOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setHibernationOptions(const Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions & hibernationOptions) { DARABONBA_PTR_SET_VALUE(hibernationOptions_, hibernationOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setHibernationOptions(Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions && hibernationOptions) { DARABONBA_PTR_SET_RVALUE(hibernationOptions_, hibernationOptions) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string hpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string ISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setImageOptions(const Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setImageOptions(Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress & innerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress innerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInnerIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInnerIpAddress(Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline bool ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setIoOptimized(bool ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // localStorageAmount Field Functions 
    bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
    void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
    inline int32_t localStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


    // localStorageCapacity Field Functions 
    bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
    void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
    inline int64_t localStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
    inline DescribeInstancesResponseBodyInstancesInstance& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // metadataOptions Field Functions 
    bool hasMetadataOptions() const { return this->metadataOptions_ != nullptr;};
    void deleteMetadataOptions() { this->metadataOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions & metadataOptions() const { DARABONBA_PTR_GET_CONST(metadataOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions metadataOptions() { DARABONBA_PTR_GET(metadataOptions_, Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setMetadataOptions(const Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions & metadataOptions) { DARABONBA_PTR_SET_VALUE(metadataOptions_, metadataOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setMetadataOptions(Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions && metadataOptions) { DARABONBA_PTR_SET_RVALUE(metadataOptions_, metadataOptions) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces & networkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces networkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces) };
    inline DescribeInstancesResponseBodyInstancesInstance& setNetworkInterfaces(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline DescribeInstancesResponseBodyInstancesInstance& setNetworkInterfaces(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSNameEn Field Functions 
    bool hasOSNameEn() const { return this->OSNameEn_ != nullptr;};
    void deleteOSNameEn() { this->OSNameEn_ = nullptr;};
    inline string OSNameEn() const { DARABONBA_PTR_GET_DEFAULT(OSNameEn_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setOSNameEn(string OSNameEn) { DARABONBA_PTR_SET_VALUE(OSNameEn_, OSNameEn) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks) };
    inline DescribeInstancesResponseBodyInstancesInstance& setOperationLocks(const Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeInstancesResponseBodyInstancesInstance& setOperationLocks(Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // privateDnsNameOptions Field Functions 
    bool hasPrivateDnsNameOptions() const { return this->privateDnsNameOptions_ != nullptr;};
    void deletePrivateDnsNameOptions() { this->privateDnsNameOptions_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions & privateDnsNameOptions() const { DARABONBA_PTR_GET_CONST(privateDnsNameOptions_, Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions) };
    inline Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions privateDnsNameOptions() { DARABONBA_PTR_GET(privateDnsNameOptions_, Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPrivateDnsNameOptions(const Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions & privateDnsNameOptions) { DARABONBA_PTR_SET_VALUE(privateDnsNameOptions_, privateDnsNameOptions) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPrivateDnsNameOptions(Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions && privateDnsNameOptions) { DARABONBA_PTR_SET_RVALUE(privateDnsNameOptions_, privateDnsNameOptions) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress & publicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress publicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddress(Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // rdmaIpAddress Field Functions 
    bool hasRdmaIpAddress() const { return this->rdmaIpAddress_ != nullptr;};
    void deleteRdmaIpAddress() { this->rdmaIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress & rdmaIpAddress() const { DARABONBA_PTR_GET_CONST(rdmaIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress rdmaIpAddress() { DARABONBA_PTR_GET(rdmaIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setRdmaIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress & rdmaIpAddress) { DARABONBA_PTR_SET_VALUE(rdmaIpAddress_, rdmaIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setRdmaIpAddress(Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress && rdmaIpAddress) { DARABONBA_PTR_SET_RVALUE(rdmaIpAddress_, rdmaIpAddress) };


    // recyclable Field Functions 
    bool hasRecyclable() const { return this->recyclable_ != nullptr;};
    void deleteRecyclable() { this->recyclable_ = nullptr;};
    inline bool recyclable() const { DARABONBA_PTR_GET_DEFAULT(recyclable_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setRecyclable(bool recyclable) { DARABONBA_PTR_SET_VALUE(recyclable_, recyclable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // saleCycle Field Functions 
    bool hasSaleCycle() const { return this->saleCycle_ != nullptr;};
    void deleteSaleCycle() { this->saleCycle_ = nullptr;};
    inline string saleCycle() const { DARABONBA_PTR_GET_DEFAULT(saleCycle_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSaleCycle(string saleCycle) { DARABONBA_PTR_SET_VALUE(saleCycle_, saleCycle) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSecurityGroupIds(const Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSecurityGroupIds(Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string spotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string stoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceTags) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceTags) };
    inline DescribeInstancesResponseBodyInstancesInstance& setTags(const Models::DescribeInstancesResponseBodyInstancesInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesResponseBodyInstancesInstance& setTags(Models::DescribeInstancesResponseBodyInstancesInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes & vpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes vpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstance& setVpcAttributes(const Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstance& setVpcAttributes(Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceAdditionalInfo> additionalInfo_ = nullptr;
    // The automatic release time of the pay-as-you-go instance.
    std::shared_ptr<string> autoReleaseTime_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceClockOptions> clockOptions_ = nullptr;
    // The ID of the cluster to which the instance belongs.
    // 
    // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // Details about the CPU options.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceCpuOptions> cpuOptions_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> creationTime_ = nullptr;
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the "Standard mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The information about the dedicated host. The value is an array that consists of DedicatedHostClusterId, DedicatedHostId, and DedicatedHostName.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute> dedicatedHostAttribute_ = nullptr;
    // The attributes of the instance on the dedicated host.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute> dedicatedInstanceAttribute_ = nullptr;
    // Indicates whether release protection is enabled for the instance. This parameter determines whether you can use the ECS console or call the DeleteInstance operation to release the instance. Valid values:
    // 
    // *   true: Release protection is enabled for the instance.
    // *   false: Release protection is disabled for the instance.
    // 
    // >  This parameter is applicable only to pay-as-you-go instances. The release protection feature can protect instances against manual releases, but not against automatic releases.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The number of the deployment set group to which the instance belongs in a deployment set.
    std::shared_ptr<int32_t> deploymentSetGroupNo_ = nullptr;
    // The ID of the deployment set to which the instance belongs.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether data disks can be attached to the instance. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deviceAvailable_ = nullptr;
    // Details about the capacity reservation associated with the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr> ecsCapacityReservationAttr_ = nullptr;
    // Details about the EIP associated with the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceEipAddress> eipAddress_ = nullptr;
    std::shared_ptr<bool> enableNVS_ = nullptr;
    // The expiration time of the instance. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The number of GPUs for the instance type.
    std::shared_ptr<int32_t> GPUAmount_ = nullptr;
    // The category of GPUs for the instance type.
    std::shared_ptr<string> GPUSpec_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceHibernationOptions> hibernationOptions_ = nullptr;
    // The hostname of the instance.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the HPC cluster to which the instance belongs.
    std::shared_ptr<string> hpcClusterId_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> ISP_ = nullptr;
    // The image ID of the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image options.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceImageOptions> imageOptions_ = nullptr;
    // The internal IP addresses of the instance located in the classic network.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress> innerIpAddress_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   classic
    // *   vpc
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The instance family of the instance.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth
    // *   PayByTraffic: pay-by-traffic
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Indicates whether the instance is an I/O optimized instance. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> ioOptimized_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The number of local disks attached to the instance.
    std::shared_ptr<int32_t> localStorageAmount_ = nullptr;
    // The capacity of local disks attached to the instance. Unit: GiB.
    std::shared_ptr<int64_t> localStorageCapacity_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Details about the metadata options.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceMetadataOptions> metadataOptions_ = nullptr;
    // The ENIs attached to the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces> networkInterfaces_ = nullptr;
    // The name of the operating system of the instance.
    std::shared_ptr<string> OSName_ = nullptr;
    // The English name of the operating system of the instance.
    std::shared_ptr<string> OSNameEn_ = nullptr;
    // The type of the operating system of the instance. Valid values:
    // 
    // *   windows: Windows operating systems
    // *   linux: Linux operating systems
    std::shared_ptr<string> OSType_ = nullptr;
    // The reasons why the instance was locked.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceOperationLocks> operationLocks_ = nullptr;
    // The private domain name options of the instance.
    // 
    // For information about the resolution of ECS private domain names, see [ECS private DNS resolution](https://help.aliyun.com/document_detail/2844797.html).
    // 
    // >  This parameter is returned only when the `AdditionalAttributes` parameter contains `PRIVATE_DNS_OPTIONS` in the request.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstancePrivateDnsNameOptions> privateDnsNameOptions_ = nullptr;
    // The public IP addresses of the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress> publicIpAddress_ = nullptr;
    // The RDMA IP addresses of the instance in the HPC cluster.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceRdmaIpAddress> rdmaIpAddress_ = nullptr;
    // Indicates whether the instance can be recycled.
    std::shared_ptr<bool> recyclable_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // >  The parameter is removed.
    std::shared_ptr<string> saleCycle_ = nullptr;
    // The IDs of the security groups to which the instance belongs.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds> securityGroupIds_ = nullptr;
    // The serial number of the instance.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The protection period of the spot instance. Unit: hours. Valid values:
    // 
    // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. Spot instances are billed by second. We recommend that you specify a protection period based on your business requirements.
    // 
    // >  This parameter is returned when SpotStrategy is set to SpotWithPriceLimit or SpotAsPriceGo.
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The interruption mode of the spot instance when the system initiates a spot instance interruption operation. Valid values:
    // 
    // *   Terminate: releases the spot instance.
    // *   Stop: stops the instance in economical mode.
    std::shared_ptr<string> spotInterruptionBehavior_ = nullptr;
    // The maximum hourly price of the instance. The value can be accurate to three decimal places. This parameter is valid when SpotStrategy is set to SpotWithPriceLimit.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The bidding policy for the pay-as-you-go instance. Valid values:
    // 
    // *   NoSpot: The instance is a regular pay-as-you-go instance.
    // *   SpotWithPriceLimit: The instance is a spot instance with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instance is a spot instance for which the market price is automatically used as the bid price. The market price can be up to the pay-as-you-go price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The time when the instance was last started. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the instance continues to be billed after it is stopped. Valid values:
    // 
    // *   KeepCharging: The instance is stopped in standard mode. Billing for the instance continues after the instance is stopped, and resources are retained for the instance.
    // *   StopCharging: The instance is stopped in economical mode. Billing for some resources of the instance stops after the instance is stopped. When the instance is stopped, its resources such as vCPUs, memory, and public IP addresses are released. The instance may be unable to restart if some required resources are out of stock in the current region.
    // *   Not-applicable: The instance does not support economical mode.
    std::shared_ptr<string> stoppedMode_ = nullptr;
    // The tags of the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceTags> tags_ = nullptr;
    // The virtual LAN (VLAN) ID of the instance.
    // 
    // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
    std::shared_ptr<string> vlanId_ = nullptr;
    // The VPC attributes of the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceVpcAttributes> vpcAttributes_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
