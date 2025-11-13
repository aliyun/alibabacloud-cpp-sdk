// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsMultiZone.hpp>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceUsedType, instanceUsedType_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndTimeStr, maintainEndTimeStr_);
      DARABONBA_PTR_TO_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTimeStr, maintainStartTimeStr_);
      DARABONBA_PTR_TO_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_TO_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_TO_JSON(ParentInstance, parentInstance_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceMemory, resourceMemory_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScaleReplica, scaleReplica_);
      DARABONBA_PTR_TO_JSON(Serverless, serverless_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantClusterId, tenantClusterId_);
      DARABONBA_PTR_TO_JSON(TenantToken, tenantToken_);
      DARABONBA_PTR_TO_JSON(TenantUserId, tenantUserId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(connectionString, connectionString_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedType, instanceUsedType_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTimeStr, maintainEndTimeStr_);
      DARABONBA_PTR_FROM_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTimeStr, maintainStartTimeStr_);
      DARABONBA_PTR_FROM_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_FROM_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_FROM_JSON(ParentInstance, parentInstance_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceMemory, resourceMemory_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScaleReplica, scaleReplica_);
      DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantClusterId, tenantClusterId_);
      DARABONBA_PTR_FROM_JSON(TenantToken, tenantToken_);
      DARABONBA_PTR_FROM_JSON(TenantUserId, tenantUserId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(connectionString, connectionString_);
    };
    DescribeDBInstancesResponseBodyItems() = default ;
    DescribeDBInstancesResponseBodyItems(const DescribeDBInstancesResponseBodyItems &) = default ;
    DescribeDBInstancesResponseBodyItems(DescribeDBInstancesResponseBodyItems &&) = default ;
    DescribeDBInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItems() = default ;
    DescribeDBInstancesResponseBodyItems& operator=(const DescribeDBInstancesResponseBodyItems &) = default ;
    DescribeDBInstancesResponseBodyItems& operator=(DescribeDBInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->chargeType_ == nullptr && return this->clusterCount_ == nullptr && return this->DBInstanceId_ == nullptr && return this->deployScheme_ == nullptr && return this->description_ == nullptr
        && return this->engine_ == nullptr && return this->engineMinorVersion_ == nullptr && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr && return this->gmtCreated_ == nullptr
        && return this->gmtModified_ == nullptr && return this->instanceUsedType_ == nullptr && return this->isDeleted_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr
        && return this->maintainEndTimeStr_ == nullptr && return this->maintainEndtime_ == nullptr && return this->maintainStartTimeStr_ == nullptr && return this->maintainStarttime_ == nullptr && return this->multiZone_ == nullptr
        && return this->objectStoreSize_ == nullptr && return this->parentInstance_ == nullptr && return this->regionId_ == nullptr && return this->resourceCpu_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceMemory_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->scaleReplica_ == nullptr && return this->serverless_ == nullptr
        && return this->status_ == nullptr && return this->storageSize_ == nullptr && return this->storageType_ == nullptr && return this->tags_ == nullptr && return this->tenantClusterId_ == nullptr
        && return this->tenantToken_ == nullptr && return this->tenantUserId_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr
        && return this->connectionString_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstancesResponseBodyItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstancesResponseBodyItems& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline DescribeDBInstancesResponseBodyItems& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // deployScheme Field Functions 
    bool hasDeployScheme() const { return this->deployScheme_ != nullptr;};
    void deleteDeployScheme() { this->deployScheme_ = nullptr;};
    inline string deployScheme() const { DARABONBA_PTR_GET_DEFAULT(deployScheme_, "") };
    inline DescribeDBInstancesResponseBodyItems& setDeployScheme(string deployScheme) { DARABONBA_PTR_SET_VALUE(deployScheme_, deployScheme) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstancesResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesResponseBodyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineMinorVersion Field Functions 
    bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
    void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
    inline string engineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
    inline DescribeDBInstancesResponseBodyItems& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesResponseBodyItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesResponseBodyItems& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDBInstancesResponseBodyItems& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDBInstancesResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceUsedType Field Functions 
    bool hasInstanceUsedType() const { return this->instanceUsedType_ != nullptr;};
    void deleteInstanceUsedType() { this->instanceUsedType_ = nullptr;};
    inline string instanceUsedType() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedType_, "") };
    inline DescribeDBInstancesResponseBodyItems& setInstanceUsedType(string instanceUsedType) { DARABONBA_PTR_SET_VALUE(instanceUsedType_, instanceUsedType) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline DescribeDBInstancesResponseBodyItems& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int64_t lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setLockMode(int64_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesResponseBodyItems& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndTimeStr Field Functions 
    bool hasMaintainEndTimeStr() const { return this->maintainEndTimeStr_ != nullptr;};
    void deleteMaintainEndTimeStr() { this->maintainEndTimeStr_ = nullptr;};
    inline string maintainEndTimeStr() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTimeStr_, "") };
    inline DescribeDBInstancesResponseBodyItems& setMaintainEndTimeStr(string maintainEndTimeStr) { DARABONBA_PTR_SET_VALUE(maintainEndTimeStr_, maintainEndTimeStr) };


    // maintainEndtime Field Functions 
    bool hasMaintainEndtime() const { return this->maintainEndtime_ != nullptr;};
    void deleteMaintainEndtime() { this->maintainEndtime_ = nullptr;};
    inline string maintainEndtime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndtime_, "") };
    inline DescribeDBInstancesResponseBodyItems& setMaintainEndtime(string maintainEndtime) { DARABONBA_PTR_SET_VALUE(maintainEndtime_, maintainEndtime) };


    // maintainStartTimeStr Field Functions 
    bool hasMaintainStartTimeStr() const { return this->maintainStartTimeStr_ != nullptr;};
    void deleteMaintainStartTimeStr() { this->maintainStartTimeStr_ = nullptr;};
    inline string maintainStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTimeStr_, "") };
    inline DescribeDBInstancesResponseBodyItems& setMaintainStartTimeStr(string maintainStartTimeStr) { DARABONBA_PTR_SET_VALUE(maintainStartTimeStr_, maintainStartTimeStr) };


    // maintainStarttime Field Functions 
    bool hasMaintainStarttime() const { return this->maintainStarttime_ != nullptr;};
    void deleteMaintainStarttime() { this->maintainStarttime_ = nullptr;};
    inline string maintainStarttime() const { DARABONBA_PTR_GET_DEFAULT(maintainStarttime_, "") };
    inline DescribeDBInstancesResponseBodyItems& setMaintainStarttime(string maintainStarttime) { DARABONBA_PTR_SET_VALUE(maintainStarttime_, maintainStarttime) };


    // multiZone Field Functions 
    bool hasMultiZone() const { return this->multiZone_ != nullptr;};
    void deleteMultiZone() { this->multiZone_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone> & multiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone>) };
    inline vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone> multiZone() { DARABONBA_PTR_GET(multiZone_, vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone>) };
    inline DescribeDBInstancesResponseBodyItems& setMultiZone(const vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
    inline DescribeDBInstancesResponseBodyItems& setMultiZone(vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


    // objectStoreSize Field Functions 
    bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
    void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
    inline int64_t objectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setObjectStoreSize(int64_t objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


    // parentInstance Field Functions 
    bool hasParentInstance() const { return this->parentInstance_ != nullptr;};
    void deleteParentInstance() { this->parentInstance_ = nullptr;};
    inline string parentInstance() const { DARABONBA_PTR_GET_DEFAULT(parentInstance_, "") };
    inline DescribeDBInstancesResponseBodyItems& setParentInstance(string parentInstance) { DARABONBA_PTR_SET_VALUE(parentInstance_, parentInstance) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceCpu Field Functions 
    bool hasResourceCpu() const { return this->resourceCpu_ != nullptr;};
    void deleteResourceCpu() { this->resourceCpu_ = nullptr;};
    inline int64_t resourceCpu() const { DARABONBA_PTR_GET_DEFAULT(resourceCpu_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setResourceCpu(int64_t resourceCpu) { DARABONBA_PTR_SET_VALUE(resourceCpu_, resourceCpu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceMemory Field Functions 
    bool hasResourceMemory() const { return this->resourceMemory_ != nullptr;};
    void deleteResourceMemory() { this->resourceMemory_ = nullptr;};
    inline int64_t resourceMemory() const { DARABONBA_PTR_GET_DEFAULT(resourceMemory_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setResourceMemory(int64_t resourceMemory) { DARABONBA_PTR_SET_VALUE(resourceMemory_, resourceMemory) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline int64_t scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline int64_t scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleReplica Field Functions 
    bool hasScaleReplica() const { return this->scaleReplica_ != nullptr;};
    void deleteScaleReplica() { this->scaleReplica_ = nullptr;};
    inline int64_t scaleReplica() const { DARABONBA_PTR_GET_DEFAULT(scaleReplica_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setScaleReplica(int64_t scaleReplica) { DARABONBA_PTR_SET_VALUE(scaleReplica_, scaleReplica) };


    // serverless Field Functions 
    bool hasServerless() const { return this->serverless_ != nullptr;};
    void deleteServerless() { this->serverless_ = nullptr;};
    inline bool serverless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, false) };
    inline DescribeDBInstancesResponseBodyItems& setServerless(bool serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstancesResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline DescribeDBInstancesResponseBodyItems& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstancesResponseBodyItems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyItemsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDBInstancesResponseBodyItemsTags>) };
    inline vector<Models::DescribeDBInstancesResponseBodyItemsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDBInstancesResponseBodyItemsTags>) };
    inline DescribeDBInstancesResponseBodyItems& setTags(const vector<Models::DescribeDBInstancesResponseBodyItemsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstancesResponseBodyItems& setTags(vector<Models::DescribeDBInstancesResponseBodyItemsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantClusterId Field Functions 
    bool hasTenantClusterId() const { return this->tenantClusterId_ != nullptr;};
    void deleteTenantClusterId() { this->tenantClusterId_ = nullptr;};
    inline string tenantClusterId() const { DARABONBA_PTR_GET_DEFAULT(tenantClusterId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setTenantClusterId(string tenantClusterId) { DARABONBA_PTR_SET_VALUE(tenantClusterId_, tenantClusterId) };


    // tenantToken Field Functions 
    bool hasTenantToken() const { return this->tenantToken_ != nullptr;};
    void deleteTenantToken() { this->tenantToken_ = nullptr;};
    inline string tenantToken() const { DARABONBA_PTR_GET_DEFAULT(tenantToken_, "") };
    inline DescribeDBInstancesResponseBodyItems& setTenantToken(string tenantToken) { DARABONBA_PTR_SET_VALUE(tenantToken_, tenantToken) };


    // tenantUserId Field Functions 
    bool hasTenantUserId() const { return this->tenantUserId_ != nullptr;};
    void deleteTenantUserId() { this->tenantUserId_ = nullptr;};
    inline string tenantUserId() const { DARABONBA_PTR_GET_DEFAULT(tenantUserId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setTenantUserId(string tenantUserId) { DARABONBA_PTR_SET_VALUE(tenantUserId_, tenantUserId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesResponseBodyItems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstancesResponseBodyItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


  protected:
    // The edition of the instance. Default value: basic.
    std::shared_ptr<string> category_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The total number of clusters.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> deployScheme_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineMinorVersion_ = nullptr;
    // The database engine version of the instance.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the cluster expires.
    // 
    // >  A specific value is returned only for subscription clusters whose billing method is **Prepaid**. For pay-as-you-go clusters whose billing method is **Postpaid**, no value is returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the task was created. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the task was last modified. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> instanceUsedType_ = nullptr;
    // Indicates whether the instance is deleted. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDeleted_ = nullptr;
    // The lock mode of the instance.
    std::shared_ptr<int64_t> lockMode_ = nullptr;
    // The reason why the instance is locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The end timestamp of the maintenance window.
    std::shared_ptr<string> maintainEndTimeStr_ = nullptr;
    // The end time of the instance maintenance window.
    std::shared_ptr<string> maintainEndtime_ = nullptr;
    // The start timestamp of the maintenance window.
    std::shared_ptr<string> maintainStartTimeStr_ = nullptr;
    // The start time of the instance maintenance window.
    std::shared_ptr<string> maintainStarttime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyItemsMultiZone>> multiZone_ = nullptr;
    // The storage capacity of the instance. Unit: GB.
    std::shared_ptr<int64_t> objectStoreSize_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> parentInstance_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of CPU cores of the instance.
    std::shared_ptr<int64_t> resourceCpu_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The memory capacity of the instance.
    std::shared_ptr<int64_t> resourceMemory_ = nullptr;
    // The maximum number of RCUs.
    std::shared_ptr<int64_t> scaleMax_ = nullptr;
    // The minimum number of RDS capacity units (RCUs).
    std::shared_ptr<int64_t> scaleMin_ = nullptr;
    // This parameter is not returned.
    std::shared_ptr<int64_t> scaleReplica_ = nullptr;
    std::shared_ptr<bool> serverless_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **RESOURCE_CHANGING**: The resource configuration of the instance is being changed.
    // *   **ORDER_PREPARING**: The order is being confirmed.
    // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the instance is being changed and the instance is write-locked.
    // *   **DELETING**: The instance is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The cache size.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // The storage type of the instance.
    std::shared_ptr<string> storageType_ = nullptr;
    // The details about each tag returned.
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyItemsTags>> tags_ = nullptr;
    // The ID of the cluster that is monitored by Managed Service for Prometheus.
    std::shared_ptr<string> tenantClusterId_ = nullptr;
    // The token that is used to access Managed Service for Prometheus.
    std::shared_ptr<string> tenantToken_ = nullptr;
    // The ID of the account that uses Managed Service for Prometheus.
    std::shared_ptr<string> tenantUserId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The connection string of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
