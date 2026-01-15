// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODECLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODECLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBNodeClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodeClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeTargetClass, DBNodeTargetClass_);
      DARABONBA_PTR_TO_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubCategory, subCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodeClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeTargetClass, DBNodeTargetClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubCategory, subCategory_);
    };
    ModifyDBNodeClassRequest() = default ;
    ModifyDBNodeClassRequest(const ModifyDBNodeClassRequest &) = default ;
    ModifyDBNodeClassRequest(ModifyDBNodeClassRequest &&) = default ;
    ModifyDBNodeClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodeClassRequest() = default ;
    ModifyDBNodeClassRequest& operator=(const ModifyDBNodeClassRequest &) = default ;
    ModifyDBNodeClassRequest& operator=(ModifyDBNodeClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->clientToken_ == nullptr && this->cloudProvider_ == nullptr && this->DBClusterId_ == nullptr && this->DBNodeTargetClass_ == nullptr && this->DBNodeType_ == nullptr
        && this->modifyType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedFlashingOffTime_ == nullptr
        && this->plannedStartTime_ == nullptr && this->promotionCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->subCategory_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBNodeClassRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBNodeClassRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline ModifyDBNodeClassRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBNodeClassRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeTargetClass Field Functions 
    bool hasDBNodeTargetClass() const { return this->DBNodeTargetClass_ != nullptr;};
    void deleteDBNodeTargetClass() { this->DBNodeTargetClass_ = nullptr;};
    inline string getDBNodeTargetClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeTargetClass_, "") };
    inline ModifyDBNodeClassRequest& setDBNodeTargetClass(string DBNodeTargetClass) { DARABONBA_PTR_SET_VALUE(DBNodeTargetClass_, DBNodeTargetClass) };


    // DBNodeType Field Functions 
    bool hasDBNodeType() const { return this->DBNodeType_ != nullptr;};
    void deleteDBNodeType() { this->DBNodeType_ = nullptr;};
    inline string getDBNodeType() const { DARABONBA_PTR_GET_DEFAULT(DBNodeType_, "") };
    inline ModifyDBNodeClassRequest& setDBNodeType(string DBNodeType) { DARABONBA_PTR_SET_VALUE(DBNodeType_, DBNodeType) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyDBNodeClassRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBNodeClassRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBNodeClassRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBNodeClassRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedFlashingOffTime Field Functions 
    bool hasPlannedFlashingOffTime() const { return this->plannedFlashingOffTime_ != nullptr;};
    void deletePlannedFlashingOffTime() { this->plannedFlashingOffTime_ = nullptr;};
    inline string getPlannedFlashingOffTime() const { DARABONBA_PTR_GET_DEFAULT(plannedFlashingOffTime_, "") };
    inline ModifyDBNodeClassRequest& setPlannedFlashingOffTime(string plannedFlashingOffTime) { DARABONBA_PTR_SET_VALUE(plannedFlashingOffTime_, plannedFlashingOffTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBNodeClassRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBNodeClassRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBNodeClassRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBNodeClassRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline ModifyDBNodeClassRequest& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


  protected:
    shared_ptr<bool> autoUseCoupon_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length. The token is case-sensitive.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> cloudProvider_ {};
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The specifications of all nodes. For more information, see [Specifications of computing nodes](https://help.aliyun.com/document_detail/102542.html).
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeTargetClass_ {};
    // The type of the node. Valid values:
    // 
    // *   RO
    // *   STANDBY
    // *   DLNode
    shared_ptr<string> DBNodeType_ {};
    // The type of the configuration change. Valid values:
    // 
    // *   **Upgrade**
    // *   **Downgrade**
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest start time to upgrade the specifications within the scheduled time period. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > *   The value of this parameter must be at least 30 minutes later than the value of PlannedStartTime.
    // >*   By default, if you specify `PlannedStartTime` but do not specify PlannedEndTime, the latest start time of the task is set to `Value of PlannedEndTime + 30 minutes`. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and you do not specify PlannedEndTime, the latest start time of the task is `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    shared_ptr<string> plannedFlashingOffTime_ {};
    // The earliest start time to upgrade the specifications within the scheduled time period. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // >*   This parameter takes effect only when `ModifyType` is set to `Upgrade`.
    // >*   The earliest start time of the task can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a point in the time that ranges from `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // >*   If this parameter is left empty, the upgrade task is immediately performed.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The category of the cluster. Valid values:
    // 
    // *   **normal_exclusive**: dedicated.
    // *   **normal_general**: genera-purpose.
    shared_ptr<string> subCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
