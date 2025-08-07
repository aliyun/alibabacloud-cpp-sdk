// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHDBCLUSTERSTORAGEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHDBCLUSTERSTORAGEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RefreshDBClusterStorageUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshDBClusterStorageUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SyncRealTime, syncRealTime_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshDBClusterStorageUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SyncRealTime, syncRealTime_);
    };
    RefreshDBClusterStorageUsageRequest() = default ;
    RefreshDBClusterStorageUsageRequest(const RefreshDBClusterStorageUsageRequest &) = default ;
    RefreshDBClusterStorageUsageRequest(RefreshDBClusterStorageUsageRequest &&) = default ;
    RefreshDBClusterStorageUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshDBClusterStorageUsageRequest() = default ;
    RefreshDBClusterStorageUsageRequest& operator=(const RefreshDBClusterStorageUsageRequest &) = default ;
    RefreshDBClusterStorageUsageRequest& operator=(RefreshDBClusterStorageUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->syncRealTime_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RefreshDBClusterStorageUsageRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RefreshDBClusterStorageUsageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RefreshDBClusterStorageUsageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RefreshDBClusterStorageUsageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // syncRealTime Field Functions 
    bool hasSyncRealTime() const { return this->syncRealTime_ != nullptr;};
    void deleteSyncRealTime() { this->syncRealTime_ = nullptr;};
    inline bool syncRealTime() const { DARABONBA_PTR_GET_DEFAULT(syncRealTime_, false) };
    inline RefreshDBClusterStorageUsageRequest& setSyncRealTime(bool syncRealTime) { DARABONBA_PTR_SET_VALUE(syncRealTime_, syncRealTime) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable real-time synchronization. Valid values:
    // 
    // *   **true**
    // *   **false**: T + 1
    std::shared_ptr<bool> syncRealTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
