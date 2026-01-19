// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanUpgradeVersions, canUpgradeVersions_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ConfigPatternType, configPatternType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_TO_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_TO_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecGroupConnValid, secGroupConnValid_);
      DARABONBA_PTR_TO_JSON(Serverless, serverless_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VirtualClusterList, virtualClusterList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanUpgradeVersions, canUpgradeVersions_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ConfigPatternType, configPatternType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_FROM_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_FROM_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecGroupConnValid, secGroupConnValid_);
      DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VirtualClusterList, virtualClusterList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody(DescribeDBInstanceAttributeResponseBody &&) = default ;
    DescribeDBInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(DescribeDBInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveClusterId, activeClusterId_);
        DARABONBA_PTR_TO_JSON(ActiveClusterName, activeClusterName_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_TO_JSON(DbClusterName, dbClusterName_);
        DARABONBA_PTR_TO_JSON(StandbyClusterId, standbyClusterId_);
        DARABONBA_PTR_TO_JSON(StandbyClusterName, standbyClusterName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveClusterId, activeClusterId_);
        DARABONBA_PTR_FROM_JSON(ActiveClusterName, activeClusterName_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_FROM_JSON(DbClusterName, dbClusterName_);
        DARABONBA_PTR_FROM_JSON(StandbyClusterId, standbyClusterId_);
        DARABONBA_PTR_FROM_JSON(StandbyClusterName, standbyClusterName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      VirtualClusterList() = default ;
      VirtualClusterList(const VirtualClusterList &) = default ;
      VirtualClusterList(VirtualClusterList &&) = default ;
      VirtualClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualClusterList() = default ;
      VirtualClusterList& operator=(const VirtualClusterList &) = default ;
      VirtualClusterList& operator=(VirtualClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeClusterId_ == nullptr
        && this->activeClusterName_ == nullptr && this->createdTime_ == nullptr && this->dbClusterId_ == nullptr && this->dbClusterName_ == nullptr && this->standbyClusterId_ == nullptr
        && this->standbyClusterName_ == nullptr && this->status_ == nullptr; };
      // activeClusterId Field Functions 
      bool hasActiveClusterId() const { return this->activeClusterId_ != nullptr;};
      void deleteActiveClusterId() { this->activeClusterId_ = nullptr;};
      inline string getActiveClusterId() const { DARABONBA_PTR_GET_DEFAULT(activeClusterId_, "") };
      inline VirtualClusterList& setActiveClusterId(string activeClusterId) { DARABONBA_PTR_SET_VALUE(activeClusterId_, activeClusterId) };


      // activeClusterName Field Functions 
      bool hasActiveClusterName() const { return this->activeClusterName_ != nullptr;};
      void deleteActiveClusterName() { this->activeClusterName_ = nullptr;};
      inline string getActiveClusterName() const { DARABONBA_PTR_GET_DEFAULT(activeClusterName_, "") };
      inline VirtualClusterList& setActiveClusterName(string activeClusterName) { DARABONBA_PTR_SET_VALUE(activeClusterName_, activeClusterName) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline VirtualClusterList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // dbClusterId Field Functions 
      bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
      void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
      inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
      inline VirtualClusterList& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


      // dbClusterName Field Functions 
      bool hasDbClusterName() const { return this->dbClusterName_ != nullptr;};
      void deleteDbClusterName() { this->dbClusterName_ = nullptr;};
      inline string getDbClusterName() const { DARABONBA_PTR_GET_DEFAULT(dbClusterName_, "") };
      inline VirtualClusterList& setDbClusterName(string dbClusterName) { DARABONBA_PTR_SET_VALUE(dbClusterName_, dbClusterName) };


      // standbyClusterId Field Functions 
      bool hasStandbyClusterId() const { return this->standbyClusterId_ != nullptr;};
      void deleteStandbyClusterId() { this->standbyClusterId_ = nullptr;};
      inline string getStandbyClusterId() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterId_, "") };
      inline VirtualClusterList& setStandbyClusterId(string standbyClusterId) { DARABONBA_PTR_SET_VALUE(standbyClusterId_, standbyClusterId) };


      // standbyClusterName Field Functions 
      bool hasStandbyClusterName() const { return this->standbyClusterName_ != nullptr;};
      void deleteStandbyClusterName() { this->standbyClusterName_ = nullptr;};
      inline string getStandbyClusterName() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterName_, "") };
      inline VirtualClusterList& setStandbyClusterName(string standbyClusterName) { DARABONBA_PTR_SET_VALUE(standbyClusterName_, standbyClusterName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VirtualClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> activeClusterId_ {};
      shared_ptr<string> activeClusterName_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> dbClusterId_ {};
      shared_ptr<string> dbClusterName_ {};
      shared_ptr<string> standbyClusterId_ {};
      shared_ptr<string> standbyClusterName_ {};
      shared_ptr<string> status_ {};
    };

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
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    class MultiZone : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiZone& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, MultiZone& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
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
      virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && this->cidr_ == nullptr && this->vSwitchIds_ == nullptr && this->zoneId_ == nullptr; };
      // availableIpCount Field Functions 
      bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
      void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
      inline int64_t getAvailableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, 0L) };
      inline MultiZone& setAvailableIpCount(int64_t availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline MultiZone& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


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
      shared_ptr<int64_t> availableIpCount_ {};
      shared_ptr<string> cidr_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
      shared_ptr<string> zoneId_ {};
    };

    class DBClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(CacheStorageSizeGB, cacheStorageSizeGB_);
        DARABONBA_PTR_TO_JSON(CacheStorageType, cacheStorageType_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ClusterBinding, clusterBinding_);
        DARABONBA_PTR_TO_JSON(ClusterNodeCount, clusterNodeCount_);
        DARABONBA_PTR_TO_JSON(ClusterNodeType, clusterNodeType_);
        DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DbClusterClass, dbClusterClass_);
        DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_TO_JSON(DbClusterName, dbClusterName_);
        DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_TO_JSON(ScalingRulesEnable, scalingRulesEnable_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(CacheStorageSizeGB, cacheStorageSizeGB_);
        DARABONBA_PTR_FROM_JSON(CacheStorageType, cacheStorageType_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ClusterBinding, clusterBinding_);
        DARABONBA_PTR_FROM_JSON(ClusterNodeCount, clusterNodeCount_);
        DARABONBA_PTR_FROM_JSON(ClusterNodeType, clusterNodeType_);
        DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DbClusterClass, dbClusterClass_);
        DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_FROM_JSON(DbClusterName, dbClusterName_);
        DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_FROM_JSON(ScalingRulesEnable, scalingRulesEnable_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBClusterList() = default ;
      DBClusterList(const DBClusterList &) = default ;
      DBClusterList(DBClusterList &&) = default ;
      DBClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterList() = default ;
      DBClusterList& operator=(const DBClusterList &) = default ;
      DBClusterList& operator=(DBClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cacheStorageSizeGB_ == nullptr
        && this->cacheStorageType_ == nullptr && this->chargeType_ == nullptr && this->clusterBinding_ == nullptr && this->clusterNodeCount_ == nullptr && this->clusterNodeType_ == nullptr
        && this->cpuCores_ == nullptr && this->createdTime_ == nullptr && this->dbClusterClass_ == nullptr && this->dbClusterId_ == nullptr && this->dbClusterName_ == nullptr
        && this->dbInstanceName_ == nullptr && this->memory_ == nullptr && this->modifiedTime_ == nullptr && this->performanceLevel_ == nullptr && this->scaleMax_ == nullptr
        && this->scaleMin_ == nullptr && this->scalingRulesEnable_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->subDomain_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // cacheStorageSizeGB Field Functions 
      bool hasCacheStorageSizeGB() const { return this->cacheStorageSizeGB_ != nullptr;};
      void deleteCacheStorageSizeGB() { this->cacheStorageSizeGB_ = nullptr;};
      inline string getCacheStorageSizeGB() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSizeGB_, "") };
      inline DBClusterList& setCacheStorageSizeGB(string cacheStorageSizeGB) { DARABONBA_PTR_SET_VALUE(cacheStorageSizeGB_, cacheStorageSizeGB) };


      // cacheStorageType Field Functions 
      bool hasCacheStorageType() const { return this->cacheStorageType_ != nullptr;};
      void deleteCacheStorageType() { this->cacheStorageType_ = nullptr;};
      inline string getCacheStorageType() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageType_, "") };
      inline DBClusterList& setCacheStorageType(string cacheStorageType) { DARABONBA_PTR_SET_VALUE(cacheStorageType_, cacheStorageType) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline DBClusterList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clusterBinding Field Functions 
      bool hasClusterBinding() const { return this->clusterBinding_ != nullptr;};
      void deleteClusterBinding() { this->clusterBinding_ = nullptr;};
      inline string getClusterBinding() const { DARABONBA_PTR_GET_DEFAULT(clusterBinding_, "") };
      inline DBClusterList& setClusterBinding(string clusterBinding) { DARABONBA_PTR_SET_VALUE(clusterBinding_, clusterBinding) };


      // clusterNodeCount Field Functions 
      bool hasClusterNodeCount() const { return this->clusterNodeCount_ != nullptr;};
      void deleteClusterNodeCount() { this->clusterNodeCount_ = nullptr;};
      inline int32_t getClusterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeCount_, 0) };
      inline DBClusterList& setClusterNodeCount(int32_t clusterNodeCount) { DARABONBA_PTR_SET_VALUE(clusterNodeCount_, clusterNodeCount) };


      // clusterNodeType Field Functions 
      bool hasClusterNodeType() const { return this->clusterNodeType_ != nullptr;};
      void deleteClusterNodeType() { this->clusterNodeType_ = nullptr;};
      inline string getClusterNodeType() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeType_, "") };
      inline DBClusterList& setClusterNodeType(string clusterNodeType) { DARABONBA_PTR_SET_VALUE(clusterNodeType_, clusterNodeType) };


      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline int64_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0L) };
      inline DBClusterList& setCpuCores(int64_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DBClusterList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // dbClusterClass Field Functions 
      bool hasDbClusterClass() const { return this->dbClusterClass_ != nullptr;};
      void deleteDbClusterClass() { this->dbClusterClass_ = nullptr;};
      inline string getDbClusterClass() const { DARABONBA_PTR_GET_DEFAULT(dbClusterClass_, "") };
      inline DBClusterList& setDbClusterClass(string dbClusterClass) { DARABONBA_PTR_SET_VALUE(dbClusterClass_, dbClusterClass) };


      // dbClusterId Field Functions 
      bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
      void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
      inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
      inline DBClusterList& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


      // dbClusterName Field Functions 
      bool hasDbClusterName() const { return this->dbClusterName_ != nullptr;};
      void deleteDbClusterName() { this->dbClusterName_ = nullptr;};
      inline string getDbClusterName() const { DARABONBA_PTR_GET_DEFAULT(dbClusterName_, "") };
      inline DBClusterList& setDbClusterName(string dbClusterName) { DARABONBA_PTR_SET_VALUE(dbClusterName_, dbClusterName) };


      // dbInstanceName Field Functions 
      bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
      void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
      inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
      inline DBClusterList& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline DBClusterList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline DBClusterList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DBClusterList& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline double getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0.0) };
      inline DBClusterList& setScaleMax(double scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline double getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0.0) };
      inline DBClusterList& setScaleMin(double scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // scalingRulesEnable Field Functions 
      bool hasScalingRulesEnable() const { return this->scalingRulesEnable_ != nullptr;};
      void deleteScalingRulesEnable() { this->scalingRulesEnable_ = nullptr;};
      inline bool getScalingRulesEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRulesEnable_, false) };
      inline DBClusterList& setScalingRulesEnable(bool scalingRulesEnable) { DARABONBA_PTR_SET_VALUE(scalingRulesEnable_, scalingRulesEnable) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DBClusterList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline DBClusterList& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline DBClusterList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBClusterList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The cache size. Unit: GB.
      shared_ptr<string> cacheStorageSizeGB_ {};
      // The cache type.
      shared_ptr<string> cacheStorageType_ {};
      // The billing method of the cluster. Valid values:
      // 
      // *   **Postpaid**: pay-as-you-go.
      // *   **Prepaid**: subscription.
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> clusterBinding_ {};
      shared_ptr<int32_t> clusterNodeCount_ {};
      shared_ptr<string> clusterNodeType_ {};
      // The number of CPU cores.
      shared_ptr<int64_t> cpuCores_ {};
      // The time when the cluster was created.
      shared_ptr<string> createdTime_ {};
      // The specifications of the cluster. Valid values:
      // 
      // *   **selectdb.xlarge**: 4 CPU cores and 32 GB of memory.
      // *   **selectdb.2xlarge**: 8 CPU cores and 64 GB of memory.
      // *   **selectdb.4xlarge**: 16 CPU cores and 128 GB of memory.
      // *   **selectdb.8xlarge**: 32 CPU cores and 256 GB of memory.
      // *   **selectdb.16xlarge**: 64 CPU cores and 512 GB of memory.
      // *   **selectdb.24xlarge**: 96 CPU cores and 768 GB of memory.
      // *   **selectdb.32xlarge**: 128 CPU cores and 1,024 GB of memory.
      shared_ptr<string> dbClusterClass_ {};
      // The ID of the cluster.
      shared_ptr<string> dbClusterId_ {};
      // The name of the cluster.
      shared_ptr<string> dbClusterName_ {};
      // The instance name.
      shared_ptr<string> dbInstanceName_ {};
      // The memory size.
      shared_ptr<int64_t> memory_ {};
      // The modified time.
      shared_ptr<string> modifiedTime_ {};
      // The performance level.
      shared_ptr<string> performanceLevel_ {};
      shared_ptr<double> scaleMax_ {};
      shared_ptr<double> scaleMin_ {};
      shared_ptr<bool> scalingRulesEnable_ {};
      // The time when the cluster started.
      shared_ptr<string> startTime_ {};
      // The state of the cluster. Valid values:
      // 
      // *   **CREATING**: The cluster is being created.
      // *   **ACTIVATION**: The cluster is running.
      // *   **RESOURCE_CHANGING**: The resource configuration of the cluster is being changed.
      // *   **ORDER_PREPARING**: The order is being confirmed.
      // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the cluster is being changed and the cluster is write-locked.
      // *   **DELETING**: The cluster is being deleted.
      shared_ptr<string> status_ {};
      shared_ptr<string> subDomain_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->canUpgradeVersions_ == nullptr
        && this->chargeType_ == nullptr && this->configPatternType_ == nullptr && this->createTime_ == nullptr && this->DBClusterList_ == nullptr && this->DBInstanceId_ == nullptr
        && this->deployScheme_ == nullptr && this->description_ == nullptr && this->engine_ == nullptr && this->engineMinorVersion_ == nullptr && this->engineVersion_ == nullptr
        && this->expireTime_ == nullptr && this->gmtModified_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainEndtime_ == nullptr
        && this->maintainStarttime_ == nullptr && this->multiZone_ == nullptr && this->objectStoreSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceCpu_ == nullptr && this->resourceGroupId_ == nullptr && this->secGroupConnValid_ == nullptr && this->serverless_ == nullptr && this->status_ == nullptr
        && this->storageSize_ == nullptr && this->subDomain_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->virtualClusterList_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // canUpgradeVersions Field Functions 
    bool hasCanUpgradeVersions() const { return this->canUpgradeVersions_ != nullptr;};
    void deleteCanUpgradeVersions() { this->canUpgradeVersions_ = nullptr;};
    inline const vector<string> & getCanUpgradeVersions() const { DARABONBA_PTR_GET_CONST(canUpgradeVersions_, vector<string>) };
    inline vector<string> getCanUpgradeVersions() { DARABONBA_PTR_GET(canUpgradeVersions_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBody& setCanUpgradeVersions(const vector<string> & canUpgradeVersions) { DARABONBA_PTR_SET_VALUE(canUpgradeVersions_, canUpgradeVersions) };
    inline DescribeDBInstanceAttributeResponseBody& setCanUpgradeVersions(vector<string> && canUpgradeVersions) { DARABONBA_PTR_SET_RVALUE(canUpgradeVersions_, canUpgradeVersions) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // configPatternType Field Functions 
    bool hasConfigPatternType() const { return this->configPatternType_ != nullptr;};
    void deleteConfigPatternType() { this->configPatternType_ = nullptr;};
    inline string getConfigPatternType() const { DARABONBA_PTR_GET_DEFAULT(configPatternType_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setConfigPatternType(string configPatternType) { DARABONBA_PTR_SET_VALUE(configPatternType_, configPatternType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterList Field Functions 
    bool hasDBClusterList() const { return this->DBClusterList_ != nullptr;};
    void deleteDBClusterList() { this->DBClusterList_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBody::DBClusterList> & getDBClusterList() const { DARABONBA_PTR_GET_CONST(DBClusterList_, vector<DescribeDBInstanceAttributeResponseBody::DBClusterList>) };
    inline vector<DescribeDBInstanceAttributeResponseBody::DBClusterList> getDBClusterList() { DARABONBA_PTR_GET(DBClusterList_, vector<DescribeDBInstanceAttributeResponseBody::DBClusterList>) };
    inline DescribeDBInstanceAttributeResponseBody& setDBClusterList(const vector<DescribeDBInstanceAttributeResponseBody::DBClusterList> & dBClusterList) { DARABONBA_PTR_SET_VALUE(DBClusterList_, dBClusterList) };
    inline DescribeDBInstanceAttributeResponseBody& setDBClusterList(vector<DescribeDBInstanceAttributeResponseBody::DBClusterList> && dBClusterList) { DARABONBA_PTR_SET_RVALUE(DBClusterList_, dBClusterList) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // deployScheme Field Functions 
    bool hasDeployScheme() const { return this->deployScheme_ != nullptr;};
    void deleteDeployScheme() { this->deployScheme_ = nullptr;};
    inline string getDeployScheme() const { DARABONBA_PTR_GET_DEFAULT(deployScheme_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDeployScheme(string deployScheme) { DARABONBA_PTR_SET_VALUE(deployScheme_, deployScheme) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineMinorVersion Field Functions 
    bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
    void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
    inline string getEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int64_t getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setLockMode(int64_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndtime Field Functions 
    bool hasMaintainEndtime() const { return this->maintainEndtime_ != nullptr;};
    void deleteMaintainEndtime() { this->maintainEndtime_ = nullptr;};
    inline string getMaintainEndtime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndtime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setMaintainEndtime(string maintainEndtime) { DARABONBA_PTR_SET_VALUE(maintainEndtime_, maintainEndtime) };


    // maintainStarttime Field Functions 
    bool hasMaintainStarttime() const { return this->maintainStarttime_ != nullptr;};
    void deleteMaintainStarttime() { this->maintainStarttime_ = nullptr;};
    inline string getMaintainStarttime() const { DARABONBA_PTR_GET_DEFAULT(maintainStarttime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setMaintainStarttime(string maintainStarttime) { DARABONBA_PTR_SET_VALUE(maintainStarttime_, maintainStarttime) };


    // multiZone Field Functions 
    bool hasMultiZone() const { return this->multiZone_ != nullptr;};
    void deleteMultiZone() { this->multiZone_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBody::MultiZone> & getMultiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<DescribeDBInstanceAttributeResponseBody::MultiZone>) };
    inline vector<DescribeDBInstanceAttributeResponseBody::MultiZone> getMultiZone() { DARABONBA_PTR_GET(multiZone_, vector<DescribeDBInstanceAttributeResponseBody::MultiZone>) };
    inline DescribeDBInstanceAttributeResponseBody& setMultiZone(const vector<DescribeDBInstanceAttributeResponseBody::MultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
    inline DescribeDBInstanceAttributeResponseBody& setMultiZone(vector<DescribeDBInstanceAttributeResponseBody::MultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


    // objectStoreSize Field Functions 
    bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
    void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
    inline int64_t getObjectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setObjectStoreSize(int64_t objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCpu Field Functions 
    bool hasResourceCpu() const { return this->resourceCpu_ != nullptr;};
    void deleteResourceCpu() { this->resourceCpu_ = nullptr;};
    inline int64_t getResourceCpu() const { DARABONBA_PTR_GET_DEFAULT(resourceCpu_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setResourceCpu(int64_t resourceCpu) { DARABONBA_PTR_SET_VALUE(resourceCpu_, resourceCpu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secGroupConnValid Field Functions 
    bool hasSecGroupConnValid() const { return this->secGroupConnValid_ != nullptr;};
    void deleteSecGroupConnValid() { this->secGroupConnValid_ = nullptr;};
    inline string getSecGroupConnValid() const { DARABONBA_PTR_GET_DEFAULT(secGroupConnValid_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setSecGroupConnValid(string secGroupConnValid) { DARABONBA_PTR_SET_VALUE(secGroupConnValid_, secGroupConnValid) };


    // serverless Field Functions 
    bool hasServerless() const { return this->serverless_ != nullptr;};
    void deleteServerless() { this->serverless_ = nullptr;};
    inline bool getServerless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, false) };
    inline DescribeDBInstanceAttributeResponseBody& setServerless(bool serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDBInstanceAttributeResponseBody::Tags>) };
    inline vector<DescribeDBInstanceAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeDBInstanceAttributeResponseBody::Tags>) };
    inline DescribeDBInstanceAttributeResponseBody& setTags(const vector<DescribeDBInstanceAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstanceAttributeResponseBody& setTags(vector<DescribeDBInstanceAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // virtualClusterList Field Functions 
    bool hasVirtualClusterList() const { return this->virtualClusterList_ != nullptr;};
    void deleteVirtualClusterList() { this->virtualClusterList_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList> & getVirtualClusterList() const { DARABONBA_PTR_GET_CONST(virtualClusterList_, vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList>) };
    inline vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList> getVirtualClusterList() { DARABONBA_PTR_GET(virtualClusterList_, vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList>) };
    inline DescribeDBInstanceAttributeResponseBody& setVirtualClusterList(const vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList> & virtualClusterList) { DARABONBA_PTR_SET_VALUE(virtualClusterList_, virtualClusterList) };
    inline DescribeDBInstanceAttributeResponseBody& setVirtualClusterList(vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList> && virtualClusterList) { DARABONBA_PTR_SET_RVALUE(virtualClusterList_, virtualClusterList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The information returned.
    shared_ptr<vector<string>> canUpgradeVersions_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> configPatternType_ {};
    // The time when the instance was created.
    shared_ptr<string> createTime_ {};
    // The information about each cluster returned.
    shared_ptr<vector<DescribeDBInstanceAttributeResponseBody::DBClusterList>> DBClusterList_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> deployScheme_ {};
    // The description of the instance.
    shared_ptr<string> description_ {};
    // The database engine of the instance.
    shared_ptr<string> engine_ {};
    // The minor kernel version number of the instance.
    shared_ptr<string> engineMinorVersion_ {};
    // The database engine version of the instance.
    shared_ptr<string> engineVersion_ {};
    // The time when the instance expires.
    shared_ptr<string> expireTime_ {};
    // The time when the instance was last modified, such as when you restarted the instance or applied for a public endpoint for the instance. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    shared_ptr<string> gmtModified_ {};
    // The lock mode of the instance. Set the value to **lock**, which specifies that the instance is locked when it automatically expires or has an overdue payment.
    shared_ptr<int64_t> lockMode_ {};
    // The reason why the instance is locked.
    shared_ptr<string> lockReason_ {};
    // The end time of the instance maintenance window.
    shared_ptr<string> maintainEndtime_ {};
    // The start time of the instance maintenance window.
    shared_ptr<string> maintainStarttime_ {};
    shared_ptr<vector<DescribeDBInstanceAttributeResponseBody::MultiZone>> multiZone_ {};
    // The storage capacity of the instance.
    shared_ptr<int64_t> objectStoreSize_ {};
    // The Region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of CPU cores of the instance.
    shared_ptr<int64_t> resourceCpu_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> secGroupConnValid_ {};
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
    // The subdomain zone ID.
    shared_ptr<string> subDomain_ {};
    // The tags that are added to the instances. Each tag is a key-value pair that consists of two parts: TagKey and TagValue. Format: `{"key1":"value1"}`.
    shared_ptr<vector<DescribeDBInstanceAttributeResponseBody::Tags>> tags_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<vector<DescribeDBInstanceAttributeResponseBody::VirtualClusterList>> virtualClusterList_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
    // The Zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
