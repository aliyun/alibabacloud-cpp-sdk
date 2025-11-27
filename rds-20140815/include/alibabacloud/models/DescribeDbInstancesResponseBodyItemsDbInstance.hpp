// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
      DARABONBA_PTR_TO_JSON(BlueInstanceName, blueInstanceName_);
      DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIdForLog, dedicatedHostIdForLog_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIdForMaster, dedicatedHostIdForMaster_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIdForSlave, dedicatedHostIdForSlave_);
      DARABONBA_PTR_TO_JSON(DedicatedHostNameForLog, dedicatedHostNameForLog_);
      DARABONBA_PTR_TO_JSON(DedicatedHostNameForMaster, dedicatedHostNameForMaster_);
      DARABONBA_PTR_TO_JSON(DedicatedHostNameForSlave, dedicatedHostNameForSlave_);
      DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForLog, dedicatedHostZoneIdForLog_);
      DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForMaster, dedicatedHostZoneIdForMaster_);
      DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForSlave, dedicatedHostZoneIdForSlave_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GeneralGroupName, generalGroupName_);
      DARABONBA_PTR_TO_JSON(GreenInstanceName, greenInstanceName_);
      DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_TO_JSON(IsAnalyticIns, isAnalyticIns_);
      DARABONBA_PTR_TO_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(MutriORsignle, mutriORsignle_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchWeight, switchWeight_);
      DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
      DARABONBA_PTR_TO_JSON(TipsLevel, tipsLevel_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
      DARABONBA_PTR_FROM_JSON(BlueInstanceName, blueInstanceName_);
      DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCPU, DBInstanceCPU_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIdForLog, dedicatedHostIdForLog_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIdForMaster, dedicatedHostIdForMaster_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIdForSlave, dedicatedHostIdForSlave_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostNameForLog, dedicatedHostNameForLog_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostNameForMaster, dedicatedHostNameForMaster_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostNameForSlave, dedicatedHostNameForSlave_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForLog, dedicatedHostZoneIdForLog_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForMaster, dedicatedHostZoneIdForMaster_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForSlave, dedicatedHostZoneIdForSlave_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GeneralGroupName, generalGroupName_);
      DARABONBA_PTR_FROM_JSON(GreenInstanceName, greenInstanceName_);
      DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
      DARABONBA_PTR_FROM_JSON(IsAnalyticIns, isAnalyticIns_);
      DARABONBA_PTR_FROM_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(MutriORsignle, mutriORsignle_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchWeight, switchWeight_);
      DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
      DARABONBA_PTR_FROM_JSON(TipsLevel, tipsLevel_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(const DescribeDBInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(DescribeDBInstancesResponseBodyItemsDBInstance &&) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance& operator=(const DescribeDBInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstance& operator=(DescribeDBInstancesResponseBodyItemsDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && return this->blueGreenDeploymentName_ == nullptr && return this->blueInstanceName_ == nullptr && return this->bpeEnabled_ == nullptr && return this->burstingEnabled_ == nullptr && return this->category_ == nullptr
        && return this->coldDataEnabled_ == nullptr && return this->connectionMode_ == nullptr && return this->connectionString_ == nullptr && return this->createTime_ == nullptr && return this->DBInstanceCPU_ == nullptr
        && return this->DBInstanceClass_ == nullptr && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceMemory_ == nullptr && return this->DBInstanceNetType_ == nullptr
        && return this->DBInstanceStatus_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->DBInstanceType_ == nullptr && return this->dedicatedHostGroupId_ == nullptr && return this->dedicatedHostGroupName_ == nullptr
        && return this->dedicatedHostIdForLog_ == nullptr && return this->dedicatedHostIdForMaster_ == nullptr && return this->dedicatedHostIdForSlave_ == nullptr && return this->dedicatedHostNameForLog_ == nullptr && return this->dedicatedHostNameForMaster_ == nullptr
        && return this->dedicatedHostNameForSlave_ == nullptr && return this->dedicatedHostZoneIdForLog_ == nullptr && return this->dedicatedHostZoneIdForMaster_ == nullptr && return this->dedicatedHostZoneIdForSlave_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->destroyTime_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->expireTime_ == nullptr && return this->generalGroupName_ == nullptr
        && return this->greenInstanceName_ == nullptr && return this->guardDBInstanceId_ == nullptr && return this->instanceNetworkType_ == nullptr && return this->ioAccelerationEnabled_ == nullptr && return this->isAnalyticIns_ == nullptr
        && return this->isAnalyticReadOnlyIns_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr && return this->masterInstanceId_ == nullptr && return this->mutriORsignle_ == nullptr
        && return this->payType_ == nullptr && return this->readOnlyDBInstanceIds_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->switchWeight_ == nullptr
        && return this->tempDBInstanceId_ == nullptr && return this->tips_ == nullptr && return this->tipsLevel_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcCloudInstanceId_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // blueGreenDeploymentName Field Functions 
    bool hasBlueGreenDeploymentName() const { return this->blueGreenDeploymentName_ != nullptr;};
    void deleteBlueGreenDeploymentName() { this->blueGreenDeploymentName_ = nullptr;};
    inline string blueGreenDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(blueGreenDeploymentName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setBlueGreenDeploymentName(string blueGreenDeploymentName) { DARABONBA_PTR_SET_VALUE(blueGreenDeploymentName_, blueGreenDeploymentName) };


    // blueInstanceName Field Functions 
    bool hasBlueInstanceName() const { return this->blueInstanceName_ != nullptr;};
    void deleteBlueInstanceName() { this->blueInstanceName_ = nullptr;};
    inline string blueInstanceName() const { DARABONBA_PTR_GET_DEFAULT(blueInstanceName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setBlueInstanceName(string blueInstanceName) { DARABONBA_PTR_SET_VALUE(blueInstanceName_, blueInstanceName) };


    // bpeEnabled Field Functions 
    bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
    void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
    inline string bpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // coldDataEnabled Field Functions 
    bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
    void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
    inline bool coldDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


    // connectionMode Field Functions 
    bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
    void deleteConnectionMode() { this->connectionMode_ = nullptr;};
    inline string connectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceCPU Field Functions 
    bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
    void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
    inline string DBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMemory Field Functions 
    bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
    void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
    inline int32_t DBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceMemory(int32_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline string DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHostGroupName Field Functions 
    bool hasDedicatedHostGroupName() const { return this->dedicatedHostGroupName_ != nullptr;};
    void deleteDedicatedHostGroupName() { this->dedicatedHostGroupName_ = nullptr;};
    inline string dedicatedHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostGroupName(string dedicatedHostGroupName) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupName_, dedicatedHostGroupName) };


    // dedicatedHostIdForLog Field Functions 
    bool hasDedicatedHostIdForLog() const { return this->dedicatedHostIdForLog_ != nullptr;};
    void deleteDedicatedHostIdForLog() { this->dedicatedHostIdForLog_ = nullptr;};
    inline string dedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForLog_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostIdForLog(string dedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForLog_, dedicatedHostIdForLog) };


    // dedicatedHostIdForMaster Field Functions 
    bool hasDedicatedHostIdForMaster() const { return this->dedicatedHostIdForMaster_ != nullptr;};
    void deleteDedicatedHostIdForMaster() { this->dedicatedHostIdForMaster_ = nullptr;};
    inline string dedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForMaster_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostIdForMaster(string dedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForMaster_, dedicatedHostIdForMaster) };


    // dedicatedHostIdForSlave Field Functions 
    bool hasDedicatedHostIdForSlave() const { return this->dedicatedHostIdForSlave_ != nullptr;};
    void deleteDedicatedHostIdForSlave() { this->dedicatedHostIdForSlave_ = nullptr;};
    inline string dedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForSlave_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostIdForSlave(string dedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForSlave_, dedicatedHostIdForSlave) };


    // dedicatedHostNameForLog Field Functions 
    bool hasDedicatedHostNameForLog() const { return this->dedicatedHostNameForLog_ != nullptr;};
    void deleteDedicatedHostNameForLog() { this->dedicatedHostNameForLog_ = nullptr;};
    inline string dedicatedHostNameForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForLog_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostNameForLog(string dedicatedHostNameForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForLog_, dedicatedHostNameForLog) };


    // dedicatedHostNameForMaster Field Functions 
    bool hasDedicatedHostNameForMaster() const { return this->dedicatedHostNameForMaster_ != nullptr;};
    void deleteDedicatedHostNameForMaster() { this->dedicatedHostNameForMaster_ = nullptr;};
    inline string dedicatedHostNameForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForMaster_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostNameForMaster(string dedicatedHostNameForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForMaster_, dedicatedHostNameForMaster) };


    // dedicatedHostNameForSlave Field Functions 
    bool hasDedicatedHostNameForSlave() const { return this->dedicatedHostNameForSlave_ != nullptr;};
    void deleteDedicatedHostNameForSlave() { this->dedicatedHostNameForSlave_ = nullptr;};
    inline string dedicatedHostNameForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForSlave_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostNameForSlave(string dedicatedHostNameForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForSlave_, dedicatedHostNameForSlave) };


    // dedicatedHostZoneIdForLog Field Functions 
    bool hasDedicatedHostZoneIdForLog() const { return this->dedicatedHostZoneIdForLog_ != nullptr;};
    void deleteDedicatedHostZoneIdForLog() { this->dedicatedHostZoneIdForLog_ = nullptr;};
    inline string dedicatedHostZoneIdForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForLog_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostZoneIdForLog(string dedicatedHostZoneIdForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForLog_, dedicatedHostZoneIdForLog) };


    // dedicatedHostZoneIdForMaster Field Functions 
    bool hasDedicatedHostZoneIdForMaster() const { return this->dedicatedHostZoneIdForMaster_ != nullptr;};
    void deleteDedicatedHostZoneIdForMaster() { this->dedicatedHostZoneIdForMaster_ = nullptr;};
    inline string dedicatedHostZoneIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForMaster_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostZoneIdForMaster(string dedicatedHostZoneIdForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForMaster_, dedicatedHostZoneIdForMaster) };


    // dedicatedHostZoneIdForSlave Field Functions 
    bool hasDedicatedHostZoneIdForSlave() const { return this->dedicatedHostZoneIdForSlave_ != nullptr;};
    void deleteDedicatedHostZoneIdForSlave() { this->dedicatedHostZoneIdForSlave_ = nullptr;};
    inline string dedicatedHostZoneIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForSlave_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDedicatedHostZoneIdForSlave(string dedicatedHostZoneIdForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForSlave_, dedicatedHostZoneIdForSlave) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // destroyTime Field Functions 
    bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
    void deleteDestroyTime() { this->destroyTime_ = nullptr;};
    inline string destroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // generalGroupName Field Functions 
    bool hasGeneralGroupName() const { return this->generalGroupName_ != nullptr;};
    void deleteGeneralGroupName() { this->generalGroupName_ = nullptr;};
    inline string generalGroupName() const { DARABONBA_PTR_GET_DEFAULT(generalGroupName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setGeneralGroupName(string generalGroupName) { DARABONBA_PTR_SET_VALUE(generalGroupName_, generalGroupName) };


    // greenInstanceName Field Functions 
    bool hasGreenInstanceName() const { return this->greenInstanceName_ != nullptr;};
    void deleteGreenInstanceName() { this->greenInstanceName_ = nullptr;};
    inline string greenInstanceName() const { DARABONBA_PTR_GET_DEFAULT(greenInstanceName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setGreenInstanceName(string greenInstanceName) { DARABONBA_PTR_SET_VALUE(greenInstanceName_, greenInstanceName) };


    // guardDBInstanceId Field Functions 
    bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
    void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
    inline string guardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ioAccelerationEnabled Field Functions 
    bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
    void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
    inline string ioAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


    // isAnalyticIns Field Functions 
    bool hasIsAnalyticIns() const { return this->isAnalyticIns_ != nullptr;};
    void deleteIsAnalyticIns() { this->isAnalyticIns_ = nullptr;};
    inline string isAnalyticIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticIns_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setIsAnalyticIns(string isAnalyticIns) { DARABONBA_PTR_SET_VALUE(isAnalyticIns_, isAnalyticIns) };


    // isAnalyticReadOnlyIns Field Functions 
    bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
    void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
    inline bool isAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // mutriORsignle Field Functions 
    bool hasMutriORsignle() const { return this->mutriORsignle_ != nullptr;};
    void deleteMutriORsignle() { this->mutriORsignle_ = nullptr;};
    inline bool mutriORsignle() const { DARABONBA_PTR_GET_DEFAULT(mutriORsignle_, false) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setMutriORsignle(bool mutriORsignle) { DARABONBA_PTR_SET_VALUE(mutriORsignle_, mutriORsignle) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // readOnlyDBInstanceIds Field Functions 
    bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
    void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
    inline const Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds) };
    inline Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds readOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setReadOnlyDBInstanceIds(const Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setReadOnlyDBInstanceIds(Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // switchWeight Field Functions 
    bool hasSwitchWeight() const { return this->switchWeight_ != nullptr;};
    void deleteSwitchWeight() { this->switchWeight_ = nullptr;};
    inline int32_t switchWeight() const { DARABONBA_PTR_GET_DEFAULT(switchWeight_, 0) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setSwitchWeight(int32_t switchWeight) { DARABONBA_PTR_SET_VALUE(switchWeight_, switchWeight) };


    // tempDBInstanceId Field Functions 
    bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
    void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
    inline string tempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    // tipsLevel Field Functions 
    bool hasTipsLevel() const { return this->tipsLevel_ != nullptr;};
    void deleteTipsLevel() { this->tipsLevel_ = nullptr;};
    inline int32_t tipsLevel() const { DARABONBA_PTR_GET_DEFAULT(tipsLevel_, 0) };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setTipsLevel(int32_t tipsLevel) { DARABONBA_PTR_SET_VALUE(tipsLevel_, tipsLevel) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcCloudInstanceId Field Functions 
    bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
    void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
    inline string vpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesResponseBodyItemsDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    std::shared_ptr<string> blueGreenDeploymentName_ = nullptr;
    std::shared_ptr<string> blueInstanceName_ = nullptr;
    // A deprecated parameter.
    std::shared_ptr<string> bpeEnabled_ = nullptr;
    // Indicates whether the I/O burst feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **Finance**: RDS Enterprise Edition
    // 
    // >  This parameter is returned only when the **InstanceLevel** parameter is set to **1**.
    std::shared_ptr<string> category_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<bool> coldDataEnabled_ = nullptr;
    // The connection mode of the instance. Valid values:
    // 
    // *   **Standard**: standard mode
    // *   **Safe**: database proxy mode
    std::shared_ptr<string> connectionMode_ = nullptr;
    // The endpoint of the instance.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The creation time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of CPU instances.
    // 
    // Returns only when the InstanceLevel parameter is 1.
    std::shared_ptr<string> DBInstanceCPU_ = nullptr;
    // The instance type of the instance. For information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The memory size of the node. Unit: MB.
    // 
    // Returns only when the InstanceLevel parameter is 1.
    std::shared_ptr<int32_t> DBInstanceMemory_ = nullptr;
    // The type of the network connection to the instance. Valid values:
    // 
    // *   **Internet**
    // *   **Intranet**
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // The instance status. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/26315.html).
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // The storage type of the instance.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   **Primary**: primary instance
    // *   **Readonly**: read-only instance
    // *   **Guard**: disaster recovery instance
    // *   **Temp**: temporary instance
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The ID of the dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The name of the dedicated cluster.
    std::shared_ptr<string> dedicatedHostGroupName_ = nullptr;
    // The ID of the host on which the logger instance resides.
    std::shared_ptr<string> dedicatedHostIdForLog_ = nullptr;
    // The ID of the host on which the primary instance resides.
    std::shared_ptr<string> dedicatedHostIdForMaster_ = nullptr;
    // The ID of the host on which the secondary instance resides.
    std::shared_ptr<string> dedicatedHostIdForSlave_ = nullptr;
    // The name of the host on which the logger instance resides.
    std::shared_ptr<string> dedicatedHostNameForLog_ = nullptr;
    // The name of the host on which the primary instance resides.
    std::shared_ptr<string> dedicatedHostNameForMaster_ = nullptr;
    // The name of the host on which the secondary instance resides.
    std::shared_ptr<string> dedicatedHostNameForSlave_ = nullptr;
    // The zone ID of the host on which the logger instance resides.
    std::shared_ptr<string> dedicatedHostZoneIdForLog_ = nullptr;
    // The zone ID of the host on which the primary instance resides.
    std::shared_ptr<string> dedicatedHostZoneIdForMaster_ = nullptr;
    // The zone ID of the host on which the secondary instance resides.
    std::shared_ptr<string> dedicatedHostZoneIdForSlave_ = nullptr;
    // Indicates whether the release protection feature is enabled for the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The time when the instance was destroyed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> destroyTime_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  Pay-as-you-go instances never expire.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The name of the dedicated cluster to which the instance belongs. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
    std::shared_ptr<string> generalGroupName_ = nullptr;
    std::shared_ptr<string> greenInstanceName_ = nullptr;
    // The ID of the disaster recovery instance. This parameter is returned only when the instance is a primary instance and has a disaster recovery instance attached.
    std::shared_ptr<string> guardDBInstanceId_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**
    // *   **VPC**
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // Indicates whether the I/O acceleration feature is enabled. Valid values:
    // 
    // *   1: enabled
    // *   0: disabled
    std::shared_ptr<string> ioAccelerationEnabled_ = nullptr;
    std::shared_ptr<string> isAnalyticIns_ = nullptr;
    std::shared_ptr<bool> isAnalyticReadOnlyIns_ = nullptr;
    // The lock mode of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
    // *   **LockByRestoration**: The instance is automatically locked before the instance is rolled back.
    // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage capacity.
    // *   **Released**: The instance is released. After an instance is released, the instance cannot be unlocked. You can only restore the backup data of the instance to a new instance. This process requires a long period of time.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the instance was locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The ID of the primary instance. If this parameter is null, the instance is a primary instance.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // Indicates whether the multi-zone deployment method is used for the instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If the multi-zone deployment method is used for the instance, the zone ID of the instance contains MAZ. Example: `cn-hangzhou-MAZ10(h,i)`.
    std::shared_ptr<bool> mutriORsignle_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The IDs of the read-only instances. This parameter is returned only when the instance is a primary instance and has the read-only instances attached.
    std::shared_ptr<Models::DescribeDBInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the instance supports weight-based switchovers for high availability. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
    // 
    // *   **100**: The instance supports weight-based switchovers for high availability.
    // *   **0**: The instance does not support weight-based switchovers for high availability.
    std::shared_ptr<int32_t> switchWeight_ = nullptr;
    // The ID of the temporary instance. This parameter is returned only when the instance is a primary instance and has a temporary instance attached.
    std::shared_ptr<string> tempDBInstanceId_ = nullptr;
    // The information about the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
    std::shared_ptr<string> tips_ = nullptr;
    // The severity of the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
    // 
    // *   **1**: The instance is normal.
    // *   **2**: The specifications of the read-only instances do not match the specifications of the primary instance, and instance performance may be affected. You must adjust the specifications of these instances based on your business requirements.
    std::shared_ptr<int32_t> tipsLevel_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the instance. This parameter is returned only when the instance resides in a VPC.
    std::shared_ptr<string> vpcCloudInstanceId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The VPC name.
    std::shared_ptr<string> vpcName_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
