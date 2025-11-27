// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AccountMaxQuantity, accountMaxQuantity_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AvailabilityValue, availabilityValue_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(DBMaxQuantity, DBMaxQuantity_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExportKey, exportKey_);
      DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_TO_JSON(IncrementSourceDBInstanceId, incrementSourceDBInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ReadDelayTime, readDelayTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SlaveZones, slaveZones_);
      DARABONBA_PTR_TO_JSON(SupportUpgradeAccountType, supportUpgradeAccountType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountMaxQuantity, accountMaxQuantity_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AvailabilityValue, availabilityValue_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBMaxQuantity, DBMaxQuantity_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExportKey, exportKey_);
      DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncrementSourceDBInstanceId, incrementSourceDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ReadDelayTime, readDelayTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SlaveZones, slaveZones_);
      DARABONBA_PTR_FROM_JSON(SupportUpgradeAccountType, supportUpgradeAccountType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute() = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute(const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute(DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute &&) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute() = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& operator=(const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& operator=(DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountMaxQuantity_ == nullptr
        && return this->accountType_ == nullptr && return this->availabilityValue_ == nullptr && return this->category_ == nullptr && return this->connectionMode_ == nullptr && return this->connectionString_ == nullptr
        && return this->creationTime_ == nullptr && return this->DBInstanceCPU_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceClassType_ == nullptr && return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBInstanceMemory_ == nullptr && return this->DBInstanceNetType_ == nullptr && return this->DBInstanceStatus_ == nullptr && return this->DBInstanceStorage_ == nullptr
        && return this->DBInstanceStorageType_ == nullptr && return this->DBInstanceType_ == nullptr && return this->DBMaxQuantity_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->expireTime_ == nullptr && return this->exportKey_ == nullptr && return this->guardDBInstanceId_ == nullptr && return this->incrementSourceDBInstanceId_ == nullptr && return this->instanceNetworkType_ == nullptr
        && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->maintainTime_ == nullptr && return this->masterInstanceId_ == nullptr && return this->maxConnections_ == nullptr
        && return this->maxIOPS_ == nullptr && return this->payType_ == nullptr && return this->port_ == nullptr && return this->readDelayTime_ == nullptr && return this->regionId_ == nullptr
        && return this->securityIPList_ == nullptr && return this->slaveZones_ == nullptr && return this->supportUpgradeAccountType_ == nullptr && return this->tags_ == nullptr && return this->tempDBInstanceId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // accountMaxQuantity Field Functions 
    bool hasAccountMaxQuantity() const { return this->accountMaxQuantity_ != nullptr;};
    void deleteAccountMaxQuantity() { this->accountMaxQuantity_ = nullptr;};
    inline int32_t accountMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountMaxQuantity_, 0) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setAccountMaxQuantity(int32_t accountMaxQuantity) { DARABONBA_PTR_SET_VALUE(accountMaxQuantity_, accountMaxQuantity) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // availabilityValue Field Functions 
    bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
    void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
    inline string availabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBInstanceCPU Field Functions 
    bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
    void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
    inline string DBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceClassType Field Functions 
    bool hasDBInstanceClassType() const { return this->DBInstanceClassType_ != nullptr;};
    void deleteDBInstanceClassType() { this->DBInstanceClassType_ = nullptr;};
    inline string DBInstanceClassType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClassType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceClassType(string DBInstanceClassType) { DARABONBA_PTR_SET_VALUE(DBInstanceClassType_, DBInstanceClassType) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMemory Field Functions 
    bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
    void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
    inline int64_t DBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0L) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceMemory(int64_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // DBMaxQuantity Field Functions 
    bool hasDBMaxQuantity() const { return this->DBMaxQuantity_ != nullptr;};
    void deleteDBMaxQuantity() { this->DBMaxQuantity_ = nullptr;};
    inline int32_t DBMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(DBMaxQuantity_, 0) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setDBMaxQuantity(int32_t DBMaxQuantity) { DARABONBA_PTR_SET_VALUE(DBMaxQuantity_, DBMaxQuantity) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // exportKey Field Functions 
    bool hasExportKey() const { return this->exportKey_ != nullptr;};
    void deleteExportKey() { this->exportKey_ = nullptr;};
    inline string exportKey() const { DARABONBA_PTR_GET_DEFAULT(exportKey_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setExportKey(string exportKey) { DARABONBA_PTR_SET_VALUE(exportKey_, exportKey) };


    // guardDBInstanceId Field Functions 
    bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
    void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
    inline string guardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


    // incrementSourceDBInstanceId Field Functions 
    bool hasIncrementSourceDBInstanceId() const { return this->incrementSourceDBInstanceId_ != nullptr;};
    void deleteIncrementSourceDBInstanceId() { this->incrementSourceDBInstanceId_ = nullptr;};
    inline string incrementSourceDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(incrementSourceDBInstanceId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setIncrementSourceDBInstanceId(string incrementSourceDBInstanceId) { DARABONBA_PTR_SET_VALUE(incrementSourceDBInstanceId_, incrementSourceDBInstanceId) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline int32_t maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // readDelayTime Field Functions 
    bool hasReadDelayTime() const { return this->readDelayTime_ != nullptr;};
    void deleteReadDelayTime() { this->readDelayTime_ = nullptr;};
    inline string readDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readDelayTime_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setReadDelayTime(string readDelayTime) { DARABONBA_PTR_SET_VALUE(readDelayTime_, readDelayTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // slaveZones Field Functions 
    bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
    void deleteSlaveZones() { this->slaveZones_ = nullptr;};
    inline const Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones & slaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones) };
    inline Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones slaveZones() { DARABONBA_PTR_GET(slaveZones_, Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setSlaveZones(const Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setSlaveZones(Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


    // supportUpgradeAccountType Field Functions 
    bool hasSupportUpgradeAccountType() const { return this->supportUpgradeAccountType_ != nullptr;};
    void deleteSupportUpgradeAccountType() { this->supportUpgradeAccountType_ = nullptr;};
    inline string supportUpgradeAccountType() const { DARABONBA_PTR_GET_DEFAULT(supportUpgradeAccountType_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setSupportUpgradeAccountType(string supportUpgradeAccountType) { DARABONBA_PTR_SET_VALUE(supportUpgradeAccountType_, supportUpgradeAccountType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tempDBInstanceId Field Functions 
    bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
    void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
    inline string tempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The maximum number of accounts.
    std::shared_ptr<int32_t> accountMaxQuantity_ = nullptr;
    // The type of the account.
    std::shared_ptr<string> accountType_ = nullptr;
    // The service availability of the instance in percentage.
    std::shared_ptr<string> availabilityValue_ = nullptr;
    // The category of the instance.
    std::shared_ptr<string> category_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **Performance**: standard mode.
    // *   **Safety**: enhanced mode
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<string> DBInstanceCPU_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance family.
    std::shared_ptr<string> DBInstanceClassType_ = nullptr;
    // The instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The memory capacity of the instance. Unit: MB.
    std::shared_ptr<int64_t> DBInstanceMemory_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **Internet**
    // *   **Intranet**
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The instance status.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The storage capacity of the instance. Unit: GB.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The instance type. Valid values:
    // 
    // *   **Primary**: primary instance
    // *   **ReadOnly**: read-only instance
    // *   **Guard**: disaster recovery instance
    // *   **Temp**: temporary instance
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The maximum number of databases that can be created on the instance.
    std::shared_ptr<int32_t> DBMaxQuantity_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The expiration time.
    std::shared_ptr<string> expireTime_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> exportKey_ = nullptr;
    // The ID of the disaster recovery instance that is attached to the primary instance.
    std::shared_ptr<string> guardDBInstanceId_ = nullptr;
    // The ID of the instance from which incremental data comes. The incremental data of a disaster recovery instance comes from its primary instance. The incremental data of a read-only instance comes from its primary instance. If this parameter is not returned, the instance is a primary instance.
    std::shared_ptr<string> incrementSourceDBInstanceId_ = nullptr;
    // The network type.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The lock mode of the instance.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the instance was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maintenance window of the instance. The time follows the ISO 8601 standard and is displayed in UTC. In the ApsaraDB RDS console, the maintenance window is displayed in UTC+8.
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The primary instance ID.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The maximum number of I/O requests per second.
    std::shared_ptr<int32_t> maxIOPS_ = nullptr;
    // The billing method of the instance.
    std::shared_ptr<string> payType_ = nullptr;
    // The port that is used to connect to the instance over an internal network.
    std::shared_ptr<string> port_ = nullptr;
    // The latency of data replication from the primary instance to the read-only instance. This parameter is valid for read-only instances.
    std::shared_ptr<string> readDelayTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP addresses in the whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones> slaveZones_ = nullptr;
    // N/A.
    std::shared_ptr<string> supportUpgradeAccountType_ = nullptr;
    // The tags.
    std::shared_ptr<string> tags_ = nullptr;
    // The ID of the temporary instance that is attached to the primary instance.
    std::shared_ptr<string> tempDBInstanceId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
