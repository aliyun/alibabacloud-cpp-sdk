// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeStatus_ == nullptr
        && this->zoneId_ == nullptr; };
        // nodeStatus Field Functions 
        bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
        void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
        inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
        inline Nodes& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The node status.
        shared_ptr<string> nodeStatus_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      class MultiZones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiZones& obj) { 
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, MultiZones& obj) { 
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        MultiZones() = default ;
        MultiZones(const MultiZones &) = default ;
        MultiZones(MultiZones &&) = default ;
        MultiZones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiZones() = default ;
        MultiZones& operator=(const MultiZones &) = default ;
        MultiZones& operator=(MultiZones &&) = default ;
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
        inline MultiZones& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline MultiZones& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline MultiZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The vSwitch IDs.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->category_ == nullptr && this->chargeType_ == nullptr && this->clickObserveServiceStatus_ == nullptr && this->createTime_ == nullptr
        && this->DBInstanceId_ == nullptr && this->deletionProtection_ == nullptr && this->deploySchema_ == nullptr && this->description_ == nullptr && this->disabledPorts_ == nullptr
        && this->engine_ == nullptr && this->engineMinorVersion_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->latestEngineMinorVersion_ == nullptr
        && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->multiZones_ == nullptr
        && this->nodeCount_ == nullptr && this->nodeScaleMax_ == nullptr && this->nodeScaleMin_ == nullptr && this->nodes_ == nullptr && this->objectStoreSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->status_ == nullptr
        && this->storageQuota_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
      inline Data& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clickObserveServiceStatus Field Functions 
      bool hasClickObserveServiceStatus() const { return this->clickObserveServiceStatus_ != nullptr;};
      void deleteClickObserveServiceStatus() { this->clickObserveServiceStatus_ = nullptr;};
      inline string getClickObserveServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(clickObserveServiceStatus_, "") };
      inline Data& setClickObserveServiceStatus(string clickObserveServiceStatus) { DARABONBA_PTR_SET_VALUE(clickObserveServiceStatus_, clickObserveServiceStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Data& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // deploySchema Field Functions 
      bool hasDeploySchema() const { return this->deploySchema_ != nullptr;};
      void deleteDeploySchema() { this->deploySchema_ = nullptr;};
      inline string getDeploySchema() const { DARABONBA_PTR_GET_DEFAULT(deploySchema_, "") };
      inline Data& setDeploySchema(string deploySchema) { DARABONBA_PTR_SET_VALUE(deploySchema_, deploySchema) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabledPorts Field Functions 
      bool hasDisabledPorts() const { return this->disabledPorts_ != nullptr;};
      void deleteDisabledPorts() { this->disabledPorts_ = nullptr;};
      inline string getDisabledPorts() const { DARABONBA_PTR_GET_DEFAULT(disabledPorts_, "") };
      inline Data& setDisabledPorts(string disabledPorts) { DARABONBA_PTR_SET_VALUE(disabledPorts_, disabledPorts) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineMinorVersion Field Functions 
      bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
      void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
      inline string getEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
      inline Data& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Data& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // latestEngineMinorVersion Field Functions 
      bool hasLatestEngineMinorVersion() const { return this->latestEngineMinorVersion_ != nullptr;};
      void deleteLatestEngineMinorVersion() { this->latestEngineMinorVersion_ = nullptr;};
      inline string getLatestEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestEngineMinorVersion_, "") };
      inline Data& setLatestEngineMinorVersion(string latestEngineMinorVersion) { DARABONBA_PTR_SET_VALUE(latestEngineMinorVersion_, latestEngineMinorVersion) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline Data& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline Data& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // maintainEndTime Field Functions 
      bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
      void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
      inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
      inline Data& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


      // maintainStartTime Field Functions 
      bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
      void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
      inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
      inline Data& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


      // multiZones Field Functions 
      bool hasMultiZones() const { return this->multiZones_ != nullptr;};
      void deleteMultiZones() { this->multiZones_ = nullptr;};
      inline const vector<Data::MultiZones> & getMultiZones() const { DARABONBA_PTR_GET_CONST(multiZones_, vector<Data::MultiZones>) };
      inline vector<Data::MultiZones> getMultiZones() { DARABONBA_PTR_GET(multiZones_, vector<Data::MultiZones>) };
      inline Data& setMultiZones(const vector<Data::MultiZones> & multiZones) { DARABONBA_PTR_SET_VALUE(multiZones_, multiZones) };
      inline Data& setMultiZones(vector<Data::MultiZones> && multiZones) { DARABONBA_PTR_SET_RVALUE(multiZones_, multiZones) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline string getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
      inline Data& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // nodeScaleMax Field Functions 
      bool hasNodeScaleMax() const { return this->nodeScaleMax_ != nullptr;};
      void deleteNodeScaleMax() { this->nodeScaleMax_ = nullptr;};
      inline string getNodeScaleMax() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMax_, "") };
      inline Data& setNodeScaleMax(string nodeScaleMax) { DARABONBA_PTR_SET_VALUE(nodeScaleMax_, nodeScaleMax) };


      // nodeScaleMin Field Functions 
      bool hasNodeScaleMin() const { return this->nodeScaleMin_ != nullptr;};
      void deleteNodeScaleMin() { this->nodeScaleMin_ = nullptr;};
      inline string getNodeScaleMin() const { DARABONBA_PTR_GET_DEFAULT(nodeScaleMin_, "") };
      inline Data& setNodeScaleMin(string nodeScaleMin) { DARABONBA_PTR_SET_VALUE(nodeScaleMin_, nodeScaleMin) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // objectStoreSize Field Functions 
      bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
      void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
      inline string getObjectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, "") };
      inline Data& setObjectStoreSize(string objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline int32_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0) };
      inline Data& setScaleMax(int32_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline int32_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0) };
      inline Data& setScaleMin(int32_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageQuota Field Functions 
      bool hasStorageQuota() const { return this->storageQuota_ != nullptr;};
      void deleteStorageQuota() { this->storageQuota_ = nullptr;};
      inline string getStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(storageQuota_, "") };
      inline Data& setStorageQuota(string storageQuota) { DARABONBA_PTR_SET_VALUE(storageQuota_, storageQuota) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline Data& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The channel ID.
      shared_ptr<string> bid_ {};
      shared_ptr<string> category_ {};
      // The billing method. Enterprise Edition clusters use the pay-as-you-go billing method.
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> clickObserveServiceStatus_ {};
      // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      shared_ptr<string> createTime_ {};
      // The cluster ID.
      shared_ptr<string> DBInstanceId_ {};
      // Indicates whether the release protection feature is enabled for the cluster.
      shared_ptr<bool> deletionProtection_ {};
      // The deployment mode of the cluster. Valid values: single_az and multi_az.
      // 
      // *   single_az: indicates that the server nodes are deployed in the primary zone. The ID of the primary zone is specified by the ZoneID parameter.
      // *   multi_az: indicates that the server nodes are deployed in multiple zones. The information about the zones is specified by the MultiZones parameter.
      // 
      // The keeper nodes are deployed in multiple zones.
      shared_ptr<string> deploySchema_ {};
      // The cluster description.
      shared_ptr<string> description_ {};
      // The disabled database ports. Multiple database ports are separated by commas (,).
      shared_ptr<string> disabledPorts_ {};
      // The engine type.
      shared_ptr<string> engine_ {};
      // The minor engine version of the cluster.
      shared_ptr<string> engineMinorVersion_ {};
      // The engine version.
      shared_ptr<string> engineVersion_ {};
      // The time when the cluster expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
      shared_ptr<string> expireTime_ {};
      // The latest minor engine version.
      shared_ptr<string> latestEngineMinorVersion_ {};
      // The lock mode of the cluster.
      shared_ptr<string> lockMode_ {};
      // The reason why the cluster was locked.
      shared_ptr<string> lockReason_ {};
      // The end time of the maintenance window.
      shared_ptr<string> maintainEndTime_ {};
      // The start time of the maintenance window.
      shared_ptr<string> maintainStartTime_ {};
      // The information about the zones.
      shared_ptr<vector<Data::MultiZones>> multiZones_ {};
      shared_ptr<string> nodeCount_ {};
      shared_ptr<string> nodeScaleMax_ {};
      shared_ptr<string> nodeScaleMin_ {};
      // The nodes.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      // The size of the object storage space.
      shared_ptr<string> objectStoreSize_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource ID.
      shared_ptr<string> resourceGroupId_ {};
      // The maximum capacity for elastic scaling.
      shared_ptr<int32_t> scaleMax_ {};
      // The minimum capacity for elastic scaling.
      shared_ptr<int32_t> scaleMin_ {};
      // The cluster status.
      shared_ptr<string> status_ {};
      shared_ptr<string> storageQuota_ {};
      // The size of the storage space. Unit: GB.
      shared_ptr<int32_t> storageSize_ {};
      // The storage type.
      shared_ptr<string> storageType_ {};
      // The details of the tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceAttributeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceAttributeResponseBody::Data) };
    inline DescribeDBInstanceAttributeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceAttributeResponseBody::Data) };
    inline DescribeDBInstanceAttributeResponseBody& setData(const DescribeDBInstanceAttributeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceAttributeResponseBody& setData(DescribeDBInstanceAttributeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    shared_ptr<DescribeDBInstanceAttributeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
