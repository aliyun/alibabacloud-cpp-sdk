// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSWITHBACKUPSRESPONSEBODY_HPP_
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
  class DescribeDBClustersWithBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersWithBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersWithBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBClustersWithBackupsResponseBody() = default ;
    DescribeDBClustersWithBackupsResponseBody(const DescribeDBClustersWithBackupsResponseBody &) = default ;
    DescribeDBClustersWithBackupsResponseBody(DescribeDBClustersWithBackupsResponseBody &&) = default ;
    DescribeDBClustersWithBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersWithBackupsResponseBody() = default ;
    DescribeDBClustersWithBackupsResponseBody& operator=(const DescribeDBClustersWithBackupsResponseBody &) = default ;
    DescribeDBClustersWithBackupsResponseBody& operator=(DescribeDBClustersWithBackupsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBType, DBType_);
          DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_TO_JSON(DeletedTime, deletedTime_);
          DARABONBA_PTR_TO_JSON(DeletionLock, deletionLock_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBType, DBType_);
          DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_FROM_JSON(DeletedTime, deletedTime_);
          DARABONBA_PTR_FROM_JSON(DeletionLock, deletionLock_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodeClass_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->deletedTime_ == nullptr && this->deletionLock_ == nullptr && this->engine_ == nullptr
        && this->expireTime_ == nullptr && this->expired_ == nullptr && this->isDeleted_ == nullptr && this->lockMode_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
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


        // deletedTime Field Functions 
        bool hasDeletedTime() const { return this->deletedTime_ != nullptr;};
        void deleteDeletedTime() { this->deletedTime_ = nullptr;};
        inline string getDeletedTime() const { DARABONBA_PTR_GET_DEFAULT(deletedTime_, "") };
        inline DBCluster& setDeletedTime(string deletedTime) { DARABONBA_PTR_SET_VALUE(deletedTime_, deletedTime) };


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


        // isDeleted Field Functions 
        bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
        void deleteIsDeleted() { this->isDeleted_ = nullptr;};
        inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
        inline DBCluster& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


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
        // The time when the cluster was created.
        shared_ptr<string> createTime_ {};
        // The name of the cluster.
        shared_ptr<string> DBClusterDescription_ {};
        // The ID of cluster.
        shared_ptr<string> DBClusterId_ {};
        // The network type of the cluster.
        shared_ptr<string> DBClusterNetworkType_ {};
        // The status of the cluster. Valid values:
        // 
        // *   Creating: The cluster is being created.
        // *   Running: The cluster is running.
        // *   Deleting: The cluster is being released.
        // *   Rebooting: The cluster is restarting.
        // *   DBNodeCreating: The node is being added.
        // *   DBNodeDeleting: The node is being deleted.
        // *   ClassChanging: The specifications of the node are being changed.
        // *   NetAddressCreating: The network connection is being created.
        // *   NetAddressDeleting: The network connection is being deleted.
        // *   NetAddressModifying: The network connection is being modified.
        // *   Deleted: The cluster has been released.
        shared_ptr<string> DBClusterStatus_ {};
        // The specifications of the node.
        shared_ptr<string> DBNodeClass_ {};
        // The type of the database engine.
        shared_ptr<string> DBType_ {};
        // The version of the database engine.
        shared_ptr<string> DBVersion_ {};
        // The time when the cluster was deleted.
        shared_ptr<string> deletedTime_ {};
        // Indicates whether the cluster is locked and can be deleted. Valid values:
        // 
        // *   **0**: The cluster is not locked and can be deleted.
        // *   **1**: The cluster is locked and cannot be deleted.
        shared_ptr<int32_t> deletionLock_ {};
        // The type of the database engine.
        shared_ptr<string> engine_ {};
        // The time when the cluster expires.
        // 
        // > A specific value will be returned only for subscription clusters. For pay-as-you-go clusters, an empty string will be returned.
        shared_ptr<string> expireTime_ {};
        // Indicates whether the cluster has expired.
        // 
        // > A specific value will be returned only for subscription clusters.
        shared_ptr<string> expired_ {};
        // Indicates whether the cluster was released. Valid values:
        // 
        // *   1: released
        // *   0: not released
        shared_ptr<int32_t> isDeleted_ {};
        // The state of the cluster lock. Valid values:
        // 
        // *   **Unlock**: The cluster is not locked.
        // *   **ManualLock**: The cluster is manually locked.
        // *   **LockByExpiration**: The cluster is automatically locked after the cluster expires.
        shared_ptr<string> lockMode_ {};
        // The billing method. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go.
        // *   **Prepaid**: subscription
        shared_ptr<string> payType_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
        // The VPC ID of the cluster.
        shared_ptr<string> vpcId_ {};
        // The ID of the zone in which the instance is located.
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
    inline const DescribeDBClustersWithBackupsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClustersWithBackupsResponseBody::Items) };
    inline DescribeDBClustersWithBackupsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBClustersWithBackupsResponseBody::Items) };
    inline DescribeDBClustersWithBackupsResponseBody& setItems(const DescribeDBClustersWithBackupsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClustersWithBackupsResponseBody& setItems(DescribeDBClustersWithBackupsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersWithBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBClustersWithBackupsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClustersWithBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBClustersWithBackupsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details about the cluster.
    shared_ptr<DescribeDBClustersWithBackupsResponseBody::Items> items_ {};
    // The total number of returned pages.
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
