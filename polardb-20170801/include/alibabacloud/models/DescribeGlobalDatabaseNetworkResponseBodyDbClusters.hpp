// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYDBCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYDBCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworkResponseBodyDBClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBodyDBClusters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBodyDBClusters& obj) { 
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
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters(const DescribeGlobalDatabaseNetworkResponseBodyDBClusters &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters(DescribeGlobalDatabaseNetworkResponseBodyDBClusters &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBodyDBClusters() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters& operator=(const DescribeGlobalDatabaseNetworkResponseBodyDBClusters &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClusters& operator=(DescribeGlobalDatabaseNetworkResponseBodyDBClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodes_ == nullptr
        && return this->DBType_ == nullptr && return this->DBVersion_ == nullptr && return this->expireTime_ == nullptr && return this->expired_ == nullptr && return this->payType_ == nullptr
        && return this->regionId_ == nullptr && return this->replicaLag_ == nullptr && return this->role_ == nullptr && return this->serverlessType_ == nullptr && return this->storageUsed_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes> & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes>) };
    inline vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes> DBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes>) };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBNodes(const vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes> & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBNodes(vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes> && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaLag Field Functions 
    bool hasReplicaLag() const { return this->replicaLag_ != nullptr;};
    void deleteReplicaLag() { this->replicaLag_ = nullptr;};
    inline string replicaLag() const { DARABONBA_PTR_GET_DEFAULT(replicaLag_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setReplicaLag(string replicaLag) { DARABONBA_PTR_SET_VALUE(replicaLag_, replicaLag) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline string storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClusters& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


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
    std::shared_ptr<string> category_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The status of the cluster. For more information, see [Cluster status table](https://help.aliyun.com/document_detail/99286.html).
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The node specifications of the cluster.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The nodes of the cluster.
    std::shared_ptr<vector<Models::DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes>> DBNodes_ = nullptr;
    // The database engine type of the cluster. Only MySQL is supported.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine. Only version 8.0 is supported.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The expiration time of the cluster.
    // 
    // >  A specific value is returned only for subscription (**Prepaid**) clusters. No value is returned for pay-as-you-go (**Postpaid**) clusters.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the cluster has expired. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // >  This parameter is returned only for subscription (**Prepaid**) clusters.
    std::shared_ptr<string> expired_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The cross-region data replication latency between the primary cluster and secondary clusters. Unit: seconds.
    std::shared_ptr<string> replicaLag_ = nullptr;
    // The role of the cluster. Valid values:
    // 
    // *   **Primary**: the primary cluster
    // *   **standby**: a secondary cluster
    // 
    // >  A GDN consists of one primary cluster and up to four secondary clusters.
    std::shared_ptr<string> role_ = nullptr;
    // Indicates whether the cluster is a serverless cluster. The value is fixed at AgileServerless.
    // 
    // >  This parameter is returned only for serverless clusters.
    std::shared_ptr<string> serverlessType_ = nullptr;
    // The storage usage of the cluster. Unit: bytes.
    std::shared_ptr<string> storageUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
