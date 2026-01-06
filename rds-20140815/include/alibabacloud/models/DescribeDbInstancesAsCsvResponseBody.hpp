// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODY_HPP_
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
  class DescribeDBInstancesAsCsvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesAsCsvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesAsCsvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstancesAsCsvResponseBody() = default ;
    DescribeDBInstancesAsCsvResponseBody(const DescribeDBInstancesAsCsvResponseBody &) = default ;
    DescribeDBInstancesAsCsvResponseBody(DescribeDBInstancesAsCsvResponseBody &&) = default ;
    DescribeDBInstancesAsCsvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesAsCsvResponseBody() = default ;
    DescribeDBInstancesAsCsvResponseBody& operator=(const DescribeDBInstancesAsCsvResponseBody &) = default ;
    DescribeDBInstancesAsCsvResponseBody& operator=(DescribeDBInstancesAsCsvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceAttribute, DBInstanceAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceAttribute, DBInstanceAttribute_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceAttribute& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DBInstanceAttribute& obj) { 
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
        DBInstanceAttribute() = default ;
        DBInstanceAttribute(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute(DBInstanceAttribute &&) = default ;
        DBInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceAttribute() = default ;
        DBInstanceAttribute& operator=(const DBInstanceAttribute &) = default ;
        DBInstanceAttribute& operator=(DBInstanceAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SlaveZones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlaveZones& obj) { 
            DARABONBA_PTR_TO_JSON(slaveRegion, slaveRegion_);
          };
          friend void from_json(const Darabonba::Json& j, SlaveZones& obj) { 
            DARABONBA_PTR_FROM_JSON(slaveRegion, slaveRegion_);
          };
          SlaveZones() = default ;
          SlaveZones(const SlaveZones &) = default ;
          SlaveZones(SlaveZones &&) = default ;
          SlaveZones(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlaveZones() = default ;
          SlaveZones& operator=(const SlaveZones &) = default ;
          SlaveZones& operator=(SlaveZones &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->slaveRegion_ == nullptr; };
          // slaveRegion Field Functions 
          bool hasSlaveRegion() const { return this->slaveRegion_ != nullptr;};
          void deleteSlaveRegion() { this->slaveRegion_ = nullptr;};
          inline const vector<string> & getSlaveRegion() const { DARABONBA_PTR_GET_CONST(slaveRegion_, vector<string>) };
          inline vector<string> getSlaveRegion() { DARABONBA_PTR_GET(slaveRegion_, vector<string>) };
          inline SlaveZones& setSlaveRegion(const vector<string> & slaveRegion) { DARABONBA_PTR_SET_VALUE(slaveRegion_, slaveRegion) };
          inline SlaveZones& setSlaveRegion(vector<string> && slaveRegion) { DARABONBA_PTR_SET_RVALUE(slaveRegion_, slaveRegion) };


        protected:
          shared_ptr<vector<string>> slaveRegion_ {};
        };

        virtual bool empty() const override { return this->accountMaxQuantity_ == nullptr
        && this->accountType_ == nullptr && this->availabilityValue_ == nullptr && this->category_ == nullptr && this->connectionMode_ == nullptr && this->connectionString_ == nullptr
        && this->creationTime_ == nullptr && this->DBInstanceCPU_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceClassType_ == nullptr && this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceMemory_ == nullptr && this->DBInstanceNetType_ == nullptr && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorage_ == nullptr
        && this->DBInstanceStorageType_ == nullptr && this->DBInstanceType_ == nullptr && this->DBMaxQuantity_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->expireTime_ == nullptr && this->exportKey_ == nullptr && this->guardDBInstanceId_ == nullptr && this->incrementSourceDBInstanceId_ == nullptr && this->instanceNetworkType_ == nullptr
        && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainTime_ == nullptr && this->masterInstanceId_ == nullptr && this->maxConnections_ == nullptr
        && this->maxIOPS_ == nullptr && this->payType_ == nullptr && this->port_ == nullptr && this->readDelayTime_ == nullptr && this->regionId_ == nullptr
        && this->securityIPList_ == nullptr && this->slaveZones_ == nullptr && this->supportUpgradeAccountType_ == nullptr && this->tags_ == nullptr && this->tempDBInstanceId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // accountMaxQuantity Field Functions 
        bool hasAccountMaxQuantity() const { return this->accountMaxQuantity_ != nullptr;};
        void deleteAccountMaxQuantity() { this->accountMaxQuantity_ = nullptr;};
        inline int32_t getAccountMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountMaxQuantity_, 0) };
        inline DBInstanceAttribute& setAccountMaxQuantity(int32_t accountMaxQuantity) { DARABONBA_PTR_SET_VALUE(accountMaxQuantity_, accountMaxQuantity) };


        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline DBInstanceAttribute& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // availabilityValue Field Functions 
        bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
        void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
        inline string getAvailabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
        inline DBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBInstanceAttribute& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // connectionMode Field Functions 
        bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
        void deleteConnectionMode() { this->connectionMode_ = nullptr;};
        inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
        inline DBInstanceAttribute& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBInstanceAttribute& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBInstanceAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBInstanceCPU Field Functions 
        bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
        void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
        inline string getDBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
        inline DBInstanceAttribute& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


        // DBInstanceClass Field Functions 
        bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
        void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
        inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
        inline DBInstanceAttribute& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


        // DBInstanceClassType Field Functions 
        bool hasDBInstanceClassType() const { return this->DBInstanceClassType_ != nullptr;};
        void deleteDBInstanceClassType() { this->DBInstanceClassType_ = nullptr;};
        inline string getDBInstanceClassType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClassType_, "") };
        inline DBInstanceAttribute& setDBInstanceClassType(string DBInstanceClassType) { DARABONBA_PTR_SET_VALUE(DBInstanceClassType_, DBInstanceClassType) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstanceAttribute& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstanceAttribute& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceMemory Field Functions 
        bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
        void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
        inline int64_t getDBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0L) };
        inline DBInstanceAttribute& setDBInstanceMemory(int64_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


        // DBInstanceNetType Field Functions 
        bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
        void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
        inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
        inline DBInstanceAttribute& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstanceAttribute& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // DBInstanceStorage Field Functions 
        bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
        void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
        inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
        inline DBInstanceAttribute& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


        // DBInstanceStorageType Field Functions 
        bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
        void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
        inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
        inline DBInstanceAttribute& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline DBInstanceAttribute& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // DBMaxQuantity Field Functions 
        bool hasDBMaxQuantity() const { return this->DBMaxQuantity_ != nullptr;};
        void deleteDBMaxQuantity() { this->DBMaxQuantity_ = nullptr;};
        inline int32_t getDBMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(DBMaxQuantity_, 0) };
        inline DBInstanceAttribute& setDBMaxQuantity(int32_t DBMaxQuantity) { DARABONBA_PTR_SET_VALUE(DBMaxQuantity_, DBMaxQuantity) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstanceAttribute& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstanceAttribute& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstanceAttribute& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // exportKey Field Functions 
        bool hasExportKey() const { return this->exportKey_ != nullptr;};
        void deleteExportKey() { this->exportKey_ = nullptr;};
        inline string getExportKey() const { DARABONBA_PTR_GET_DEFAULT(exportKey_, "") };
        inline DBInstanceAttribute& setExportKey(string exportKey) { DARABONBA_PTR_SET_VALUE(exportKey_, exportKey) };


        // guardDBInstanceId Field Functions 
        bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
        void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
        inline string getGuardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
        inline DBInstanceAttribute& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


        // incrementSourceDBInstanceId Field Functions 
        bool hasIncrementSourceDBInstanceId() const { return this->incrementSourceDBInstanceId_ != nullptr;};
        void deleteIncrementSourceDBInstanceId() { this->incrementSourceDBInstanceId_ = nullptr;};
        inline string getIncrementSourceDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(incrementSourceDBInstanceId_, "") };
        inline DBInstanceAttribute& setIncrementSourceDBInstanceId(string incrementSourceDBInstanceId) { DARABONBA_PTR_SET_VALUE(incrementSourceDBInstanceId_, incrementSourceDBInstanceId) };


        // instanceNetworkType Field Functions 
        bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
        void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
        inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
        inline DBInstanceAttribute& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstanceAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBInstanceAttribute& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // maintainTime Field Functions 
        bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
        void deleteMaintainTime() { this->maintainTime_ = nullptr;};
        inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
        inline DBInstanceAttribute& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


        // masterInstanceId Field Functions 
        bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
        void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
        inline string getMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
        inline DBInstanceAttribute& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


        // maxConnections Field Functions 
        bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
        void deleteMaxConnections() { this->maxConnections_ = nullptr;};
        inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
        inline DBInstanceAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


        // maxIOPS Field Functions 
        bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
        void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
        inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
        inline DBInstanceAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBInstanceAttribute& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DBInstanceAttribute& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // readDelayTime Field Functions 
        bool hasReadDelayTime() const { return this->readDelayTime_ != nullptr;};
        void deleteReadDelayTime() { this->readDelayTime_ = nullptr;};
        inline string getReadDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readDelayTime_, "") };
        inline DBInstanceAttribute& setReadDelayTime(string readDelayTime) { DARABONBA_PTR_SET_VALUE(readDelayTime_, readDelayTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline DBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


        // slaveZones Field Functions 
        bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
        void deleteSlaveZones() { this->slaveZones_ = nullptr;};
        inline const DBInstanceAttribute::SlaveZones & getSlaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, DBInstanceAttribute::SlaveZones) };
        inline DBInstanceAttribute::SlaveZones getSlaveZones() { DARABONBA_PTR_GET(slaveZones_, DBInstanceAttribute::SlaveZones) };
        inline DBInstanceAttribute& setSlaveZones(const DBInstanceAttribute::SlaveZones & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
        inline DBInstanceAttribute& setSlaveZones(DBInstanceAttribute::SlaveZones && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


        // supportUpgradeAccountType Field Functions 
        bool hasSupportUpgradeAccountType() const { return this->supportUpgradeAccountType_ != nullptr;};
        void deleteSupportUpgradeAccountType() { this->supportUpgradeAccountType_ = nullptr;};
        inline string getSupportUpgradeAccountType() const { DARABONBA_PTR_GET_DEFAULT(supportUpgradeAccountType_, "") };
        inline DBInstanceAttribute& setSupportUpgradeAccountType(string supportUpgradeAccountType) { DARABONBA_PTR_SET_VALUE(supportUpgradeAccountType_, supportUpgradeAccountType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline DBInstanceAttribute& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // tempDBInstanceId Field Functions 
        bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
        void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
        inline string getTempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
        inline DBInstanceAttribute& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The maximum number of accounts.
        shared_ptr<int32_t> accountMaxQuantity_ {};
        // The type of the account.
        shared_ptr<string> accountType_ {};
        // The service availability of the instance in percentage.
        shared_ptr<string> availabilityValue_ {};
        // The category of the instance.
        shared_ptr<string> category_ {};
        // The connection mode of the instance. Valid values:
        // 
        // *   **Performance**: standard mode.
        // *   **Safety**: enhanced mode
        shared_ptr<string> connectionMode_ {};
        // The internal endpoint.
        shared_ptr<string> connectionString_ {};
        // The creation time.
        shared_ptr<string> creationTime_ {};
        // The number of CPU cores.
        shared_ptr<string> DBInstanceCPU_ {};
        // The instance type of the instance.
        shared_ptr<string> DBInstanceClass_ {};
        // The instance family.
        shared_ptr<string> DBInstanceClassType_ {};
        // The instance description.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The memory capacity of the instance. Unit: MB.
        shared_ptr<int64_t> DBInstanceMemory_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Internet**
        // *   **Intranet**
        shared_ptr<string> DBInstanceNetType_ {};
        // The instance status.
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage capacity of the instance. Unit: GB.
        shared_ptr<int32_t> DBInstanceStorage_ {};
        shared_ptr<string> DBInstanceStorageType_ {};
        // The instance type. Valid values:
        // 
        // *   **Primary**: primary instance
        // *   **ReadOnly**: read-only instance
        // *   **Guard**: disaster recovery instance
        // *   **Temp**: temporary instance
        shared_ptr<string> DBInstanceType_ {};
        // The maximum number of databases that can be created on the instance.
        shared_ptr<int32_t> DBMaxQuantity_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The engine version.
        shared_ptr<string> engineVersion_ {};
        // The expiration time.
        shared_ptr<string> expireTime_ {};
        // A deprecated parameter. You do not need to specify this parameter.
        shared_ptr<string> exportKey_ {};
        // The ID of the disaster recovery instance that is attached to the primary instance.
        shared_ptr<string> guardDBInstanceId_ {};
        // The ID of the instance from which incremental data comes. The incremental data of a disaster recovery instance comes from its primary instance. The incremental data of a read-only instance comes from its primary instance. If this parameter is not returned, the instance is a primary instance.
        shared_ptr<string> incrementSourceDBInstanceId_ {};
        // The network type.
        shared_ptr<string> instanceNetworkType_ {};
        // The lock mode of the instance.
        shared_ptr<string> lockMode_ {};
        // The reason why the instance was locked.
        shared_ptr<string> lockReason_ {};
        // The maintenance window of the instance. The time follows the ISO 8601 standard and is displayed in UTC. In the ApsaraDB RDS console, the maintenance window is displayed in UTC+8.
        shared_ptr<string> maintainTime_ {};
        // The primary instance ID.
        shared_ptr<string> masterInstanceId_ {};
        // The maximum number of concurrent connections.
        shared_ptr<int32_t> maxConnections_ {};
        // The maximum number of I/O requests per second.
        shared_ptr<int32_t> maxIOPS_ {};
        // The billing method of the instance.
        shared_ptr<string> payType_ {};
        // The port that is used to connect to the instance over an internal network.
        shared_ptr<string> port_ {};
        // The latency of data replication from the primary instance to the read-only instance. This parameter is valid for read-only instances.
        shared_ptr<string> readDelayTime_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The IP addresses in the whitelist.
        shared_ptr<string> securityIPList_ {};
        // A deprecated parameter. You do not need to specify this parameter.
        shared_ptr<DBInstanceAttribute::SlaveZones> slaveZones_ {};
        // N/A.
        shared_ptr<string> supportUpgradeAccountType_ {};
        // The tags.
        shared_ptr<string> tags_ {};
        // The ID of the temporary instance that is attached to the primary instance.
        shared_ptr<string> tempDBInstanceId_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstanceAttribute_ == nullptr; };
      // DBInstanceAttribute Field Functions 
      bool hasDBInstanceAttribute() const { return this->DBInstanceAttribute_ != nullptr;};
      void deleteDBInstanceAttribute() { this->DBInstanceAttribute_ = nullptr;};
      inline const vector<Items::DBInstanceAttribute> & getDBInstanceAttribute() const { DARABONBA_PTR_GET_CONST(DBInstanceAttribute_, vector<Items::DBInstanceAttribute>) };
      inline vector<Items::DBInstanceAttribute> getDBInstanceAttribute() { DARABONBA_PTR_GET(DBInstanceAttribute_, vector<Items::DBInstanceAttribute>) };
      inline Items& setDBInstanceAttribute(const vector<Items::DBInstanceAttribute> & dBInstanceAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceAttribute_, dBInstanceAttribute) };
      inline Items& setDBInstanceAttribute(vector<Items::DBInstanceAttribute> && dBInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(DBInstanceAttribute_, dBInstanceAttribute) };


    protected:
      shared_ptr<vector<Items::DBInstanceAttribute>> DBInstanceAttribute_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesAsCsvResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesAsCsvResponseBody::Items) };
    inline DescribeDBInstancesAsCsvResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesAsCsvResponseBody::Items) };
    inline DescribeDBInstancesAsCsvResponseBody& setItems(const DescribeDBInstancesAsCsvResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesAsCsvResponseBody& setItems(DescribeDBInstancesAsCsvResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesAsCsvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the fields in **DBInstanceAttribute**.
    shared_ptr<DescribeDBInstancesAsCsvResponseBody::Items> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
