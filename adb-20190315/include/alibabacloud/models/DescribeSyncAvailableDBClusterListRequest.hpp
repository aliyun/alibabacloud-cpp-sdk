// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUEST_HPP_
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
  class DescribeSyncAvailableDBClusterListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAvailableDBClusterListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_TO_JSON(SyncPlatform, syncPlatform_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAvailableDBClusterListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_FROM_JSON(SyncPlatform, syncPlatform_);
    };
    DescribeSyncAvailableDBClusterListRequest() = default ;
    DescribeSyncAvailableDBClusterListRequest(const DescribeSyncAvailableDBClusterListRequest &) = default ;
    DescribeSyncAvailableDBClusterListRequest(DescribeSyncAvailableDBClusterListRequest &&) = default ;
    DescribeSyncAvailableDBClusterListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAvailableDBClusterListRequest() = default ;
    DescribeSyncAvailableDBClusterListRequest& operator=(const DescribeSyncAvailableDBClusterListRequest &) = default ;
    DescribeSyncAvailableDBClusterListRequest& operator=(DescribeSyncAvailableDBClusterListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceDBCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceDBCluster& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SourceDBCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
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
        && this->regionId_ == nullptr && this->type_ == nullptr; };
      // clusterIds Field Functions 
      bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
      void deleteClusterIds() { this->clusterIds_ = nullptr;};
      inline string getClusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
      inline SourceDBCluster& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


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
      shared_ptr<string> clusterIds_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The database type of the source instance or cluster.
      // 
      // Valid values:
      // 
      // *   rds: ApsaraDB RDS.
      // *   sls: Simple Log Service.
      // *   polardb: PolarDB.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->queryType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sourceDBCluster_ == nullptr && this->syncPlatform_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSyncAvailableDBClusterListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline const vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster> & getSourceDBCluster() const { DARABONBA_PTR_GET_CONST(sourceDBCluster_, vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster>) };
    inline vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster> getSourceDBCluster() { DARABONBA_PTR_GET(sourceDBCluster_, vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster>) };
    inline DescribeSyncAvailableDBClusterListRequest& setSourceDBCluster(const vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster> & sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };
    inline DescribeSyncAvailableDBClusterListRequest& setSourceDBCluster(vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster> && sourceDBCluster) { DARABONBA_PTR_SET_RVALUE(sourceDBCluster_, sourceDBCluster) };


    // syncPlatform Field Functions 
    bool hasSyncPlatform() const { return this->syncPlatform_ != nullptr;};
    void deleteSyncPlatform() { this->syncPlatform_ = nullptr;};
    inline string getSyncPlatform() const { DARABONBA_PTR_GET_DEFAULT(syncPlatform_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setSyncPlatform(string syncPlatform) { DARABONBA_PTR_SET_VALUE(syncPlatform_, syncPlatform) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The query type.
    // 
    // Valid values:
    // 
    // *   Target
    // *   Source
    // 
    // This parameter is required.
    shared_ptr<string> queryType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source instances or clusters.
    shared_ptr<vector<DescribeSyncAvailableDBClusterListRequest::SourceDBCluster>> sourceDBCluster_ {};
    // The synchronization platform.
    shared_ptr<string> syncPlatform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
