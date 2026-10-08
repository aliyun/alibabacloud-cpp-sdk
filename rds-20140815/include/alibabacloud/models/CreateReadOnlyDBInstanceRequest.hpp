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
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->bpeEnabled_ == nullptr && this->burstingEnabled_ == nullptr
        && this->category_ == nullptr && this->clientToken_ == nullptr && this->customExtraInfo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->dedicatedHostGroupId_ == nullptr && this->deletionProtection_ == nullptr
        && this->engineVersion_ == nullptr && this->gdnInstanceName_ == nullptr && this->instanceNetworkType_ == nullptr && this->instructionSetArch_ == nullptr && this->ioAccelerationEnabled_ == nullptr
        && this->isAnalyticReadOnlyIns_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->targetDedicatedHostIdForMaster_ == nullptr && this->tddlBizType_ == nullptr && this->tddlRegionConfig_ == nullptr
        && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // autoCreateProxy Field Functions 
    bool hasAutoCreateProxy() const { return this->autoCreateProxy_ != nullptr;};
    void deleteAutoCreateProxy() { this->autoCreateProxy_ = nullptr;};
    inline bool getAutoCreateProxy() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProxy_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoCreateProxy(bool autoCreateProxy) { DARABONBA_PTR_SET_VALUE(autoCreateProxy_, autoCreateProxy) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateReadOnlyDBInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateReadOnlyDBInstanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CreateReadOnlyDBInstanceRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateReadOnlyDBInstanceRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateReadOnlyDBInstanceRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateReadOnlyDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string getCustomExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CreateReadOnlyDBInstanceRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateReadOnlyDBInstanceRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateReadOnlyDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // gdnInstanceName Field Functions 
    bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
    void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
    inline string getGdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
    inline CreateReadOnlyDBInstanceRequest& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instructionSetArch Field Functions 
    bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
    void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
    inline string getInstructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
    inline CreateReadOnlyDBInstanceRequest& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CreateReadOnlyDBInstanceRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isAnalyticReadOnlyIns Field Functions 
    bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
    void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
    inline bool getIsAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
    inline CreateReadOnlyDBInstanceRequest& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateReadOnlyDBInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateReadOnlyDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateReadOnlyDBInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateReadOnlyDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateReadOnlyDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string getTargetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // tddlBizType Field Functions 
    bool hasTddlBizType() const { return this->tddlBizType_ != nullptr;};
    void deleteTddlBizType() { this->tddlBizType_ = nullptr;};
    inline string getTddlBizType() const { DARABONBA_PTR_GET_DEFAULT(tddlBizType_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTddlBizType(string tddlBizType) { DARABONBA_PTR_SET_VALUE(tddlBizType_, tddlBizType) };


    // tddlRegionConfig Field Functions 
    bool hasTddlRegionConfig() const { return this->tddlRegionConfig_ != nullptr;};
    void deleteTddlRegionConfig() { this->tddlRegionConfig_ = nullptr;};
    inline string getTddlRegionConfig() const { DARABONBA_PTR_GET_DEFAULT(tddlRegionConfig_, "") };
    inline CreateReadOnlyDBInstanceRequest& setTddlRegionConfig(string tddlRegionConfig) { DARABONBA_PTR_SET_VALUE(tddlRegionConfig_, tddlRegionConfig) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateReadOnlyDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateReadOnlyDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to automatically create a database proxy. Valid values:
    // 
    // - **true**: enables automatic creation. By default, a general-purpose database proxy is created.
    // 
    // - **false**: does not enable automatic creation of a database proxy.
    shared_ptr<bool> autoCreateProxy_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: enables automatic payment. Make sure that your account balance is sufficient.
    // - **false**: generates an order without charging your account.
    // 
    // 
    // 
    // 
    // > The default value is true. If your payment method has an insufficient balance, set AutoPay to false. In this case, an unpaid order is generated. You can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. This parameter is required only for subscription instances. Valid values:
    // * **true**: enables auto-renewal.
    // * **false**: disables auto-renewal.
    // 
    // > * If you purchase the instance on a monthly basis, the auto-renewal cycle is one month.
    // > * If you purchase the instance on a yearly basis, the auto-renewal cycle is one year.
    shared_ptr<string> autoRenew_ {};
    // Specifies whether to use coupons. Valid values:
    // * **true**: uses coupons.
    // * **false** (default): does not use coupons.
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> bpeEnabled_ {};
    // Specifies whether to enable the I/O performance burst feature for [Premium ESSDs](https://help.aliyun.com/document_detail/2340501.html). Valid values:
    // * **true**: enables the feature.
    // * **false**: disables the feature.
    shared_ptr<bool> burstingEnabled_ {};
    // The instance edition. Valid values:
    // 
    // * **Basic**: Basic Edition
    // * **HighAvailability**: High-availability Edition (default)
    // * **AlwaysOn**: Cluster Edition
    // 
    // <props="china">* **Finance**: Finance Edition
    // 
    // > The read-only instances of ApsaraDB RDS for PostgreSQL cloud disk instances use the Basic Edition. You must set this parameter to **Basic**.
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> customExtraInfo_ {};
    // The instance type. For more information, see [Read-only instance types](https://help.aliyun.com/document_detail/145759.html). We recommend that the specifications of the read-only instance be equal to or higher than those of the primary instance. Otherwise, the read-only instance may experience high latency and heavy loads.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance description. The description must be 2 to 256 characters in length and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter or a Chinese character.
    // > The description cannot start with http:// or https://.
    shared_ptr<string> DBInstanceDescription_ {};
    // The primary instance ID. You can call [DescribeDBInstances](https://help.aliyun.com/document_detail/26232.html) to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Instance storage capacity. Instance storage capacity of the read-only instance must be greater than or equal to that of the primary instance. For more information, see the **Storage capacity** column in [Read-only instance types](https://help.aliyun.com/document_detail/145759.html). The value is incremented in units of 5 GB. Unit: GB.
    // 
    // This parameter is required.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The storage type of the instance. Valid values:
    // * **local_ssd**: Premium Local SSDs
    // * **cloud_ssd**: standard SSDs
    // * **cloud_essd**: PL1 ESSDs
    // * **cloud_essd2**: PL2 ESSDs
    // * **cloud_essd3**: PL3 ESSDs
    // * **general_essd**: Premium ESSDs
    // 
    // 
    // > * If the primary ApsaraDB RDS for MySQL instance uses Premium Local SSDs, only **local_ssd** is supported. If the primary ApsaraDB RDS for MySQL instance uses cloud disks, premium performance disk storage types are supported.
    // > * ApsaraDB RDS for SQL Server supports premium performance disk storage types.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The dedicated cluster ID. This parameter is required when you create a read-only instance in a dedicated cluster.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to enable the release protection feature for the instance. Valid values:
    // * **true**: enables release protection.
    // * **false**: disables release protection. (default)
    // 
    // > This feature is supported only when the **billing method** is **pay-as-you-go**.
    shared_ptr<bool> deletionProtection_ {};
    // The database engine version. The version must be the same as that of the primary instance.
    // 
    // * Valid values for MySQL: **5.6**, **5.7**, and **8.0**.
    // * Valid values for SQL Server: **2017_ent, 2019_ent, and 2022_ent**.
    // * Valid values for PostgreSQL: **10.0, 11.0, 12.0, 13.0, 14.0, and 15.0**.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> gdnInstanceName_ {};
    // The network type of the read-only instance. Valid values:
    // 
    // * **VPC**: virtual private cloud (VPC)
    // * **Classic**: classic network
    // 
    // By default, a VPC-connected instance is created. You must also specify **VPCId** and **VSwitchId**.
    // > The network type of the read-only instance can be different from that of the primary instance.
    shared_ptr<string> instanceNetworkType_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> instructionSetArch_ {};
    // Specifies whether to enable the [Buffer Pool Extension (BPE)](https://help.aliyun.com/document_detail/2527067.html) feature for Premium ESSDs. Valid values:
    // 
    //  - **1**: enables the feature.
    //  - **0**: does not enable the feature.
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether to create a DuckDB-based analytical instance. Valid values:
    // 
    // - **true**: creates a DuckDB-based analytical instance.
    // - **false**: does not create a DuckDB-based analytical instance.
    // 
    // > Only ApsaraDB RDS for MySQL and ApsaraDB RDS for PostgreSQL support DuckDB-based analytical instances.
    shared_ptr<bool> isAnalyticReadOnlyIns_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method. Valid values:
    // * **Postpaid**: pay-as-you-go
    // * **Prepaid**: subscription
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription type of the instance. Valid values:
    // * **Year**: yearly subscription
    // * **Month**: monthly subscription
    shared_ptr<string> period_ {};
    // The port that is initialized when you create a read-only instance for an ApsaraDB RDS for MySQL primary instance.
    // 
    // Valid values: 1000 to 65534.
    shared_ptr<string> port_ {};
    // The internal IP address of the read-only instance. The IP address must be within the address range of the specified vSwitch. The system automatically allocates an internal IP address based on the values of **VPCId** and **VSwitchId** by default.
    shared_ptr<string> privateIpAddress_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The region ID. The read-only instance must reside in the same region as the primary instance. You can call [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The host ID of the primary instance in the dedicated cluster. This parameter is required when you create a read-only instance in a dedicated cluster.
    shared_ptr<string> targetDedicatedHostIdForMaster_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> tddlBizType_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> tddlRegionConfig_ {};
    // The subscription duration. Valid values:
    // * If **Period** is set to **Year**, the valid values of **UsedTime** are **1** to **5**.
    // * If **Period** is set to **Month**, the valid values of **UsedTime** are **1** to **9**.
    // 
    // > This parameter is required when **PayType** is set to **Prepaid**.
    shared_ptr<string> usedTime_ {};
    // The VPC ID of the read-only instance. This parameter is required when **InstanceNetworkType** is left empty or set to **VPC**.
    // 
    // > * If the storage type of the primary instance is Premium Local SSDs, the read-only instance can use any VPC.
    // > * If the storage type of the primary instance is cloud disks, the VPC of the read-only instance must be the same as that of the primary instance.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID of the read-only instance. This parameter is required when **InstanceNetworkType** is left empty or set to **VPC**.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) to query the most recent zone list.
    // 
    // - For single-zone deployment, specify one zone ID, such as `cn-hangzhou-b`.
    // - For multi-zone deployment, specify multiple zone IDs separated by colons (:), such as `cn-hangzhou-b:cn-hangzhou-c`.
    // - The number of specified zones must be less than or equal to the number of nodes in the read-only instance. A Basic Edition read-only instance contains only one node. A High-availability Edition read-only instance contains two nodes (one primary node and one secondary node).
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
