// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& obj) { 
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
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountMaxQuantity_ == nullptr
        && return this->advancedFeatures_ == nullptr && return this->autoUpgradeMinorVersion_ == nullptr && return this->availabilityValue_ == nullptr && return this->babelfishConfig_ == nullptr && return this->blueGreenDeploymentName_ == nullptr
        && return this->blueInstanceName_ == nullptr && return this->bpeEnabled_ == nullptr && return this->burstingEnabled_ == nullptr && return this->canTempUpgrade_ == nullptr && return this->category_ == nullptr
        && return this->coldDataEnabled_ == nullptr && return this->collation_ == nullptr && return this->compressionMode_ == nullptr && return this->compressionRatio_ == nullptr && return this->computeBurstEnabled_ == nullptr
        && return this->connectionMode_ == nullptr && return this->connectionString_ == nullptr && return this->consoleVersion_ == nullptr && return this->creationTime_ == nullptr && return this->currentKernelVersion_ == nullptr
        && return this->DBClusterNodes_ == nullptr && return this->DBInstanceCPU_ == nullptr && return this->DBInstanceClass_ == nullptr && return this->DBInstanceClassType_ == nullptr && return this->DBInstanceDescription_ == nullptr
        && return this->DBInstanceDiskUsed_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceMemory_ == nullptr && return this->DBInstanceNetType_ == nullptr && return this->DBInstanceStatus_ == nullptr
        && return this->DBInstanceStorage_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->DBInstanceType_ == nullptr && return this->DBMaxQuantity_ == nullptr && return this->dedicatedHostGroupId_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->disasterRecoveryInfo_ == nullptr && return this->disasterRecoveryInstances_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->expireTime_ == nullptr && return this->extra_ == nullptr && return this->generalGroupName_ == nullptr && return this->greenInstanceName_ == nullptr && return this->guardDBInstanceId_ == nullptr
        && return this->IPType_ == nullptr && return this->incrementSourceDBInstanceId_ == nullptr && return this->instanceNetworkType_ == nullptr && return this->instructionSetArch_ == nullptr && return this->ioAccelerationEnabled_ == nullptr
        && return this->isAnalyticIns_ == nullptr && return this->isAnalyticReadOnlyIns_ == nullptr && return this->latestKernelVersion_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr
        && return this->maintainTime_ == nullptr && return this->masterInstanceId_ == nullptr && return this->masterZone_ == nullptr && return this->maxConnections_ == nullptr && return this->maxIOMBPS_ == nullptr
        && return this->maxIOPS_ == nullptr && return this->multipleTempUpgrade_ == nullptr && return this->optimizedWritesInfo_ == nullptr && return this->PGBouncerEnabled_ == nullptr && return this->payType_ == nullptr
        && return this->port_ == nullptr && return this->proxyType_ == nullptr && return this->readOnlyDBInstanceIds_ == nullptr && return this->readOnlyStatus_ == nullptr && return this->readonlyInstanceSQLDelayedTime_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityIPList_ == nullptr && return this->securityIPMode_ == nullptr && return this->serverlessConfig_ == nullptr
        && return this->slaveZones_ == nullptr && return this->superPermissionMode_ == nullptr && return this->supportCompression_ == nullptr && return this->tempDBInstanceId_ == nullptr && return this->tempUpgradeTimeEnd_ == nullptr
        && return this->tempUpgradeTimeStart_ == nullptr && return this->timeZone_ == nullptr && return this->tips_ == nullptr && return this->tipsLevel_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vectorSupportStatus_ == nullptr && return this->vpcCloudInstanceId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr && return this->kindCode_ == nullptr; };
    // accountMaxQuantity Field Functions 
    bool hasAccountMaxQuantity() const { return this->accountMaxQuantity_ != nullptr;};
    void deleteAccountMaxQuantity() { this->accountMaxQuantity_ = nullptr;};
    inline int32_t accountMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountMaxQuantity_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setAccountMaxQuantity(int32_t accountMaxQuantity) { DARABONBA_PTR_SET_VALUE(accountMaxQuantity_, accountMaxQuantity) };


    // advancedFeatures Field Functions 
    bool hasAdvancedFeatures() const { return this->advancedFeatures_ != nullptr;};
    void deleteAdvancedFeatures() { this->advancedFeatures_ = nullptr;};
    inline string advancedFeatures() const { DARABONBA_PTR_GET_DEFAULT(advancedFeatures_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setAdvancedFeatures(string advancedFeatures) { DARABONBA_PTR_SET_VALUE(advancedFeatures_, advancedFeatures) };


    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string autoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // availabilityValue Field Functions 
    bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
    void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
    inline string availabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


    // babelfishConfig Field Functions 
    bool hasBabelfishConfig() const { return this->babelfishConfig_ != nullptr;};
    void deleteBabelfishConfig() { this->babelfishConfig_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig & babelfishConfig() const { DARABONBA_PTR_GET_CONST(babelfishConfig_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig babelfishConfig() { DARABONBA_PTR_GET(babelfishConfig_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBabelfishConfig(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig & babelfishConfig) { DARABONBA_PTR_SET_VALUE(babelfishConfig_, babelfishConfig) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBabelfishConfig(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig && babelfishConfig) { DARABONBA_PTR_SET_RVALUE(babelfishConfig_, babelfishConfig) };


    // blueGreenDeploymentName Field Functions 
    bool hasBlueGreenDeploymentName() const { return this->blueGreenDeploymentName_ != nullptr;};
    void deleteBlueGreenDeploymentName() { this->blueGreenDeploymentName_ = nullptr;};
    inline string blueGreenDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(blueGreenDeploymentName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBlueGreenDeploymentName(string blueGreenDeploymentName) { DARABONBA_PTR_SET_VALUE(blueGreenDeploymentName_, blueGreenDeploymentName) };


    // blueInstanceName Field Functions 
    bool hasBlueInstanceName() const { return this->blueInstanceName_ != nullptr;};
    void deleteBlueInstanceName() { this->blueInstanceName_ = nullptr;};
    inline string blueInstanceName() const { DARABONBA_PTR_GET_DEFAULT(blueInstanceName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBlueInstanceName(string blueInstanceName) { DARABONBA_PTR_SET_VALUE(blueInstanceName_, blueInstanceName) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string bpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // canTempUpgrade Field Functions 
    bool hasCanTempUpgrade() const { return this->canTempUpgrade_ != nullptr;};
    void deleteCanTempUpgrade() { this->canTempUpgrade_ = nullptr;};
    inline bool canTempUpgrade() const { DARABONBA_PTR_GET_DEFAULT(canTempUpgrade_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCanTempUpgrade(bool canTempUpgrade) { DARABONBA_PTR_SET_VALUE(canTempUpgrade_, canTempUpgrade) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool coldDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // collation Field Functions 
    bool hasCollation() const { return this->collation_ != nullptr;};
    void deleteCollation() { this->collation_ = nullptr;};
    inline string collation() const { DARABONBA_PTR_GET_DEFAULT(collation_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCollation(string collation) { DARABONBA_PTR_SET_VALUE(collation_, collation) };


    // compressionMode Field Functions 
    bool hasCompressionMode() const { return this->compressionMode_ != nullptr;};
    void deleteCompressionMode() { this->compressionMode_ = nullptr;};
    inline string compressionMode() const { DARABONBA_PTR_GET_DEFAULT(compressionMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCompressionMode(string compressionMode) { DARABONBA_PTR_SET_VALUE(compressionMode_, compressionMode) };


    // compressionRatio Field Functions 
    bool hasCompressionRatio() const { return this->compressionRatio_ != nullptr;};
    void deleteCompressionRatio() { this->compressionRatio_ = nullptr;};
    inline string compressionRatio() const { DARABONBA_PTR_GET_DEFAULT(compressionRatio_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCompressionRatio(string compressionRatio) { DARABONBA_PTR_SET_VALUE(compressionRatio_, compressionRatio) };


    // computeBurstEnabled Field Functions 
    bool hasComputeBurstEnabled() const { return this->computeBurstEnabled_ != nullptr;};
    void deleteComputeBurstEnabled() { this->computeBurstEnabled_ = nullptr;};
    inline bool computeBurstEnabled() const { DARABONBA_PTR_GET_DEFAULT(computeBurstEnabled_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setComputeBurstEnabled(bool computeBurstEnabled) { DARABONBA_PTR_SET_VALUE(computeBurstEnabled_, computeBurstEnabled) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // consoleVersion Field Functions 
    bool hasConsoleVersion() const { return this->consoleVersion_ != nullptr;};
    void deleteConsoleVersion() { this->consoleVersion_ = nullptr;};
    inline string consoleVersion() const { DARABONBA_PTR_GET_DEFAULT(consoleVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setConsoleVersion(string consoleVersion) { DARABONBA_PTR_SET_VALUE(consoleVersion_, consoleVersion) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // currentKernelVersion Field Functions 
    bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
    void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
    inline string currentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


    // DBClusterNodes Field Functions 
    bool hasDBClusterNodes() const { return this->DBClusterNodes_ != nullptr;};
    void deleteDBClusterNodes() { this->DBClusterNodes_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes & DBClusterNodes() const { DARABONBA_PTR_GET_CONST(DBClusterNodes_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes DBClusterNodes() { DARABONBA_PTR_GET(DBClusterNodes_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBClusterNodes(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes & DBClusterNodes) { DARABONBA_PTR_SET_VALUE(DBClusterNodes_, DBClusterNodes) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBClusterNodes(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes && DBClusterNodes) { DARABONBA_PTR_SET_RVALUE(DBClusterNodes_, DBClusterNodes) };


    // DBInstanceCPU Field Functions 
    bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
    void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
    inline string DBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceClassType Field Functions 
    bool hasDBInstanceClassType() const { return this->DBInstanceClassType_ != nullptr;};
    void deleteDBInstanceClassType() { this->DBInstanceClassType_ = nullptr;};
    inline string DBInstanceClassType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClassType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceClassType(string DBInstanceClassType) { DARABONBA_PTR_SET_VALUE(DBInstanceClassType_, DBInstanceClassType) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceDiskUsed Field Functions 
    bool hasDBInstanceDiskUsed() const { return this->DBInstanceDiskUsed_ != nullptr;};
    void deleteDBInstanceDiskUsed() { this->DBInstanceDiskUsed_ = nullptr;};
    inline string DBInstanceDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDiskUsed_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceDiskUsed(string DBInstanceDiskUsed) { DARABONBA_PTR_SET_VALUE(DBInstanceDiskUsed_, DBInstanceDiskUsed) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMemory Field Functions 
    bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
    void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
    inline int64_t DBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceMemory(int64_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // DBMaxQuantity Field Functions 
    bool hasDBMaxQuantity() const { return this->DBMaxQuantity_ != nullptr;};
    void deleteDBMaxQuantity() { this->DBMaxQuantity_ = nullptr;};
    inline int32_t DBMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(DBMaxQuantity_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBMaxQuantity(int32_t DBMaxQuantity) { DARABONBA_PTR_SET_VALUE(DBMaxQuantity_, DBMaxQuantity) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disasterRecoveryInfo Field Functions 
    bool hasDisasterRecoveryInfo() const { return this->disasterRecoveryInfo_ != nullptr;};
    void deleteDisasterRecoveryInfo() { this->disasterRecoveryInfo_ = nullptr;};
    inline string disasterRecoveryInfo() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInfo_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDisasterRecoveryInfo(string disasterRecoveryInfo) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInfo_, disasterRecoveryInfo) };


    // disasterRecoveryInstances Field Functions 
    bool hasDisasterRecoveryInstances() const { return this->disasterRecoveryInstances_ != nullptr;};
    void deleteDisasterRecoveryInstances() { this->disasterRecoveryInstances_ = nullptr;};
    inline string disasterRecoveryInstances() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInstances_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDisasterRecoveryInstances(string disasterRecoveryInstances) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInstances_, disasterRecoveryInstances) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra & extra() const { DARABONBA_PTR_GET_CONST(extra_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra extra() { DARABONBA_PTR_GET(extra_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setExtra(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setExtra(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // generalGroupName Field Functions 
    bool hasGeneralGroupName() const { return this->generalGroupName_ != nullptr;};
    void deleteGeneralGroupName() { this->generalGroupName_ = nullptr;};
    inline string generalGroupName() const { DARABONBA_PTR_GET_DEFAULT(generalGroupName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setGeneralGroupName(string generalGroupName) { DARABONBA_PTR_SET_VALUE(generalGroupName_, generalGroupName) };


    // greenInstanceName Field Functions 
    bool hasGreenInstanceName() const { return this->greenInstanceName_ != nullptr;};
    void deleteGreenInstanceName() { this->greenInstanceName_ = nullptr;};
    inline string greenInstanceName() const { DARABONBA_PTR_GET_DEFAULT(greenInstanceName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setGreenInstanceName(string greenInstanceName) { DARABONBA_PTR_SET_VALUE(greenInstanceName_, greenInstanceName) };


    // guardDBInstanceId Field Functions 
    bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
    void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
    inline string guardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


    // IPType Field Functions 
    bool hasIPType() const { return this->IPType_ != nullptr;};
    void deleteIPType() { this->IPType_ = nullptr;};
    inline string IPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


    // incrementSourceDBInstanceId Field Functions 
    bool hasIncrementSourceDBInstanceId() const { return this->incrementSourceDBInstanceId_ != nullptr;};
    void deleteIncrementSourceDBInstanceId() { this->incrementSourceDBInstanceId_ = nullptr;};
    inline string incrementSourceDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(incrementSourceDBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIncrementSourceDBInstanceId(string incrementSourceDBInstanceId) { DARABONBA_PTR_SET_VALUE(incrementSourceDBInstanceId_, incrementSourceDBInstanceId) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instructionSetArch Field Functions 
    bool hasInstructionSetArch() const { return this->instructionSetArch_ != nullptr;};
    void deleteInstructionSetArch() { this->instructionSetArch_ = nullptr;};
    inline string instructionSetArch() const { DARABONBA_PTR_GET_DEFAULT(instructionSetArch_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setInstructionSetArch(string instructionSetArch) { DARABONBA_PTR_SET_VALUE(instructionSetArch_, instructionSetArch) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isAnalyticIns Field Functions 
    bool hasIsAnalyticIns() const { return this->isAnalyticIns_ != nullptr;};
    void deleteIsAnalyticIns() { this->isAnalyticIns_ = nullptr;};
    inline bool isAnalyticIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticIns_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIsAnalyticIns(bool isAnalyticIns) { DARABONBA_PTR_SET_VALUE(isAnalyticIns_, isAnalyticIns) };


    // isAnalyticReadOnlyIns Field Functions 
    bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
    void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
    inline bool isAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


    // latestKernelVersion Field Functions 
    bool hasLatestKernelVersion() const { return this->latestKernelVersion_ != nullptr;};
    void deleteLatestKernelVersion() { this->latestKernelVersion_ = nullptr;};
    inline string latestKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(latestKernelVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setLatestKernelVersion(string latestKernelVersion) { DARABONBA_PTR_SET_VALUE(latestKernelVersion_, latestKernelVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // masterZone Field Functions 
    bool hasMasterZone() const { return this->masterZone_ != nullptr;};
    void deleteMasterZone() { this->masterZone_ = nullptr;};
    inline string masterZone() const { DARABONBA_PTR_GET_DEFAULT(masterZone_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMasterZone(string masterZone) { DARABONBA_PTR_SET_VALUE(masterZone_, masterZone) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOMBPS Field Functions 
    bool hasMaxIOMBPS() const { return this->maxIOMBPS_ != nullptr;};
    void deleteMaxIOMBPS() { this->maxIOMBPS_ = nullptr;};
    inline int32_t maxIOMBPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOMBPS_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaxIOMBPS(int32_t maxIOMBPS) { DARABONBA_PTR_SET_VALUE(maxIOMBPS_, maxIOMBPS) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline int32_t maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // multipleTempUpgrade Field Functions 
    bool hasMultipleTempUpgrade() const { return this->multipleTempUpgrade_ != nullptr;};
    void deleteMultipleTempUpgrade() { this->multipleTempUpgrade_ = nullptr;};
    inline bool multipleTempUpgrade() const { DARABONBA_PTR_GET_DEFAULT(multipleTempUpgrade_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMultipleTempUpgrade(bool multipleTempUpgrade) { DARABONBA_PTR_SET_VALUE(multipleTempUpgrade_, multipleTempUpgrade) };


    // optimizedWritesInfo Field Functions 
    bool hasOptimizedWritesInfo() const { return this->optimizedWritesInfo_ != nullptr;};
    void deleteOptimizedWritesInfo() { this->optimizedWritesInfo_ = nullptr;};
    inline string optimizedWritesInfo() const { DARABONBA_PTR_GET_DEFAULT(optimizedWritesInfo_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setOptimizedWritesInfo(string optimizedWritesInfo) { DARABONBA_PTR_SET_VALUE(optimizedWritesInfo_, optimizedWritesInfo) };


    // PGBouncerEnabled Field Functions 
    bool hasPGBouncerEnabled() const { return this->PGBouncerEnabled_ != nullptr;};
    void deletePGBouncerEnabled() { this->PGBouncerEnabled_ = nullptr;};
    inline string PGBouncerEnabled() const { DARABONBA_PTR_GET_DEFAULT(PGBouncerEnabled_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setPGBouncerEnabled(string PGBouncerEnabled) { DARABONBA_PTR_SET_VALUE(PGBouncerEnabled_, PGBouncerEnabled) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline int32_t proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setProxyType(int32_t proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // readOnlyDBInstanceIds Field Functions 
    bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
    void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds & readOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds readOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setReadOnlyDBInstanceIds(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setReadOnlyDBInstanceIds(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


    // readOnlyStatus Field Functions 
    bool hasReadOnlyStatus() const { return this->readOnlyStatus_ != nullptr;};
    void deleteReadOnlyStatus() { this->readOnlyStatus_ = nullptr;};
    inline string readOnlyStatus() const { DARABONBA_PTR_GET_DEFAULT(readOnlyStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setReadOnlyStatus(string readOnlyStatus) { DARABONBA_PTR_SET_VALUE(readOnlyStatus_, readOnlyStatus) };


    // readonlyInstanceSQLDelayedTime Field Functions 
    bool hasReadonlyInstanceSQLDelayedTime() const { return this->readonlyInstanceSQLDelayedTime_ != nullptr;};
    void deleteReadonlyInstanceSQLDelayedTime() { this->readonlyInstanceSQLDelayedTime_ = nullptr;};
    inline string readonlyInstanceSQLDelayedTime() const { DARABONBA_PTR_GET_DEFAULT(readonlyInstanceSQLDelayedTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setReadonlyInstanceSQLDelayedTime(string readonlyInstanceSQLDelayedTime) { DARABONBA_PTR_SET_VALUE(readonlyInstanceSQLDelayedTime_, readonlyInstanceSQLDelayedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPMode Field Functions 
    bool hasSecurityIPMode() const { return this->securityIPMode_ != nullptr;};
    void deleteSecurityIPMode() { this->securityIPMode_ = nullptr;};
    inline string securityIPMode() const { DARABONBA_PTR_GET_DEFAULT(securityIPMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSecurityIPMode(string securityIPMode) { DARABONBA_PTR_SET_VALUE(securityIPMode_, securityIPMode) };


    // serverlessConfig Field Functions 
    bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
    void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig & serverlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig serverlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setServerlessConfig(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setServerlessConfig(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


    // slaveZones Field Functions 
    bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
    void deleteSlaveZones() { this->slaveZones_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones & slaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones slaveZones() { DARABONBA_PTR_GET(slaveZones_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSlaveZones(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSlaveZones(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


    // superPermissionMode Field Functions 
    bool hasSuperPermissionMode() const { return this->superPermissionMode_ != nullptr;};
    void deleteSuperPermissionMode() { this->superPermissionMode_ = nullptr;};
    inline string superPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(superPermissionMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSuperPermissionMode(string superPermissionMode) { DARABONBA_PTR_SET_VALUE(superPermissionMode_, superPermissionMode) };


    // supportCompression Field Functions 
    bool hasSupportCompression() const { return this->supportCompression_ != nullptr;};
    void deleteSupportCompression() { this->supportCompression_ = nullptr;};
    inline bool supportCompression() const { DARABONBA_PTR_GET_DEFAULT(supportCompression_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSupportCompression(bool supportCompression) { DARABONBA_PTR_SET_VALUE(supportCompression_, supportCompression) };


    // tempDBInstanceId Field Functions 
    bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
    void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
    inline string tempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


    // tempUpgradeTimeEnd Field Functions 
    bool hasTempUpgradeTimeEnd() const { return this->tempUpgradeTimeEnd_ != nullptr;};
    void deleteTempUpgradeTimeEnd() { this->tempUpgradeTimeEnd_ = nullptr;};
    inline string tempUpgradeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(tempUpgradeTimeEnd_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTempUpgradeTimeEnd(string tempUpgradeTimeEnd) { DARABONBA_PTR_SET_VALUE(tempUpgradeTimeEnd_, tempUpgradeTimeEnd) };


    // tempUpgradeTimeStart Field Functions 
    bool hasTempUpgradeTimeStart() const { return this->tempUpgradeTimeStart_ != nullptr;};
    void deleteTempUpgradeTimeStart() { this->tempUpgradeTimeStart_ = nullptr;};
    inline string tempUpgradeTimeStart() const { DARABONBA_PTR_GET_DEFAULT(tempUpgradeTimeStart_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTempUpgradeTimeStart(string tempUpgradeTimeStart) { DARABONBA_PTR_SET_VALUE(tempUpgradeTimeStart_, tempUpgradeTimeStart) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    // tipsLevel Field Functions 
    bool hasTipsLevel() const { return this->tipsLevel_ != nullptr;};
    void deleteTipsLevel() { this->tipsLevel_ = nullptr;};
    inline int32_t tipsLevel() const { DARABONBA_PTR_GET_DEFAULT(tipsLevel_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTipsLevel(int32_t tipsLevel) { DARABONBA_PTR_SET_VALUE(tipsLevel_, tipsLevel) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vectorSupportStatus Field Functions 
    bool hasVectorSupportStatus() const { return this->vectorSupportStatus_ != nullptr;};
    void deleteVectorSupportStatus() { this->vectorSupportStatus_ = nullptr;};
    inline string vectorSupportStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorSupportStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVectorSupportStatus(string vectorSupportStatus) { DARABONBA_PTR_SET_VALUE(vectorSupportStatus_, vectorSupportStatus) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // kindCode Field Functions 
    bool hasKindCode() const { return this->kindCode_ != nullptr;};
    void deleteKindCode() { this->kindCode_ = nullptr;};
    inline string kindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setKindCode(string kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


  protected:
    // The maximum number of accounts that can be created on the instance.
    std::shared_ptr<int32_t> accountMaxQuantity_ = nullptr;
    // The advanced features that are enabled for the instance. If multiple advanced features are enabled, the advanced features are separated by commas (,). This parameter is available only to instances that run **SQL Server**. Valid values:
    // 
    // *   **LinkedServer**
    // *   **DistributeTransaction**
    std::shared_ptr<string> advancedFeatures_ = nullptr;
    // The method that is used to update the minor engine version of the instance. Valid values:
    // 
    // *   **Auto**: automatic update.
    // *   **Manual**: manual update. The minor engine version of the instance is forcefully updated only when the in-use minor engine version is phased out.
    std::shared_ptr<string> autoUpgradeMinorVersion_ = nullptr;
    // The availability status of the instance in percentage.
    std::shared_ptr<string> availabilityValue_ = nullptr;
    // The configuration of the Babelfish feature for the ApsaraDB RDS for PostgreSQL instance.
    // 
    // >  This parameter applies only to ApsaraDB RDS for PostgreSQL instances for which Babelfish is enabled. For more information, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig> babelfishConfig_ = nullptr;
    // This is a reserved parameter and is not in use.
    std::shared_ptr<string> blueGreenDeploymentName_ = nullptr;
    // This is a reserved parameter and is not in use.
    std::shared_ptr<string> blueInstanceName_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> bpeEnabled_ = nullptr;
    // Indicates whether the I/O burst feature is enabled for Premium ESSDs. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  For more information about the I/O burst feature, see [What are Premium ESSDs?](https://help.aliyun.com/document_detail/2340501.html)
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // Indicates whether the conditions for a temporary upgrade are met.
    // 
    // >  Pay-as-you-go instances do not support temporary upgrades.
    std::shared_ptr<bool> canTempUpgrade_ = nullptr;
    // The RDS edition. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL
    // *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server
    // *   **Finance**: RDS Enterprise Edition
    // *   **Serverless_basic**: RDS Basic Edition for serverless instances
    std::shared_ptr<string> category_ = nullptr;
    // Indicates whether the data archiving feature is enabled for Premium ESSDs. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // For more information about the data archiving feature, see [Use the data archiving feature](https://help.aliyun.com/document_detail/2701832.html).
    std::shared_ptr<bool> coldDataEnabled_ = nullptr;
    // The character set collation of the instance.
    std::shared_ptr<string> collation_ = nullptr;
    // The storage compression mode of the instance.
    std::shared_ptr<string> compressionMode_ = nullptr;
    // The storage compression ratio.
    std::shared_ptr<string> compressionRatio_ = nullptr;
    // This is a reserved parameter and is not in use.
    std::shared_ptr<bool> computeBurstEnabled_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **Standard**: standard mode
    // *   **Safe**: database proxy mode
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The type of the proxy that is used by the instance. Valid values:
    // 
    // *   **1**: shared database proxy
    // *   **2**: dedicated database proxy
    // 
    // >  We recommend that you use the **ProxyType** parameter instead of this parameter.
    std::shared_ptr<string> consoleVersion_ = nullptr;
    // The creation time. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The minor engine version.
    std::shared_ptr<string> currentKernelVersion_ = nullptr;
    // The information about the node in the cluster.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodes> DBClusterNodes_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<string> DBInstanceCPU_ = nullptr;
    // The instance type of the instance. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance family. Valid values:
    // 
    // *   **s**: shared instance family
    // *   **x**: general-purpose instance family
    // *   **d**: dedicated instance family
    // *   **h**: dedicated host instance family
    std::shared_ptr<string> DBInstanceClassType_ = nullptr;
    // The instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The disk usage of the instance. Unit: byte.
    std::shared_ptr<string> DBInstanceDiskUsed_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The memory capacity of the instance. Unit: MB.
    std::shared_ptr<int64_t> DBInstanceMemory_ = nullptr;
    // The type of the network over which the instance is connected. Valid values:
    // 
    // *   **Internet**
    // *   **Intranet**
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The instance status. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/26315.html).
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The storage capacity of the instance. Unit: GB.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd** and **ephemeral_ssd**: Premium Local SSD
    // *   **cloud_ssd**: standard SSD
    // *   **cloud_essd**: ESSD
    // *   **cloud_essd**: Premium ESSD
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   **Primary**: primary instance
    // *   **Readonly**: read-only instance
    // *   **Guard**: disaster recovery instance
    // *   **Temp**: temporary instance
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The maximum number of databases that can be created on the instance.
    std::shared_ptr<int32_t> DBMaxQuantity_ = nullptr;
    // The ID of the dedicated cluster to which the instance belongs.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // Indicates whether the release protection feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // Disaster Recovery Instance Information
    std::shared_ptr<string> disasterRecoveryInfo_ = nullptr;
    // All disaster recovery instances of the current instance.
    std::shared_ptr<string> disasterRecoveryInstances_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **SQLServer**
    // *   **MariaDB**
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  Pay-as-you-go instances never expire.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The extended information about the instance.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeExtra> extra_ = nullptr;
    // The name of the dedicated cluster to which the instance belongs. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
    std::shared_ptr<string> generalGroupName_ = nullptr;
    // This is a reserved parameter and is not in use.
    std::shared_ptr<string> greenInstanceName_ = nullptr;
    // The ID of the disaster recovery instance that is attached to the primary instance.
    std::shared_ptr<string> guardDBInstanceId_ = nullptr;
    // The IP address type. Only **IPv4 addresses** are supported.
    std::shared_ptr<string> IPType_ = nullptr;
    // The ID of the instance from which incremental data comes. The incremental data of a disaster recovery instance comes from its primary instance. The incremental data of a read-only instance comes from its primary instance. If this parameter is not returned, the instance is a primary instance.
    std::shared_ptr<string> incrementSourceDBInstanceId_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**
    // *   **VPC**
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The architecture type of the instance. Valid values:
    // 
    // *   **x86**
    // *   **arm**
    std::shared_ptr<string> instructionSetArch_ = nullptr;
    // Indicates whether Buffer Pool Extension (BPE) is enabled for Premium ESSDs.
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    // 
    // >  For more information, see [Buffer Pool Extension(BPE)](https://help.aliyun.com/document_detail/2527067.html).
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    std::shared_ptr<bool> isAnalyticIns_ = nullptr;
    std::shared_ptr<bool> isAnalyticReadOnlyIns_ = nullptr;
    // The latest minor engine version that is supported by the instance.
    std::shared_ptr<string> latestKernelVersion_ = nullptr;
    // The lock mode of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
    // *   **LockByRestoration**: The instance is automatically locked due to instance restoration.
    // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage space.
    // *   **LockReadInstanceByDiskQuota**: The instance is a read-only instance and is automatically locked due to exhausted storage.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the instance was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maintenance window of the instance. The time is displayed in UTC. The maintenance window displayed in the ApsaraDB RDS console is equal to the value of this parameter plus 8 hours.
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The primary instance ID.
    // 
    // >  If this parameter is not returned, the instance is the primary instance.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // The zone ID of the primary instance.
    std::shared_ptr<string> masterZone_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The maximum I/O throughput. Unit: MB/s.
    std::shared_ptr<int32_t> maxIOMBPS_ = nullptr;
    // The maximum number of I/O requests per second.
    std::shared_ptr<int32_t> maxIOPS_ = nullptr;
    // Indicates whether auto scaling is being performed on the instance. If the value **true** is returned, auto scaling is being performed on the instance. If no value is returned, auto scaling is not being performed on the instance.
    std::shared_ptr<bool> multipleTempUpgrade_ = nullptr;
    // The OptimizedWritesInfo parameter contains the following fields:
    // *   **optimized_writes**: indicates whether the 16K atomic write feature is enabled for the current instance.
    // *   **init_optimized_writes**: indicates whether the 16K atomic write feature can be enabled for the current instance. If init_optimized_writes is set to false, the 16K atomic write switch is not displayed for the instance in the console.
    std::shared_ptr<string> optimizedWritesInfo_ = nullptr;
    // Indicates whether PgBouncer is enabled.
    // 
    // >  This parameter is returned only for RDS instances that run PostgreSQL. If PgBouncer is enabled, the return value is **true**.
    std::shared_ptr<string> PGBouncerEnabled_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    // *   **SERVERLESS**
    std::shared_ptr<string> payType_ = nullptr;
    // The port that is used to connect to the instance over an internal network.
    std::shared_ptr<string> port_ = nullptr;
    // The type of the proxy that is supported by the instance. Valid values:
    // 
    // *   **0**: The instance does not support database proxies.
    // *   **1**: The instance supports shared proxies, with which the instance runs in multi-tenant mode.
    // *   **2**: The instance supports dedicated proxies, with which the instance runs in single-tenant mode.
    std::shared_ptr<int32_t> proxyType_ = nullptr;
    // The IDs of the read-only instances that are attached to the primary instance.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ = nullptr;
    // This is a reserved parameter and is not in use.
    std::shared_ptr<string> readOnlyStatus_ = nullptr;
    // The latency at which the system replicates data to read-only instances. The system replicates data from the primary instance to the read-only instances at the latency that is specified by the **ReadonlyInstanceSQLDelayedTime** parameter. Unit: seconds.
    std::shared_ptr<string> readonlyInstanceSQLDelayedTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IP addresses in the IP address whitelist.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The whitelist mode. Valid values:
    // 
    // *   **normal**: standard whitelist mode
    // *   **safety**: enhanced whitelist mode
    std::shared_ptr<string> securityIPMode_ = nullptr;
    // The settings of the serverless instance.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig> serverlessConfig_ = nullptr;
    // The zone IDs of the secondary instances.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones> slaveZones_ = nullptr;
    // Indicates whether the instance supports superuser accounts, such as the system administrator (SA) account, Active Directory (AD) account, and host account. Valid values:
    // 
    // *   **Enable**
    // *   **Disabled**
    std::shared_ptr<string> superPermissionMode_ = nullptr;
    // Indicates whether storage compression can be enabled for the instance.
    std::shared_ptr<bool> supportCompression_ = nullptr;
    // The ID of the temporary instance that is attached to the primary instance.
    std::shared_ptr<string> tempDBInstanceId_ = nullptr;
    // The end time of the temporary upgrade of the instance.
    // 
    // >  This parameter is unavailable for pay-as-you-go instances.
    std::shared_ptr<string> tempUpgradeTimeEnd_ = nullptr;
    // The start time of the temporary upgrade of the instance.
    // 
    // >  This parameter is unavailable for pay-as-you-go instances.
    std::shared_ptr<string> tempUpgradeTimeStart_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timeZone_ = nullptr;
    // The information about the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
    std::shared_ptr<string> tips_ = nullptr;
    // The severity of the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
    // 
    // *   **1**: The instance is normal.
    // *   **2**: The specifications of the read-only instances do not match the specifications of the primary instance. You must adjust the specifications of these instances based on your business requirements.
    std::shared_ptr<int32_t> tipsLevel_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vectorSupportStatus_ = nullptr;
    // The ID of the VPC. This parameter is returned only when the instance resides in a VPC.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // An internal parameter. You do not need to specify this parameter.
    std::shared_ptr<string> kindCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
