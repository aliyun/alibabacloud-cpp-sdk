// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody(DescribeDedicatedHostsResponseBody &&) = default ;
    DescribeDedicatedHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody& operator=(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody& operator=(DescribeDedicatedHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHosts& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHosts, dedicatedHosts_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHosts& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHosts, dedicatedHosts_);
      };
      DedicatedHosts() = default ;
      DedicatedHosts(const DedicatedHosts &) = default ;
      DedicatedHosts(DedicatedHosts &&) = default ;
      DedicatedHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHosts() = default ;
      DedicatedHosts& operator=(const DedicatedHosts &) = default ;
      DedicatedHosts& operator=(DedicatedHosts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHostsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHostsItem& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DedicatedHostsItem& obj) { 
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
        DedicatedHostsItem() = default ;
        DedicatedHostsItem(const DedicatedHostsItem &) = default ;
        DedicatedHostsItem(DedicatedHostsItem &&) = default ;
        DedicatedHostsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHostsItem() = default ;
        DedicatedHostsItem& operator=(const DedicatedHostsItem &) = default ;
        DedicatedHostsItem& operator=(DedicatedHostsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->allocationStatus_ == nullptr && this->bastionInstanceId_ == nullptr && this->CPUAllocationRatio_ == nullptr && this->cpuUsed_ == nullptr && this->createdTime_ == nullptr
        && this->dedicatedHostGroupId_ == nullptr && this->dedicatedHostId_ == nullptr && this->diskAllocationRatio_ == nullptr && this->endTime_ == nullptr && this->engine_ == nullptr
        && this->hostCPU_ == nullptr && this->hostClass_ == nullptr && this->hostMem_ == nullptr && this->hostName_ == nullptr && this->hostStatus_ == nullptr
        && this->hostStorage_ == nullptr && this->hostType_ == nullptr && this->IPAddress_ == nullptr && this->imageCategory_ == nullptr && this->instanceNumber_ == nullptr
        && this->memAllocationRatio_ == nullptr && this->memoryUsed_ == nullptr && this->openPermission_ == nullptr && this->storageUsed_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline DedicatedHostsItem& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // allocationStatus Field Functions 
        bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
        void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
        inline string getAllocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
        inline DedicatedHostsItem& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


        // bastionInstanceId Field Functions 
        bool hasBastionInstanceId() const { return this->bastionInstanceId_ != nullptr;};
        void deleteBastionInstanceId() { this->bastionInstanceId_ = nullptr;};
        inline string getBastionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bastionInstanceId_, "") };
        inline DedicatedHostsItem& setBastionInstanceId(string bastionInstanceId) { DARABONBA_PTR_SET_VALUE(bastionInstanceId_, bastionInstanceId) };


        // CPUAllocationRatio Field Functions 
        bool hasCPUAllocationRatio() const { return this->CPUAllocationRatio_ != nullptr;};
        void deleteCPUAllocationRatio() { this->CPUAllocationRatio_ = nullptr;};
        inline string getCPUAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(CPUAllocationRatio_, "") };
        inline DedicatedHostsItem& setCPUAllocationRatio(string CPUAllocationRatio) { DARABONBA_PTR_SET_VALUE(CPUAllocationRatio_, CPUAllocationRatio) };


        // cpuUsed Field Functions 
        bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
        void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
        inline string getCpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, "") };
        inline DedicatedHostsItem& setCpuUsed(string cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline DedicatedHostsItem& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // dedicatedHostGroupId Field Functions 
        bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
        void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
        inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
        inline DedicatedHostsItem& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


        // dedicatedHostId Field Functions 
        bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
        void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
        inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
        inline DedicatedHostsItem& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


        // diskAllocationRatio Field Functions 
        bool hasDiskAllocationRatio() const { return this->diskAllocationRatio_ != nullptr;};
        void deleteDiskAllocationRatio() { this->diskAllocationRatio_ = nullptr;};
        inline string getDiskAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(diskAllocationRatio_, "") };
        inline DedicatedHostsItem& setDiskAllocationRatio(string diskAllocationRatio) { DARABONBA_PTR_SET_VALUE(diskAllocationRatio_, diskAllocationRatio) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DedicatedHostsItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DedicatedHostsItem& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // hostCPU Field Functions 
        bool hasHostCPU() const { return this->hostCPU_ != nullptr;};
        void deleteHostCPU() { this->hostCPU_ = nullptr;};
        inline string getHostCPU() const { DARABONBA_PTR_GET_DEFAULT(hostCPU_, "") };
        inline DedicatedHostsItem& setHostCPU(string hostCPU) { DARABONBA_PTR_SET_VALUE(hostCPU_, hostCPU) };


        // hostClass Field Functions 
        bool hasHostClass() const { return this->hostClass_ != nullptr;};
        void deleteHostClass() { this->hostClass_ = nullptr;};
        inline string getHostClass() const { DARABONBA_PTR_GET_DEFAULT(hostClass_, "") };
        inline DedicatedHostsItem& setHostClass(string hostClass) { DARABONBA_PTR_SET_VALUE(hostClass_, hostClass) };


        // hostMem Field Functions 
        bool hasHostMem() const { return this->hostMem_ != nullptr;};
        void deleteHostMem() { this->hostMem_ = nullptr;};
        inline string getHostMem() const { DARABONBA_PTR_GET_DEFAULT(hostMem_, "") };
        inline DedicatedHostsItem& setHostMem(string hostMem) { DARABONBA_PTR_SET_VALUE(hostMem_, hostMem) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline DedicatedHostsItem& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // hostStatus Field Functions 
        bool hasHostStatus() const { return this->hostStatus_ != nullptr;};
        void deleteHostStatus() { this->hostStatus_ = nullptr;};
        inline string getHostStatus() const { DARABONBA_PTR_GET_DEFAULT(hostStatus_, "") };
        inline DedicatedHostsItem& setHostStatus(string hostStatus) { DARABONBA_PTR_SET_VALUE(hostStatus_, hostStatus) };


        // hostStorage Field Functions 
        bool hasHostStorage() const { return this->hostStorage_ != nullptr;};
        void deleteHostStorage() { this->hostStorage_ = nullptr;};
        inline string getHostStorage() const { DARABONBA_PTR_GET_DEFAULT(hostStorage_, "") };
        inline DedicatedHostsItem& setHostStorage(string hostStorage) { DARABONBA_PTR_SET_VALUE(hostStorage_, hostStorage) };


        // hostType Field Functions 
        bool hasHostType() const { return this->hostType_ != nullptr;};
        void deleteHostType() { this->hostType_ = nullptr;};
        inline string getHostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
        inline DedicatedHostsItem& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline DedicatedHostsItem& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // imageCategory Field Functions 
        bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
        void deleteImageCategory() { this->imageCategory_ = nullptr;};
        inline string getImageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
        inline DedicatedHostsItem& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


        // instanceNumber Field Functions 
        bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
        void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
        inline string getInstanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, "") };
        inline DedicatedHostsItem& setInstanceNumber(string instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


        // memAllocationRatio Field Functions 
        bool hasMemAllocationRatio() const { return this->memAllocationRatio_ != nullptr;};
        void deleteMemAllocationRatio() { this->memAllocationRatio_ = nullptr;};
        inline string getMemAllocationRatio() const { DARABONBA_PTR_GET_DEFAULT(memAllocationRatio_, "") };
        inline DedicatedHostsItem& setMemAllocationRatio(string memAllocationRatio) { DARABONBA_PTR_SET_VALUE(memAllocationRatio_, memAllocationRatio) };


        // memoryUsed Field Functions 
        bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
        void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
        inline string getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, "") };
        inline DedicatedHostsItem& setMemoryUsed(string memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


        // openPermission Field Functions 
        bool hasOpenPermission() const { return this->openPermission_ != nullptr;};
        void deleteOpenPermission() { this->openPermission_ = nullptr;};
        inline string getOpenPermission() const { DARABONBA_PTR_GET_DEFAULT(openPermission_, "") };
        inline DedicatedHostsItem& setOpenPermission(string openPermission) { DARABONBA_PTR_SET_VALUE(openPermission_, openPermission) };


        // storageUsed Field Functions 
        bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
        void deleteStorageUsed() { this->storageUsed_ = nullptr;};
        inline string getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
        inline DedicatedHostsItem& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DedicatedHostsItem& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DedicatedHostsItem& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DedicatedHostsItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> allocationStatus_ {};
        shared_ptr<string> bastionInstanceId_ {};
        shared_ptr<string> CPUAllocationRatio_ {};
        shared_ptr<string> cpuUsed_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> dedicatedHostGroupId_ {};
        shared_ptr<string> dedicatedHostId_ {};
        shared_ptr<string> diskAllocationRatio_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> engine_ {};
        shared_ptr<string> hostCPU_ {};
        shared_ptr<string> hostClass_ {};
        shared_ptr<string> hostMem_ {};
        shared_ptr<string> hostName_ {};
        shared_ptr<string> hostStatus_ {};
        shared_ptr<string> hostStorage_ {};
        shared_ptr<string> hostType_ {};
        shared_ptr<string> IPAddress_ {};
        shared_ptr<string> imageCategory_ {};
        shared_ptr<string> instanceNumber_ {};
        shared_ptr<string> memAllocationRatio_ {};
        shared_ptr<string> memoryUsed_ {};
        shared_ptr<string> openPermission_ {};
        shared_ptr<string> storageUsed_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->dedicatedHosts_ == nullptr; };
      // dedicatedHosts Field Functions 
      bool hasDedicatedHosts() const { return this->dedicatedHosts_ != nullptr;};
      void deleteDedicatedHosts() { this->dedicatedHosts_ = nullptr;};
      inline const vector<DedicatedHosts::DedicatedHostsItem> & getDedicatedHosts() const { DARABONBA_PTR_GET_CONST(dedicatedHosts_, vector<DedicatedHosts::DedicatedHostsItem>) };
      inline vector<DedicatedHosts::DedicatedHostsItem> getDedicatedHosts() { DARABONBA_PTR_GET(dedicatedHosts_, vector<DedicatedHosts::DedicatedHostsItem>) };
      inline DedicatedHosts& setDedicatedHosts(const vector<DedicatedHosts::DedicatedHostsItem> & dedicatedHosts) { DARABONBA_PTR_SET_VALUE(dedicatedHosts_, dedicatedHosts) };
      inline DedicatedHosts& setDedicatedHosts(vector<DedicatedHosts::DedicatedHostsItem> && dedicatedHosts) { DARABONBA_PTR_SET_RVALUE(dedicatedHosts_, dedicatedHosts) };


    protected:
      shared_ptr<vector<DedicatedHosts::DedicatedHostsItem>> dedicatedHosts_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostGroupId_ == nullptr
        && this->dedicatedHosts_ == nullptr && this->requestId_ == nullptr; };
    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHosts Field Functions 
    bool hasDedicatedHosts() const { return this->dedicatedHosts_ != nullptr;};
    void deleteDedicatedHosts() { this->dedicatedHosts_ = nullptr;};
    inline const DescribeDedicatedHostsResponseBody::DedicatedHosts & getDedicatedHosts() const { DARABONBA_PTR_GET_CONST(dedicatedHosts_, DescribeDedicatedHostsResponseBody::DedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody::DedicatedHosts getDedicatedHosts() { DARABONBA_PTR_GET(dedicatedHosts_, DescribeDedicatedHostsResponseBody::DedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(const DescribeDedicatedHostsResponseBody::DedicatedHosts & dedicatedHosts) { DARABONBA_PTR_SET_VALUE(dedicatedHosts_, dedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(DescribeDedicatedHostsResponseBody::DedicatedHosts && dedicatedHosts) { DARABONBA_PTR_SET_RVALUE(dedicatedHosts_, dedicatedHosts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The host group ID.
    shared_ptr<string> dedicatedHostGroupId_ {};
    shared_ptr<DescribeDedicatedHostsResponseBody::DedicatedHosts> dedicatedHosts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
