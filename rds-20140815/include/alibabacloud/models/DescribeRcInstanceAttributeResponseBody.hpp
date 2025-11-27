// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyDataDisks.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyEipAddress.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyInnerIpAddress.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyOperationLocks.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyPublicIpAddress.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodySecurityGroupIds.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodySystemDisk.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyTags.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyVpcAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuTypes, gpuTypes_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuTypes, gpuTypes_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCInstanceAttributeResponseBody() = default ;
    DescribeRCInstanceAttributeResponseBody(const DescribeRCInstanceAttributeResponseBody &) = default ;
    DescribeRCInstanceAttributeResponseBody(DescribeRCInstanceAttributeResponseBody &&) = default ;
    DescribeRCInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBody() = default ;
    DescribeRCInstanceAttributeResponseBody& operator=(const DescribeRCInstanceAttributeResponseBody &) = default ;
    DescribeRCInstanceAttributeResponseBody& operator=(DescribeRCInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->clusterId_ == nullptr && return this->cpu_ == nullptr && return this->createMode_ == nullptr && return this->creationTime_ == nullptr && return this->creditSpecification_ == nullptr
        && return this->dataDisks_ == nullptr && return this->dbType_ == nullptr && return this->dedicatedHostAttribute_ == nullptr && return this->deletionProtection_ == nullptr && return this->deploymentSetId_ == nullptr
        && return this->description_ == nullptr && return this->diskType_ == nullptr && return this->ecsInstanceType_ == nullptr && return this->eipAddress_ == nullptr && return this->enableJumboFrame_ == nullptr
        && return this->expiredTime_ == nullptr && return this->gpu_ == nullptr && return this->gpuTypes_ == nullptr && return this->hostName_ == nullptr && return this->hostType_ == nullptr
        && return this->imageId_ == nullptr && return this->innerIpAddress_ == nullptr && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthIn_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr
        && return this->ioOptimized_ == nullptr && return this->keyPairName_ == nullptr && return this->memory_ == nullptr && return this->nodeType_ == nullptr && return this->operationLocks_ == nullptr
        && return this->publicIpAddress_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupIds_ == nullptr
        && return this->serialNumber_ == nullptr && return this->spotStrategy_ == nullptr && return this->status_ == nullptr && return this->stoppedMode_ == nullptr && return this->systemDisk_ == nullptr
        && return this->tags_ == nullptr && return this->userData_ == nullptr && return this->vlanId_ == nullptr && return this->vpcAttributes_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline int32_t createMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setCreateMode(int32_t createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyDataDisks & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, DescribeRCInstanceAttributeResponseBodyDataDisks) };
    inline DescribeRCInstanceAttributeResponseBodyDataDisks dataDisks() { DARABONBA_PTR_GET(dataDisks_, DescribeRCInstanceAttributeResponseBodyDataDisks) };
    inline DescribeRCInstanceAttributeResponseBody& setDataDisks(const DescribeRCInstanceAttributeResponseBodyDataDisks & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeRCInstanceAttributeResponseBody& setDataDisks(DescribeRCInstanceAttributeResponseBodyDataDisks && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dedicatedHostAttribute Field Functions 
    bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
    void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute & dedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute dedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBody& setDedicatedHostAttribute(const DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
    inline DescribeRCInstanceAttributeResponseBody& setDedicatedHostAttribute(DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // ecsInstanceType Field Functions 
    bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
    void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
    inline string ecsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyEipAddress & eipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, DescribeRCInstanceAttributeResponseBodyEipAddress) };
    inline DescribeRCInstanceAttributeResponseBodyEipAddress eipAddress() { DARABONBA_PTR_GET(eipAddress_, DescribeRCInstanceAttributeResponseBodyEipAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setEipAddress(const DescribeRCInstanceAttributeResponseBodyEipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setEipAddress(DescribeRCInstanceAttributeResponseBodyEipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline DescribeRCInstanceAttributeResponseBody& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuTypes Field Functions 
    bool hasGpuTypes() const { return this->gpuTypes_ != nullptr;};
    void deleteGpuTypes() { this->gpuTypes_ = nullptr;};
    inline string gpuTypes() const { DARABONBA_PTR_GET_DEFAULT(gpuTypes_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setGpuTypes(string gpuTypes) { DARABONBA_PTR_SET_VALUE(gpuTypes_, gpuTypes) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyInnerIpAddress & innerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, DescribeRCInstanceAttributeResponseBodyInnerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBodyInnerIpAddress innerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, DescribeRCInstanceAttributeResponseBodyInnerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setInnerIpAddress(const DescribeRCInstanceAttributeResponseBodyInnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setInnerIpAddress(DescribeRCInstanceAttributeResponseBodyInnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeRCInstanceAttributeResponseBody& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeRCInstanceAttributeResponseBodyOperationLocks) };
    inline DescribeRCInstanceAttributeResponseBodyOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeRCInstanceAttributeResponseBodyOperationLocks) };
    inline DescribeRCInstanceAttributeResponseBody& setOperationLocks(const DescribeRCInstanceAttributeResponseBodyOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeRCInstanceAttributeResponseBody& setOperationLocks(DescribeRCInstanceAttributeResponseBodyOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyPublicIpAddress & publicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, DescribeRCInstanceAttributeResponseBodyPublicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBodyPublicIpAddress publicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, DescribeRCInstanceAttributeResponseBodyPublicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setPublicIpAddress(const DescribeRCInstanceAttributeResponseBodyPublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeRCInstanceAttributeResponseBody& setPublicIpAddress(DescribeRCInstanceAttributeResponseBodyPublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodySecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeRCInstanceAttributeResponseBodySecurityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBodySecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeRCInstanceAttributeResponseBodySecurityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBody& setSecurityGroupIds(const DescribeRCInstanceAttributeResponseBodySecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeRCInstanceAttributeResponseBody& setSecurityGroupIds(DescribeRCInstanceAttributeResponseBodySecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string stoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodySystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, DescribeRCInstanceAttributeResponseBodySystemDisk) };
    inline DescribeRCInstanceAttributeResponseBodySystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, DescribeRCInstanceAttributeResponseBodySystemDisk) };
    inline DescribeRCInstanceAttributeResponseBody& setSystemDisk(const DescribeRCInstanceAttributeResponseBodySystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribeRCInstanceAttributeResponseBody& setSystemDisk(DescribeRCInstanceAttributeResponseBodySystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeRCInstanceAttributeResponseBodyTags) };
    inline DescribeRCInstanceAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeRCInstanceAttributeResponseBodyTags) };
    inline DescribeRCInstanceAttributeResponseBody& setTags(const DescribeRCInstanceAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRCInstanceAttributeResponseBody& setTags(DescribeRCInstanceAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const DescribeRCInstanceAttributeResponseBodyVpcAttributes & vpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, DescribeRCInstanceAttributeResponseBodyVpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes vpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, DescribeRCInstanceAttributeResponseBodyVpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBody& setVpcAttributes(const DescribeRCInstanceAttributeResponseBodyVpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeRCInstanceAttributeResponseBody& setVpcAttributes(DescribeRCInstanceAttributeResponseBodyVpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The ID of the cluster to which the instance belongs.
    // 
    // >  This parameter will be deprecated. We recommend that you use other parameters to ensure compatibility.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<int32_t> createMode_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The performance mode of the burstable instance.
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The details of the data disk.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyDataDisks> dataDisks_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    // The attributes of the dedicated hosts.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyDedicatedHostAttribute> dedicatedHostAttribute_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> diskType_ = nullptr;
    // The Elastic Compute Service (ECS) instance family.
    std::shared_ptr<string> ecsInstanceType_ = nullptr;
    // The elastic IP address (EIP) associated with the instance.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyEipAddress> eipAddress_ = nullptr;
    // Indicates whether the Jumbo Frame feature is enabled for the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    // The expiration time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<int32_t> gpu_ = nullptr;
    std::shared_ptr<string> gpuTypes_ = nullptr;
    // The instance hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The storage type of the host. Valid values:
    // 
    // *   **dhg_cloud_ssd**: ESSD
    // *   **dhg_local_ssd**: local SSD
    std::shared_ptr<string> hostType_ = nullptr;
    // The image ID of the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The private IP addresses of the instance in the classic network.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyInnerIpAddress> innerIpAddress_ = nullptr;
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **classic**
    // *   **vpc**
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   **PayByBandwidth**: pay-by-bandwidth
    // *   **PayByTraffic**: pay-by-data-transfer
    // 
    // >  If the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound bandwidth from the Internet. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound bandwidth to the Internet. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Indicates whether the instance is I/O optimized.
    // 
    // *   **optimized**: The instance is I/O optimized.
    // *   **none**: The instance is not I/O optimized.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The memory capacity of the instance. Unit: MiB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    // The reasons why the instance is locked.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyOperationLocks> operationLocks_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyPublicIpAddress> publicIpAddress_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security groups.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodySecurityGroupIds> securityGroupIds_ = nullptr;
    // The serial number of the instance.
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The instance status. Valid values:
    // 
    // *   **Pending**
    // *   **Running**
    // *   **Starting**
    // *   **Stopping**
    // *   **Stopped**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the billing of the instance continues after the instance is stopped. Valid values:
    // 
    // *   **KeepCharging**: The billing of the instance continues after the instance is stopped, and resources are retained for the instance.
    // *   **StopCharging**: The billing of the instance stops after the instance is stopped. After the instance is stopped, resources such as CPU cores, memory resources, and public IP address are released. The instance may be unable to restart if some required resources are out of stock in the current region.
    // *   **Not-applicable**: The No Fees for Stopped Instances feature is not supported for the instance.
    std::shared_ptr<string> stoppedMode_ = nullptr;
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodySystemDisk> systemDisk_ = nullptr;
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyTags> tags_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    // The virtual LAN (VLAN) ID of the instance.
    // 
    // >  This parameter will be deprecated. We recommend that you use other parameters to ensure compatibility.
    std::shared_ptr<string> vlanId_ = nullptr;
    // The virtual private cloud (VPC) attributes of the instance.
    std::shared_ptr<DescribeRCInstanceAttributeResponseBodyVpcAttributes> vpcAttributes_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
