// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyDBInstancesNodes.hpp>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyDBInstancesTagSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstancesResponseBodyDBInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyDBInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CdcInstanceName, cdcInstanceName_);
      DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_TO_JSON(ColumnarInstanceName, columnarInstanceName_);
      DARABONBA_PTR_TO_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ContainBinlogX, containBinlogX_);
      DARABONBA_PTR_TO_JSON(CpuType, cpuType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryInstanceId, primaryInstanceId_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(ReadDBInstances, readDBInstances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(SupportBinlogX, supportBinlogX_);
      DARABONBA_PTR_TO_JSON(TagSet, tagSet_);
      DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(gdnRole, gdnRole_);
      DARABONBA_PTR_TO_JSON(isInGdn, isInGdn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyDBInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CdcInstanceName, cdcInstanceName_);
      DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_FROM_JSON(ColumnarInstanceName, columnarInstanceName_);
      DARABONBA_PTR_FROM_JSON(ColumnarReadDBInstances, columnarReadDBInstances_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ContainBinlogX, containBinlogX_);
      DARABONBA_PTR_FROM_JSON(CpuType, cpuType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryInstanceId, primaryInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(ReadDBInstances, readDBInstances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(SupportBinlogX, supportBinlogX_);
      DARABONBA_PTR_FROM_JSON(TagSet, tagSet_);
      DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(gdnRole, gdnRole_);
      DARABONBA_PTR_FROM_JSON(isInGdn, isInGdn_);
    };
    DescribeDBInstancesResponseBodyDBInstances() = default ;
    DescribeDBInstancesResponseBodyDBInstances(const DescribeDBInstancesResponseBodyDBInstances &) = default ;
    DescribeDBInstancesResponseBodyDBInstances(DescribeDBInstancesResponseBodyDBInstances &&) = default ;
    DescribeDBInstancesResponseBodyDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyDBInstances() = default ;
    DescribeDBInstancesResponseBodyDBInstances& operator=(const DescribeDBInstancesResponseBodyDBInstances &) = default ;
    DescribeDBInstancesResponseBodyDBInstances& operator=(DescribeDBInstancesResponseBodyDBInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdcInstanceName_ == nullptr
        && return this->cnNodeClassCode_ == nullptr && return this->cnNodeCount_ == nullptr && return this->columnarInstanceName_ == nullptr && return this->columnarReadDBInstances_ == nullptr && return this->commodityCode_ == nullptr
        && return this->containBinlogX_ == nullptr && return this->cpuType_ == nullptr && return this->createTime_ == nullptr && return this->DBInstanceName_ == nullptr && return this->DBType_ == nullptr
        && return this->DBVersion_ == nullptr && return this->description_ == nullptr && return this->dnNodeClassCode_ == nullptr && return this->dnNodeCount_ == nullptr && return this->engine_ == nullptr
        && return this->expireTime_ == nullptr && return this->expired_ == nullptr && return this->id_ == nullptr && return this->lockMode_ == nullptr && return this->lockReason_ == nullptr
        && return this->minorVersion_ == nullptr && return this->network_ == nullptr && return this->nodeClass_ == nullptr && return this->nodeCount_ == nullptr && return this->nodes_ == nullptr
        && return this->payType_ == nullptr && return this->primaryInstanceId_ == nullptr && return this->primaryZone_ == nullptr && return this->readDBInstances_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->secondaryZone_ == nullptr && return this->series_ == nullptr && return this->status_ == nullptr && return this->storageType_ == nullptr
        && return this->storageUsed_ == nullptr && return this->supportBinlogX_ == nullptr && return this->tagSet_ == nullptr && return this->tertiaryZone_ == nullptr && return this->topologyType_ == nullptr
        && return this->type_ == nullptr && return this->VPCId_ == nullptr && return this->zoneId_ == nullptr && return this->gdnRole_ == nullptr && return this->isInGdn_ == nullptr; };
    // cdcInstanceName Field Functions 
    bool hasCdcInstanceName() const { return this->cdcInstanceName_ != nullptr;};
    void deleteCdcInstanceName() { this->cdcInstanceName_ = nullptr;};
    inline string cdcInstanceName() const { DARABONBA_PTR_GET_DEFAULT(cdcInstanceName_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setCdcInstanceName(string cdcInstanceName) { DARABONBA_PTR_SET_VALUE(cdcInstanceName_, cdcInstanceName) };


    // cnNodeClassCode Field Functions 
    bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
    void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
    inline string cnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


    // cnNodeCount Field Functions 
    bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
    void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
    inline int32_t cnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, 0) };
    inline DescribeDBInstancesResponseBodyDBInstances& setCnNodeCount(int32_t cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


    // columnarInstanceName Field Functions 
    bool hasColumnarInstanceName() const { return this->columnarInstanceName_ != nullptr;};
    void deleteColumnarInstanceName() { this->columnarInstanceName_ = nullptr;};
    inline string columnarInstanceName() const { DARABONBA_PTR_GET_DEFAULT(columnarInstanceName_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setColumnarInstanceName(string columnarInstanceName) { DARABONBA_PTR_SET_VALUE(columnarInstanceName_, columnarInstanceName) };


    // columnarReadDBInstances Field Functions 
    bool hasColumnarReadDBInstances() const { return this->columnarReadDBInstances_ != nullptr;};
    void deleteColumnarReadDBInstances() { this->columnarReadDBInstances_ = nullptr;};
    inline const vector<string> & columnarReadDBInstances() const { DARABONBA_PTR_GET_CONST(columnarReadDBInstances_, vector<string>) };
    inline vector<string> columnarReadDBInstances() { DARABONBA_PTR_GET(columnarReadDBInstances_, vector<string>) };
    inline DescribeDBInstancesResponseBodyDBInstances& setColumnarReadDBInstances(const vector<string> & columnarReadDBInstances) { DARABONBA_PTR_SET_VALUE(columnarReadDBInstances_, columnarReadDBInstances) };
    inline DescribeDBInstancesResponseBodyDBInstances& setColumnarReadDBInstances(vector<string> && columnarReadDBInstances) { DARABONBA_PTR_SET_RVALUE(columnarReadDBInstances_, columnarReadDBInstances) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // containBinlogX Field Functions 
    bool hasContainBinlogX() const { return this->containBinlogX_ != nullptr;};
    void deleteContainBinlogX() { this->containBinlogX_ = nullptr;};
    inline bool containBinlogX() const { DARABONBA_PTR_GET_DEFAULT(containBinlogX_, false) };
    inline DescribeDBInstancesResponseBodyDBInstances& setContainBinlogX(bool containBinlogX) { DARABONBA_PTR_SET_VALUE(containBinlogX_, containBinlogX) };


    // cpuType Field Functions 
    bool hasCpuType() const { return this->cpuType_ != nullptr;};
    void deleteCpuType() { this->cpuType_ = nullptr;};
    inline string cpuType() const { DARABONBA_PTR_GET_DEFAULT(cpuType_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setCpuType(string cpuType) { DARABONBA_PTR_SET_VALUE(cpuType_, cpuType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnNodeClassCode Field Functions 
    bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
    void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
    inline string dnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


    // dnNodeCount Field Functions 
    bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
    void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
    inline int32_t dnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, 0) };
    inline DescribeDBInstancesResponseBodyDBInstances& setDnNodeCount(int32_t dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeDBInstancesResponseBodyDBInstances& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string nodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline DescribeDBInstancesResponseBodyDBInstances& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes>) };
    inline vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes>) };
    inline DescribeDBInstancesResponseBodyDBInstances& setNodes(const vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeDBInstancesResponseBodyDBInstances& setNodes(vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryInstanceId Field Functions 
    bool hasPrimaryInstanceId() const { return this->primaryInstanceId_ != nullptr;};
    void deletePrimaryInstanceId() { this->primaryInstanceId_ = nullptr;};
    inline string primaryInstanceId() const { DARABONBA_PTR_GET_DEFAULT(primaryInstanceId_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setPrimaryInstanceId(string primaryInstanceId) { DARABONBA_PTR_SET_VALUE(primaryInstanceId_, primaryInstanceId) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // readDBInstances Field Functions 
    bool hasReadDBInstances() const { return this->readDBInstances_ != nullptr;};
    void deleteReadDBInstances() { this->readDBInstances_ = nullptr;};
    inline const vector<string> & readDBInstances() const { DARABONBA_PTR_GET_CONST(readDBInstances_, vector<string>) };
    inline vector<string> readDBInstances() { DARABONBA_PTR_GET(readDBInstances_, vector<string>) };
    inline DescribeDBInstancesResponseBodyDBInstances& setReadDBInstances(const vector<string> & readDBInstances) { DARABONBA_PTR_SET_VALUE(readDBInstances_, readDBInstances) };
    inline DescribeDBInstancesResponseBodyDBInstances& setReadDBInstances(vector<string> && readDBInstances) { DARABONBA_PTR_SET_RVALUE(readDBInstances_, readDBInstances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string secondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline DescribeDBInstancesResponseBodyDBInstances& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // supportBinlogX Field Functions 
    bool hasSupportBinlogX() const { return this->supportBinlogX_ != nullptr;};
    void deleteSupportBinlogX() { this->supportBinlogX_ = nullptr;};
    inline bool supportBinlogX() const { DARABONBA_PTR_GET_DEFAULT(supportBinlogX_, false) };
    inline DescribeDBInstancesResponseBodyDBInstances& setSupportBinlogX(bool supportBinlogX) { DARABONBA_PTR_SET_VALUE(supportBinlogX_, supportBinlogX) };


    // tagSet Field Functions 
    bool hasTagSet() const { return this->tagSet_ != nullptr;};
    void deleteTagSet() { this->tagSet_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet> & tagSet() const { DARABONBA_PTR_GET_CONST(tagSet_, vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet>) };
    inline vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet> tagSet() { DARABONBA_PTR_GET(tagSet_, vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet>) };
    inline DescribeDBInstancesResponseBodyDBInstances& setTagSet(const vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet> & tagSet) { DARABONBA_PTR_SET_VALUE(tagSet_, tagSet) };
    inline DescribeDBInstancesResponseBodyDBInstances& setTagSet(vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet> && tagSet) { DARABONBA_PTR_SET_RVALUE(tagSet_, tagSet) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string tertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // gdnRole Field Functions 
    bool hasGdnRole() const { return this->gdnRole_ != nullptr;};
    void deleteGdnRole() { this->gdnRole_ = nullptr;};
    inline string gdnRole() const { DARABONBA_PTR_GET_DEFAULT(gdnRole_, "") };
    inline DescribeDBInstancesResponseBodyDBInstances& setGdnRole(string gdnRole) { DARABONBA_PTR_SET_VALUE(gdnRole_, gdnRole) };


    // isInGdn Field Functions 
    bool hasIsInGdn() const { return this->isInGdn_ != nullptr;};
    void deleteIsInGdn() { this->isInGdn_ = nullptr;};
    inline bool isInGdn() const { DARABONBA_PTR_GET_DEFAULT(isInGdn_, false) };
    inline DescribeDBInstancesResponseBodyDBInstances& setIsInGdn(bool isInGdn) { DARABONBA_PTR_SET_VALUE(isInGdn_, isInGdn) };


  protected:
    std::shared_ptr<string> cdcInstanceName_ = nullptr;
    std::shared_ptr<string> cnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> cnNodeCount_ = nullptr;
    std::shared_ptr<string> columnarInstanceName_ = nullptr;
    std::shared_ptr<vector<string>> columnarReadDBInstances_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<bool> containBinlogX_ = nullptr;
    std::shared_ptr<string> cpuType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> dnNodeClassCode_ = nullptr;
    std::shared_ptr<int32_t> dnNodeCount_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<bool> expired_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> lockReason_ = nullptr;
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> nodeClass_ = nullptr;
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyDBInstancesNodes>> nodes_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> primaryInstanceId_ = nullptr;
    // 主可用区。
    // 
    // This parameter is required.
    std::shared_ptr<string> primaryZone_ = nullptr;
    std::shared_ptr<vector<string>> readDBInstances_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // 次可用区。
    std::shared_ptr<string> secondaryZone_ = nullptr;
    std::shared_ptr<string> series_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    std::shared_ptr<bool> supportBinlogX_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyDBInstancesTagSet>> tagSet_ = nullptr;
    // 第三可用区。
    std::shared_ptr<string> tertiaryZone_ = nullptr;
    // 拓扑类型：
    // 
    // - **3azones**：三可用区；
    // - **1azone**：单可用区。
    // 
    // This parameter is required.
    std::shared_ptr<string> topologyType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
    std::shared_ptr<string> gdnRole_ = nullptr;
    std::shared_ptr<bool> isInGdn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
