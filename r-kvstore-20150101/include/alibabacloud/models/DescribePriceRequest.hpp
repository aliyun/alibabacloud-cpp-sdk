// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ForceUpgrade, forceUpgrade_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NeedUnavailableCoupon, needUnavailableCoupon_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OrderParamOut, orderParamOut_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ForceUpgrade, forceUpgrade_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NeedUnavailableCoupon, needUnavailableCoupon_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OrderParamOut, orderParamOut_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessInfo_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->couponNo_ == nullptr && this->engineVersion_ == nullptr && this->forceUpgrade_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->instances_ == nullptr && this->needUnavailableCoupon_ == nullptr && this->nodeType_ == nullptr
        && this->orderParamOut_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr
        && this->quantity_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secondaryZoneId_ == nullptr
        && this->securityToken_ == nullptr && this->shardCount_ == nullptr && this->zoneId_ == nullptr; };
    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline DescribePriceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribePriceRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribePriceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribePriceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribePriceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // forceUpgrade Field Functions 
    bool hasForceUpgrade() const { return this->forceUpgrade_ != nullptr;};
    void deleteForceUpgrade() { this->forceUpgrade_ = nullptr;};
    inline bool getForceUpgrade() const { DARABONBA_PTR_GET_DEFAULT(forceUpgrade_, false) };
    inline DescribePriceRequest& setForceUpgrade(bool forceUpgrade) { DARABONBA_PTR_SET_VALUE(forceUpgrade_, forceUpgrade) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribePriceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline string getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
    inline DescribePriceRequest& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // needUnavailableCoupon Field Functions 
    bool hasNeedUnavailableCoupon() const { return this->needUnavailableCoupon_ != nullptr;};
    void deleteNeedUnavailableCoupon() { this->needUnavailableCoupon_ = nullptr;};
    inline bool getNeedUnavailableCoupon() const { DARABONBA_PTR_GET_DEFAULT(needUnavailableCoupon_, false) };
    inline DescribePriceRequest& setNeedUnavailableCoupon(bool needUnavailableCoupon) { DARABONBA_PTR_SET_VALUE(needUnavailableCoupon_, needUnavailableCoupon) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribePriceRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // orderParamOut Field Functions 
    bool hasOrderParamOut() const { return this->orderParamOut_ != nullptr;};
    void deleteOrderParamOut() { this->orderParamOut_ = nullptr;};
    inline string getOrderParamOut() const { DARABONBA_PTR_GET_DEFAULT(orderParamOut_, "") };
    inline DescribePriceRequest& setOrderParamOut(string orderParamOut) { DARABONBA_PTR_SET_VALUE(orderParamOut_, orderParamOut) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribePriceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline DescribePriceRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline DescribePriceRequest& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePriceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePriceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline DescribePriceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribePriceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline DescribePriceRequest& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePriceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The extended information, such as the promotion ID and business information.
    shared_ptr<string> businessInfo_ {};
    // Specifies the instance type by using the storage capacity of the instance. Unit: MB. This parameter applies only to instances of ApsaraDB for Redis Community Edition in the classic deployment mode. We recommend that you use the **InstanceClass** parameter to specify an exact instance type.
    // > If you specify the **InstanceClass** parameter, you do not need to specify this parameter.
    shared_ptr<int64_t> capacity_ {};
    // The billing method. Valid values:
    // * **PostPaid** (default): pay-as-you-go.
    // * **PrePaid**: subscription.
    shared_ptr<string> chargeType_ {};
    // The coupon code. Default value: youhuiquan_promotion_option_id_for_blank, which indicates that no coupon code is used.
    shared_ptr<string> couponNo_ {};
    // <props="china">Database engine version of the Redis instance. Valid values: **2.8**, **4.0**, **5.0**, and **6.0**.
    // 
    // <props="intl">Database engine version of the Redis instance. Valid values: **2.8**, **4.0**, and **5.0**.
    // 
    // <props="partner">Database engine version of the Redis instance. Valid values: **2.8**, **4.0**, and **5.0**.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to forcibly upgrade or downgrade the instance. Valid values:
    // * **false**: Yes.
    // * **true** (default): No.
    shared_ptr<bool> forceUpgrade_ {};
    // Specifies the instance type by using the **InstanceClass** code. To query the **InstanceClass** code, perform the following steps:
    // 1. On the [Instance type query](https://help.aliyun.com/document_detail/26350.html) page, select the instance type as needed and click the value in the **Architecture Type** column to open the instance type documentation.
    // 2. In the instance type table of the documentation, select the required instance type and find the code in the **InstanceClass** column.
    // 
    // > For example, to query pricing for a new purchase, you must specify at least the following parameters in addition to other key parameters:
    // > * To query a classic instance: specify this parameter.
    // > * To query a cloud-native standard architecture instance: specify this parameter.
    // > * To query a cloud-native cluster architecture instance: specify this parameter and the **ShardCount** parameter.
    // > * To query a cloud-native read/write splitting architecture instance: specify this parameter and the **Instances** parameter.
    // > * To query multiple instances of different types, or to query Tair ESSD instances (with custom storage types and storage space): specify the Instances parameter. You do not need to specify this parameter.
    shared_ptr<string> instanceClass_ {};
    // The instance ID.
    // > This parameter is required when **OrderType** is set to **UPGRADE** or **RENEW**.
    shared_ptr<string> instanceId_ {};
    // The instances to query. This parameter is required when you query cloud-native read/write splitting architecture instances, Tair ESSD instances, or multiple instances of different types. The value is a JSON string. For more information, see **Supplementary description of the Instances parameter** below.
    shared_ptr<string> instances_ {};
    // Specifies whether to return unavailable coupons.
    shared_ptr<bool> needUnavailableCoupon_ {};
    // The node type. Valid values:
    // - **STAND_ALONE**: Single-replica.
    // - **MASTER_SLAVE** (default): High-availability (dual-replica).
    shared_ptr<string> nodeType_ {};
    // Specifies whether to return the order parameters. Valid values:
    // * **false** (default): Not returned.
    // * **true**: Returned.
    shared_ptr<string> orderParamOut_ {};
    // The order type. Valid values:
    // * **BUY**: New purchase.
    // * **UPGRADE**: Upgrade or downgrade.
    // * **RENEW**: Renewal.
    // * **CONVERT**: Billing method conversion.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription duration. Unit: months. Valid values: **1** to **9**, **12**, **24**, and **36**.
    shared_ptr<int64_t> period_ {};
    // The number of instances to purchase. Valid values: **1** to **30**. Default value: **1**.
    shared_ptr<int64_t> quantity_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query available regions.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The secondary zone ID. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473764.html) operation to query available zones.
    // > The value of this parameter cannot be the same as the value of the ZoneId parameter.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of data shard nodes in the cloud-native cluster instance.
    shared_ptr<int32_t> shardCount_ {};
    // The zone ID. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473764.html) operation to query available zones.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
