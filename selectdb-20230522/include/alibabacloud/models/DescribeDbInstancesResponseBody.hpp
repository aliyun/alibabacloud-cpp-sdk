// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody(DescribeDBInstancesResponseBody &&) = default ;
    DescribeDBInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody& operator=(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody& operator=(DescribeDBInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class MultiZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiZone& obj) { 
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, MultiZone& obj) { 
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        MultiZone() = default ;
        MultiZone(const MultiZone &) = default ;
        MultiZone(MultiZone &&) = default ;
        MultiZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiZone() = default ;
        MultiZone& operator=(const MultiZone &) = default ;
        MultiZone& operator=(MultiZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vSwitchIds_ == nullptr
        && this->zoneId_ == nullptr; };
        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline MultiZone& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline MultiZone& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline MultiZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<vector<string>> vSwitchIds_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->chargeType_ == nullptr && this->clusterCount_ == nullptr && this->DBInstanceId_ == nullptr && this->deployScheme_ == nullptr && this->description_ == nullptr
        && this->engine_ == nullptr && this->engineMinorVersion_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->instanceUsedType_ == nullptr && this->isDeleted_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr
        && this->maintainEndTimeStr_ == nullptr && this->maintainEndtime_ == nullptr && this->maintainStartTimeStr_ == nullptr && this->maintainStarttime_ == nullptr && this->multiZone_ == nullptr
        && this->objectStoreSize_ == nullptr && this->parentInstance_ == nullptr && this->regionId_ == nullptr && this->resourceCpu_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceMemory_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->scaleReplica_ == nullptr && this->serverless_ == nullptr
        && this->status_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->tenantClusterId_ == nullptr
        && this->tenantToken_ == nullptr && this->tenantUserId_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr && this->zoneId_ == nullptr
        && this->connectionString_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Items& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Items& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline Items& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Items& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // deployScheme Field Functions 
      bool hasDeployScheme() const { return this->deployScheme_ != nullptr;};
      void deleteDeployScheme() { this->deployScheme_ = nullptr;};
      inline string getDeployScheme() const { DARABONBA_PTR_GET_DEFAULT(deployScheme_, "") };
      inline Items& setDeployScheme(string deployScheme) { DARABONBA_PTR_SET_VALUE(deployScheme_, deployScheme) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineMinorVersion Field Functions 
      bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
      void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
      inline string getEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
      inline Items& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Items& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Items& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceUsedType Field Functions 
      bool hasInstanceUsedType() const { return this->instanceUsedType_ != nullptr;};
      void deleteInstanceUsedType() { this->instanceUsedType_ = nullptr;};
      inline string getInstanceUsedType() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedType_, "") };
      inline Items& setInstanceUsedType(string instanceUsedType) { DARABONBA_PTR_SET_VALUE(instanceUsedType_, instanceUsedType) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline Items& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline int64_t getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0L) };
      inline Items& setLockMode(int64_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline Items& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // maintainEndTimeStr Field Functions 
      bool hasMaintainEndTimeStr() const { return this->maintainEndTimeStr_ != nullptr;};
      void deleteMaintainEndTimeStr() { this->maintainEndTimeStr_ = nullptr;};
      inline string getMaintainEndTimeStr() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTimeStr_, "") };
      inline Items& setMaintainEndTimeStr(string maintainEndTimeStr) { DARABONBA_PTR_SET_VALUE(maintainEndTimeStr_, maintainEndTimeStr) };


      // maintainEndtime Field Functions 
      bool hasMaintainEndtime() const { return this->maintainEndtime_ != nullptr;};
      void deleteMaintainEndtime() { this->maintainEndtime_ = nullptr;};
      inline string getMaintainEndtime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndtime_, "") };
      inline Items& setMaintainEndtime(string maintainEndtime) { DARABONBA_PTR_SET_VALUE(maintainEndtime_, maintainEndtime) };


      // maintainStartTimeStr Field Functions 
      bool hasMaintainStartTimeStr() const { return this->maintainStartTimeStr_ != nullptr;};
      void deleteMaintainStartTimeStr() { this->maintainStartTimeStr_ = nullptr;};
      inline string getMaintainStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTimeStr_, "") };
      inline Items& setMaintainStartTimeStr(string maintainStartTimeStr) { DARABONBA_PTR_SET_VALUE(maintainStartTimeStr_, maintainStartTimeStr) };


      // maintainStarttime Field Functions 
      bool hasMaintainStarttime() const { return this->maintainStarttime_ != nullptr;};
      void deleteMaintainStarttime() { this->maintainStarttime_ = nullptr;};
      inline string getMaintainStarttime() const { DARABONBA_PTR_GET_DEFAULT(maintainStarttime_, "") };
      inline Items& setMaintainStarttime(string maintainStarttime) { DARABONBA_PTR_SET_VALUE(maintainStarttime_, maintainStarttime) };


      // multiZone Field Functions 
      bool hasMultiZone() const { return this->multiZone_ != nullptr;};
      void deleteMultiZone() { this->multiZone_ = nullptr;};
      inline const vector<Items::MultiZone> & getMultiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<Items::MultiZone>) };
      inline vector<Items::MultiZone> getMultiZone() { DARABONBA_PTR_GET(multiZone_, vector<Items::MultiZone>) };
      inline Items& setMultiZone(const vector<Items::MultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
      inline Items& setMultiZone(vector<Items::MultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


      // objectStoreSize Field Functions 
      bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
      void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
      inline int64_t getObjectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, 0L) };
      inline Items& setObjectStoreSize(int64_t objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


      // parentInstance Field Functions 
      bool hasParentInstance() const { return this->parentInstance_ != nullptr;};
      void deleteParentInstance() { this->parentInstance_ = nullptr;};
      inline string getParentInstance() const { DARABONBA_PTR_GET_DEFAULT(parentInstance_, "") };
      inline Items& setParentInstance(string parentInstance) { DARABONBA_PTR_SET_VALUE(parentInstance_, parentInstance) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceCpu Field Functions 
      bool hasResourceCpu() const { return this->resourceCpu_ != nullptr;};
      void deleteResourceCpu() { this->resourceCpu_ = nullptr;};
      inline int64_t getResourceCpu() const { DARABONBA_PTR_GET_DEFAULT(resourceCpu_, 0L) };
      inline Items& setResourceCpu(int64_t resourceCpu) { DARABONBA_PTR_SET_VALUE(resourceCpu_, resourceCpu) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Items& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceMemory Field Functions 
      bool hasResourceMemory() const { return this->resourceMemory_ != nullptr;};
      void deleteResourceMemory() { this->resourceMemory_ = nullptr;};
      inline int64_t getResourceMemory() const { DARABONBA_PTR_GET_DEFAULT(resourceMemory_, 0L) };
      inline Items& setResourceMemory(int64_t resourceMemory) { DARABONBA_PTR_SET_VALUE(resourceMemory_, resourceMemory) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline int64_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0L) };
      inline Items& setScaleMax(int64_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline int64_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0L) };
      inline Items& setScaleMin(int64_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // scaleReplica Field Functions 
      bool hasScaleReplica() const { return this->scaleReplica_ != nullptr;};
      void deleteScaleReplica() { this->scaleReplica_ = nullptr;};
      inline int64_t getScaleReplica() const { DARABONBA_PTR_GET_DEFAULT(scaleReplica_, 0L) };
      inline Items& setScaleReplica(int64_t scaleReplica) { DARABONBA_PTR_SET_VALUE(scaleReplica_, scaleReplica) };


      // serverless Field Functions 
      bool hasServerless() const { return this->serverless_ != nullptr;};
      void deleteServerless() { this->serverless_ = nullptr;};
      inline bool getServerless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, false) };
      inline Items& setServerless(bool serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
      inline Items& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Items& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Items::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Items::Tags>) };
      inline vector<Items::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Items::Tags>) };
      inline Items& setTags(const vector<Items::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Items& setTags(vector<Items::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantClusterId Field Functions 
      bool hasTenantClusterId() const { return this->tenantClusterId_ != nullptr;};
      void deleteTenantClusterId() { this->tenantClusterId_ = nullptr;};
      inline string getTenantClusterId() const { DARABONBA_PTR_GET_DEFAULT(tenantClusterId_, "") };
      inline Items& setTenantClusterId(string tenantClusterId) { DARABONBA_PTR_SET_VALUE(tenantClusterId_, tenantClusterId) };


      // tenantToken Field Functions 
      bool hasTenantToken() const { return this->tenantToken_ != nullptr;};
      void deleteTenantToken() { this->tenantToken_ = nullptr;};
      inline string getTenantToken() const { DARABONBA_PTR_GET_DEFAULT(tenantToken_, "") };
      inline Items& setTenantToken(string tenantToken) { DARABONBA_PTR_SET_VALUE(tenantToken_, tenantToken) };


      // tenantUserId Field Functions 
      bool hasTenantUserId() const { return this->tenantUserId_ != nullptr;};
      void deleteTenantUserId() { this->tenantUserId_ = nullptr;};
      inline string getTenantUserId() const { DARABONBA_PTR_GET_DEFAULT(tenantUserId_, "") };
      inline Items& setTenantUserId(string tenantUserId) { DARABONBA_PTR_SET_VALUE(tenantUserId_, tenantUserId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Items& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Items& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Items& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Items& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    protected:
      // The edition of the instance. Default value: basic.
      shared_ptr<string> category_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   **Postpaid**: pay-as-you-go.
      // *   **Prepaid**: subscription.
      shared_ptr<string> chargeType_ {};
      // The total number of clusters.
      shared_ptr<int32_t> clusterCount_ {};
      // The instance ID.
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<string> deployScheme_ {};
      // The description of the instance.
      shared_ptr<string> description_ {};
      // The database engine of the instance.
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineMinorVersion_ {};
      // The database engine version of the instance.
      shared_ptr<string> engineVersion_ {};
      // The time when the cluster expires.
      // 
      // >  A specific value is returned only for subscription clusters whose billing method is **Prepaid**. For pay-as-you-go clusters whose billing method is **Postpaid**, no value is returned.
      shared_ptr<string> expireTime_ {};
      // The time when the task was created. The time is displayed in UTC.
      shared_ptr<string> gmtCreated_ {};
      // The time when the task was last modified. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The type of the instance.
      shared_ptr<string> instanceUsedType_ {};
      // Indicates whether the instance is deleted. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDeleted_ {};
      // The lock mode of the instance.
      shared_ptr<int64_t> lockMode_ {};
      // The reason why the instance is locked.
      shared_ptr<string> lockReason_ {};
      // The end timestamp of the maintenance window.
      shared_ptr<string> maintainEndTimeStr_ {};
      // The end time of the instance maintenance window.
      shared_ptr<string> maintainEndtime_ {};
      // The start timestamp of the maintenance window.
      shared_ptr<string> maintainStartTimeStr_ {};
      // The start time of the instance maintenance window.
      shared_ptr<string> maintainStarttime_ {};
      shared_ptr<vector<Items::MultiZone>> multiZone_ {};
      // The storage capacity of the instance. Unit: GB.
      shared_ptr<int64_t> objectStoreSize_ {};
      // The time when the instance was created.
      shared_ptr<string> parentInstance_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The number of CPU cores of the instance.
      shared_ptr<int64_t> resourceCpu_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The memory capacity of the instance.
      shared_ptr<int64_t> resourceMemory_ {};
      // The maximum number of RCUs.
      shared_ptr<int64_t> scaleMax_ {};
      // The minimum number of RDS capacity units (RCUs).
      shared_ptr<int64_t> scaleMin_ {};
      // This parameter is not returned.
      shared_ptr<int64_t> scaleReplica_ {};
      shared_ptr<bool> serverless_ {};
      // The state of the instance. Valid values:
      // 
      // *   **CREATING**: The instance is being created.
      // *   **ACTIVATION**: The instance is running.
      // *   **RESOURCE_CHANGING**: The resource configuration of the instance is being changed.
      // *   **ORDER_PREPARING**: The order is being confirmed.
      // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the instance is being changed and the instance is write-locked.
      // *   **DELETING**: The instance is being deleted.
      shared_ptr<string> status_ {};
      // The cache size.
      shared_ptr<int64_t> storageSize_ {};
      // The storage type of the instance.
      shared_ptr<string> storageType_ {};
      // The details about each tag returned.
      shared_ptr<vector<Items::Tags>> tags_ {};
      // The ID of the cluster that is monitored by Managed Service for Prometheus.
      shared_ptr<string> tenantClusterId_ {};
      // The token that is used to access Managed Service for Prometheus.
      shared_ptr<string> tenantToken_ {};
      // The ID of the account that uses Managed Service for Prometheus.
      shared_ptr<string> tenantUserId_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // The connection string of the instance.
      shared_ptr<string> connectionString_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstancesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstancesResponseBody::Items>) };
    inline vector<DescribeDBInstancesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstancesResponseBody::Items>) };
    inline DescribeDBInstancesResponseBody& setItems(const vector<DescribeDBInstancesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesResponseBody& setItems(vector<DescribeDBInstancesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDBInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDBInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeDBInstancesResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details about each instance returned.
    shared_ptr<vector<DescribeDBInstancesResponseBody::Items>> items_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int64_t> pageNumber_ {};
    // The page number.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
