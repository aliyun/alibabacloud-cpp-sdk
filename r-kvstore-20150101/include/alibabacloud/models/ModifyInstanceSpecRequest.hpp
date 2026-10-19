// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ForceTrans, forceTrans_);
      DARABONBA_PTR_TO_JSON(ForceUpgrade, forceUpgrade_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadOnlyCount, readOnlyCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_TO_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_TO_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ForceTrans, forceTrans_);
      DARABONBA_PTR_FROM_JSON(ForceUpgrade, forceUpgrade_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyCount, readOnlyCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_FROM_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_FROM_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest(ModifyInstanceSpecRequest &&) = default ;
    ModifyInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequest() = default ;
    ModifyInstanceSpecRequest& operator=(const ModifyInstanceSpecRequest &) = default ;
    ModifyInstanceSpecRequest& operator=(ModifyInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->couponNo_ == nullptr && this->effectiveTime_ == nullptr && this->forceTrans_ == nullptr
        && this->forceUpgrade_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->majorVersion_ == nullptr && this->nodeType_ == nullptr
        && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->readOnlyCount_ == nullptr && this->regionId_ == nullptr
        && this->replicaCount_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secondaryZoneId_ == nullptr && this->securityToken_ == nullptr
        && this->shardCount_ == nullptr && this->slaveReadOnlyCount_ == nullptr && this->slaveReplicaCount_ == nullptr && this->sourceBiz_ == nullptr && this->storage_ == nullptr
        && this->storageType_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyInstanceSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyInstanceSpecRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline ModifyInstanceSpecRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyInstanceSpecRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // forceTrans Field Functions 
    bool hasForceTrans() const { return this->forceTrans_ != nullptr;};
    void deleteForceTrans() { this->forceTrans_ = nullptr;};
    inline bool getForceTrans() const { DARABONBA_PTR_GET_DEFAULT(forceTrans_, false) };
    inline ModifyInstanceSpecRequest& setForceTrans(bool forceTrans) { DARABONBA_PTR_SET_VALUE(forceTrans_, forceTrans) };


    // forceUpgrade Field Functions 
    bool hasForceUpgrade() const { return this->forceUpgrade_ != nullptr;};
    void deleteForceUpgrade() { this->forceUpgrade_ = nullptr;};
    inline bool getForceUpgrade() const { DARABONBA_PTR_GET_DEFAULT(forceUpgrade_, false) };
    inline ModifyInstanceSpecRequest& setForceUpgrade(bool forceUpgrade) { DARABONBA_PTR_SET_VALUE(forceUpgrade_, forceUpgrade) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline ModifyInstanceSpecRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline string getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
    inline ModifyInstanceSpecRequest& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ModifyInstanceSpecRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModifyInstanceSpecRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readOnlyCount Field Functions 
    bool hasReadOnlyCount() const { return this->readOnlyCount_ != nullptr;};
    void deleteReadOnlyCount() { this->readOnlyCount_ = nullptr;};
    inline int32_t getReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(readOnlyCount_, 0) };
    inline ModifyInstanceSpecRequest& setReadOnlyCount(int32_t readOnlyCount) { DARABONBA_PTR_SET_VALUE(readOnlyCount_, readOnlyCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaCount Field Functions 
    bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
    void deleteReplicaCount() { this->replicaCount_ = nullptr;};
    inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
    inline ModifyInstanceSpecRequest& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline ModifyInstanceSpecRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyInstanceSpecRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline ModifyInstanceSpecRequest& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // slaveReadOnlyCount Field Functions 
    bool hasSlaveReadOnlyCount() const { return this->slaveReadOnlyCount_ != nullptr;};
    void deleteSlaveReadOnlyCount() { this->slaveReadOnlyCount_ = nullptr;};
    inline int32_t getSlaveReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnlyCount_, 0) };
    inline ModifyInstanceSpecRequest& setSlaveReadOnlyCount(int32_t slaveReadOnlyCount) { DARABONBA_PTR_SET_VALUE(slaveReadOnlyCount_, slaveReadOnlyCount) };


    // slaveReplicaCount Field Functions 
    bool hasSlaveReplicaCount() const { return this->slaveReplicaCount_ != nullptr;};
    void deleteSlaveReplicaCount() { this->slaveReplicaCount_ = nullptr;};
    inline int32_t getSlaveReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReplicaCount_, 0) };
    inline ModifyInstanceSpecRequest& setSlaveReplicaCount(int32_t slaveReplicaCount) { DARABONBA_PTR_SET_VALUE(slaveReplicaCount_, slaveReplicaCount) };


    // sourceBiz Field Functions 
    bool hasSourceBiz() const { return this->sourceBiz_ != nullptr;};
    void deleteSourceBiz() { this->sourceBiz_ = nullptr;};
    inline string getSourceBiz() const { DARABONBA_PTR_GET_DEFAULT(sourceBiz_, "") };
    inline ModifyInstanceSpecRequest& setSourceBiz(string sourceBiz) { DARABONBA_PTR_SET_VALUE(sourceBiz_, sourceBiz) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline ModifyInstanceSpecRequest& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyInstanceSpecRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // * **true**: Automatic payment is enabled. This is the default value.
    // * **false**: Manual payment is enabled. If this parameter is set to **false**, you must manually renew the instance in the console before the instance expires. For more information, refer to [Manual renewal](https://help.aliyun.com/document_detail/26352.html).
    shared_ptr<bool> autoPay_ {};
    // The activity ID and business information.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The coupon code. Default value: `youhuiquan_promotion_option_id_for_blank`.
    shared_ptr<string> couponNo_ {};
    // The time when the modification takes effect. Valid values:
    // * **Immediately**: The modification takes effect immediately. This is the default value.
    // * **MaintainTime**: The modification takes effect during the maintenance window of the instance. You can call the [ModifyInstanceMaintainTime](https://help.aliyun.com/document_detail/473775.html) operation to modify the maintenance window.
    shared_ptr<string> effectiveTime_ {};
    // Specifies whether to enable forced transmission. Valid values:
    // - **false** (default): Before the specification change, the system checks the current minor engine version of the instance. If the minor engine version is too low, an error is reported. You must upgrade the minor engine version and retry.
    // - **true**: The check is skipped, and the system directly executes the specification change.
    shared_ptr<bool> forceTrans_ {};
    // Specifies whether to forcibly modify the specifications. Valid values:
    // * **false**: No.
    // * **true**: Yes. This is the default value.
    shared_ptr<bool> forceUpgrade_ {};
    // The instance type code after the modification. You can call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/473765.html) operation to query the instance types available for modification in the zone to which the instance belongs.
    // 
    // > For more information about instance types, refer to [Instance type overview](https://help.aliyun.com/document_detail/26350.html).
    shared_ptr<string> instanceClass_ {};
    // The instance ID. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/473778.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The major engine version to which you want to upgrade a classic instance. Valid values: **2.8**, **4.0**, and **5.0**.
    // > When you upgrade the major engine version, the **InstanceClass** parameter is required. This indicates that this operation only supports upgrading the major engine version when you update the instance specifications. If you only need to upgrade the major engine version, call the [ModifyInstanceMajorVersion](https://help.aliyun.com/document_detail/473776.html) operation.
    shared_ptr<string> majorVersion_ {};
    // The node type. Valid values:
    // * **MASTER_SLAVE**: high-availability (dual-replica)
    // * **STAND_ALONE**: single-replica
    // * **double**: dual-replica
    // * **single**: single-replica
    // > Select **MASTER_SLAVE** or **STAND_ALONE** for cloud-native instances, and select **double** or **single** for classic instances.
    shared_ptr<string> nodeType_ {};
    // The modification type. This parameter is required when you modify the specifications of a subscription instance. Valid values:
    // 
    // * **UPGRADE**: Upgrades the configurations. This is the default value.
    // * **DOWNGRADE**: Downgrades the configurations.
    // 
    // > * When you downgrade the configurations of a subscription instance, you must set this parameter to **DOWNGRADE**.
    // > * If the price of the target instance type is higher than that of the current instance type, the configurations are upgraded. Otherwise, the configurations are downgraded. For example, the price of the 8 GB read/write splitting edition (5 read-only nodes) is higher than that of the 16 GB cluster edition. Changing the instance type from the latter to the former is considered an upgrade.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes in the primary zone. This parameter applies only when you create a cloud-native read/write splitting instance.
    // * If the instance uses the standard architecture, valid values are 0 to 9. A value of 0 indicates the shutdown of read/write splitting and an instance switchover to the standard architecture.
    // * If the instance uses the cluster architecture, valid values are 1 to 4, which indicates the number of read-only nodes per shard.
    // > If you create a multi-zone instance, you can use this parameter and the SlaveReadOnlyCount parameter to specify the number of read-only nodes in the primary and secondary zones.
    // > * If the instance uses the standard architecture, the sum of this parameter and SlaveReadOnlyCount cannot be greater than 9.
    // > * If the instance uses the cluster architecture, the sum of this parameter and SlaveReadOnlyCount cannot be greater than 4.
    shared_ptr<int32_t> readOnlyCount_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the region ID. Use this parameter to specify the region of the instance that you want to modify.
    shared_ptr<string> regionId_ {};
    // The number of secondary nodes in the primary zone. This parameter applies only to cloud-native multi-replica cluster instances. You can use this parameter to specify a custom number of secondary nodes. Valid values: 1 to 4.
    // 
    // > If the instance is deployed across multiple zones, you can use this parameter and the SlaveReplicaCount parameter to specify the number of secondary nodes in the primary and secondary zones. The sum of this parameter and the SlaveReplicaCount parameter cannot exceed 4.
    shared_ptr<int32_t> replicaCount_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the secondary zone. This parameter is required when you modify the specifications of a single-zone instance and migrate it to multiple zones. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473764.html) operation to query the zone ID.
    // > The value of this parameter cannot be the same as the value of the ZoneId parameter, and you cannot specify the ID of a multi-zone deployment.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of shards. This parameter applies only to cloud-native cluster instances. You can use this parameter to specify a custom number of shards.
    // 
    // > 
    // > - To change a cloud-native cluster instance to a standard instance, you must explicitly set ShardCount to 1 and specify a standard instance type.
    // > - To change a cloud-native standard instance to a cluster instance, you must explicitly set ShardCount to a value greater than 1 and specify a cluster instance type.
    shared_ptr<int32_t> shardCount_ {};
    // The number of read-only nodes in the secondary zone.
    shared_ptr<int32_t> slaveReadOnlyCount_ {};
    // The number of secondary nodes in the secondary zone.
    shared_ptr<int32_t> slaveReplicaCount_ {};
    // The source of the call. This parameter is used only for internal maintenance and does not need to be specified.
    shared_ptr<string> sourceBiz_ {};
    // The storage capacity of the disk instance. The value range varies based on the instance type. For more information, refer to [Disk instance types](https://help.aliyun.com/document_detail/2527111.html).
    // > This parameter is required only when **InstanceType** is set to **tair_essd** and you create a Tair ESSD instance. When you create a Tair SSD instance, the capacity field is defined as different fixed values based on different instance types, and you do not need to specify this field.
    shared_ptr<int32_t> storage_ {};
    // The storage type. Valid values: **essd_pl1**, **essd_pl2**, and **essd_pl3**.
    // > This parameter is required only when **InstanceType** is set to **tair_essd** and the instance is a Tair ESSD instance.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
