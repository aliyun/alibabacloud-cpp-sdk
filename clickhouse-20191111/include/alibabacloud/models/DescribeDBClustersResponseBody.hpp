// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBClustersResponseBody() = default ;
    DescribeDBClustersResponseBody(const DescribeDBClustersResponseBody &) = default ;
    DescribeDBClustersResponseBody(DescribeDBClustersResponseBody &&) = default ;
    DescribeDBClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBody() = default ;
    DescribeDBClustersResponseBody& operator=(const DescribeDBClustersResponseBody &) = default ;
    DescribeDBClustersResponseBody& operator=(DescribeDBClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusters& obj) { 
        DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
      };
      DBClusters() = default ;
      DBClusters(const DBClusters &) = default ;
      DBClusters(DBClusters &&) = default ;
      DBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusters() = default ;
      DBClusters& operator=(const DBClusters &) = default ;
      DBClusters& operator=(DBClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Bid, bid_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(ControlVersion, controlVersion_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
          DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
          DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExtStorageSize, extStorageSize_);
          DARABONBA_PTR_TO_JSON(ExtStorageType, extStorageType_);
          DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ScaleOutDisableWriteWindows, scaleOutDisableWriteWindows_);
          DARABONBA_PTR_TO_JSON(ScaleOutStatus, scaleOutStatus_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Bid, bid_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(ControlVersion, controlVersion_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
          DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
          DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExtStorageSize, extStorageSize_);
          DARABONBA_PTR_FROM_JSON(ExtStorageType, extStorageType_);
          DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ScaleOutDisableWriteWindows, scaleOutDisableWriteWindows_);
          DARABONBA_PTR_FROM_JSON(ScaleOutStatus, scaleOutStatus_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBCluster() = default ;
        DBCluster(const DBCluster &) = default ;
        DBCluster(DBCluster &&) = default ;
        DBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBCluster() = default ;
        DBCluster& operator=(const DBCluster &) = default ;
        DBCluster& operator=(DBCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag name.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class ScaleOutStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScaleOutStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
          };
          friend void from_json(const Darabonba::Json& j, ScaleOutStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
          };
          ScaleOutStatus() = default ;
          ScaleOutStatus(const ScaleOutStatus &) = default ;
          ScaleOutStatus(ScaleOutStatus &&) = default ;
          ScaleOutStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScaleOutStatus() = default ;
          ScaleOutStatus& operator=(const ScaleOutStatus &) = default ;
          ScaleOutStatus& operator=(ScaleOutStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->progress_ == nullptr
        && this->ratio_ == nullptr; };
          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline ScaleOutStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
          inline ScaleOutStatus& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        protected:
          // The progress of the data migration task in percentage.
          // 
          // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
          shared_ptr<string> progress_ {};
          // The progress of the data migration task. This value is displayed in the following format: Data volume that has been migrated/Total data volume.
          // 
          // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
          shared_ptr<string> ratio_ {};
        };

        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->category_ == nullptr && this->commodityCode_ == nullptr && this->connectionString_ == nullptr && this->controlVersion_ == nullptr
        && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr
        && this->DBNodeClass_ == nullptr && this->DBNodeCount_ == nullptr && this->DBNodeStorage_ == nullptr && this->dbVersion_ == nullptr && this->expireTime_ == nullptr
        && this->extStorageSize_ == nullptr && this->extStorageType_ == nullptr && this->isExpired_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr
        && this->payType_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->scaleOutDisableWriteWindows_ == nullptr
        && this->scaleOutStatus_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcCloudInstanceId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
        inline DBCluster& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // bid Field Functions 
        bool hasBid() const { return this->bid_ != nullptr;};
        void deleteBid() { this->bid_ = nullptr;};
        inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
        inline DBCluster& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline DBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // controlVersion Field Functions 
        bool hasControlVersion() const { return this->controlVersion_ != nullptr;};
        void deleteControlVersion() { this->controlVersion_ = nullptr;};
        inline string getControlVersion() const { DARABONBA_PTR_GET_DEFAULT(controlVersion_, "") };
        inline DBCluster& setControlVersion(string controlVersion) { DARABONBA_PTR_SET_VALUE(controlVersion_, controlVersion) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBClusterDescription Field Functions 
        bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
        void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
        inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
        inline DBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline DBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // DBClusterNetworkType Field Functions 
        bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
        void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
        inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
        inline DBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


        // DBClusterStatus Field Functions 
        bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
        void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
        inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
        inline DBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


        // DBNodeClass Field Functions 
        bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
        void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
        inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
        inline DBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


        // DBNodeCount Field Functions 
        bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
        void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
        inline int64_t getDBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
        inline DBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


        // DBNodeStorage Field Functions 
        bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
        void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
        inline int64_t getDBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
        inline DBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


        // dbVersion Field Functions 
        bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
        void deleteDbVersion() { this->dbVersion_ = nullptr;};
        inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
        inline DBCluster& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // extStorageSize Field Functions 
        bool hasExtStorageSize() const { return this->extStorageSize_ != nullptr;};
        void deleteExtStorageSize() { this->extStorageSize_ = nullptr;};
        inline int32_t getExtStorageSize() const { DARABONBA_PTR_GET_DEFAULT(extStorageSize_, 0) };
        inline DBCluster& setExtStorageSize(int32_t extStorageSize) { DARABONBA_PTR_SET_VALUE(extStorageSize_, extStorageSize) };


        // extStorageType Field Functions 
        bool hasExtStorageType() const { return this->extStorageType_ != nullptr;};
        void deleteExtStorageType() { this->extStorageType_ = nullptr;};
        inline string getExtStorageType() const { DARABONBA_PTR_GET_DEFAULT(extStorageType_, "") };
        inline DBCluster& setExtStorageType(string extStorageType) { DARABONBA_PTR_SET_VALUE(extStorageType_, extStorageType) };


        // isExpired Field Functions 
        bool hasIsExpired() const { return this->isExpired_ != nullptr;};
        void deleteIsExpired() { this->isExpired_ = nullptr;};
        inline string getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, "") };
        inline DBCluster& setIsExpired(string isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // scaleOutDisableWriteWindows Field Functions 
        bool hasScaleOutDisableWriteWindows() const { return this->scaleOutDisableWriteWindows_ != nullptr;};
        void deleteScaleOutDisableWriteWindows() { this->scaleOutDisableWriteWindows_ = nullptr;};
        inline string getScaleOutDisableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(scaleOutDisableWriteWindows_, "") };
        inline DBCluster& setScaleOutDisableWriteWindows(string scaleOutDisableWriteWindows) { DARABONBA_PTR_SET_VALUE(scaleOutDisableWriteWindows_, scaleOutDisableWriteWindows) };


        // scaleOutStatus Field Functions 
        bool hasScaleOutStatus() const { return this->scaleOutStatus_ != nullptr;};
        void deleteScaleOutStatus() { this->scaleOutStatus_ = nullptr;};
        inline const DBCluster::ScaleOutStatus & getScaleOutStatus() const { DARABONBA_PTR_GET_CONST(scaleOutStatus_, DBCluster::ScaleOutStatus) };
        inline DBCluster::ScaleOutStatus getScaleOutStatus() { DARABONBA_PTR_GET(scaleOutStatus_, DBCluster::ScaleOutStatus) };
        inline DBCluster& setScaleOutStatus(const DBCluster::ScaleOutStatus & scaleOutStatus) { DARABONBA_PTR_SET_VALUE(scaleOutStatus_, scaleOutStatus) };
        inline DBCluster& setScaleOutStatus(DBCluster::ScaleOutStatus && scaleOutStatus) { DARABONBA_PTR_SET_RVALUE(scaleOutStatus_, scaleOutStatus) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBCluster::Tags) };
        inline DBCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DBCluster::Tags) };
        inline DBCluster& setTags(const DBCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBCluster& setTags(DBCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcCloudInstanceId Field Functions 
        bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
        void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
        inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
        inline DBCluster& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> aliUid_ {};
        // The site ID. Valid values:
        // 
        // *   **26842**: the China site (aliyun.com)
        // *   **26888**: the international site (alibabacloud.com)
        shared_ptr<string> bid_ {};
        // The edition of the cluster. Valid values:
        // 
        // *   **Basic**: Single-replica Edition
        // *   **HighAvailability**: Double-replica Edition
        shared_ptr<string> category_ {};
        // The commodity code of the cluster.
        shared_ptr<string> commodityCode_ {};
        // The VPC endpoint of the cluster.
        shared_ptr<string> connectionString_ {};
        // The version number of the backend management system of ApsaraDB for ClickHouse. Valid values:
        // 
        // *   **v1**
        // *   **v2**
        shared_ptr<string> controlVersion_ {};
        // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
        shared_ptr<string> createTime_ {};
        // The description of the cluster.
        shared_ptr<string> DBClusterDescription_ {};
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The network type of the cluster. Only VPC is supported.
        shared_ptr<string> DBClusterNetworkType_ {};
        // The state of the cluster. Valid values:
        // 
        // *   **Preparing**: The cluster is being prepared.
        // *   **Creating**: The cluster is being created.
        // *   **Running**: The cluster is running.
        // *   **Deleting**: The cluster is being deleted.
        // *   **SCALING_OUT**: The storage capacity of the cluster is being expanded.
        shared_ptr<string> DBClusterStatus_ {};
        // The specifications of the cluster.
        // 
        // *   Valid values when the cluster is of Single-replica Edition: -**S4**: 4 CPU cores and 16 GB of memory -**S8**: 8 CPU cores and 32 GB of memory
        // 
        //     *   **S16**: 16 CPU cores and 64 GB of memory
        //     *   **S32**: 32 CPU cores and 128 GB of memory
        //     *   **S64**: 64 CPU cores and 256 GB of memory
        //     *   **S104**: 104 CPU cores and 384 GB of memory
        // 
        // *   Valid values when the cluster is of Double-replica Edition: -**C4**: 4 CPU cores and 16 GB of memory -**C8**: 8 CPU cores and 32 GB of memory -**C16**: 16 CPU cores and 64 GB of memory -**C32**: 32 CPU cores and 128 GB of memory -**C64**: 64 CPU cores and 256 GB of memory -**C104**: 104 CPU cores and 384 GB of memory
        shared_ptr<string> DBNodeClass_ {};
        // The number of nodes.
        // 
        // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
        // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
        shared_ptr<int64_t> DBNodeCount_ {};
        // The storage capacity of each node. Valid values: 100 to 32000. Unit: GB.
        // 
        // >  This value is a multiple of 100.
        shared_ptr<int64_t> DBNodeStorage_ {};
        // The engine version of the cluster.
        shared_ptr<string> dbVersion_ {};
        // The time when the cluster expired. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
        // 
        // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
        shared_ptr<string> expireTime_ {};
        // The extended storage space.
        shared_ptr<int32_t> extStorageSize_ {};
        // The extended storage type. Valid values:
        // 
        // *   **CloudSSD**: standard SSD.
        // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
        // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
        // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
        // *   **CloudEfficiency**: The cluster uses an ultra disk.
        shared_ptr<string> extStorageType_ {};
        // Indicates whether the cluster has expired. Valid values:
        // 
        // *   **true**: The cluster has expired.
        // *   **false**: The cluster has not expired.
        shared_ptr<string> isExpired_ {};
        // The lock mode of the cluster. Valid values:
        // 
        // *   **Unlock**: The cluster is not locked.
        // *   **ManualLock**: The cluster is manually locked.
        // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
        // *   **LockByRestoration**: The cluster is automatically locked because the cluster is about to be rolled back.
        // *   **LockByDiskQuota**: The cluster is automatically locked because the disk space is exhausted.
        shared_ptr<string> lockMode_ {};
        // The cause why the cluster was locked.
        // 
        // >  If the value of the LockMode parameter is Unlock, an empty string is returned for this parameter.
        shared_ptr<string> lockReason_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **Postpaid**: The cluster uses the pay-as-you-go billing method.
        // *   **Prepaid**: The cluster uses the subscription billing method.
        shared_ptr<string> payType_ {};
        // The HTTP port number.
        shared_ptr<int32_t> port_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the cluster belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The time window during which write operations are stopped for specification changes.
        shared_ptr<string> scaleOutDisableWriteWindows_ {};
        // The status of a data migration task.
        shared_ptr<DBCluster::ScaleOutStatus> scaleOutStatus_ {};
        // The storage type of the cluster. Valid values:
        // 
        // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
        // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
        // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
        // *   **CloudEfficiency**: The cluster uses an ultra disk.
        shared_ptr<string> storageType_ {};
        // The tags.
        shared_ptr<DBCluster::Tags> tags_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the VPC in which the cluster is deployed.
        shared_ptr<string> vpcCloudInstanceId_ {};
        // The ID of the virtual private cloud (VPC) in which the cluster is deployed.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBCluster_ == nullptr; };
      // DBCluster Field Functions 
      bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
      void deleteDBCluster() { this->DBCluster_ = nullptr;};
      inline const vector<DBClusters::DBCluster> & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<DBClusters::DBCluster>) };
      inline vector<DBClusters::DBCluster> getDBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<DBClusters::DBCluster>) };
      inline DBClusters& setDBCluster(const vector<DBClusters::DBCluster> & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
      inline DBClusters& setDBCluster(vector<DBClusters::DBCluster> && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    protected:
      shared_ptr<vector<DBClusters::DBCluster>> DBCluster_ {};
    };

    virtual bool empty() const override { return this->DBClusters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusters Field Functions 
    bool hasDBClusters() const { return this->DBClusters_ != nullptr;};
    void deleteDBClusters() { this->DBClusters_ = nullptr;};
    inline const DescribeDBClustersResponseBody::DBClusters & getDBClusters() const { DARABONBA_PTR_GET_CONST(DBClusters_, DescribeDBClustersResponseBody::DBClusters) };
    inline DescribeDBClustersResponseBody::DBClusters getDBClusters() { DARABONBA_PTR_GET(DBClusters_, DescribeDBClustersResponseBody::DBClusters) };
    inline DescribeDBClustersResponseBody& setDBClusters(const DescribeDBClustersResponseBody::DBClusters & dBClusters) { DARABONBA_PTR_SET_VALUE(DBClusters_, dBClusters) };
    inline DescribeDBClustersResponseBody& setDBClusters(DescribeDBClustersResponseBody::DBClusters && dBClusters) { DARABONBA_PTR_SET_RVALUE(DBClusters_, dBClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The clusters.
    shared_ptr<DescribeDBClustersResponseBody::DBClusters> DBClusters_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
