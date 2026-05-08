// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class ModifySyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_TO_JSON(SyncPlatform, syncPlatform_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_FROM_JSON(SyncPlatform, syncPlatform_);
    };
    ModifySyncJobRequest() = default ;
    ModifySyncJobRequest(const ModifySyncJobRequest &) = default ;
    ModifySyncJobRequest(ModifySyncJobRequest &&) = default ;
    ModifySyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySyncJobRequest() = default ;
    ModifySyncJobRequest& operator=(const ModifySyncJobRequest &) = default ;
    ModifySyncJobRequest& operator=(ModifySyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceDBCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceDBCluster& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(OperateType, operateType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SourceDBCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SourceDBCluster() = default ;
      SourceDBCluster(const SourceDBCluster &) = default ;
      SourceDBCluster(SourceDBCluster &&) = default ;
      SourceDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceDBCluster() = default ;
      SourceDBCluster& operator=(const SourceDBCluster &) = default ;
      SourceDBCluster& operator=(SourceDBCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterIds_ == nullptr
        && this->jobId_ == nullptr && this->operateType_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr; };
      // clusterIds Field Functions 
      bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
      void deleteClusterIds() { this->clusterIds_ = nullptr;};
      inline string getClusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
      inline SourceDBCluster& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SourceDBCluster& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // operateType Field Functions 
      bool hasOperateType() const { return this->operateType_ != nullptr;};
      void deleteOperateType() { this->operateType_ = nullptr;};
      inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
      inline SourceDBCluster& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SourceDBCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the source instance or cluster. Separate multiple IDs with commas (,).
      // 
      // This parameter is required.
      shared_ptr<string> clusterIds_ {};
      // The ID of the synchronization job.
      shared_ptr<string> jobId_ {};
      // The operation type.
      // 
      // Valid values:
      // 
      // *   Create
      // *   Modify
      // 
      // This parameter is required.
      shared_ptr<string> operateType_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
      // The source database type.
      // 
      // Valid values:
      // 
      // *   rds: ApsaraDB RDS.
      // *   sls: Simple Log Service.
      // *   polardb: PolarDB.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sourceDBCluster_ == nullptr && this->syncPlatform_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifySyncJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySyncJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySyncJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySyncJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySyncJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySyncJobRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline const vector<ModifySyncJobRequest::SourceDBCluster> & getSourceDBCluster() const { DARABONBA_PTR_GET_CONST(sourceDBCluster_, vector<ModifySyncJobRequest::SourceDBCluster>) };
    inline vector<ModifySyncJobRequest::SourceDBCluster> getSourceDBCluster() { DARABONBA_PTR_GET(sourceDBCluster_, vector<ModifySyncJobRequest::SourceDBCluster>) };
    inline ModifySyncJobRequest& setSourceDBCluster(const vector<ModifySyncJobRequest::SourceDBCluster> & sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };
    inline ModifySyncJobRequest& setSourceDBCluster(vector<ModifySyncJobRequest::SourceDBCluster> && sourceDBCluster) { DARABONBA_PTR_SET_RVALUE(sourceDBCluster_, sourceDBCluster) };


    // syncPlatform Field Functions 
    bool hasSyncPlatform() const { return this->syncPlatform_ != nullptr;};
    void deleteSyncPlatform() { this->syncPlatform_ = nullptr;};
    inline string getSyncPlatform() const { DARABONBA_PTR_GET_DEFAULT(syncPlatform_, "") };
    inline ModifySyncJobRequest& setSyncPlatform(string syncPlatform) { DARABONBA_PTR_SET_VALUE(syncPlatform_, syncPlatform) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition clusters within a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source instances or clusters.
    shared_ptr<vector<ModifySyncJobRequest::SourceDBCluster>> sourceDBCluster_ {};
    // The synchronization platform.
    shared_ptr<string> syncPlatform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
