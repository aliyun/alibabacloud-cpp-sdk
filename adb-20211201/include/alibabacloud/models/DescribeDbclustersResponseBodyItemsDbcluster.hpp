// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterTags.hpp>
#include <alibabacloud/models/DescribeDBClustersResponseBodyItemsDBClusterTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeNumber, AINodeNumber_);
      DARABONBA_PTR_TO_JSON(AINodeSpec, AINodeSpec_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(InnerPort, innerPort_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeNumber, AINodeNumber_);
      DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(InnerPort, innerPort_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(const DescribeDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(DescribeDBClustersResponseBodyItemsDBCluster &&) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBCluster() = default ;
    DescribeDBClustersResponseBodyItemsDBCluster& operator=(const DescribeDBClustersResponseBodyItemsDBCluster &) = default ;
    DescribeDBClustersResponseBodyItemsDBCluster& operator=(DescribeDBClustersResponseBodyItemsDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodeNumber_ != nullptr
        && this->AINodeSpec_ != nullptr && this->category_ != nullptr && this->commodityCode_ != nullptr && this->computeResource_ != nullptr && this->connectionString_ != nullptr
        && this->createTime_ != nullptr && this->DBClusterDescription_ != nullptr && this->DBClusterId_ != nullptr && this->DBClusterNetworkType_ != nullptr && this->DBClusterStatus_ != nullptr
        && this->DBClusterType_ != nullptr && this->DBNodeClass_ != nullptr && this->DBNodeCount_ != nullptr && this->DBNodeStorage_ != nullptr && this->DBVersion_ != nullptr
        && this->diskType_ != nullptr && this->dtsJobId_ != nullptr && this->elasticIOResource_ != nullptr && this->engine_ != nullptr && this->executorCount_ != nullptr
        && this->expireTime_ != nullptr && this->expired_ != nullptr && this->innerIp_ != nullptr && this->innerPort_ != nullptr && this->lockMode_ != nullptr
        && this->lockReason_ != nullptr && this->mode_ != nullptr && this->payType_ != nullptr && this->port_ != nullptr && this->productForm_ != nullptr
        && this->productVersion_ != nullptr && this->rdsInstanceId_ != nullptr && this->regionId_ != nullptr && this->reservedACU_ != nullptr && this->reservedNodeCount_ != nullptr
        && this->reservedNodeSize_ != nullptr && this->resourceGroupId_ != nullptr && this->storageResource_ != nullptr && this->tags_ != nullptr && this->taskInfo_ != nullptr
        && this->VPCCloudInstanceId_ != nullptr && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // AINodeNumber Field Functions 
    bool hasAINodeNumber() const { return this->AINodeNumber_ != nullptr;};
    void deleteAINodeNumber() { this->AINodeNumber_ = nullptr;};
    inline int32_t AINodeNumber() const { DARABONBA_PTR_GET_DEFAULT(AINodeNumber_, 0) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setAINodeNumber(int32_t AINodeNumber) { DARABONBA_PTR_SET_VALUE(AINodeNumber_, AINodeNumber) };


    // AINodeSpec Field Functions 
    bool hasAINodeSpec() const { return this->AINodeSpec_ != nullptr;};
    void deleteAINodeSpec() { this->AINodeSpec_ = nullptr;};
    inline string AINodeSpec() const { DARABONBA_PTR_GET_DEFAULT(AINodeSpec_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setAINodeSpec(string AINodeSpec) { DARABONBA_PTR_SET_VALUE(AINodeSpec_, AINodeSpec) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBClusterType Field Functions 
    bool hasDBClusterType() const { return this->DBClusterType_ != nullptr;};
    void deleteDBClusterType() { this->DBClusterType_ = nullptr;};
    inline string DBClusterType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBClusterType(string DBClusterType) { DARABONBA_PTR_SET_VALUE(DBClusterType_, DBClusterType) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int64_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline int64_t DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // elasticIOResource Field Functions 
    bool hasElasticIOResource() const { return this->elasticIOResource_ != nullptr;};
    void deleteElasticIOResource() { this->elasticIOResource_ = nullptr;};
    inline int32_t elasticIOResource() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResource_, 0) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setElasticIOResource(int32_t elasticIOResource) { DARABONBA_PTR_SET_VALUE(elasticIOResource_, elasticIOResource) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // executorCount Field Functions 
    bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
    void deleteExecutorCount() { this->executorCount_ = nullptr;};
    inline string executorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setExecutorCount(string executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string innerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


    // innerPort Field Functions 
    bool hasInnerPort() const { return this->innerPort_ != nullptr;};
    void deleteInnerPort() { this->innerPort_ = nullptr;};
    inline string innerPort() const { DARABONBA_PTR_GET_DEFAULT(innerPort_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setInnerPort(string innerPort) { DARABONBA_PTR_SET_VALUE(innerPort_, innerPort) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // productForm Field Functions 
    bool hasProductForm() const { return this->productForm_ != nullptr;};
    void deleteProductForm() { this->productForm_ = nullptr;};
    inline string productForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // rdsInstanceId Field Functions 
    bool hasRdsInstanceId() const { return this->rdsInstanceId_ != nullptr;};
    void deleteRdsInstanceId() { this->rdsInstanceId_ = nullptr;};
    inline string rdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(rdsInstanceId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setRdsInstanceId(string rdsInstanceId) { DARABONBA_PTR_SET_VALUE(rdsInstanceId_, rdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedACU Field Functions 
    bool hasReservedACU() const { return this->reservedACU_ != nullptr;};
    void deleteReservedACU() { this->reservedACU_ = nullptr;};
    inline string reservedACU() const { DARABONBA_PTR_GET_DEFAULT(reservedACU_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setReservedACU(string reservedACU) { DARABONBA_PTR_SET_VALUE(reservedACU_, reservedACU) };


    // reservedNodeCount Field Functions 
    bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
    void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
    inline int32_t reservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


    // reservedNodeSize Field Functions 
    bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
    void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
    inline string reservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyItemsDBClusterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDBClustersResponseBodyItemsDBClusterTags) };
    inline Models::DescribeDBClustersResponseBodyItemsDBClusterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDBClustersResponseBodyItemsDBClusterTags) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTags(const Models::DescribeDBClustersResponseBodyItemsDBClusterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTags(Models::DescribeDBClustersResponseBodyItemsDBClusterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo) };
    inline Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTaskInfo(const Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setTaskInfo(Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // VPCCloudInstanceId Field Functions 
    bool hasVPCCloudInstanceId() const { return this->VPCCloudInstanceId_ != nullptr;};
    void deleteVPCCloudInstanceId() { this->VPCCloudInstanceId_ = nullptr;};
    inline string VPCCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(VPCCloudInstanceId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setVPCCloudInstanceId(string VPCCloudInstanceId) { DARABONBA_PTR_SET_VALUE(VPCCloudInstanceId_, VPCCloudInstanceId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<int32_t> AINodeNumber_ = nullptr;
    std::shared_ptr<string> AINodeSpec_ = nullptr;
    // The mode of the cluster. This parameter is returned only for Data Warehouse Edition clusters. Valid values:
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
    // The specifications of reserved computing resources. Each ACU is approximately equal to 1 core and 4 GB memory. Computing resources are used to compute data. The increase in the computing resources can accelerate queries. You can scale computing resources based on your business requirements.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The public endpoint that is used to connect to the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the *yyyy-mm-ddThh:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster. Only **VPC** is supported.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **Preparing**
    // *   **Creating**
    // *   **Running**
    // *   **Deleting**
    // *   **Restoring**
    // *   **ClassChanging**
    // *   **NetAddressCreating**
    // *   **NetAddressDeleting**
    // *   **NetAddressModifying**
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The type of the cluster. By default, **Common** is returned, which indicates a common cluster.
    std::shared_ptr<string> DBClusterType_ = nullptr;
    // The node specifications of the cluster. This parameter is returned only for Data Warehouse Edition clusters.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of node groups.
    std::shared_ptr<int64_t> DBNodeCount_ = nullptr;
    // The storage capacity of the cluster. Unit: GB.
    std::shared_ptr<int64_t> DBNodeStorage_ = nullptr;
    // The version number corresponding to the edition of the cluster. Only **5.0** is supported.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The disk type of the cluster. Valid values:
    // 
    // *   **local_ssd**: local disk.
    // *   **cloud**: basic disk.
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_efficiency**: ultra disk.
    // *   **cloud_essd**: PL1 Enterprise SSD (ESSD).
    // *   **cloud_essd2**: PL2 ESSD.
    // *   **cloud_essd3**: PL3 ESSD.
    // 
    // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the Data Transmission Service (DTS) synchronization job This parameter is returned only for MySQL analytic instances.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The number of elastic I/O units (EIUs). For more information, see the "[EIUs](https://help.aliyun.com/document_detail/189505.html)" section of the Scale out elastic I/O resources topic.
    // 
    // >  This parameter is returned only for clusters in elastic mode.
    std::shared_ptr<int32_t> elasticIOResource_ = nullptr;
    // The engine of the cluster. **AnalyticDB** is returned.
    std::shared_ptr<string> engine_ = nullptr;
    // The number of compute nodes that are used by the cluster in elastic mode.
    std::shared_ptr<string> executorCount_ = nullptr;
    // The time when the cluster expires. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    // 
    // > 
    // 
    // *   If the billing method of the cluster is subscription, the actual expiration time is returned.
    // 
    // *   If the billing method of the cluster is pay-as-you-go, null is returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the subscription cluster has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > 
    // 
    // *   If the cluster has expired, the system locks or releases the cluster within a period of time. We recommend that you renew the expired cluster. For more information, see [Renewal policy](https://help.aliyun.com/document_detail/135246.html).
    // 
    // *   This parameter is not returned for pay-as-you-go clusters.
    std::shared_ptr<string> expired_ = nullptr;
    // The internal IP address of the cluster.
    std::shared_ptr<string> innerIp_ = nullptr;
    // The internal port of the cluster.
    std::shared_ptr<string> innerPort_ = nullptr;
    // The lock status of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the cluster is locked.
    // 
    // >  This parameter is returned only when the cluster was locked. **instance_expire** is returned.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The mode of the cluster. By default, **flexible** is returned, which indicates that the cluster is in elastic mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // The port number that is used to connect to the cluster.
    std::shared_ptr<string> port_ = nullptr;
    // The service type of the cluster. Valid values:
    // 
    // *   **LegacyForm**
    // *   **IntegrationForm**
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
    // The remaining reserved computing resources that are available in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
    std::shared_ptr<string> reservedACU_ = nullptr;
    // The number of reserved resource nodes.
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    // The single-node specifications of reserved resources.
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The specifications of reserved storage resources. Each AnalyticDB compute unit (ACU) is approximately equal to 1 core and 4 GB memory. Storage resources are used to read and write data. The increase in the storage resources can improve the read and write performance of the cluster.
    std::shared_ptr<string> storageResource_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyItemsDBClusterTags> tags_ = nullptr;
    // The information about the job.
    std::shared_ptr<Models::DescribeDBClustersResponseBodyItemsDBClusterTaskInfo> taskInfo_ = nullptr;
    // The VPC endpoint.
    std::shared_ptr<string> VPCCloudInstanceId_ = nullptr;
    // The virtual private cloud (VPC) ID of the cluster.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the cluster.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
