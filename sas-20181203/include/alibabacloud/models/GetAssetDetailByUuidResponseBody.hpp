// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetDetailByUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetDetailByUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDetail, assetDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetDetailByUuidResponseBody() = default ;
    GetAssetDetailByUuidResponseBody(const GetAssetDetailByUuidResponseBody &) = default ;
    GetAssetDetailByUuidResponseBody(GetAssetDetailByUuidResponseBody &&) = default ;
    GetAssetDetailByUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetDetailByUuidResponseBody() = default ;
    GetAssetDetailByUuidResponseBody& operator=(const GetAssetDetailByUuidResponseBody &) = default ;
    GetAssetDetailByUuidResponseBody& operator=(GetAssetDetailByUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AuthModifyTime, authModifyTime_);
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(ClientSubStatus, clientSubStatus_);
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CpuInfo, cpuInfo_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DiskInfoList, diskInfoList_);
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(GroupTrace, groupTrace_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(IpList, ipList_);
        DARABONBA_PTR_TO_JSON(Kernel, kernel_);
        DARABONBA_PTR_TO_JSON(MacList, macList_);
        DARABONBA_PTR_TO_JSON(Mem, mem_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsDetail, osDetail_);
        DARABONBA_PTR_TO_JSON(OsName, osName_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(SysInfo, sysInfo_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
        DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AssetDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AuthModifyTime, authModifyTime_);
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(ClientSubStatus, clientSubStatus_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CpuInfo, cpuInfo_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DiskInfoList, diskInfoList_);
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(GroupTrace, groupTrace_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(IpList, ipList_);
        DARABONBA_PTR_FROM_JSON(Kernel, kernel_);
        DARABONBA_PTR_FROM_JSON(MacList, macList_);
        DARABONBA_PTR_FROM_JSON(Mem, mem_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsDetail, osDetail_);
        DARABONBA_PTR_FROM_JSON(OsName, osName_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(SysInfo, sysInfo_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
        DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
      };
      AssetDetail() = default ;
      AssetDetail(const AssetDetail &) = default ;
      AssetDetail(AssetDetail &&) = default ;
      AssetDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetDetail() = default ;
      AssetDetail& operator=(const AssetDetail &) = default ;
      AssetDetail& operator=(AssetDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DiskInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
          DARABONBA_PTR_TO_JSON(TotalSizeByte, totalSizeByte_);
          DARABONBA_PTR_TO_JSON(UseSize, useSize_);
          DARABONBA_PTR_TO_JSON(UseSizeByte, useSizeByte_);
        };
        friend void from_json(const Darabonba::Json& j, DiskInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
          DARABONBA_PTR_FROM_JSON(TotalSizeByte, totalSizeByte_);
          DARABONBA_PTR_FROM_JSON(UseSize, useSize_);
          DARABONBA_PTR_FROM_JSON(UseSizeByte, useSizeByte_);
        };
        DiskInfoList() = default ;
        DiskInfoList(const DiskInfoList &) = default ;
        DiskInfoList(DiskInfoList &&) = default ;
        DiskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskInfoList() = default ;
        DiskInfoList& operator=(const DiskInfoList &) = default ;
        DiskInfoList& operator=(DiskInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskName_ == nullptr
        && this->totalSize_ == nullptr && this->totalSizeByte_ == nullptr && this->useSize_ == nullptr && this->useSizeByte_ == nullptr; };
        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline DiskInfoList& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline DiskInfoList& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


        // totalSizeByte Field Functions 
        bool hasTotalSizeByte() const { return this->totalSizeByte_ != nullptr;};
        void deleteTotalSizeByte() { this->totalSizeByte_ = nullptr;};
        inline int64_t getTotalSizeByte() const { DARABONBA_PTR_GET_DEFAULT(totalSizeByte_, 0L) };
        inline DiskInfoList& setTotalSizeByte(int64_t totalSizeByte) { DARABONBA_PTR_SET_VALUE(totalSizeByte_, totalSizeByte) };


        // useSize Field Functions 
        bool hasUseSize() const { return this->useSize_ != nullptr;};
        void deleteUseSize() { this->useSize_ = nullptr;};
        inline int64_t getUseSize() const { DARABONBA_PTR_GET_DEFAULT(useSize_, 0L) };
        inline DiskInfoList& setUseSize(int64_t useSize) { DARABONBA_PTR_SET_VALUE(useSize_, useSize) };


        // useSizeByte Field Functions 
        bool hasUseSizeByte() const { return this->useSizeByte_ != nullptr;};
        void deleteUseSizeByte() { this->useSizeByte_ = nullptr;};
        inline int64_t getUseSizeByte() const { DARABONBA_PTR_GET_DEFAULT(useSizeByte_, 0L) };
        inline DiskInfoList& setUseSizeByte(int64_t useSizeByte) { DARABONBA_PTR_SET_VALUE(useSizeByte_, useSizeByte) };


      protected:
        // The name of the disk.
        shared_ptr<string> diskName_ {};
        // The total disk space. Unit: GB.
        shared_ptr<int64_t> totalSize_ {};
        // The total disk space. Unit: bytes.
        shared_ptr<int64_t> totalSizeByte_ {};
        // The amount of the used disk space. Unit: GB.
        shared_ptr<int64_t> useSize_ {};
        // The amount of the used disk space. Unit: bytes.
        shared_ptr<int64_t> useSizeByte_ {};
      };

      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->authModifyTime_ == nullptr && this->authVersion_ == nullptr && this->bind_ == nullptr && this->clientStatus_ == nullptr && this->clientSubStatus_ == nullptr
        && this->clientVersion_ == nullptr && this->cpu_ == nullptr && this->cpuInfo_ == nullptr && this->createTime_ == nullptr && this->diskInfoList_ == nullptr
        && this->flag_ == nullptr && this->groupTrace_ == nullptr && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr && this->ipList_ == nullptr && this->kernel_ == nullptr
        && this->macList_ == nullptr && this->mem_ == nullptr && this->memory_ == nullptr && this->os_ == nullptr && this->osDetail_ == nullptr
        && this->osName_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr && this->sysInfo_ == nullptr
        && this->tag_ == nullptr && this->uuid_ == nullptr && this->vendorAuthAlias_ == nullptr && this->vpcInstanceId_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline AssetDetail& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // authModifyTime Field Functions 
      bool hasAuthModifyTime() const { return this->authModifyTime_ != nullptr;};
      void deleteAuthModifyTime() { this->authModifyTime_ = nullptr;};
      inline int64_t getAuthModifyTime() const { DARABONBA_PTR_GET_DEFAULT(authModifyTime_, 0L) };
      inline AssetDetail& setAuthModifyTime(int64_t authModifyTime) { DARABONBA_PTR_SET_VALUE(authModifyTime_, authModifyTime) };


      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline AssetDetail& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline bool getBind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
      inline AssetDetail& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline AssetDetail& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // clientSubStatus Field Functions 
      bool hasClientSubStatus() const { return this->clientSubStatus_ != nullptr;};
      void deleteClientSubStatus() { this->clientSubStatus_ = nullptr;};
      inline string getClientSubStatus() const { DARABONBA_PTR_GET_DEFAULT(clientSubStatus_, "") };
      inline AssetDetail& setClientSubStatus(string clientSubStatus) { DARABONBA_PTR_SET_VALUE(clientSubStatus_, clientSubStatus) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline AssetDetail& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline AssetDetail& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // cpuInfo Field Functions 
      bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
      void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
      inline string getCpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
      inline AssetDetail& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AssetDetail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diskInfoList Field Functions 
      bool hasDiskInfoList() const { return this->diskInfoList_ != nullptr;};
      void deleteDiskInfoList() { this->diskInfoList_ = nullptr;};
      inline const vector<AssetDetail::DiskInfoList> & getDiskInfoList() const { DARABONBA_PTR_GET_CONST(diskInfoList_, vector<AssetDetail::DiskInfoList>) };
      inline vector<AssetDetail::DiskInfoList> getDiskInfoList() { DARABONBA_PTR_GET(diskInfoList_, vector<AssetDetail::DiskInfoList>) };
      inline AssetDetail& setDiskInfoList(const vector<AssetDetail::DiskInfoList> & diskInfoList) { DARABONBA_PTR_SET_VALUE(diskInfoList_, diskInfoList) };
      inline AssetDetail& setDiskInfoList(vector<AssetDetail::DiskInfoList> && diskInfoList) { DARABONBA_PTR_SET_RVALUE(diskInfoList_, diskInfoList) };


      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline int32_t getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
      inline AssetDetail& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // groupTrace Field Functions 
      bool hasGroupTrace() const { return this->groupTrace_ != nullptr;};
      void deleteGroupTrace() { this->groupTrace_ = nullptr;};
      inline string getGroupTrace() const { DARABONBA_PTR_GET_DEFAULT(groupTrace_, "") };
      inline AssetDetail& setGroupTrace(string groupTrace) { DARABONBA_PTR_SET_VALUE(groupTrace_, groupTrace) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline AssetDetail& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AssetDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AssetDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline AssetDetail& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline AssetDetail& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline AssetDetail& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ipList Field Functions 
      bool hasIpList() const { return this->ipList_ != nullptr;};
      void deleteIpList() { this->ipList_ = nullptr;};
      inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
      inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
      inline AssetDetail& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
      inline AssetDetail& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


      // kernel Field Functions 
      bool hasKernel() const { return this->kernel_ != nullptr;};
      void deleteKernel() { this->kernel_ = nullptr;};
      inline string getKernel() const { DARABONBA_PTR_GET_DEFAULT(kernel_, "") };
      inline AssetDetail& setKernel(string kernel) { DARABONBA_PTR_SET_VALUE(kernel_, kernel) };


      // macList Field Functions 
      bool hasMacList() const { return this->macList_ != nullptr;};
      void deleteMacList() { this->macList_ = nullptr;};
      inline const vector<string> & getMacList() const { DARABONBA_PTR_GET_CONST(macList_, vector<string>) };
      inline vector<string> getMacList() { DARABONBA_PTR_GET(macList_, vector<string>) };
      inline AssetDetail& setMacList(const vector<string> & macList) { DARABONBA_PTR_SET_VALUE(macList_, macList) };
      inline AssetDetail& setMacList(vector<string> && macList) { DARABONBA_PTR_SET_RVALUE(macList_, macList) };


      // mem Field Functions 
      bool hasMem() const { return this->mem_ != nullptr;};
      void deleteMem() { this->mem_ = nullptr;};
      inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
      inline AssetDetail& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline AssetDetail& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline AssetDetail& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osDetail Field Functions 
      bool hasOsDetail() const { return this->osDetail_ != nullptr;};
      void deleteOsDetail() { this->osDetail_ = nullptr;};
      inline string getOsDetail() const { DARABONBA_PTR_GET_DEFAULT(osDetail_, "") };
      inline AssetDetail& setOsDetail(string osDetail) { DARABONBA_PTR_SET_VALUE(osDetail_, osDetail) };


      // osName Field Functions 
      bool hasOsName() const { return this->osName_ != nullptr;};
      void deleteOsName() { this->osName_ = nullptr;};
      inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
      inline AssetDetail& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline AssetDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AssetDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline AssetDetail& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // sysInfo Field Functions 
      bool hasSysInfo() const { return this->sysInfo_ != nullptr;};
      void deleteSysInfo() { this->sysInfo_ = nullptr;};
      inline string getSysInfo() const { DARABONBA_PTR_GET_DEFAULT(sysInfo_, "") };
      inline AssetDetail& setSysInfo(string sysInfo) { DARABONBA_PTR_SET_VALUE(sysInfo_, sysInfo) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline AssetDetail& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AssetDetail& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vendorAuthAlias Field Functions 
      bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
      void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
      inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
      inline AssetDetail& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline AssetDetail& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    protected:
      // The type of the server. Valid values:
      // 
      // *   **0**: ECS instance
      // *   **1**: Server Load Balancer (SLB) instance
      // *   **2**: NAT gateway
      // *   **3**: ApsaraDB RDS instance
      // *   **4**: ApsaraDB for MongoDB instance
      // *   **5**: ApsaraDB for Redis instance
      // *   **6**: image
      // *   **7**: container
      shared_ptr<string> assetType_ {};
      // The timestamp when Security Center is authorized to protect the asset. Unit: milliseconds.
      shared_ptr<int64_t> authModifyTime_ {};
      // The edition of Security Center that is authorized to protect the server. Valid values:
      // 
      // *   **1**: Basic (Unauthorized).
      // *   **6**: Anti-virus.
      // *   **5**: Advanced.
      // *   **3**: Enterprise.
      // *   **7**: Ultimate.
      shared_ptr<int32_t> authVersion_ {};
      // Indicates whether Security Center is authorized to protect the asset. Valid values:
      // 
      // *   **true**: Security Center is authorized to protect the asset.
      // *   **false**: Security Center is not authorized to protect the asset.
      shared_ptr<bool> bind_ {};
      // The status of the Security Center agent. Valid values:
      // 
      // *   **pause**: The Security Center agent stops protecting your server.
      // *   **online**: The Security Center agent is protecting your server.
      // *   **offline**: The Security Center agent does not protect your server.
      shared_ptr<string> clientStatus_ {};
      // The sub-status of the Security Center agent on the server. Valid values:
      // 
      // *   **online**: The Security Center agent on the asset is **enabled**.
      // *   **offline**: The Security Center agent on the asset is **disabled**.
      // *   **pause**: The Security Center agent is **suspended**.
      // *   **uninstalled**: The Security Center agent is **not installed**.
      // *   **stopped**: The asset is **shut down**.
      shared_ptr<string> clientSubStatus_ {};
      // The version of the Security Center agent.
      shared_ptr<string> clientVersion_ {};
      // The number of CPU cores.
      shared_ptr<int32_t> cpu_ {};
      // The details of the CPU.
      shared_ptr<string> cpuInfo_ {};
      // The timestamp when Security Center records the details of the server. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The list of information about the disk.
      shared_ptr<vector<AssetDetail::DiskInfoList>> diskInfoList_ {};
      // Indicates whether the asset is provided by Alibaba Cloud. Valid values:
      // 
      // *   **0**: The server is provided by Alibaba Cloud.
      // *   **1**: The server is not provided by Alibaba Cloud.
      shared_ptr<int32_t> flag_ {};
      // The group to which the server belongs. By default, the servers that are not grouped belong to the **Default** group.
      shared_ptr<string> groupTrace_ {};
      // The name of the host.
      shared_ptr<string> hostName_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The IP address that is assigned to the Elastic Compute Service (ECS) instance.
      shared_ptr<string> ip_ {};
      // An array that consists of the IP addresses of the server.
      shared_ptr<vector<string>> ipList_ {};
      // The kernel version of the operating system.
      shared_ptr<string> kernel_ {};
      // An array that consists of the media access control (MAC) addresses of the server.
      shared_ptr<vector<string>> macList_ {};
      // The memory size of the server. Unit: GB.
      shared_ptr<int32_t> mem_ {};
      // The memory size of the server. Unit: MB.
      shared_ptr<int64_t> memory_ {};
      // The operating system type of the server.
      shared_ptr<string> os_ {};
      // The operating system version of the server.
      shared_ptr<string> osDetail_ {};
      // The name of the operating system that the server runs.
      shared_ptr<string> osName_ {};
      // The region in which the server resides.
      shared_ptr<string> region_ {};
      // The ID of the region in which the asset resides.
      shared_ptr<string> regionId_ {};
      // The name of the region in which the server resides.
      shared_ptr<string> regionName_ {};
      // The operating system information about the server.
      shared_ptr<string> sysInfo_ {};
      // The tag that is added to the server.
      shared_ptr<string> tag_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The account to which the AccessKey pair belongs.
      // 
      // >  This parameter is returned only by third-party cloud servers. If the parameter value is empty, it will not be returned.
      shared_ptr<string> vendorAuthAlias_ {};
      // The ID of the virtual private cloud (VPC) in which the server resides.
      shared_ptr<string> vpcInstanceId_ {};
    };

    virtual bool empty() const override { return this->assetDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // assetDetail Field Functions 
    bool hasAssetDetail() const { return this->assetDetail_ != nullptr;};
    void deleteAssetDetail() { this->assetDetail_ = nullptr;};
    inline const GetAssetDetailByUuidResponseBody::AssetDetail & getAssetDetail() const { DARABONBA_PTR_GET_CONST(assetDetail_, GetAssetDetailByUuidResponseBody::AssetDetail) };
    inline GetAssetDetailByUuidResponseBody::AssetDetail getAssetDetail() { DARABONBA_PTR_GET(assetDetail_, GetAssetDetailByUuidResponseBody::AssetDetail) };
    inline GetAssetDetailByUuidResponseBody& setAssetDetail(const GetAssetDetailByUuidResponseBody::AssetDetail & assetDetail) { DARABONBA_PTR_SET_VALUE(assetDetail_, assetDetail) };
    inline GetAssetDetailByUuidResponseBody& setAssetDetail(GetAssetDetailByUuidResponseBody::AssetDetail && assetDetail) { DARABONBA_PTR_SET_RVALUE(assetDetail_, assetDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetDetailByUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the server.
    shared_ptr<GetAssetDetailByUuidResponseBody::AssetDetail> assetDetail_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
