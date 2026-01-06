// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody(DescribeDBInstanceAttributeResponseBody &&) = default ;
    DescribeDBInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(DescribeDBInstanceAttributeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AdvancedFeatures, advancedFeatures_);
          DARABONBA_PTR_TO_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
          DARABONBA_PTR_TO_JSON(AvailabilityValue, availabilityValue_);
          DARABONBA_PTR_TO_JSON(BabelfishConfig, babelfishConfig_);
          DARABONBA_PTR_TO_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
          DARABONBA_PTR_TO_JSON(BlueInstanceName, blueInstanceName_);
          DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(CanTempUpgrade, canTempUpgrade_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
          DARABONBA_PTR_TO_JSON(Collation, collation_);
          DARABONBA_PTR_TO_JSON(CompressionMode, compressionMode_);
          DARABONBA_PTR_TO_JSON(CompressionRatio, compressionRatio_);
          DARABONBA_PTR_TO_JSON(ComputeBurstEnabled, computeBurstEnabled_);
          DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(ConsoleVersion, consoleVersion_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
          DARABONBA_PTR_TO_JSON(DBClusterNodes, DBClusterNodes_);
          DARABONBA_PTR_TO_JSON(DBInstanceCPU, DBInstanceCPU_);
          DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_TO_JSON(DBInstanceClassType, DBInstanceClassType_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceDiskUsed, DBInstanceDiskUsed_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(DBMaxQuantity, DBMaxQuantity_);
          DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(DisasterRecoveryInfo, disasterRecoveryInfo_);
          DARABONBA_PTR_TO_JSON(DisasterRecoveryInstances, disasterRecoveryInstances_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(GeneralGroupName, generalGroupName_);
          DARABONBA_PTR_TO_JSON(GreenInstanceName, greenInstanceName_);
          DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_TO_JSON(IPType, IPType_);
          DARABONBA_PTR_TO_JSON(IncrementSourceDBInstanceId, incrementSourceDBInstanceId_);
          DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_TO_JSON(InstructionSetArch, instructionSetArch_);
          DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
          DARABONBA_PTR_TO_JSON(IsAnalyticIns, isAnalyticIns_);
          DARABONBA_PTR_TO_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
          DARABONBA_PTR_TO_JSON(LatestKernelVersion, latestKernelVersion_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
          DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_TO_JSON(MasterZone, masterZone_);
          DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_TO_JSON(MaxIOMBPS, maxIOMBPS_);
          DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_TO_JSON(MultipleTempUpgrade, multipleTempUpgrade_);
          DARABONBA_PTR_TO_JSON(OptimizedWritesInfo, optimizedWritesInfo_);
          DARABONBA_PTR_TO_JSON(PGBouncerEnabled, PGBouncerEnabled_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
          DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_TO_JSON(ReadOnlyStatus, readOnlyStatus_);
          DARABONBA_PTR_TO_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_TO_JSON(SecurityIPMode, securityIPMode_);
          DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfig_);
          DARABONBA_PTR_TO_JSON(SlaveZones, slaveZones_);
          DARABONBA_PTR_TO_JSON(SuperPermissionMode, superPermissionMode_);
          DARABONBA_PTR_TO_JSON(SupportCompression, supportCompression_);
          DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_TO_JSON(TempUpgradeTimeEnd, tempUpgradeTimeEnd_);
          DARABONBA_PTR_TO_JSON(TempUpgradeTimeStart, tempUpgradeTimeStart_);
          DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
          DARABONBA_PTR_TO_JSON(Tips, tips_);
          DARABONBA_PTR_TO_JSON(TipsLevel, tipsLevel_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VectorSupportStatus, vectorSupportStatus_);
          DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(kindCode, kindCode_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountMaxQuantity, accountMaxQuantity_);
          DARABONBA_PTR_FROM_JSON(AdvancedFeatures, advancedFeatures_);
          DARABONBA_PTR_FROM_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
          DARABONBA_PTR_FROM_JSON(AvailabilityValue, availabilityValue_);
          DARABONBA_PTR_FROM_JSON(BabelfishConfig, babelfishConfig_);
          DARABONBA_PTR_FROM_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
          DARABONBA_PTR_FROM_JSON(BlueInstanceName, blueInstanceName_);
          DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(CanTempUpgrade, canTempUpgrade_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
          DARABONBA_PTR_FROM_JSON(Collation, collation_);
          DARABONBA_PTR_FROM_JSON(CompressionMode, compressionMode_);
          DARABONBA_PTR_FROM_JSON(CompressionRatio, compressionRatio_);
          DARABONBA_PTR_FROM_JSON(ComputeBurstEnabled, computeBurstEnabled_);
          DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(ConsoleVersion, consoleVersion_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
          DARABONBA_PTR_FROM_JSON(DBClusterNodes, DBClusterNodes_);
          DARABONBA_PTR_FROM_JSON(DBInstanceCPU, DBInstanceCPU_);
          DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_FROM_JSON(DBInstanceClassType, DBInstanceClassType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDiskUsed, DBInstanceDiskUsed_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(DBMaxQuantity, DBMaxQuantity_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(DisasterRecoveryInfo, disasterRecoveryInfo_);
          DARABONBA_PTR_FROM_JSON(DisasterRecoveryInstances, disasterRecoveryInstances_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(GeneralGroupName, generalGroupName_);
          DARABONBA_PTR_FROM_JSON(GreenInstanceName, greenInstanceName_);
          DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(IPType, IPType_);
          DARABONBA_PTR_FROM_JSON(IncrementSourceDBInstanceId, incrementSourceDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_FROM_JSON(InstructionSetArch, instructionSetArch_);
          DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
          DARABONBA_PTR_FROM_JSON(IsAnalyticIns, isAnalyticIns_);
          DARABONBA_PTR_FROM_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
          DARABONBA_PTR_FROM_JSON(LatestKernelVersion, latestKernelVersion_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
          DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_FROM_JSON(MasterZone, masterZone_);
          DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_FROM_JSON(MaxIOMBPS, maxIOMBPS_);
          DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
          DARABONBA_PTR_FROM_JSON(MultipleTempUpgrade, multipleTempUpgrade_);
          DARABONBA_PTR_FROM_JSON(OptimizedWritesInfo, optimizedWritesInfo_);
          DARABONBA_PTR_FROM_JSON(PGBouncerEnabled, PGBouncerEnabled_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyStatus, readOnlyStatus_);
          DARABONBA_PTR_FROM_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
          DARABONBA_PTR_FROM_JSON(SecurityIPMode, securityIPMode_);
          DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfig_);
          DARABONBA_PTR_FROM_JSON(SlaveZones, slaveZones_);
          DARABONBA_PTR_FROM_JSON(SuperPermissionMode, superPermissionMode_);
          DARABONBA_PTR_FROM_JSON(SupportCompression, supportCompression_);
          DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(TempUpgradeTimeEnd, tempUpgradeTimeEnd_);
          DARABONBA_PTR_FROM_JSON(TempUpgradeTimeStart, tempUpgradeTimeStart_);
          DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
          DARABONBA_PTR_FROM_JSON(TipsLevel, tipsLevel_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VectorSupportStatus, vectorSupportStatus_);
          DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(kindCode, kindCode_);
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
            DARABONBA_PTR_TO_JSON(SlaveZone, slaveZone_);
          };
          friend void from_json(const Darabonba::Json& j, SlaveZones& obj) { 
            DARABONBA_PTR_FROM_JSON(SlaveZone, slaveZone_);
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
          class SlaveZone : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SlaveZone& obj) { 
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, SlaveZone& obj) { 
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            SlaveZone() = default ;
            SlaveZone(const SlaveZone &) = default ;
            SlaveZone(SlaveZone &&) = default ;
            SlaveZone(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SlaveZone() = default ;
            SlaveZone& operator=(const SlaveZone &) = default ;
            SlaveZone& operator=(SlaveZone &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->zoneId_ == nullptr; };
            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline SlaveZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The zone ID.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->slaveZone_ == nullptr; };
          // slaveZone Field Functions 
          bool hasSlaveZone() const { return this->slaveZone_ != nullptr;};
          void deleteSlaveZone() { this->slaveZone_ = nullptr;};
          inline const vector<SlaveZones::SlaveZone> & getSlaveZone() const { DARABONBA_PTR_GET_CONST(slaveZone_, vector<SlaveZones::SlaveZone>) };
          inline vector<SlaveZones::SlaveZone> getSlaveZone() { DARABONBA_PTR_GET(slaveZone_, vector<SlaveZones::SlaveZone>) };
          inline SlaveZones& setSlaveZone(const vector<SlaveZones::SlaveZone> & slaveZone) { DARABONBA_PTR_SET_VALUE(slaveZone_, slaveZone) };
          inline SlaveZones& setSlaveZone(vector<SlaveZones::SlaveZone> && slaveZone) { DARABONBA_PTR_SET_RVALUE(slaveZone_, slaveZone) };


        protected:
          shared_ptr<vector<SlaveZones::SlaveZone>> slaveZone_ {};
        };

        class ServerlessConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServerlessConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
            DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
            DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
            DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
          };
          friend void from_json(const Darabonba::Json& j, ServerlessConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
            DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
            DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
            DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
          };
          ServerlessConfig() = default ;
          ServerlessConfig(const ServerlessConfig &) = default ;
          ServerlessConfig(ServerlessConfig &&) = default ;
          ServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServerlessConfig() = default ;
          ServerlessConfig& operator=(const ServerlessConfig &) = default ;
          ServerlessConfig& operator=(ServerlessConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoPause_ == nullptr
        && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->switchForce_ == nullptr; };
          // autoPause Field Functions 
          bool hasAutoPause() const { return this->autoPause_ != nullptr;};
          void deleteAutoPause() { this->autoPause_ = nullptr;};
          inline bool getAutoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
          inline ServerlessConfig& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


          // scaleMax Field Functions 
          bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
          void deleteScaleMax() { this->scaleMax_ = nullptr;};
          inline double getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0.0) };
          inline ServerlessConfig& setScaleMax(double scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


          // scaleMin Field Functions 
          bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
          void deleteScaleMin() { this->scaleMin_ = nullptr;};
          inline double getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0.0) };
          inline ServerlessConfig& setScaleMin(double scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


          // switchForce Field Functions 
          bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
          void deleteSwitchForce() { this->switchForce_ = nullptr;};
          inline bool getSwitchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
          inline ServerlessConfig& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


        protected:
          // Indicates whether the automatic start and stop feature is enabled for the serverless instance. Valid values:
          // 
          // *   **true**
          // *   **false** (default)
          // 
          // >  After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection to the instance is established, the instance is automatically resumed.
          shared_ptr<bool> autoPause_ {};
          // The maximum number of RCUs.
          shared_ptr<double> scaleMax_ {};
          // The minimum number of RDS Capacity Units (RCUs).
          shared_ptr<double> scaleMin_ {};
          // Indicates whether the forced scaling feature is enabled for the serverless instance. Valid values:
          // 
          // *   **true**
          // *   **false** (default)
          // 
          // >  In most cases, ApsaraDB RDS automatically scales in or out the RCUs of a serverless instance based on business requirements in real time. In rare cases, the scaling does not take effect in real time. You can enable the forced scaling feature to forcefully scales in or out the RCUs of the instance.
          shared_ptr<bool> switchForce_ {};
        };

        class ReadOnlyDBInstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadOnlyDBInstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, ReadOnlyDBInstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
          };
          ReadOnlyDBInstanceIds() = default ;
          ReadOnlyDBInstanceIds(const ReadOnlyDBInstanceIds &) = default ;
          ReadOnlyDBInstanceIds(ReadOnlyDBInstanceIds &&) = default ;
          ReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadOnlyDBInstanceIds() = default ;
          ReadOnlyDBInstanceIds& operator=(const ReadOnlyDBInstanceIds &) = default ;
          ReadOnlyDBInstanceIds& operator=(ReadOnlyDBInstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReadOnlyDBInstanceId : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReadOnlyDBInstanceId& obj) { 
              DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, ReadOnlyDBInstanceId& obj) { 
              DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            };
            ReadOnlyDBInstanceId() = default ;
            ReadOnlyDBInstanceId(const ReadOnlyDBInstanceId &) = default ;
            ReadOnlyDBInstanceId(ReadOnlyDBInstanceId &&) = default ;
            ReadOnlyDBInstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReadOnlyDBInstanceId() = default ;
            ReadOnlyDBInstanceId& operator=(const ReadOnlyDBInstanceId &) = default ;
            ReadOnlyDBInstanceId& operator=(ReadOnlyDBInstanceId &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
            // DBInstanceId Field Functions 
            bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
            void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
            inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
            inline ReadOnlyDBInstanceId& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


          protected:
            // The read-only instance ID.
            shared_ptr<string> DBInstanceId_ {};
          };

          virtual bool empty() const override { return this->readOnlyDBInstanceId_ == nullptr; };
          // readOnlyDBInstanceId Field Functions 
          bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
          void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
          inline const vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> & getReadOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>) };
          inline vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> getReadOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>) };
          inline ReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
          inline ReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


        protected:
          shared_ptr<vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>> readOnlyDBInstanceId_ {};
        };

        class Extra : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Extra& obj) { 
            DARABONBA_PTR_TO_JSON(AccountSecurityPolicy, accountSecurityPolicy_);
            DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
            DARABONBA_PTR_TO_JSON(RecoveryModel, recoveryModel_);
          };
          friend void from_json(const Darabonba::Json& j, Extra& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountSecurityPolicy, accountSecurityPolicy_);
            DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
            DARABONBA_PTR_FROM_JSON(RecoveryModel, recoveryModel_);
          };
          Extra() = default ;
          Extra(const Extra &) = default ;
          Extra(Extra &&) = default ;
          Extra(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Extra() = default ;
          Extra& operator=(const Extra &) = default ;
          Extra& operator=(Extra &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DBInstanceIds : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DBInstanceIds& obj) { 
              DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, DBInstanceIds& obj) { 
              DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            };
            DBInstanceIds() = default ;
            DBInstanceIds(const DBInstanceIds &) = default ;
            DBInstanceIds(DBInstanceIds &&) = default ;
            DBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DBInstanceIds() = default ;
            DBInstanceIds& operator=(const DBInstanceIds &) = default ;
            DBInstanceIds& operator=(DBInstanceIds &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
            // DBInstanceId Field Functions 
            bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
            void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
            inline const vector<string> & getDBInstanceId() const { DARABONBA_PTR_GET_CONST(DBInstanceId_, vector<string>) };
            inline vector<string> getDBInstanceId() { DARABONBA_PTR_GET(DBInstanceId_, vector<string>) };
            inline DBInstanceIds& setDBInstanceId(const vector<string> & DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };
            inline DBInstanceIds& setDBInstanceId(vector<string> && DBInstanceId) { DARABONBA_PTR_SET_RVALUE(DBInstanceId_, DBInstanceId) };


          protected:
            shared_ptr<vector<string>> DBInstanceId_ {};
          };

          virtual bool empty() const override { return this->accountSecurityPolicy_ == nullptr
        && this->DBInstanceIds_ == nullptr && this->recoveryModel_ == nullptr; };
          // accountSecurityPolicy Field Functions 
          bool hasAccountSecurityPolicy() const { return this->accountSecurityPolicy_ != nullptr;};
          void deleteAccountSecurityPolicy() { this->accountSecurityPolicy_ = nullptr;};
          inline string getAccountSecurityPolicy() const { DARABONBA_PTR_GET_DEFAULT(accountSecurityPolicy_, "") };
          inline Extra& setAccountSecurityPolicy(string accountSecurityPolicy) { DARABONBA_PTR_SET_VALUE(accountSecurityPolicy_, accountSecurityPolicy) };


          // DBInstanceIds Field Functions 
          bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
          void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
          inline const Extra::DBInstanceIds & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, Extra::DBInstanceIds) };
          inline Extra::DBInstanceIds getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, Extra::DBInstanceIds) };
          inline Extra& setDBInstanceIds(const Extra::DBInstanceIds & dBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, dBInstanceIds) };
          inline Extra& setDBInstanceIds(Extra::DBInstanceIds && dBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, dBInstanceIds) };


          // recoveryModel Field Functions 
          bool hasRecoveryModel() const { return this->recoveryModel_ != nullptr;};
          void deleteRecoveryModel() { this->recoveryModel_ = nullptr;};
          inline string getRecoveryModel() const { DARABONBA_PTR_GET_DEFAULT(recoveryModel_, "") };
          inline Extra& setRecoveryModel(string recoveryModel) { DARABONBA_PTR_SET_VALUE(recoveryModel_, recoveryModel) };


        protected:
          // The group policy of the instance account.
          // 
          // *   MaximumPasswordAge: maximum use time
          // *   MinimumPasswordAge: minimum use time
          shared_ptr<string> accountSecurityPolicy_ {};
          // The instance IDs.
          shared_ptr<Extra::DBInstanceIds> DBInstanceIds_ {};
          // The recovery model. Valid values: Simple and Full.
          shared_ptr<string> recoveryModel_ {};
        };

        class DBClusterNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DBClusterNodes& obj) { 
            DARABONBA_PTR_TO_JSON(DBClusterNode, DBClusterNode_);
          };
          friend void from_json(const Darabonba::Json& j, DBClusterNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(DBClusterNode, DBClusterNode_);
          };
          DBClusterNodes() = default ;
          DBClusterNodes(const DBClusterNodes &) = default ;
          DBClusterNodes(DBClusterNodes &&) = default ;
          DBClusterNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DBClusterNodes() = default ;
          DBClusterNodes& operator=(const DBClusterNodes &) = default ;
          DBClusterNodes& operator=(DBClusterNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DBClusterNode : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DBClusterNode& obj) { 
              DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
              DARABONBA_PTR_TO_JSON(ClassType, classType_);
              DARABONBA_PTR_TO_JSON(Cpu, cpu_);
              DARABONBA_PTR_TO_JSON(DisasterRecoveryNode, disasterRecoveryNode_);
              DARABONBA_PTR_TO_JSON(Memory, memory_);
              DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              DARABONBA_PTR_TO_JSON(NodeRegionId, nodeRegionId_);
              DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
              DARABONBA_PTR_TO_JSON(NodeZoneId, nodeZoneId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, DBClusterNode& obj) { 
              DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
              DARABONBA_PTR_FROM_JSON(ClassType, classType_);
              DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
              DARABONBA_PTR_FROM_JSON(DisasterRecoveryNode, disasterRecoveryNode_);
              DARABONBA_PTR_FROM_JSON(Memory, memory_);
              DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              DARABONBA_PTR_FROM_JSON(NodeRegionId, nodeRegionId_);
              DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
              DARABONBA_PTR_FROM_JSON(NodeZoneId, nodeZoneId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            DBClusterNode() = default ;
            DBClusterNode(const DBClusterNode &) = default ;
            DBClusterNode(DBClusterNode &&) = default ;
            DBClusterNode(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DBClusterNode() = default ;
            DBClusterNode& operator=(const DBClusterNode &) = default ;
            DBClusterNode& operator=(DBClusterNode &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->classCode_ == nullptr
        && this->classType_ == nullptr && this->cpu_ == nullptr && this->disasterRecoveryNode_ == nullptr && this->memory_ == nullptr && this->nodeId_ == nullptr
        && this->nodeRegionId_ == nullptr && this->nodeRole_ == nullptr && this->nodeZoneId_ == nullptr && this->status_ == nullptr; };
            // classCode Field Functions 
            bool hasClassCode() const { return this->classCode_ != nullptr;};
            void deleteClassCode() { this->classCode_ = nullptr;};
            inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
            inline DBClusterNode& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


            // classType Field Functions 
            bool hasClassType() const { return this->classType_ != nullptr;};
            void deleteClassType() { this->classType_ = nullptr;};
            inline string getClassType() const { DARABONBA_PTR_GET_DEFAULT(classType_, "") };
            inline DBClusterNode& setClassType(string classType) { DARABONBA_PTR_SET_VALUE(classType_, classType) };


            // cpu Field Functions 
            bool hasCpu() const { return this->cpu_ != nullptr;};
            void deleteCpu() { this->cpu_ = nullptr;};
            inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
            inline DBClusterNode& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


            // disasterRecoveryNode Field Functions 
            bool hasDisasterRecoveryNode() const { return this->disasterRecoveryNode_ != nullptr;};
            void deleteDisasterRecoveryNode() { this->disasterRecoveryNode_ = nullptr;};
            inline bool getDisasterRecoveryNode() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryNode_, false) };
            inline DBClusterNode& setDisasterRecoveryNode(bool disasterRecoveryNode) { DARABONBA_PTR_SET_VALUE(disasterRecoveryNode_, disasterRecoveryNode) };


            // memory Field Functions 
            bool hasMemory() const { return this->memory_ != nullptr;};
            void deleteMemory() { this->memory_ = nullptr;};
            inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
            inline DBClusterNode& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


            // nodeId Field Functions 
            bool hasNodeId() const { return this->nodeId_ != nullptr;};
            void deleteNodeId() { this->nodeId_ = nullptr;};
            inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
            inline DBClusterNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            // nodeRegionId Field Functions 
            bool hasNodeRegionId() const { return this->nodeRegionId_ != nullptr;};
            void deleteNodeRegionId() { this->nodeRegionId_ = nullptr;};
            inline string getNodeRegionId() const { DARABONBA_PTR_GET_DEFAULT(nodeRegionId_, "") };
            inline DBClusterNode& setNodeRegionId(string nodeRegionId) { DARABONBA_PTR_SET_VALUE(nodeRegionId_, nodeRegionId) };


            // nodeRole Field Functions 
            bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
            void deleteNodeRole() { this->nodeRole_ = nullptr;};
            inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
            inline DBClusterNode& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


            // nodeZoneId Field Functions 
            bool hasNodeZoneId() const { return this->nodeZoneId_ != nullptr;};
            void deleteNodeZoneId() { this->nodeZoneId_ = nullptr;};
            inline string getNodeZoneId() const { DARABONBA_PTR_GET_DEFAULT(nodeZoneId_, "") };
            inline DBClusterNode& setNodeZoneId(string nodeZoneId) { DARABONBA_PTR_SET_VALUE(nodeZoneId_, nodeZoneId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline DBClusterNode& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The node specification.
            shared_ptr<string> classCode_ {};
            // The node type. Default value: true. Valid values:
            // 
            // *   d: dedicated node type
            // *   x: general-purpose node type
            shared_ptr<string> classType_ {};
            // The number of CPU cores of the node.
            shared_ptr<string> cpu_ {};
            shared_ptr<bool> disasterRecoveryNode_ {};
            // The memory capacity of the node. Unit: MB.
            shared_ptr<string> memory_ {};
            // The node ID.
            shared_ptr<string> nodeId_ {};
            // The region ID.
            shared_ptr<string> nodeRegionId_ {};
            // The role of the node. Valid values:
            // 
            // *   **primary**
            // *   **secondary**
            shared_ptr<string> nodeRole_ {};
            // The zone ID.
            shared_ptr<string> nodeZoneId_ {};
            // The node status. Valid values:
            // 
            // *   active
            // *   creating
            // *   deleting
            // *   classchanging
            // *   restarting
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->DBClusterNode_ == nullptr; };
          // DBClusterNode Field Functions 
          bool hasDBClusterNode() const { return this->DBClusterNode_ != nullptr;};
          void deleteDBClusterNode() { this->DBClusterNode_ = nullptr;};
          inline const vector<DBClusterNodes::DBClusterNode> & getDBClusterNode() const { DARABONBA_PTR_GET_CONST(DBClusterNode_, vector<DBClusterNodes::DBClusterNode>) };
          inline vector<DBClusterNodes::DBClusterNode> getDBClusterNode() { DARABONBA_PTR_GET(DBClusterNode_, vector<DBClusterNodes::DBClusterNode>) };
          inline DBClusterNodes& setDBClusterNode(const vector<DBClusterNodes::DBClusterNode> & dBClusterNode) { DARABONBA_PTR_SET_VALUE(DBClusterNode_, dBClusterNode) };
          inline DBClusterNodes& setDBClusterNode(vector<DBClusterNodes::DBClusterNode> && dBClusterNode) { DARABONBA_PTR_SET_RVALUE(DBClusterNode_, dBClusterNode) };


        protected:
          shared_ptr<vector<DBClusterNodes::DBClusterNode>> DBClusterNode_ {};
        };

        class BabelfishConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BabelfishConfig& obj) { 
            DARABONBA_PTR_TO_JSON(BabelfishEnabled, babelfishEnabled_);
            DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          };
          friend void from_json(const Darabonba::Json& j, BabelfishConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(BabelfishEnabled, babelfishEnabled_);
            DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          };
          BabelfishConfig() = default ;
          BabelfishConfig(const BabelfishConfig &) = default ;
          BabelfishConfig(BabelfishConfig &&) = default ;
          BabelfishConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BabelfishConfig() = default ;
          BabelfishConfig& operator=(const BabelfishConfig &) = default ;
          BabelfishConfig& operator=(BabelfishConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->babelfishEnabled_ == nullptr
        && this->migrationMode_ == nullptr; };
          // babelfishEnabled Field Functions 
          bool hasBabelfishEnabled() const { return this->babelfishEnabled_ != nullptr;};
          void deleteBabelfishEnabled() { this->babelfishEnabled_ = nullptr;};
          inline string getBabelfishEnabled() const { DARABONBA_PTR_GET_DEFAULT(babelfishEnabled_, "") };
          inline BabelfishConfig& setBabelfishEnabled(string babelfishEnabled) { DARABONBA_PTR_SET_VALUE(babelfishEnabled_, babelfishEnabled) };


          // migrationMode Field Functions 
          bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
          void deleteMigrationMode() { this->migrationMode_ = nullptr;};
          inline string getMigrationMode() const { DARABONBA_PTR_GET_DEFAULT(migrationMode_, "") };
          inline BabelfishConfig& setMigrationMode(string migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };


        protected:
          // Indicates whether Babelfish is enabled.
          // 
          // >  If Babelfish is enabled when you purchase an ApsaraDB RDS for PostgreSQL instance, this parameter is fixed as **true**.
          shared_ptr<string> babelfishEnabled_ {};
          // The migration mode for Babelfish. Valid values:
          // 
          // *   **single-db**
          // *   **multi-db**
          // 
          // >  For more information about migration modes for Babelfish, see [Migration modes](https://help.aliyun.com/document_detail/428613.html).
          shared_ptr<string> migrationMode_ {};
        };

        virtual bool empty() const override { return this->accountMaxQuantity_ == nullptr
        && this->advancedFeatures_ == nullptr && this->autoUpgradeMinorVersion_ == nullptr && this->availabilityValue_ == nullptr && this->babelfishConfig_ == nullptr && this->blueGreenDeploymentName_ == nullptr
        && this->blueInstanceName_ == nullptr && this->bpeEnabled_ == nullptr && this->burstingEnabled_ == nullptr && this->canTempUpgrade_ == nullptr && this->category_ == nullptr
        && this->coldDataEnabled_ == nullptr && this->collation_ == nullptr && this->compressionMode_ == nullptr && this->compressionRatio_ == nullptr && this->computeBurstEnabled_ == nullptr
        && this->connectionMode_ == nullptr && this->connectionString_ == nullptr && this->consoleVersion_ == nullptr && this->creationTime_ == nullptr && this->currentKernelVersion_ == nullptr
        && this->DBClusterNodes_ == nullptr && this->DBInstanceCPU_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceClassType_ == nullptr && this->DBInstanceDescription_ == nullptr
        && this->DBInstanceDiskUsed_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceMemory_ == nullptr && this->DBInstanceNetType_ == nullptr && this->DBInstanceStatus_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBInstanceType_ == nullptr && this->DBMaxQuantity_ == nullptr && this->dedicatedHostGroupId_ == nullptr
        && this->deletionProtection_ == nullptr && this->disasterRecoveryInfo_ == nullptr && this->disasterRecoveryInstances_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->expireTime_ == nullptr && this->extra_ == nullptr && this->generalGroupName_ == nullptr && this->greenInstanceName_ == nullptr && this->guardDBInstanceId_ == nullptr
        && this->IPType_ == nullptr && this->incrementSourceDBInstanceId_ == nullptr && this->instanceNetworkType_ == nullptr && this->instructionSetArch_ == nullptr && this->ioAccelerationEnabled_ == nullptr
        && this->isAnalyticIns_ == nullptr && this->isAnalyticReadOnlyIns_ == nullptr && this->latestKernelVersion_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr
        && this->maintainTime_ == nullptr && this->masterInstanceId_ == nullptr && this->masterZone_ == nullptr && this->maxConnections_ == nullptr && this->maxIOMBPS_ == nullptr
        && this->maxIOPS_ == nullptr && this->multipleTempUpgrade_ == nullptr && this->optimizedWritesInfo_ == nullptr && this->PGBouncerEnabled_ == nullptr && this->payType_ == nullptr
        && this->port_ == nullptr && this->proxyType_ == nullptr && this->readOnlyDBInstanceIds_ == nullptr && this->readOnlyStatus_ == nullptr && this->readonlyInstanceSQLDelayedTime_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityIPList_ == nullptr && this->securityIPMode_ == nullptr && this->serverlessConfig_ == nullptr
        && this->slaveZones_ == nullptr && this->superPermissionMode_ == nullptr && this->supportCompression_ == nullptr && this->tempDBInstanceId_ == nullptr && this->tempUpgradeTimeEnd_ == nullptr
        && this->tempUpgradeTimeStart_ == nullptr && this->timeZone_ == nullptr && this->tips_ == nullptr && this->tipsLevel_ == nullptr && this->vSwitchId_ == nullptr
        && this->vectorSupportStatus_ == nullptr && this->vpcCloudInstanceId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr && this->kindCode_ == nullptr; };
        // accountMaxQuantity Field Functions 
        bool hasAccountMaxQuantity() const { return this->accountMaxQuantity_ != nullptr;};
        void deleteAccountMaxQuantity() { this->accountMaxQuantity_ = nullptr;};
        inline int32_t getAccountMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountMaxQuantity_, 0) };
        inline DBInstanceAttribute& setAccountMaxQuantity(int32_t accountMaxQuantity) { DARABONBA_PTR_SET_VALUE(accountMaxQuantity_, accountMaxQuantity) };


        // advancedFeatures Field Functions 
        bool hasAdvancedFeatures() const { return this->advancedFeatures_ != nullptr;};
        void deleteAdvancedFeatures() { this->advancedFeatures_ = nullptr;};
        inline string getAdvancedFeatures() const { DARABONBA_PTR_GET_DEFAULT(advancedFeatures_, "") };
        inline DBInstanceAttribute& setAdvancedFeatures(string advancedFeatures) { DARABONBA_PTR_SET_VALUE(advancedFeatures_, advancedFeatures) };


        // autoUpgradeMinorVersion Field Functions 
        bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
        void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
        inline string getAutoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
        inline DBInstanceAttribute& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


        // availabilityValue Field Functions 
        bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
        void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
        inline string getAvailabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
        inline DBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


        // babelfishConfig Field Functions 
        bool hasBabelfishConfig() const { return this->babelfishConfig_ != nullptr;};
        void deleteBabelfishConfig() { this->babelfishConfig_ = nullptr;};
        inline const DBInstanceAttribute::BabelfishConfig & getBabelfishConfig() const { DARABONBA_PTR_GET_CONST(babelfishConfig_, DBInstanceAttribute::BabelfishConfig) };
        inline DBInstanceAttribute::BabelfishConfig getBabelfishConfig() { DARABONBA_PTR_GET(babelfishConfig_, DBInstanceAttribute::BabelfishConfig) };
        inline DBInstanceAttribute& setBabelfishConfig(const DBInstanceAttribute::BabelfishConfig & babelfishConfig) { DARABONBA_PTR_SET_VALUE(babelfishConfig_, babelfishConfig) };
        inline DBInstanceAttribute& setBabelfishConfig(DBInstanceAttribute::BabelfishConfig && babelfishConfig) { DARABONBA_PTR_SET_RVALUE(babelfishConfig_, babelfishConfig) };


        // blueGreenDeploymentName Field Functions 
        bool hasBlueGreenDeploymentName() const { return this->blueGreenDeploymentName_ != nullptr;};
        void deleteBlueGreenDeploymentName() { this->blueGreenDeploymentName_ = nullptr;};
        inline string getBlueGreenDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(blueGreenDeploymentName_, "") };
        inline DBInstanceAttribute& setBlueGreenDeploymentName(string blueGreenDeploymentName) { DARABONBA_PTR_SET_VALUE(blueGreenDeploymentName_, blueGreenDeploymentName) };


        // blueInstanceName Field Functions 
        bool hasBlueInstanceName() const { return this->blueInstanceName_ != nullptr;};
        void deleteBlueInstanceName() { this->blueInstanceName_ = nullptr;};
        inline string getBlueInstanceName() const { DARABONBA_PTR_GET_DEFAULT(blueInstanceName_, "") };
        inline DBInstanceAttribute& setBlueInstanceName(string blueInstanceName) { DARABONBA_PTR_SET_VALUE(blueInstanceName_, blueInstanceName) };


        // bpeEnabled Field Functions 
        bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
        void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
        inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
        inline DBInstanceAttribute& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline DBInstanceAttribute& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // canTempUpgrade Field Functions 
        bool hasCanTempUpgrade() const { return this->canTempUpgrade_ != nullptr;};
        void deleteCanTempUpgrade() { this->canTempUpgrade_ = nullptr;};
        inline bool getCanTempUpgrade() const { DARABONBA_PTR_GET_DEFAULT(canTempUpgrade_, false) };
        inline DBInstanceAttribute& setCanTempUpgrade(bool canTempUpgrade) { DARABONBA_PTR_SET_VALUE(canTempUpgrade_, canTempUpgrade) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBInstanceAttribute& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // coldDataEnabled Field Functions 
        bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
        void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
        inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
        inline DBInstanceAttribute& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


        // collation Field Functions 
        bool hasCollation() const { return this->collation_ != nullptr;};
        void deleteCollation() { this->collation_ = nullptr;};
        inline string getCollation() const { DARABONBA_PTR_GET_DEFAULT(collation_, "") };
        inline DBInstanceAttribute& setCollation(string collation) { DARABONBA_PTR_SET_VALUE(collation_, collation) };


        // compressionMode Field Functions 
        bool hasCompressionMode() const { return this->compressionMode_ != nullptr;};
        void deleteCompressionMode() { this->compressionMode_ = nullptr;};
        inline string getCompressionMode() const { DARABONBA_PTR_GET_DEFAULT(compressionMode_, "") };
        inline DBInstanceAttribute& setCompressionMode(string compressionMode) { DARABONBA_PTR_SET_VALUE(compressionMode_, compressionMode) };


        // compressionRatio Field Functions 
        bool hasCompressionRatio() const { return this->compressionRatio_ != nullptr;};
        void deleteCompressionRatio() { this->compressionRatio_ = nullptr;};
        inline string getCompressionRatio() const { DARABONBA_PTR_GET_DEFAULT(compressionRatio_, "") };
        inline DBInstanceAttribute& setCompressionRatio(string compressionRatio) { DARABONBA_PTR_SET_VALUE(compressionRatio_, compressionRatio) };


        // computeBurstEnabled Field Functions 
        bool hasComputeBurstEnabled() const { return this->computeBurstEnabled_ != nullptr;};
        void deleteComputeBurstEnabled() { this->computeBurstEnabled_ = nullptr;};
        inline bool getComputeBurstEnabled() const { DARABONBA_PTR_GET_DEFAULT(computeBurstEnabled_, false) };
        inline DBInstanceAttribute& setComputeBurstEnabled(bool computeBurstEnabled) { DARABONBA_PTR_SET_VALUE(computeBurstEnabled_, computeBurstEnabled) };


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


        // consoleVersion Field Functions 
        bool hasConsoleVersion() const { return this->consoleVersion_ != nullptr;};
        void deleteConsoleVersion() { this->consoleVersion_ = nullptr;};
        inline string getConsoleVersion() const { DARABONBA_PTR_GET_DEFAULT(consoleVersion_, "") };
        inline DBInstanceAttribute& setConsoleVersion(string consoleVersion) { DARABONBA_PTR_SET_VALUE(consoleVersion_, consoleVersion) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBInstanceAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // currentKernelVersion Field Functions 
        bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
        void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
        inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
        inline DBInstanceAttribute& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


        // DBClusterNodes Field Functions 
        bool hasDBClusterNodes() const { return this->DBClusterNodes_ != nullptr;};
        void deleteDBClusterNodes() { this->DBClusterNodes_ = nullptr;};
        inline const DBInstanceAttribute::DBClusterNodes & getDBClusterNodes() const { DARABONBA_PTR_GET_CONST(DBClusterNodes_, DBInstanceAttribute::DBClusterNodes) };
        inline DBInstanceAttribute::DBClusterNodes getDBClusterNodes() { DARABONBA_PTR_GET(DBClusterNodes_, DBInstanceAttribute::DBClusterNodes) };
        inline DBInstanceAttribute& setDBClusterNodes(const DBInstanceAttribute::DBClusterNodes & dBClusterNodes) { DARABONBA_PTR_SET_VALUE(DBClusterNodes_, dBClusterNodes) };
        inline DBInstanceAttribute& setDBClusterNodes(DBInstanceAttribute::DBClusterNodes && dBClusterNodes) { DARABONBA_PTR_SET_RVALUE(DBClusterNodes_, dBClusterNodes) };


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


        // DBInstanceDiskUsed Field Functions 
        bool hasDBInstanceDiskUsed() const { return this->DBInstanceDiskUsed_ != nullptr;};
        void deleteDBInstanceDiskUsed() { this->DBInstanceDiskUsed_ = nullptr;};
        inline string getDBInstanceDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDiskUsed_, "") };
        inline DBInstanceAttribute& setDBInstanceDiskUsed(string DBInstanceDiskUsed) { DARABONBA_PTR_SET_VALUE(DBInstanceDiskUsed_, DBInstanceDiskUsed) };


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


        // dedicatedHostGroupId Field Functions 
        bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
        void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
        inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
        inline DBInstanceAttribute& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline DBInstanceAttribute& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // disasterRecoveryInfo Field Functions 
        bool hasDisasterRecoveryInfo() const { return this->disasterRecoveryInfo_ != nullptr;};
        void deleteDisasterRecoveryInfo() { this->disasterRecoveryInfo_ = nullptr;};
        inline string getDisasterRecoveryInfo() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInfo_, "") };
        inline DBInstanceAttribute& setDisasterRecoveryInfo(string disasterRecoveryInfo) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInfo_, disasterRecoveryInfo) };


        // disasterRecoveryInstances Field Functions 
        bool hasDisasterRecoveryInstances() const { return this->disasterRecoveryInstances_ != nullptr;};
        void deleteDisasterRecoveryInstances() { this->disasterRecoveryInstances_ = nullptr;};
        inline string getDisasterRecoveryInstances() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInstances_, "") };
        inline DBInstanceAttribute& setDisasterRecoveryInstances(string disasterRecoveryInstances) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInstances_, disasterRecoveryInstances) };


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


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline const DBInstanceAttribute::Extra & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, DBInstanceAttribute::Extra) };
        inline DBInstanceAttribute::Extra getExtra() { DARABONBA_PTR_GET(extra_, DBInstanceAttribute::Extra) };
        inline DBInstanceAttribute& setExtra(const DBInstanceAttribute::Extra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
        inline DBInstanceAttribute& setExtra(DBInstanceAttribute::Extra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


        // generalGroupName Field Functions 
        bool hasGeneralGroupName() const { return this->generalGroupName_ != nullptr;};
        void deleteGeneralGroupName() { this->generalGroupName_ = nullptr;};
        inline string getGeneralGroupName() const { DARABONBA_PTR_GET_DEFAULT(generalGroupName_, "") };
        inline DBInstanceAttribute& setGeneralGroupName(string generalGroupName) { DARABONBA_PTR_SET_VALUE(generalGroupName_, generalGroupName) };


        // greenInstanceName Field Functions 
        bool hasGreenInstanceName() const { return this->greenInstanceName_ != nullptr;};
        void deleteGreenInstanceName() { this->greenInstanceName_ = nullptr;};
        inline string getGreenInstanceName() const { DARABONBA_PTR_GET_DEFAULT(greenInstanceName_, "") };
        inline DBInstanceAttribute& setGreenInstanceName(string greenInstanceName) { DARABONBA_PTR_SET_VALUE(greenInstanceName_, greenInstanceName) };


        // guardDBInstanceId Field Functions 
        bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
        void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
        inline string getGuardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
        inline DBInstanceAttribute& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


        // IPType Field Functions 
        bool hasIPType() const { return this->IPType_ != nullptr;};
        void deleteIPType() { this->IPType_ = nullptr;};
        inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
        inline DBInstanceAttribute& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


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


        // instructionSetArch Field Functions 
        bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
        void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
        inline string getInstructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
        inline DBInstanceAttribute& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


        // ioAccelerationEnabled Field Functions 
        bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
        void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
        inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
        inline DBInstanceAttribute& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


        // isAnalyticIns Field Functions 
        bool hasIsAnalyticIns() const { return this->isAnalyticIns_ != nullptr;};
        void deleteIsAnalyticIns() { this->isAnalyticIns_ = nullptr;};
        inline bool getIsAnalyticIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticIns_, false) };
        inline DBInstanceAttribute& setIsAnalyticIns(bool isAnalyticIns) { DARABONBA_PTR_SET_VALUE(isAnalyticIns_, isAnalyticIns) };


        // isAnalyticReadOnlyIns Field Functions 
        bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
        void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
        inline bool getIsAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
        inline DBInstanceAttribute& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


        // latestKernelVersion Field Functions 
        bool hasLatestKernelVersion() const { return this->latestKernelVersion_ != nullptr;};
        void deleteLatestKernelVersion() { this->latestKernelVersion_ = nullptr;};
        inline string getLatestKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(latestKernelVersion_, "") };
        inline DBInstanceAttribute& setLatestKernelVersion(string latestKernelVersion) { DARABONBA_PTR_SET_VALUE(latestKernelVersion_, latestKernelVersion) };


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


        // masterZone Field Functions 
        bool hasMasterZone() const { return this->masterZone_ != nullptr;};
        void deleteMasterZone() { this->masterZone_ = nullptr;};
        inline string getMasterZone() const { DARABONBA_PTR_GET_DEFAULT(masterZone_, "") };
        inline DBInstanceAttribute& setMasterZone(string masterZone) { DARABONBA_PTR_SET_VALUE(masterZone_, masterZone) };


        // maxConnections Field Functions 
        bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
        void deleteMaxConnections() { this->maxConnections_ = nullptr;};
        inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
        inline DBInstanceAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


        // maxIOMBPS Field Functions 
        bool hasMaxIOMBPS() const { return this->maxIOMBPS_ != nullptr;};
        void deleteMaxIOMBPS() { this->maxIOMBPS_ = nullptr;};
        inline int32_t getMaxIOMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOMBPS_, 0) };
        inline DBInstanceAttribute& setMaxIOMBPS(int32_t maxIOMBPS) { DARABONBA_PTR_SET_VALUE(maxIOMBPS_, maxIOMBPS) };


        // maxIOPS Field Functions 
        bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
        void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
        inline int32_t getMaxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
        inline DBInstanceAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


        // multipleTempUpgrade Field Functions 
        bool hasMultipleTempUpgrade() const { return this->multipleTempUpgrade_ != nullptr;};
        void deleteMultipleTempUpgrade() { this->multipleTempUpgrade_ = nullptr;};
        inline bool getMultipleTempUpgrade() const { DARABONBA_PTR_GET_DEFAULT(multipleTempUpgrade_, false) };
        inline DBInstanceAttribute& setMultipleTempUpgrade(bool multipleTempUpgrade) { DARABONBA_PTR_SET_VALUE(multipleTempUpgrade_, multipleTempUpgrade) };


        // optimizedWritesInfo Field Functions 
        bool hasOptimizedWritesInfo() const { return this->optimizedWritesInfo_ != nullptr;};
        void deleteOptimizedWritesInfo() { this->optimizedWritesInfo_ = nullptr;};
        inline string getOptimizedWritesInfo() const { DARABONBA_PTR_GET_DEFAULT(optimizedWritesInfo_, "") };
        inline DBInstanceAttribute& setOptimizedWritesInfo(string optimizedWritesInfo) { DARABONBA_PTR_SET_VALUE(optimizedWritesInfo_, optimizedWritesInfo) };


        // PGBouncerEnabled Field Functions 
        bool hasPGBouncerEnabled() const { return this->PGBouncerEnabled_ != nullptr;};
        void deletePGBouncerEnabled() { this->PGBouncerEnabled_ = nullptr;};
        inline string getPGBouncerEnabled() const { DARABONBA_PTR_GET_DEFAULT(PGBouncerEnabled_, "") };
        inline DBInstanceAttribute& setPGBouncerEnabled(string PGBouncerEnabled) { DARABONBA_PTR_SET_VALUE(PGBouncerEnabled_, PGBouncerEnabled) };


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


        // proxyType Field Functions 
        bool hasProxyType() const { return this->proxyType_ != nullptr;};
        void deleteProxyType() { this->proxyType_ = nullptr;};
        inline int32_t getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, 0) };
        inline DBInstanceAttribute& setProxyType(int32_t proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


        // readOnlyDBInstanceIds Field Functions 
        bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
        void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
        inline const DBInstanceAttribute::ReadOnlyDBInstanceIds & getReadOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, DBInstanceAttribute::ReadOnlyDBInstanceIds) };
        inline DBInstanceAttribute::ReadOnlyDBInstanceIds getReadOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, DBInstanceAttribute::ReadOnlyDBInstanceIds) };
        inline DBInstanceAttribute& setReadOnlyDBInstanceIds(const DBInstanceAttribute::ReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
        inline DBInstanceAttribute& setReadOnlyDBInstanceIds(DBInstanceAttribute::ReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


        // readOnlyStatus Field Functions 
        bool hasReadOnlyStatus() const { return this->readOnlyStatus_ != nullptr;};
        void deleteReadOnlyStatus() { this->readOnlyStatus_ = nullptr;};
        inline string getReadOnlyStatus() const { DARABONBA_PTR_GET_DEFAULT(readOnlyStatus_, "") };
        inline DBInstanceAttribute& setReadOnlyStatus(string readOnlyStatus) { DARABONBA_PTR_SET_VALUE(readOnlyStatus_, readOnlyStatus) };


        // readonlyInstanceSQLDelayedTime Field Functions 
        bool hasReadonlyInstanceSQLDelayedTime() const { return this->readonlyInstanceSQLDelayedTime_ != nullptr;};
        void deleteReadonlyInstanceSQLDelayedTime() { this->readonlyInstanceSQLDelayedTime_ = nullptr;};
        inline string getReadonlyInstanceSQLDelayedTime() const { DARABONBA_PTR_GET_DEFAULT(readonlyInstanceSQLDelayedTime_, "") };
        inline DBInstanceAttribute& setReadonlyInstanceSQLDelayedTime(string readonlyInstanceSQLDelayedTime) { DARABONBA_PTR_SET_VALUE(readonlyInstanceSQLDelayedTime_, readonlyInstanceSQLDelayedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityIPList Field Functions 
        bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
        void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
        inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
        inline DBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


        // securityIPMode Field Functions 
        bool hasSecurityIPMode() const { return this->securityIPMode_ != nullptr;};
        void deleteSecurityIPMode() { this->securityIPMode_ = nullptr;};
        inline string getSecurityIPMode() const { DARABONBA_PTR_GET_DEFAULT(securityIPMode_, "") };
        inline DBInstanceAttribute& setSecurityIPMode(string securityIPMode) { DARABONBA_PTR_SET_VALUE(securityIPMode_, securityIPMode) };


        // serverlessConfig Field Functions 
        bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
        void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
        inline const DBInstanceAttribute::ServerlessConfig & getServerlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, DBInstanceAttribute::ServerlessConfig) };
        inline DBInstanceAttribute::ServerlessConfig getServerlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, DBInstanceAttribute::ServerlessConfig) };
        inline DBInstanceAttribute& setServerlessConfig(const DBInstanceAttribute::ServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
        inline DBInstanceAttribute& setServerlessConfig(DBInstanceAttribute::ServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


        // slaveZones Field Functions 
        bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
        void deleteSlaveZones() { this->slaveZones_ = nullptr;};
        inline const DBInstanceAttribute::SlaveZones & getSlaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, DBInstanceAttribute::SlaveZones) };
        inline DBInstanceAttribute::SlaveZones getSlaveZones() { DARABONBA_PTR_GET(slaveZones_, DBInstanceAttribute::SlaveZones) };
        inline DBInstanceAttribute& setSlaveZones(const DBInstanceAttribute::SlaveZones & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
        inline DBInstanceAttribute& setSlaveZones(DBInstanceAttribute::SlaveZones && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


        // superPermissionMode Field Functions 
        bool hasSuperPermissionMode() const { return this->superPermissionMode_ != nullptr;};
        void deleteSuperPermissionMode() { this->superPermissionMode_ = nullptr;};
        inline string getSuperPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(superPermissionMode_, "") };
        inline DBInstanceAttribute& setSuperPermissionMode(string superPermissionMode) { DARABONBA_PTR_SET_VALUE(superPermissionMode_, superPermissionMode) };


        // supportCompression Field Functions 
        bool hasSupportCompression() const { return this->supportCompression_ != nullptr;};
        void deleteSupportCompression() { this->supportCompression_ = nullptr;};
        inline bool getSupportCompression() const { DARABONBA_PTR_GET_DEFAULT(supportCompression_, false) };
        inline DBInstanceAttribute& setSupportCompression(bool supportCompression) { DARABONBA_PTR_SET_VALUE(supportCompression_, supportCompression) };


        // tempDBInstanceId Field Functions 
        bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
        void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
        inline string getTempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
        inline DBInstanceAttribute& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


        // tempUpgradeTimeEnd Field Functions 
        bool hasTempUpgradeTimeEnd() const { return this->tempUpgradeTimeEnd_ != nullptr;};
        void deleteTempUpgradeTimeEnd() { this->tempUpgradeTimeEnd_ = nullptr;};
        inline string getTempUpgradeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(tempUpgradeTimeEnd_, "") };
        inline DBInstanceAttribute& setTempUpgradeTimeEnd(string tempUpgradeTimeEnd) { DARABONBA_PTR_SET_VALUE(tempUpgradeTimeEnd_, tempUpgradeTimeEnd) };


        // tempUpgradeTimeStart Field Functions 
        bool hasTempUpgradeTimeStart() const { return this->tempUpgradeTimeStart_ != nullptr;};
        void deleteTempUpgradeTimeStart() { this->tempUpgradeTimeStart_ = nullptr;};
        inline string getTempUpgradeTimeStart() const { DARABONBA_PTR_GET_DEFAULT(tempUpgradeTimeStart_, "") };
        inline DBInstanceAttribute& setTempUpgradeTimeStart(string tempUpgradeTimeStart) { DARABONBA_PTR_SET_VALUE(tempUpgradeTimeStart_, tempUpgradeTimeStart) };


        // timeZone Field Functions 
        bool hasTimeZone() const { return this->timeZone_ != nullptr;};
        void deleteTimeZone() { this->timeZone_ = nullptr;};
        inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
        inline DBInstanceAttribute& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline DBInstanceAttribute& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


        // tipsLevel Field Functions 
        bool hasTipsLevel() const { return this->tipsLevel_ != nullptr;};
        void deleteTipsLevel() { this->tipsLevel_ = nullptr;};
        inline int32_t getTipsLevel() const { DARABONBA_PTR_GET_DEFAULT(tipsLevel_, 0) };
        inline DBInstanceAttribute& setTipsLevel(int32_t tipsLevel) { DARABONBA_PTR_SET_VALUE(tipsLevel_, tipsLevel) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vectorSupportStatus Field Functions 
        bool hasVectorSupportStatus() const { return this->vectorSupportStatus_ != nullptr;};
        void deleteVectorSupportStatus() { this->vectorSupportStatus_ = nullptr;};
        inline string getVectorSupportStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorSupportStatus_, "") };
        inline DBInstanceAttribute& setVectorSupportStatus(string vectorSupportStatus) { DARABONBA_PTR_SET_VALUE(vectorSupportStatus_, vectorSupportStatus) };


        // vpcCloudInstanceId Field Functions 
        bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
        void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
        inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
        inline DBInstanceAttribute& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


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


        // kindCode Field Functions 
        bool hasKindCode() const { return this->kindCode_ != nullptr;};
        void deleteKindCode() { this->kindCode_ = nullptr;};
        inline string getKindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, "") };
        inline DBInstanceAttribute& setKindCode(string kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


      protected:
        // The maximum number of accounts that can be created on the instance.
        shared_ptr<int32_t> accountMaxQuantity_ {};
        // The advanced features that are enabled for the instance. If multiple advanced features are enabled, the advanced features are separated by commas (,). This parameter is available only to instances that run **SQL Server**. Valid values:
        // 
        // *   **LinkedServer**
        // *   **DistributeTransaction**
        shared_ptr<string> advancedFeatures_ {};
        // The method that is used to update the minor engine version of the instance. Valid values:
        // 
        // *   **Auto**: automatic update.
        // *   **Manual**: manual update. The minor engine version of the instance is forcefully updated only when the in-use minor engine version is phased out.
        shared_ptr<string> autoUpgradeMinorVersion_ {};
        // The availability status of the instance in percentage.
        shared_ptr<string> availabilityValue_ {};
        // The configuration of the Babelfish feature for the ApsaraDB RDS for PostgreSQL instance.
        // 
        // >  This parameter applies only to ApsaraDB RDS for PostgreSQL instances for which Babelfish is enabled. For more information, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
        shared_ptr<DBInstanceAttribute::BabelfishConfig> babelfishConfig_ {};
        // This is a reserved parameter and is not in use.
        shared_ptr<string> blueGreenDeploymentName_ {};
        // This is a reserved parameter and is not in use.
        shared_ptr<string> blueInstanceName_ {};
        // A deprecated parameter. You do not need to specify this parameter.
        shared_ptr<string> bpeEnabled_ {};
        // Indicates whether the I/O burst feature is enabled for Premium ESSDs. Valid values:
        // 
        // *   true
        // *   false
        // 
        // >  For more information about the I/O burst feature, see [What are Premium ESSDs?](https://help.aliyun.com/document_detail/2340501.html)
        shared_ptr<bool> burstingEnabled_ {};
        // Indicates whether the conditions for a temporary upgrade are met.
        // 
        // >  Pay-as-you-go instances do not support temporary upgrades.
        shared_ptr<bool> canTempUpgrade_ {};
        // The RDS edition. Valid values:
        // 
        // *   **Basic**: RDS Basic Edition
        // *   **HighAvailability**: RDS High-availability Edition
        // *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL
        // *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server
        // *   **Finance**: RDS Enterprise Edition
        // *   **Serverless_basic**: RDS Basic Edition for serverless instances
        shared_ptr<string> category_ {};
        // Indicates whether the data archiving feature is enabled for Premium ESSDs. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // For more information about the data archiving feature, see [Use the data archiving feature](https://help.aliyun.com/document_detail/2701832.html).
        shared_ptr<bool> coldDataEnabled_ {};
        // The character set collation of the instance.
        shared_ptr<string> collation_ {};
        // The storage compression mode of the instance.
        shared_ptr<string> compressionMode_ {};
        // The storage compression ratio.
        shared_ptr<string> compressionRatio_ {};
        // This is a reserved parameter and is not in use.
        shared_ptr<bool> computeBurstEnabled_ {};
        // The connection mode of the instance. Valid values:
        // 
        // *   **Standard**: standard mode
        // *   **Safe**: database proxy mode
        shared_ptr<string> connectionMode_ {};
        // The internal endpoint.
        shared_ptr<string> connectionString_ {};
        // The type of the proxy that is used by the instance. Valid values:
        // 
        // *   **1**: shared database proxy
        // *   **2**: dedicated database proxy
        // 
        // >  We recommend that you use the **ProxyType** parameter instead of this parameter.
        shared_ptr<string> consoleVersion_ {};
        // The creation time. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The minor engine version.
        shared_ptr<string> currentKernelVersion_ {};
        // The information about the node in the cluster.
        shared_ptr<DBInstanceAttribute::DBClusterNodes> DBClusterNodes_ {};
        // The number of CPU cores.
        shared_ptr<string> DBInstanceCPU_ {};
        // The instance type of the instance. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
        shared_ptr<string> DBInstanceClass_ {};
        // The instance family. Valid values:
        // 
        // *   **s**: shared instance family
        // *   **x**: general-purpose instance family
        // *   **d**: dedicated instance family
        // *   **h**: dedicated host instance family
        shared_ptr<string> DBInstanceClassType_ {};
        // The instance description.
        shared_ptr<string> DBInstanceDescription_ {};
        // The disk usage of the instance. Unit: byte.
        shared_ptr<string> DBInstanceDiskUsed_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The memory capacity of the instance. Unit: MB.
        shared_ptr<int64_t> DBInstanceMemory_ {};
        // The type of the network over which the instance is connected. Valid values:
        // 
        // *   **Internet**
        // *   **Intranet**
        shared_ptr<string> DBInstanceNetType_ {};
        // The instance status. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/26315.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage capacity of the instance. Unit: GB.
        shared_ptr<int32_t> DBInstanceStorage_ {};
        // The storage type of the instance. Valid values:
        // 
        // *   **local_ssd** and **ephemeral_ssd**: Premium Local SSD
        // *   **cloud_ssd**: standard SSD
        // *   **cloud_essd**: ESSD
        // *   **cloud_essd**: Premium ESSD
        shared_ptr<string> DBInstanceStorageType_ {};
        // The type of the instance. Valid values:
        // 
        // *   **Primary**: primary instance
        // *   **Readonly**: read-only instance
        // *   **Guard**: disaster recovery instance
        // *   **Temp**: temporary instance
        shared_ptr<string> DBInstanceType_ {};
        // The maximum number of databases that can be created on the instance.
        shared_ptr<int32_t> DBMaxQuantity_ {};
        // The ID of the dedicated cluster to which the instance belongs.
        shared_ptr<string> dedicatedHostGroupId_ {};
        // Indicates whether the release protection feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> deletionProtection_ {};
        // Disaster Recovery Instance Information
        shared_ptr<string> disasterRecoveryInfo_ {};
        // All disaster recovery instances of the current instance.
        shared_ptr<string> disasterRecoveryInstances_ {};
        // The database engine of the instance. Valid values:
        // 
        // *   **MySQL**
        // *   **PostgreSQL**
        // *   **SQLServer**
        // *   **MariaDB**
        shared_ptr<string> engine_ {};
        // The database engine version.
        shared_ptr<string> engineVersion_ {};
        // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // >  Pay-as-you-go instances never expire.
        shared_ptr<string> expireTime_ {};
        // The extended information about the instance.
        shared_ptr<DBInstanceAttribute::Extra> extra_ {};
        // The name of the dedicated cluster to which the instance belongs. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
        shared_ptr<string> generalGroupName_ {};
        // This is a reserved parameter and is not in use.
        shared_ptr<string> greenInstanceName_ {};
        // The ID of the disaster recovery instance that is attached to the primary instance.
        shared_ptr<string> guardDBInstanceId_ {};
        // The IP address type. Only **IPv4 addresses** are supported.
        shared_ptr<string> IPType_ {};
        // The ID of the instance from which incremental data comes. The incremental data of a disaster recovery instance comes from its primary instance. The incremental data of a read-only instance comes from its primary instance. If this parameter is not returned, the instance is a primary instance.
        shared_ptr<string> incrementSourceDBInstanceId_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**
        // *   **VPC**
        shared_ptr<string> instanceNetworkType_ {};
        // The architecture type of the instance. Valid values:
        // 
        // *   **x86**
        // *   **arm**
        shared_ptr<string> instructionSetArch_ {};
        // Indicates whether Buffer Pool Extension (BPE) is enabled for Premium ESSDs.
        // 
        // *   **1**: enabled
        // *   **0**: disabled
        // 
        // >  For more information, see [Buffer Pool Extension(BPE)](https://help.aliyun.com/document_detail/2527067.html).
        shared_ptr<string> ioAccelerationEnabled_ {};
        shared_ptr<bool> isAnalyticIns_ {};
        shared_ptr<bool> isAnalyticReadOnlyIns_ {};
        // The latest minor engine version that is supported by the instance.
        shared_ptr<string> latestKernelVersion_ {};
        // The lock mode of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
        // *   **LockByRestoration**: The instance is automatically locked due to instance restoration.
        // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage space.
        // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked due to exhausted storage.
        shared_ptr<string> lockMode_ {};
        // The reason why the instance was locked.
        shared_ptr<string> lockReason_ {};
        // The maintenance window of the instance. The time is displayed in UTC. The maintenance window displayed in the ApsaraDB RDS console is equal to the value of this parameter plus 8 hours.
        shared_ptr<string> maintainTime_ {};
        // The primary instance ID.
        // 
        // >  If this parameter is not returned, the instance is the primary instance.
        shared_ptr<string> masterInstanceId_ {};
        // The zone ID of the primary instance.
        shared_ptr<string> masterZone_ {};
        // The maximum number of concurrent connections.
        shared_ptr<int32_t> maxConnections_ {};
        // The maximum I/O throughput. Unit: MB/s.
        shared_ptr<int32_t> maxIOMBPS_ {};
        // The maximum number of I/O requests per second.
        shared_ptr<int32_t> maxIOPS_ {};
        // Indicates whether auto scaling is being performed on the instance. If the value **true** is returned, auto scaling is being performed on the instance. If no value is returned, auto scaling is not being performed on the instance.
        shared_ptr<bool> multipleTempUpgrade_ {};
        // The OptimizedWritesInfo parameter contains the following fields:
        // *   **optimized_writes**: indicates whether the 16K atomic write feature is enabled for the current instance.
        // *   **init_optimized_writes**: indicates whether the 16K atomic write feature can be enabled for the current instance. If init_optimized_writes is set to false, the 16K atomic write switch is not displayed for the instance in the console.
        shared_ptr<string> optimizedWritesInfo_ {};
        // Indicates whether PgBouncer is enabled.
        // 
        // >  This parameter is returned only for RDS instances that run PostgreSQL. If PgBouncer is enabled, the return value is **true**.
        shared_ptr<string> PGBouncerEnabled_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go
        // *   **Prepaid**: subscription
        // *   **SERVERLESS**
        shared_ptr<string> payType_ {};
        // The port that is used to connect to the instance over an internal network.
        shared_ptr<string> port_ {};
        // The type of the proxy that is supported by the instance. Valid values:
        // 
        // *   **0**: The instance does not support database proxies.
        // *   **1**: The instance supports shared proxies, with which the instance runs in multi-tenant mode.
        // *   **2**: The instance supports dedicated proxies, with which the instance runs in single-tenant mode.
        shared_ptr<int32_t> proxyType_ {};
        // The IDs of the read-only instances that are attached to the primary instance.
        shared_ptr<DBInstanceAttribute::ReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ {};
        // This is a reserved parameter and is not in use.
        shared_ptr<string> readOnlyStatus_ {};
        // The latency at which the system replicates data to read-only instances. The system replicates data from the primary instance to the read-only instances at the latency that is specified by the **ReadonlyInstanceSQLDelayedTime** parameter. Unit: seconds.
        shared_ptr<string> readonlyInstanceSQLDelayedTime_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The IP addresses in the IP address whitelist.
        shared_ptr<string> securityIPList_ {};
        // The whitelist mode. Valid values:
        // 
        // *   **normal**: standard whitelist mode
        // *   **safety**: enhanced whitelist mode
        shared_ptr<string> securityIPMode_ {};
        // The settings of the serverless instance.
        shared_ptr<DBInstanceAttribute::ServerlessConfig> serverlessConfig_ {};
        // The zone IDs of the secondary instances.
        shared_ptr<DBInstanceAttribute::SlaveZones> slaveZones_ {};
        // Indicates whether the instance supports superuser accounts, such as the system administrator (SA) account, Active Directory (AD) account, and host account. Valid values:
        // 
        // *   **Enable**
        // *   **Disabled**
        shared_ptr<string> superPermissionMode_ {};
        // Indicates whether storage compression can be enabled for the instance.
        shared_ptr<bool> supportCompression_ {};
        // The ID of the temporary instance that is attached to the primary instance.
        shared_ptr<string> tempDBInstanceId_ {};
        // The end time of the temporary upgrade of the instance.
        // 
        // >  This parameter is unavailable for pay-as-you-go instances.
        shared_ptr<string> tempUpgradeTimeEnd_ {};
        // The start time of the temporary upgrade of the instance.
        // 
        // >  This parameter is unavailable for pay-as-you-go instances.
        shared_ptr<string> tempUpgradeTimeStart_ {};
        // The time zone.
        shared_ptr<string> timeZone_ {};
        // The information about the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
        shared_ptr<string> tips_ {};
        // The severity of the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
        // 
        // *   **1**: The instance is normal.
        // *   **2**: The specifications of the read-only instances do not match the specifications of the primary instance. You must adjust the specifications of these instances based on your business requirements.
        shared_ptr<int32_t> tipsLevel_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vectorSupportStatus_ {};
        // The ID of the VPC. This parameter is returned only when the instance resides in a VPC.
        shared_ptr<string> vpcCloudInstanceId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
        // An internal parameter. You do not need to specify this parameter.
        shared_ptr<string> kindCode_ {};
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
    inline const DescribeDBInstanceAttributeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstanceAttributeResponseBody::Items) };
    inline DescribeDBInstanceAttributeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstanceAttributeResponseBody::Items) };
    inline DescribeDBInstanceAttributeResponseBody& setItems(const DescribeDBInstanceAttributeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceAttributeResponseBody& setItems(DescribeDBInstanceAttributeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of instances.
    shared_ptr<DescribeDBInstanceAttributeResponseBody::Items> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
