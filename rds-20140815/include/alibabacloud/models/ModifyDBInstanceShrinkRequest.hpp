// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodesShrink_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodesShrink_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
    };
    ModifyDBInstanceShrinkRequest() = default ;
    ModifyDBInstanceShrinkRequest(const ModifyDBInstanceShrinkRequest &) = default ;
    ModifyDBInstanceShrinkRequest(ModifyDBInstanceShrinkRequest &&) = default ;
    ModifyDBInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceShrinkRequest() = default ;
    ModifyDBInstanceShrinkRequest& operator=(const ModifyDBInstanceShrinkRequest &) = default ;
    ModifyDBInstanceShrinkRequest& operator=(ModifyDBInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->coldDataEnabled_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBNodesShrink_ == nullptr && this->direction_ == nullptr && this->effectiveTime_ == nullptr
        && this->ioAccelerationEnabled_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parameterGroupId_ == nullptr && this->parametersShrink_ == nullptr
        && this->promotionCode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->switchTime_ == nullptr
        && this->targetMinorVersion_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBInstanceShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline ModifyDBInstanceShrinkRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyDBInstanceShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline ModifyDBInstanceShrinkRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline ModifyDBInstanceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline ModifyDBInstanceShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline ModifyDBInstanceShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBNodesShrink Field Functions 
    bool hasDBNodesShrink() const { return this->DBNodesShrink_ != nullptr;};
    void deleteDBNodesShrink() { this->DBNodesShrink_ = nullptr;};
    inline string getDBNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBNodesShrink_, "") };
    inline ModifyDBInstanceShrinkRequest& setDBNodesShrink(string DBNodesShrink) { DARABONBA_PTR_SET_VALUE(DBNodesShrink_, DBNodesShrink) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyDBInstanceShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBInstanceShrinkRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline ModifyDBInstanceShrinkRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyDBInstanceShrinkRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline ModifyDBInstanceShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBInstanceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyDBInstanceShrinkRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline ModifyDBInstanceShrinkRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


  protected:
    // Specifies whether to automatically use coupons. Valid values:
    // * **true** (default): Automatically uses coupons.
    // * **false**: Does not automatically use coupons.
    // 
    // > After a coupon is used, the amount deducted by the coupon is not refunded if you downgrade the instance specifications.
    shared_ptr<bool> autoUseCoupon_ {};
    // Specifies whether to enable the [I/O burst feature for premium performance disks](https://help.aliyun.com/document_detail/2340501.html). Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> burstingEnabled_ {};
    // The instance edition. Valid values:
    // 
    // - **Basic**: Basic Edition
    // - **HighAvailability**: High-availability Edition
    // - **cluster**: Cluster Edition
    shared_ptr<string> category_ {};
    // <props="china">Specifies whether to enable the [cold data archiving feature](https://help.aliyun.com/document_detail/2701832.html) for general-purpose cloud disks. Valid values:
    // 
    // - <props="china">**true**: Enabled.
    // 
    // - <props="china">**false**: Disabled.
    // 
    // <props="intl">Reserved parameter.
    shared_ptr<bool> coldDataEnabled_ {};
    // The instance type. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The [target storage capacity](https://help.aliyun.com/document_detail/26312.html), in GB. You can call the [DescribeAvailableClasses](https://help.aliyun.com/document_detail/610393.html) operation to query the available storage capacity range for the target instance type.
    // 
    // > * You must specify at least one of this parameter and the **DBInstanceClass** parameter.
    // > * You can call [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html) to query the current storage capacity of the instance.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    // 
    // * **general_essd**: premium performance disk (recommended)
    // * **cloud_essd**: PL1 ESSD
    // * **cloud_essd2**: PL2 ESSD
    // * **cloud_essd3**: PL3 ESSD
    shared_ptr<string> DBInstanceStorageType_ {};
    // The node information.
    shared_ptr<string> DBNodesShrink_ {};
    // The type of specification change. Valid values:
    // 
    // - **Up** (default): Upgrades a subscription instance or upgrades/downgrades a pay-as-you-go instance.
    // - **Down**: Downgrades a subscription instance.
    shared_ptr<string> direction_ {};
    // The time when the new configurations take effect. Valid values:
    // > **Changing some configurations may affect the instance**. Read the impact section in the [feature documentation](https://help.aliyun.com/document_detail/96061.html) before you configure this parameter. Perform the operation during off-peak hours.
    // * **Immediate** (default): The new configurations take effect immediately.
    // * **MaintainTime**: The new configurations take effect during the [maintenance window](https://help.aliyun.com/document_detail/610402.html).
    // * **ScheduleTime**: The new configurations take effect at a specified time. The specified time must be at least 12 hours later than the current time. The actual switchover time follows the formula: EffectiveTime = ScheduleTime + SwitchTime.
    shared_ptr<string> effectiveTime_ {};
    // Specifies whether to enable the [Buffer Pool Extension (BPE) feature](https://help.aliyun.com/document_detail/2527067.html) for premium performance disks. Valid values:
    // 
    // - **1**: Enabled.
    // - **0**: Disabled.
    shared_ptr<string> ioAccelerationEnabled_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The parameter template ID.
    shared_ptr<string> parameterGroupId_ {};
    // The parameters and their values. All parameter values are of the STRING type. You can call DescribeParameterTemplates to query parameter names and values.
    // 
    // > If you specify the **ParameterGroupId** parameter and both the ParameterGroupId and Parameters parameters modify the same parameter, the modification specified by the Parameters parameter takes precedence.
    shared_ptr<string> parametersShrink_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The name of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The scheduled time for executing the parameter modification. The EffectiveTime parameter must be set to ScheduleTime. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // > The specified time must be later than the current time (the time when the call is made).
    shared_ptr<string> switchTime_ {};
    // The [minor engine version](https://help.aliyun.com/document_detail/126002.html) of the PostgreSQL instance. If the specification change fails because the current minor engine version is not supported, specify the minor engine version to **upgrade the minor engine version during the specification change**.
    // 
    // Format: `rds_postgres_<major version>00_<minor version>`. Example for version 12 with minor version 20200830: `rds_postgres_1200_20200830`.
    shared_ptr<string> targetMinorVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
