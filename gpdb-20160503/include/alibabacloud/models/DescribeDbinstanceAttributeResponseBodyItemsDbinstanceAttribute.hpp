// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AvailabilityValue, availabilityValue_);
      DARABONBA_PTR_TO_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CoreVersion, coreVersion_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CpuCoresPerNode, cpuCoresPerNode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_TO_JSON(DBInstanceCpuCores, DBInstanceCpuCores_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceDiskMBPS, DBInstanceDiskMBPS_);
      DARABONBA_PTR_TO_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_TO_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_TO_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_TO_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MemoryPerNode, memoryPerNode_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(MemoryUnit, memoryUnit_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProdType, prodType_);
      DARABONBA_PTR_TO_JSON(ReadDelayTime, readDelayTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_TO_JSON(SegmentAISpec, segmentAISpec_);
      DARABONBA_PTR_TO_JSON(SegmentCounts, segmentCounts_);
      DARABONBA_PTR_TO_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_TO_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StoragePerNode, storagePerNode_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUnit, storageUnit_);
      DARABONBA_PTR_TO_JSON(SupportRestore, supportRestore_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailabilityValue, availabilityValue_);
      DARABONBA_PTR_FROM_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CoreVersion, coreVersion_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CpuCoresPerNode, cpuCoresPerNode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClassType, DBInstanceClassType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCpuCores, DBInstanceCpuCores_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDiskMBPS, DBInstanceDiskMBPS_);
      DARABONBA_PTR_FROM_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_FROM_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_FROM_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MemoryPerNode, memoryPerNode_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(MemoryUnit, memoryUnit_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProdType, prodType_);
      DARABONBA_PTR_FROM_JSON(ReadDelayTime, readDelayTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_FROM_JSON(SegmentAISpec, segmentAISpec_);
      DARABONBA_PTR_FROM_JSON(SegmentCounts, segmentCounts_);
      DARABONBA_PTR_FROM_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_FROM_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StoragePerNode, storagePerNode_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUnit, storageUnit_);
      DARABONBA_PTR_FROM_JSON(SupportRestore, supportRestore_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
    virtual bool empty() const override { this->availabilityValue_ != nullptr
        && this->cacheStorageSize_ != nullptr && this->connectionMode_ != nullptr && this->connectionString_ != nullptr && this->coreVersion_ != nullptr && this->cpuCores_ != nullptr
        && this->cpuCoresPerNode_ != nullptr && this->creationTime_ != nullptr && this->DBInstanceCategory_ != nullptr && this->DBInstanceClass_ != nullptr && this->DBInstanceClassType_ != nullptr
        && this->DBInstanceCpuCores_ != nullptr && this->DBInstanceDescription_ != nullptr && this->DBInstanceDiskMBPS_ != nullptr && this->DBInstanceGroupCount_ != nullptr && this->DBInstanceId_ != nullptr
        && this->DBInstanceMemory_ != nullptr && this->DBInstanceMode_ != nullptr && this->DBInstanceNetType_ != nullptr && this->DBInstanceStatus_ != nullptr && this->DBInstanceStorage_ != nullptr
        && this->deployMode_ != nullptr && this->encryptionKey_ != nullptr && this->encryptionType_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr
        && this->expireTime_ != nullptr && this->hostType_ != nullptr && this->idleTime_ != nullptr && this->instanceNetworkType_ != nullptr && this->instanceSpec_ != nullptr
        && this->lockMode_ != nullptr && this->lockReason_ != nullptr && this->maintainEndTime_ != nullptr && this->maintainStartTime_ != nullptr && this->masterAISpec_ != nullptr
        && this->masterCU_ != nullptr && this->masterNodeNum_ != nullptr && this->maxConnections_ != nullptr && this->memoryPerNode_ != nullptr && this->memorySize_ != nullptr
        && this->memoryUnit_ != nullptr && this->minorVersion_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr && this->prodType_ != nullptr
        && this->readDelayTime_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->runningTime_ != nullptr && this->securityIPList_ != nullptr
        && this->segDiskPerformanceLevel_ != nullptr && this->segNodeNum_ != nullptr && this->segmentAISpec_ != nullptr && this->segmentCounts_ != nullptr && this->serverlessMode_ != nullptr
        && this->serverlessResource_ != nullptr && this->standbyZoneId_ != nullptr && this->startTime_ != nullptr && this->storagePerNode_ != nullptr && this->storageSize_ != nullptr
        && this->storageType_ != nullptr && this->storageUnit_ != nullptr && this->supportRestore_ != nullptr && this->tags_ != nullptr && this->vSwitchId_ != nullptr
        && this->vectorConfigurationStatus_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // availabilityValue Field Functions 
    bool hasAvailabilityValue() const { return this->availabilityValue_ != nullptr;};
    void deleteAvailabilityValue() { this->availabilityValue_ = nullptr;};
    inline string availabilityValue() const { DARABONBA_PTR_GET_DEFAULT(availabilityValue_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setAvailabilityValue(string availabilityValue) { DARABONBA_PTR_SET_VALUE(availabilityValue_, availabilityValue) };


    // cacheStorageSize Field Functions 
    bool hasCacheStorageSize() const { return this->cacheStorageSize_ != nullptr;};
    void deleteCacheStorageSize() { this->cacheStorageSize_ = nullptr;};
    inline string cacheStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSize_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCacheStorageSize(string cacheStorageSize) { DARABONBA_PTR_SET_VALUE(cacheStorageSize_, cacheStorageSize) };


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


    // coreVersion Field Functions 
    bool hasCoreVersion() const { return this->coreVersion_ != nullptr;};
    void deleteCoreVersion() { this->coreVersion_ = nullptr;};
    inline string coreVersion() const { DARABONBA_PTR_GET_DEFAULT(coreVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCoreVersion(string coreVersion) { DARABONBA_PTR_SET_VALUE(coreVersion_, coreVersion) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int32_t cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // cpuCoresPerNode Field Functions 
    bool hasCpuCoresPerNode() const { return this->cpuCoresPerNode_ != nullptr;};
    void deleteCpuCoresPerNode() { this->cpuCoresPerNode_ = nullptr;};
    inline int32_t cpuCoresPerNode() const { DARABONBA_PTR_GET_DEFAULT(cpuCoresPerNode_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCpuCoresPerNode(int32_t cpuCoresPerNode) { DARABONBA_PTR_SET_VALUE(cpuCoresPerNode_, cpuCoresPerNode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBInstanceCategory Field Functions 
    bool hasDBInstanceCategory() const { return this->DBInstanceCategory_ != nullptr;};
    void deleteDBInstanceCategory() { this->DBInstanceCategory_ = nullptr;};
    inline string DBInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategory_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceCategory(string DBInstanceCategory) { DARABONBA_PTR_SET_VALUE(DBInstanceCategory_, DBInstanceCategory) };


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


    // DBInstanceCpuCores Field Functions 
    bool hasDBInstanceCpuCores() const { return this->DBInstanceCpuCores_ != nullptr;};
    void deleteDBInstanceCpuCores() { this->DBInstanceCpuCores_ = nullptr;};
    inline int32_t DBInstanceCpuCores() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCpuCores_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceCpuCores(int32_t DBInstanceCpuCores) { DARABONBA_PTR_SET_VALUE(DBInstanceCpuCores_, DBInstanceCpuCores) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceDiskMBPS Field Functions 
    bool hasDBInstanceDiskMBPS() const { return this->DBInstanceDiskMBPS_ != nullptr;};
    void deleteDBInstanceDiskMBPS() { this->DBInstanceDiskMBPS_ = nullptr;};
    inline int64_t DBInstanceDiskMBPS() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDiskMBPS_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceDiskMBPS(int64_t DBInstanceDiskMBPS) { DARABONBA_PTR_SET_VALUE(DBInstanceDiskMBPS_, DBInstanceDiskMBPS) };


    // DBInstanceGroupCount Field Functions 
    bool hasDBInstanceGroupCount() const { return this->DBInstanceGroupCount_ != nullptr;};
    void deleteDBInstanceGroupCount() { this->DBInstanceGroupCount_ = nullptr;};
    inline string DBInstanceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceGroupCount_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceGroupCount(string DBInstanceGroupCount) { DARABONBA_PTR_SET_VALUE(DBInstanceGroupCount_, DBInstanceGroupCount) };


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


    // DBInstanceMode Field Functions 
    bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
    void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
    inline string DBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


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
    inline int64_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDBInstanceStorage(int64_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


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


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // idleTime Field Functions 
    bool hasIdleTime() const { return this->idleTime_ != nullptr;};
    void deleteIdleTime() { this->idleTime_ = nullptr;};
    inline int32_t idleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setIdleTime(int32_t idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


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


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // masterAISpec Field Functions 
    bool hasMasterAISpec() const { return this->masterAISpec_ != nullptr;};
    void deleteMasterAISpec() { this->masterAISpec_ = nullptr;};
    inline string masterAISpec() const { DARABONBA_PTR_GET_DEFAULT(masterAISpec_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMasterAISpec(string masterAISpec) { DARABONBA_PTR_SET_VALUE(masterAISpec_, masterAISpec) };


    // masterCU Field Functions 
    bool hasMasterCU() const { return this->masterCU_ != nullptr;};
    void deleteMasterCU() { this->masterCU_ = nullptr;};
    inline int32_t masterCU() const { DARABONBA_PTR_GET_DEFAULT(masterCU_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMasterCU(int32_t masterCU) { DARABONBA_PTR_SET_VALUE(masterCU_, masterCU) };


    // masterNodeNum Field Functions 
    bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
    void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
    inline int32_t masterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMasterNodeNum(int32_t masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // memoryPerNode Field Functions 
    bool hasMemoryPerNode() const { return this->memoryPerNode_ != nullptr;};
    void deleteMemoryPerNode() { this->memoryPerNode_ = nullptr;};
    inline int32_t memoryPerNode() const { DARABONBA_PTR_GET_DEFAULT(memoryPerNode_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMemoryPerNode(int32_t memoryPerNode) { DARABONBA_PTR_SET_VALUE(memoryPerNode_, memoryPerNode) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int64_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMemorySize(int64_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // memoryUnit Field Functions 
    bool hasMemoryUnit() const { return this->memoryUnit_ != nullptr;};
    void deleteMemoryUnit() { this->memoryUnit_ = nullptr;};
    inline string memoryUnit() const { DARABONBA_PTR_GET_DEFAULT(memoryUnit_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMemoryUnit(string memoryUnit) { DARABONBA_PTR_SET_VALUE(memoryUnit_, memoryUnit) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


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


    // prodType Field Functions 
    bool hasProdType() const { return this->prodType_ != nullptr;};
    void deleteProdType() { this->prodType_ = nullptr;};
    inline string prodType() const { DARABONBA_PTR_GET_DEFAULT(prodType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setProdType(string prodType) { DARABONBA_PTR_SET_VALUE(prodType_, prodType) };


    // readDelayTime Field Functions 
    bool hasReadDelayTime() const { return this->readDelayTime_ != nullptr;};
    void deleteReadDelayTime() { this->readDelayTime_ = nullptr;};
    inline string readDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readDelayTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setReadDelayTime(string readDelayTime) { DARABONBA_PTR_SET_VALUE(readDelayTime_, readDelayTime) };


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


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline string runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setRunningTime(string runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // segDiskPerformanceLevel Field Functions 
    bool hasSegDiskPerformanceLevel() const { return this->segDiskPerformanceLevel_ != nullptr;};
    void deleteSegDiskPerformanceLevel() { this->segDiskPerformanceLevel_ = nullptr;};
    inline string segDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(segDiskPerformanceLevel_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSegDiskPerformanceLevel(string segDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(segDiskPerformanceLevel_, segDiskPerformanceLevel) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline int32_t segNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSegNodeNum(int32_t segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // segmentAISpec Field Functions 
    bool hasSegmentAISpec() const { return this->segmentAISpec_ != nullptr;};
    void deleteSegmentAISpec() { this->segmentAISpec_ = nullptr;};
    inline string segmentAISpec() const { DARABONBA_PTR_GET_DEFAULT(segmentAISpec_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSegmentAISpec(string segmentAISpec) { DARABONBA_PTR_SET_VALUE(segmentAISpec_, segmentAISpec) };


    // segmentCounts Field Functions 
    bool hasSegmentCounts() const { return this->segmentCounts_ != nullptr;};
    void deleteSegmentCounts() { this->segmentCounts_ = nullptr;};
    inline int32_t segmentCounts() const { DARABONBA_PTR_GET_DEFAULT(segmentCounts_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSegmentCounts(int32_t segmentCounts) { DARABONBA_PTR_SET_VALUE(segmentCounts_, segmentCounts) };


    // serverlessMode Field Functions 
    bool hasServerlessMode() const { return this->serverlessMode_ != nullptr;};
    void deleteServerlessMode() { this->serverlessMode_ = nullptr;};
    inline string serverlessMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setServerlessMode(string serverlessMode) { DARABONBA_PTR_SET_VALUE(serverlessMode_, serverlessMode) };


    // serverlessResource Field Functions 
    bool hasServerlessResource() const { return this->serverlessResource_ != nullptr;};
    void deleteServerlessResource() { this->serverlessResource_ = nullptr;};
    inline int32_t serverlessResource() const { DARABONBA_PTR_GET_DEFAULT(serverlessResource_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setServerlessResource(int32_t serverlessResource) { DARABONBA_PTR_SET_VALUE(serverlessResource_, serverlessResource) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storagePerNode Field Functions 
    bool hasStoragePerNode() const { return this->storagePerNode_ != nullptr;};
    void deleteStoragePerNode() { this->storagePerNode_ = nullptr;};
    inline int32_t storagePerNode() const { DARABONBA_PTR_GET_DEFAULT(storagePerNode_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStoragePerNode(int32_t storagePerNode) { DARABONBA_PTR_SET_VALUE(storagePerNode_, storagePerNode) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUnit Field Functions 
    bool hasStorageUnit() const { return this->storageUnit_ != nullptr;};
    void deleteStorageUnit() { this->storageUnit_ = nullptr;};
    inline string storageUnit() const { DARABONBA_PTR_GET_DEFAULT(storageUnit_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setStorageUnit(string storageUnit) { DARABONBA_PTR_SET_VALUE(storageUnit_, storageUnit) };


    // supportRestore Field Functions 
    bool hasSupportRestore() const { return this->supportRestore_ != nullptr;};
    void deleteSupportRestore() { this->supportRestore_ = nullptr;};
    inline bool supportRestore() const { DARABONBA_PTR_GET_DEFAULT(supportRestore_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setSupportRestore(bool supportRestore) { DARABONBA_PTR_SET_VALUE(supportRestore_, supportRestore) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags) };
    inline Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTags(const Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setTags(Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vectorConfigurationStatus Field Functions 
    bool hasVectorConfigurationStatus() const { return this->vectorConfigurationStatus_ != nullptr;};
    void deleteVectorConfigurationStatus() { this->vectorConfigurationStatus_ = nullptr;};
    inline string vectorConfigurationStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorConfigurationStatus_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute& setVectorConfigurationStatus(string vectorConfigurationStatus) { DARABONBA_PTR_SET_VALUE(vectorConfigurationStatus_, vectorConfigurationStatus) };


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


  protected:
    // Queries the current instance availability status, in percentage (%).
    // 
    // > This parameter is only applicable to instances in the storage reserved mode.
    std::shared_ptr<string> availabilityValue_ = nullptr;
    std::shared_ptr<string> cacheStorageSize_ = nullptr;
    // Access mode, with the following values:
    // 
    // - **Performance**: Standard access mode.
    // - **Safty**: High-security access mode.
    // - **LVS**: LVS link mode.
    std::shared_ptr<string> connectionMode_ = nullptr;
    // Instance connection address.
    std::shared_ptr<string> connectionString_ = nullptr;
    // Minor version number of the kernel.
    std::shared_ptr<string> coreVersion_ = nullptr;
    // Number of CPU cores for the compute node, unit: Core.
    std::shared_ptr<int32_t> cpuCores_ = nullptr;
    // Number of CPU cores per node.
    // 
    // > This parameter is only applicable to instances in the storage reserved mode.
    std::shared_ptr<int32_t> cpuCoresPerNode_ = nullptr;
    // Instance creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Instance series, with the following values:
    // 
    // - **Basic**: Basic Edition.
    // - **HighAvailability**: High Availability Edition.
    std::shared_ptr<string> DBInstanceCategory_ = nullptr;
    // Instance specification.
    // 
    // > This parameter is only applicable to reserved storage mode instances.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // Instance family, with the following values:
    // 
    // - **s**: Shared type.
    // - **x**: General type.
    // - **d**: Dedicated package.
    // - **h**: Dedicated physical machine.
    std::shared_ptr<string> DBInstanceClassType_ = nullptr;
    // Number of CPU cores.
    std::shared_ptr<int32_t> DBInstanceCpuCores_ = nullptr;
    // Instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // Maximum BPS (disk throughput) of the compute group, in Mbps.
    // 
    // > This parameter is only applicable to reserved storage mode instances.
    std::shared_ptr<int64_t> DBInstanceDiskMBPS_ = nullptr;
    // Number of compute groups.
    // 
    // > This parameter is only applicable to reserved storage mode instances.
    std::shared_ptr<string> DBInstanceGroupCount_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Memory of the compute node.
    // 
    // > The unit for storage-reserved mode is MB; for Serverless and storage-elastic modes, it is GB.
    std::shared_ptr<int64_t> DBInstanceMemory_ = nullptr;
    // Instance resource type, with the following values:
    // 
    // - **Serverless**: Serverless mode.
    // - **StorageElastic**: Storage elastic mode.
    // - **Classic**: Storage reserved mode.
    std::shared_ptr<string> DBInstanceMode_ = nullptr;
    // This parameter is deprecated and will not return any value.
    std::shared_ptr<string> DBInstanceNetType_ = nullptr;
    // Instance status. For more details, see the supplementary explanation of the DBInstanceStatus parameter.
    std::shared_ptr<string> DBInstanceStatus_ = nullptr;
    // Maximum storage space of a single replica, in GB.
    std::shared_ptr<int64_t> DBInstanceStorage_ = nullptr;
    // The deployment mode.
    std::shared_ptr<string> deployMode_ = nullptr;
    // Encryption key.
    // 
    // > This parameter is returned only for instances with disk encryption enabled.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // Encryption type, with the following value:
    // 
    // - **CloudDisk**: Cloud disk encryption.
    // 
    // > This parameter is returned only for instances with cloud disk encryption.
    std::shared_ptr<string> encryptionType_ = nullptr;
    // Database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // Database version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // Instance expiration time (in UTC).
    // 
    // > The expiration time for pay-as-you-go instances is `2999-09-08T16:00:00Z`.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Compute group machine type, with the following values:
    // - **0**: SSD
    // - **1**: HDD
    // 
    // > This parameter applies only to storage-reserved mode instances.
    std::shared_ptr<string> hostType_ = nullptr;
    // Idle release waiting time. Unit: seconds.
    // 
    // > This parameter is returned only for instances in the Serverless automatic scheduling mode.
    std::shared_ptr<int32_t> idleTime_ = nullptr;
    // Instance network type, with the following values:
    // 
    // - **Classic**: Classic network.
    // - **VPC**: VPC network.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // Lock mode, with the following values:
    // 
    // - **Unlock**: Normal.
    // - **ManualLock**: Manually triggered lock.
    // - **LockByExpiration**: Automatically locked when the instance expires.
    // - **LockByRestoration**: Automatically locked before the instance rolls back.
    // - **LockByDiskQuota**: Automatically locked when the instance space is full.
    std::shared_ptr<string> lockMode_ = nullptr;
    // This parameter is deprecated and will not return any value.
    std::shared_ptr<string> lockReason_ = nullptr;
    // Maintenance end time.
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    // Maintenance start time.
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    // The specifications of AI coordinator node resources of the instance. If the coordinator nodes of the instance are not AI nodes, null is returned.
    std::shared_ptr<string> masterAISpec_ = nullptr;
    // Master resources.
    std::shared_ptr<int32_t> masterCU_ = nullptr;
    // Number of Master nodes.
    std::shared_ptr<int32_t> masterNodeNum_ = nullptr;
    // Maximum number of concurrent connections for the instance.
    // 
    // > This parameter is only applicable to reserved storage mode instances.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // Memory size per replica, see the **MemoryUnit** parameter for the unit.
    // 
    // > This parameter is only applicable to instances in the storage reserved mode.
    std::shared_ptr<int32_t> memoryPerNode_ = nullptr;
    // Memory size of the compute node.
    // 
    // > The unit is MB for the storage reserved mode; GB for Serverless and storage elastic modes.
    std::shared_ptr<int64_t> memorySize_ = nullptr;
    // Memory unit.
    // 
    // > This parameter is only applicable to reserved storage mode instances.
    std::shared_ptr<string> memoryUnit_ = nullptr;
    // Minor version of the kernel.
    std::shared_ptr<string> minorVersion_ = nullptr;
    // Billing type, with the following values:
    // 
    // - **Postpaid**: Pay-as-you-go.
    // - **Prepaid**: Subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // Instance port number.
    std::shared_ptr<string> port_ = nullptr;
    // The service type.
    std::shared_ptr<string> prodType_ = nullptr;
    // This parameter has been deprecated and will not return a value.
    std::shared_ptr<string> readDelayTime_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // ID of the resource group where the instance is located.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Instance running time.
    std::shared_ptr<string> runningTime_ = nullptr;
    // This parameter is deprecated and will not return any value.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // Performance Level (PL), currently only **PL1** is supported.
    std::shared_ptr<string> segDiskPerformanceLevel_ = nullptr;
    // Number of Segment nodes.
    // 
    // > This parameter applies only to instances in the storage elastic mode and Serverless manual scheduling mode.
    std::shared_ptr<int32_t> segNodeNum_ = nullptr;
    // The specifications of AI compute node resources of the instance. If the compute nodes of the instance are not AI nodes, null is returned.
    std::shared_ptr<string> segmentAISpec_ = nullptr;
    // Number of compute groups.
    // 
    // > This parameter applies only to storage-reserved mode instances.
    std::shared_ptr<int32_t> segmentCounts_ = nullptr;
    // The mode of the Serverless instance, with the following values:
    // 
    // - **Manual**: Manual scheduling.
    // - **Auto**: Automatic scheduling.
    // 
    // > This parameter is returned only for Serverless mode instances.
    std::shared_ptr<string> serverlessMode_ = nullptr;
    // Compute resource threshold. Unit: ACU.
    // 
    // > This parameter is returned only for instances in the Serverless automatic scheduling mode.
    std::shared_ptr<int32_t> serverlessResource_ = nullptr;
    // The secondary zone ID.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    // The time when the instance started running.
    std::shared_ptr<string> startTime_ = nullptr;
    // Storage size per replica, see the **StorageUnit** parameter for units.
    // 
    // > This parameter applies only to storage-reserved mode instances.
    std::shared_ptr<int32_t> storagePerNode_ = nullptr;
    // Storage space size, unit: GB.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // Storage type, with the following values:
    // 
    // - **cloud_essd**: ESSD cloud disk.
    // - **cloud_efficiency**: Efficient cloud disk.
    // 
    // > This parameter is only applicable to instances in the storage elastic mode.
    std::shared_ptr<string> storageType_ = nullptr;
    // Storage unit, with the following values:
    // 
    // - **GB SSD**
    // - **TB SSD**
    // - **GB HDD**
    // 
    // > This parameter is only applicable to instances in the storage reserved mode.
    std::shared_ptr<string> storageUnit_ = nullptr;
    // Indicates whether backup recovery is supported, with the following values:
    // 
    // - **true**: Backup recovery is supported.
    // - **false**: Backup recovery is not supported.
    std::shared_ptr<bool> supportRestore_ = nullptr;
    // Tag key-value pairs.
    std::shared_ptr<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags> tags_ = nullptr;
    // vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Indicates whether vector engine optimization is enabled. The values are as follows:
    // - **enabled**: Indicates that vector engine optimization is enabled.
    // - **disabled**: Indicates that vector engine optimization is disabled.
    std::shared_ptr<string> vectorConfigurationStatus_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
