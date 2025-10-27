// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceForTerraformResponseBodyEngineList.hpp>
#include <alibabacloud/models/GetLindormV2InstanceForTerraformResponseBodyStorageUsage.hpp>
#include <alibabacloud/models/GetLindormV2InstanceForTerraformResponseBodyWhiteIpList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceForTerraformResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceForTerraformResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_TO_JSON(EngineList, engineList_);
      DARABONBA_PTR_TO_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_TO_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(WhiteIpList, whiteIpList_);
      DARABONBA_ANY_TO_JSON(ZoneEngineInfoMap, zoneEngineInfoMap_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceForTerraformResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CloudStorageSize, cloudStorageSize_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CreateMilliseconds, createMilliseconds_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskThreshold, diskThreshold_);
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(EnableCompute, enableCompute_);
      DARABONBA_PTR_FROM_JSON(EngineList, engineList_);
      DARABONBA_PTR_FROM_JSON(ExpiredMilliseconds, expiredMilliseconds_);
      DARABONBA_PTR_FROM_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(WhiteIpList, whiteIpList_);
      DARABONBA_ANY_FROM_JSON(ZoneEngineInfoMap, zoneEngineInfoMap_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetLindormV2InstanceForTerraformResponseBody() = default ;
    GetLindormV2InstanceForTerraformResponseBody(const GetLindormV2InstanceForTerraformResponseBody &) = default ;
    GetLindormV2InstanceForTerraformResponseBody(GetLindormV2InstanceForTerraformResponseBody &&) = default ;
    GetLindormV2InstanceForTerraformResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceForTerraformResponseBody() = default ;
    GetLindormV2InstanceForTerraformResponseBody& operator=(const GetLindormV2InstanceForTerraformResponseBody &) = default ;
    GetLindormV2InstanceForTerraformResponseBody& operator=(GetLindormV2InstanceForTerraformResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->arbiterVSwitchId_ == nullptr && return this->arbiterZoneId_ == nullptr && return this->autoRenew_ == nullptr && return this->cloudStorageSize_ == nullptr && return this->coldStorage_ == nullptr
        && return this->createMilliseconds_ == nullptr && return this->deletionProtection_ == nullptr && return this->diskCategory_ == nullptr && return this->diskThreshold_ == nullptr && return this->diskUsage_ == nullptr
        && return this->enableCompute_ == nullptr && return this->engineList_ == nullptr && return this->expiredMilliseconds_ == nullptr && return this->initialRootPassword_ == nullptr && return this->instanceAlias_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceType_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr
        && return this->networkType_ == nullptr && return this->payType_ == nullptr && return this->primaryVSwitchId_ == nullptr && return this->primaryZoneId_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceType_ == nullptr && return this->standbyVSwitchId_ == nullptr && return this->standbyZoneId_ == nullptr
        && return this->storageUsage_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr && return this->whiteIpList_ == nullptr && return this->zoneEngineInfoMap_ == nullptr
        && return this->zoneId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetLindormV2InstanceForTerraformResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string arbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string arbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline GetLindormV2InstanceForTerraformResponseBody& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // cloudStorageSize Field Functions 
    bool hasCloudStorageSize() const { return this->cloudStorageSize_ != nullptr;};
    void deleteCloudStorageSize() { this->cloudStorageSize_ = nullptr;};
    inline int64_t cloudStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cloudStorageSize_, 0L) };
    inline GetLindormV2InstanceForTerraformResponseBody& setCloudStorageSize(int64_t cloudStorageSize) { DARABONBA_PTR_SET_VALUE(cloudStorageSize_, cloudStorageSize) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t coldStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline GetLindormV2InstanceForTerraformResponseBody& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // createMilliseconds Field Functions 
    bool hasCreateMilliseconds() const { return this->createMilliseconds_ != nullptr;};
    void deleteCreateMilliseconds() { this->createMilliseconds_ = nullptr;};
    inline int64_t createMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(createMilliseconds_, 0L) };
    inline GetLindormV2InstanceForTerraformResponseBody& setCreateMilliseconds(int64_t createMilliseconds) { DARABONBA_PTR_SET_VALUE(createMilliseconds_, createMilliseconds) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskThreshold Field Functions 
    bool hasDiskThreshold() const { return this->diskThreshold_ != nullptr;};
    void deleteDiskThreshold() { this->diskThreshold_ = nullptr;};
    inline string diskThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskThreshold_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setDiskThreshold(string diskThreshold) { DARABONBA_PTR_SET_VALUE(diskThreshold_, diskThreshold) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline string diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setDiskUsage(string diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // enableCompute Field Functions 
    bool hasEnableCompute() const { return this->enableCompute_ != nullptr;};
    void deleteEnableCompute() { this->enableCompute_ = nullptr;};
    inline bool enableCompute() const { DARABONBA_PTR_GET_DEFAULT(enableCompute_, false) };
    inline GetLindormV2InstanceForTerraformResponseBody& setEnableCompute(bool enableCompute) { DARABONBA_PTR_SET_VALUE(enableCompute_, enableCompute) };


    // engineList Field Functions 
    bool hasEngineList() const { return this->engineList_ != nullptr;};
    void deleteEngineList() { this->engineList_ = nullptr;};
    inline const vector<GetLindormV2InstanceForTerraformResponseBodyEngineList> & engineList() const { DARABONBA_PTR_GET_CONST(engineList_, vector<GetLindormV2InstanceForTerraformResponseBodyEngineList>) };
    inline vector<GetLindormV2InstanceForTerraformResponseBodyEngineList> engineList() { DARABONBA_PTR_GET(engineList_, vector<GetLindormV2InstanceForTerraformResponseBodyEngineList>) };
    inline GetLindormV2InstanceForTerraformResponseBody& setEngineList(const vector<GetLindormV2InstanceForTerraformResponseBodyEngineList> & engineList) { DARABONBA_PTR_SET_VALUE(engineList_, engineList) };
    inline GetLindormV2InstanceForTerraformResponseBody& setEngineList(vector<GetLindormV2InstanceForTerraformResponseBodyEngineList> && engineList) { DARABONBA_PTR_SET_RVALUE(engineList_, engineList) };


    // expiredMilliseconds Field Functions 
    bool hasExpiredMilliseconds() const { return this->expiredMilliseconds_ != nullptr;};
    void deleteExpiredMilliseconds() { this->expiredMilliseconds_ = nullptr;};
    inline int64_t expiredMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(expiredMilliseconds_, 0L) };
    inline GetLindormV2InstanceForTerraformResponseBody& setExpiredMilliseconds(int64_t expiredMilliseconds) { DARABONBA_PTR_SET_VALUE(expiredMilliseconds_, expiredMilliseconds) };


    // initialRootPassword Field Functions 
    bool hasInitialRootPassword() const { return this->initialRootPassword_ != nullptr;};
    void deleteInitialRootPassword() { this->initialRootPassword_ = nullptr;};
    inline string initialRootPassword() const { DARABONBA_PTR_GET_DEFAULT(initialRootPassword_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setInitialRootPassword(string initialRootPassword) { DARABONBA_PTR_SET_VALUE(initialRootPassword_, initialRootPassword) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string primaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string primaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string standbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // storageUsage Field Functions 
    bool hasStorageUsage() const { return this->storageUsage_ != nullptr;};
    void deleteStorageUsage() { this->storageUsage_ = nullptr;};
    inline const GetLindormV2InstanceForTerraformResponseBodyStorageUsage & storageUsage() const { DARABONBA_PTR_GET_CONST(storageUsage_, GetLindormV2InstanceForTerraformResponseBodyStorageUsage) };
    inline GetLindormV2InstanceForTerraformResponseBodyStorageUsage storageUsage() { DARABONBA_PTR_GET(storageUsage_, GetLindormV2InstanceForTerraformResponseBodyStorageUsage) };
    inline GetLindormV2InstanceForTerraformResponseBody& setStorageUsage(const GetLindormV2InstanceForTerraformResponseBodyStorageUsage & storageUsage) { DARABONBA_PTR_SET_VALUE(storageUsage_, storageUsage) };
    inline GetLindormV2InstanceForTerraformResponseBody& setStorageUsage(GetLindormV2InstanceForTerraformResponseBodyStorageUsage && storageUsage) { DARABONBA_PTR_SET_RVALUE(storageUsage_, storageUsage) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // whiteIpList Field Functions 
    bool hasWhiteIpList() const { return this->whiteIpList_ != nullptr;};
    void deleteWhiteIpList() { this->whiteIpList_ = nullptr;};
    inline const vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList> & whiteIpList() const { DARABONBA_PTR_GET_CONST(whiteIpList_, vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList>) };
    inline vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList> whiteIpList() { DARABONBA_PTR_GET(whiteIpList_, vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList>) };
    inline GetLindormV2InstanceForTerraformResponseBody& setWhiteIpList(const vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList> & whiteIpList) { DARABONBA_PTR_SET_VALUE(whiteIpList_, whiteIpList) };
    inline GetLindormV2InstanceForTerraformResponseBody& setWhiteIpList(vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList> && whiteIpList) { DARABONBA_PTR_SET_RVALUE(whiteIpList_, whiteIpList) };


    // zoneEngineInfoMap Field Functions 
    bool hasZoneEngineInfoMap() const { return this->zoneEngineInfoMap_ != nullptr;};
    void deleteZoneEngineInfoMap() { this->zoneEngineInfoMap_ = nullptr;};
    inline     const Darabonba::Json & zoneEngineInfoMap() const { DARABONBA_GET(zoneEngineInfoMap_) };
    Darabonba::Json & zoneEngineInfoMap() { DARABONBA_GET(zoneEngineInfoMap_) };
    inline GetLindormV2InstanceForTerraformResponseBody& setZoneEngineInfoMap(const Darabonba::Json & zoneEngineInfoMap) { DARABONBA_SET_VALUE(zoneEngineInfoMap_, zoneEngineInfoMap) };
    inline GetLindormV2InstanceForTerraformResponseBody& setZoneEngineInfoMap(Darabonba::Json & zoneEngineInfoMap) { DARABONBA_SET_RVALUE(zoneEngineInfoMap_, zoneEngineInfoMap) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetLindormV2InstanceForTerraformResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> arbiterVSwitchId_ = nullptr;
    std::shared_ptr<string> arbiterZoneId_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int64_t> cloudStorageSize_ = nullptr;
    std::shared_ptr<int32_t> coldStorage_ = nullptr;
    std::shared_ptr<int64_t> createMilliseconds_ = nullptr;
    std::shared_ptr<string> deletionProtection_ = nullptr;
    std::shared_ptr<string> diskCategory_ = nullptr;
    std::shared_ptr<string> diskThreshold_ = nullptr;
    std::shared_ptr<string> diskUsage_ = nullptr;
    std::shared_ptr<bool> enableCompute_ = nullptr;
    std::shared_ptr<vector<GetLindormV2InstanceForTerraformResponseBodyEngineList>> engineList_ = nullptr;
    std::shared_ptr<int64_t> expiredMilliseconds_ = nullptr;
    std::shared_ptr<string> initialRootPassword_ = nullptr;
    std::shared_ptr<string> instanceAlias_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> primaryVSwitchId_ = nullptr;
    std::shared_ptr<string> primaryZoneId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
    std::shared_ptr<string> standbyVSwitchId_ = nullptr;
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    std::shared_ptr<GetLindormV2InstanceForTerraformResponseBodyStorageUsage> storageUsage_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<vector<GetLindormV2InstanceForTerraformResponseBodyWhiteIpList>> whiteIpList_ = nullptr;
    Darabonba::Json zoneEngineInfoMap_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
