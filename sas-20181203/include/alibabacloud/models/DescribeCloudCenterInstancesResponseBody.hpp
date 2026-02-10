// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESRESPONSEBODY_HPP_
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
  class DescribeCloudCenterInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudCenterInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudCenterInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudCenterInstancesResponseBody() = default ;
    DescribeCloudCenterInstancesResponseBody(const DescribeCloudCenterInstancesResponseBody &) = default ;
    DescribeCloudCenterInstancesResponseBody(DescribeCloudCenterInstancesResponseBody &&) = default ;
    DescribeCloudCenterInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudCenterInstancesResponseBody() = default ;
    DescribeCloudCenterInstancesResponseBody& operator=(const DescribeCloudCenterInstancesResponseBody &) = default ;
    DescribeCloudCenterInstancesResponseBody& operator=(DescribeCloudCenterInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The value of NextToken that is returned when the NextToken method is used.
      shared_ptr<string> nextToken_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
        DARABONBA_PTR_TO_JSON(AuthModifyTime, authModifyTime_);
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(AuthVersionName, authVersionName_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(BindFileProtectType, bindFileProtectType_);
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
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
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
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AssetTypeName, assetTypeName_);
        DARABONBA_PTR_FROM_JSON(AuthModifyTime, authModifyTime_);
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(AuthVersionName, authVersionName_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(BindFileProtectType, bindFileProtectType_);
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
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
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
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmStatus_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->assetType_ == nullptr && this->assetTypeName_ == nullptr && this->authModifyTime_ == nullptr
        && this->authVersion_ == nullptr && this->authVersionName_ == nullptr && this->bind_ == nullptr && this->bindFileProtectType_ == nullptr && this->clientStatus_ == nullptr
        && this->clientSubStatus_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->cores_ == nullptr && this->cpuInfo_ == nullptr
        && this->createdTime_ == nullptr && this->exposedStatus_ == nullptr && this->flag_ == nullptr && this->flagName_ == nullptr && this->groupId_ == nullptr
        && this->groupTrace_ == nullptr && this->hasContainer_ == nullptr && this->hcStatus_ == nullptr && this->healthCheckCount_ == nullptr && this->importance_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr
        && this->ipListString_ == nullptr && this->kernel_ == nullptr && this->lastLoginTimestamp_ == nullptr && this->macListString_ == nullptr && this->mem_ == nullptr
        && this->namespace_ == nullptr && this->os_ == nullptr && this->osName_ == nullptr && this->podCount_ == nullptr && this->postPaidFlag_ == nullptr
        && this->region_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr && this->riskCount_ == nullptr && this->riskStatus_ == nullptr
        && this->safeEventCount_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->tagId_ == nullptr
        && this->tagResources_ == nullptr && this->uuid_ == nullptr && this->vendor_ == nullptr && this->vendorName_ == nullptr && this->vendorUid_ == nullptr
        && this->vendorUserName_ == nullptr && this->vpcInstanceId_ == nullptr && this->vulCount_ == nullptr && this->vulStatus_ == nullptr; };
      // alarmStatus Field Functions 
      bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
      void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
      inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
      inline Instances& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Instances& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Instances& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Instances& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // assetTypeName Field Functions 
      bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
      void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
      inline string getAssetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
      inline Instances& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


      // authModifyTime Field Functions 
      bool hasAuthModifyTime() const { return this->authModifyTime_ != nullptr;};
      void deleteAuthModifyTime() { this->authModifyTime_ = nullptr;};
      inline int64_t getAuthModifyTime() const { DARABONBA_PTR_GET_DEFAULT(authModifyTime_, 0L) };
      inline Instances& setAuthModifyTime(int64_t authModifyTime) { DARABONBA_PTR_SET_VALUE(authModifyTime_, authModifyTime) };


      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline Instances& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // authVersionName Field Functions 
      bool hasAuthVersionName() const { return this->authVersionName_ != nullptr;};
      void deleteAuthVersionName() { this->authVersionName_ = nullptr;};
      inline string getAuthVersionName() const { DARABONBA_PTR_GET_DEFAULT(authVersionName_, "") };
      inline Instances& setAuthVersionName(string authVersionName) { DARABONBA_PTR_SET_VALUE(authVersionName_, authVersionName) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline bool getBind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
      inline Instances& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


      // bindFileProtectType Field Functions 
      bool hasBindFileProtectType() const { return this->bindFileProtectType_ != nullptr;};
      void deleteBindFileProtectType() { this->bindFileProtectType_ = nullptr;};
      inline string getBindFileProtectType() const { DARABONBA_PTR_GET_DEFAULT(bindFileProtectType_, "") };
      inline Instances& setBindFileProtectType(string bindFileProtectType) { DARABONBA_PTR_SET_VALUE(bindFileProtectType_, bindFileProtectType) };


      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline Instances& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // clientSubStatus Field Functions 
      bool hasClientSubStatus() const { return this->clientSubStatus_ != nullptr;};
      void deleteClientSubStatus() { this->clientSubStatus_ = nullptr;};
      inline string getClientSubStatus() const { DARABONBA_PTR_GET_DEFAULT(clientSubStatus_, "") };
      inline Instances& setClientSubStatus(string clientSubStatus) { DARABONBA_PTR_SET_VALUE(clientSubStatus_, clientSubStatus) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Instances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Instances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
      inline Instances& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


      // cpuInfo Field Functions 
      bool hasCpuInfo() const { return this->cpuInfo_ != nullptr;};
      void deleteCpuInfo() { this->cpuInfo_ = nullptr;};
      inline string getCpuInfo() const { DARABONBA_PTR_GET_DEFAULT(cpuInfo_, "") };
      inline Instances& setCpuInfo(string cpuInfo) { DARABONBA_PTR_SET_VALUE(cpuInfo_, cpuInfo) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Instances& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // exposedStatus Field Functions 
      bool hasExposedStatus() const { return this->exposedStatus_ != nullptr;};
      void deleteExposedStatus() { this->exposedStatus_ = nullptr;};
      inline int32_t getExposedStatus() const { DARABONBA_PTR_GET_DEFAULT(exposedStatus_, 0) };
      inline Instances& setExposedStatus(int32_t exposedStatus) { DARABONBA_PTR_SET_VALUE(exposedStatus_, exposedStatus) };


      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline int32_t getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
      inline Instances& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // flagName Field Functions 
      bool hasFlagName() const { return this->flagName_ != nullptr;};
      void deleteFlagName() { this->flagName_ = nullptr;};
      inline string getFlagName() const { DARABONBA_PTR_GET_DEFAULT(flagName_, "") };
      inline Instances& setFlagName(string flagName) { DARABONBA_PTR_SET_VALUE(flagName_, flagName) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Instances& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupTrace Field Functions 
      bool hasGroupTrace() const { return this->groupTrace_ != nullptr;};
      void deleteGroupTrace() { this->groupTrace_ = nullptr;};
      inline string getGroupTrace() const { DARABONBA_PTR_GET_DEFAULT(groupTrace_, "") };
      inline Instances& setGroupTrace(string groupTrace) { DARABONBA_PTR_SET_VALUE(groupTrace_, groupTrace) };


      // hasContainer Field Functions 
      bool hasHasContainer() const { return this->hasContainer_ != nullptr;};
      void deleteHasContainer() { this->hasContainer_ = nullptr;};
      inline string getHasContainer() const { DARABONBA_PTR_GET_DEFAULT(hasContainer_, "") };
      inline Instances& setHasContainer(string hasContainer) { DARABONBA_PTR_SET_VALUE(hasContainer_, hasContainer) };


      // hcStatus Field Functions 
      bool hasHcStatus() const { return this->hcStatus_ != nullptr;};
      void deleteHcStatus() { this->hcStatus_ = nullptr;};
      inline string getHcStatus() const { DARABONBA_PTR_GET_DEFAULT(hcStatus_, "") };
      inline Instances& setHcStatus(string hcStatus) { DARABONBA_PTR_SET_VALUE(hcStatus_, hcStatus) };


      // healthCheckCount Field Functions 
      bool hasHealthCheckCount() const { return this->healthCheckCount_ != nullptr;};
      void deleteHealthCheckCount() { this->healthCheckCount_ = nullptr;};
      inline int32_t getHealthCheckCount() const { DARABONBA_PTR_GET_DEFAULT(healthCheckCount_, 0) };
      inline Instances& setHealthCheckCount(int32_t healthCheckCount) { DARABONBA_PTR_SET_VALUE(healthCheckCount_, healthCheckCount) };


      // importance Field Functions 
      bool hasImportance() const { return this->importance_ != nullptr;};
      void deleteImportance() { this->importance_ = nullptr;};
      inline int32_t getImportance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
      inline Instances& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Instances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Instances& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ipListString Field Functions 
      bool hasIpListString() const { return this->ipListString_ != nullptr;};
      void deleteIpListString() { this->ipListString_ = nullptr;};
      inline string getIpListString() const { DARABONBA_PTR_GET_DEFAULT(ipListString_, "") };
      inline Instances& setIpListString(string ipListString) { DARABONBA_PTR_SET_VALUE(ipListString_, ipListString) };


      // kernel Field Functions 
      bool hasKernel() const { return this->kernel_ != nullptr;};
      void deleteKernel() { this->kernel_ = nullptr;};
      inline string getKernel() const { DARABONBA_PTR_GET_DEFAULT(kernel_, "") };
      inline Instances& setKernel(string kernel) { DARABONBA_PTR_SET_VALUE(kernel_, kernel) };


      // lastLoginTimestamp Field Functions 
      bool hasLastLoginTimestamp() const { return this->lastLoginTimestamp_ != nullptr;};
      void deleteLastLoginTimestamp() { this->lastLoginTimestamp_ = nullptr;};
      inline int64_t getLastLoginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimestamp_, 0L) };
      inline Instances& setLastLoginTimestamp(int64_t lastLoginTimestamp) { DARABONBA_PTR_SET_VALUE(lastLoginTimestamp_, lastLoginTimestamp) };


      // macListString Field Functions 
      bool hasMacListString() const { return this->macListString_ != nullptr;};
      void deleteMacListString() { this->macListString_ = nullptr;};
      inline string getMacListString() const { DARABONBA_PTR_GET_DEFAULT(macListString_, "") };
      inline Instances& setMacListString(string macListString) { DARABONBA_PTR_SET_VALUE(macListString_, macListString) };


      // mem Field Functions 
      bool hasMem() const { return this->mem_ != nullptr;};
      void deleteMem() { this->mem_ = nullptr;};
      inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
      inline Instances& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Instances& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Instances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osName Field Functions 
      bool hasOsName() const { return this->osName_ != nullptr;};
      void deleteOsName() { this->osName_ = nullptr;};
      inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
      inline Instances& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
      inline Instances& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // postPaidFlag Field Functions 
      bool hasPostPaidFlag() const { return this->postPaidFlag_ != nullptr;};
      void deletePostPaidFlag() { this->postPaidFlag_ = nullptr;};
      inline int32_t getPostPaidFlag() const { DARABONBA_PTR_GET_DEFAULT(postPaidFlag_, 0) };
      inline Instances& setPostPaidFlag(int32_t postPaidFlag) { DARABONBA_PTR_SET_VALUE(postPaidFlag_, postPaidFlag) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Instances& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline string getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, "") };
      inline Instances& setRiskCount(string riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // riskStatus Field Functions 
      bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
      void deleteRiskStatus() { this->riskStatus_ = nullptr;};
      inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
      inline Instances& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


      // safeEventCount Field Functions 
      bool hasSafeEventCount() const { return this->safeEventCount_ != nullptr;};
      void deleteSafeEventCount() { this->safeEventCount_ = nullptr;};
      inline int32_t getSafeEventCount() const { DARABONBA_PTR_GET_DEFAULT(safeEventCount_, 0) };
      inline Instances& setSafeEventCount(int32_t safeEventCount) { DARABONBA_PTR_SET_VALUE(safeEventCount_, safeEventCount) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Instances& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Instances& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Instances& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagResources Field Functions 
      bool hasTagResources() const { return this->tagResources_ != nullptr;};
      void deleteTagResources() { this->tagResources_ = nullptr;};
      inline string getTagResources() const { DARABONBA_PTR_GET_DEFAULT(tagResources_, "") };
      inline Instances& setTagResources(string tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Instances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline Instances& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline Instances& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


      // vendorUid Field Functions 
      bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
      void deleteVendorUid() { this->vendorUid_ = nullptr;};
      inline string getVendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
      inline Instances& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


      // vendorUserName Field Functions 
      bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
      void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
      inline string getVendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
      inline Instances& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline Instances& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline Instances& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // vulStatus Field Functions 
      bool hasVulStatus() const { return this->vulStatus_ != nullptr;};
      void deleteVulStatus() { this->vulStatus_ = nullptr;};
      inline string getVulStatus() const { DARABONBA_PTR_GET_DEFAULT(vulStatus_, "") };
      inline Instances& setVulStatus(string vulStatus) { DARABONBA_PTR_SET_VALUE(vulStatus_, vulStatus) };


    protected:
      // Indicates whether alerts are generated on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> alarmStatus_ {};
      // The ID of the application.
      // 
      // >  This parameter is available only when the **Vendor** parameter is set to 9.
      shared_ptr<string> appId_ {};
      // The name of the application.
      // 
      // >  This parameter is available only when the **Vendor** parameter is set to 9.
      shared_ptr<string> appName_ {};
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
      shared_ptr<string> assetType_ {};
      // The name of the asset type.
      shared_ptr<string> assetTypeName_ {};
      // The timestamp when Security Center is authorized to scan the asset.
      shared_ptr<int64_t> authModifyTime_ {};
      // The edition of Security Center that is authorized to scan the asset. Valid values:
      // 
      // *   **1**: Basic edition
      // *   **6**: Anti-virus edition
      // *   **5**: Advanced edition
      // *   **3**: Enterprise edition
      // *   **7**: Ultimate edition
      // *   **10**: Value-added Plan edition
      shared_ptr<int32_t> authVersion_ {};
      // The name of the Security Center edition that is authorized to protect the asset. Valid values:
      // 
      // *   Basic edition
      // *   Anti-virus edition
      // *   Advanced edition
      // *   Enterprise edition
      // *   Ultimate edition
      shared_ptr<string> authVersionName_ {};
      // Indicates whether Security Center is authorized to scan the asset. Valid values:
      // 
      // *   **true**: Security Center is authorized to scan the asset.
      // *   **false**: Security Center is not authorized to scan the asset.
      shared_ptr<bool> bind_ {};
      // Whether to bind tamper-proof authorization. Values:
      // - **block**: Yes
      // - **none**: No
      shared_ptr<string> bindFileProtectType_ {};
      // The status of the Security Center agent installed on the asset. Valid values:
      // 
      // *   **online**: The Security Center agent is **enabled**.
      // *   **offline**: The Security Center agent is **disabled**.
      // *   **pause**: The Security Center agent is **suspended**.
      shared_ptr<string> clientStatus_ {};
      // The sub-status of the Security Center agent installed on the asset. Valid values:
      // 
      // *   **online**: The Security Center agent is **enabled**.
      // *   **offline**: The Security Center agent is **disabled**.
      // *   **pause**: The Security Center agent is **suspended**.
      // *   **uninstalled**: The Security Center agent is **uninstalled**.
      // *   **stopped**: The Security Center agent is **stopped**.
      shared_ptr<string> clientSubStatus_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The number of the CPU cores used by the asset.
      shared_ptr<int32_t> cores_ {};
      // The CPU information about the asset.
      shared_ptr<string> cpuInfo_ {};
      // The timestamp when the cluster was created. Unit: milliseconds.
      shared_ptr<int64_t> createdTime_ {};
      // Indicates whether the asset is exposed. Valid values:
      // 
      // *   **0**: The asset is not exposed.
      // *   **1**: The asset is exposed.
      shared_ptr<int32_t> exposedStatus_ {};
      // Indicates whether the asset is an Alibaba Cloud asset. Valid values:
      // 
      // *   **0**: The asset is an Alibaba Cloud asset.
      // *   **1**: The asset is not an Alibaba Cloud asset.
      shared_ptr<int32_t> flag_ {};
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
      shared_ptr<string> flagName_ {};
      // The ID of the asset group to which the asset belongs.
      shared_ptr<int64_t> groupId_ {};
      // The name of the group to which the asset belongs.
      shared_ptr<string> groupTrace_ {};
      // Indicates if containers are included. Valid values:
      // 
      // *   **YES**: yes.
      // *   **NO**: no.
      shared_ptr<string> hasContainer_ {};
      // Indicates whether baseline risks are detected on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> hcStatus_ {};
      // The number of baseline risks that are detected on the asset.
      shared_ptr<int32_t> healthCheckCount_ {};
      // The importance of the asset. Valid values:
      // 
      // *   **2**: an important asset
      // *   **1**: a common asset
      // *   **0**: a test asset
      shared_ptr<int32_t> importance_ {};
      // The ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The public IP address of the asset.
      shared_ptr<string> ip_ {};
      // The IP addresses of the system.
      shared_ptr<string> ipListString_ {};
      // The version of the kernel.
      shared_ptr<string> kernel_ {};
      // The timestamp when the Security Center agent was last online. Unit: milliseconds.
      shared_ptr<int64_t> lastLoginTimestamp_ {};
      // The MAC addresses of the system.
      shared_ptr<string> macListString_ {};
      // The size of the memory. Unit: MB.
      shared_ptr<int32_t> mem_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The operating system of the asset.
      shared_ptr<string> os_ {};
      // The kernel version of the asset.
      shared_ptr<string> osName_ {};
      // The number of pods.
      shared_ptr<int32_t> podCount_ {};
      // The billing method of the protection version currently bound to the asset. Values: - **0**: Subscription - **1**: Pay-as-you-go
      shared_ptr<int32_t> postPaidFlag_ {};
      // The region ID of the asset.
      shared_ptr<string> region_ {};
      // The ID of the region in which the asset resides.
      shared_ptr<string> regionId_ {};
      // The name of the region in which the asset resides.
      shared_ptr<string> regionName_ {};
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
      shared_ptr<string> riskCount_ {};
      // Indicates whether risks are detected on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> riskStatus_ {};
      // The number of alerts that are generated on the asset.
      shared_ptr<int32_t> safeEventCount_ {};
      // Service ID. Only available for PAI instances.
      shared_ptr<string> serviceId_ {};
      // The status of the asset. Valid values:
      // 
      // *   **Running**: running
      // *   **notRunning**: stopped
      shared_ptr<string> status_ {};
      // The name of the asset tag.
      shared_ptr<string> tag_ {};
      // The ID of the asset tag.
      shared_ptr<string> tagId_ {};
      // The custom tag added to the Lingjun node. This parameter is returned only for LINGJUN GPU-accelerated instances.
      shared_ptr<string> tagResources_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
      // Asset vendor. Values:
      // - **0**: an asset provided by Alibaba Cloud
      // - **1**: an asset outside Alibaba Cloud
      // - **2**: an asset in a data center
      // - **3**, **4**, **5**, **7**, **14**, **16**: an asset from a third-party cloud service provider
      // - **8**: a lightweight asset
      // - **9**: a Serverless App Engine (SAE) instance
      // - **10**: an instance in Platform for AI (PAI)
      shared_ptr<int32_t> vendor_ {};
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
      shared_ptr<string> vendorName_ {};
      // Account ID of the multi-cloud instance.
      shared_ptr<string> vendorUid_ {};
      // Account name of the multi-cloud instance.
      shared_ptr<string> vendorUserName_ {};
      // The ID of the VPC to which the asset belongs.
      shared_ptr<string> vpcInstanceId_ {};
      // The number of vulnerabilities that are detected on the asset.
      shared_ptr<int32_t> vulCount_ {};
      // Indicates whether vulnerabilities are detected on the asset. Valid values:
      // 
      // *   **YES**
      // *   **NO**
      shared_ptr<string> vulStatus_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeCloudCenterInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeCloudCenterInstancesResponseBody::Instances>) };
    inline vector<DescribeCloudCenterInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeCloudCenterInstancesResponseBody::Instances>) };
    inline DescribeCloudCenterInstancesResponseBody& setInstances(const vector<DescribeCloudCenterInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeCloudCenterInstancesResponseBody& setInstances(vector<DescribeCloudCenterInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCloudCenterInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCloudCenterInstancesResponseBody::PageInfo) };
    inline DescribeCloudCenterInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCloudCenterInstancesResponseBody::PageInfo) };
    inline DescribeCloudCenterInstancesResponseBody& setPageInfo(const DescribeCloudCenterInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCloudCenterInstancesResponseBody& setPageInfo(DescribeCloudCenterInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudCenterInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudCenterInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the assets.
    shared_ptr<vector<DescribeCloudCenterInstancesResponseBody::Instances>> instances_ {};
    // The pagination information.
    shared_ptr<DescribeCloudCenterInstancesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**: The call is successful.
    // *   **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
