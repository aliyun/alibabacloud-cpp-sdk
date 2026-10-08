// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_TO_JSON(AllowMajorVersionUpgrade, allowMajorVersionUpgrade_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_TO_JSON(CompressionMode, compressionMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(OptimizedWrites, optimizedWrites_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceClass, readOnlyDBInstanceClass_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfiguration, serverlessConfigurationShrink_);
      DARABONBA_PTR_TO_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_FROM_JSON(AllowMajorVersionUpgrade, allowMajorVersionUpgrade_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_FROM_JSON(CompressionMode, compressionMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(OptimizedWrites, optimizedWrites_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceClass, readOnlyDBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfiguration, serverlessConfigurationShrink_);
      DARABONBA_PTR_FROM_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
    };
    ModifyDBInstanceSpecShrinkRequest() = default ;
    ModifyDBInstanceSpecShrinkRequest(const ModifyDBInstanceSpecShrinkRequest &) = default ;
    ModifyDBInstanceSpecShrinkRequest(ModifyDBInstanceSpecShrinkRequest &&) = default ;
    ModifyDBInstanceSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceSpecShrinkRequest() = default ;
    ModifyDBInstanceSpecShrinkRequest& operator=(const ModifyDBInstanceSpecShrinkRequest &) = default ;
    ModifyDBInstanceSpecShrinkRequest& operator=(ModifyDBInstanceSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateStrategy_ == nullptr
        && this->allowMajorVersionUpgrade_ == nullptr && this->autoUseCoupon_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->coldDataEnabled_ == nullptr
        && this->compressionMode_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr
        && this->dedicatedHostGroupId_ == nullptr && this->direction_ == nullptr && this->effectiveTime_ == nullptr && this->engineVersion_ == nullptr && this->ioAccelerationEnabled_ == nullptr
        && this->optimizedWrites_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->promotionCode_ == nullptr
        && this->readOnlyDBInstanceClass_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->serverlessConfigurationShrink_ == nullptr
        && this->sourceBiz_ == nullptr && this->switchTime_ == nullptr && this->targetMinorVersion_ == nullptr && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr && this->zoneIdSlave1_ == nullptr; };
    // allocateStrategy Field Functions 
    bool hasAllocateStrategy() const { return this->allocateStrategy_ != nullptr;};
    void deleteAllocateStrategy() { this->allocateStrategy_ = nullptr;};
    inline string getAllocateStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocateStrategy_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setAllocateStrategy(string allocateStrategy) { DARABONBA_PTR_SET_VALUE(allocateStrategy_, allocateStrategy) };


    // allowMajorVersionUpgrade Field Functions 
    bool hasAllowMajorVersionUpgrade() const { return this->allowMajorVersionUpgrade_ != nullptr;};
    void deleteAllowMajorVersionUpgrade() { this->allowMajorVersionUpgrade_ = nullptr;};
    inline bool getAllowMajorVersionUpgrade() const { DARABONBA_PTR_GET_DEFAULT(allowMajorVersionUpgrade_, false) };
    inline ModifyDBInstanceSpecShrinkRequest& setAllowMajorVersionUpgrade(bool allowMajorVersionUpgrade) { DARABONBA_PTR_SET_VALUE(allowMajorVersionUpgrade_, allowMajorVersionUpgrade) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBInstanceSpecShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline ModifyDBInstanceSpecShrinkRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline ModifyDBInstanceSpecShrinkRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // compressionMode Field Functions 
    bool hasCompressionMode() const { return this->compressionMode_ != nullptr;};
    void deleteCompressionMode() { this->compressionMode_ = nullptr;};
    inline string getCompressionMode() const { DARABONBA_PTR_GET_DEFAULT(compressionMode_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setCompressionMode(string compressionMode) { DARABONBA_PTR_SET_VALUE(compressionMode_, compressionMode) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline ModifyDBInstanceSpecShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // optimizedWrites Field Functions 
    bool hasOptimizedWrites() const { return this->optimizedWrites_ != nullptr;};
    void deleteOptimizedWrites() { this->optimizedWrites_ = nullptr;};
    inline string getOptimizedWrites() const { DARABONBA_PTR_GET_DEFAULT(optimizedWrites_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setOptimizedWrites(string optimizedWrites) { DARABONBA_PTR_SET_VALUE(optimizedWrites_, optimizedWrites) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceSpecShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // readOnlyDBInstanceClass Field Functions 
    bool hasReadOnlyDBInstanceClass() const { return this->readOnlyDBInstanceClass_ != nullptr;};
    void deleteReadOnlyDBInstanceClass() { this->readOnlyDBInstanceClass_ = nullptr;};
    inline string getReadOnlyDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(readOnlyDBInstanceClass_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setReadOnlyDBInstanceClass(string readOnlyDBInstanceClass) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceClass_, readOnlyDBInstanceClass) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceSpecShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverlessConfigurationShrink Field Functions 
    bool hasServerlessConfigurationShrink() const { return this->serverlessConfigurationShrink_ != nullptr;};
    void deleteServerlessConfigurationShrink() { this->serverlessConfigurationShrink_ = nullptr;};
    inline string getServerlessConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigurationShrink_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setServerlessConfigurationShrink(string serverlessConfigurationShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigurationShrink_, serverlessConfigurationShrink) };


    // sourceBiz Field Functions 
    bool hasSourceBiz() const { return this->sourceBiz_ != nullptr;};
    void deleteSourceBiz() { this->sourceBiz_ = nullptr;};
    inline string getSourceBiz() const { DARABONBA_PTR_GET_DEFAULT(sourceBiz_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setSourceBiz(string sourceBiz) { DARABONBA_PTR_SET_VALUE(sourceBiz_, sourceBiz) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
    inline ModifyDBInstanceSpecShrinkRequest& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline ModifyDBInstanceSpecShrinkRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


  protected:
    shared_ptr<string> allocateStrategy_ {};
    // Specifies whether to enable [major engine version upgrade](https://help.aliyun.com/document_detail/127458.html) for the SQL Server instance. Valid values:
    shared_ptr<bool> allowMajorVersionUpgrade_ {};
    // Specifies whether to use coupons to offset fees. Valid values:
    shared_ptr<bool> autoUseCoupon_ {};
    // Specifies whether to enable the [I/O performance burst feature for Premium ESSDs](https://help.aliyun.com/document_detail/2340501.html). Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> burstingEnabled_ {};
    // The [instance edition](https://help.aliyun.com/document_detail/53509.html). Valid values:
    // > This parameter is required if **EngineVersion** is set to a SQL Server version number.
    // <details>
    // <summary>Regular ApsaraDB RDS instances</summary>
    // 
    // - **Basic**: Basic Edition
    // - **HighAvailability**: High-availability Edition
    // - **AlwaysOn**: SQL Server Cluster Edition
    // - **Cluster**: MySQL Cluster Edition.
    // - <props="china">**Finance**: Enterprise Edition
    // 
    // </details>
    // 
    // <details>
    // <summary>Serverless ApsaraDB RDS instances (not supported for MariaDB)</summary>
    // 
    // - **serverless_basic**: Serverless Basic Edition (applicable only to MySQL and PostgreSQL)
    // - **serverless_standard**: Serverless High-availability Edition (applicable only to MySQL and PostgreSQL)
    // - **serverless_ha**: Serverless High-availability Edition (applicable only to SQL Server)
    // 
    // </details>
    shared_ptr<string> category_ {};
    // The [cold data archiving feature](https://help.aliyun.com/document_detail/2701832.html) for premium performance disks. Valid values:
    shared_ptr<bool> coldDataEnabled_ {};
    // The MySQL [storage compression feature](https://help.aliyun.com/document_detail/2861985.html). Valid values:
    shared_ptr<string> compressionMode_ {};
    // The [target instance type](https://help.aliyun.com/document_detail/26312.html). You can call [DescribeAvailableClasses](https://help.aliyun.com/document_detail/610393.html) to query the instance types to which the instance can be changed.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID. You can call [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The [target storage capacity](https://help.aliyun.com/document_detail/26312.html). Unit: GB. You can call [DescribeAvailableClasses](https://help.aliyun.com/document_detail/610393.html) to query the available storage capacity range for the target instance type.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    shared_ptr<string> DBInstanceStorageType_ {};
    // The dedicated cluster ID.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // The type of specification change. Valid values:
    // 
    // - **Up** (default): upgrade of a subscription instance or upgrade/downgrade of a pay-as-you-go instance.
    // - **Down**: downgrade of a subscription instance.
    // - **TempUpgrade**: elastic specification change of a subscription ApsaraDB RDS for SQL Server instance. This value is required for elastic specification changes.
    // - **Serverless**: configuration of elastic settings for a serverless instance.
    // 
    // > If you want to change only the **DBInstanceStorageType** parameter, for example, from standard SSD to ESSD, leave this parameter empty.
    shared_ptr<string> direction_ {};
    // The time when the new configurations take effect. Valid values:
    // > **Changing certain configurations may affect the instance**. Read the [impact section in the feature documentation](https://help.aliyun.com/document_detail/96061.html) before configuring this parameter. Perform this operation during off-peak hours.
    // * **Immediate** (default): The new configurations take effect immediately.
    // * **MaintainTime**: The new configurations take effect during the [maintenance window](https://help.aliyun.com/document_detail/610402.html).
    // * **ScheduleTime**: The new configurations take effect at a specified time. The specified time must be at least 12 hours later than the current time. The actual switchover time follows the rule: EffectiveTime = ScheduleTime + SwitchTime.
    shared_ptr<string> effectiveTime_ {};
    // The database engine version. Valid values:
    // <details>
    // <summary>Regular ApsaraDB RDS instances</summary>
    // 
    // - MySQL: 5.5, 5.6, 5.7, 8.0
    // - SQL Server: 2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, 2019_ent, 2022_web, 2022_std_ha, 2022_ent, 2025_std, 2025_ent
    // - PostgreSQL: 10.0, 11.0, 12.0, 13.0, 14.0, 15.0
    // - MariaDB: 10.3
    // 
    // </details>
    // 
    // <details>
    // <summary>Serverless ApsaraDB RDS instances (MariaDB is not supported)</summary>
    // 
    // - MySQL: 5.7, 8.0
    // - SQL Server: 2016_std_sl, 2017_std_sl, 2019_std_sl
    // - PostgreSQL: 14.0, 15.0, 16.0
    // 
    // </details>
    shared_ptr<string> engineVersion_ {};
    // The [Buffer Pool Extension (BPE) feature](https://help.aliyun.com/document_detail/2527067.html) for premium performance disks. Valid values:
    // 
    // -  **1**: Enabled.
    // -  **0**: Not enabled.
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether to enable the MySQL [16KB atomic write feature](https://help.aliyun.com/document_detail/2858761.html). Valid values:
    shared_ptr<string> optimizedWrites_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method of the instance. Valid values:
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    // - **Serverless** (not supported for MariaDB instances): serverless billing method.
    // 
    // > To change the billing method to Serverless, you **must configure the following parameters**: automatic start and stop (AutoPause), scaling range (MaxCapacity and MinCapacity), and elastic policy (SwitchForce). For more information, see [Introduction to MySQL Serverless instances](https://help.aliyun.com/document_detail/411291.html), [Introduction to SQL Server Serverless instances](https://help.aliyun.com/document_detail/604344.html), and [Introduction to PostgreSQL Serverless instances](https://help.aliyun.com/document_detail/607742.html).
    shared_ptr<string> payType_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The [target instance type of read-only instances](https://help.aliyun.com/document_detail/276980.html) when you perform an Upgrade/Downgrade to change a MySQL high availability (HA) instance with Premium Local SSDs to a cloud disk instance. This parameter is active only when the instance meets the requirements.
    shared_ptr<string> readOnlyDBInstanceClass_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The serverless instance configuration for the specification change.
    shared_ptr<string> serverlessConfigurationShrink_ {};
    // A deprecated parameter. You do not need to configure this parameter.
    shared_ptr<string> sourceBiz_ {};
    // The time at which the specification change is performed. **Perform the specification change during off-peak hours.**
    shared_ptr<string> switchTime_ {};
    // The [minor engine version](https://help.aliyun.com/document_detail/126002.html) of the PostgreSQL instance. If the specification change fails because the minor engine version is not supported, specify this parameter to **upgrade the minor engine version during the specification change**.
    shared_ptr<string> targetMinorVersion_ {};
    // The duration of the SQL Server [elastic upgrade](https://help.aliyun.com/document_detail/95665.html). Unit: days.
    shared_ptr<int64_t> usedTime_ {};
    // The vSwitch ID. The zone of the vSwitch must correspond to the zone ID specified in **ZoneId**.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
    // The zone ID of the secondary node. If this value is the same as **ZoneId**, the instance uses single-zone deployment. If this value is different from **ZoneId**, the instance uses multi-zone deployment.
    shared_ptr<string> zoneIdSlave1_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
