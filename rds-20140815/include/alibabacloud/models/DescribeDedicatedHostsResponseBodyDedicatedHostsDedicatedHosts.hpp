// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(BastionInstanceId, bastionInstanceId_);
      DARABONBA_PTR_TO_JSON(CPUAllocationRatio, CPUAllocationRatio_);
      DARABONBA_PTR_TO_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DiskAllocationRatio, diskAllocationRatio_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(HostCPU, hostCPU_);
      DARABONBA_PTR_TO_JSON(HostClass, hostClass_);
      DARABONBA_PTR_TO_JSON(HostMem, hostMem_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostStatus, hostStatus_);
      DARABONBA_PTR_TO_JSON(HostStorage, hostStorage_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_TO_JSON(MemAllocationRatio, memAllocationRatio_);
      DARABONBA_PTR_TO_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_TO_JSON(OpenPermission, openPermission_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(BastionInstanceId, bastionInstanceId_);
      DARABONBA_PTR_FROM_JSON(CPUAllocationRatio, CPUAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DiskAllocationRatio, diskAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(HostCPU, hostCPU_);
      DARABONBA_PTR_FROM_JSON(HostClass, hostClass_);
      DARABONBA_PTR_FROM_JSON(HostMem, hostMem_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostStatus, hostStatus_);
      DARABONBA_PTR_FROM_JSON(HostStorage, hostStorage_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_FROM_JSON(MemAllocationRatio, memAllocationRatio_);
      DARABONBA_PTR_FROM_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_FROM_JSON(OpenPermission, openPermission_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->allocationStatus_ == nullptr && return this->bastionInstanceId_ == nullptr && return this->CPUAllocationRatio_ == nullptr && return this->cpuUsed_ == nullptr && return this->createdTime_ == nullptr
        && return this->dedicatedHostGroupId_ == nullptr && return this->dedicatedHostId_ == nullptr && return this->diskAllocationRatio_ == nullptr && return this->endTime_ == nullptr && return this->engine_ == nullptr
        && return this->hostCPU_ == nullptr && return this->hostClass_ == nullptr && return this->hostMem_ == nullptr && return this->hostName_ == nullptr && return this->hostStatus_ == nullptr
        && return this->hostStorage_ == nullptr && return this->hostType_ == nullptr && return this->IPAddress_ == nullptr && return this->imageCategory_ == nullptr && return this->instanceNumber_ == nullptr
        && return this->memAllocationRatio_ == nullptr && return this->memoryUsed_ == nullptr && return this->openPermission_ == nullptr && return this->storageUsed_ == nullptr && return this->VPCId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline string allocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


    // bastionInstanceId Field Functions 
    bool hasBastionInstanceId() const { return this->bastionInstanceId_ != nullptr;};
    void deleteBastionInstanceId() { this->bastionInstanceId_ = nullptr;};
    inline string bastionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bastionInstanceId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setBastionInstanceId(string bastionInstanceId) { DARABONBA_PTR_SET_VALUE(bastionInstanceId_, bastionInstanceId) };


    // CPUAllocationRatio Field Functions 
    bool hasCPUAllocationRatio() const { return this->CPUAllocationRatio_ != nullptr;};
    void deleteCPUAllocationRatio() { this->CPUAllocationRatio_ = nullptr;};
    inline string CPUAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(CPUAllocationRatio_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setCPUAllocationRatio(string CPUAllocationRatio) { DARABONBA_PTR_SET_VALUE(CPUAllocationRatio_, CPUAllocationRatio) };


    // cpuUsed Field Functions 
    bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
    void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
    inline string cpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setCpuUsed(string cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // diskAllocationRatio Field Functions 
    bool hasDiskAllocationRatio() const { return this->diskAllocationRatio_ != nullptr;};
    void deleteDiskAllocationRatio() { this->diskAllocationRatio_ = nullptr;};
    inline string diskAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(diskAllocationRatio_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setDiskAllocationRatio(string diskAllocationRatio) { DARABONBA_PTR_SET_VALUE(diskAllocationRatio_, diskAllocationRatio) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // hostCPU Field Functions 
    bool hasHostCPU() const { return this->hostCPU_ != nullptr;};
    void deleteHostCPU() { this->hostCPU_ = nullptr;};
    inline string hostCPU() const { DARABONBA_PTR_GET_DEFAULT(hostCPU_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostCPU(string hostCPU) { DARABONBA_PTR_SET_VALUE(hostCPU_, hostCPU) };


    // hostClass Field Functions 
    bool hasHostClass() const { return this->hostClass_ != nullptr;};
    void deleteHostClass() { this->hostClass_ = nullptr;};
    inline string hostClass() const { DARABONBA_PTR_GET_DEFAULT(hostClass_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostClass(string hostClass) { DARABONBA_PTR_SET_VALUE(hostClass_, hostClass) };


    // hostMem Field Functions 
    bool hasHostMem() const { return this->hostMem_ != nullptr;};
    void deleteHostMem() { this->hostMem_ = nullptr;};
    inline string hostMem() const { DARABONBA_PTR_GET_DEFAULT(hostMem_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostMem(string hostMem) { DARABONBA_PTR_SET_VALUE(hostMem_, hostMem) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostStatus Field Functions 
    bool hasHostStatus() const { return this->hostStatus_ != nullptr;};
    void deleteHostStatus() { this->hostStatus_ = nullptr;};
    inline string hostStatus() const { DARABONBA_PTR_GET_DEFAULT(hostStatus_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostStatus(string hostStatus) { DARABONBA_PTR_SET_VALUE(hostStatus_, hostStatus) };


    // hostStorage Field Functions 
    bool hasHostStorage() const { return this->hostStorage_ != nullptr;};
    void deleteHostStorage() { this->hostStorage_ = nullptr;};
    inline string hostStorage() const { DARABONBA_PTR_GET_DEFAULT(hostStorage_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostStorage(string hostStorage) { DARABONBA_PTR_SET_VALUE(hostStorage_, hostStorage) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // instanceNumber Field Functions 
    bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
    void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
    inline string instanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setInstanceNumber(string instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


    // memAllocationRatio Field Functions 
    bool hasMemAllocationRatio() const { return this->memAllocationRatio_ != nullptr;};
    void deleteMemAllocationRatio() { this->memAllocationRatio_ = nullptr;};
    inline string memAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(memAllocationRatio_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setMemAllocationRatio(string memAllocationRatio) { DARABONBA_PTR_SET_VALUE(memAllocationRatio_, memAllocationRatio) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline string memoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setMemoryUsed(string memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // openPermission Field Functions 
    bool hasOpenPermission() const { return this->openPermission_ != nullptr;};
    void deleteOpenPermission() { this->openPermission_ = nullptr;};
    inline string openPermission() const { DARABONBA_PTR_GET_DEFAULT(openPermission_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setOpenPermission(string openPermission) { DARABONBA_PTR_SET_VALUE(openPermission_, openPermission) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline string storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The host account. You can call the [CreateDedicatedHostAccount](https://help.aliyun.com/document_detail/196877.html) operation to create a host account.
    std::shared_ptr<string> accountName_ = nullptr;
    // Specifies whether instances can be deployed on the host. Valid values:
    // 
    // *   **0**: Instances cannot be deployed on the host.
    // *   **1**: Instances can be deployed on the host.
    std::shared_ptr<string> allocationStatus_ = nullptr;
    // The bastion host ID.
    std::shared_ptr<string> bastionInstanceId_ = nullptr;
    // The core overcommitment ratio of the dedicated cluster. Unit: percentage. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
    std::shared_ptr<string> CPUAllocationRatio_ = nullptr;
    // The number of used CPU cores on the host. Unit: cores.
    std::shared_ptr<string> cpuUsed_ = nullptr;
    // The time when the host was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The dedicated cluster ID.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The host ID.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The disk overcommitment ratio of the dedicated cluster. Unit: percentage. For more information about the core overcommitment ratio, see [Manage a dedicated cluster](https://help.aliyun.com/document_detail/182328.html).
    std::shared_ptr<string> diskAllocationRatio_ = nullptr;
    // The time when the host expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The database engine of instances that are created on the host.
    std::shared_ptr<string> engine_ = nullptr;
    // The total number of CPU cores that are configured for the host. Unit: cores.
    std::shared_ptr<string> hostCPU_ = nullptr;
    // The instance type of the host.
    std::shared_ptr<string> hostClass_ = nullptr;
    // The total memory space of the host. Unit: MB.
    std::shared_ptr<string> hostMem_ = nullptr;
    // The host name.
    std::shared_ptr<string> hostName_ = nullptr;
    // The status of the host. Valid values:
    // 
    // *   **0**: creating
    // *   **1**: running
    // *   **2**: faulty
    // *   **3**: being replaced
    // *   **4**: deprecated
    // *   **5**: deleting
    // *   **6**: restarting
    std::shared_ptr<string> hostStatus_ = nullptr;
    // The storage capacity of the host. Unit: MB.
    std::shared_ptr<string> hostStorage_ = nullptr;
    // The storage type of the host. Valid values:
    // 
    // *   **dhg_cloud_ssd**: ESSD
    // *   **dhg_local_ssd**: local SSD
    std::shared_ptr<string> hostType_ = nullptr;
    // The internal IP address of the host.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The host image. This parameter is returned only when the **Engine** parameter is set to **mssql**. Valid values:
    // 
    // *   **WindowsWithMssqlStdLicense**: a Windows image that contains the licenses of SQL Server Standard Edition
    // *   **WindowsWithMssqlEntLisence**: a Windows image that contains the licenses of SQL Server Enterprise Edition
    // *   **WindowsWithMssqlWebLisence**: a Windows image that contains the licenses of SQL Server Web Edition
    std::shared_ptr<string> imageCategory_ = nullptr;
    // The total number of instances that are created on the host.
    std::shared_ptr<string> instanceNumber_ = nullptr;
    // The maximum memory usage per host in the dedicated cluster.
    std::shared_ptr<string> memAllocationRatio_ = nullptr;
    // The size of the used memory. Unit: MB.
    std::shared_ptr<string> memoryUsed_ = nullptr;
    // Indicates whether the feature that allows you to have the OS permissions on the host is enabled. Valid values:
    // 
    // *   **0** or **null**: The permissions cannot be granted.
    // *   **1**: The permissions can be granted.
    // *   **3**: The permissions have been granted.
    std::shared_ptr<string> openPermission_ = nullptr;
    // The amount of used storage space on the host.
    std::shared_ptr<string> storageUsed_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the host belongs.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The ID of the vSwitch associated with the specified VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the host.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
