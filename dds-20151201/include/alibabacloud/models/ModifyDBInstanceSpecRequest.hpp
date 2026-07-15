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
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->businessInfo_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr
        && this->effectiveTime_ == nullptr && this->extraParam_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->readonlyReplicas_ == nullptr && this->replicationFactor_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->searchNodeClass_ == nullptr
        && this->searchNodeCount_ == nullptr && this->searchNodeStorage_ == nullptr && this->targetHiddenZoneId_ == nullptr && this->targetSecondaryZoneId_ == nullptr && this->targetVswitchId_ == nullptr
        && this->targetZoneId_ == nullptr; };
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
    // Specifies whether to enable automatic payment for the instance. Valid values:
    // 
    // - **true**: enables automatic payment. Make sure that your account has a sufficient balance. This is the default value.
    // 
    // <props="china">
    // 
    // - **false**: disables automatic payment. You can log on to the ApsaraDB for MongoDB console to pay for the instance. In the upper-right corner of the page, choose **Billing Management** > **Billing Management**. In the left-side navigation pane, choose **Orders** > **My Orders**. On the **Product Orders** tab, find the order and complete the payment.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // - **false**: disables automatic payment. You can log on to the ApsaraDB for MongoDB console to pay for the instance. In the upper-right corner of the page, choose **Billing Management** > **Billing Management**. In the left-side navigation pane, click **Orders**. On the **Product Orders** page, find the order and complete the payment.
    shared_ptr<bool> autoPay_ {};
    // The business information.
    shared_ptr<string> businessInfo_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **default** or **null** (default): A coupon is used.
    // 
    // - **youhuiquan_promotion_option_id_for_blank**: No coupon is used.
    shared_ptr<string> couponNo_ {};
    // The instance type. <props="intl">For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html). You can also call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation to query instance types.<props="china">
    // 
    // - For a standalone instance or a replica set instance, this parameter specifies the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html). You can also call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation to query the instance types of standalone and replica set instances.
    // 
    // - For a serverless instance, this parameter specifies the computing capacity of the instance. Valid values: 100 to 8000.
    // 
    // > You must configure one of the **DBInstanceStorage** and DBInstanceClass parameters.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The storage capacity of the instance. <props="intl">The value must be an integer that is greater than or equal to 10. The value increases in increments of 10. Unit: GB. The values that can be specified for this parameter are subject to the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    // 
    // <props="china">
    // 
    // - The storage capacity of a standalone instance or a replica set instance must be a multiple of 10. The valid values are 10 to 3000. Unit: GB. The values that can be specified for this parameter are subject to the instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    // 
    // - The storage capacity of a serverless instance must be a multiple of 1. The valid values are 1 to 100. Unit: GB.
    // 
    // 
    // 
    // > - You must configure one of the **DBInstanceClass** and DBInstanceStorage parameters.
    // >
    // > - You cannot decrease the storage capacity of an instance.
    shared_ptr<string> DBInstanceStorage_ {};
    // The effective time of the configuration change. Valid values:
    // 
    // - **Immediately**: The configuration change immediately takes effect. This is the default value.
    // 
    // - **MaintainTime**: The configuration change takes effect during the maintenance window of the instance.
    shared_ptr<string> effectiveTime_ {};
    // Additional parameters. Valid values:
    // 
    // - **async**: The result is returned after the specification change order is created.
    // 
    // - **sync**: The result is returned after the instance specification change is delivered.
    shared_ptr<string> extraParam_ {};
    // The specification change type. Valid values:
    // 
    // - **UPGRADE**: upgrades the specifications. This is the default value.
    // 
    // - **DOWNGRADE**: downgrades the specifications.
    // 
    // > This parameter is available only for subscription instances.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes. Valid values: **0** to **5**.
    // 
    // If the network type of the instance is set to only **classic network** and **VPC**, you need to enable public access or release the classic network endpoint before you can change the **number of read-only nodes**.
    // 
    // > You can log on to the ApsaraDB for MongoDB console and go to the **Database Connections** page to view the network types that have been enabled.
    shared_ptr<string> readonlyReplicas_ {};
    // The number of nodes in the instance. Default value: 3.
    // 
    // - Valid values for replica set instances: **3**, **5**, and **7**.
    // 
    // - The value for standalone instances is fixed at **1**.
    // 
    // - The value for replica set instances with shared storage (available only in the China site) is fixed at **2**.
    // 
    // > This parameter is not required for serverless instances (available only in the China site).
    shared_ptr<string> replicationFactor_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The specifications of the Search node to be changed.
    shared_ptr<string> searchNodeClass_ {};
    // The number of Search nodes to be changed.
    shared_ptr<int64_t> searchNodeCount_ {};
    // The capacity of the Search node to be changed.
    shared_ptr<int64_t> searchNodeStorage_ {};
    // The destination zone for the hidden node when you change the specifications and migrate the instance across zones.
    // >Notice: This parameter applies only to cloud disk instances.
    // >Notice: The value of this parameter cannot be the same as the value of the TargetZoneId or TargetSecondaryZoneId parameter.
    // 
    // > - You must specify this parameter only when you change the specifications and migrate the instance across zones.
    // >
    // > - This parameter is available only for multi-zone migration.
    // >
    // > - The destination zone and the current zone must be in the same region.
    // >
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetHiddenZoneId_ {};
    // The destination secondary zone for the secondary node when you change the specifications and migrate the instance across zones.
    // >Notice: This parameter applies only to cloud disk instances.
    // >Notice: The value of this parameter cannot be the same as the value of the TargetZoneId or TargetHiddenZoneId parameter.
    // 
    // > - You must specify this parameter only when you change the specifications and migrate the instance across zones.
    // >
    // > - This parameter is available only for multi-zone migration.
    // >
    // > - The destination zone and the current zone must be in the same region.
    // >
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetSecondaryZoneId_ {};
    // The destination vSwitch ID when you change the specifications and migrate the instance across zones.
    // >Notice: This parameter applies only to cloud disk instances.
    // 
    // > - You must specify this parameter only when you change the specifications and migrate the instance across zones.
    shared_ptr<string> targetVswitchId_ {};
    // The destination zone to which you want to migrate the instance when you change the specifications and migrate the instance across zones.
    // >Notice: This parameter applies only to cloud disk instances.
    // >Notice: The value of this parameter cannot be the same as the value of the TargetSecondaryZoneId or TargetHiddenZoneId parameter.
    // 
    // > - You must specify this parameter only when you change the specifications and migrate the instance across zones.
    // >
    // > - The destination zone and the current zone must be in the same region.
    // >
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query zone IDs.
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
