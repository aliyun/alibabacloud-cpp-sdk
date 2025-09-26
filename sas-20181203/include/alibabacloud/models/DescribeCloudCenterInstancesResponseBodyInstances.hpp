// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudCenterInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudCenterInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_TO_JSON(AuthModifyTime, authModifyTime_);
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(AuthVersionName, authVersionName_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_TO_JSON(ClientSubStatus, clientSubStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(CpuInfo, cpuInfo_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ExposedStatus, exposedStatus_);
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(FlagName, flagName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupTrace, groupTrace_);
      DARABONBA_PTR_TO_JSON(HasContainer, hasContainer_);
      DARABONBA_PTR_TO_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_TO_JSON(HealthCheckCount, healthCheckCount_);
      DARABONBA_PTR_TO_JSON(Importance, importance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpListString, ipListString_);
      DARABONBA_PTR_TO_JSON(Kernel, kernel_);
      DARABONBA_PTR_TO_JSON(LastLoginTimestamp, lastLoginTimestamp_);
      DARABONBA_PTR_TO_JSON(MacListString, macListString_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(PostPaidFlag, postPaidFlag_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SafeEventCount, safeEventCount_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      DARABONBA_PTR_TO_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_TO_JSON(VendorUserName, vendorUserName_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      DARABONBA_PTR_TO_JSON(VulStatus, vulStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudCenterInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_FROM_JSON(AuthModifyTime, authModifyTime_);
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(AuthVersionName, authVersionName_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_FROM_JSON(ClientSubStatus, clientSubStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(CpuInfo, cpuInfo_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ExposedStatus, exposedStatus_);
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(FlagName, flagName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupTrace, groupTrace_);
      DARABONBA_PTR_FROM_JSON(HasContainer, hasContainer_);
      DARABONBA_PTR_FROM_JSON(HcStatus, hcStatus_);
      DARABONBA_PTR_FROM_JSON(HealthCheckCount, healthCheckCount_);
      DARABONBA_PTR_FROM_JSON(Importance, importance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpListString, ipListString_);
      DARABONBA_PTR_FROM_JSON(Kernel, kernel_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimestamp, lastLoginTimestamp_);
      DARABONBA_PTR_FROM_JSON(MacListString, macListString_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidFlag, postPaidFlag_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SafeEventCount, safeEventCount_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      DARABONBA_PTR_FROM_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_FROM_JSON(VendorUserName, vendorUserName_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      DARABONBA_PTR_FROM_JSON(VulStatus, vulStatus_);
    };
    DescribeCloudCenterInstancesResponseBodyInstances() = default ;
    DescribeCloudCenterInstancesResponseBodyInstances(const DescribeCloudCenterInstancesResponseBodyInstances &) = default ;
    DescribeCloudCenterInstancesResponseBodyInstances(DescribeCloudCenterInstancesResponseBodyInstances &&) = default ;
    DescribeCloudCenterInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudCenterInstancesResponseBodyInstances() = default ;
    DescribeCloudCenterInstancesResponseBodyInstances& operator=(const DescribeCloudCenterInstancesResponseBodyInstances &) = default ;
    DescribeCloudCenterInstancesResponseBodyInstances& operator=(DescribeCloudCenterInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmStatus_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->assetType_ != nullptr && this->assetTypeName_ != nullptr && this->authModifyTime_ != nullptr
        && this->authVersion_ != nullptr && this->authVersionName_ != nullptr && this->bind_ != nullptr && this->clientStatus_ != nullptr && this->clientSubStatus_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->cores_ != nullptr && this->cpuInfo_ != nullptr && this->createdTime_ != nullptr
        && this->exposedStatus_ != nullptr && this->flag_ != nullptr && this->flagName_ != nullptr && this->groupId_ != nullptr && this->groupTrace_ != nullptr
        && this->hasContainer_ != nullptr && this->hcStatus_ != nullptr && this->healthCheckCount_ != nullptr && this->importance_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->ip_ != nullptr && this->ipListString_ != nullptr
        && this->kernel_ != nullptr && this->lastLoginTimestamp_ != nullptr && this->macListString_ != nullptr && this->mem_ != nullptr && this->os_ != nullptr
        && this->osName_ != nullptr && this->podCount_ != nullptr && this->postPaidFlag_ != nullptr && this->region_ != nullptr && this->regionId_ != nullptr
        && this->regionName_ != nullptr && this->riskCount_ != nullptr && this->riskStatus_ != nullptr && this->safeEventCount_ != nullptr && this->serviceId_ != nullptr
        && this->status_ != nullptr && this->tag_ != nullptr && this->tagId_ != nullptr && this->tagResources_ != nullptr && this->uuid_ != nullptr
        && this->vendor_ != nullptr && this->vendorName_ != nullptr && this->vendorUid_ != nullptr && this->vendorUserName_ != nullptr && this->vpcInstanceId_ != nullptr
        && this->vulCount_ != nullptr && this->vulStatus_ != nullptr; };
    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string alarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetTypeName Field Functions 
    bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
    void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
    inline string assetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


    // authModifyTime Field Functions 
    bool hasAuthModifyTime() const { return this->authModifyTime_ != nullptr;};
    void deleteAuthModifyTime() { this->authModifyTime_ = nullptr;};
    inline int64_t authModifyTime() const { DARABONBA_PTR_GET_DEFAULT(authModifyTime_, 0L) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAuthModifyTime(int64_t authModifyTime) { DARABONBA_PTR_SET_VALUE(authModifyTime_, authModifyTime) };


    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // authVersionName Field Functions 
    bool hasAuthVersionName() const { return this->authVersionName_ != nullptr;};
    void deleteAuthVersionName() { this->authVersionName_ = nullptr;};
    inline string authVersionName() const { DARABONBA_PTR_GET_DEFAULT(authVersionName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setAuthVersionName(string authVersionName) { DARABONBA_PTR_SET_VALUE(authVersionName_, authVersionName) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // clientSubStatus Field Functions 
    bool hasClientSubStatus() const { return this->clientSubStatus_ != nullptr;};
    void deleteClientSubStatus() { this->clientSubStatus_ = nullptr;};
    inline string clientSubStatus() const { DARABONBA_PTR_GET_DEFAULT(clientSubStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setClientSubStatus(string clientSubStatus) { DARABONBA_PTR_SET_VALUE(clientSubStatus_, clientSubStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // cpuInfo Field Functions 
    bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
    void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
    inline string cpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // exposedStatus Field Functions 
    bool hasExposedStatus() const { return this->exposedStatus_ != nullptr;};
    void deleteExposedStatus() { this->exposedStatus_ = nullptr;};
    inline int32_t exposedStatus() const { DARABONBA_PTR_GET_DEFAULT(exposedStatus_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setExposedStatus(int32_t exposedStatus) { DARABONBA_PTR_SET_VALUE(exposedStatus_, exposedStatus) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline int32_t flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // flagName Field Functions 
    bool hasFlagName() const { return this->flagName_ != nullptr;};
    void deleteFlagName() { this->flagName_ = nullptr;};
    inline string flagName() const { DARABONBA_PTR_GET_DEFAULT(flagName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setFlagName(string flagName) { DARABONBA_PTR_SET_VALUE(flagName_, flagName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupTrace Field Functions 
    bool hasGroupTrace() const { return this->groupTrace_ != nullptr;};
    void deleteGroupTrace() { this->groupTrace_ = nullptr;};
    inline string groupTrace() const { DARABONBA_PTR_GET_DEFAULT(groupTrace_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setGroupTrace(string groupTrace) { DARABONBA_PTR_SET_VALUE(groupTrace_, groupTrace) };


    // hasContainer Field Functions 
    bool hasHasContainer() const { return this->hasContainer_ != nullptr;};
    void deleteHasContainer() { this->hasContainer_ = nullptr;};
    inline string hasContainer() const { DARABONBA_PTR_GET_DEFAULT(hasContainer_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setHasContainer(string hasContainer) { DARABONBA_PTR_SET_VALUE(hasContainer_, hasContainer) };


    // hcStatus Field Functions 
    bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
    void deleteHcStatus() { this->hcStatus_ = nullptr;};
    inline string hcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


    // healthCheckCount Field Functions 
    bool hasHealthCheckCount() const { return this->healthCheckCount_ != nullptr;};
    void deleteHealthCheckCount() { this->healthCheckCount_ = nullptr;};
    inline int32_t healthCheckCount() const { DARABONBA_PTR_GET_DEFAULT(healthCheckCount_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setHealthCheckCount(int32_t healthCheckCount) { DARABONBA_PTR_SET_VALUE(healthCheckCount_, healthCheckCount) };


    // importance Field Functions 
    bool hasImportance() const { return this->importance_ != nullptr;};
    void deleteImportance() { this->importance_ = nullptr;};
    inline int32_t importance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipListString Field Functions 
    bool hasIpListString() const { return this->ipListString_ != nullptr;};
    void deleteIpListString() { this->ipListString_ = nullptr;};
    inline string ipListString() const { DARABONBA_PTR_GET_DEFAULT(ipListString_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setIpListString(string ipListString) { DARABONBA_PTR_SET_VALUE(ipListString_, ipListString) };


    // kernel Field Functions 
    bool hasKernel() const { return this->kernel_ != nullptr;};
    void deleteKernel() { this->kernel_ = nullptr;};
    inline string kernel() const { DARABONBA_PTR_GET_DEFAULT(kernel_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setKernel(string kernel) { DARABONBA_PTR_SET_VALUE(kernel_, kernel) };


    // lastLoginTimestamp Field Functions 
    bool hasLastLoginTimestamp() const { return this->lastLoginTimestamp_ != nullptr;};
    void deleteLastLoginTimestamp() { this->lastLoginTimestamp_ = nullptr;};
    inline int64_t lastLoginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimestamp_, 0L) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setLastLoginTimestamp(int64_t lastLoginTimestamp) { DARABONBA_PTR_SET_VALUE(lastLoginTimestamp_, lastLoginTimestamp) };


    // macListString Field Functions 
    bool hasMacListString() const { return this->macListString_ != nullptr;};
    void deleteMacListString() { this->macListString_ = nullptr;};
    inline string macListString() const { DARABONBA_PTR_GET_DEFAULT(macListString_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setMacListString(string macListString) { DARABONBA_PTR_SET_VALUE(macListString_, macListString) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t podCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // postPaidFlag Field Functions 
    bool hasPostPaidFlag() const { return this->postPaidFlag_ != nullptr;};
    void deletePostPaidFlag() { this->postPaidFlag_ = nullptr;};
    inline int32_t postPaidFlag() const { DARABONBA_PTR_GET_DEFAULT(postPaidFlag_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setPostPaidFlag(int32_t postPaidFlag) { DARABONBA_PTR_SET_VALUE(postPaidFlag_, postPaidFlag) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline string riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setRiskCount(string riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // safeEventCount Field Functions 
    bool hasSafeEventCount() const { return this->safeEventCount_ != nullptr;};
    void deleteSafeEventCount() { this->safeEventCount_ = nullptr;};
    inline int32_t safeEventCount() const { DARABONBA_PTR_GET_DEFAULT(safeEventCount_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setSafeEventCount(int32_t safeEventCount) { DARABONBA_PTR_SET_VALUE(safeEventCount_, safeEventCount) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline string tagResources() const { DARABONBA_PTR_GET_DEFAULT(tagResources_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setTagResources(string tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    // vendorUid Field Functions 
    bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
    void deleteVendorUid() { this->vendorUid_ = nullptr;};
    inline string vendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


    // vendorUserName Field Functions 
    bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
    void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
    inline string vendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t vulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    // vulStatus Field Functions 
    bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
    void deleteVulStatus() { this->vulStatus_ = nullptr;};
    inline string vulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
    inline DescribeCloudCenterInstancesResponseBodyInstances& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


  protected:
    // Indicates whether alerts are generated on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> alarmStatus_ = nullptr;
    // The ID of the application.
    // 
    // >  This parameter is available only when the **Vendor** parameter is set to 9.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    // 
    // >  This parameter is available only when the **Vendor** parameter is set to 9.
    std::shared_ptr<string> appName_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **0**: an ECS instance
    // *   **1**: a Server Load Balancer (SLB) instance
    // *   **2**: a Network Address Translation (NAT) gateway
    // *   **3**: an ApsaraDB RDS instance
    // *   **4**: an ApsaraDB for MongoDB instance
    // *   **5**: an ApsaraDB for Redis instance
    // *   **6**: a container image
    // *   **7**: a container
    std::shared_ptr<string> assetType_ = nullptr;
    // The name of the asset type.
    std::shared_ptr<string> assetTypeName_ = nullptr;
    // The timestamp when Security Center is authorized to scan the asset.
    std::shared_ptr<int64_t> authModifyTime_ = nullptr;
    // The edition of Security Center that is authorized to scan the asset. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **6**: Anti-virus edition
    // *   **5**: Advanced edition
    // *   **3**: Enterprise edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // The name of the Security Center edition that is authorized to protect the asset. Valid values:
    // 
    // *   Basic edition
    // *   Anti-virus edition
    // *   Advanced edition
    // *   Enterprise edition
    // *   Ultimate edition
    std::shared_ptr<string> authVersionName_ = nullptr;
    // Indicates whether Security Center is authorized to scan the asset. Valid values:
    // 
    // *   **true**: Security Center is authorized to scan the asset.
    // *   **false**: Security Center is not authorized to scan the asset.
    std::shared_ptr<bool> bind_ = nullptr;
    // The status of the Security Center agent installed on the asset. Valid values:
    // 
    // *   **online**: The Security Center agent is **enabled**.
    // *   **offline**: The Security Center agent is **disabled**.
    // *   **pause**: The Security Center agent is **suspended**.
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The sub-status of the Security Center agent installed on the asset. Valid values:
    // 
    // *   **online**: The Security Center agent is **enabled**.
    // *   **offline**: The Security Center agent is **disabled**.
    // *   **pause**: The Security Center agent is **suspended**.
    // *   **uninstalled**: The Security Center agent is **uninstalled**.
    // *   **stopped**: The Security Center agent is **stopped**.
    std::shared_ptr<string> clientSubStatus_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The number of the CPU cores used by the asset.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The CPU information about the asset.
    std::shared_ptr<string> cpuInfo_ = nullptr;
    // The timestamp when the cluster was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // Indicates whether the asset is exposed. Valid values:
    // 
    // *   **0**: The asset is not exposed.
    // *   **1**: The asset is exposed.
    std::shared_ptr<int32_t> exposedStatus_ = nullptr;
    // Indicates whether the asset is an Alibaba Cloud asset. Valid values:
    // 
    // *   **0**: The asset is an Alibaba Cloud asset.
    // *   **1**: The asset is not an Alibaba Cloud asset.
    std::shared_ptr<int32_t> flag_ = nullptr;
    // Asset vendor. Values: 
    // - **ALIYUN** 
    // - **OUT**
    // - **IDC** 
    // - **Tencent** 
    // - **HUAWEICLOUD** 
    // - **Azure** 
    // - **AWS** 
    // - **ASK** 
    // - **TRIPARTITE** 
    // - **SAE** 
    // - **PAI** 
    // - **google** 
    // - **VOLCENGINE**
    std::shared_ptr<string> flagName_ = nullptr;
    // The ID of the asset group to which the asset belongs.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the group to which the asset belongs.
    std::shared_ptr<string> groupTrace_ = nullptr;
    // Indicates if containers are included. Valid values:
    // 
    // *   **YES**: yes.
    // *   **NO**: no.
    std::shared_ptr<string> hasContainer_ = nullptr;
    // Indicates whether baseline risks are detected on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> hcStatus_ = nullptr;
    // The number of baseline risks that are detected on the asset.
    std::shared_ptr<int32_t> healthCheckCount_ = nullptr;
    // The importance of the asset. Valid values:
    // 
    // *   **2**: an important asset
    // *   **1**: a common asset
    // *   **0**: a test asset
    std::shared_ptr<int32_t> importance_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP addresses of the system.
    std::shared_ptr<string> ipListString_ = nullptr;
    // The version of the kernel.
    std::shared_ptr<string> kernel_ = nullptr;
    // The timestamp when the Security Center agent was last online. Unit: milliseconds.
    std::shared_ptr<int64_t> lastLoginTimestamp_ = nullptr;
    // The MAC addresses of the system.
    std::shared_ptr<string> macListString_ = nullptr;
    // The size of the memory. Unit: MB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The operating system of the asset.
    std::shared_ptr<string> os_ = nullptr;
    // The kernel version of the asset.
    std::shared_ptr<string> osName_ = nullptr;
    // The number of pods.
    std::shared_ptr<int32_t> podCount_ = nullptr;
    // The billing method of the protection version currently bound to the asset. Values: - **0**: Subscription - **1**: Pay-as-you-go
    std::shared_ptr<int32_t> postPaidFlag_ = nullptr;
    // The region ID of the asset.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region in which the asset resides.
    std::shared_ptr<string> regionName_ = nullptr;
    // The total number of baseline risks that are detected on the asset. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **account**: the number of accounts that are used to log on from unapproved logon locations and whose passwords are cracked
    // *   **appNum**: the number of scanners
    // *   **asapVulCount**: the total number of high-severity vulnerabilities
    // *   **baselineHigh**: the number of high-risk baseline risks
    // *   **baselineLow**: the number of low-risk baseline risks
    // *   **baselineMedium**: the number of medium-risk baseline risks
    // *   **baselineNum**: the total number of baseline risks
    // *   **cmsNum**: the number of Web-CMS vulnerabilities
    // *   **containerAsap**: the number of high-severity vulnerabilities that are detected on containers
    // *   **containerLater**: the number of medium-severity vulnerabilities that are detected on containers
    // *   **containerNntf**: the number of low-severity vulnerabilities that are detected on containers
    // *   **containerRemind**: the number of alerts whose Emergency level is Reminder on containers
    // *   **containerSerious**: the number of alerts Emergency level is Urgent on containers
    // *   **containerSuspicious**: the number of alerts whose Emergency level is Suspicious on containers
    // *   **cveNum**: the number of Linux software vulnerabilities
    // *   **emgNum**: the number of urgent vulnerabilities
    // *   **health**: the number of baseline alerts that are unhandled
    // *   **imageBaselineHigh**: the number of high-risk baseline risks that are detected on images
    // *   **imageBaselineLow**: the number of low-risk baseline risks that are detected on images
    // *   **imageBaselineMedium**: the number of medium-risk baseline risks that are detected on images
    // *   **imageBaselineNum**: the total number of baseline risks that are detected on images
    // *   **imageMaliciousFileRemind**: the number of malicious files that are detected on images and have the Emergency level of Reminder
    // *   **imageMaliciousFileSerious**: the number of malicious files that are detected on images and have the Emergency level of Urgent
    // *   **imageMaliciousFileSuspicious**: the number of malicious files that are detected on images and have the Emergency level of Suspicious
    // *   **imageVulAsap**: the number of high-severity vulnerabilities that are detected on images
    // *   **imageVulLater**: the number of medium-severity vulnerabilities that are detected on an image
    // *   **imageVulNntf**: the number of low-severity vulnerabilities that are detected on an image
    // *   **laterVulCount**: the number of medium-severity vulnerabilities
    // *   **newSuspicious**: the number of alerts
    // *   **nntfVulCount**: the number of low-severity vulnerabilities.
    // *   **remindNum**: the number of alerts whose Emergency level is Reminder
    // *   **scaNum**: the number of vulnerabilities that are detected based on software component analysis
    // *   **seriousNum**: the number of alerts whose Emergency level is Urgent
    // *   **suspNum**: the number of alerts whose Emergency level is Suspicious
    // *   **suspicious**: the total number of alerts
    // *   **sysNum**: the number of Windows system vulnerabilities
    // *   **trojan**: the number of trojans
    // *   **uuid**: the UUIDs of assets
    // *   **vul**: the number of vulnerabilities
    // *   **weakPWNum**: the number of weak passwords
    std::shared_ptr<string> riskCount_ = nullptr;
    // Indicates whether risks are detected on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The number of alerts that are generated on the asset.
    std::shared_ptr<int32_t> safeEventCount_ = nullptr;
    // Service ID. Only available for PAI instances.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The status of the asset. Valid values:
    // 
    // *   **Running**: running
    // *   **notRunning**: stopped
    std::shared_ptr<string> status_ = nullptr;
    // The name of the asset tag.
    std::shared_ptr<string> tag_ = nullptr;
    // The ID of the asset tag.
    std::shared_ptr<string> tagId_ = nullptr;
    // The custom tag added to the Lingjun node. This parameter is returned only for LINGJUN GPU-accelerated instances.
    std::shared_ptr<string> tagResources_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
    // Asset vendor. Values:
    // - **0**: an asset provided by Alibaba Cloud
    // - **1**: an asset outside Alibaba Cloud
    // - **2**: an asset in a data center
    // - **3**, **4**, **5**, **7**, **14**, **16**: an asset from a third-party cloud service provider
    // - **8**: a lightweight asset
    // - **9**: a Serverless App Engine (SAE) instance
    // - **10**: an instance in Platform for AI (PAI)
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // The name of the service provider for the asset.
    // Values:
    //  - **ALIYUN**: Alibaba Cloud 
    // - **OUT**: a third-party service provider
    // - **IDC**: an asset in a data center
    // - **TENCENT**: Tencent Cloud
    // - **HUAWEICLOUD**: Huawei Cloud
    // - **Microsoft**: Microsoft Azure
    // - **AWS**: Amazon Web Services (AWS)
    // - **TRIPARTITE**: a lightweight server
    // - **SAE**: a Serverless App Engine (SAE) instance
    // - **PAI**: an instance in Platform for AI (PAI)
    // - **VOLCENGINE**: VOLCENGINE Cloud
    // - **google**: GOOGLE Cloud
    std::shared_ptr<string> vendorName_ = nullptr;
    std::shared_ptr<string> vendorUid_ = nullptr;
    std::shared_ptr<string> vendorUserName_ = nullptr;
    // The ID of the VPC to which the asset belongs.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
    // The number of vulnerabilities that are detected on the asset.
    std::shared_ptr<int32_t> vulCount_ = nullptr;
    // Indicates whether vulnerabilities are detected on the asset. Valid values:
    // 
    // *   **YES**
    // *   **NO**
    std::shared_ptr<string> vulStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
