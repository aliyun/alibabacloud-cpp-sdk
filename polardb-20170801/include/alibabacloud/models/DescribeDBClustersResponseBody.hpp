// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
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
      class DBCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
          DARABONBA_PTR_TO_JSON(AiType, aiType_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBNodeNumber, DBNodeNumber_);
          DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
          DARABONBA_PTR_TO_JSON(DBType, DBType_);
          DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_TO_JSON(DeletionLock, deletionLock_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RemoteMemorySize, remoteMemorySize_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SearchStorageUsed, searchStorageUsed_);
          DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
          DARABONBA_PTR_TO_JSON(StoragePayType, storagePayType_);
          DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
          DARABONBA_PTR_TO_JSON(StrictConsistency, strictConsistency_);
          DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(AiType, aiType_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBNodeNumber, DBNodeNumber_);
          DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
          DARABONBA_PTR_FROM_JSON(DBType, DBType_);
          DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_FROM_JSON(DeletionLock, deletionLock_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RemoteMemorySize, remoteMemorySize_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SearchStorageUsed, searchStorageUsed_);
          DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
          DARABONBA_PTR_FROM_JSON(StoragePayType, storagePayType_);
          DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
          DARABONBA_PTR_FROM_JSON(StrictConsistency, strictConsistency_);
          DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
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
            // The key of the tag.
            shared_ptr<string> key_ {};
            // The value of the tag.
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

        class DBNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
            DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
          };
          friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
          };
          DBNodes() = default ;
          DBNodes(const DBNodes &) = default ;
          DBNodes(DBNodes &&) = default ;
          DBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DBNodes() = default ;
          DBNodes& operator=(const DBNodes &) = default ;
          DBNodes& operator=(DBNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DBNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DBNode& obj) { 
              DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
              DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
              DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
              DARABONBA_PTR_TO_JSON(HotReplicaMode, hotReplicaMode_);
              DARABONBA_PTR_TO_JSON(ImciSwitch, imciSwitch_);
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(Serverless, serverless_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, DBNode& obj) { 
              DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
              DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
              DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
              DARABONBA_PTR_FROM_JSON(HotReplicaMode, hotReplicaMode_);
              DARABONBA_PTR_FROM_JSON(ImciSwitch, imciSwitch_);
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            DBNode() = default ;
            DBNode(const DBNode &) = default ;
            DBNode(DBNode &&) = default ;
            DBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DBNode() = default ;
            DBNode& operator=(const DBNode &) = default ;
            DBNode& operator=(DBNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBNodeClass_ == nullptr
        && this->DBNodeId_ == nullptr && this->DBNodeRole_ == nullptr && this->hotReplicaMode_ == nullptr && this->imciSwitch_ == nullptr && this->regionId_ == nullptr
        && this->serverless_ == nullptr && this->zoneId_ == nullptr; };
            // DBNodeClass Field Functions 
            bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
            void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
            inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
            inline DBNode& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


            // DBNodeId Field Functions 
            bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
            void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
            inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
            inline DBNode& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


            // DBNodeRole Field Functions 
            bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
            void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
            inline string getDBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
            inline DBNode& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


            // hotReplicaMode Field Functions 
            bool hasHotReplicaMode() const { return this->hotReplicaMode_ != nullptr;};
            void deleteHotReplicaMode() { this->hotReplicaMode_ = nullptr;};
            inline string getHotReplicaMode() const { DARABONBA_PTR_GET_DEFAULT(hotReplicaMode_, "") };
            inline DBNode& setHotReplicaMode(string hotReplicaMode) { DARABONBA_PTR_SET_VALUE(hotReplicaMode_, hotReplicaMode) };


            // imciSwitch Field Functions 
            bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
            void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
            inline string getImciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
            inline DBNode& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline DBNode& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // serverless Field Functions 
            bool hasServerless() const { return this->serverless_ != nullptr;};
            void deleteServerless() { this->serverless_ = nullptr;};
            inline string getServerless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, "") };
            inline DBNode& setServerless(string serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline DBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The specifications of the node.
            shared_ptr<string> DBNodeClass_ {};
            // The ID of the node.
            shared_ptr<string> DBNodeId_ {};
            // The role of the node. Valid values:
            // 
            // *   **Writer**: primary node
            // *   **Reader**: read-only node
            // *   **ColumnReader**: column store read-only node
            // *   **AI**: AI node
            shared_ptr<string> DBNodeRole_ {};
            // Indicates whether the hot standby feature is enabled. Valid values:
            // 
            // *   **ON**
            // *   **OFF**
            shared_ptr<string> hotReplicaMode_ {};
            // Indicates whether the In-Memory Column Index (IMCI) feature is enabled. Valid values:
            // 
            // *   **ON**
            // *   **OFF**
            shared_ptr<string> imciSwitch_ {};
            // The region ID of the cluster.
            shared_ptr<string> regionId_ {};
            // Indicates whether the serverless feature is enabled for the node.
            // 
            // *   **ON** indicates that the serverless feature is enabled.
            // *   No value is returned if the serverless feature is disabled.
            shared_ptr<string> serverless_ {};
            // The zone ID of the cluster.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->DBNode_ == nullptr; };
          // DBNode Field Functions 
          bool hasDBNode() const { return this->DBNode_ != nullptr;};
          void deleteDBNode() { this->DBNode_ = nullptr;};
          inline const vector<DBNodes::DBNode> & getDBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<DBNodes::DBNode>) };
          inline vector<DBNodes::DBNode> getDBNode() { DARABONBA_PTR_GET(DBNode_, vector<DBNodes::DBNode>) };
          inline DBNodes& setDBNode(const vector<DBNodes::DBNode> & dBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, dBNode) };
          inline DBNodes& setDBNode(vector<DBNodes::DBNode> && dBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, dBNode) };


        protected:
          shared_ptr<vector<DBNodes::DBNode>> DBNode_ {};
        };

        virtual bool empty() const override { return this->aiType_ == nullptr
        && this->category_ == nullptr && this->cpuCores_ == nullptr && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr
        && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeNumber_ == nullptr && this->DBNodes_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->deletionLock_ == nullptr && this->engine_ == nullptr && this->expireTime_ == nullptr
        && this->expired_ == nullptr && this->hotStandbyCluster_ == nullptr && this->lockMode_ == nullptr && this->memorySize_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->remoteMemorySize_ == nullptr && this->resourceGroupId_ == nullptr && this->searchStorageUsed_ == nullptr && this->serverlessType_ == nullptr
        && this->storagePayType_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->storageUsed_ == nullptr && this->strictConsistency_ == nullptr
        && this->subCategory_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
        // aiType Field Functions 
        bool hasAiType() const { return this->aiType_ != nullptr;};
        void deleteAiType() { this->aiType_ = nullptr;};
        inline string getAiType() const { DARABONBA_PTR_GET_DEFAULT(aiType_, "") };
        inline DBCluster& setAiType(string aiType) { DARABONBA_PTR_SET_VALUE(aiType_, aiType) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // cpuCores Field Functions 
        bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
        void deleteCpuCores() { this->cpuCores_ = nullptr;};
        inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
        inline DBCluster& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


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


        // DBNodeNumber Field Functions 
        bool hasDBNodeNumber() const { return this->DBNodeNumber_ != nullptr;};
        void deleteDBNodeNumber() { this->DBNodeNumber_ = nullptr;};
        inline int32_t getDBNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNumber_, 0) };
        inline DBCluster& setDBNodeNumber(int32_t DBNodeNumber) { DARABONBA_PTR_SET_VALUE(DBNodeNumber_, DBNodeNumber) };


        // DBNodes Field Functions 
        bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
        void deleteDBNodes() { this->DBNodes_ = nullptr;};
        inline const DBCluster::DBNodes & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, DBCluster::DBNodes) };
        inline DBCluster::DBNodes getDBNodes() { DARABONBA_PTR_GET(DBNodes_, DBCluster::DBNodes) };
        inline DBCluster& setDBNodes(const DBCluster::DBNodes & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
        inline DBCluster& setDBNodes(DBCluster::DBNodes && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


        // DBType Field Functions 
        bool hasDBType() const { return this->DBType_ != nullptr;};
        void deleteDBType() { this->DBType_ = nullptr;};
        inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
        inline DBCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


        // DBVersion Field Functions 
        bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
        void deleteDBVersion() { this->DBVersion_ = nullptr;};
        inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
        inline DBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


        // deletionLock Field Functions 
        bool hasDeletionLock() const { return this->deletionLock_ != nullptr;};
        void deleteDeletionLock() { this->deletionLock_ = nullptr;};
        inline int32_t getDeletionLock() const { DARABONBA_PTR_GET_DEFAULT(deletionLock_, 0) };
        inline DBCluster& setDeletionLock(int32_t deletionLock) { DARABONBA_PTR_SET_VALUE(deletionLock_, deletionLock) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
        inline DBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // hotStandbyCluster Field Functions 
        bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
        void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
        inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
        inline DBCluster& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
        inline DBCluster& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remoteMemorySize Field Functions 
        bool hasRemoteMemorySize() const { return this->remoteMemorySize_ != nullptr;};
        void deleteRemoteMemorySize() { this->remoteMemorySize_ = nullptr;};
        inline string getRemoteMemorySize() const { DARABONBA_PTR_GET_DEFAULT(remoteMemorySize_, "") };
        inline DBCluster& setRemoteMemorySize(string remoteMemorySize) { DARABONBA_PTR_SET_VALUE(remoteMemorySize_, remoteMemorySize) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // searchStorageUsed Field Functions 
        bool hasSearchStorageUsed() const { return this->searchStorageUsed_ != nullptr;};
        void deleteSearchStorageUsed() { this->searchStorageUsed_ = nullptr;};
        inline int64_t getSearchStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(searchStorageUsed_, 0L) };
        inline DBCluster& setSearchStorageUsed(int64_t searchStorageUsed) { DARABONBA_PTR_SET_VALUE(searchStorageUsed_, searchStorageUsed) };


        // serverlessType Field Functions 
        bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
        void deleteServerlessType() { this->serverlessType_ = nullptr;};
        inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
        inline DBCluster& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


        // storagePayType Field Functions 
        bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
        void deleteStoragePayType() { this->storagePayType_ = nullptr;};
        inline string getStoragePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
        inline DBCluster& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


        // storageSpace Field Functions 
        bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
        void deleteStorageSpace() { this->storageSpace_ = nullptr;};
        inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
        inline DBCluster& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // storageUsed Field Functions 
        bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
        void deleteStorageUsed() { this->storageUsed_ = nullptr;};
        inline int64_t getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
        inline DBCluster& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


        // strictConsistency Field Functions 
        bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
        void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
        inline string getStrictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
        inline DBCluster& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


        // subCategory Field Functions 
        bool hasSubCategory() const { return this->subCategory_ != nullptr;};
        void deleteSubCategory() { this->subCategory_ = nullptr;};
        inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
        inline DBCluster& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBCluster::Tags) };
        inline DBCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DBCluster::Tags) };
        inline DBCluster& setTags(const DBCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBCluster& setTags(DBCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline DBCluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The type of the AI node. Valid values:
        // 
        // *   SearchNode: search node
        // *   DLNode: AI node
        // 
        // Enumeration values:
        // 
        // *   SearchNode | DLNode: both
        // *   DLNode: AI node
        // *   SearchNode: search node
        shared_ptr<string> aiType_ {};
        // The edition of the cluster. Valid values:
        // 
        // *   **Normal**: Cluster Edition
        // *   **Basic**: Single Node Edition
        // *   **Archive**: X-Engine Edition
        // *   **NormalMultimaster**: Multi-master Cluster (Database/Table) Edition
        shared_ptr<string> category_ {};
        // The number of CPU cores.
        shared_ptr<string> cpuCores_ {};
        // The time when the cluster was created.
        shared_ptr<string> createTime_ {};
        // The description of the cluster.
        shared_ptr<string> DBClusterDescription_ {};
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The network type of the cluster.
        shared_ptr<string> DBClusterNetworkType_ {};
        // The state of the cluster.
        shared_ptr<string> DBClusterStatus_ {};
        // The specifications of the node.
        shared_ptr<string> DBNodeClass_ {};
        // The number of nodes.
        shared_ptr<int32_t> DBNodeNumber_ {};
        // The information about the nodes.
        shared_ptr<DBCluster::DBNodes> DBNodes_ {};
        // The type of the database engine.
        shared_ptr<string> DBType_ {};
        // The version of the database engine.
        shared_ptr<string> DBVersion_ {};
        // Indicates whether the cluster is protected from deletion. Valid values:
        // 
        // *   **0**: The cluster is not protected from deletion.
        // *   **1**: The cluster is protected from deletion.
        // 
        // >  You cannot delete clusters that are protected from deletion.
        shared_ptr<int32_t> deletionLock_ {};
        // The database engine of the cluster.
        shared_ptr<string> engine_ {};
        // The expiration time of the cluster.
        // 
        // >  A specific value is returned only for subscription (**Prepaid**) clusters. For pay-as-you-go (**Postpaid**) clusters, no value is returned.
        shared_ptr<string> expireTime_ {};
        // Indicates whether the cluster has expired. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  A specific value is returned only for subscription (**Prepaid**) clusters.
        shared_ptr<string> expired_ {};
        // Indicates whether the hot standby storage cluster feature is enabled. Valid values:
        // 
        // *   ON
        // *   OFF
        shared_ptr<string> hotStandbyCluster_ {};
        // The lock state of the cluster. Valid values:
        // 
        // *   **Unlock**: The cluster is unlocked.
        // *   **ManualLock**: The cluster is manually locked.
        // *   **LockByExpiration**: The cluster is locked due to cluster expiration.
        shared_ptr<string> lockMode_ {};
        // The memory size for local operations. Unit: MB.
        shared_ptr<string> memorySize_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go
        // *   **Prepaid**: subscription
        shared_ptr<string> payType_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
        // The memory size for distributed operations. Unit: MB.
        shared_ptr<string> remoteMemorySize_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<int64_t> searchStorageUsed_ {};
        // Indicates whether the cluster is a serverless cluster. **AgileServerless** indicates the cluster is a serverless cluster. No value is returned for a common cluster.
        shared_ptr<string> serverlessType_ {};
        // The storage billing method of the cluster. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go
        // *   **Prepaid**: subscription
        shared_ptr<string> storagePayType_ {};
        // The storage that is billed based on the subscription billing method. Unit: bytes.
        shared_ptr<int64_t> storageSpace_ {};
        // The storage type.
        shared_ptr<string> storageType_ {};
        // The used storage. Unit: bytes.
        shared_ptr<int64_t> storageUsed_ {};
        // Indicates whether multi-zone data consistency is enabled for the cluster. Valid values:
        // 
        // *   **ON**: Multi-zone data consistency is enabled. For Standard Edition clusters of Multi-zone Edition, this value is returned.
        // *   **OFF**: Multi-zone data consistency is disabled.
        shared_ptr<string> strictConsistency_ {};
        // The specification type of the compute node. Valid values:
        // 
        // *   **Exclusive**: dedicated.
        // *   **General**: general-purpose.
        shared_ptr<string> subCategory_ {};
        // The information about the tags.
        shared_ptr<DBCluster::Tags> tags_ {};
        // The virtual private cloud (VPC) ID of the cluster.
        shared_ptr<string> vpcId_ {};
        // The vSwitch ID of the cluster.
        shared_ptr<string> vswitchId_ {};
        // The zone ID of the cluster.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBCluster_ == nullptr; };
      // DBCluster Field Functions 
      bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
      void deleteDBCluster() { this->DBCluster_ = nullptr;};
      inline const vector<Items::DBCluster> & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Items::DBCluster>) };
      inline vector<Items::DBCluster> getDBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Items::DBCluster>) };
      inline Items& setDBCluster(const vector<Items::DBCluster> & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
      inline Items& setDBCluster(vector<Items::DBCluster> && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    protected:
      shared_ptr<vector<Items::DBCluster>> DBCluster_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClustersResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClustersResponseBody::Items) };
    inline DescribeDBClustersResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBClustersResponseBody::Items) };
    inline DescribeDBClustersResponseBody& setItems(const DescribeDBClustersResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClustersResponseBody& setItems(DescribeDBClustersResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBClustersResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBClustersResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The information about the clusters.
    shared_ptr<DescribeDBClustersResponseBody::Items> items_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of clusters returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
