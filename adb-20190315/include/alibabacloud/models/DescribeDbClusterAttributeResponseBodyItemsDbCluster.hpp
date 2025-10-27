// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTags.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_TO_JSON(ElasticIOResourceSize, elasticIOResourceSize_);
      DARABONBA_PTR_TO_JSON(EnableAirflow, enableAirflow_);
      DARABONBA_PTR_TO_JSON(EnableSpark, enableSpark_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(InnerPort, innerPort_);
      DARABONBA_PTR_TO_JSON(KmsId, kmsId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(UserENIStatus, userENIStatus_);
      DARABONBA_PTR_TO_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResourceSize, elasticIOResourceSize_);
      DARABONBA_PTR_FROM_JSON(EnableAirflow, enableAirflow_);
      DARABONBA_PTR_FROM_JSON(EnableSpark, enableSpark_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(InnerPort, innerPort_);
      DARABONBA_PTR_FROM_JSON(KmsId, kmsId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(UserENIStatus, userENIStatus_);
      DARABONBA_PTR_FROM_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClusterAttributeResponseBodyItemsDBCluster() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBCluster(const DescribeDBClusterAttributeResponseBodyItemsDBCluster &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBCluster(DescribeDBClusterAttributeResponseBodyItemsDBCluster &&) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItemsDBCluster() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBCluster& operator=(const DescribeDBClusterAttributeResponseBodyItemsDBCluster &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBCluster& operator=(DescribeDBClusterAttributeResponseBodyItemsDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->commodityCode_ == nullptr && return this->computeResource_ == nullptr && return this->connectionString_ == nullptr && return this->creationTime_ == nullptr && return this->DBClusterDescription_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBClusterType_ == nullptr && return this->DBNodeClass_ == nullptr
        && return this->DBNodeCount_ == nullptr && return this->DBNodeStorage_ == nullptr && return this->DBVersion_ == nullptr && return this->diskEncryption_ == nullptr && return this->diskPerformanceLevel_ == nullptr
        && return this->diskType_ == nullptr && return this->dtsJobId_ == nullptr && return this->elasticIOResource_ == nullptr && return this->elasticIOResourceSize_ == nullptr && return this->enableAirflow_ == nullptr
        && return this->enableSpark_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->executorCount_ == nullptr && return this->expireTime_ == nullptr
        && return this->expired_ == nullptr && return this->innerIp_ == nullptr && return this->innerPort_ == nullptr && return this->kmsId_ == nullptr && return this->lockMode_ == nullptr
        && return this->lockReason_ == nullptr && return this->maintainTime_ == nullptr && return this->mode_ == nullptr && return this->payType_ == nullptr && return this->port_ == nullptr
        && return this->productForm_ == nullptr && return this->productVersion_ == nullptr && return this->rdsInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->reservedNodeCount_ == nullptr
        && return this->reservedNodeSize_ == nullptr && return this->resourceGroupId_ == nullptr && return this->secondaryVSwitchId_ == nullptr && return this->secondaryZoneId_ == nullptr && return this->storageResource_ == nullptr
        && return this->tags_ == nullptr && return this->taskInfo_ == nullptr && return this->userENIStatus_ == nullptr && return this->VPCCloudInstanceId_ == nullptr && return this->VPCId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBClusterType Field Functions 
    bool hasDBClusterType() const { return this->DBClusterType_ != nullptr;};
    void deleteDBClusterType() { this->DBClusterType_ = nullptr;};
    inline string DBClusterType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterType_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBClusterType(string DBClusterType) { DARABONBA_PTR_SET_VALUE(DBClusterType_, DBClusterType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int64_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline int64_t DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string diskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // elasticIOResource Field Functions 
    bool hasElasticIOResource() const { return this->elasticIOResource_ != nullptr;};
    void deleteElasticIOResource() { this->elasticIOResource_ = nullptr;};
    inline int32_t elasticIOResource() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResource_, 0) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setElasticIOResource(int32_t elasticIOResource) { DARABONBA_PTR_SET_VALUE(elasticIOResource_, elasticIOResource) };


    // elasticIOResourceSize Field Functions 
    bool hasElasticIOResourceSize() const { return this->elasticIOResourceSize_ != nullptr;};
    void deleteElasticIOResourceSize() { this->elasticIOResourceSize_ = nullptr;};
    inline string elasticIOResourceSize() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResourceSize_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setElasticIOResourceSize(string elasticIOResourceSize) { DARABONBA_PTR_SET_VALUE(elasticIOResourceSize_, elasticIOResourceSize) };


    // enableAirflow Field Functions 
    bool hasEnableAirflow() const { return this->enableAirflow_ != nullptr;};
    void deleteEnableAirflow() { this->enableAirflow_ = nullptr;};
    inline bool enableAirflow() const { DARABONBA_PTR_GET_DEFAULT(enableAirflow_, false) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setEnableAirflow(bool enableAirflow) { DARABONBA_PTR_SET_VALUE(enableAirflow_, enableAirflow) };


    // enableSpark Field Functions 
    bool hasEnableSpark() const { return this->enableSpark_ != nullptr;};
    void deleteEnableSpark() { this->enableSpark_ = nullptr;};
    inline bool enableSpark() const { DARABONBA_PTR_GET_DEFAULT(enableSpark_, false) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setEnableSpark(bool enableSpark) { DARABONBA_PTR_SET_VALUE(enableSpark_, enableSpark) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // executorCount Field Functions 
    bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
    void deleteExecutorCount() { this->executorCount_ = nullptr;};
    inline string executorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setExecutorCount(string executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string innerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


    // innerPort Field Functions 
    bool hasInnerPort() const { return this->innerPort_ != nullptr;};
    void deleteInnerPort() { this->innerPort_ = nullptr;};
    inline string innerPort() const { DARABONBA_PTR_GET_DEFAULT(innerPort_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setInnerPort(string innerPort) { DARABONBA_PTR_SET_VALUE(innerPort_, innerPort) };


    // kmsId Field Functions 
    bool hasKmsId() const { return this->kmsId_ != nullptr;};
    void deleteKmsId() { this->kmsId_ = nullptr;};
    inline string kmsId() const { DARABONBA_PTR_GET_DEFAULT(kmsId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setKmsId(string kmsId) { DARABONBA_PTR_SET_VALUE(kmsId_, kmsId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainTime Field Functions 
    bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
    void deleteMaintainTime() { this->maintainTime_ = nullptr;};
    inline string maintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // productForm Field Functions 
    bool hasProductForm() const { return this->productForm_ != nullptr;};
    void deleteProductForm() { this->productForm_ = nullptr;};
    inline string productForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // rdsInstanceId Field Functions 
    bool hasRdsInstanceId() const { return this->rdsInstanceId_ != nullptr;};
    void deleteRdsInstanceId() { this->rdsInstanceId_ = nullptr;};
    inline string rdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(rdsInstanceId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setRdsInstanceId(string rdsInstanceId) { DARABONBA_PTR_SET_VALUE(rdsInstanceId_, rdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedNodeCount Field Functions 
    bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
    void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
    inline int32_t reservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


    // reservedNodeSize Field Functions 
    bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
    void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
    inline string reservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryVSwitchId Field Functions 
    bool hasSecondaryVSwitchId() const { return this->secondaryVSwitchId_ != nullptr;};
    void deleteSecondaryVSwitchId() { this->secondaryVSwitchId_ = nullptr;};
    inline string secondaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(secondaryVSwitchId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setSecondaryVSwitchId(string secondaryVSwitchId) { DARABONBA_PTR_SET_VALUE(secondaryVSwitchId_, secondaryVSwitchId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string secondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags) };
    inline Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setTags(const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setTags(Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo) };
    inline Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setTaskInfo(const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setTaskInfo(Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // userENIStatus Field Functions 
    bool hasUserENIStatus() const { return this->userENIStatus_ != nullptr;};
    void deleteUserENIStatus() { this->userENIStatus_ = nullptr;};
    inline bool userENIStatus() const { DARABONBA_PTR_GET_DEFAULT(userENIStatus_, false) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setUserENIStatus(bool userENIStatus) { DARABONBA_PTR_SET_VALUE(userENIStatus_, userENIStatus) };


    // VPCCloudInstanceId Field Functions 
    bool hasVPCCloudInstanceId() const { return this->VPCCloudInstanceId_ != nullptr;};
    void deleteVPCCloudInstanceId() { this->VPCCloudInstanceId_ = nullptr;};
    inline string VPCCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(VPCCloudInstanceId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setVPCCloudInstanceId(string VPCCloudInstanceId) { DARABONBA_PTR_SET_VALUE(VPCCloudInstanceId_, VPCCloudInstanceId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The edition of the cluster. Valid values:
    // 
    // *   **BASIC**: reserved mode for Basic Edition.
    // *   **CLUSTER**: reserved mode for Cluster Edition.
    // *   **MIXED_STORAGE**: elastic mode for Cluster Edition.
    // 
    // >  For more information about cluster editions, see [Editions](https://help.aliyun.com/document_detail/205001.html).
    std::shared_ptr<string> category_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **ads**: pay-as-you-go.
    // *   **ads_pre**: subscription.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The specifications of computing resources that are used in the cluster in elastic mode. Computing resources are used to compute data. The increase in the computing resources can accelerate queries. You can scale computing resources based on your business requirements.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The Virtual Private Cloud (VPC) endpoint that is used to connect to the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster. **VPC** is returned.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The status of the cluster. For more information, see [Cluster states](https://help.aliyun.com/document_detail/143075.html).
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   **Common**: common cluster.
    // *   **RDS_ANALYSIS**: MySQL analytic instance.
    std::shared_ptr<string> DBClusterType_ = nullptr;
    // The instance type of the cluster.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of node groups.
    std::shared_ptr<int64_t> DBNodeCount_ = nullptr;
    // The storage capacity of the cluster. Unit: GB.
    std::shared_ptr<int64_t> DBNodeStorage_ = nullptr;
    // The engine version of the cluster. **3.0** is returned.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // Indicates whether disk encryption is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    // The ESSD performance level.
    std::shared_ptr<string> diskPerformanceLevel_ = nullptr;
    // The disk type of the cluster. Valid values:
    // 
    // *   **local_ssd**: local disk.
    // *   **cloud**: basic disk.
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_efficiency**: ultra disk.
    // *   **cloud_essd0**: PL0 Enterprise SSD (ESSD).
    // *   **cloud_essd**: PL1 ESSD.
    // *   **cloud_essd2**: PL2 ESSD.
    // *   **cloud_essd3**: PL3 ESSD.
    // 
    // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the Data Transmission Service (DTS) synchronization job. This parameter is returned only for MySQL analytic instances.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The number of elastic I/O units (EIUs).
    std::shared_ptr<int32_t> elasticIOResource_ = nullptr;
    // The single-node specifications of an EIU. Valid values:
    // 
    // *   8Core64GB: If this value is returned, the specifications of an EIU are 24 cores and 192 GB memory.
    // *   12Core96GB: If this value is returned, the specifications of an EIU are 36 cores and 288 GB memory.
    std::shared_ptr<string> elasticIOResourceSize_ = nullptr;
    // Indicates whether an Airflow cluster was created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableAirflow_ = nullptr;
    // Indicates whether a Spark cluster was created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableSpark_ = nullptr;
    // The database engine of the cluster. **AnalyticDB** is returned.
    std::shared_ptr<string> engine_ = nullptr;
    // The minor version of the cluster.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The number of compute nodes that are used by the cluster in elastic mode.
    std::shared_ptr<string> executorCount_ = nullptr;
    // The expiration time of the cluster. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC. Example: *2999-09-08T16:00:00Z*.
    // 
    // > 
    // 
    // *   If the billing method of the cluster is subscription, the actual expiration time is returned.
    // 
    // *   If the billing method of the cluster is pay-as-you-go, **2999-09-08T16:00:00Z** is returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the cluster has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> expired_ = nullptr;
    // The public IP address of the cluster.
    std::shared_ptr<string> innerIp_ = nullptr;
    // The public port number.
    std::shared_ptr<string> innerPort_ = nullptr;
    // The ID of the key that is used to encrypt disk data.
    // 
    // >  This parameter is returned only when disk encryption is enabled.
    std::shared_ptr<string> kmsId_ = nullptr;
    // The lock mode of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
    // *   **LockByRestoration**: The cluster is automatically locked due to cluster restoration.
    // *   **LockByDiskQuota**: The cluster is automatically locked when 90% of the cluster storage is used.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the cluster is locked.
    // 
    // >  This parameter is returned only when the cluster was locked. **instance_expire** is returned.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maintenance window of the cluster. The time is displayed in the *HH:mmZ-HH:mmZ* format in UTC. Example: *04:00Z-05:00Z*, which indicates that routine maintenance is performed from 04:00 to 05:00.
    // 
    // >  For more information about maintenance windows, see [Configure a maintenance window](https://help.aliyun.com/document_detail/122569.html).
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The mode of the cluster. Valid values:
    // 
    // *   **flexible**: elastic mode.
    // *   **reserver**: reserved mode.
    // 
    // >  For more information about cluster modes, see [Editions](https://help.aliyun.com/document_detail/205001.html).
    std::shared_ptr<string> mode_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // The port number that is used to connect to the cluster.
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> productForm_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **BasicVersion**: Basic Edition.
    // *   **EnterpriseVersion**: Enterprise Edition.
    std::shared_ptr<string> productVersion_ = nullptr;
    // The ID of the ApsaraDB RDS instance from which data is synchronized to the cluster. This parameter is returned only for MySQL analytic instances.
    std::shared_ptr<string> rdsInstanceId_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the secondary vSwitch.
    // 
    // >  You cannot set this parameter to a value that is the same as that of the VSwitchId parameter.
    std::shared_ptr<string> secondaryVSwitchId_ = nullptr;
    // The ID of the secondary zone.
    // 
    // >  You cannot set this parameter to a value that is the same as that of the ZoneId parameter.
    std::shared_ptr<string> secondaryZoneId_ = nullptr;
    // The specifications of storage resources that are used in the cluster in elastic mode. Storage resources are used to read and write data. The increase in the storage resources can improve the read and write performance of the cluster.
    std::shared_ptr<string> storageResource_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags> tags_ = nullptr;
    // The job information.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo> taskInfo_ = nullptr;
    // Indicates whether Elastic Network Interface (ENI) is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> userENIStatus_ = nullptr;
    // The ID of the cluster that resides in the VPC.
    std::shared_ptr<string> VPCCloudInstanceId_ = nullptr;
    // The VPC ID of the cluster.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the cluster.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
