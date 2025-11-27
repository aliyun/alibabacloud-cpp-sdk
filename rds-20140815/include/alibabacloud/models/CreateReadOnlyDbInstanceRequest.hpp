// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREADONLYDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREADONLYDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateReadOnlyDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReadOnlyDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(TddlBizType, tddlBizType_);
      DARABONBA_PTR_TO_JSON(TddlRegionConfig, tddlRegionConfig_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReadOnlyDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstructionSetArch, instructionSetArch_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(TddlBizType, tddlBizType_);
      DARABONBA_PTR_FROM_JSON(TddlRegionConfig, tddlRegionConfig_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateReadOnlyDBInstanceRequest() = default ;
    CreateReadOnlyDBInstanceRequest(const CreateReadOnlyDBInstanceRequest &) = default ;
    CreateReadOnlyDBInstanceRequest(CreateReadOnlyDBInstanceRequest &&) = default ;
    CreateReadOnlyDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReadOnlyDBInstanceRequest() = default ;
    CreateReadOnlyDBInstanceRequest& operator=(const CreateReadOnlyDBInstanceRequest &) = default ;
    CreateReadOnlyDBInstanceRequest& operator=(CreateReadOnlyDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateProxy_ == nullptr
        && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->autoUseCoupon_ == nullptr && return this->bpeEnabled_ == nullptr && return this->burstingEnabled_ == nullptr
        && return this->category_ == nullptr && return this->clientToken_ == nullptr && return this->customExtraInfo_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->engineVersion_ == nullptr && return this->gdnInstanceName_ == nullptr && return this->instanceNetworkType_ == nullptr && return this->instructionSetArch_ == nullptr && return this->ioAccelerationEnabled_ == nullptr
        && return this->isAnalyticReadOnlyIns_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr
        && return this->port_ == nullptr && return this->privateIpAddress_ == nullptr && return this->promotionCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->targetDedicatedHostIdForMaster_ == nullptr && return this->tddlBizType_ == nullptr && return this->tddlRegionConfig_ == nullptr
        && return this->usedTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoCreateProxy Field Functions 
    bool hasAutoCreateProxy() const { return this->autoCreateProxy_ != nullptr;};
    void deleteAutoCreateProxy() { this->autoCreateProxy_ = nullptr;};
    inline bool autoCreateProxy() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProxy_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoCreateProxy(bool autoCreateProxy) { DARABONBA_PTR_SET_VALUE(autoCreateProxy_, autoCreateProxy) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateReadOnlyDBInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string bpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CreateReadOnlyDBInstanceRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateReadOnlyDBInstanceRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateReadOnlyDBInstanceRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateReadOnlyDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string customExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CreateReadOnlyDBInstanceRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateReadOnlyDBInstanceRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateReadOnlyDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // gdnInstanceName Field Functions 
    bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
    void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
    inline string gdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
    inline CreateReadOnlyDBInstanceRequest& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instructionSetArch Field Functions 
    bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
    void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
    inline string instructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
    inline CreateReadOnlyDBInstanceRequest& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CreateReadOnlyDBInstanceRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isAnalyticReadOnlyIns Field Functions 
    bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
    void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
    inline bool isAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
    inline CreateReadOnlyDBInstanceRequest& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateReadOnlyDBInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateReadOnlyDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateReadOnlyDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateReadOnlyDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string targetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // tddlBizType Field Functions 
    bool hasTddlBizType() const { return this->tddlBizType_ != nullptr;};
    void deleteTddlBizType() { this->tddlBizType_ = nullptr;};
    inline string tddlBizType() const { DARABONBA_PTR_GET_DEFAULT(tddlBizType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTddlBizType(string tddlBizType) { DARABONBA_PTR_SET_VALUE(tddlBizType_, tddlBizType) };


    // tddlRegionConfig Field Functions 
    bool hasTddlRegionConfig() const { return this->tddlRegionConfig_ != nullptr;};
    void deleteTddlRegionConfig() { this->tddlRegionConfig_ = nullptr;};
    inline string tddlRegionConfig() const { DARABONBA_PTR_GET_DEFAULT(tddlRegionConfig_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTddlRegionConfig(string tddlRegionConfig) { DARABONBA_PTR_SET_VALUE(tddlRegionConfig_, tddlRegionConfig) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateReadOnlyDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to automatically create database proxies. Valid values:
    // 
    // *   **true**: automatically creates database proxies. By default, general-purpose database proxies are created.
    // *   **false**: does not automatically create database proxies.
    std::shared_ptr<bool> autoCreateProxy_ = nullptr;
    // Specifies whether to automatically complete the payment. Valid values:
    // 
    // 1.  **true**: automatically completes the payment. Make sure that your account balance is sufficient.
    // 2.  **false**: does not automatically complete the payment. An unpaid order is generated.
    // 
    // >  Default value: true. If your account balance is insufficient, you can set the AutoPay parameter to false to generate an unpaid order. Then, you can log on to the ApsaraDB RDS console to complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable the auto-renewal feature for the read-only instance. If you set the PayType parameter to Prepaid, you must also specify this parameter. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false**: disables the feature.
    // 
    // > * If you set the Period parameter to Month, the auto-renewal cycle is one month.
    // > * If you set the Period parameter to Year, the auto-renewal cycle is one year.
    std::shared_ptr<string> autoRenew_ = nullptr;
    // Specifies whether to use a coupon. Valid values:
    // 
    // *   **true**: uses a coupon.
    // *   **false** (default): does not use a coupon.
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    // A reserved parameter. You do not need to specify this parameter.
    std::shared_ptr<string> bpeEnabled_ = nullptr;
    // An invalid parameter. You do not need to specify this parameter.
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability** (default): RDS High-availability Edition
    // *   **AlwaysOn**: RDS Cluster Edition
    // 
    // >  The read-only instances of the primary instance that run PostgreSQL and use cloud disks run RDS Basic Edition. Therefore, set this parameter to **Basic**.
    std::shared_ptr<string> category_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> customExtraInfo_ = nullptr;
    // The instance type of the read-only instance. For more information, see [Read-only instance types](https://help.aliyun.com/document_detail/145759.html). We recommend that you specify an instance type whose specifications are higher than or equal to the specifications of the instance type of the primary instance. If the specifications of the read-only instance are lower than the specifications of the primary instance, the read-only instance may encounter issues such as high latency and heavy load.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The description of the read-only instance. The description must be 2 to 256 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The value must start with a letter
    // 
    // > The value cannot start with [http:// or https://.](http://https://。)
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The primary instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The storage capacity of the read-only instance. The storage capacity of the read-only instance must be greater than or equal to that of the primary instance. For more information, see the **Storage capacity** column in [Read-only instance types](https://help.aliyun.com/document_detail/145759.html). This value must be a multiple of 5. Unit: GB.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: local SSDs
    // *   **cloud_ssd**: standard SSDs
    // *   **cloud_essd**: enhanced SSDs (ESSDs) of performance level 1 (PL1)
    // *   **cloud_essd2**: ESSDs of PL2
    // *   **cloud_essd3**: ESSDs of PL3
    // 
    // > *   If the primary instance runs MySQL with local disks, you must set this parameter to **local_ssd**. If the primary instance runs MySQL with cloud disks, you must set this parameter to cloud_ssd, cloud_essd, cloud_essd2, or cloud_essd3.
    // > *   If the primary instance runs SQL Server, you must set this parameter to cloud_ssd, cloud_essd, cloud_essd2, or cloud_essd3.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The ID of the dedicated cluster to which the read-only instance belongs. This parameter is valid when you create the read-only instance in a dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // Specifies whether to enable the release protection feature for the read-only instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  You can enable the release protection feature for the read-only instance only when you set the **PayType** parameter to **Postpaid**.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The version of the database engine. The read-only instance and the primary instance must run the same major engine version.
    // 
    // *   If the read-only instance runs MySQL, set this parameter to **5.6**, **5.7**, or **8.0**.
    // *   If the read-only instance runs MySQL, set this parameter to **2017_ent, 2019_ent, or 2022_ent**.
    // *   If the read-only instance runs PostgreSQL, set this parameter to **10.0, 11.0, 12.0, 13.0, 14.0, or 15.0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> gdnInstanceName_ = nullptr;
    // The network type of the read-only instance. Valid values:
    // 
    // *   **VPC**
    // *   **Classic**
    // 
    // Default value: VPC. If you set this parameter to VPC, you must also specify the **VPCId** and **VSwitchId** parameters.
    // 
    // >  The network type of the read-only instance can be different from the network type of the primary instance.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> instructionSetArch_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    std::shared_ptr<bool> isAnalyticReadOnlyIns_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the read-only instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The renewal cycle of the read-only instance. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    std::shared_ptr<string> period_ = nullptr;
    // The port that can be initialized when you create a read-only ApsaraDB RDS for MySQL instance.
    // 
    // Valid values: 1000 to 65534.
    std::shared_ptr<string> port_ = nullptr;
    // The private IP address of the read-only instance. The private IP address must be within the CIDR block that is supported by the specified vSwitch. The system assigns a private IP address to the read-only instance based on the values of the **VPCId** and **VSwitchId** parameters.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The coupon code.
    std::shared_ptr<string> promotionCode_ = nullptr;
    // The region ID. The read-only instance and the primary instance must reside in the same region. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the host on which the primary instance resides. This parameter is valid when you create the read-only instance in a dedicated cluster.
    std::shared_ptr<string> targetDedicatedHostIdForMaster_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> tddlBizType_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> tddlRegionConfig_ = nullptr;
    // The subscription duration of the read-only instance. Valid values:
    // 
    // *   If you set the **Period** parameter to **Year**, the value of the **UsedTime** parameter ranges from **1** to **5**.
    // *   If you set the **Period** parameter to **Month**, the value of the **UsedTime** parameter ranges from **1** to **9**.
    // 
    // > If you set the **PayType** parameter to **Prepaid**, you must specify the UsedTime parameter.
    std::shared_ptr<string> usedTime_ = nullptr;
    // The virtual private cloud (VPC) ID of the read-only instance. If you leave the **InstanceNetworkType** parameter empty or set it to **VPC**, you must also specify this parameter.
    // 
    // > * If the primary instance uses local disks, the read-only instance and the primary instance can belong to the same VPC or different VPCs.
    // > * If the primary instance uses cloud disks, the read-only instance and the primary instance must belong to the same VPC.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the read-only instance. If you leave the **InstanceNetworkType** parameter empty or set it to **VPC**, you must specify the VSwitchId parameter.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID. You can call the DescribeRegions operation to query the zone ID.
    // 
    // *   If you use the single-zone deployment method, set this parameter to the ID of one zone. Example: `cn-hangzhou-b`.
    // *   If you use the multi-zone deployment method, set this parameter to the IDs of multiple zones and separate the IDs with colons (:). Example: `cn-hangzhou-b:cn-hangzhou-c`.
    // *   The number of zone IDs that you specify must be less than or equal to the number of nodes created for the read-only instance. If you create a read-only instance that runs RDS Basic Edition, only one node is provisioned. If you create a read-only instance that runs RDS High-availability Edition, one primary node and one secondary node are provisioned.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
