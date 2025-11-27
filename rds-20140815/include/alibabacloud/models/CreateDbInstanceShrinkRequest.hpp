// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBInstanceShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BabelfishConfig, babelfishConfig_);
      DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreateStrategy, createStrategy_);
      DARABONBA_PTR_TO_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBIsIgnoreCase, DBIsIgnoreCase_);
      DARABONBA_PTR_TO_JSON(DBParamGroupId, DBParamGroupId_);
      DARABONBA_PTR_TO_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExternalReplication, externalReplication_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(OptimizedWrites, optimizedWrites_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageThreshold, storageThreshold_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_TO_JSON(SystemDBCharset, systemDBCharset_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(UserBackupId, userBackupId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(WhitelistTemplateList, whitelistTemplateList_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoCreateProxy, autoCreateProxy_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BabelfishConfig, babelfishConfig_);
      DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreateStrategy, createStrategy_);
      DARABONBA_PTR_FROM_JSON(CustomExtraInfo, customExtraInfo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBIsIgnoreCase, DBIsIgnoreCase_);
      DARABONBA_PTR_FROM_JSON(DBParamGroupId, DBParamGroupId_);
      DARABONBA_PTR_FROM_JSON(DBTimeZone, DBTimeZone_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExternalReplication, externalReplication_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(OptimizedWrites, optimizedWrites_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageThreshold, storageThreshold_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_FROM_JSON(SystemDBCharset, systemDBCharset_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForLog, targetDedicatedHostIdForLog_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForMaster, targetDedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(TargetDedicatedHostIdForSlave, targetDedicatedHostIdForSlave_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(UserBackupId, userBackupId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(WhitelistTemplateList, whitelistTemplateList_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave2, zoneIdSlave2_);
    };
    CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest(CreateDBInstanceShrinkRequest &&) = default ;
    CreateDBInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest& operator=(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest& operator=(CreateDBInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->autoCreateProxy_ == nullptr && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->autoUseCoupon_ == nullptr && return this->babelfishConfig_ == nullptr
        && return this->bpeEnabled_ == nullptr && return this->burstingEnabled_ == nullptr && return this->businessInfo_ == nullptr && return this->category_ == nullptr && return this->clientToken_ == nullptr
        && return this->coldDataEnabled_ == nullptr && return this->connectionMode_ == nullptr && return this->connectionString_ == nullptr && return this->createStrategy_ == nullptr && return this->customExtraInfo_ == nullptr
        && return this->DBInstanceClass_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceNetType_ == nullptr && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr
        && return this->DBIsIgnoreCase_ == nullptr && return this->DBParamGroupId_ == nullptr && return this->DBTimeZone_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->dryRun_ == nullptr && return this->encryptionKey_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->externalReplication_ == nullptr
        && return this->instanceNetworkType_ == nullptr && return this->ioAccelerationEnabled_ == nullptr && return this->optimizedWrites_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr
        && return this->port_ == nullptr && return this->privateIpAddress_ == nullptr && return this->promotionCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->roleARN_ == nullptr && return this->securityIPList_ == nullptr && return this->serverlessConfigShrink_ == nullptr && return this->storageAutoScale_ == nullptr
        && return this->storageThreshold_ == nullptr && return this->storageUpperBound_ == nullptr && return this->systemDBCharset_ == nullptr && return this->tag_ == nullptr && return this->targetDedicatedHostIdForLog_ == nullptr
        && return this->targetDedicatedHostIdForMaster_ == nullptr && return this->targetDedicatedHostIdForSlave_ == nullptr && return this->targetMinorVersion_ == nullptr && return this->usedTime_ == nullptr && return this->userBackupId_ == nullptr
        && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->whitelistTemplateList_ == nullptr && return this->zoneId_ == nullptr && return this->zoneIdSlave1_ == nullptr
        && return this->zoneIdSlave2_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDBInstanceShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoCreateProxy Field Functions 
    bool hasAutoCreateProxy() const { return this->autoCreateProxy_ != nullptr;};
    void deleteAutoCreateProxy() { this->autoCreateProxy_ = nullptr;};
    inline bool autoCreateProxy() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProxy_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoCreateProxy(bool autoCreateProxy) { DARABONBA_PTR_SET_VALUE(autoCreateProxy_, autoCreateProxy) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateDBInstanceShrinkRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // babelfishConfig Field Functions 
    bool hasBabelfishConfig() const { return this->babelfishConfig_ != nullptr;};
    void deleteBabelfishConfig() { this->babelfishConfig_ = nullptr;};
    inline string babelfishConfig() const { DARABONBA_PTR_GET_DEFAULT(babelfishConfig_, "") };
    inline CreateDBInstanceShrinkRequest& setBabelfishConfig(string babelfishConfig) { DARABONBA_PTR_SET_VALUE(babelfishConfig_, babelfishConfig) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string bpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CreateDBInstanceShrinkRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateDBInstanceShrinkRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string businessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateDBInstanceShrinkRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDBInstanceShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool coldDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline CreateDBInstanceShrinkRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline CreateDBInstanceShrinkRequest& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateDBInstanceShrinkRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createStrategy Field Functions 
    bool hasCreateStrategy() const { return this->createStrategy_ != nullptr;};
    void deleteCreateStrategy() { this->createStrategy_ = nullptr;};
    inline string createStrategy() const { DARABONBA_PTR_GET_DEFAULT(createStrategy_, "") };
    inline CreateDBInstanceShrinkRequest& setCreateStrategy(string createStrategy) { DARABONBA_PTR_SET_VALUE(createStrategy_, createStrategy) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string customExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CreateDBInstanceShrinkRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateDBInstanceShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBIsIgnoreCase Field Functions 
    bool hasDBIsIgnoreCase() const { return this->DBIsIgnoreCase_ != nullptr;};
    void deleteDBIsIgnoreCase() { this->DBIsIgnoreCase_ = nullptr;};
    inline string DBIsIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(DBIsIgnoreCase_, "") };
    inline CreateDBInstanceShrinkRequest& setDBIsIgnoreCase(string DBIsIgnoreCase) { DARABONBA_PTR_SET_VALUE(DBIsIgnoreCase_, DBIsIgnoreCase) };


    // DBParamGroupId Field Functions 
    bool hasDBParamGroupId() const { return this->DBParamGroupId_ != nullptr;};
    void deleteDBParamGroupId() { this->DBParamGroupId_ = nullptr;};
    inline string DBParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBParamGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setDBParamGroupId(string DBParamGroupId) { DARABONBA_PTR_SET_VALUE(DBParamGroupId_, DBParamGroupId) };


    // DBTimeZone Field Functions 
    bool hasDBTimeZone() const { return this->DBTimeZone_ != nullptr;};
    void deleteDBTimeZone() { this->DBTimeZone_ = nullptr;};
    inline string DBTimeZone() const { DARABONBA_PTR_GET_DEFAULT(DBTimeZone_, "") };
    inline CreateDBInstanceShrinkRequest& setDBTimeZone(string DBTimeZone) { DARABONBA_PTR_SET_VALUE(DBTimeZone_, DBTimeZone) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateDBInstanceShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDBInstanceShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceShrinkRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // externalReplication Field Functions 
    bool hasExternalReplication() const { return this->externalReplication_ != nullptr;};
    void deleteExternalReplication() { this->externalReplication_ = nullptr;};
    inline bool externalReplication() const { DARABONBA_PTR_GET_DEFAULT(externalReplication_, false) };
    inline CreateDBInstanceShrinkRequest& setExternalReplication(bool externalReplication) { DARABONBA_PTR_SET_VALUE(externalReplication_, externalReplication) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateDBInstanceShrinkRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CreateDBInstanceShrinkRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // optimizedWrites Field Functions 
    bool hasOptimizedWrites() const { return this->optimizedWrites_ != nullptr;};
    void deleteOptimizedWrites() { this->optimizedWrites_ = nullptr;};
    inline string optimizedWrites() const { DARABONBA_PTR_GET_DEFAULT(optimizedWrites_, "") };
    inline CreateDBInstanceShrinkRequest& setOptimizedWrites(string optimizedWrites) { DARABONBA_PTR_SET_VALUE(optimizedWrites_, optimizedWrites) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceShrinkRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateDBInstanceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string roleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline CreateDBInstanceShrinkRequest& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceShrinkRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string serverlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string storageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline CreateDBInstanceShrinkRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageThreshold Field Functions 
    bool hasStorageThreshold() const { return this->storageThreshold_ != nullptr;};
    void deleteStorageThreshold() { this->storageThreshold_ = nullptr;};
    inline int32_t storageThreshold() const { DARABONBA_PTR_GET_DEFAULT(storageThreshold_, 0) };
    inline CreateDBInstanceShrinkRequest& setStorageThreshold(int32_t storageThreshold) { DARABONBA_PTR_SET_VALUE(storageThreshold_, storageThreshold) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int32_t storageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0) };
    inline CreateDBInstanceShrinkRequest& setStorageUpperBound(int32_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // systemDBCharset Field Functions 
    bool hasSystemDBCharset() const { return this->systemDBCharset_ != nullptr;};
    void deleteSystemDBCharset() { this->systemDBCharset_ = nullptr;};
    inline string systemDBCharset() const { DARABONBA_PTR_GET_DEFAULT(systemDBCharset_, "") };
    inline CreateDBInstanceShrinkRequest& setSystemDBCharset(string systemDBCharset) { DARABONBA_PTR_SET_VALUE(systemDBCharset_, systemDBCharset) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBInstanceShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBInstanceShrinkRequestTag>) };
    inline vector<CreateDBInstanceShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDBInstanceShrinkRequestTag>) };
    inline CreateDBInstanceShrinkRequest& setTag(const vector<CreateDBInstanceShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBInstanceShrinkRequest& setTag(vector<CreateDBInstanceShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetDedicatedHostIdForLog Field Functions 
    bool hasTargetDedicatedHostIdForLog() const { return this->targetDedicatedHostIdForLog_ != nullptr;};
    void deleteTargetDedicatedHostIdForLog() { this->targetDedicatedHostIdForLog_ = nullptr;};
    inline string targetDedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForLog_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForLog(string targetDedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForLog_, targetDedicatedHostIdForLog) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string targetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // targetDedicatedHostIdForSlave Field Functions 
    bool hasTargetDedicatedHostIdForSlave() const { return this->targetDedicatedHostIdForSlave_ != nullptr;};
    void deleteTargetDedicatedHostIdForSlave() { this->targetDedicatedHostIdForSlave_ = nullptr;};
    inline string targetDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForSlave_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForSlave(string targetDedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForSlave_, targetDedicatedHostIdForSlave) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string targetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceShrinkRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // userBackupId Field Functions 
    bool hasUserBackupId() const { return this->userBackupId_ != nullptr;};
    void deleteUserBackupId() { this->userBackupId_ = nullptr;};
    inline string userBackupId() const { DARABONBA_PTR_GET_DEFAULT(userBackupId_, "") };
    inline CreateDBInstanceShrinkRequest& setUserBackupId(string userBackupId) { DARABONBA_PTR_SET_VALUE(userBackupId_, userBackupId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceShrinkRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // whitelistTemplateList Field Functions 
    bool hasWhitelistTemplateList() const { return this->whitelistTemplateList_ != nullptr;};
    void deleteWhitelistTemplateList() { this->whitelistTemplateList_ = nullptr;};
    inline string whitelistTemplateList() const { DARABONBA_PTR_GET_DEFAULT(whitelistTemplateList_, "") };
    inline CreateDBInstanceShrinkRequest& setWhitelistTemplateList(string whitelistTemplateList) { DARABONBA_PTR_SET_VALUE(whitelistTemplateList_, whitelistTemplateList) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string zoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string zoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // The number of ApsaraDB RDS for MySQL instances that you want to create. The parameter takes effect only when you create multiple ApsaraDB RDS for MySQL instances at a time by using a single request.
    // 
    // Valid values: **1** to **20**. Default value: **1**.
    // 
    // > *   If you want to create multiple ApsaraDB RDS for MySQL instances at a time by using a single request, you can add tags to all the instances by using the **Tag.Key** parameter and the **Tag.Value** parameter. After the instances are created, you can manage the instances based on the tags.
    // > *   After you submit a request to create multiple ApsaraDB RDS for MySQL instances, this operation returns **TaskId**, **RequestId**, and **Message**. You can call the DescribeDBInstanceAttribute operation to query the information about an instance.
    // > *   If the value of the **Engine** parameter is not **MySQL** and the value of the Amount parameter is greater than **1**, this operation fails and returns an error code `InvalidParam.Engine`.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to automatically create a proxy. Valid values:
    // 
    // *   **true**: automatically creates a database proxy. By default, a general-purpose database proxy is created.
    // *   **false**: does not automatically create a database proxy.
    std::shared_ptr<bool> autoCreateProxy_ = nullptr;
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**: enables the feature. Make sure that your account balance is sufficient when you enable automatic payment.
    // *   **false**: does not automatically complete the payment. An unpaid order is generated.
    // 
    // >  Default value: true. If your account balance is insufficient, you can set AutoPay to false to generate an unpaid order. Then, you can log on to the ApsaraDB RDS console to complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal for the instance. You must specify this parameter only if the instance uses the subscription billing method. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > *   The auto-renewal cycle is one month for a monthly subscription.
    // > *   The auto-renewal cycle is one year for a yearly subscription.
    std::shared_ptr<string> autoRenew_ = nullptr;
    // Specifies whether to use a coupon. Default value: false. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If you downgrade the specifications of an instance after you use coupons, the used coupons cannot be refunded.
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    // The configuration of the Babelfish feature for the instance that runs PostgreSQL.
    // 
    // Format:{"babelfishEnabled":"true","migrationMode":"xxxxxxx","masterUsername":"xxxxxxx","masterUserPassword":"xxxxxxxx"}
    // 
    // The following list describes the fields in the format:
    // 
    // *   **babelfishEnabled**: specifies whether to enable Babelfish for the instance. If you set this field to **true**, you enable Babelfish for the instance. If you leave this parameter empty, Babelfish is disabled for the instance.
    // *   **migrationMode**: The migration mode of the instance. Valid values: **single-db** and **multi-db**.
    // *   **masterUsername**: The username of the administrator account. The username can contain lowercase letters, digits, and underscores (_). It must start with a letter and end with a letter or digit. It can be up to 63 characters in length and cannot start with pg.
    // *   **masterUserPassword**: The password of the administrator account. The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. It must be 8 to 32 characters in length. The password can contain any of the following characters: `! @ # $ % ^ & * ( ) _ + - =`.
    // 
    // > This parameter applies only to ApsaraDB RDS for PostgreSQL instances. For more information about Babelfish for ApsaraDB RDS for PostgreSQL, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
    std::shared_ptr<string> babelfishConfig_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> bpeEnabled_ = nullptr;
    // Specifies whether to enable the I/O burst feature of Premium ESSDs. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  For more information about the I/O burst feature of general ESSDs, see [What are Premium ESSDs?](https://help.aliyun.com/document_detail/2340501.html)
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The additional business information about the instance.
    std::shared_ptr<string> businessInfo_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   Regular RDS instance
    // 
    //     *   **Basic**: RDS Basic Edition
    //     *   **HighAvailability**: RDS High-availability Edition
    //     *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL or PostgreSQL
    //     *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server
    //     *   **Finance**: RDS Basic Edition for serverless instances
    // 
    // *   Serverless RDS instance
    // 
    //     *   **serverless_basic**: RDS Basic Edition for serverless instances. This edition is available only for instances that run MySQL and PostgreSQL.
    //     *   **serverless_standard**: RDS High-availability Edition for serverless instances. This edition is available only for instances that run MySQL and PostgreSQL.
    //     *   **serverless_ha**: RDS High-availability Edition for serverless instances. This edition is available only for instances that run SQL Server.
    // 
    // > This parameter is required if PayType is set to Serverless.
    std::shared_ptr<string> category_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable the data archiving feature of Premium ESSDs. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  For more information about the data archiving feature of Premium ESSDs, see [Use the data archiving feature](https://help.aliyun.com/document_detail/2701832.html).
    std::shared_ptr<bool> coldDataEnabled_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **Standard**: standard mode
    // *   **Safe**: database proxy mode
    // 
    // ApsaraDB RDS automatically assigns a connection mode to the instance.
    // 
    // > SQL Server 2012, SQL Server 2016, and SQL Server 2017 support only the standard mode.
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The internal endpoint that is used to connect to the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The policy based on which multiple instances are created. The parameter takes effect only when the value of the **Amount** parameter is greater than 1. Valid values:
    // 
    // *   **Atomicity** (default): atomicity. The instances are all created together. If one instance cannot be created, none of the instances are created.
    // *   **Partial**: non-atomicity. Each instance is independently created. The failure in creating an instance does not affect the creation of the other instances.
    std::shared_ptr<string> createStrategy_ = nullptr;
    std::shared_ptr<string> customExtraInfo_ = nullptr;
    // The instance type of the instance. You can specify an instance type of the standard or YiTian product type. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // To create a serverless instance, set this parameter to one of the following values:
    // 
    // *   If you want to create a serverless instance that runs MySQL on RDS Basic Edition, set this parameter to **mysql.n2.serverless.1c**.
    // *   If you want to create a serverless instance that runs MySQL on RDS High-availability Edition, set this parameter to **mysql.n2.serverless.2c**.
    // *   If you want to create a serverless instance that runs SQL Server, set this parameter to **mssql.mem2.serverless.s2**.
    // *   If you want to create a serverless instance that runs PostgreSQL on RDS Basic Edition, set this parameter to **pg.n2.serverless.1c**.
    // *   If you want to create a serverless instance that runs PostgreSQL on RDS High-availability Edition, set this parameter to **pg.n2.serverless.2c**.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance name. The value must be 2 to 255 characters in length The name can contain letters, digits, and hyphens (-) and must start with a letter.
    // 
    // >  The value cannot start with http:// or https://.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The network connection type of the instance. The value of this parameter is fixed as **Intranet**, indicating an internal network connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The storage capacity of the instance. Unit: GB. The storage capacity increases in increments of 5 GB. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: Premium Local SSD (recommended)
    // *   **general_essd**: Premium Enterprise SSD (ESSD) (recommend)
    // *   **cloud_essd**: PL1 ESSD
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    // *   **cloud_ssd**: standard SSD. This storage type is not recommended. Standard SSDs are no longer available for purchase in some Alibaba Cloud regions.
    // 
    // The default value of this parameter is determined by the instance type specified by the **DBInstanceClass** parameter.
    // 
    // *   If the instance type specifies the Premium Local SSD storage type, the default value of this parameter is **local_ssd**.
    // *   If the instance type specifies the cloud disk storage type, the default value of this parameter is **cloud_essd**.
    // 
    // >  Serverless instances support only PL1 ESSDs and Premium ESSDs.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // Specifies whether the table name is case-sensitive. Valid values:
    // 
    // *   **true**: Table names are not case-sensitive. This is the default value.
    // *   **false**: Table names are case-sensitive.
    std::shared_ptr<string> DBIsIgnoreCase_ = nullptr;
    // The parameter template ID. You can call the DescribeParameterGroups operation to query the parameter template ID.
    // 
    // >  This parameter is available if you want to create an instance that runs MySQL or PostgreSQL. If you do not configure this parameter, the default parameter template is used. If you want to use a custom parameter template, you can customize a parameter template and set this parameter to the ID of the custom template.
    std::shared_ptr<string> DBParamGroupId_ = nullptr;
    // The time zone of the instance. This parameter takes effect only when you set **Engine** to **MySQL** or **PostgreSQL**.
    // 
    // *   **Engine** is set to **MySQL**:
    // 
    //     *   This time zone is in UTC. Valid values: \\*\\*-12:59\\*\\* to **+13:00**.
    //     *   If the instance uses Premium Local SSDs, you can specify the name of the time zone. For example, you can specify the Asia/Hong_Kong time zone. For more information, see [Time zones](https://help.aliyun.com/document_detail/297356.html).
    // 
    // *   **Engine** is set to **PostgreSQL**.
    // 
    //     *   This time zone is not in UTC. For more information, see [Time zones](https://help.aliyun.com/document_detail/297356.html).
    //     *   You can configure this parameter only when the RDS instance uses cloud disks.
    // 
    // > *   You can specify the time zone when you create a primary instance. You cannot specify the time zone when you create a read-only instance. Read-only instances inherit the time zone of their primary instance.
    // > *   If you do not specify this parameter, the system automatically assigns the default time zone of the region in which the instance resides.
    std::shared_ptr<string> DBTimeZone_ = nullptr;
    // The ID of the dedicated cluster to which the instance belongs.
    // 
    // If you create the instance in a dedicated cluster, you must specify this parameter.
    // 
    // *   You can call the DescribeDedicatedHostGroups operation to query the information about the dedicated cluster.
    // *   If no dedicated clusters are created, you can call the CreateDedicatedHostGroup operation to create a dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // Specifies whether to enable the release protection feature for the instance. This feature is available only for pay-as-you-go instances. Valid values:
    // 
    // *   **true**: enables the feature.
    // *   **false** (default): disables the feature.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // Specifies whether to perform a dry run. Default value: false. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors.
    // *   **false** (default): performs a dry run and sends the request. If the request passes the dry run, the instance is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the key that is used for cloud disk encryption in the region in which the instance is deployed. If this parameter is specified, cloud disk encryption is enabled and you must also specify the **RoleARN** parameter. Cloud disk encryption cannot be disabled after it is enabled.
    // 
    // You can obtain the ID of the key in the Key Management Service (KMS) console or create a key. For more information, see [Create a key](https://help.aliyun.com/document_detail/181610.html).
    // 
    // > *   This parameter is not required when you create an instance that runs MySQL, PostgreSQL, or SQL Server. You need to only specify the **RoleARN** parameter to create an instance that has cloud disk encryption enabled by using the obtained key ID.
    // > *   You can configure RAM authorization to require a RAM user to enable cloud disk encryption when the RAM user is used to create an instance. If cloud disk encryption is disabled during the instance creation, the creation operation fails. To complete the configuration, you can attach the following policy to the RAM user: `{"Version":"1","Statement":[{"Effect":"Deny","Action":"rds:CreateDBInstance","Resource":"*","Condition":{"StringEquals":{"rds:DiskEncryptionRequired":"false"}}}]}`
    // 
    // 
    // >Warning: The configuration also affects the CreateOrder operation that is called to create instances in the console.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **MariaDB**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version of the instance.
    // 
    // *   Regular RDS instance
    // 
    //     *   Valid values when you set Engine to MySQL: **5.5**, **5.6**, **5.7**, and **8.0**
    //     *   Valid values when you set Engine to SQLServer: **08r2_ent_ha**(cloud disks, discontinued), **2008r2**(premium local disks, discontinued), **2012**(SQL Server EE Basic), **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_ent_ha**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_ent**, **2017_std_ha**, **2017_web**, **2019_ent**, **2019_std_ha**, **2019_web**, **2022_ent**, **2022_std_ha**, and **2022_web**
    //     *   Valid values when you set Engine to PostgreSQL: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, **15.0**, **16.0**, and **17.0**
    //     *   Valid values when you set Engine to MariaDB: **10.3** and **10.6**
    // 
    // *   Serverless RDS instance
    // 
    //     *   Valid values when you set Engine to MySQL: **5.7** and **8.0**
    //     *   Valid values when you set Engine to SQLServer: **2016_std_sl**, **2017_std_sl**, and **2019_std_sl**
    //     *   Valid values when you set Engine to PostgreSQL: **14.0**, **15.0**, **16.0**, and **17.0**
    // 
    // > 
    // 
    // *   ApsaraDB RDS for MariaDB does not support serverless instances.
    // 
    // *   RDS instances that run SQL Server: `_ent` specifies SQL Server EE (Always On), `_ent_ha` specifies SQL Server EE, `_std_ha` specifies SQL Server SE, and `_web` specifies SQL Server Web.
    // 
    // *   RDS instances that run SQL Server 2014 are not available for purchase on the international site (alibabacloud.com).
    // 
    // *   Babelfish is supported only for RDS instances that run PostgreSQL 15.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<bool> externalReplication_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **Classic**: classic network
    // 
    // > 
    // 
    // *   If the instance runs MySQL and uses cloud disks, you must set this parameter to **VPC**.
    // 
    // *   If the instance runs PostgreSQL or MariaDB, you must set this parameter to **VPC**.
    // 
    // *   If the instance runs SQL Server Basic or SQL Server Web, you can set this parameter to VPC or Classic. If the instance runs other database engines, you must set this parameter to **VPC**.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // Specifies whether to enable Buffer Pool Extension (BPE) of Premium ESSDs. Valid values:
    // 
    // *   **1**: enables BPE.
    // *   **0**: disables BPE.
    // 
    // >  For more information about Buffer Pool Extension(BPE) of Premium ESSDs, see [Buffer Pool Extension(BPE)](https://help.aliyun.com/document_detail/2527067.html).
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    // Specifies whether to enable the 16K atomic write feature. Valid values:
    // 
    // *   **optimized**: enables the 16K atomic write feature.
    // *   **none** (default): does not enable the 16K atomic write feature.
    // 
    // >  For more information, see [Use the 16K atomic write feature](https://help.aliyun.com/document_detail/2858761.html).
    std::shared_ptr<string> optimizedWrites_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    // *   **Serverless**: serverless. This value is not supported for instances that run MariaDB. For more information, see [Overview of serverless ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/411291.html), [Overview of serverless ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/604344.html), and [Overview of serverless ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/607742.html).
    // 
    // > The system automatically generates a purchase order and completes the payment.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    // 
    // >  If you set the PayType parameter to **Prepaid**, you must specify this parameter.
    std::shared_ptr<string> period_ = nullptr;
    // The port. You can initialize the port when you create the instance.
    // 
    // *   Valid values if the instance runs MySQL: 1000 to 65534
    // *   Valid values if the instance runs PostgreSQL, SQL Server, or MariaDB: 1000 to 5999
    std::shared_ptr<string> port_ = nullptr;
    // The private IP address of the instance. The private IP address must be within the CIDR block that is supported by the specified vSwitch. ApsaraDB RDS automatically assigns a private IP address to the instance based on the values of the **VPCId** and **vSwitchId** parameters.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The coupon code.
    std::shared_ptr<string> promotionCode_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/610399.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) that is provided by your Alibaba Cloud account for Resource Access Management (RAM) users. RAM users can use the ARN to connect to ApsaraDB RDS to Key Management Service (KMS). You can call the CheckCloudResourceAuthorized operation to query the ARN.
    // 
    // >  When you enable the encryption, you must specify the RoleARN.
    std::shared_ptr<string> roleARN_ = nullptr;
    // The IP address whitelist of the instance. For more information, see [Configure an IP address whitelist](https://help.aliyun.com/document_detail/43185.html). Separate multiple IP addresses or CIDR blocks with commas (,). You can add up to 1,000 IP addresses or CIDR blocks to the whitelist. The entries in the IP address whitelist must be in one of the following formats:
    // 
    // *   IP addresses, such as 10.10.XX.XX.
    // *   CIDR blocks, such as 10.10.XX.XX/24. In this example, 24 indicates that the prefix of each IP address in the IP address whitelist is 24 bits in length. You can replace 24 with a value within the range of 1 to 32.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The settings of the serverless instance. These parameters are required only when you create a serverless instance.
    // 
    // >  ApsaraDB RDS for MariaDB does not support serverless instances.
    std::shared_ptr<string> serverlessConfigShrink_ = nullptr;
    // Specifies whether to enable the automatic storage expansion feature for the instance. This feature is supported if the instance runs MySQL or PostgreSQL. Valid values:
    // 
    // *   **Enable**: enables the feature.
    // *   **Disable** (default): disables the feature.
    // 
    // >  After the instance is created, you can call the ModifyDasInstanceConfig operation to adjust the settings. For more information, see [Configure automatic storage expansion](https://help.aliyun.com/document_detail/173826.html).
    std::shared_ptr<string> storageAutoScale_ = nullptr;
    // The threshold in percentage based on which automatic storage expansion is triggered.
    // 
    // *   **10**
    // *   **20**
    // *   **30**
    // *   **40**
    // *   **50**
    // 
    // >  If you set the **StorageAutoScale** parameter to **Enable**, you must specify this parameter.
    std::shared_ptr<int32_t> storageThreshold_ = nullptr;
    // The maximum storage capacity that is allowed for automatic storage expansion. The storage capacity of the instance cannot exceed the maximum storage capacity. Unit: GB.
    // 
    // > *   Valid values: an integer greater than or equal to 0.
    // > *   If you set **StorageAutoScale** to **Enable**, you must specify this parameter.
    std::shared_ptr<int32_t> storageUpperBound_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> systemDBCharset_ = nullptr;
    // The tags that are added to instances.
    std::shared_ptr<vector<CreateDBInstanceShrinkRequestTag>> tag_ = nullptr;
    // The ID of the host to which the logger instance belongs in the specified dedicated cluster.
    // 
    // If you want to create an instance that runs RDS Enterprise Edition in a dedicated cluster, you must specify this parameter. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // *   You can call the DescribeDedicatedHosts operation to query the host in the dedicated cluster.
    // *   If no hosts are created, you can call the CreateDedicatedHost operation to create a host.
    std::shared_ptr<string> targetDedicatedHostIdForLog_ = nullptr;
    // The ID of the host to which the instance belongs in the specified dedicated cluster.
    // 
    // If you create the instance in a dedicated cluster, you must specify this parameter. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // *   You can call the DescribeDedicatedHosts operation to query the host in the dedicated cluster.
    // *   If no hosts are created, you can call the CreateDedicatedHost operation to create a host.
    std::shared_ptr<string> targetDedicatedHostIdForMaster_ = nullptr;
    // The ID of the host to which the secondary instance belongs in the specified dedicated cluster.
    // 
    // If you want to create an instance that runs RDS High-availability Edition or RDS Enterprise Edition in a dedicated cluster, you must specify this parameter. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // *   You can call the DescribeDedicatedHosts operation to query the host in the dedicated cluster.
    // *   If no hosts are created, you can call the CreateDedicatedHost operation to create a host.
    std::shared_ptr<string> targetDedicatedHostIdForSlave_ = nullptr;
    // The minor engine version of the instance. This parameter is required only when you create an instance that runs MySQL or PostgreSQL. The value format varies based on the database engine of the instance.
    // 
    // *   If you create an instance that runs MySQL, the value is in the following format: `<RDS edition>_<Minor engine version>`. Examples: `rds_20200229`, `xcluster_20200229`, and `xcluster80_20200229`.
    // 
    //     *   rds: The instance runs RDS Basic Edition or RDS High-availability Edition.
    //     *   xcluster: The instance runs MySQL 5.7 on RDS Enterprise Edition.
    //     *   xcluster80: The instance runs MySQL 8.0 on RDS Enterprise Edition.
    // 
    //     > You can call the DescribeDBMiniEngineVersions operation to query the minor engine version. For more information about the differences between minor engine versions of AliSQL, see [Release notes](https://help.aliyun.com/document_detail/96060.html).
    // 
    // *   If you create an instance that runs PostgreSQL, the value is in the following format: `rds_postgres_<Major engine version>00_<Minor engine version>`. Example: `rds_postgres_1400_20220830`.
    // 
    //     *   1400: The major engine version is PostgreSQL 14.
    //     *   20220830: the AliPG version. You can call the DescribeDBMiniEngineVersions operation to query the AliPG version. For more information about minor engine versions, see [Release notes for AliPG](https://help.aliyun.com/document_detail/126002.html).
    // 
    //     > If you configure the **BabelfishConfig** parameter for your instance that runs PostgreSQL and set the babelfishEnabled field to true, the value of this parameter is in the following format: `rds_postgres_Major engine version00_AliPG version_babelfish`.
    std::shared_ptr<string> targetMinorVersion_ = nullptr;
    // The subscription duration of the instance. Valid values:
    // 
    // *   If you set the **Period** parameter to **Year**, the value of the **UsedTime** parameter ranges from **1 to 5**.
    // *   If you set the **Period** parameter to **Month**, the value of the **UsedTime** parameter ranges from **1 to 11**.
    // 
    // >  If you set the PayType parameter to **Prepaid**, you must also specify this parameter.
    std::shared_ptr<string> usedTime_ = nullptr;
    // The ID of the full backup file. You can call the ListUserBackupFiles operation to query the ID of the full backup file. If you want to create an instance by using the data of a backup file, you must specify this parameter.
    // 
    // This parameter is supported only when the following requirements are met:
    // 
    // *   The **PayType** parameter is set to **Postpaid**.
    // *   The **Engine** parameter is set to **MySQL**.
    // *   The **EngineVersion** parameter is set to **5.7**.
    // *   The **Category** parameter is set to **Basic**.
    std::shared_ptr<string> userBackupId_ = nullptr;
    // The ID of the VPC to which the instance belongs.
    // 
    // > This parameter is available when you set the **InstanceNetworkType** parameter to **VPC**.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID.
    // 
    // *   **Relations with zones**: Specify the vSwitch ID based on the zones in which the vSwitch belongs to. If you specify two vSwitch IDs, make sure that the vSwitch IDs match the zone IDs specified by the ZoneId and ZoneIdSlave1 parameters.
    // *   **Limits on the network type**: Set **InstanceNetworkType** to **VPC**.
    // *   **Limits on multiple vSwitch IDs**: If you set **ZoneSlaveId1** to a value that is not **Auto**, you must specify the IDs of two vSwitches for this parameter and separate the IDs with a comma (,).
    // *   **Limits on characters**: The value cannot contain `spaces` or the following characters: `!` `#` `￥` `&` `%`
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The entries in the whitelist. If you enter multiple IP addresses or CIDR blocks, you must separate the IP addresses or CIDR blocks with commas (,). Do not add spaces preceding or following the commas. Example: `192.168.0.1,172.16.213.9`.
    std::shared_ptr<string> whitelistTemplateList_ = nullptr;
    // The zone ID of the primary instance.
    // 
    // *   If you specify a virtual private cloud (VPC) and a vSwitch, you must specify the ID of the zone to which the specified vSwitch belongs. Otherwise, the instance cannot be created.
    // *   If the instance runs RDS High-availability Edition, you must specify the **ZoneIdSlave1** parameter. The ZoneIdSlave1 parameter specifies whether to use the single-zone deployment method or the multi-zone deployment method.
    // *   If the instance runs RDS Enterprise Edition, you must specify the **ZoneIdSlave1** and **ZoneIdSlave2** parameters. The ZoneIdSlave1 and ZoneIdSlave2 parameters specify whether to use the single-zone deployment method or the multi-zone deployment method.
    // *   If the instance runs MySQL on RDS Cluster Edition, you must specify the **ZoneIdSlave1** parameter for the RDS cluster that has two nodes and the **ZoneIdSlave1** and **ZoneIdSlave2** parameters for the RDS cluster that has three nodes.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone ID of the secondary instance.
    // 
    // *   If you set this parameter to **Auto**, the multi-zone deployment method is used and the zone of the secondary instance is automatically configured.
    // *   If you set this parameter to the same value as the **ZoneId** parameter, the single-zone deployment method is used.
    // *   If you set this parameter to a value that is different from the value of the **ZoneId** parameter, the multiple-zone deployment method is used.
    std::shared_ptr<string> zoneIdSlave1_ = nullptr;
    // The zone ID of the other secondary node. When you create an ApsaraDB RDS for MySQL cluster, you can create one to two secondary nodes for the cluster. This parameter applies if you create a cluster that contains two secondary nodes.
    std::shared_ptr<string> zoneIdSlave2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
