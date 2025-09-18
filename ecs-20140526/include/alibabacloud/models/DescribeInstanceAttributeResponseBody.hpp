// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyDedicatedHostAttribute.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyEipAddress.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyInnerIpAddress.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyNetworkOptions.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyOperationLocks.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyPublicIpAddress.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodySecurityGroupIds.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyVpcAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
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
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostAttribute, dedicatedHostAttribute_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
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
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedMode, stoppedMode_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpcAttributes, vpcAttributes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->cpu_ != nullptr && this->creationTime_ != nullptr && this->creditSpecification_ != nullptr && this->dedicatedHostAttribute_ != nullptr && this->description_ != nullptr
        && this->eipAddress_ != nullptr && this->enableJumboFrame_ != nullptr && this->enableNetworkEncryption_ != nullptr && this->expiredTime_ != nullptr && this->hostName_ != nullptr
        && this->imageId_ != nullptr && this->innerIpAddress_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr
        && this->instanceNetworkType_ != nullptr && this->instanceType_ != nullptr && this->internetChargeType_ != nullptr && this->internetMaxBandwidthIn_ != nullptr && this->internetMaxBandwidthOut_ != nullptr
        && this->ioOptimized_ != nullptr && this->memory_ != nullptr && this->networkOptions_ != nullptr && this->operationLocks_ != nullptr && this->publicIpAddress_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr && this->securityGroupIds_ != nullptr && this->serialNumber_ != nullptr && this->status_ != nullptr
        && this->stoppedMode_ != nullptr && this->vlanId_ != nullptr && this->vpcAttributes_ != nullptr && this->zoneId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstanceAttributeResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeInstanceAttributeResponseBody& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInstanceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeInstanceAttributeResponseBody& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dedicatedHostAttribute Field Functions 
    bool hasDedicatedHostAttribute() const { return this->dedicatedHostAttribute_ != nullptr;};
    void deleteDedicatedHostAttribute() { this->dedicatedHostAttribute_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyDedicatedHostAttribute & dedicatedHostAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostAttribute_, DescribeInstanceAttributeResponseBodyDedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBodyDedicatedHostAttribute dedicatedHostAttribute() { DARABONBA_PTR_GET(dedicatedHostAttribute_, DescribeInstanceAttributeResponseBodyDedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBody& setDedicatedHostAttribute(const DescribeInstanceAttributeResponseBodyDedicatedHostAttribute & dedicatedHostAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };
    inline DescribeInstanceAttributeResponseBody& setDedicatedHostAttribute(DescribeInstanceAttributeResponseBodyDedicatedHostAttribute && dedicatedHostAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostAttribute_, dedicatedHostAttribute) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyEipAddress & eipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, DescribeInstanceAttributeResponseBodyEipAddress) };
    inline DescribeInstanceAttributeResponseBodyEipAddress eipAddress() { DARABONBA_PTR_GET(eipAddress_, DescribeInstanceAttributeResponseBodyEipAddress) };
    inline DescribeInstanceAttributeResponseBody& setEipAddress(const DescribeInstanceAttributeResponseBodyEipAddress & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
    inline DescribeInstanceAttributeResponseBody& setEipAddress(DescribeInstanceAttributeResponseBodyEipAddress && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline DescribeInstanceAttributeResponseBody& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // enableNetworkEncryption Field Functions 
    bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
    void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
    inline bool enableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
    inline DescribeInstanceAttributeResponseBody& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeInstanceAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeInstanceAttributeResponseBody& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstanceAttributeResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyInnerIpAddress & innerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, DescribeInstanceAttributeResponseBodyInnerIpAddress) };
    inline DescribeInstanceAttributeResponseBodyInnerIpAddress innerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, DescribeInstanceAttributeResponseBodyInnerIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setInnerIpAddress(const DescribeInstanceAttributeResponseBodyInnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setInnerIpAddress(DescribeInstanceAttributeResponseBodyInnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeInstanceAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeInstanceAttributeResponseBody& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeInstanceAttributeResponseBody& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeInstanceAttributeResponseBody& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeInstanceAttributeResponseBody& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkOptions Field Functions 
    bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
    void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyNetworkOptions & networkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, DescribeInstanceAttributeResponseBodyNetworkOptions) };
    inline DescribeInstanceAttributeResponseBodyNetworkOptions networkOptions() { DARABONBA_PTR_GET(networkOptions_, DescribeInstanceAttributeResponseBodyNetworkOptions) };
    inline DescribeInstanceAttributeResponseBody& setNetworkOptions(const DescribeInstanceAttributeResponseBodyNetworkOptions & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
    inline DescribeInstanceAttributeResponseBody& setNetworkOptions(DescribeInstanceAttributeResponseBodyNetworkOptions && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeInstanceAttributeResponseBodyOperationLocks) };
    inline DescribeInstanceAttributeResponseBodyOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeInstanceAttributeResponseBodyOperationLocks) };
    inline DescribeInstanceAttributeResponseBody& setOperationLocks(const DescribeInstanceAttributeResponseBodyOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeInstanceAttributeResponseBody& setOperationLocks(DescribeInstanceAttributeResponseBodyOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyPublicIpAddress & publicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, DescribeInstanceAttributeResponseBodyPublicIpAddress) };
    inline DescribeInstanceAttributeResponseBodyPublicIpAddress publicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, DescribeInstanceAttributeResponseBodyPublicIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setPublicIpAddress(const DescribeInstanceAttributeResponseBodyPublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeInstanceAttributeResponseBody& setPublicIpAddress(DescribeInstanceAttributeResponseBodyPublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodySecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeInstanceAttributeResponseBodySecurityGroupIds) };
    inline DescribeInstanceAttributeResponseBodySecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeInstanceAttributeResponseBodySecurityGroupIds) };
    inline DescribeInstanceAttributeResponseBody& setSecurityGroupIds(const DescribeInstanceAttributeResponseBodySecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeInstanceAttributeResponseBody& setSecurityGroupIds(DescribeInstanceAttributeResponseBodySecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeInstanceAttributeResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedMode Field Functions 
    bool hasStoppedMode() const { return this->stoppedMode_ != nullptr;};
    void deleteStoppedMode() { this->stoppedMode_ = nullptr;};
    inline string stoppedMode() const { DARABONBA_PTR_GET_DEFAULT(stoppedMode_, "") };
    inline DescribeInstanceAttributeResponseBody& setStoppedMode(string stoppedMode) { DARABONBA_PTR_SET_VALUE(stoppedMode_, stoppedMode) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeInstanceAttributeResponseBody& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpcAttributes Field Functions 
    bool hasVpcAttributes() const { return this->vpcAttributes_ != nullptr;};
    void deleteVpcAttributes() { this->vpcAttributes_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyVpcAttributes & vpcAttributes() const { DARABONBA_PTR_GET_CONST(vpcAttributes_, DescribeInstanceAttributeResponseBodyVpcAttributes) };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes vpcAttributes() { DARABONBA_PTR_GET(vpcAttributes_, DescribeInstanceAttributeResponseBodyVpcAttributes) };
    inline DescribeInstanceAttributeResponseBody& setVpcAttributes(const DescribeInstanceAttributeResponseBodyVpcAttributes & vpcAttributes) { DARABONBA_PTR_SET_VALUE(vpcAttributes_, vpcAttributes) };
    inline DescribeInstanceAttributeResponseBody& setVpcAttributes(DescribeInstanceAttributeResponseBodyVpcAttributes && vpcAttributes) { DARABONBA_PTR_SET_RVALUE(vpcAttributes_, vpcAttributes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the cluster to which the instance belongs.
    // 
    // > This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> creationTime_ = nullptr;
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the [Performance modes](~~59977#section-svb-w9d-dju~~) section of the "Overview of burstable instances" topic.
    // *   Unlimited: the unlimited mode. For more information, see the [Performance modes](~~59977#section-svb-w9d-dju~~) section of the "Overview of burstable instances" topic.
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // Details about the dedicated host. It is an array that consists of the DedicatedHostClusterId, DedicatedHostId, and DedicatedHostName parameters.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyDedicatedHostAttribute> dedicatedHostAttribute_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The elastic IP address (EIP) associated with the instance.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyEipAddress> eipAddress_ = nullptr;
    // Indicates whether the Jumbo Frame feature is enabled for the instance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // For more information, see [MTUs](https://help.aliyun.com/document_detail/200512.html).
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    std::shared_ptr<bool> enableNetworkEncryption_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The hostname of the instance.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image that the instance is running.
    std::shared_ptr<string> imageId_ = nullptr;
    // The internal IP address of the instance located in the classic network.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyInnerIpAddress> innerIpAddress_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   classic: classic network
    // *   vpc: VPC
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth
    // *   PayByTraffic
    // 
    // >  When the **pay-by-traffic** billing method is used for network usage, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios in which demands exceed resource supplies, the maximum bandwidths may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Indicates whether the ECS instance is I/O optimized. Valid values:
    // 
    // *   optimized: The ECS instance is I/O optimized.
    // *   none: The ECS instance is not I/O optimized.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The memory size of the instance. Unit: MiB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Details about network options.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyNetworkOptions> networkOptions_ = nullptr;
    // The reason why the instance was locked. Valid values:
    // 
    // *   financial: The dedicated host was locked due to overdue payments.
    // *   security: The instance was locked due to security reasons.
    // *   recycling: The spot instance was locked and pending release.
    // *   dedicatedhostfinancial: The instance was locked due to overdue payments for the dedicated host.
    // *   refunded: The instance was locked because a refund was made for the instance.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyOperationLocks> operationLocks_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyPublicIpAddress> publicIpAddress_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the security groups to which the instance belongs.
    std::shared_ptr<DescribeInstanceAttributeResponseBodySecurityGroupIds> securityGroupIds_ = nullptr;
    // The serial number of the instance.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   Pending: The instance is being created.
    // *   Running: The instance is running.
    // *   Starting: The instance is being started.
    // *   Stopping: The instance is being stopped.
    // *   Stopped: The instance is stopped.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the system implements billing after the instance is stopped. Valid values:
    // 
    // *   KeepCharging: The instance is stopped in standard mode. The billing of the instance continues after the instance is stopped, and resources are retained for the instance.
    // *   StopCharging: The instance is stopped in economical mode. The billing of some resources of the instance stops after the instance is stopped. When the instance is stopped, its resources such as vCPUs, memory, and public IP address are released. The instance may be unable to start again if some required resources are out of stock in the current region.
    // *   Not-applicable: The instance does not support economical mode.
    std::shared_ptr<string> stoppedMode_ = nullptr;
    // The virtual LAN (VLAN) ID of the instance.
    // 
    // > This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
    std::shared_ptr<string> vlanId_ = nullptr;
    // The VPC attributes of the instance.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyVpcAttributes> vpcAttributes_ = nullptr;
    // The ID of the zone in which the instance resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
