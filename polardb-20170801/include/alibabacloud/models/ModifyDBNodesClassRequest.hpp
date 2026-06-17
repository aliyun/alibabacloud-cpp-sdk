// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSREQUEST_HPP_
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
  class ModifyDBNodesClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodesClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
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
    friend void from_json(const Darabonba::Json& j, ModifyDBNodesClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
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
    ModifyDBNodesClassRequest() = default ;
    ModifyDBNodesClassRequest(const ModifyDBNodesClassRequest &) = default ;
    ModifyDBNodesClassRequest(ModifyDBNodesClassRequest &&) = default ;
    ModifyDBNodesClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodesClassRequest() = default ;
    ModifyDBNodesClassRequest& operator=(const ModifyDBNodesClassRequest &) = default ;
    ModifyDBNodesClassRequest& operator=(ModifyDBNodesClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNode& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
      };
      friend void from_json(const Darabonba::Json& j, DBNode& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
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
      virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->targetClass_ == nullptr; };
      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline DBNode& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // targetClass Field Functions 
      bool hasTargetClass() const { return this->targetClass_ != nullptr;};
      void deleteTargetClass() { this->targetClass_ = nullptr;};
      inline string getTargetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
      inline DBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


    protected:
      // The ID of the cluster node.
      // 
      // > If you specify this parameter, you must also specify DBNode.N.TargetClass. N represents the index of the node in the request, starting from 1.
      shared_ptr<string> DBNodeId_ {};
      // The target specifications of the node. For more information about node specifications, see [compute node specifications](https://help.aliyun.com/document_detail/102542.html).
      // 
      // > If you specify this parameter, you must also specify DBNode.N.DBNodeId. N represents the index of the node in the request, starting from 1.
      shared_ptr<string> targetClass_ {};
    };

    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->clientToken_ == nullptr && this->cloudProvider_ == nullptr && this->DBClusterId_ == nullptr && this->DBNode_ == nullptr && this->modifyType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedFlashingOffTime_ == nullptr && this->plannedStartTime_ == nullptr
        && this->promotionCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->subCategory_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBNodesClassRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBNodesClassRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline ModifyDBNodesClassRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBNodesClassRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<ModifyDBNodesClassRequest::DBNode> & getDBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<ModifyDBNodesClassRequest::DBNode>) };
    inline vector<ModifyDBNodesClassRequest::DBNode> getDBNode() { DARABONBA_PTR_GET(DBNode_, vector<ModifyDBNodesClassRequest::DBNode>) };
    inline ModifyDBNodesClassRequest& setDBNode(const vector<ModifyDBNodesClassRequest::DBNode> & dBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, dBNode) };
    inline ModifyDBNodesClassRequest& setDBNode(vector<ModifyDBNodesClassRequest::DBNode> && dBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, dBNode) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyDBNodesClassRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBNodesClassRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBNodesClassRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBNodesClassRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedFlashingOffTime Field Functions 
    bool hasPlannedFlashingOffTime() const { return this->plannedFlashingOffTime_ != nullptr;};
    void deletePlannedFlashingOffTime() { this->plannedFlashingOffTime_ = nullptr;};
    inline string getPlannedFlashingOffTime() const { DARABONBA_PTR_GET_DEFAULT(plannedFlashingOffTime_, "") };
    inline ModifyDBNodesClassRequest& setPlannedFlashingOffTime(string plannedFlashingOffTime) { DARABONBA_PTR_SET_VALUE(plannedFlashingOffTime_, plannedFlashingOffTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBNodesClassRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBNodesClassRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBNodesClassRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBNodesClassRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subCategory Field Functions 
    bool hasSubCategory() const { return this->subCategory_ != nullptr;};
    void deleteSubCategory() { this->subCategory_ = nullptr;};
    inline string getSubCategory() const { DARABONBA_PTR_GET_DEFAULT(subCategory_, "") };
    inline ModifyDBNodesClassRequest& setSubCategory(string subCategory) { DARABONBA_PTR_SET_VALUE(subCategory_, subCategory) };


  protected:
    // Specifies whether to automatically apply a coupon. Valid values:
    // 
    // - true (Default): A coupon is automatically applied.
    // 
    // - false: A coupon is not applied.
    shared_ptr<bool> autoUseCoupon_ {};
    // A client-generated token to ensure request idempotence. This token must be unique for each request and must be a case-sensitive string of up to 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The cloud provider of the instance.
    shared_ptr<string> cloudProvider_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The list of cluster nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyDBNodesClassRequest::DBNode>> DBNode_ {};
    // The modification type. Valid values:
    // 
    // - **Upgrade**: Upgrades the specifications.
    // 
    // - **Downgrade**: Downgrades the specifications.
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest time to begin the scheduled task. Specify the time in UTC using the `YYYY-MM-DDThh:mm:ssZ` format.
    // 
    // > - The latest start time must be at least 30 minutes later than the earliest start time.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the task starts within 30 minutes of the `PlannedStartTime`. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task will start by `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The planned time for the transient disconnection.
    shared_ptr<string> plannedFlashingOffTime_ {};
    // The earliest time to begin the scheduled upgrade of the node specifications. Specify the time in UTC using the `YYYY-MM-DDThh:mm:ssZ` format.
    // 
    // > - This parameter takes effect only when `ModifyType` is set to `Upgrade`.
    // >
    // > - The specified time must be within the next 24 hours.
    // >
    // > - If this parameter is not specified, the upgrade task runs immediately.
    shared_ptr<string> plannedStartTime_ {};
    // The coupon code. If you do not specify this parameter, a default coupon is applied.
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The sub-category of the cluster. Valid values:
    // 
    // - **normal_exclusive**: dedicated specifications
    // 
    // - **normal_general**: general-purpose specifications
    shared_ptr<string> subCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
