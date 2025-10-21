// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDataMultiZones.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDataNodes.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClickObserveServiceStatus, clickObserveServiceStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploySchema, deploySchema_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisabledPorts, disabledPorts_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LatestEngineMinorVersion, latestEngineMinorVersion_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(MultiZones, multiZones_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_TO_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClickObserveServiceStatus, clickObserveServiceStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploySchema, deploySchema_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisabledPorts, disabledPorts_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LatestEngineMinorVersion, latestEngineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(MultiZones, multiZones_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMax, nodeScaleMax_);
      DARABONBA_PTR_FROM_JSON(NodeScaleMin, nodeScaleMin_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageQuota, storageQuota_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBodyData() = default ;
    DescribeDBInstanceAttributeResponseBodyData(const DescribeDBInstanceAttributeResponseBodyData &) = default ;
    DescribeDBInstanceAttributeResponseBodyData(DescribeDBInstanceAttributeResponseBodyData &&) = default ;
    DescribeDBInstanceAttributeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyData() = default ;
    DescribeDBInstanceAttributeResponseBodyData& operator=(const DescribeDBInstanceAttributeResponseBodyData &) = default ;
    DescribeDBInstanceAttributeResponseBodyData& operator=(DescribeDBInstanceAttributeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->bid_ == nullptr && return this->category_ == nullptr && return this->chargeType_ == nullptr && return this->clickObserveServiceStatus_ == nullptr && return this->createTime_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->deletionProtection_ == nullptr && return this->deploySchema_ == nullptr && return this->description_ == nullptr && return this->disabledPorts_ == nullptr
        && return this->engine_ == nullptr && return this->engineMinorVersion_ == nullptr && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr && return this->latestEngineMinorVersion_ == nullptr
        && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->maintainEndTime_ == nullptr && return this->maintainStartTime_ == nullptr && return this->multiZones_ == nullptr
        && return this->nodeCount_ == nullptr && return this->nodeScaleMax_ == nullptr && return this->nodeScaleMin_ == nullptr && return this->nodes_ == nullptr && return this->objectStoreSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->status_ == nullptr
        && return this->storageQuota_ == nullptr && return this->storageSize_ == nullptr && return this->storageType_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clickObserveServiceStatus Field Functions 
    bool hasClickObserveServiceStatus() const { return this->clickObserveServiceStatus_ != nullptr;};
    void deleteClickObserveServiceStatus() { this->clickObserveServiceStatus_ = nullptr;};
    inline string clickObserveServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(clickObserveServiceStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setClickObserveServiceStatus(string clickObserveServiceStatus) { DARABONBA_PTR_SET_VALUE(clickObserveServiceStatus_, clickObserveServiceStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeDBInstanceAttributeResponseBodyData& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploySchema Field Functions 
    bool hasDeploySchema() const { return this->deploySchema_ != nullptr;};
    void deleteDeploySchema() { this->deploySchema_ = nullptr;};
    inline string deploySchema() const { DARABONBA_PTR_GET_DEFAULT(deploySchema_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setDeploySchema(string deploySchema) { DARABONBA_PTR_SET_VALUE(deploySchema_, deploySchema) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabledPorts Field Functions 
    bool hasDisabledPorts() const { return this->disabledPorts_ != nullptr;};
    void deleteDisabledPorts() { this->disabledPorts_ = nullptr;};
    inline string disabledPorts() const { DARABONBA_PTR_GET_DEFAULT(disabledPorts_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setDisabledPorts(string disabledPorts) { DARABONBA_PTR_SET_VALUE(disabledPorts_, disabledPorts) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineMinorVersion Field Functions 
    bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
    void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
    inline string engineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // latestEngineMinorVersion Field Functions 
    bool hasLatestEngineMinorVersion() const { return this->latestEngineMinorVersion_ != nullptr;};
    void deleteLatestEngineMinorVersion() { this->latestEngineMinorVersion_ = nullptr;};
    inline string latestEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestEngineMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setLatestEngineMinorVersion(string latestEngineMinorVersion) { DARABONBA_PTR_SET_VALUE(latestEngineMinorVersion_, latestEngineMinorVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // multiZones Field Functions 
    bool hasMultiZones() const { return this->multiZones_ != nullptr;};
    void deleteMultiZones() { this->multiZones_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones> & multiZones() const { DARABONBA_PTR_GET_CONST(multiZones_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones> multiZones() { DARABONBA_PTR_GET(multiZones_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones>) };
    inline DescribeDBInstanceAttributeResponseBodyData& setMultiZones(const vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones> & multiZones) { DARABONBA_PTR_SET_VALUE(multiZones_, multiZones) };
    inline DescribeDBInstanceAttributeResponseBodyData& setMultiZones(vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones> && multiZones) { DARABONBA_PTR_SET_RVALUE(multiZones_, multiZones) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeScaleMax Field Functions 
    bool hasNodeScaleMax() const { return this->nodeScaleMax_ != nullptr;};
    void deleteNodeScaleMax() { this->nodeScaleMax_ = nullptr;};
    inline string nodeScaleMax() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMax_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setNodeScaleMax(string nodeScaleMax) { DARABONBA_PTR_SET_VALUE(nodeScaleMax_, nodeScaleMax) };


    // nodeScaleMin Field Functions 
    bool hasNodeScaleMin() const { return this->nodeScaleMin_ != nullptr;};
    void deleteNodeScaleMin() { this->nodeScaleMin_ = nullptr;};
    inline string nodeScaleMin() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMin_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setNodeScaleMin(string nodeScaleMin) { DARABONBA_PTR_SET_VALUE(nodeScaleMin_, nodeScaleMin) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes>) };
    inline DescribeDBInstanceAttributeResponseBodyData& setNodes(const vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeDBInstanceAttributeResponseBodyData& setNodes(vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // objectStoreSize Field Functions 
    bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
    void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
    inline string objectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setObjectStoreSize(string objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline int32_t scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyData& setScaleMax(int32_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline int32_t scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyData& setScaleMin(int32_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageQuota Field Functions 
    bool hasStorageQuota() const { return this->storageQuota_ != nullptr;};
    void deleteStorageQuota() { this->storageQuota_ = nullptr;};
    inline string storageQuota() const { DARABONBA_PTR_GET_DEFAULT(storageQuota_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setStorageQuota(string storageQuota) { DARABONBA_PTR_SET_VALUE(storageQuota_, storageQuota) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyData& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags>) };
    inline DescribeDBInstanceAttributeResponseBodyData& setTags(const vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstanceAttributeResponseBodyData& setTags(vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The channel ID.
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    // The billing method. Enterprise Edition clusters use the pay-as-you-go billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> clickObserveServiceStatus_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Indicates whether the release protection feature is enabled for the cluster.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The deployment mode of the cluster. Valid values: single_az and multi_az.
    // 
    // *   single_az: indicates that the server nodes are deployed in the primary zone. The ID of the primary zone is specified by the ZoneID parameter.
    // *   multi_az: indicates that the server nodes are deployed in multiple zones. The information about the zones is specified by the MultiZones parameter.
    // 
    // The keeper nodes are deployed in multiple zones.
    std::shared_ptr<string> deploySchema_ = nullptr;
    // The cluster description.
    std::shared_ptr<string> description_ = nullptr;
    // The disabled database ports. Multiple database ports are separated by commas (,).
    std::shared_ptr<string> disabledPorts_ = nullptr;
    // The engine type.
    std::shared_ptr<string> engine_ = nullptr;
    // The minor engine version of the cluster.
    std::shared_ptr<string> engineMinorVersion_ = nullptr;
    // The engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the cluster expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The latest minor engine version.
    std::shared_ptr<string> latestEngineMinorVersion_ = nullptr;
    // The lock mode of the cluster.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the cluster was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The end time of the maintenance window.
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    // The start time of the maintenance window.
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    // The information about the zones.
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDataMultiZones>> multiZones_ = nullptr;
    std::shared_ptr<string> nodeCount_ = nullptr;
    std::shared_ptr<string> nodeScaleMax_ = nullptr;
    std::shared_ptr<string> nodeScaleMin_ = nullptr;
    // The nodes.
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDataNodes>> nodes_ = nullptr;
    // The size of the object storage space.
    std::shared_ptr<string> objectStoreSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The maximum capacity for elastic scaling.
    std::shared_ptr<int32_t> scaleMax_ = nullptr;
    // The minimum capacity for elastic scaling.
    std::shared_ptr<int32_t> scaleMin_ = nullptr;
    // The cluster status.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageQuota_ = nullptr;
    // The size of the storage space. Unit: GB.
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    // The storage type.
    std::shared_ptr<string> storageType_ = nullptr;
    // The details of the tags.
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyDataTags>> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
