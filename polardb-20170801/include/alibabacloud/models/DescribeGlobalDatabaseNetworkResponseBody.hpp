// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
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
  class DescribeGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_TO_JSON(GlobalDomainName, globalDomainName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_FROM_JSON(GlobalDomainName, globalDomainName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeGlobalDatabaseNetworkResponseBody() = default ;
    DescribeGlobalDatabaseNetworkResponseBody(const DescribeGlobalDatabaseNetworkResponseBody &) = default ;
    DescribeGlobalDatabaseNetworkResponseBody(DescribeGlobalDatabaseNetworkResponseBody &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBody() = default ;
    DescribeGlobalDatabaseNetworkResponseBody& operator=(const DescribeGlobalDatabaseNetworkResponseBody &) = default ;
    DescribeGlobalDatabaseNetworkResponseBody& operator=(DescribeGlobalDatabaseNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(GDNVersion, GDNVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(GDNVersion, GDNVersion_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->GDNVersion_ == nullptr; };
      // GDNVersion Field Functions 
      bool hasGDNVersion() const { return this->GDNVersion_ != nullptr;};
      void deleteGDNVersion() { this->GDNVersion_ = nullptr;};
      inline string getGDNVersion() const { DARABONBA_PTR_GET_DEFAULT(GDNVersion_, "") };
      inline Labels& setGDNVersion(string GDNVersion) { DARABONBA_PTR_SET_VALUE(GDNVersion_, GDNVersion) };


    protected:
      shared_ptr<string> GDNVersion_ {};
    };

    class DBClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusters& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReplicaLag, replicaLag_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReplicaLag, replicaLag_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
        DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
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
      class DBNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
          DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
          DARABONBA_PTR_TO_JSON(FailoverPriority, failoverPriority_);
          DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
          DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
          DARABONBA_PTR_FROM_JSON(FailoverPriority, failoverPriority_);
          DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->DBNodeClass_ == nullptr && this->DBNodeId_ == nullptr && this->DBNodeRole_ == nullptr && this->DBNodeStatus_ == nullptr && this->failoverPriority_ == nullptr
        && this->maxConnections_ == nullptr && this->maxIOPS_ == nullptr && this->zoneId_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBNodeClass Field Functions 
        bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
        void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
        inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
        inline DBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline DBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


        // DBNodeRole Field Functions 
        bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
        void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
        inline string getDBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
        inline DBNodes& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


        // DBNodeStatus Field Functions 
        bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
        void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
        inline string getDBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
        inline DBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


        // failoverPriority Field Functions 
        bool hasFailoverPriority() const { return this->failoverPriority_ != nullptr;};
        void deleteFailoverPriority() { this->failoverPriority_ = nullptr;};
        inline int32_t getFailoverPriority() const { DARABONBA_PTR_GET_DEFAULT(failoverPriority_, 0) };
        inline DBNodes& setFailoverPriority(int32_t failoverPriority) { DARABONBA_PTR_SET_VALUE(failoverPriority_, failoverPriority) };


        // maxConnections Field Functions 
        bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
        void deleteMaxConnections() { this->maxConnections_ = nullptr;};
        inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
        inline DBNodes& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


        // maxIOPS Field Functions 
        bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
        void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
        inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
        inline DBNodes& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the node was created.
        shared_ptr<string> creationTime_ {};
        // The specifications of the node.
        shared_ptr<string> DBNodeClass_ {};
        // The node ID.
        shared_ptr<string> DBNodeId_ {};
        // The role of the node. Valid values:
        // 
        // *   **Writer**: the primary node
        // *   **Reader**: a read-only node
        shared_ptr<string> DBNodeRole_ {};
        // The status of the node. Valid values:
        // 
        // *   **Creating**: The node is being created.
        // *   **Running**: The node is running.
        // *   **Deleting**: The node is being deleted.
        // *   **Rebooting**: The node is restarting.
        // *   **ClassChanging**: The specifications of the node are being changed.
        // *   **NetAddressCreating**: The network connection is being created.
        // *   **NetAddressDeleting**: The network connection is being deleted.
        // *   **NetAddressModifying**: The network connection is being modified.
        // *   **MinorVersionUpgrading**: The minor version of the node is being updated.
        // *   **Maintaining**: The node is being maintained.
        // *   **Switching**: A failover is being performed.
        shared_ptr<string> DBNodeStatus_ {};
        // The failover priority. Each node is assigned a failover priority. The failover priority determines which node is selected as the primary node when a failover occurs. A larger value indicates a higher priority. Valid values: 1 to 15.
        shared_ptr<int32_t> failoverPriority_ {};
        // The maximum number of concurrent connections.
        shared_ptr<int32_t> maxConnections_ {};
        // The maximum input/output operations per second (IOPS).
        shared_ptr<int32_t> maxIOPS_ {};
        // The zone ID of the node.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodes_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->replicaLag_ == nullptr && this->role_ == nullptr && this->serverlessType_ == nullptr && this->storageUsed_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DBClusters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // DBClusterDescription Field Functions 
      bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
      void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
      inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
      inline DBClusters& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline DBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBClusterStatus Field Functions 
      bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
      void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
      inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
      inline DBClusters& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBClusters& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodes Field Functions 
      bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
      void deleteDBNodes() { this->DBNodes_ = nullptr;};
      inline const vector<DBClusters::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DBClusters::DBNodes>) };
      inline vector<DBClusters::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DBClusters::DBNodes>) };
      inline DBClusters& setDBNodes(const vector<DBClusters::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
      inline DBClusters& setDBNodes(vector<DBClusters::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline DBClusters& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // DBVersion Field Functions 
      bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
      void deleteDBVersion() { this->DBVersion_ = nullptr;};
      inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
      inline DBClusters& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DBClusters& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
      inline DBClusters& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DBClusters& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // replicaLag Field Functions 
      bool hasReplicaLag() const { return this->replicaLag_ != nullptr;};
      void deleteReplicaLag() { this->replicaLag_ = nullptr;};
      inline string getReplicaLag() const { DARABONBA_PTR_GET_DEFAULT(replicaLag_, "") };
      inline DBClusters& setReplicaLag(string replicaLag) { DARABONBA_PTR_SET_VALUE(replicaLag_, replicaLag) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline DBClusters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // serverlessType Field Functions 
      bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
      void deleteServerlessType() { this->serverlessType_ = nullptr;};
      inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
      inline DBClusters& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


      // storageUsed Field Functions 
      bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
      void deleteStorageUsed() { this->storageUsed_ = nullptr;};
      inline string getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
      inline DBClusters& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    protected:
      // The edition of the cluster. Valid values:
      // 
      // Normal: Cluster Edition Basic: Single Node Edition Archive: X-Engine Edition NormalMultimaster: Multi-master Cluster Edition SENormal: Standard Edition
      // 
      // > 
      // 
      // *   PolarDB for PostgreSQL clusters that run the PostgreSQL 11 database engine do not support Single Node Edition.
      // 
      // *   PolarDB for MySQL 8.0 and 5.7 clusters, and PolarDB for PostgreSQL clusters that run the PostgreSQL 14 database engine support Standard Edition.
      // 
      // *   PolarDB for MySQL 8.0 clusters support X-Engine Edition and Multi-master Cluster Edition.
      shared_ptr<string> category_ {};
      // The description of the cluster.
      shared_ptr<string> DBClusterDescription_ {};
      // The ID of the cluster.
      shared_ptr<string> DBClusterId_ {};
      // The status of the cluster. For more information, see [Cluster status table](https://help.aliyun.com/document_detail/99286.html).
      shared_ptr<string> DBClusterStatus_ {};
      // The node specifications of the cluster.
      shared_ptr<string> DBNodeClass_ {};
      // The nodes of the cluster.
      shared_ptr<vector<DBClusters::DBNodes>> DBNodes_ {};
      // The database engine type of the cluster. Only MySQL is supported.
      shared_ptr<string> DBType_ {};
      // The version of the database engine. Only version 8.0 is supported.
      shared_ptr<string> DBVersion_ {};
      // The expiration time of the cluster.
      // 
      // >  A specific value is returned only for subscription (**Prepaid**) clusters. No value is returned for pay-as-you-go (**Postpaid**) clusters.
      shared_ptr<string> expireTime_ {};
      // Indicates whether the cluster has expired. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      // 
      // >  This parameter is returned only for subscription (**Prepaid**) clusters.
      shared_ptr<string> expired_ {};
      // The billing method of the cluster. Valid values:
      // 
      // *   **Postpaid**: pay-as-you-go
      // *   **Prepaid**: subscription
      shared_ptr<string> payType_ {};
      // The region ID of the cluster.
      shared_ptr<string> regionId_ {};
      // The cross-region data replication latency between the primary cluster and secondary clusters. Unit: seconds.
      shared_ptr<string> replicaLag_ {};
      // The role of the cluster. Valid values:
      // 
      // *   **Primary**: the primary cluster
      // *   **standby**: a secondary cluster
      // 
      // >  A GDN consists of one primary cluster and up to four secondary clusters.
      shared_ptr<string> role_ {};
      // Indicates whether the cluster is a serverless cluster. The value is fixed at AgileServerless.
      // 
      // >  This parameter is returned only for serverless clusters.
      shared_ptr<string> serverlessType_ {};
      // The storage usage of the cluster. Unit: bytes.
      shared_ptr<string> storageUsed_ {};
    };

    class Connections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connections& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Connections& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      Connections() = default ;
      Connections(const Connections &) = default ;
      Connections(Connections &&) = default ;
      Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connections() = default ;
      Connections& operator=(const Connections &) = default ;
      Connections& operator=(Connections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->netType_ == nullptr && this->port_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Connections& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline Connections& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Connections& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The endpoint URL of the database service.
      shared_ptr<string> connectionString_ {};
      // The network type for the database connection.
      shared_ptr<string> netType_ {};
      // The port number for the database connection.
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->connections_ == nullptr
        && this->createTime_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusters_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr
        && this->GDNDescription_ == nullptr && this->GDNId_ == nullptr && this->GDNStatus_ == nullptr && this->globalDomainName_ == nullptr && this->labels_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<DescribeGlobalDatabaseNetworkResponseBody::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<DescribeGlobalDatabaseNetworkResponseBody::Connections>) };
    inline vector<DescribeGlobalDatabaseNetworkResponseBody::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<DescribeGlobalDatabaseNetworkResponseBody::Connections>) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setConnections(const vector<DescribeGlobalDatabaseNetworkResponseBody::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setConnections(vector<DescribeGlobalDatabaseNetworkResponseBody::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusters Field Functions 
    bool hasDBClusters() const { return this->DBClusters_ != nullptr;};
    void deleteDBClusters() { this->DBClusters_ = nullptr;};
    inline const vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters> & getDBClusters() const { DARABONBA_PTR_GET_CONST(DBClusters_, vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters>) };
    inline vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters> getDBClusters() { DARABONBA_PTR_GET(DBClusters_, vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters>) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusters(const vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters> & dBClusters) { DARABONBA_PTR_SET_VALUE(DBClusters_, dBClusters) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusters(vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters> && dBClusters) { DARABONBA_PTR_SET_RVALUE(DBClusters_, dBClusters) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // GDNDescription Field Functions 
    bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
    void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
    inline string getGDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string getGDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // GDNStatus Field Functions 
    bool hasGDNStatus() const { return this->GDNStatus_ != nullptr;};
    void deleteGDNStatus() { this->GDNStatus_ = nullptr;};
    inline string getGDNStatus() const { DARABONBA_PTR_GET_DEFAULT(GDNStatus_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNStatus(string GDNStatus) { DARABONBA_PTR_SET_VALUE(GDNStatus_, GDNStatus) };


    // globalDomainName Field Functions 
    bool hasGlobalDomainName() const { return this->globalDomainName_ != nullptr;};
    void deleteGlobalDomainName() { this->globalDomainName_ = nullptr;};
    inline string getGlobalDomainName() const { DARABONBA_PTR_GET_DEFAULT(globalDomainName_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGlobalDomainName(string globalDomainName) { DARABONBA_PTR_SET_VALUE(globalDomainName_, globalDomainName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const DescribeGlobalDatabaseNetworkResponseBody::Labels & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, DescribeGlobalDatabaseNetworkResponseBody::Labels) };
    inline DescribeGlobalDatabaseNetworkResponseBody::Labels getLabels() { DARABONBA_PTR_GET(labels_, DescribeGlobalDatabaseNetworkResponseBody::Labels) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setLabels(const DescribeGlobalDatabaseNetworkResponseBody::Labels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setLabels(DescribeGlobalDatabaseNetworkResponseBody::Labels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The information about the connection to the cluster.
    shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBody::Connections>> connections_ {};
    // The time at which the GDN was created.
    shared_ptr<string> createTime_ {};
    // The ID of the cluster.
    shared_ptr<string> DBClusterId_ {};
    // The clusters in the GDN.
    shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBody::DBClusters>> DBClusters_ {};
    // The type of the database engine. Only MySQL is supported.
    shared_ptr<string> DBType_ {};
    // The version of the database engine. Only version 8.0 is supported.
    shared_ptr<string> DBVersion_ {};
    // The description of the GDN. The description must meet the following requirements:
    // 
    // *   It cannot start with `http://` or `https://`.
    // *   It must start with a letter.
    // *   It can contain letters, digits, underscores (_), and hyphens (-).
    // *   It must be 2 to 126 characters in length.
    shared_ptr<string> GDNDescription_ {};
    // The ID of the GDN.
    shared_ptr<string> GDNId_ {};
    // The status of the GDN. Valid values:
    // 
    // *   **Creating**: The GDN is being created.
    // *   **active**: The GDN is running.
    // *   **deleting**: The GDN is being deleted.
    // *   **locked**: The GDN is locked. If the GDN is locked, you cannot perform operations on clusters in the GDN.
    // *   **removing_member**: The secondary cluster is being removed from the GDN.
    shared_ptr<string> GDNStatus_ {};
    // The global domain name.
    shared_ptr<string> globalDomainName_ {};
    shared_ptr<DescribeGlobalDatabaseNetworkResponseBody::Labels> labels_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
