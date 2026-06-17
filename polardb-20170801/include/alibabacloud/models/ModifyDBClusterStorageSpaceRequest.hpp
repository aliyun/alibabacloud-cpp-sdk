// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSTORAGESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSTORAGESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterStorageSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterStorageSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterStorageSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
    };
    ModifyDBClusterStorageSpaceRequest() = default ;
    ModifyDBClusterStorageSpaceRequest(const ModifyDBClusterStorageSpaceRequest &) = default ;
    ModifyDBClusterStorageSpaceRequest(ModifyDBClusterStorageSpaceRequest &&) = default ;
    ModifyDBClusterStorageSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterStorageSpaceRequest() = default ;
    ModifyDBClusterStorageSpaceRequest& operator=(const ModifyDBClusterStorageSpaceRequest &) = default ;
    ModifyDBClusterStorageSpaceRequest& operator=(ModifyDBClusterStorageSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->clientToken_ == nullptr && this->cloudProvider_ == nullptr && this->DBClusterId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr && this->promotionCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->storageSpace_ == nullptr && this->subCategory_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBClusterStorageSpaceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterStorageSpaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterStorageSpaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline ModifyDBClusterStorageSpaceRequest& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline ModifyDBClusterStorageSpaceRequest& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


  protected:
    // Specifies whether to automatically use a coupon. Valid values:
    // 
    // - `true` (default): A coupon is automatically used.
    // 
    // - `false`: A coupon is not used.
    shared_ptr<bool> autoUseCoupon_ {};
    // A client-generated token that ensures the idempotence of the request. The token must be unique for each request, case-sensitive, and a maximum of 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies the cloud provider of the instance.
    shared_ptr<string> cloudProvider_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies the latest time to start the scheduled task. Specify the time in UTC in the `YYYY-MM-DDThh:mm:ssZ` format.
    // 
    // > - The latest start time must be at least 30 minutes later than the earliest start time.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the latest start time is `PlannedStartTime + 30 minutes` by default. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task starts no later than `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // Specifies the earliest time to start the scheduled task. Specify the time in UTC in the `YYYY-MM-DDThh:mm:ssZ` format.
    // 
    // > - This parameter takes effect only when `ModifyType` is set to `Upgrade`.
    // >
    // > - The start time can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can set the start time to a value that is between `2021-01-14T09:00:00Z` and `2021-01-15T09:00:00Z`.
    // >
    // > - If you leave this parameter empty, the task runs immediately.
    shared_ptr<string> plannedStartTime_ {};
    // Specifies the promotion code. If you do not specify this parameter, the system uses the default coupon.
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies the new storage space. Unit: GB.
    // 
    // > For PolarDB for MySQL Standard Edition clusters, the storage space must be between 20 GB and 32,000 GB.
    // 
    // This parameter is required.
    shared_ptr<int64_t> storageSpace_ {};
    // Specifies the subcategory of the cluster. Valid values:
    // 
    // - **normal_exclusive**: dedicated
    // 
    // - **normal_general**: general-purpose
    shared_ptr<string> subCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
