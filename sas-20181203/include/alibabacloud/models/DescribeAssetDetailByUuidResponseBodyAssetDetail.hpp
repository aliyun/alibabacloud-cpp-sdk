// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDRESPONSEBODYASSETDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETDETAILBYUUIDRESPONSEBODYASSETDETAIL_HPP_
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
  class DescribeAssetDetailByUuidResponseBodyAssetDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetDetailByUuidResponseBodyAssetDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AuthModifyTime, authModifyTime_);
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
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
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetDetailByUuidResponseBodyAssetDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AuthModifyTime, authModifyTime_);
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
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
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeAssetDetailByUuidResponseBodyAssetDetail() = default ;
    DescribeAssetDetailByUuidResponseBodyAssetDetail(const DescribeAssetDetailByUuidResponseBodyAssetDetail &) = default ;
    DescribeAssetDetailByUuidResponseBodyAssetDetail(DescribeAssetDetailByUuidResponseBodyAssetDetail &&) = default ;
    DescribeAssetDetailByUuidResponseBodyAssetDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetDetailByUuidResponseBodyAssetDetail() = default ;
    DescribeAssetDetailByUuidResponseBodyAssetDetail& operator=(const DescribeAssetDetailByUuidResponseBodyAssetDetail &) = default ;
    DescribeAssetDetailByUuidResponseBodyAssetDetail& operator=(DescribeAssetDetailByUuidResponseBodyAssetDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetType_ != nullptr
        && this->authModifyTime_ != nullptr && this->authVersion_ != nullptr && this->bind_ != nullptr && this->clientStatus_ != nullptr && this->clientVersion_ != nullptr
        && this->cpu_ != nullptr && this->cpuInfo_ != nullptr && this->createTime_ != nullptr && this->diskInfoList_ != nullptr && this->flag_ != nullptr
        && this->groupTrace_ != nullptr && this->hostName_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->ip_ != nullptr && this->ipList_ != nullptr && this->kernel_ != nullptr && this->macList_ != nullptr
        && this->mem_ != nullptr && this->memory_ != nullptr && this->os_ != nullptr && this->osDetail_ != nullptr && this->osName_ != nullptr
        && this->region_ != nullptr && this->regionId_ != nullptr && this->regionName_ != nullptr && this->sysInfo_ != nullptr && this->tag_ != nullptr
        && this->uuid_ != nullptr && this->vpcInstanceId_ != nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // authModifyTime Field Functions 
    bool hasAuthModifyTime() const { return this->authModifyTime_ != nullptr;};
    void deleteAuthModifyTime() { this->authModifyTime_ = nullptr;};
    inline int64_t authModifyTime() const { DARABONBA_PTR_GET_DEFAULT(authModifyTime_, 0L) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setAuthModifyTime(int64_t authModifyTime) { DARABONBA_PTR_SET_VALUE(authModifyTime_, authModifyTime) };


    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuInfo Field Functions 
    bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
    void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
    inline string cpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diskInfoList Field Functions 
    bool hasDiskInfoList() const { return this->diskInfoList_ != nullptr;};
    void deleteDiskInfoList() { this->diskInfoList_ = nullptr;};
    inline const vector<string> & diskInfoList() const { DARABONBA_PTR_GET_CONST(diskInfoList_, vector<string>) };
    inline vector<string> diskInfoList() { DARABONBA_PTR_GET(diskInfoList_, vector<string>) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setDiskInfoList(const vector<string> & diskInfoList) { DARABONBA_PTR_SET_VALUE(diskInfoList_, diskInfoList) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setDiskInfoList(vector<string> && diskInfoList) { DARABONBA_PTR_SET_RVALUE(diskInfoList_, diskInfoList) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline int32_t flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // groupTrace Field Functions 
    bool hasGroupTrace() const { return this->groupTrace_ != nullptr;};
    void deleteGroupTrace() { this->groupTrace_ = nullptr;};
    inline string groupTrace() const { DARABONBA_PTR_GET_DEFAULT(groupTrace_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setGroupTrace(string groupTrace) { DARABONBA_PTR_SET_VALUE(groupTrace_, groupTrace) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> ipList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // kernel Field Functions 
    bool hasKernel() const { return this->kernel_ != nullptr;};
    void deleteKernel() { this->kernel_ = nullptr;};
    inline string kernel() const { DARABONBA_PTR_GET_DEFAULT(kernel_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setKernel(string kernel) { DARABONBA_PTR_SET_VALUE(kernel_, kernel) };


    // macList Field Functions 
    bool hasMacList() const { return this->macList_ != nullptr;};
    void deleteMacList() { this->macList_ = nullptr;};
    inline const vector<string> & macList() const { DARABONBA_PTR_GET_CONST(macList_, vector<string>) };
    inline vector<string> macList() { DARABONBA_PTR_GET(macList_, vector<string>) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setMacList(const vector<string> & macList) { DARABONBA_PTR_SET_VALUE(macList_, macList) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setMacList(vector<string> && macList) { DARABONBA_PTR_SET_RVALUE(macList_, macList) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osDetail Field Functions 
    bool hasOsDetail() const { return this->osDetail_ != nullptr;};
    void deleteOsDetail() { this->osDetail_ = nullptr;};
    inline string osDetail() const { DARABONBA_PTR_GET_DEFAULT(osDetail_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setOsDetail(string osDetail) { DARABONBA_PTR_SET_VALUE(osDetail_, osDetail) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // sysInfo Field Functions 
    bool hasSysInfo() const { return this->sysInfo_ != nullptr;};
    void deleteSysInfo() { this->sysInfo_ = nullptr;};
    inline string sysInfo() const { DARABONBA_PTR_GET_DEFAULT(sysInfo_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setSysInfo(string sysInfo) { DARABONBA_PTR_SET_VALUE(sysInfo_, sysInfo) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeAssetDetailByUuidResponseBodyAssetDetail& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The type of the asset. Valid values:
    // 
    // *   **0**: ECS instance
    // *   **1**: Server Load Balancer (SLB) instance
    // *   **2**: NAT gateway
    // *   **3**: ApsaraDB RDS database
    // *   **4**: ApsaraDB for MongoDB database
    // *   **5**: ApsaraDB for Redis database
    // *   **6**: image
    // *   **7**: container
    std::shared_ptr<string> assetType_ = nullptr;
    // The timestamp when Security Center is authorized to protect the asset. Unit: milliseconds.
    std::shared_ptr<int64_t> authModifyTime_ = nullptr;
    // The edition of Security Center that is authorized to protect the asset. Valid values:
    // 
    // *   **1**: Basic edition (Unauthorized)
    // *   **6**: Anti-virus edition
    // *   **5**: Advanced edition
    // *   **3**: Enterprise edition
    // *   **7**: Ultimate edition
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // Indicates whether Security Center is authorized to protect the asset. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> bind_ = nullptr;
    // The status of the Security Center agent. Valid values:
    // 
    // *   **pause**: The Security Center agent suspends protection for your server.
    // *   **online**: The Security Center agent is protecting your server.
    // *   **offline**: The Security Center agent does not protect your server.
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The version of the Security Center agent.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The details of the CPU.
    std::shared_ptr<string> cpuInfo_ = nullptr;
    // The timestamp when Security Center records the details of the server. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // An array that consists of the information about the disk.
    std::shared_ptr<vector<string>> diskInfoList_ = nullptr;
    // Indicates whether the asset is provided by Alibaba Cloud. Valid values:
    // 
    // *   **0**: yes
    // *   **1**: no
    std::shared_ptr<int32_t> flag_ = nullptr;
    // The group to which the server belongs. By default, the servers that are not grouped belong to the **Default** group.
    std::shared_ptr<string> groupTrace_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address that is assigned to the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP addresses of the server.
    std::shared_ptr<vector<string>> ipList_ = nullptr;
    // The kernel version of the operating system.
    std::shared_ptr<string> kernel_ = nullptr;
    // The media access control (MAC) addresses of the server.
    std::shared_ptr<vector<string>> macList_ = nullptr;
    // The memory size of the server. Unit: GB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The memory size of the server. Unit: MB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The operating system type of the server.
    std::shared_ptr<string> os_ = nullptr;
    // The operating system version of the server.
    std::shared_ptr<string> osDetail_ = nullptr;
    // The name of the operating system.
    std::shared_ptr<string> osName_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region in which the server resides.
    std::shared_ptr<string> regionName_ = nullptr;
    // The operating system information about the server.
    std::shared_ptr<string> sysInfo_ = nullptr;
    // The tag that is added to the server.
    std::shared_ptr<string> tag_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the server resides.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
