// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyNodeSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_TO_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_TO_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    ModifyNodeSpecRequest() = default ;
    ModifyNodeSpecRequest(const ModifyNodeSpecRequest &) = default ;
    ModifyNodeSpecRequest(ModifyNodeSpecRequest &&) = default ;
    ModifyNodeSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeSpecRequest() = default ;
    ModifyNodeSpecRequest& operator=(const ModifyNodeSpecRequest &) = default ;
    ModifyNodeSpecRequest& operator=(ModifyNodeSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceId_ == nullptr && this->effectiveTime_ == nullptr
        && this->fromApp_ == nullptr && this->nodeClass_ == nullptr && this->nodeId_ == nullptr && this->nodeStorage_ == nullptr && this->orderType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->readonlyReplicas_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->switchTime_ == nullptr && this->targetHiddenZoneId_ == nullptr && this->targetSecondaryZoneId_ == nullptr && this->targetVswitchId_ == nullptr && this->targetZoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyNodeSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyNodeSpecRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyNodeSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline ModifyNodeSpecRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyNodeSpecRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyNodeSpecRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string getFromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline ModifyNodeSpecRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline ModifyNodeSpecRequest& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ModifyNodeSpecRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeStorage Field Functions 
    bool hasNodeStorage() const { return this->nodeStorage_ != nullptr;};
    void deleteNodeStorage() { this->nodeStorage_ = nullptr;};
    inline int32_t getNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(nodeStorage_, 0) };
    inline ModifyNodeSpecRequest& setNodeStorage(int32_t nodeStorage) { DARABONBA_PTR_SET_VALUE(nodeStorage_, nodeStorage) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModifyNodeSpecRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNodeSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNodeSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readonlyReplicas Field Functions 
    bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
    void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
    inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
    inline ModifyNodeSpecRequest& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNodeSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNodeSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyNodeSpecRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetHiddenZoneId Field Functions 
    bool hasTargetHiddenZoneId() const { return this->targetHiddenZoneId_ != nullptr;};
    void deleteTargetHiddenZoneId() { this->targetHiddenZoneId_ = nullptr;};
    inline string getTargetHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetHiddenZoneId_, "") };
    inline ModifyNodeSpecRequest& setTargetHiddenZoneId(string targetHiddenZoneId) { DARABONBA_PTR_SET_VALUE(targetHiddenZoneId_, targetHiddenZoneId) };


    // targetSecondaryZoneId Field Functions 
    bool hasTargetSecondaryZoneId() const { return this->targetSecondaryZoneId_ != nullptr;};
    void deleteTargetSecondaryZoneId() { this->targetSecondaryZoneId_ = nullptr;};
    inline string getTargetSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetSecondaryZoneId_, "") };
    inline ModifyNodeSpecRequest& setTargetSecondaryZoneId(string targetSecondaryZoneId) { DARABONBA_PTR_SET_VALUE(targetSecondaryZoneId_, targetSecondaryZoneId) };


    // targetVswitchId Field Functions 
    bool hasTargetVswitchId() const { return this->targetVswitchId_ != nullptr;};
    void deleteTargetVswitchId() { this->targetVswitchId_ = nullptr;};
    inline string getTargetVswitchId() const { DARABONBA_PTR_GET_DEFAULT(targetVswitchId_, "") };
    inline ModifyNodeSpecRequest& setTargetVswitchId(string targetVswitchId) { DARABONBA_PTR_SET_VALUE(targetVswitchId_, targetVswitchId) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline ModifyNodeSpecRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true** (default): enables automatic payment. Make sure that you have sufficient balance within your account.
    // *   **false**: disables automatic payment. In this case, you must manually pay for the instance.
    shared_ptr<bool> autoPay_ {};
    // The business information. This is an additional parameter.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The coupon code. Default value: `youhuiquan_promotion_option_id_for_blank`.
    shared_ptr<string> couponNo_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The time when the changed configurations take effect. Valid values:
    // 
    // *   **Immediately** (default): The new configurations immediately take effect
    // *   **MaintainTime**: The new configurations take effect during the maintenance window of the instance.
    shared_ptr<string> effectiveTime_ {};
    // The source of the request. Valid values:
    // 
    // *   **OpenApi**: the ApsaraDB for MongoDB API
    // *   **mongo_buy**: the ApsaraDB for MongoDB console
    shared_ptr<string> fromApp_ {};
    // The specifications of the shard or mongos node. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    shared_ptr<string> nodeClass_ {};
    // The ID of the shard or mongos node in the sharded cluster instance. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to query the node ID.
    // 
    // > If you set this parameter to the ID of the shard node, you must also specify the **NodeStorage** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    // The storage capacity of the shard node. Unit: GB.
    // 
    // *   Valid values are **10** to **2000** if the instance uses local SSDs.
    // *   Valid values are **20** to **16000** if the instance uses enhanced SSDs (ESSDs) at PL1.
    // 
    // > The value must be a multiple of 10.
    shared_ptr<int32_t> nodeStorage_ {};
    // The order type. Valid values:
    // 
    // *   **UPGRADE**
    // *   **DOWNGRADE**
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes in the shard node.
    // 
    // Valid values: **0** to **5**. The value must be an integer. Default value: **0**.
    shared_ptr<int32_t> readonlyReplicas_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The execution time. Specify the time in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    shared_ptr<string> switchTime_ {};
    shared_ptr<string> targetHiddenZoneId_ {};
    shared_ptr<string> targetSecondaryZoneId_ {};
    shared_ptr<string> targetVswitchId_ {};
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
