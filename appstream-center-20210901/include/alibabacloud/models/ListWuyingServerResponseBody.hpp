// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WuyingServerList, wuyingServerList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WuyingServerList, wuyingServerList_);
    };
    ListWuyingServerResponseBody() = default ;
    ListWuyingServerResponseBody(const ListWuyingServerResponseBody &) = default ;
    ListWuyingServerResponseBody(ListWuyingServerResponseBody &&) = default ;
    ListWuyingServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerResponseBody() = default ;
    ListWuyingServerResponseBody& operator=(const ListWuyingServerResponseBody &) = default ;
    ListWuyingServerResponseBody& operator=(ListWuyingServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WuyingServerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WuyingServerList& obj) { 
        DARABONBA_PTR_TO_JSON(AddVirtualNodePoolStatus, addVirtualNodePoolStatus_);
        DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(InstanceInfoList, instanceInfoList_);
        DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(ServerInstanceTypeInfo, serverInstanceTypeInfo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(VirtualNodePoolId, virtualNodePoolId_);
        DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
        DARABONBA_PTR_TO_JSON(WuyingServerName, wuyingServerName_);
      };
      friend void from_json(const Darabonba::Json& j, WuyingServerList& obj) { 
        DARABONBA_PTR_FROM_JSON(AddVirtualNodePoolStatus, addVirtualNodePoolStatus_);
        DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(InstanceInfoList, instanceInfoList_);
        DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(ServerInstanceTypeInfo, serverInstanceTypeInfo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(VirtualNodePoolId, virtualNodePoolId_);
        DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
        DARABONBA_PTR_FROM_JSON(WuyingServerName, wuyingServerName_);
      };
      WuyingServerList() = default ;
      WuyingServerList(const WuyingServerList &) = default ;
      WuyingServerList(WuyingServerList &&) = default ;
      WuyingServerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WuyingServerList() = default ;
      WuyingServerList& operator=(const WuyingServerList &) = default ;
      WuyingServerList& operator=(WuyingServerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServerInstanceTypeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServerInstanceTypeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Gpu, gpu_);
          DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
        };
        friend void from_json(const Darabonba::Json& j, ServerInstanceTypeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
          DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
        };
        ServerInstanceTypeInfo() = default ;
        ServerInstanceTypeInfo(const ServerInstanceTypeInfo &) = default ;
        ServerInstanceTypeInfo(ServerInstanceTypeInfo &&) = default ;
        ServerInstanceTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServerInstanceTypeInfo() = default ;
        ServerInstanceTypeInfo& operator=(const ServerInstanceTypeInfo &) = default ;
        ServerInstanceTypeInfo& operator=(ServerInstanceTypeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->memory_ == nullptr && this->serverInstanceType_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
        inline ServerInstanceTypeInfo& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // gpu Field Functions 
        bool hasGpu() const { return this->gpu_ != nullptr;};
        void deleteGpu() { this->gpu_ = nullptr;};
        inline string getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
        inline ServerInstanceTypeInfo& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


        // gpuMemory Field Functions 
        bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
        void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
        inline int32_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
        inline ServerInstanceTypeInfo& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline ServerInstanceTypeInfo& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // serverInstanceType Field Functions 
        bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
        void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
        inline string getServerInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
        inline ServerInstanceTypeInfo& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


      protected:
        // The number of vCPUs.
        shared_ptr<string> cpu_ {};
        // The number of GPUs.
        shared_ptr<string> gpu_ {};
        // The memory size. Unit: MB.
        shared_ptr<int32_t> gpuMemory_ {};
        // The memory size. Unit: MB.
        shared_ptr<int32_t> memory_ {};
        // Workstation specifications.
        shared_ptr<string> serverInstanceType_ {};
      };

      class InstanceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        };
        InstanceInfoList() = default ;
        InstanceInfoList(const InstanceInfoList &) = default ;
        InstanceInfoList(InstanceInfoList &&) = default ;
        InstanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceInfoList() = default ;
        InstanceInfoList& operator=(const InstanceInfoList &) = default ;
        InstanceInfoList& operator=(InstanceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkInterfaceId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline InstanceInfoList& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      protected:
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The ID of the ENI.
        shared_ptr<string> networkInterfaceId_ {};
      };

      class DataDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
          DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
          DARABONBA_PTR_TO_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
          DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        };
        friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
          DARABONBA_PTR_FROM_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
          DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        };
        DataDisk() = default ;
        DataDisk(const DataDisk &) = default ;
        DataDisk(DataDisk &&) = default ;
        DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDisk() = default ;
        DataDisk& operator=(const DataDisk &) = default ;
        DataDisk& operator=(DataDisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataDiskCategory_ == nullptr
        && this->dataDiskPerformanceLevel_ == nullptr && this->dataDiskSize_ == nullptr; };
        // dataDiskCategory Field Functions 
        bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
        void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
        inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
        inline DataDisk& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


        // dataDiskPerformanceLevel Field Functions 
        bool hasDataDiskPerformanceLevel() const { return this->dataDiskPerformanceLevel_ != nullptr;};
        void deleteDataDiskPerformanceLevel() { this->dataDiskPerformanceLevel_ = nullptr;};
        inline string getDataDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerformanceLevel_, "") };
        inline DataDisk& setDataDiskPerformanceLevel(string dataDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerformanceLevel_, dataDiskPerformanceLevel) };


        // dataDiskSize Field Functions 
        bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
        void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
        inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
        inline DataDisk& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      protected:
        // The category of data disk.
        shared_ptr<string> dataDiskCategory_ {};
        // The PL of the data disk.
        shared_ptr<string> dataDiskPerformanceLevel_ {};
        // The size of the data disk. Unit: GB.
        shared_ptr<int32_t> dataDiskSize_ {};
      };

      virtual bool empty() const override { return this->addVirtualNodePoolStatus_ == nullptr
        && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->dataDisk_ == nullptr && this->expiredTime_ == nullptr
        && this->imageId_ == nullptr && this->imageName_ == nullptr && this->instanceInfoList_ == nullptr && this->maxPrice_ == nullptr && this->networkInterfaceIp_ == nullptr
        && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr && this->osType_ == nullptr && this->securityGroupIds_ == nullptr
        && this->serverInstanceTypeInfo_ == nullptr && this->status_ == nullptr && this->subPayType_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr
        && this->systemDiskSize_ == nullptr && this->virtualNodePoolId_ == nullptr && this->wuyingServerId_ == nullptr && this->wuyingServerName_ == nullptr; };
      // addVirtualNodePoolStatus Field Functions 
      bool hasAddVirtualNodePoolStatus() const { return this->addVirtualNodePoolStatus_ != nullptr;};
      void deleteAddVirtualNodePoolStatus() { this->addVirtualNodePoolStatus_ = nullptr;};
      inline string getAddVirtualNodePoolStatus() const { DARABONBA_PTR_GET_DEFAULT(addVirtualNodePoolStatus_, "") };
      inline WuyingServerList& setAddVirtualNodePoolStatus(string addVirtualNodePoolStatus) { DARABONBA_PTR_SET_VALUE(addVirtualNodePoolStatus_, addVirtualNodePoolStatus) };


      // bizRegionId Field Functions 
      bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
      void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
      inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
      inline WuyingServerList& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline WuyingServerList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WuyingServerList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataDisk Field Functions 
      bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
      void deleteDataDisk() { this->dataDisk_ = nullptr;};
      inline const vector<WuyingServerList::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<WuyingServerList::DataDisk>) };
      inline vector<WuyingServerList::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<WuyingServerList::DataDisk>) };
      inline WuyingServerList& setDataDisk(const vector<WuyingServerList::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
      inline WuyingServerList& setDataDisk(vector<WuyingServerList::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline WuyingServerList& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline WuyingServerList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline WuyingServerList& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // instanceInfoList Field Functions 
      bool hasInstanceInfoList() const { return this->instanceInfoList_ != nullptr;};
      void deleteInstanceInfoList() { this->instanceInfoList_ = nullptr;};
      inline const vector<WuyingServerList::InstanceInfoList> & getInstanceInfoList() const { DARABONBA_PTR_GET_CONST(instanceInfoList_, vector<WuyingServerList::InstanceInfoList>) };
      inline vector<WuyingServerList::InstanceInfoList> getInstanceInfoList() { DARABONBA_PTR_GET(instanceInfoList_, vector<WuyingServerList::InstanceInfoList>) };
      inline WuyingServerList& setInstanceInfoList(const vector<WuyingServerList::InstanceInfoList> & instanceInfoList) { DARABONBA_PTR_SET_VALUE(instanceInfoList_, instanceInfoList) };
      inline WuyingServerList& setInstanceInfoList(vector<WuyingServerList::InstanceInfoList> && instanceInfoList) { DARABONBA_PTR_SET_RVALUE(instanceInfoList_, instanceInfoList) };


      // maxPrice Field Functions 
      bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
      void deleteMaxPrice() { this->maxPrice_ = nullptr;};
      inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
      inline WuyingServerList& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline WuyingServerList& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline WuyingServerList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline WuyingServerList& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline WuyingServerList& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline WuyingServerList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline WuyingServerList& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline WuyingServerList& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // serverInstanceTypeInfo Field Functions 
      bool hasServerInstanceTypeInfo() const { return this->serverInstanceTypeInfo_ != nullptr;};
      void deleteServerInstanceTypeInfo() { this->serverInstanceTypeInfo_ = nullptr;};
      inline const WuyingServerList::ServerInstanceTypeInfo & getServerInstanceTypeInfo() const { DARABONBA_PTR_GET_CONST(serverInstanceTypeInfo_, WuyingServerList::ServerInstanceTypeInfo) };
      inline WuyingServerList::ServerInstanceTypeInfo getServerInstanceTypeInfo() { DARABONBA_PTR_GET(serverInstanceTypeInfo_, WuyingServerList::ServerInstanceTypeInfo) };
      inline WuyingServerList& setServerInstanceTypeInfo(const WuyingServerList::ServerInstanceTypeInfo & serverInstanceTypeInfo) { DARABONBA_PTR_SET_VALUE(serverInstanceTypeInfo_, serverInstanceTypeInfo) };
      inline WuyingServerList& setServerInstanceTypeInfo(WuyingServerList::ServerInstanceTypeInfo && serverInstanceTypeInfo) { DARABONBA_PTR_SET_RVALUE(serverInstanceTypeInfo_, serverInstanceTypeInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WuyingServerList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline WuyingServerList& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline WuyingServerList& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline WuyingServerList& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline WuyingServerList& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // virtualNodePoolId Field Functions 
      bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
      void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
      inline string getVirtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
      inline WuyingServerList& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


      // wuyingServerId Field Functions 
      bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
      void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
      inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
      inline WuyingServerList& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


      // wuyingServerName Field Functions 
      bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
      void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
      inline string getWuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
      inline WuyingServerList& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


    protected:
      shared_ptr<string> addVirtualNodePoolStatus_ {};
      // Region.
      shared_ptr<string> bizRegionId_ {};
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // The time when the storage resource was created.
      shared_ptr<string> createTime_ {};
      // The data disks.
      shared_ptr<vector<WuyingServerList::DataDisk>> dataDisk_ {};
      // The time when the subscription instance expires.
      shared_ptr<string> expiredTime_ {};
      // The ID of the custom image.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The list of information about the workstation instance.
      shared_ptr<vector<WuyingServerList::InstanceInfoList>> instanceInfoList_ {};
      shared_ptr<float> maxPrice_ {};
      // The private IP address.
      shared_ptr<string> networkInterfaceIp_ {};
      // The ID of the office network.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The type of the office network.
      shared_ptr<string> officeSiteType_ {};
      // The OS type.
      shared_ptr<string> osType_ {};
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The specifications.
      shared_ptr<WuyingServerList::ServerInstanceTypeInfo> serverInstanceTypeInfo_ {};
      // The status of the workstation.
      shared_ptr<string> status_ {};
      shared_ptr<string> subPayType_ {};
      // The type of the system disk.
      shared_ptr<string> systemDiskCategory_ {};
      // The performance level (PL) of the system disk.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The size of the system disk. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      shared_ptr<string> virtualNodePoolId_ {};
      // The ID of the workstation.
      shared_ptr<string> wuyingServerId_ {};
      // The name of the workstation.
      shared_ptr<string> wuyingServerName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->wuyingServerList_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWuyingServerResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWuyingServerResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWuyingServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWuyingServerResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // wuyingServerList Field Functions 
    bool hasWuyingServerList() const { return this->wuyingServerList_ != nullptr;};
    void deleteWuyingServerList() { this->wuyingServerList_ = nullptr;};
    inline const vector<ListWuyingServerResponseBody::WuyingServerList> & getWuyingServerList() const { DARABONBA_PTR_GET_CONST(wuyingServerList_, vector<ListWuyingServerResponseBody::WuyingServerList>) };
    inline vector<ListWuyingServerResponseBody::WuyingServerList> getWuyingServerList() { DARABONBA_PTR_GET(wuyingServerList_, vector<ListWuyingServerResponseBody::WuyingServerList>) };
    inline ListWuyingServerResponseBody& setWuyingServerList(const vector<ListWuyingServerResponseBody::WuyingServerList> & wuyingServerList) { DARABONBA_PTR_SET_VALUE(wuyingServerList_, wuyingServerList) };
    inline ListWuyingServerResponseBody& setWuyingServerList(vector<ListWuyingServerResponseBody::WuyingServerList> && wuyingServerList) { DARABONBA_PTR_SET_RVALUE(wuyingServerList_, wuyingServerList) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The list of workstation information.
    shared_ptr<vector<ListWuyingServerResponseBody::WuyingServerList>> wuyingServerList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
