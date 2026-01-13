// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSpecRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ServerlessConfiguration, serverlessConfiguration_);
      DARABONBA_PTR_TO_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdSlave1, zoneIdSlave1_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSpecRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ServerlessConfiguration, serverlessConfiguration_);
      DARABONBA_PTR_FROM_JSON(SourceBiz, sourceBiz_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdSlave1, zoneIdSlave1_);
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
    class ServerlessConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerlessConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
        DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
        DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
      };
      friend void from_json(const Darabonba::Json& j, ServerlessConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
        DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
        DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
      };
      ServerlessConfiguration() = default ;
      ServerlessConfiguration(const ServerlessConfiguration &) = default ;
      ServerlessConfiguration(ServerlessConfiguration &&) = default ;
      ServerlessConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerlessConfiguration() = default ;
      ServerlessConfiguration& operator=(const ServerlessConfiguration &) = default ;
      ServerlessConfiguration& operator=(ServerlessConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPause_ == nullptr
        && this->maxCapacity_ == nullptr && this->minCapacity_ == nullptr && this->switchForce_ == nullptr; };
      // autoPause Field Functions 
      bool hasAutoPause() const { return this->autoPause_ != nullptr;};
      void deleteAutoPause() { this->autoPause_ = nullptr;};
      inline bool getAutoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
      inline ServerlessConfiguration& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


      // maxCapacity Field Functions 
      bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
      void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
      inline double getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0.0) };
      inline ServerlessConfiguration& setMaxCapacity(double maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


      // minCapacity Field Functions 
      bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
      void deleteMinCapacity() { this->minCapacity_ = nullptr;};
      inline double getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0.0) };
      inline ServerlessConfiguration& setMinCapacity(double minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


      // switchForce Field Functions 
      bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
      void deleteSwitchForce() { this->switchForce_ = nullptr;};
      inline bool getSwitchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
      inline ServerlessConfiguration& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


    protected:
      // Specifies whether to enable the automatic start and stop feature for the serverless instance that runs MySQL or PostgreSQL. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // >  After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection to the instance is established, the instance is automatically resumed.
      shared_ptr<bool> autoPause_ {};
      // The **maximum** number of RDS Capacity Units (RCUs). Valid values:
      // 
      // *   Serverless ApsaraDB RDS for MySQL instances: **1 to 32**
      // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 16**. Only integers are supported.
      // *   Serverless ApsaraDB RDS for PostgreSQL instances: **1 to 14**
      // 
      // >  The value of this parameter must be greater than or equal to the value of **MinCapacity**.
      shared_ptr<double> maxCapacity_ {};
      // The minimum number of RCUs. Valid values:****
      // 
      // *   Serverless ApsaraDB RDS for MySQL instances: **0.5 to 32**.
      // *   Serverless ApsaraDB RDS for SQL Server instances: **2 to 8**. Only integers are supported.
      // *   Serverless ApsaraDB RDS for PostgreSQL instances: **0.5 to 14**.
      // 
      // >  The value of this parameter must be less than or equal to the value of MaxCapacity.
      shared_ptr<double> minCapacity_ {};
      // Specifies whether to enable the forceful scaling feature for the serverless instance that runs MySQL or PostgreSQL. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // > 
      // 
      // *   If you set this parameter to true, **a service interruption that lasts 30 to 120 seconds occurs during forced scaling**. Process with caution.
      // 
      // *   The RCU scaling for a serverless instance immediately takes effect. In some cases, such as the execution of large transactions, the scaling does not immediately take effect. In this case, you can enable this feature to forcefully scale the RCUs of the instance.
      shared_ptr<bool> switchForce_ {};
    };

    virtual bool empty() const override { return this->allowMajorVersionUpgrade_ == nullptr
        && this->autoUseCoupon_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->coldDataEnabled_ == nullptr && this->compressionMode_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->dedicatedHostGroupId_ == nullptr
        && this->direction_ == nullptr && this->effectiveTime_ == nullptr && this->engineVersion_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->optimizedWrites_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->promotionCode_ == nullptr && this->readOnlyDBInstanceClass_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->serverlessConfiguration_ == nullptr && this->sourceBiz_ == nullptr
        && this->switchTime_ == nullptr && this->targetMinorVersion_ == nullptr && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr
        && this->zoneIdSlave1_ == nullptr; };
    // allowMajorVersionUpgrade Field Functions 
    bool hasAllowMajorVersionUpgrade() const { return this->allowMajorVersionUpgrade_ != nullptr;};
    void deleteAllowMajorVersionUpgrade() { this->allowMajorVersionUpgrade_ = nullptr;};
    inline bool getAllowMajorVersionUpgrade() const { DARABONBA_PTR_GET_DEFAULT(allowMajorVersionUpgrade_, false) };
    inline ModifyDBInstanceSpecRequest& setAllowMajorVersionUpgrade(bool allowMajorVersionUpgrade) { DARABONBA_PTR_SET_VALUE(allowMajorVersionUpgrade_, allowMajorVersionUpgrade) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBInstanceSpecRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline ModifyDBInstanceSpecRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyDBInstanceSpecRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline ModifyDBInstanceSpecRequest& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // compressionMode Field Functions 
    bool hasCompressionMode() const { return this->compressionMode_ != nullptr;};
    void deleteCompressionMode() { this->compressionMode_ = nullptr;};
    inline string getCompressionMode() const { DARABONBA_PTR_GET_DEFAULT(compressionMode_, "") };
    inline ModifyDBInstanceSpecRequest& setCompressionMode(string compressionMode) { DARABONBA_PTR_SET_VALUE(compressionMode_, compressionMode) };


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
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline ModifyDBInstanceSpecRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline ModifyDBInstanceSpecRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline ModifyDBInstanceSpecRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyDBInstanceSpecRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBInstanceSpecRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline ModifyDBInstanceSpecRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline ModifyDBInstanceSpecRequest& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // optimizedWrites Field Functions 
    bool hasOptimizedWrites() const { return this->optimizedWrites_ != nullptr;};
    void deleteOptimizedWrites() { this->optimizedWrites_ = nullptr;};
    inline string getOptimizedWrites() const { DARABONBA_PTR_GET_DEFAULT(optimizedWrites_, "") };
    inline ModifyDBInstanceSpecRequest& setOptimizedWrites(string optimizedWrites) { DARABONBA_PTR_SET_VALUE(optimizedWrites_, optimizedWrites) };


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


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyDBInstanceSpecRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBInstanceSpecRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // readOnlyDBInstanceClass Field Functions 
    bool hasReadOnlyDBInstanceClass() const { return this->readOnlyDBInstanceClass_ != nullptr;};
    void deleteReadOnlyDBInstanceClass() { this->readOnlyDBInstanceClass_ = nullptr;};
    inline string getReadOnlyDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(readOnlyDBInstanceClass_, "") };
    inline ModifyDBInstanceSpecRequest& setReadOnlyDBInstanceClass(string readOnlyDBInstanceClass) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceClass_, readOnlyDBInstanceClass) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBInstanceSpecRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


    // serverlessConfiguration Field Functions 
    bool hasServerlessConfiguration() const { return this->serverlessConfiguration_ != nullptr;};
    void deleteServerlessConfiguration() { this->serverlessConfiguration_ = nullptr;};
    inline const ModifyDBInstanceSpecRequest::ServerlessConfiguration & getServerlessConfiguration() const { DARABONBA_PTR_GET_CONST(serverlessConfiguration_, ModifyDBInstanceSpecRequest::ServerlessConfiguration) };
    inline ModifyDBInstanceSpecRequest::ServerlessConfiguration getServerlessConfiguration() { DARABONBA_PTR_GET(serverlessConfiguration_, ModifyDBInstanceSpecRequest::ServerlessConfiguration) };
    inline ModifyDBInstanceSpecRequest& setServerlessConfiguration(const ModifyDBInstanceSpecRequest::ServerlessConfiguration & serverlessConfiguration) { DARABONBA_PTR_SET_VALUE(serverlessConfiguration_, serverlessConfiguration) };
    inline ModifyDBInstanceSpecRequest& setServerlessConfiguration(ModifyDBInstanceSpecRequest::ServerlessConfiguration && serverlessConfiguration) { DARABONBA_PTR_SET_RVALUE(serverlessConfiguration_, serverlessConfiguration) };


    // sourceBiz Field Functions 
    bool hasSourceBiz() const { return this->sourceBiz_ != nullptr;};
    void deleteSourceBiz() { this->sourceBiz_ = nullptr;};
    inline string getSourceBiz() const { DARABONBA_PTR_GET_DEFAULT(sourceBiz_, "") };
    inline ModifyDBInstanceSpecRequest& setSourceBiz(string sourceBiz) { DARABONBA_PTR_SET_VALUE(sourceBiz_, sourceBiz) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ModifyDBInstanceSpecRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline ModifyDBInstanceSpecRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
    inline ModifyDBInstanceSpecRequest& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBInstanceSpecRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBInstanceSpecRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdSlave1 Field Functions 
    bool hasZoneIdSlave1() const { return this->zoneIdSlave1_ != nullptr;};
    void deleteZoneIdSlave1() { this->zoneIdSlave1_ = nullptr;};
    inline string getZoneIdSlave1() const { DARABONBA_PTR_GET_DEFAULT(zoneIdSlave1_, "") };
    inline ModifyDBInstanceSpecRequest& setZoneIdSlave1(string zoneIdSlave1) { DARABONBA_PTR_SET_VALUE(zoneIdSlave1_, zoneIdSlave1) };


  protected:
    // Specifies whether to upgrade the major engine version of an ApsaraDB RDS for SQL Server instance. For more information, see [Upgrade the major engine version](https://help.aliyun.com/document_detail/127458.html). Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > *   When you upgrade the major engine version, you must also specify the required parameters such as DBInstanceId, EngineVersion, DBInstanceClass, Category, ZoneId, and VSwitchId.
    // > *   If you want to upgrade the instance edition to RDS High-availability Edition or RDS Cluster Edition, you must specify ZoneIdSlave1.
    shared_ptr<bool> allowMajorVersionUpgrade_ {};
    // Specifies whether to use vouchers to offset fees. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> autoUseCoupon_ {};
    // An invalid parameter. You do not need to specify this parameter.
    shared_ptr<bool> burstingEnabled_ {};
    // The RDS edition of the instance. Valid values:
    // 
    // >  If you set **EngineVersion** to an SQL Server version number, you must also specify this parameter.
    // 
    // **Regular RDS instances**
    // 
    // *   **Basic**: RDS Basic Edition.
    // *   **HighAvailability**: RDS High-availability Edition.
    // *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server.
    // *   **Cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL.
    // 
    // **Serverless instances. ApsaraDB RDS for MariaDB does not support serverless instances.**
    // 
    // *   **serverless_basic**: RDS Basic Edition. This edition is available only for serverless instances that run MySQL and PostgreSQL.
    // *   **serverless_standard**: RDS High-availability Edition. This edition is available only for serverless instances that run MySQL and PostgreSQL.
    // *   **serverless_ha**: RDS High-availability Edition for serverless instances. This edition is available only for instances that run SQL Server.
    shared_ptr<string> category_ {};
    // A reserved parameter.
    shared_ptr<bool> coldDataEnabled_ {};
    // Specifies whether to enable the storage compression feature for the ApsaraDB RDS for MySQL instance. For more information, see [Use the storage compression feature](https://help.aliyun.com/document_detail/2861985.html). Valid values:
    // 
    // *   **on**
    // *   **off**
    shared_ptr<string> compressionMode_ {};
    // The instance type of the new instance. For more information, see [Specifications](https://help.aliyun.com/document_detail/26312.html). You can call the [DescribeAvailableClasses](https://help.aliyun.com/document_detail/610393.html) operation to query the instance types.
    // 
    // > *   You must specify at least one of DBInstanceClass and **DBInstanceStorage**.
    // > *   You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html) operation to query the current instance type of the instance.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance ID. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to query the instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The storage capacity of the new instance. Unit: GB. For more information, see [Storage types](https://help.aliyun.com/document_detail/26312.html). You can call the [DescribeAvailableClasses](https://help.aliyun.com/document_detail/610393.html) operation to query the storage capacity range that is supported by the new instance type.
    // 
    // > *   You must specify at least one of DBInstanceStorage and **DBInstanceClass**.
    // > *   You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html) operation to query the current storage capacity of the instance.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The storage type of the new instance. Valid values:
    // 
    // *   **local_ssd**: local SSD.
    // *   **cloud_ssd**: SSD cloud disks. This storage medium is not recommended and is unavailable in specific Alibaba Cloud regions.
    // *   **cloud_essd**: performance level 1 (PL1) Enterprise SSD (ESSD).
    // *   **cloud_essd2**: PL2 ESSD.
    // *   **cloud_essd3**: PL3 ESSD.
    // 
    // To change the storage type, take note of the following items:
    // 
    // If the instance runs PostgreSQL, you can upgrade the storage type of the instance from standard SSDs to ESSDs. However, you cannot downgrade the storage type of the instance from ESSDs to standard SSDs. ESSDs provide the following PLs: ESSDs of PL1, ESSDs of PL2, and ESSDs of PL3. You can upgrade or downgrade the storage type between ESSD of PL1, ESSD of PL2, and ESSD of PL3. For more information, see [Configuration items](https://help.aliyun.com/document_detail/96750.html).
    shared_ptr<string> DBInstanceStorageType_ {};
    // The ID of the dedicated cluster.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // The type of change that you want to perform on the instance. Valid values:
    // 
    // *   **Up** (default): upgrades a subscription instance, or upgrades or downgrades a pay-as-you-go instance.
    // *   **Down**: downgrades a subscription instance.
    // *   **TempUpgrade**: performs auto scaling on a subscription instance that runs SQL Server. This value is required for auto scaling.
    // *   **Serverless**: modifies the auto scaling settings of a serverless instance.
    // 
    // >  If you specify only **DBInstanceStorageType**, you can leave Direction empty. For example, if you want to change only the storage type of the instance from standard SSD to Enterprise SSD (ESSD), you do not need to specify Direction.
    shared_ptr<string> direction_ {};
    // The time when the new specifications take effect. Valid values:
    // 
    // >  **Specific changes may affect the instance**. Read the [Impact](https://help.aliyun.com/document_detail/96061.html) section before you specify this parameter. We recommend that you specify this parameter during off-peak hours.
    // 
    // *   **Immediate** (default): The changes immediately take effect.
    // *   **MaintainTime**: The changes take effect during the [maintenance window](https://help.aliyun.com/document_detail/610402.html) of the instance.
    // *   **ScheduleTime**: The changes take effect at the point in time that you specify. This time must be at least 12 hours later than the current time. The actual effective time is calculated based on the following formula: EffectiveTime = ScheduleTime + SwitchTime.
    shared_ptr<string> effectiveTime_ {};
    // The database engine version of the instance. Valid values:
    // 
    // **Regular RDS instances**
    // 
    // *   Valid values when Engine is set to MySQL: 5.5, 5.6, 5.7, and 8.0.
    // *   Valid values when Engine is set to SQLServer: 2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, and 2019_ent.
    // *   Valid values when Engine is set to PostgreSQL: 10.0, 11.0, 12.0, 13.0, 14.0, and 15.0.
    // *   Valid value when Engine is set to MariaDB: 10.3.
    // 
    // **Serverless instances. ApsaraDB RDS for MariaDB does not support serverless instances.**
    // 
    // *   Valid values when Engine is set to MySQL: 5.7 and 8.0.
    // *   Valid values when Engine is set to SQL Server: 2016_std_sl, 2017_std_sl, and 2019_std_sl.
    // *   Valid values when Engine is set to PostgreSQL: 14.0, 15.0, and 16.0.
    shared_ptr<string> engineVersion_ {};
    // A reserved parameter.
    shared_ptr<string> ioAccelerationEnabled_ {};
    // Specifies whether to enable the write optimization feature for the ApsaraDB RDS for MySQL instance. For more information, see [Use the write optimization feature](https://help.aliyun.com/document_detail/2858761.html). Valid values:
    // 
    // *   **optimized**: enables the feature.
    // *   **none**: disables the feature.
    shared_ptr<string> optimizedWrites_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    // *   **Serverless**: serverless. This value is not supported for ApsaraDB RDS for MariaDB instances.
    // 
    // >  If you want to set this parameter to Serverless, **you must specify **AutoPause, MaxCapacity, MinCapacity, and SwitchForce. For more information, see [Overview of serverless ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/411291.html), [Overview of serverless ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/604344.html), and [Overview of serverless ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/607742.html).
    shared_ptr<string> payType_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The specification of the read-only instance when you change the storage type of the ApsaraDB RDS for MySQL instance that runs RDS High-availability Edition from cloud disk to local disk.
    shared_ptr<string> readOnlyDBInstanceClass_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The specifications that you want to change for a serverless instance.
    shared_ptr<ModifyDBInstanceSpecRequest::ServerlessConfiguration> serverlessConfiguration_ {};
    // A deprecated parameter. You do not need to specify this parameter.
    shared_ptr<string> sourceBiz_ {};
    // The time at which you want to change the specifications. **We recommend that you perform the specification changes during off-peak hours.**
    // 
    // Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > *   The time at which you want to change the specifications **must be later than the current time**. Otherwise, the specification change task fails. If the specification change task fails, you must wait for the order to be automatically canceled, and then call this operation again.
    // > *   If you want to increase the storage capacity or change the ESSD storage type between different PLs, the specification change immediately takes effect and does not affect your workloads. You do not need to specify this parameter.
    shared_ptr<string> switchTime_ {};
    // The minor engine version number of the ApsaraDB RDS for PostgreSQL instance. For more information, see [Update the minor engine version](https://help.aliyun.com/document_detail/126002.html). If the minor engine version does not support changing the instance type, you must specify the minor engine version to **update the minor engine version when you change the instance type**.
    // 
    // Format: `rds_postgres_<Major engine version>00_<Minor engine version>`. For example, if the instance runs PostgreSQL 12, set this parameter to `rds_postgres_1200_20200830`.
    shared_ptr<string> targetMinorVersion_ {};
    // The validity period of the specification changes on an ApsaraDB RDS for SQL Server instance. At the end of the validity period, the specifications of the instance are restored to the specifications that are used before an [elastic upgrade](https://help.aliyun.com/document_detail/95665.html) is performed. Unit: days.
    shared_ptr<int64_t> usedTime_ {};
    // The vSwitch ID. The vSwitch must belong to the zone that is specified by **ZoneId**.
    // 
    // *   If you set **InstanceNetworkType** to **VPC**, you must also specify this parameter.
    // *   If you specify ZoneSlaveId1, you must specify the IDs of two vSwitches for this parameter and separate the IDs with a comma (,).
    // 
    // >  If you want to upgrade the major engine version of an ApsaraDB RDS for SQL Server instance by specifying AllowMajorVersionUpgrade or change the vSwitch, you must specify this parameter.
    shared_ptr<string> vSwitchId_ {};
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition.
    // *   **HighAvailability**: RDS High-availability Edition.
    // *   **AlwaysOn**: RDS Cluster Edition for SQL Server.
    // *   **Finance**: RDS Enterprise Edition. This edition is available only on the China site (aliyun.com).
    // 
    // > If you set **EngineVersion** to an SQL Server version number, you must also specify this parameter.
    shared_ptr<string> zoneId_ {};
    // The zone ID of the secondary instance. If you set this parameter to the same value as **ZoneId**, the single-zone deployment method is used. If you set this parameter to a different value from **ZoneId**, the multi-zone deployment method is used.
    // 
    // >  If you want to upgrade the major engine version of an ApsaraDB RDS for SQL Server instance by specifying AllowMajorVersionUpgrade or change the secondary zone, you must specify this parameter.
    shared_ptr<string> zoneIdSlave1_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
