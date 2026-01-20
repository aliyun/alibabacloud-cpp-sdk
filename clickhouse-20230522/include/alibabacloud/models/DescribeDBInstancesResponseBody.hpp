// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
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
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class DBInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Bid, bid_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
          DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Bid, bid_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
          DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBInstances() = default ;
        DBInstances(const DBInstances &) = default ;
        DBInstances(DBInstances &&) = default ;
        DBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstances() = default ;
        DBInstances& operator=(const DBInstances &) = default ;
        DBInstances& operator=(DBInstances &&) = default ;
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
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->DBInstanceId_ == nullptr && this->deletionProtection_ == nullptr
        && this->description_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->lockMode_ == nullptr
        && this->lockReason_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
        inline DBInstances& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // bid Field Functions 
        bool hasBid() const { return this->bid_ != nullptr;};
        void deleteBid() { this->bid_ = nullptr;};
        inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
        inline DBInstances& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline DBInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline string getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
        inline DBInstances& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DBInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstances& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstances& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBInstances& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // maintainEndTime Field Functions 
        bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
        void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
        inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
        inline DBInstances& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


        // maintainStartTime Field Functions 
        bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
        void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
        inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
        inline DBInstances& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // scaleMax Field Functions 
        bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
        void deleteScaleMax() { this->scaleMax_ = nullptr;};
        inline int32_t getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0) };
        inline DBInstances& setScaleMax(int32_t scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


        // scaleMin Field Functions 
        bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
        void deleteScaleMin() { this->scaleMin_ = nullptr;};
        inline int32_t getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0) };
        inline DBInstances& setScaleMin(int32_t scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DBInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBInstances& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<DBInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DBInstances::Tags>) };
        inline vector<DBInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DBInstances::Tags>) };
        inline DBInstances& setTags(const vector<DBInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstances& setTags(vector<DBInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The user ID.
        shared_ptr<string> aliUid_ {};
        // The channel ID.
        shared_ptr<string> bid_ {};
        // The billing method. Valid values:
        // 
        // *   PrePaid: subscription
        // *   PostPaid: pay-as-you-go
        shared_ptr<string> chargeType_ {};
        // The time when the cluster was created.
        shared_ptr<string> createTime_ {};
        // The cluster ID.
        shared_ptr<string> DBInstanceId_ {};
        // Indicates whether the release protection feature is enabled for the cluster.
        shared_ptr<string> deletionProtection_ {};
        // The cluster description.
        shared_ptr<string> description_ {};
        // The engine type.
        shared_ptr<string> engine_ {};
        // The engine version.
        shared_ptr<string> engineVersion_ {};
        // The time when the cluster expires.
        shared_ptr<string> expireTime_ {};
        // The lock mode.
        shared_ptr<string> lockMode_ {};
        // The reason why the cluster was locked.
        shared_ptr<string> lockReason_ {};
        // The end time of the maintenance window.
        shared_ptr<string> maintainEndTime_ {};
        // The start time of the maintenance window.
        shared_ptr<string> maintainStartTime_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The maximum capacity for elastic scaling.
        shared_ptr<int32_t> scaleMax_ {};
        // The minimum capacity for elastic scaling.
        shared_ptr<int32_t> scaleMin_ {};
        // The cluster status.
        shared_ptr<string> status_ {};
        shared_ptr<string> storageType_ {};
        // The tags.
        shared_ptr<vector<DBInstances::Tags>> tags_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // DBInstances Field Functions 
      bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
      void deleteDBInstances() { this->DBInstances_ = nullptr;};
      inline const vector<Data::DBInstances> & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<Data::DBInstances>) };
      inline vector<Data::DBInstances> getDBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<Data::DBInstances>) };
      inline Data& setDBInstances(const vector<Data::DBInstances> & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
      inline Data& setDBInstances(vector<Data::DBInstances> && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The clusters.
      shared_ptr<vector<Data::DBInstances>> DBInstances_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstancesResponseBody::Data) };
    inline DescribeDBInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstancesResponseBody::Data) };
    inline DescribeDBInstancesResponseBody& setData(const DescribeDBInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstancesResponseBody& setData(DescribeDBInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeDBInstancesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
