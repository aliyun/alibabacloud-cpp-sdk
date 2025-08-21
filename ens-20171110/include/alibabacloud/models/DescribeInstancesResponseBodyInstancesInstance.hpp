// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceDataDisk.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePublicIpAddress.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceSystemDisk.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceResourceType, instanceResourceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpAddresses, publicIpAddresses_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InnerIpAddress, innerIpAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceType, instanceResourceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddresses, publicIpAddresses_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { this->autoReleaseTime_ != nullptr
        && this->cpu_ != nullptr && this->creationTime_ != nullptr && this->dataDisk_ != nullptr && this->deletionProtection_ != nullptr && this->disk_ != nullptr
        && this->ensRegionId_ != nullptr && this->expiredTime_ != nullptr && this->hostName_ != nullptr && this->imageId_ != nullptr && this->innerIpAddress_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceResourceType_ != nullptr && this->instanceTypeFamily_ != nullptr && this->internetMaxBandwidthIn_ != nullptr
        && this->internetMaxBandwidthOut_ != nullptr && this->keyPairName_ != nullptr && this->memory_ != nullptr && this->networkAttributes_ != nullptr && this->networkInterfaces_ != nullptr
        && this->OSName_ != nullptr && this->privateIpAddresses_ != nullptr && this->publicIpAddress_ != nullptr && this->publicIpAddresses_ != nullptr && this->securityGroupIds_ != nullptr
        && this->serviceStatus_ != nullptr && this->specName_ != nullptr && this->spotStrategy_ != nullptr && this->status_ != nullptr && this->systemDisk_ != nullptr
        && this->tags_ != nullptr; };
    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk dataDisk() { DARABONBA_PTR_GET(dataDisk_, Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDataDisk(const Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDataDisk(Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // innerIpAddress Field Functions 
    bool hasInnerIpAddress() const { return this->innerIpAddress_ != nullptr;};
    void deleteInnerIpAddress() { this->innerIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress & innerIpAddress() const { DARABONBA_PTR_GET_CONST(innerIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress innerIpAddress() { DARABONBA_PTR_GET(innerIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInnerIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress & innerIpAddress) { DARABONBA_PTR_SET_VALUE(innerIpAddress_, innerIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setInnerIpAddress(Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress && innerIpAddress) { DARABONBA_PTR_SET_RVALUE(innerIpAddress_, innerIpAddress) };


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


    // instanceResourceType Field Functions 
    bool hasInstanceResourceType() const { return this->instanceResourceType_ != nullptr;};
    void deleteInstanceResourceType() { this->instanceResourceType_ = nullptr;};
    inline string instanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceResourceType(string instanceResourceType) { DARABONBA_PTR_SET_VALUE(instanceResourceType_, instanceResourceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


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


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstance& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkAttributes Field Functions 
    bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
    void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes & networkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes networkAttributes() { DARABONBA_PTR_GET(networkAttributes_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstance& setNetworkAttributes(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
    inline DescribeInstancesResponseBodyInstancesInstance& setNetworkAttributes(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


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


    // privateIpAddresses Field Functions 
    bool hasPrivateIpAddresses() const { return this->privateIpAddresses_ != nullptr;};
    void deletePrivateIpAddresses() { this->privateIpAddresses_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses & privateIpAddresses() const { DARABONBA_PTR_GET_CONST(privateIpAddresses_, Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses) };
    inline Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses privateIpAddresses() { DARABONBA_PTR_GET(privateIpAddresses_, Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPrivateIpAddresses(const Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses & privateIpAddresses) { DARABONBA_PTR_SET_VALUE(privateIpAddresses_, privateIpAddresses) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPrivateIpAddresses(Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses && privateIpAddresses) { DARABONBA_PTR_SET_RVALUE(privateIpAddresses_, privateIpAddresses) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress & publicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress publicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddress(Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


    // publicIpAddresses Field Functions 
    bool hasPublicIpAddresses() const { return this->publicIpAddresses_ != nullptr;};
    void deletePublicIpAddresses() { this->publicIpAddresses_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses & publicIpAddresses() const { DARABONBA_PTR_GET_CONST(publicIpAddresses_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses) };
    inline Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses publicIpAddresses() { DARABONBA_PTR_GET(publicIpAddresses_, Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddresses(const Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses & publicIpAddresses) { DARABONBA_PTR_SET_VALUE(publicIpAddresses_, publicIpAddresses) };
    inline DescribeInstancesResponseBodyInstancesInstance& setPublicIpAddresses(Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses && publicIpAddresses) { DARABONBA_PTR_SET_RVALUE(publicIpAddresses_, publicIpAddresses) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSecurityGroupIds(const Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSecurityGroupIds(Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSystemDisk(const Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribeInstancesResponseBodyInstancesInstance& setSystemDisk(Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceTags) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeInstancesResponseBodyInstancesInstanceTags) };
    inline DescribeInstancesResponseBodyInstancesInstance& setTags(const Models::DescribeInstancesResponseBodyInstancesInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesResponseBodyInstancesInstance& setTags(Models::DescribeInstancesResponseBodyInstancesInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The automatic release time of the instance.
    std::shared_ptr<string> autoReleaseTime_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<string> cpu_ = nullptr;
    // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Details of the data disk.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceDataDisk> dataDisk_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The total size of the disk. Unit: MiB.
    std::shared_ptr<int32_t> disk_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The expiration time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The hostname of the instance.
    // 
    // *   The hostname cannot start or end with a period (.) or hyphen (-). It cannot contain consecutive periods (.) or hyphens (-).
    // *   For a Windows instance, the hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). The hostname cannot contain periods (.) or contain only digits.
    // *   For an instance that runs another operating system such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The private IP addresses of the instances.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceInnerIpAddress> innerIpAddress_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The category of the instance. Valid values:
    // 
    // *   EnsInstance: ENS instances that you purchase.
    // *   EnsService: ENS instances that belong to edge services.
    // *   BuildMachine: ENS instances that are configured with image builders.
    // *   EnsPostPaidInstance: pay-as-you-go ENS instances that you purchase.
    std::shared_ptr<string> instanceResourceType_ = nullptr;
    // The instance family. Valid values:
    // 
    // *   x86_vm: x86-based computing instance.
    // *   x86_pm: x86-based physical machine.
    // *   x86_bmi: x86-based bare metal instance.
    // *   x86_bm: bare metal instance with the SmartNIC.
    // *   pc_bmi: heterogeneous bare metal instance.
    // *   pc_vm: heterogeneous virtual machine.
    // *   arm_bmi: Arm-based computing instance.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The maximum outbound bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The minimum inbound bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the SSH key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Details of the network.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes> networkAttributes_ = nullptr;
    // The ENI attached to the instance.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfaces> networkInterfaces_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> OSName_ = nullptr;
    // Details of the private IP addresses.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstancePrivateIpAddresses> privateIpAddresses_ = nullptr;
    // The public IP addresses of the instances.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddress> publicIpAddress_ = nullptr;
    // Details of the public IP addresses.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstancePublicIpAddresses> publicIpAddresses_ = nullptr;
    // The IDs of the security groups.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds> securityGroupIds_ = nullptr;
    // The ID of your Alibaba Cloud account.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // The instance type.
    std::shared_ptr<string> specName_ = nullptr;
    // The bidding policy of the preemptible instance.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   Running
    // *   Expired
    // *   Stopped
    std::shared_ptr<string> status_ = nullptr;
    // Details of the system disk.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceSystemDisk> systemDisk_ = nullptr;
    // The tags of the instance.
    // 
    // >  This operation does not return tag information. You can call this operation in combination with the tag-related operations.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
