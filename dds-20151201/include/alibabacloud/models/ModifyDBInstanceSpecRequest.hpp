// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyDBInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlignPrimaryZone, alignPrimaryZone_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SearchNodeClass, searchNodeClass_);
      DARABONBA_PTR_TO_JSON(SearchNodeCount, searchNodeCount_);
      DARABONBA_PTR_TO_JSON(SearchNodeStorage, searchNodeStorage_);
      DARABONBA_PTR_TO_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_TO_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_TO_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignPrimaryZone, alignPrimaryZone_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SearchNodeClass, searchNodeClass_);
      DARABONBA_PTR_FROM_JSON(SearchNodeCount, searchNodeCount_);
      DARABONBA_PTR_FROM_JSON(SearchNodeStorage, searchNodeStorage_);
      DARABONBA_PTR_FROM_JSON(TargetHiddenZoneId, targetHiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetSecondaryZoneId, targetSecondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(TargetVswitchId, targetVswitchId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    ModifyDBInstanceSpecRequest() = default ;
    ModifyDBInstanceSpecRequest(const ModifyDBInstanceSpecRequest &) = default ;
    ModifyDBInstanceSpecRequest(ModifyDBInstanceSpecRequest &&) = default ;
    ModifyDBInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceSpecRequest() = default ;
    ModifyDBInstanceSpecRequest& operator=(const ModifyDBInstanceSpecRequest &) = default ;
    ModifyDBInstanceSpecRequest& operator=(ModifyDBInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignPrimaryZone_ == nullptr
        && this->autoPay_ == nullptr && this->businessInfo_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->effectiveTime_ == nullptr && this->extraParam_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->readonlyReplicas_ == nullptr && this->replicationFactor_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->searchNodeClass_ == nullptr && this->searchNodeCount_ == nullptr && this->searchNodeStorage_ == nullptr && this->targetHiddenZoneId_ == nullptr && this->targetSecondaryZoneId_ == nullptr
        && this->targetVswitchId_ == nullptr && this->targetZoneId_ == nullptr; };
    // alignPrimaryZone Field Functions 
    bool hasAlignPrimaryZone() const { return this->alignPrimaryZone_ != nullptr;};
    void deleteAlignPrimaryZone() { this->alignPrimaryZone_ = nullptr;};
    inline bool getAlignPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(alignPrimaryZone_, false) };
    inline ModifyDBInstanceSpecRequest& setAlignPrimaryZone(bool alignPrimaryZone) { DARABONBA_PTR_SET_VALUE(alignPrimaryZone_, alignPrimaryZone) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDBInstanceSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyDBInstanceSpecRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline ModifyDBInstanceSpecRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline ModifyDBInstanceSpecRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceSpecRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline string getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, "") };
    inline ModifyDBInstanceSpecRequest& setDBInstanceStorage(string DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBInstanceSpecRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline ModifyDBInstanceSpecRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModifyDBInstanceSpecRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readonlyReplicas Field Functions 
    bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
    void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
    inline string getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, "") };
    inline ModifyDBInstanceSpecRequest& setReadonlyReplicas(string readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
    inline ModifyDBInstanceSpecRequest& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // searchNodeClass Field Functions 
    bool hasSearchNodeClass() const { return this->searchNodeClass_ != nullptr;};
    void deleteSearchNodeClass() { this->searchNodeClass_ = nullptr;};
    inline string getSearchNodeClass() const { DARABONBA_PTR_GET_DEFAULT(searchNodeClass_, "") };
    inline ModifyDBInstanceSpecRequest& setSearchNodeClass(string searchNodeClass) { DARABONBA_PTR_SET_VALUE(searchNodeClass_, searchNodeClass) };


    // searchNodeCount Field Functions 
    bool hasSearchNodeCount() const { return this->searchNodeCount_ != nullptr;};
    void deleteSearchNodeCount() { this->searchNodeCount_ = nullptr;};
    inline int64_t getSearchNodeCount() const { DARABONBA_PTR_GET_DEFAULT(searchNodeCount_, 0L) };
    inline ModifyDBInstanceSpecRequest& setSearchNodeCount(int64_t searchNodeCount) { DARABONBA_PTR_SET_VALUE(searchNodeCount_, searchNodeCount) };


    // searchNodeStorage Field Functions 
    bool hasSearchNodeStorage() const { return this->searchNodeStorage_ != nullptr;};
    void deleteSearchNodeStorage() { this->searchNodeStorage_ = nullptr;};
    inline int64_t getSearchNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(searchNodeStorage_, 0L) };
    inline ModifyDBInstanceSpecRequest& setSearchNodeStorage(int64_t searchNodeStorage) { DARABONBA_PTR_SET_VALUE(searchNodeStorage_, searchNodeStorage) };


    // targetHiddenZoneId Field Functions 
    bool hasTargetHiddenZoneId() const { return this->targetHiddenZoneId_ != nullptr;};
    void deleteTargetHiddenZoneId() { this->targetHiddenZoneId_ = nullptr;};
    inline string getTargetHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetHiddenZoneId_, "") };
    inline ModifyDBInstanceSpecRequest& setTargetHiddenZoneId(string targetHiddenZoneId) { DARABONBA_PTR_SET_VALUE(targetHiddenZoneId_, targetHiddenZoneId) };


    // targetSecondaryZoneId Field Functions 
    bool hasTargetSecondaryZoneId() const { return this->targetSecondaryZoneId_ != nullptr;};
    void deleteTargetSecondaryZoneId() { this->targetSecondaryZoneId_ = nullptr;};
    inline string getTargetSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetSecondaryZoneId_, "") };
    inline ModifyDBInstanceSpecRequest& setTargetSecondaryZoneId(string targetSecondaryZoneId) { DARABONBA_PTR_SET_VALUE(targetSecondaryZoneId_, targetSecondaryZoneId) };


    // targetVswitchId Field Functions 
    bool hasTargetVswitchId() const { return this->targetVswitchId_ != nullptr;};
    void deleteTargetVswitchId() { this->targetVswitchId_ = nullptr;};
    inline string getTargetVswitchId() const { DARABONBA_PTR_GET_DEFAULT(targetVswitchId_, "") };
    inline ModifyDBInstanceSpecRequest& setTargetVswitchId(string targetVswitchId) { DARABONBA_PTR_SET_VALUE(targetVswitchId_, targetVswitchId) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline ModifyDBInstanceSpecRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // Specifies whether to automatically align the primary node to the primary zone for a multi-zone instance after operations such as configuration changes. If you choose not to align the node, one primary/secondary switchover (transient disconnection) is avoided. Default value: true (aligned).
    shared_ptr<bool> alignPrimaryZone_ {};
    // Specifies whether to enable automatic payment for the instance. Valid values:
    // - **true**: enables automatic payment. This is the default value. Make sure that your account has sufficient balance.
    // <props="china">- **false**: disables automatic payment. You must manually pay for the order in the console. Log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > **Expenses and Costs**. In the left-side navigation pane, choose **Orders** > **My Orders**. On the **Orders** tab, find the order and complete the payment.
    // <props="intl">- **false**: disables automatic payment. You must manually pay for the order in the console. Log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > **Expenses and Costs**. In the left-side navigation pane, click **Order Management**. On the **Orders** page, find the order and complete the payment.
    shared_ptr<bool> autoPay_ {};
    // The business information.
    shared_ptr<string> businessInfo_ {};
    // Specifies whether to use a coupon. Valid values:
    // - **default** or **null**: uses a coupon. This is the default value.
    // - **youhuiquan_promotion_option_id_for_blank**: does not use a coupon.
    shared_ptr<string> couponNo_ {};
    // The instance type. <props="intl"><ph>For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html). You can also call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation to query instance types.</ph>
    // <props="china">
    // - For standalone instances and replica set instances, this parameter specifies the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html). You can also call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation to query the instance types of standalone instances and replica set instances.
    // - For serverless instances, this parameter specifies the compute specifications of the instance. Valid values: 100 to 8000.
    // 
    // 
    // > You must specify at least one of the **DBInstanceClass** and **DBInstanceStorage** parameters.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Instance storage space of the instance. <props="intl"><ph>Valid values: 10 to 3000. Unit: GB. The step size is 10 GB. The valid values are subject to the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).</ph>
    // 
    // <props="china">
    // - For standalone instances and replica set instances, valid values are 10 to 3000. Unit: GB. The step size is 10 GB. The valid values are subject to the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    // - For serverless instances, valid values are 1 to 100. Unit: GB. The step size is 1 GB.
    // 
    // 
    // > - You must specify at least one of the **DBInstanceStorage** and **DBInstanceClass** parameters.
    // > - You cannot downgrade instance storage space.
    shared_ptr<string> DBInstanceStorage_ {};
    // The time when the configuration change takes effect. Valid values:
    // - **Immediately**: takes effect immediately. This is the default value.
    // - **MaintainTime**: takes effect during the maintenance window of the instance.
    shared_ptr<string> effectiveTime_ {};
    // The additional parameter. Valid values:
    // 
    // - **async**: returns the result after the configuration change order is created.
    // - **sync**: returns the result when the configuration change is delivered after the order is created.
    shared_ptr<string> extraParam_ {};
    // The type of configuration change. Valid values:
    // - **UPGRADE**: upgrades the configurations. This is the default value.
    // - **DOWNGRADE**: downgrades the configurations.
    // 
    // > You can specify this parameter only when the instance uses the subscription billing method.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes. Valid values: **0** to **5**.
    // 
    // If the instance is connected only over the **classic network** and a **VPC**, you must enable Internet access or release the classic network before you can change the **number of read-only nodes**.
    // > You can log on to the ApsaraDB for MongoDB console and view the enabled network types on the **Database Connections** page.
    shared_ptr<string> readonlyReplicas_ {};
    // The number of nodes in the instance. Default value: 3.
    // - For a replica set instance, valid values are **3**, **5**, and **7**.
    // - For a standalone instance, the value is fixed to **1**.
    // - For a replica set instance that uses shared storage (supported only on the Alibaba Cloud China site), the value is fixed to **2**.
    // 
    // > You do not need to specify this parameter for a serverless instance (supported only on the Alibaba Cloud China site).
    shared_ptr<string> replicationFactor_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The specifications of the search node for the configuration change.
    shared_ptr<string> searchNodeClass_ {};
    // The number of search nodes for the configuration change.
    shared_ptr<int64_t> searchNodeCount_ {};
    // The storage capacity of the search node for the configuration change.
    shared_ptr<int64_t> searchNodeStorage_ {};
    // The destination zone for the hidden node when you cloud disk instance across zones and change its configurations at the same time.
    // >Notice: This parameter is supported only for instances that use cloud disks.</notice>
    // >Notice: The value of this parameter cannot be the same as the value of the TargetZoneId or TargetSecondaryZoneId parameter.</notice>
    // 
    // > 
    // > - You must specify this parameter only when you cloud disk instance across zones and change its configurations at the same time.
    // > - This parameter is available only for multi-zone migration.
    // > - The destination zone and the current zone of the instance must be in the same region.
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetHiddenZoneId_ {};
    // The destination zone for the secondary node when you cloud disk instance across zones and change its configurations at the same time.
    // >Notice: This parameter is supported only for instances that use cloud disks.</notice>
    // >Notice: The value of this parameter cannot be the same as the value of the TargetZoneId or TargetHiddenZoneId parameter.</notice>
    // > 
    // > - You must specify this parameter only when you cloud disk instance across zones and change its configurations at the same time.
    // > - This parameter is available only for multi-zone migration.
    // > - The destination zone and the current zone of the instance must be in the same region.
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetSecondaryZoneId_ {};
    // The ID of the destination vSwitch when you cloud disk instance across zones and change its configurations at the same time.
    // >Notice: This parameter is supported only for instances that use cloud disks.</notice>
    // > 
    // > - You must specify this parameter only when you cloud disk instance across zones and change its configurations at the same time.
    shared_ptr<string> targetVswitchId_ {};
    // The destination zone for instance migration when you migrate the instance across zones and change its configurations at the same time.
    // >Notice: This parameter is supported only for cloud disk instances.</notice>
    // >Notice: The value of this parameter cannot be the same as the value of the TargetSecondaryZoneId or TargetHiddenZoneId parameter.</notice>
    // > - You must specify this parameter only when you migrate the instance across zones and change its configurations at the same time.
    // > - The destination zone and the current zone of the instance must be in the same region.
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
