// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. Specifying this parameter binds a tag to the instance.
      // 
      // * If the specified tag key already exists, the tag is directly bound to the instance. You can call ListTagResources to query existing tags.
      // * If the specified tag key does not exist, the tag key is created and then bound to the instance.
      // * Empty strings are not allowed.
      // * This parameter must be used together with **Tag.Value**.
      shared_ptr<string> key_ {};
      // The tag value corresponding to the tag key. Specifying this parameter binds a tag to the instance.
      // 
      // * If the specified tag value already exists under the corresponding tag key, the tag value is directly bound to the instance. You can call ListTagResources to query existing tags.
      // * If the specified tag value does not exist under the corresponding tag key, the tag value is created and then bound to the instance.
      // * This parameter must be used together with **Tag.Key**.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoCreateProxy_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->babelfishConfig_ == nullptr
        && this->bpeEnabled_ == nullptr && this->burstingEnabled_ == nullptr && this->businessInfo_ == nullptr && this->category_ == nullptr && this->clientToken_ == nullptr
        && this->coldDataEnabled_ == nullptr && this->connectionMode_ == nullptr && this->connectionString_ == nullptr && this->createStrategy_ == nullptr && this->customExtraInfo_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceNetType_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr
        && this->DBIsIgnoreCase_ == nullptr && this->DBParamGroupId_ == nullptr && this->DBTimeZone_ == nullptr && this->dedicatedHostGroupId_ == nullptr && this->deletionProtection_ == nullptr
        && this->dryRun_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->externalReplication_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->optimizedWrites_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->roleARN_ == nullptr && this->securityIPList_ == nullptr && this->serverlessConfigShrink_ == nullptr && this->storageAutoScale_ == nullptr
        && this->storageThreshold_ == nullptr && this->storageUpperBound_ == nullptr && this->systemDBCharset_ == nullptr && this->tag_ == nullptr && this->targetDedicatedHostIdForLog_ == nullptr
        && this->targetDedicatedHostIdForMaster_ == nullptr && this->targetDedicatedHostIdForSlave_ == nullptr && this->targetMinorVersion_ == nullptr && this->usedTime_ == nullptr && this->userBackupId_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->whitelistTemplateList_ == nullptr && this->zoneId_ == nullptr && this->zoneIdSlave1_ == nullptr
        && this->zoneIdSlave2_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDBInstanceShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoCreateProxy Field Functions 
    bool hasAutoCreateProxy() const { return this->autoCreateProxy_ != nullptr;};
    void deleteAutoCreateProxy() { this->autoCreateProxy_ = nullptr;};
    inline bool getAutoCreateProxy() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProxy_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoCreateProxy(bool autoCreateProxy) { DARABONBA_PTR_SET_VALUE(autoCreateProxy_, autoCreateProxy) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateDBInstanceShrinkRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // babelfishConfig Field Functions 
    bool hasBabelfishConfig() const { return this->babelfishConfig_ != nullptr;};
    void deleteBabelfishConfig() { this->babelfishConfig_ = nullptr;};
    inline string getBabelfishConfig() const { DARABONBA_PTR_GET_DEFAULT(babelfishConfig_, "") };
    inline CreateDBInstanceShrinkRequest& setBabelfishConfig(string babelfishConfig) { DARABONBA_PTR_SET_VALUE(babelfishConfig_, babelfishConfig) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline CreateDBInstanceShrinkRequest& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateDBInstanceShrinkRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateDBInstanceShrinkRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDBInstanceShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline CreateDBInstanceShrinkRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline CreateDBInstanceShrinkRequest& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateDBInstanceShrinkRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createStrategy Field Functions 
    bool hasCreateStrategy() const { return this->createStrategy_ != nullptr;};
    void deleteCreateStrategy() { this->createStrategy_ = nullptr;};
    inline string getCreateStrategy() const { DARABONBA_PTR_GET_DEFAULT(createStrategy_, "") };
    inline CreateDBInstanceShrinkRequest& setCreateStrategy(string createStrategy) { DARABONBA_PTR_SET_VALUE(createStrategy_, createStrategy) };


    // customExtraInfo Field Functions 
    bool hasCustomExtraInfo() const { return this->customExtraInfo_ != nullptr;};
    void deleteCustomExtraInfo() { this->customExtraInfo_ = nullptr;};
    inline string getCustomExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(customExtraInfo_, "") };
    inline CreateDBInstanceShrinkRequest& setCustomExtraInfo(string customExtraInfo) { DARABONBA_PTR_SET_VALUE(customExtraInfo_, customExtraInfo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateDBInstanceShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBIsIgnoreCase Field Functions 
    bool hasDBIsIgnoreCase() const { return this->DBIsIgnoreCase_ != nullptr;};
    void deleteDBIsIgnoreCase() { this->DBIsIgnoreCase_ = nullptr;};
    inline string getDBIsIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(DBIsIgnoreCase_, "") };
    inline CreateDBInstanceShrinkRequest& setDBIsIgnoreCase(string DBIsIgnoreCase) { DARABONBA_PTR_SET_VALUE(DBIsIgnoreCase_, DBIsIgnoreCase) };


    // DBParamGroupId Field Functions 
    bool hasDBParamGroupId() const { return this->DBParamGroupId_ != nullptr;};
    void deleteDBParamGroupId() { this->DBParamGroupId_ = nullptr;};
    inline string getDBParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBParamGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setDBParamGroupId(string DBParamGroupId) { DARABONBA_PTR_SET_VALUE(DBParamGroupId_, DBParamGroupId) };


    // DBTimeZone Field Functions 
    bool hasDBTimeZone() const { return this->DBTimeZone_ != nullptr;};
    void deleteDBTimeZone() { this->DBTimeZone_ = nullptr;};
    inline string getDBTimeZone() const { DARABONBA_PTR_GET_DEFAULT(DBTimeZone_, "") };
    inline CreateDBInstanceShrinkRequest& setDBTimeZone(string DBTimeZone) { DARABONBA_PTR_SET_VALUE(DBTimeZone_, DBTimeZone) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateDBInstanceShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDBInstanceShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceShrinkRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // externalReplication Field Functions 
    bool hasExternalReplication() const { return this->externalReplication_ != nullptr;};
    void deleteExternalReplication() { this->externalReplication_ = nullptr;};
    inline bool getExternalReplication() const { DARABONBA_PTR_GET_DEFAULT(externalReplication_, false) };
    inline CreateDBInstanceShrinkRequest& setExternalReplication(bool externalReplication) { DARABONBA_PTR_SET_VALUE(externalReplication_, externalReplication) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateDBInstanceShrinkRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline CreateDBInstanceShrinkRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // optimizedWrites Field Functions 
    bool hasOptimizedWrites() const { return this->optimizedWrites_ != nullptr;};
    void deleteOptimizedWrites() { this->optimizedWrites_ = nullptr;};
    inline string getOptimizedWrites() const { DARABONBA_PTR_GET_DEFAULT(optimizedWrites_, "") };
    inline CreateDBInstanceShrinkRequest& setOptimizedWrites(string optimizedWrites) { DARABONBA_PTR_SET_VALUE(optimizedWrites_, optimizedWrites) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateDBInstanceShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceShrinkRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateDBInstanceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline CreateDBInstanceShrinkRequest& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceShrinkRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string getServerlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string getStorageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline CreateDBInstanceShrinkRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageThreshold Field Functions 
    bool hasStorageThreshold() const { return this->storageThreshold_ != nullptr;};
    void deleteStorageThreshold() { this->storageThreshold_ = nullptr;};
    inline int32_t getStorageThreshold() const { DARABONBA_PTR_GET_DEFAULT(storageThreshold_, 0) };
    inline CreateDBInstanceShrinkRequest& setStorageThreshold(int32_t storageThreshold) { DARABONBA_PTR_SET_VALUE(storageThreshold_, storageThreshold) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int32_t getStorageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0) };
    inline CreateDBInstanceShrinkRequest& setStorageUpperBound(int32_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // systemDBCharset Field Functions 
    bool hasSystemDBCharset() const { return this->systemDBCharset_ != nullptr;};
    void deleteSystemDBCharset() { this->systemDBCharset_ = nullptr;};
    inline string getSystemDBCharset() const { DARABONBA_PTR_GET_DEFAULT(systemDBCharset_, "") };
    inline CreateDBInstanceShrinkRequest& setSystemDBCharset(string systemDBCharset) { DARABONBA_PTR_SET_VALUE(systemDBCharset_, systemDBCharset) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBInstanceShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBInstanceShrinkRequest::Tag>) };
    inline vector<CreateDBInstanceShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDBInstanceShrinkRequest::Tag>) };
    inline CreateDBInstanceShrinkRequest& setTag(const vector<CreateDBInstanceShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBInstanceShrinkRequest& setTag(vector<CreateDBInstanceShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetDedicatedHostIdForLog Field Functions 
    bool hasTargetDedicatedHostIdForLog() const { return this->targetDedicatedHostIdForLog_ != nullptr;};
    void deleteTargetDedicatedHostIdForLog() { this->targetDedicatedHostIdForLog_ = nullptr;};
    inline string getTargetDedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForLog_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForLog(string targetDedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForLog_, targetDedicatedHostIdForLog) };


    // targetDedicatedHostIdForMaster Field Functions 
    bool hasTargetDedicatedHostIdForMaster() const { return this->targetDedicatedHostIdForMaster_ != nullptr;};
    void deleteTargetDedicatedHostIdForMaster() { this->targetDedicatedHostIdForMaster_ = nullptr;};
    inline string getTargetDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForMaster_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForMaster(string targetDedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForMaster_, targetDedicatedHostIdForMaster) };


    // targetDedicatedHostIdForSlave Field Functions 
    bool hasTargetDedicatedHostIdForSlave() const { return this->targetDedicatedHostIdForSlave_ != nullptr;};
    void deleteTargetDedicatedHostIdForSlave() { this->targetDedicatedHostIdForSlave_ = nullptr;};
    inline string getTargetDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(targetDedicatedHostIdForSlave_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetDedicatedHostIdForSlave(string targetDedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(targetDedicatedHostIdForSlave_, targetDedicatedHostIdForSlave) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceShrinkRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // userBackupId Field Functions 
    bool hasUserBackupId() const { return this->userBackupId_ != nullptr;};
    void deleteUserBackupId() { this->userBackupId_ = nullptr;};
    inline string getUserBackupId() const { DARABONBA_PTR_GET_DEFAULT(userBackupId_, "") };
    inline CreateDBInstanceShrinkRequest& setUserBackupId(string userBackupId) { DARABONBA_PTR_SET_VALUE(userBackupId_, userBackupId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceShrinkRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // whitelistTemplateList Field Functions 
    bool hasWhitelistTemplateList() const { return this->whitelistTemplateList_ != nullptr;};
    void deleteWhitelistTemplateList() { this->whitelistTemplateList_ = nullptr;};
    inline string getWhitelistTemplateList() const { DARABONBA_PTR_GET_DEFAULT(whitelistTemplateList_, "") };
    inline CreateDBInstanceShrinkRequest& setWhitelistTemplateList(string whitelistTemplateList) { DARABONBA_PTR_SET_VALUE(whitelistTemplateList_, whitelistTemplateList) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


    // zoneIdSlave2 Field Functions 
    bool hasZoneIdSlave2() const { return this->zoneIdSlave2_ != nullptr;};
    void deleteZoneIdSlave2() { this->zoneIdSlave2_ = nullptr;};
    inline string getZoneIdSlave2() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave2_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneIdSlave2(string zoneIdSlave2) { DARABONBA_PTR_SET_VALUE(zoneIdSlave2_, zoneIdSlave2) };


  protected:
    // The number of ApsaraDB RDS for MySQL instances to create. This parameter applies only to batch creation of ApsaraDB RDS for MySQL instances.
    // 
    // Valid values: **1** to **20**. Default value: **1**.
    // 
    // > - When creating multiple ApsaraDB RDS for MySQL instances, consider using **Tag.Key** and **Tag.Value** to tag all instances in the same batch, so that you can manage them by tag after creation.
    // > - After multiple ApsaraDB RDS for MySQL instances are created, the operation returns only **TaskId**, **RequestId**, and **Message**. Other details are not returned. To query the details of individual instances, call DescribeDBInstanceAttribute.
    // > - If **engine** is not set to **MySQL** and this parameter is set to a value greater than **1**, the operation fails and returns the error code `InvalidParam.Engine`.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to automatically create a proxy. Valid values:
    // 
    // - **true**: enables automatic automatic creation. The default proxy type is general-purpose.
    // 
    // - **false**: disables automatic automatic creation.
    shared_ptr<bool> autoCreateProxy_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: enables automatic payment. Make sure that your account balance is sufficient.
    // - **false**: generates an order without deducting fees.
    // 
    // 
    // 
    // 
    // > The default value is true. If your payment method has insufficient balance, set AutoPay to false. This generates an unpaid order, which you can pay for in the ApsaraDB RDS console.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the instance. This parameter is valid only for subscription instances. Valid values:
    // - **true**
    // - **false**
    // 
    // > - If you purchase the instance on a monthly basis, the auto-renewal cycle is one month.
    // > - If you purchase the instance on a yearly basis, the auto-renewal cycle is one year.
    shared_ptr<string> autoRenew_ {};
    // Specifies whether to use a coupon. Valid values:
    // * **true**: uses a coupon.
    // * **false** (default): does not use a coupon.
    // 
    // > If you use a coupon and then perform a downgrade, the amount offset by the coupon is not refunded.
    shared_ptr<bool> autoUseCoupon_ {};
    // The Babelfish configuration for ApsaraDB RDS for PostgreSQL instances.
    // 
    // Configuration format: {"babelfishEnabled":"true","migrationMode":"xxxxxxx","masterUsername":"xxxxxxx","masterUserPassword":"xxxxxxxx"}
    // 
    // The parameters are described as follows:
    // - **babelfishEnabled**: specifies whether to enable Babelfish. Set to **true** to enable. Babelfish is disabled by default if this parameter is not configured.
    // - **migrationMode**: the database mode. Set to **single-db** for single-database mode or **multi-db** for multi-database mode.
    // - **masterUsername**: the initial administrator account name. The name can contain lowercase letters, digits, and underscores (_), must start with a letter, must end with a letter or digit, can be up to 63 characters in length, and cannot start with pg.
    // - **masterUserPassword**: the password of the administrator account. The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The password must be 8 to 32 characters in length. Special characters include `! @ # $ % ^ & * () _ + - =`.
    // 
    // > This parameter applies only to ApsaraDB RDS for PostgreSQL instances. For more information about Babelfish for ApsaraDB RDS for PostgreSQL, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
    shared_ptr<string> babelfishConfig_ {};
    shared_ptr<string> bpeEnabled_ {};
    // Specifies whether to enable the I/O performance burst feature for premium performance disks (cloud disks). Valid values:
    // * **true**: enabled.
    // * **false**: disabled.
    // > For more information about the I/O performance burst feature for premium performance disks, see [What is a premium performance disk](https://help.aliyun.com/document_detail/2340501.html).
    shared_ptr<bool> burstingEnabled_ {};
    // The business extension parameter.
    shared_ptr<string> businessInfo_ {};
    // The instance edition. Valid values:
    // * Regular instances
    //     * **Basic**: Basic Edition.
    //     * **HighAvailability**: High-availability Edition.
    //     * **cluster**: MySQL or PostgreSQL Cluster Edition.
    //     * **AlwaysOn**: SQL Server Cluster Edition.
    //     * **Finance**: RDS Enterprise Edition.
    //     > This parameter is required when you create a SQL Server Enterprise Cluster Edition<props="china">, Basic Edition Standard Edition, or Basic Edition Enterprise Edition instance. For example, to create a Basic Edition 2022 Enterprise Cluster Edition (2022_ent) instance, set this parameter to Basic.
    // * Serverless instances
    //     * **serverless_basic**: Serverless Basic Edition. (Applicable to MySQL and PostgreSQL only.)
    //     * **serverless_standard**: Serverless High-availability Edition. (Applicable to MySQL and PostgreSQL only.)
    //     * **serverless_ha**: SQL Server Serverless High-availability Edition.
    // 
    //     > This parameter is required when PayType is set to Serverless.
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotency of the request. The token is generated by the client and must be unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the [cold data archiving](https://help.aliyun.com/document_detail/2701832.html) feature for premium performance disks (cloud disks). Valid values:
    // 
    // - **true**: enabled.
    // - **false**: disabled.
    shared_ptr<bool> coldDataEnabled_ {};
    // The access mode of the instance. Valid values:
    // * **Standard**: standard access mode.
    // * **Safe**: database proxy mode.
    // 
    // The default value is allocated by the RDS system.
    // > SQL Server 2012, 2016, and 2017 support only standard access mode.
    shared_ptr<string> connectionMode_ {};
    // The internal endpoint of the database.
    // 
    // The endpoint format is `xxx.mysql.rds.aliyuncs.com`, where `xxx` is the prefix of the instance ID, such as rm-uf6wjk5***.
    shared_ptr<string> connectionString_ {};
    // The batch instance creation strategy. This parameter takes effect only when **Amount** is greater than 1. Valid values:
    // * **Atomicity** (default): atomic. All instances in the same batch must be created successfully. If any instance fails to be created, all instances in the batch fail.
    // * **Partial**: non-atomic. The creation of each instance is independent of other instances in the same batch.
    shared_ptr<string> createStrategy_ {};
    shared_ptr<string> customExtraInfo_ {};
    // The instance type. You can specify a standard or YiTian instance type. For details, see [Primary instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // To create a serverless instance, use one of the following values:
    // 
    // - MySQL Basic Edition: **mysql.n2.serverless.1c**
    // - MySQL High-availability Edition: **mysql.n2.serverless.2c**
    // - SQL Server: **mssql.mem2.serverless.s2**
    // - PostgreSQL Basic Edition: **pg.n2.serverless.1c**
    // - PostgreSQL High-availability Edition: **pg.n2.serverless.2c**
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance name. The name must be 2 to 255 characters in length. It must start with a Chinese character or an English letter, and can contain digits, Chinese characters, English letters, and hyphens (-).
    // >The name cannot start with http:// or https://.
    shared_ptr<string> DBInstanceDescription_ {};
    // The network connectivity type of the instance. Set this parameter to **Intranet**, which indicates an internal network connection.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceNetType_ {};
    // The instance storage capacity. Unit: GB. The value increments in steps of 5 GB. For the valid values, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    // * **local_ssd**: instance with Premium Local SSDs (recommended).
    // * **general_essd**: premium performance disk (recommended).
    // * **cloud_essd**: PL1 ESSD.
    // * **cloud_essd2**: PL2 ESSD.
    // * **cloud_essd3**: PL3 ESSD.
    // * **cloud_ssd**: standard SSD (not recommended. No longer available in some regions).
    // 
    // The default value of this parameter is automatically determined based on the instance type specified in **DBInstanceClass**:
    // * If the instance type is an instance with Premium Local SSDs, the default value is **local_ssd**.
    // * If the instance type is a cloud disk type, the default value is **cloud_essd**.
    // 
    // > Serverless instances support only PL1 ESSDs and premium performance disks.
    shared_ptr<string> DBInstanceStorageType_ {};
    // Specifies whether table names are case-insensitive. Valid values:
    // * **true**: case-insensitive (default).
    // * **false**: case-sensitive.
    shared_ptr<string> DBIsIgnoreCase_ {};
    // The parameter template ID. You can call DescribeParameterGroups to query the ID.
    // > This parameter is supported only for MySQL and PostgreSQL instances. If you do not specify this parameter, the system default parameter template is used. You can also create a custom parameter template and specify it here.
    shared_ptr<string> DBParamGroupId_ {};
    // The time zone of the instance. This parameter takes effect only when **Engine** is set to **MySQL** or **PostgreSQL**.
    // 
    // - When **Engine** is **MySQL**:
    //     - This parameter configures the UTC time zone. Valid values: **-12:59** to **+13:00**.
    //     - Instances with Premium Local SSDs support named time zones, such as Asia/Hong_Kong. For more information about named time zones, see [Named time zone reference](https://help.aliyun.com/document_detail/297356.html).
    // - When **Engine** is **PostgreSQL**:
    //     - This parameter configures a named time zone. UTC time zones are not supported. For more information about named time zones, see [Named time zone reference](https://help.aliyun.com/document_detail/297356.html).
    //     - This parameter can be configured only for PostgreSQL instances with cloud disks.
    // 
    // > - You can configure the time zone when creating a primary instance. Read-only instances do not support custom time zones and inherit the time zone of the primary instance.
    // > - If you do not specify this parameter, the system selects a default time zone based on the region where you purchase the instance.
    shared_ptr<string> DBTimeZone_ {};
    // The ID of the dedicated host group.
    // 
    // This parameter is required when you create an ApsaraDB RDS instance in a dedicated cluster.
    // 
    // - You can call DescribeDedicatedHostGroups to query the host group information.
    // - If you have not created a host group, call CreateDedicatedHostGroup to create one.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to enable the release protection feature for the RDS instance. This parameter is supported only for pay-as-you-go instances. Valid values:
    // * **true**: enables release protection.
    // * **false**: disables release protection (default).
    shared_ptr<bool> deletionProtection_ {};
    // Specifies whether to perform a dry run for this instance creation operation. Valid values:
    // * **true**: performs a dry run without creating the instance. The dry run checks the request parameters, request format, business limits, and resource availability.
    // * **false**: sends a normal request and creates the instance directly after the check passes (default).
    shared_ptr<bool> dryRun_ {};
    // The ID of the cloud disk encryption key in the same region. Specifying this parameter enables cloud disk encryption (which cannot be disabled after it is enabled) and requires you to also specify **RoleARN**.
    // 
    // You can view the key ID in the Key Management Service console or create a new key. For more information, see [Create a key](https://help.aliyun.com/document_detail/181610.html).
    // 
    // > - For ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and ApsaraDB RDS for SQL Server instances, you can omit this parameter and specify only **RoleARN** to create a cloud disk-encrypted instance using a service key.
    // > - To allow RAM users to create instances only when cloud disk encryption is enabled, configure the following RAM authorization policy. If cloud disk encryption is not enabled, the RAM user cannot create instances:
    // `{"Version":"1","Statement":[{"Effect":"Deny","Action":"rds:CreateDBInstance","Resource":"*","Condition":{"StringEquals":{"rds:DiskEncryptionRequired":"false"}}}]}`
    // >Warning: This configuration also affects the CreateOrder operation that is called when you create an instance in the console.
    shared_ptr<string> encryptionKey_ {};
    // The database engine type. Valid values:
    // * **MySQL**
    // * **SQLServer**
    // * **PostgreSQL**
    // * **MariaDB**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version. Valid values:
    // * Regular instances
    //     * MySQL: **5.5**, **5.6**, **5.7**, **8.0**
    //     * SQL Server: **08r2_ent_ha** (cloud disk, discontinued), **2008r2** (Premium Local SSD, discontinued), **2012** (Enterprise Edition single-node), **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_ent_ha**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_ent**, **2017_std_ha**, **2017_web**, **2019_ent**, **2019_std_ha**, **2019_web**, **2022_ent**, **2022_std_ha**, **2022_web**, **2025_ent**, **2025_std**
    //     * PostgreSQL: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, **15.0**, **16.0**, **17.0**, **18.0**
    //     * MariaDB: **10.3**, **10.6**
    // * Serverless instances
    //     * MySQL: **5.7**, **8.0**
    //     * SQL Server: **2016_std_sl**, **2017_std_sl**, **2019_std_sl**
    //     * PostgreSQL: **14.0**, **15.0**, **16.0**, **17.0**, **18.0**
    // 
    // > - MariaDB does not support serverless instances.
    // > - In SQL Server instance versions, `_ent` indicates Enterprise Cluster Edition, `_ent_ha` indicates Enterprise Edition, `_std_ha` indicates Standard Edition, and `_web` indicates Web Edition.
    // > - SQL Server 2014 instances are not available on the international site.
    // > - Babelfish for ApsaraDB RDS for PostgreSQL instances support only major version 15.0.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to enable [ApsaraDB RDS for MySQL native replication](https://help.aliyun.com/document_detail/2856526.html). Valid values:
    // - **ON**: enabled.
    // - **OFF**: disabled.
    shared_ptr<bool> externalReplication_ {};
    // The network type of the instance. Valid values:
    // 
    // * **VPC**: virtual private cloud.
    // * **Classic**: classic network.
    // 
    // > * ApsaraDB RDS for MySQL cloud disk instances support only VPCs. Set this parameter to **VPC**.
    // > * ApsaraDB RDS for PostgreSQL and MariaDB instances support only VPCs. Set this parameter to **VPC**.
    // > * ApsaraDB RDS for SQL Server Basic Edition and Web Edition instances support both classic networks and VPCs. All other instances support only VPCs. Set this parameter to **VPC**.
    shared_ptr<string> instanceNetworkType_ {};
    // Specifies whether to enable the [Buffer Pool Extension (BPE)](https://help.aliyun.com/document_detail/2527067.html) feature for premium performance disks (cloud disks). Valid values:
    // 
    //  - **1**: enabled.
    //  - **0**: disabled.
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether to enable the [16KB atomic write](https://help.aliyun.com/document_detail/2858761.html) feature. Valid values:
    // 
    // - **optimized**: enabled.
    // - **none** (default): disabled.
    shared_ptr<string> optimizedWrites_ {};
    // The billing method of the instance. Valid values:
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    // - **Serverless**: serverless billing method. MariaDB instances do not support this billing method. For more information, see [Overview of MySQL Serverless instances](https://help.aliyun.com/document_detail/411291.html), [Overview of SQL Server Serverless instances](https://help.aliyun.com/document_detail/604344.html), and [Overview of PostgreSQL Serverless instances](https://help.aliyun.com/document_detail/607742.html).
    // >The system automatically generates and pays for the order. No manual payment confirmation is required.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription type of the prepaid instance. Valid values:
    // * **Year**: subscription on a yearly basis.
    // * **Month**: subscription on a monthly basis.
    // 
    // > This parameter is required if the billing method is **Prepaid**.
    shared_ptr<string> period_ {};
    // The port to initialize when creating the ApsaraDB RDS instance. Valid values:
    // - MySQL: 1000 to 65534
    // - PostgreSQL, SQL Server, MariaDB: 1000 to 5999
    shared_ptr<string> port_ {};
    // Settings for the internal network IP address of the instance. The IP address must be within the address range of the specified vSwitch. By default, the system automatically allocates an IP address based on **VPCId** and **vSwitchId**.
    shared_ptr<string> privateIpAddress_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/610399.html) to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The global resource descriptor (ARN) that grants the RDS service account authorization to access KMS on behalf of the primary account. You can call CheckCloudResourceAuthorized to query the ARN information.
    // >Notice: You must specify **RoleARN** when you enable cloud disk encryption.
    shared_ptr<string> roleARN_ {};
    // The [IP whitelist](https://help.aliyun.com/document_detail/43185.html) of the instance. Separate multiple entries with commas (,). Duplicate entries are not allowed. You can add up to 1,000 IP addresses or CIDR blocks to a single instance. The following formats are supported:
    // * IP address format, for example: 10.10.XX.XX.
    // * CIDR block format, for example: 10.10.XX.XX/24 (classless inter-domain routing, where 24 indicates the length of the prefix in the address, ranging from 1 to 32).
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
    // The settings for the serverless ApsaraDB RDS instance. This parameter is required when you create a serverless instance.
    // >MariaDB does not support serverless instances.
    shared_ptr<string> serverlessConfigShrink_ {};
    // Specifies whether to enable automatic storage expansion. This parameter is supported only for MySQL and PostgreSQL instances. Valid values:
    // * **Enable**: enables automatic storage expansion.
    // * **Disable**: disables automatic storage expansion (default).
    // 
    // >You can also call ModifyDasInstanceConfig after the instance is created to adjust this setting. For more information, see [Configure automatic storage expansion](https://help.aliyun.com/document_detail/173826.html).
    shared_ptr<string> storageAutoScale_ {};
    // The threshold (percentage) that triggers automatic storage expansion. Valid values:
    // * **10**
    // * **20**
    // * **30**
    // * **40**
    // * **50**
    // 
    // >This parameter is required when **StorageAutoScale** is set to **Enable**.
    shared_ptr<int32_t> storageThreshold_ {};
    // The maximum total storage capacity allowed for automatic storage expansion. Automatic storage expansion does not cause the total storage capacity of the instance to exceed this value. Unit: GB.
    // 
    // > - The value must be greater than or equal to 0.
    // > - This parameter is required when **StorageAutoScale** is set to **Enable**.
    shared_ptr<int32_t> storageUpperBound_ {};
    // This parameter is deprecated. You do not need to configure it.
    shared_ptr<string> systemDBCharset_ {};
    // The list of tags.
    shared_ptr<vector<CreateDBInstanceShrinkRequest::Tag>> tag_ {};
    // The host ID of the logger instance in the dedicated cluster.
    // 
    // This parameter is required when you create an ApsaraDB RDS Enterprise Edition instance in a dedicated cluster. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // - You can call DescribeDedicatedHosts to query the host information in the dedicated cluster.
    // - If you have not added a host, call CreateDedicatedHost to add one.
    shared_ptr<string> targetDedicatedHostIdForLog_ {};
    // The host ID of the primary instance in the dedicated cluster.
    // 
    // This parameter is required when you create an ApsaraDB RDS instance in a dedicated cluster. If you do not specify this parameter, the system automatically assigns a host.
    // 
    // - You can call DescribeDedicatedHosts to query the host information in the host group.
    // - If you have not added a host, call CreateDedicatedHost to add one.
    shared_ptr<string> targetDedicatedHostIdForMaster_ {};
    // The host ID of the secondary instance in the dedicated cluster.
    // 
    // This parameter is required when you create an ApsaraDB RDS High-availability Edition or RDS Enterprise Edition instance in a dedicated cluster. If you do not specify this parameter, the system automatically allocates a host by default.
    // 
    // - You can call DescribeDedicatedHosts to query the host information in the dedicated cluster.
    // - If you have not added a host, call CreateDedicatedHost to add one.
    shared_ptr<string> targetDedicatedHostIdForSlave_ {};
    // The minor engine version of the RDS instance to create. This parameter is required only when you create a MySQL or PostgreSQL instance.
    // Format:
    // * MySQL: `<instance version>_<numeric version number>`. For example, `rds_20200229`, `xcluster_20200229`, or `xcluster80_20200229`. The prefixes are described as follows:
    //     * rds: high availability series or Basic Edition.
    //     * xcluster: MySQL 5.7 RDS Enterprise Edition.
    //     * xcluster80: MySQL 8.0 RDS Enterprise Edition.
    // 
    //     > You can call DescribeDBMiniEngineVersions to query the numeric version number. For differences between versions, see [AliSQL minor version release notes](https://help.aliyun.com/document_detail/96060.html).
    // * PostgreSQL: `rds_postgres_<major version>00_<minor version number>`. For example, `rds_postgres_1400_20220830`. The fields are described as follows:
    //     * 1400: PostgreSQL major version 14.
    //     * 20220830: AliPG minor engine version. You can call DescribeDBMiniEngineVersions to query the minor version number. For differences between versions, see [PostgreSQL minor version release notes](https://help.aliyun.com/document_detail/126002.html).
    // 
    //     > If Babelfish is enabled in **BabelfishConfig**, the minor version format for ApsaraDB RDS for PostgreSQL instances is: `rds_postgres_<major version>00_<AliPG minor version>_babelfish`.
    shared_ptr<string> targetMinorVersion_ {};
    // The subscription duration. Valid values:
    // * If **Period** is set to **Year**, **UsedTime** can be set to **1 to 5**.
    // * If **Period** is set to **Month**, **UsedTime** can be set to **1 to 11**.
    // 
    // > This parameter is required if the billing method is **Prepaid**.
    shared_ptr<string> usedTime_ {};
    // The user backup ID. You can call ListUserBackupFiles to query the ID. Specifying this parameter creates an instance from a user backup.
    // 
    // The following restrictions apply when you specify this parameter:
    // - **PayType** must be set to **Postpaid**.
    // - **Engine** must be set to **MySQL**.
    // - **EngineVersion** must be set to **5.7**.
    // - **Category** must be set to **Basic**.
    shared_ptr<string> userBackupId_ {};
    // The VPC ID.
    // >This parameter takes effect only when **InstanceNetworkType** is set to **VPC**, which indicates the network type is VPC.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    // 
    // - **Zone correspondence**: The zone of the vSwitch must correspond to the zone of the primary node (ZoneId) and the zone of the secondary node (ZoneIdSlave1). If you specify two vSwitch IDs, their order must match the order of ZoneId and ZoneSlaveId1.
    // - **Network type requirement**: **InstanceNetworkType** must be set to **VPC**.
    // - **Multiple vSwitch requirement**: If you specify **ZoneSlaveId1** (the zone ID of the secondary node) and it is not set to **Auto**, you must specify two vSwitch IDs separated by a comma (,).
    // - **Character restriction**: VSwitchId cannot contain special characters such as spaces, `!`, `#`, `￥`, `&`, or `%`.
    shared_ptr<string> vSwitchId_ {};
    // The whitelist. If you need to configure multiple IP addresses, separate them with commas (,) without spaces before or after the commas. Example: `192.168.0.1,172.16.213.9`.
    shared_ptr<string> whitelistTemplateList_ {};
    // The zone ID of the primary node.
    // 
    // - If you specify a VPC and a vSwitch, you must set this parameter to the zone ID of the vSwitch. Otherwise, the instance cannot be created.
    // - For high availability series instances, you must also specify **ZoneIdSlave1** to determine whether the instance uses single-zone or multi-zone deployment.
    // - For RDS Enterprise Edition instances, you must also specify **ZoneIdSlave1** and **ZoneIdSlave2** to determine whether the instance uses single-zone or multi-zone deployment.
    // - For RDS Cluster Edition instances, two-node clusters require **ZoneIdSlave1**, and three-node clusters require both **ZoneIdSlave1** and **ZoneIdSlave2**.
    shared_ptr<string> zoneId_ {};
    // The zone ID of the secondary node.
    // 
    // - If you set this parameter to **Auto**, the instance uses multi-zone deployment and the system automatically selects a zone for the secondary node.
    // - If this parameter is the same as **ZoneId**, the instance uses single-zone deployment.
    // - If this parameter is different from **ZoneId**, the instance uses multi-zone deployment.
    shared_ptr<string> zoneIdSlave1_ {};
    // The zone ID of the second secondary node. ApsaraDB RDS for MySQL Cluster Edition instances support creating one or two secondary nodes when you create the instance. If you need this, use this parameter to specify the zone of the second secondary node.
    shared_ptr<string> zoneIdSlave2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
