// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSyncAvailableDBClusterListRequestSourceDBCluster.hpp>
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
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->queryType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->sourceDBCluster_ != nullptr && this->syncPlatform_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSyncAvailableDBClusterListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSyncAvailableDBClusterListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline const vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster> & sourceDBCluster() const { DARABONBA_PTR_GET_CONST(sourceDBCluster_, vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster>) };
    inline vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster> sourceDBCluster() { DARABONBA_PTR_GET(sourceDBCluster_, vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster>) };
    inline DescribeSyncAvailableDBClusterListRequest& setSourceDBCluster(const vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster> & sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };
    inline DescribeSyncAvailableDBClusterListRequest& setSourceDBCluster(vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster> && sourceDBCluster) { DARABONBA_PTR_SET_RVALUE(sourceDBCluster_, sourceDBCluster) };


    // syncPlatform Field Functions 
    bool hasSyncPlatform() const { return this->syncPlatform_ != nullptr;};
    void deleteSyncPlatform() { this->syncPlatform_ = nullptr;};
    inline string syncPlatform() const { DARABONBA_PTR_GET_DEFAULT(syncPlatform_, "") };
    inline DescribeSyncAvailableDBClusterListRequest& setSyncPlatform(string syncPlatform) { DARABONBA_PTR_SET_VALUE(syncPlatform_, syncPlatform) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The query type.
    // 
    // Valid values:
    // 
    // *   Target
    // *   Source
    // 
    // This parameter is required.
    std::shared_ptr<string> queryType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source instances or clusters.
    std::shared_ptr<vector<DescribeSyncAvailableDBClusterListRequestSourceDBCluster>> sourceDBCluster_ = nullptr;
    // The synchronization platform.
    std::shared_ptr<string> syncPlatform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
