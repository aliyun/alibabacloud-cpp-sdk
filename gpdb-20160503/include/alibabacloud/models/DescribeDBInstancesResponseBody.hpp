// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
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
        DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
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
      class DBInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstance& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceCategory, DBInstanceCategory_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceMode, DBInstanceMode_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(InstanceDeployType, instanceDeployType_);
          DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MasterNodeNum, masterNodeNum_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(ProdType, prodType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
          DARABONBA_PTR_TO_JSON(ServerlessMode, serverlessMode_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceCategory, DBInstanceCategory_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceMode, DBInstanceMode_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(InstanceDeployType, instanceDeployType_);
          DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MasterNodeNum, masterNodeNum_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(ProdType, prodType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
          DARABONBA_PTR_FROM_JSON(ServerlessMode, serverlessMode_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBInstance() = default ;
        DBInstance(const DBInstance &) = default ;
        DBInstance(DBInstance &&) = default ;
        DBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstance() = default ;
        DBInstance& operator=(const DBInstance &) = default ;
        DBInstance& operator=(DBInstance &&) = default ;
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
            // The key of tag N.
            shared_ptr<string> key_ {};
            // The value of tag N.
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

        virtual bool empty() const override { return this->connectionMode_ == nullptr
        && this->createTime_ == nullptr && this->DBInstanceCategory_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceMode_ == nullptr
        && this->DBInstanceNetType_ == nullptr && this->DBInstanceStatus_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr
        && this->instanceDeployType_ == nullptr && this->instanceNetworkType_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->masterNodeNum_ == nullptr
        && this->payType_ == nullptr && this->prodType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->segNodeNum_ == nullptr
        && this->serverlessMode_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // connectionMode Field Functions 
        bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
        void deleteConnectionMode() { this->connectionMode_ = nullptr;};
        inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
        inline DBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBInstanceCategory Field Functions 
        bool hasDBInstanceCategory() const { return this->DBInstanceCategory_ != nullptr;};
        void deleteDBInstanceCategory() { this->DBInstanceCategory_ = nullptr;};
        inline string getDBInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategory_, "") };
        inline DBInstance& setDBInstanceCategory(string DBInstanceCategory) { DARABONBA_PTR_SET_VALUE(DBInstanceCategory_, DBInstanceCategory) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceMode Field Functions 
        bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
        void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
        inline string getDBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
        inline DBInstance& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


        // DBInstanceNetType Field Functions 
        bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
        void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
        inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
        inline DBInstance& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // instanceDeployType Field Functions 
        bool hasInstanceDeployType() const { return this->instanceDeployType_ != nullptr;};
        void deleteInstanceDeployType() { this->instanceDeployType_ = nullptr;};
        inline string getInstanceDeployType() const { DARABONBA_PTR_GET_DEFAULT(instanceDeployType_, "") };
        inline DBInstance& setInstanceDeployType(string instanceDeployType) { DARABONBA_PTR_SET_VALUE(instanceDeployType_, instanceDeployType) };


        // instanceNetworkType Field Functions 
        bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
        void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
        inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
        inline DBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // masterNodeNum Field Functions 
        bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
        void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
        inline int32_t getMasterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, 0) };
        inline DBInstance& setMasterNodeNum(int32_t masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // prodType Field Functions 
        bool hasProdType() const { return this->prodType_ != nullptr;};
        void deleteProdType() { this->prodType_ = nullptr;};
        inline string getProdType() const { DARABONBA_PTR_GET_DEFAULT(prodType_, "") };
        inline DBInstance& setProdType(string prodType) { DARABONBA_PTR_SET_VALUE(prodType_, prodType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // segNodeNum Field Functions 
        bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
        void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
        inline string getSegNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, "") };
        inline DBInstance& setSegNodeNum(string segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


        // serverlessMode Field Functions 
        bool hasServerlessMode() const { return this->serverlessMode_ != nullptr;};
        void deleteServerlessMode() { this->serverlessMode_ = nullptr;};
        inline string getServerlessMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessMode_, "") };
        inline DBInstance& setServerlessMode(string serverlessMode) { DARABONBA_PTR_SET_VALUE(serverlessMode_, serverlessMode) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
        inline DBInstance& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBInstance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBInstance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBInstance::Tags) };
        inline DBInstance::Tags getTags() { DARABONBA_PTR_GET(tags_, DBInstance::Tags) };
        inline DBInstance& setTags(const DBInstance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBInstance& setTags(DBInstance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // An invalid parameter. It is no longer returned when you call this operation.
        // 
        // You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/86910.html) operation to query the access mode of an instance.
        shared_ptr<string> connectionMode_ {};
        // The time when the instance was created. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The edition of the instance. Valid values:
        // 
        // *   **Basic**: Basic Edition.
        // *   **HighAvailability**: High-availability Edition.
        // *   **Finance**: Enterprise Edition.
        shared_ptr<string> DBInstanceCategory_ {};
        // The description of the instance.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The resource type of the instance. Valid values:
        // 
        // *   **Serverless**: Serverless mode.
        // *   **StorageElastic**: elastic storage mode.
        // *   **Classic**: reserved storage mode.
        shared_ptr<string> DBInstanceMode_ {};
        // The type of the network interface card (NIC) that is used by the instance. Valid values:
        // 
        // *   **0**: Internet.
        // *   **1**: internal network.
        // *   **2**: VPC.
        shared_ptr<string> DBInstanceNetType_ {};
        // The status of the instance. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/86944.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version of the instance.
        shared_ptr<string> engineVersion_ {};
        // The expiration time of the instance. The time is displayed in UTC.
        // 
        // >  The expiration time of a pay-as-you-go instance is `2999-09-08T16:00:00Z`.
        shared_ptr<string> expireTime_ {};
        // The resource type of the instance. Valid values:
        // 
        // *   **cluster**: Serverless mode or elastic storage mode.
        // *   **replicaSet**: reserved storage mode.
        shared_ptr<string> instanceDeployType_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**: classic network.
        // *   **VPC**: VPC.
        shared_ptr<string> instanceNetworkType_ {};
        // The lock mode of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
        // *   **LockByRestoration**: The instance is automatically locked due to instance restoration.
        // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage.
        // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked when the disk space is full.
        shared_ptr<string> lockMode_ {};
        // The reason why the instance is locked. Valid values:
        // 
        // *   **0**: The instance is not locked.
        // *   **1**: The instance is manually locked.
        // *   **2**: The instance is automatically locked due to instance expiration.
        // *   **3**: The instance is automatically locked due to instance restoration.
        // *   **4**: The instance is automatically locked due to exhausted storage.
        // 
        // >  If the instance is in reserved storage mode and is not locked, null is returned.
        shared_ptr<string> lockReason_ {};
        // The number of coordinator nodes.
        shared_ptr<int32_t> masterNodeNum_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go.
        // *   **Prepaid**: subscription.
        shared_ptr<string> payType_ {};
        // product type
        shared_ptr<string> prodType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The number of compute nodes.
        shared_ptr<string> segNodeNum_ {};
        // The type of the Serverless mode. Valid values:
        // 
        // *   **Manual**: manual scheduling.
        // *   **Auto**: automatic scheduling.
        // 
        // >  This parameter is returned only for instances in Serverless mode.
        shared_ptr<string> serverlessMode_ {};
        // The storage capacity of the instance. Unit: GB.
        shared_ptr<string> storageSize_ {};
        // The storage type of the instance. Valid values:
        // 
        // *   **cloud_essd**: enhanced SSD (ESSD).
        // *   **cloud_efficiency**: ultra disk.
        shared_ptr<string> storageType_ {};
        // The tags that are added to the instance.
        shared_ptr<DBInstance::Tags> tags_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The VPC ID of the instance.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstance_ == nullptr; };
      // DBInstance Field Functions 
      bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
      void deleteDBInstance() { this->DBInstance_ = nullptr;};
      inline const vector<Items::DBInstance> & getDBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Items::DBInstance>) };
      inline vector<Items::DBInstance> getDBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Items::DBInstance>) };
      inline Items& setDBInstance(const vector<Items::DBInstance> & dBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, dBInstance) };
      inline Items& setDBInstance(vector<Items::DBInstance> && dBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, dBInstance) };


    protected:
      shared_ptr<vector<Items::DBInstance>> DBInstance_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesResponseBody::Items) };
    inline DescribeDBInstancesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesResponseBody::Items) };
    inline DescribeDBInstancesResponseBody& setItems(const DescribeDBInstancesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesResponseBody& setItems(DescribeDBInstancesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried instances.
    shared_ptr<DescribeDBInstancesResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
