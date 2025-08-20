// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTags.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeNumber, AINodeNumber_);
      DARABONBA_PTR_TO_JSON(AINodeSpec, AINodeSpec_);
      DARABONBA_PTR_TO_JSON(ClickhouseEngineCacheSize, clickhouseEngineCacheSize_);
      DARABONBA_PTR_TO_JSON(ClickhouseEngineEnabled, clickhouseEngineEnabled_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(ComputeResourceTotal, computeResourceTotal_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(KmsId, kmsId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(StorageResourceTotal, storageResourceTotal_);
      DARABONBA_PTR_TO_JSON(SupportedFeatures, supportedFeatures_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(UserENIStatus, userENIStatus_);
      DARABONBA_PTR_TO_JSON(UserENIVSwitchOptions, userENIVSwitchOptions_);
      DARABONBA_PTR_TO_JSON(UserENIVpcId, userENIVpcId_);
      DARABONBA_PTR_TO_JSON(UserENIZoneOptions, userENIZoneOptions_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeNumber, AINodeNumber_);
      DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
      DARABONBA_PTR_FROM_JSON(ClickhouseEngineCacheSize, clickhouseEngineCacheSize_);
      DARABONBA_PTR_FROM_JSON(ClickhouseEngineEnabled, clickhouseEngineEnabled_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(ComputeResourceTotal, computeResourceTotal_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(KmsId, kmsId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(StorageResourceTotal, storageResourceTotal_);
      DARABONBA_PTR_FROM_JSON(SupportedFeatures, supportedFeatures_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(UserENIStatus, userENIStatus_);
      DARABONBA_PTR_FROM_JSON(UserENIVSwitchOptions, userENIVSwitchOptions_);
      DARABONBA_PTR_FROM_JSON(UserENIVpcId, userENIVpcId_);
      DARABONBA_PTR_FROM_JSON(UserENIZoneOptions, userENIZoneOptions_);
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
    virtual bool empty() const override { this->AINodeNumber_ != nullptr
        && this->AINodeSpec_ != nullptr && this->clickhouseEngineCacheSize_ != nullptr && this->clickhouseEngineEnabled_ != nullptr && this->commodityCode_ != nullptr && this->computeResource_ != nullptr
        && this->computeResourceTotal_ != nullptr && this->connectionString_ != nullptr && this->creationTime_ != nullptr && this->DBClusterDescription_ != nullptr && this->DBClusterId_ != nullptr
        && this->DBClusterNetworkType_ != nullptr && this->DBClusterStatus_ != nullptr && this->DBClusterType_ != nullptr && this->DBVersion_ != nullptr && this->diskEncryption_ != nullptr
        && this->engine_ != nullptr && this->engineVersion_ != nullptr && this->expireTime_ != nullptr && this->expired_ != nullptr && this->kmsId_ != nullptr
        && this->lockMode_ != nullptr && this->lockReason_ != nullptr && this->maintainTime_ != nullptr && this->mode_ != nullptr && this->payType_ != nullptr
        && this->port_ != nullptr && this->productForm_ != nullptr && this->productVersion_ != nullptr && this->regionId_ != nullptr && this->reservedACU_ != nullptr
        && this->reservedNodeCount_ != nullptr && this->reservedNodeSize_ != nullptr && this->resourceGroupId_ != nullptr && this->secondaryVSwitchId_ != nullptr && this->secondaryZoneId_ != nullptr
        && this->storageResource_ != nullptr && this->storageResourceTotal_ != nullptr && this->supportedFeatures_ != nullptr && this->tags_ != nullptr && this->taskInfo_ != nullptr
        && this->userENIStatus_ != nullptr && this->userENIVSwitchOptions_ != nullptr && this->userENIVpcId_ != nullptr && this->userENIZoneOptions_ != nullptr && this->VPCId_ != nullptr
        && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // AINodeNumber Field Functions 
    bool hasAINodeNumber() const { return this->AINodeNumber_ != nullptr;};
    void deleteAINodeNumber() { this->AINodeNumber_ = nullptr;};
    inline int32_t AINodeNumber() const { DARABONBA_PTR_GET_DEFAULT(AINodeNumber_, 0) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setAINodeNumber(int32_t AINodeNumber) { DARABONBA_PTR_SET_VALUE(AINodeNumber_, AINodeNumber) };


    // AINodeSpec Field Functions 
    bool hasAINodeSpec() const { return this->AINodeSpec_ != nullptr;};
    void deleteAINodeSpec() { this->AINodeSpec_ = nullptr;};
    inline string AINodeSpec() const { DARABONBA_PTR_GET_DEFAULT(AINodeSpec_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setAINodeSpec(string AINodeSpec) { DARABONBA_PTR_SET_VALUE(AINodeSpec_, AINodeSpec) };


    // clickhouseEngineCacheSize Field Functions 
    bool hasClickhouseEngineCacheSize() const { return this->clickhouseEngineCacheSize_ != nullptr;};
    void deleteClickhouseEngineCacheSize() { this->clickhouseEngineCacheSize_ = nullptr;};
    inline int32_t clickhouseEngineCacheSize() const { DARABONBA_PTR_GET_DEFAULT(clickhouseEngineCacheSize_, 0) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setClickhouseEngineCacheSize(int32_t clickhouseEngineCacheSize) { DARABONBA_PTR_SET_VALUE(clickhouseEngineCacheSize_, clickhouseEngineCacheSize) };


    // clickhouseEngineEnabled Field Functions 
    bool hasClickhouseEngineEnabled() const { return this->clickhouseEngineEnabled_ != nullptr;};
    void deleteClickhouseEngineEnabled() { this->clickhouseEngineEnabled_ = nullptr;};
    inline bool clickhouseEngineEnabled() const { DARABONBA_PTR_GET_DEFAULT(clickhouseEngineEnabled_, false) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setClickhouseEngineEnabled(bool clickhouseEngineEnabled) { DARABONBA_PTR_SET_VALUE(clickhouseEngineEnabled_, clickhouseEngineEnabled) };


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


    // computeResourceTotal Field Functions 
    bool hasComputeResourceTotal() const { return this->computeResourceTotal_ != nullptr;};
    void deleteComputeResourceTotal() { this->computeResourceTotal_ = nullptr;};
    inline string computeResourceTotal() const { DARABONBA_PTR_GET_DEFAULT(computeResourceTotal_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setComputeResourceTotal(string computeResourceTotal) { DARABONBA_PTR_SET_VALUE(computeResourceTotal_, computeResourceTotal) };


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


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedACU Field Functions 
    bool hasReservedACU() const { return this->reservedACU_ != nullptr;};
    void deleteReservedACU() { this->reservedACU_ = nullptr;};
    inline string reservedACU() const { DARABONBA_PTR_GET_DEFAULT(reservedACU_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setReservedACU(string reservedACU) { DARABONBA_PTR_SET_VALUE(reservedACU_, reservedACU) };


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


    // storageResourceTotal Field Functions 
    bool hasStorageResourceTotal() const { return this->storageResourceTotal_ != nullptr;};
    void deleteStorageResourceTotal() { this->storageResourceTotal_ = nullptr;};
    inline string storageResourceTotal() const { DARABONBA_PTR_GET_DEFAULT(storageResourceTotal_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setStorageResourceTotal(string storageResourceTotal) { DARABONBA_PTR_SET_VALUE(storageResourceTotal_, storageResourceTotal) };


    // supportedFeatures Field Functions 
    bool hasSupportedFeatures() const { return this->supportedFeatures_ != nullptr;};
    void deleteSupportedFeatures() { this->supportedFeatures_ = nullptr;};
    inline const map<string, string> & supportedFeatures() const { DARABONBA_PTR_GET_CONST(supportedFeatures_, map<string, string>) };
    inline map<string, string> supportedFeatures() { DARABONBA_PTR_GET(supportedFeatures_, map<string, string>) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setSupportedFeatures(const map<string, string> & supportedFeatures) { DARABONBA_PTR_SET_VALUE(supportedFeatures_, supportedFeatures) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setSupportedFeatures(map<string, string> && supportedFeatures) { DARABONBA_PTR_SET_RVALUE(supportedFeatures_, supportedFeatures) };


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


    // userENIVSwitchOptions Field Functions 
    bool hasUserENIVSwitchOptions() const { return this->userENIVSwitchOptions_ != nullptr;};
    void deleteUserENIVSwitchOptions() { this->userENIVSwitchOptions_ = nullptr;};
    inline string userENIVSwitchOptions() const { DARABONBA_PTR_GET_DEFAULT(userENIVSwitchOptions_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setUserENIVSwitchOptions(string userENIVSwitchOptions) { DARABONBA_PTR_SET_VALUE(userENIVSwitchOptions_, userENIVSwitchOptions) };


    // userENIVpcId Field Functions 
    bool hasUserENIVpcId() const { return this->userENIVpcId_ != nullptr;};
    void deleteUserENIVpcId() { this->userENIVpcId_ = nullptr;};
    inline string userENIVpcId() const { DARABONBA_PTR_GET_DEFAULT(userENIVpcId_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setUserENIVpcId(string userENIVpcId) { DARABONBA_PTR_SET_VALUE(userENIVpcId_, userENIVpcId) };


    // userENIZoneOptions Field Functions 
    bool hasUserENIZoneOptions() const { return this->userENIZoneOptions_ != nullptr;};
    void deleteUserENIZoneOptions() { this->userENIZoneOptions_ = nullptr;};
    inline string userENIZoneOptions() const { DARABONBA_PTR_GET_DEFAULT(userENIZoneOptions_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBCluster& setUserENIZoneOptions(string userENIZoneOptions) { DARABONBA_PTR_SET_VALUE(userENIZoneOptions_, userENIZoneOptions) };


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
    std::shared_ptr<int32_t> AINodeNumber_ = nullptr;
    std::shared_ptr<string> AINodeSpec_ = nullptr;
    // The cache size of the ClickHouse wide table engine. Unit: GB. If a value of -1 is returned, the ClickHouse wide table engine is disabled. If a value other than -1 is returned, this parameter indicates the disk cache size.
    std::shared_ptr<int32_t> clickhouseEngineCacheSize_ = nullptr;
    // Indicates whether the ClickHouse wide table engine is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> clickhouseEngineEnabled_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **ads**: pay-as-you-go.
    // *   **ads_pre**: subscription.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The specifications of reserved computing resources. Each ACU is approximately equal to 1 core and 4 GB memory. Computing resources are used to compute data. The increase in the computing resources can accelerate queries. You can scale computing resources based on your business requirements.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The total amount of computing resources in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
    std::shared_ptr<string> computeResourceTotal_ = nullptr;
    // The public endpoint that is used to connect to the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The time when the cluster was created. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The network type of the cluster. **VPC** is returned.
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
    // The engine version of the AnalyticDB for MySQL Data Lakehouse Edition cluster. **5.0** is returned.
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    // The engine of the cluster. **AnalyticDB** is returned.
    std::shared_ptr<string> engine_ = nullptr;
    // The minor version of the cluster.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the cluster expires.
    // 
    // *   If the billing method of the cluster is subscription, the actual expiration time is returned.
    // *   If the billing method of the cluster is pay-as-you-go, null is returned.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Indicates whether the subscription cluster has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > 
    // 
    // *   If the cluster has expired, the system locks or releases the cluster within a period of time. We recommend that you renew the expired cluster. For more information, see [Renewal policy](https://help.aliyun.com/document_detail/135248.html).
    // 
    // *   This parameter is not returned for pay-as-you-go clusters.
    std::shared_ptr<string> expired_ = nullptr;
    // The ID of the key that is used to encrypt disk data.
    // 
    // >  This parameter is returned only when disk encryption is enabled.
    std::shared_ptr<string> kmsId_ = nullptr;
    // The lock mode of the cluster. Valid values:
    // 
    // *   **Unlock**: The cluster is not locked.
    // *   **ManualLock**: The cluster is manually locked.
    // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The reason why the cluster is locked.
    // 
    // >  This parameter is returned only when the cluster was locked. **instance_expire** is returned.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maintenance window of the cluster. The time is displayed in the `HH:mmZ-HH:mmZ` format in UTC.
    // 
    // >  For more information about maintenance windows, see [Configure a maintenance window](https://help.aliyun.com/document_detail/122569.html).
    std::shared_ptr<string> maintainTime_ = nullptr;
    // The mode of the cluster. By default, **flexible** is returned, which indicates that the cluster is in elastic mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // The port number that is used to connect to the cluster.
    std::shared_ptr<int32_t> port_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> productForm_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **BasicVersion**: Basic Edition.
    // *   **EnterpriseVersion**: Enterprise Edition.
    std::shared_ptr<string> productVersion_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The amount of remaining reserved computing resources that are available in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
    std::shared_ptr<string> reservedACU_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> secondaryVSwitchId_ = nullptr;
    std::shared_ptr<string> secondaryZoneId_ = nullptr;
    // The specifications of reserved storage resources. Each AnalyticDB compute unit (ACU) is approximately equal to 1 core and 4 GB memory. Storage resources are used to read and write data. The increase in the storage resources can improve the read and write performance of the cluster.
    std::shared_ptr<string> storageResource_ = nullptr;
    // The total amount of storage resources in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
    std::shared_ptr<string> storageResourceTotal_ = nullptr;
    // Reserved parameters.
    std::shared_ptr<map<string, string>> supportedFeatures_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTags> tags_ = nullptr;
    // The job information.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo> taskInfo_ = nullptr;
    // Indicates whether Elastic Network Interface (ENI) is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> userENIStatus_ = nullptr;
    // The vSwitch connected to the ENI. Separate multiple vSwitches with commas (,).
    std::shared_ptr<string> userENIVSwitchOptions_ = nullptr;
    // The VPC information of the ENI.
    std::shared_ptr<string> userENIVpcId_ = nullptr;
    // The zone associated with the ENI. Separate multiple zones with commas (,).
    std::shared_ptr<string> userENIZoneOptions_ = nullptr;
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
