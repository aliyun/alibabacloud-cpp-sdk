// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMTOECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMTOECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class TransformToEcsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformToEcsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsAcrossZone, isAcrossZone_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecondaryIzNo, secondaryIzNo_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, TransformToEcsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsAcrossZone, isAcrossZone_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecondaryIzNo, secondaryIzNo_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    TransformToEcsRequest() = default ;
    TransformToEcsRequest(const TransformToEcsRequest &) = default ;
    TransformToEcsRequest(TransformToEcsRequest &&) = default ;
    TransformToEcsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformToEcsRequest() = default ;
    TransformToEcsRequest& operator=(const TransformToEcsRequest &) = default ;
    TransformToEcsRequest& operator=(TransformToEcsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->chargeType_ == nullptr && this->dryRun_ == nullptr && this->effectiveTime_ == nullptr && this->engineVersion_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->isAcrossZone_ == nullptr && this->izNo_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->period_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secondaryIzNo_ == nullptr
        && this->shardCount_ == nullptr && this->vSwitchId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline TransformToEcsRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline TransformToEcsRequest& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline TransformToEcsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline TransformToEcsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline TransformToEcsRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline TransformToEcsRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline TransformToEcsRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TransformToEcsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isAcrossZone Field Functions 
    bool hasIsAcrossZone() const { return this->isAcrossZone_ != nullptr;};
    void deleteIsAcrossZone() { this->isAcrossZone_ = nullptr;};
    inline bool getIsAcrossZone() const { DARABONBA_PTR_GET_DEFAULT(isAcrossZone_, false) };
    inline TransformToEcsRequest& setIsAcrossZone(bool isAcrossZone) { DARABONBA_PTR_SET_VALUE(isAcrossZone_, isAcrossZone) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline TransformToEcsRequest& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TransformToEcsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TransformToEcsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline TransformToEcsRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TransformToEcsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TransformToEcsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secondaryIzNo Field Functions 
    bool hasSecondaryIzNo() const { return this->secondaryIzNo_ != nullptr;};
    void deleteSecondaryIzNo() { this->secondaryIzNo_ = nullptr;};
    inline string getSecondaryIzNo() const { DARABONBA_PTR_GET_DEFAULT(secondaryIzNo_, "") };
    inline TransformToEcsRequest& setSecondaryIzNo(string secondaryIzNo) { DARABONBA_PTR_SET_VALUE(secondaryIzNo_, secondaryIzNo) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int64_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0L) };
    inline TransformToEcsRequest& setShardCount(int64_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline TransformToEcsRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // - **true**: enables auto-renewal.
    // 
    // - **false**: disables auto-renewal.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal cycle. Unit: month. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // 
    // > This parameter is required if you set **AutoRenew** to **true**.
    shared_ptr<int64_t> autoRenewPeriod_ {};
    // The billing method of the target instance. Valid values:
    // 
    // - **PostPaid**: pay-as-you-go
    // 
    // - **PrePaid**: subscription. If you set this parameter to PrePaid, you must also specify the **Period** parameter.
    shared_ptr<string> chargeType_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run to check the request. The check items include the required parameters, request format, service limits, and available resources. If the check fails, the corresponding error is returned. If the check passes, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): sends a normal request and creates an instance after the request passes the check.
    shared_ptr<bool> dryRun_ {};
    // The time when to switch the database after data migration. Valid values:
    // 
    // - **Immediately**: The database is immediately switched after the migration is complete.
    // 
    // - **MaintainTime**: The database is switched within the maintenance window.
    // 
    // > Default value: **Immediately**.
    shared_ptr<string> effectiveTime_ {};
    // The Redis-compatible version of the instance. Valid values: **5.0**, **6.0**, and **7.0**.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The instance type of the target cloud-native instance. For more information, see [Instance types](https://help.aliyun.com/document_detail/26350.html).
    // 
    // > If you want to convert a cluster instance, you must specify the corresponding cloud-native cluster instance type that includes .with.proxy in its name and specify the ShardCount parameter.
    // >
    // > - For a cluster instance, you must provide the corresponding cloud-native cluster specification that includes `.proxy`. You must also specify the number of shards by using the `ShardCount` parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceClass_ {};
    // The ID of the classic instance that you want to convert.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to deploy the instance across availability zones. This feature is supported only for cluster instances.
    shared_ptr<bool> isAcrossZone_ {};
    // The ID of the availability zone.
    shared_ptr<string> izNo_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription duration. Unit: month. Valid values: **1**, **2**, **3**, **4**, **5**, 6, 7, 8, 9, 12, 24, and 36.
    // 
    // > This parameter is available and required only if you set the **ChargeType** parameter to **PrePaid**.
    shared_ptr<int64_t> period_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the secondary availability zone.
    shared_ptr<string> secondaryIzNo_ {};
    // The number of data shards in the cloud-native cluster instance.
    shared_ptr<int64_t> shardCount_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
