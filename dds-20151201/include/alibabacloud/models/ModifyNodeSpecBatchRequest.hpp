// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODESPECBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODESPECBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyNodeSpecBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeSpecBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(NodesInfo, nodesInfo_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_TO_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_TO_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeSpecBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(NodesInfo, nodesInfo_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    ModifyNodeSpecBatchRequest() = default ;
    ModifyNodeSpecBatchRequest(const ModifyNodeSpecBatchRequest &) = default ;
    ModifyNodeSpecBatchRequest(ModifyNodeSpecBatchRequest &&) = default ;
    ModifyNodeSpecBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeSpecBatchRequest() = default ;
    ModifyNodeSpecBatchRequest& operator=(const ModifyNodeSpecBatchRequest &) = default ;
    ModifyNodeSpecBatchRequest& operator=(ModifyNodeSpecBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceId_ == nullptr && this->effectiveTime_ == nullptr
        && this->nodesInfo_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->targetHiddenZoneId_ == nullptr && this->targetSecondaryZoneId_ == nullptr && this->targetVswitchId_ == nullptr
        && this->targetZoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyNodeSpecBatchRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyNodeSpecBatchRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyNodeSpecBatchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline ModifyNodeSpecBatchRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyNodeSpecBatchRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyNodeSpecBatchRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // nodesInfo Field Functions 
    bool hasNodesInfo() const { return this->nodesInfo_ != nullptr;};
    void deleteNodesInfo() { this->nodesInfo_ = nullptr;};
    inline string getNodesInfo() const { DARABONBA_PTR_GET_DEFAULT(nodesInfo_, "") };
    inline ModifyNodeSpecBatchRequest& setNodesInfo(string nodesInfo) { DARABONBA_PTR_SET_VALUE(nodesInfo_, nodesInfo) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModifyNodeSpecBatchRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNodeSpecBatchRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNodeSpecBatchRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNodeSpecBatchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNodeSpecBatchRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNodeSpecBatchRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetHiddenZoneId Field Functions 
    bool hasTargetHiddenZoneId() const { return this->targetHiddenZoneId_ != nullptr;};
    void deleteTargetHiddenZoneId() { this->targetHiddenZoneId_ = nullptr;};
    inline string getTargetHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetHiddenZoneId_, "") };
    inline ModifyNodeSpecBatchRequest& setTargetHiddenZoneId(string targetHiddenZoneId) { DARABONBA_PTR_SET_VALUE(targetHiddenZoneId_, targetHiddenZoneId) };


    // targetSecondaryZoneId Field Functions 
    bool hasTargetSecondaryZoneId() const { return this->targetSecondaryZoneId_ != nullptr;};
    void deleteTargetSecondaryZoneId() { this->targetSecondaryZoneId_ = nullptr;};
    inline string getTargetSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetSecondaryZoneId_, "") };
    inline ModifyNodeSpecBatchRequest& setTargetSecondaryZoneId(string targetSecondaryZoneId) { DARABONBA_PTR_SET_VALUE(targetSecondaryZoneId_, targetSecondaryZoneId) };


    // targetVswitchId Field Functions 
    bool hasTargetVswitchId() const { return this->targetVswitchId_ != nullptr;};
    void deleteTargetVswitchId() { this->targetVswitchId_ = nullptr;};
    inline string getTargetVswitchId() const { DARABONBA_PTR_GET_DEFAULT(targetVswitchId_, "") };
    inline ModifyNodeSpecBatchRequest& setTargetVswitchId(string targetVswitchId) { DARABONBA_PTR_SET_VALUE(targetVswitchId_, targetVswitchId) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline ModifyNodeSpecBatchRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**: enables automatic payment. Make sure that you have sufficient balance within your account.
    // *   **false**: disables automatic payment. You can perform the following operations to pay for the instance: Log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, click **Expenses** to go to the **Billing Management** console. In the left-side navigation pane, click **Orders**. On the **Orders** page, find the order and complete the payment.
    // 
    // Default value: **true**.
    shared_ptr<bool> autoPay_ {};
    // The business information.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The coupon code. Default value: `youhuiquan_promotion_option_id_for_blank`.
    shared_ptr<string> couponNo_ {};
    // The ID of the instance whose configurations you want to change.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The time when the changed configurations take effect. Valid values:
    // 
    // *   **Immediately**: The configurations immediately take effect.
    // *   **MaintainTime**: The configurations take effect during the maintenance window of the instance.
    // 
    // > 
    // 
    // *   You can call the [ModifyDBInstanceMaintainTime](https://help.aliyun.com/document_detail/62008.html) operation to modify the maintenance window of an instance.
    // 
    // *   You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to view the maintenance window of an instance.
    // 
    // Default value: **Immediately**.
    shared_ptr<string> effectiveTime_ {};
    // The configuration information of the mongos nodes or shard nodes whose configurations you want to change. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    // 
    // This parameter is required.
    shared_ptr<string> nodesInfo_ {};
    // The type of configuration changes. Valid values:
    // 
    // *   **UPGRADE**
    // *   **DOWNGRADE**
    // 
    // > This parameter is only applicable to instances whose billing method is subscription.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> targetHiddenZoneId_ {};
    shared_ptr<string> targetSecondaryZoneId_ {};
    shared_ptr<string> targetVswitchId_ {};
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
