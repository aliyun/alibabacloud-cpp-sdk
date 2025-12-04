// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodeGroupsResponseBodyDataNodeInfo.hpp>
#include <alibabacloud/models/DescribeNodeGroupsResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeNodeGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(DefaultGroup, defaultGroup_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskNumber, diskNumber_);
      DARABONBA_PTR_TO_JSON(ElasticNodeNumber, elasticNodeNumber_);
      DARABONBA_PTR_TO_JSON(EnablePublicNetwork, enablePublicNetwork_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LocalStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_TO_JSON(MemoryCpuRatio, memoryCpuRatio_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PublicAddress, publicAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResidentNodeNumber, residentNodeNumber_);
      DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetElasticNodeNumber, targetElasticNodeNumber_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(DefaultGroup, defaultGroup_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskNumber, diskNumber_);
      DARABONBA_PTR_FROM_JSON(ElasticNodeNumber, elasticNodeNumber_);
      DARABONBA_PTR_FROM_JSON(EnablePublicNetwork, enablePublicNetwork_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LocalStorageInstanceType, localStorageInstanceType_);
      DARABONBA_PTR_FROM_JSON(MemoryCpuRatio, memoryCpuRatio_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PublicAddress, publicAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResidentNodeNumber, residentNodeNumber_);
      DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetElasticNodeNumber, targetElasticNodeNumber_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeNodeGroupsResponseBodyData() = default ;
    DescribeNodeGroupsResponseBodyData(const DescribeNodeGroupsResponseBodyData &) = default ;
    DescribeNodeGroupsResponseBodyData(DescribeNodeGroupsResponseBodyData &&) = default ;
    DescribeNodeGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupsResponseBodyData() = default ;
    DescribeNodeGroupsResponseBodyData& operator=(const DescribeNodeGroupsResponseBodyData &) = default ;
    DescribeNodeGroupsResponseBodyData& operator=(DescribeNodeGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && return this->architecture_ == nullptr && return this->beginTime_ == nullptr && return this->billingInstanceId_ == nullptr && return this->commodityCode_ == nullptr && return this->componentType_ == nullptr
        && return this->cu_ == nullptr && return this->defaultGroup_ == nullptr && return this->description_ == nullptr && return this->diskNumber_ == nullptr && return this->elasticNodeNumber_ == nullptr
        && return this->enablePublicNetwork_ == nullptr && return this->endpoint_ == nullptr && return this->expireTime_ == nullptr && return this->httpPort_ == nullptr && return this->instanceId_ == nullptr
        && return this->localStorageInstanceType_ == nullptr && return this->memoryCpuRatio_ == nullptr && return this->nodeGroupId_ == nullptr && return this->nodeGroupName_ == nullptr && return this->nodeInfo_ == nullptr
        && return this->payType_ == nullptr && return this->publicAddress_ == nullptr && return this->regionId_ == nullptr && return this->residentNodeNumber_ == nullptr && return this->runningTime_ == nullptr
        && return this->specType_ == nullptr && return this->status_ == nullptr && return this->storagePerformanceLevel_ == nullptr && return this->storageSize_ == nullptr && return this->tags_ == nullptr
        && return this->targetElasticNodeNumber_ == nullptr && return this->zoneId_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeNodeGroupsResponseBodyData& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeNodeGroupsResponseBodyData& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeNodeGroupsResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // billingInstanceId Field Functions 
    bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
    void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
    inline string billingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
    inline DescribeNodeGroupsResponseBodyData& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeNodeGroupsResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeNodeGroupsResponseBodyData& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // defaultGroup Field Functions 
    bool hasDefaultGroup() const { return this->defaultGroup_ != nullptr;};
    void deleteDefaultGroup() { this->defaultGroup_ = nullptr;};
    inline bool defaultGroup() const { DARABONBA_PTR_GET_DEFAULT(defaultGroup_, false) };
    inline DescribeNodeGroupsResponseBodyData& setDefaultGroup(bool defaultGroup) { DARABONBA_PTR_SET_VALUE(defaultGroup_, defaultGroup) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNodeGroupsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskNumber Field Functions 
    bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
    void deleteDiskNumber() { this->diskNumber_ = nullptr;};
    inline int32_t diskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


    // elasticNodeNumber Field Functions 
    bool hasElasticNodeNumber() const { return this->elasticNodeNumber_ != nullptr;};
    void deleteElasticNodeNumber() { this->elasticNodeNumber_ = nullptr;};
    inline int32_t elasticNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeNumber_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setElasticNodeNumber(int32_t elasticNodeNumber) { DARABONBA_PTR_SET_VALUE(elasticNodeNumber_, elasticNodeNumber) };


    // enablePublicNetwork Field Functions 
    bool hasEnablePublicNetwork() const { return this->enablePublicNetwork_ != nullptr;};
    void deleteEnablePublicNetwork() { this->enablePublicNetwork_ = nullptr;};
    inline bool enablePublicNetwork() const { DARABONBA_PTR_GET_DEFAULT(enablePublicNetwork_, false) };
    inline DescribeNodeGroupsResponseBodyData& setEnablePublicNetwork(bool enablePublicNetwork) { DARABONBA_PTR_SET_VALUE(enablePublicNetwork_, enablePublicNetwork) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeNodeGroupsResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeNodeGroupsResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNodeGroupsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // localStorageInstanceType Field Functions 
    bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
    void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
    inline string localStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
    inline DescribeNodeGroupsResponseBodyData& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


    // memoryCpuRatio Field Functions 
    bool hasMemoryCpuRatio() const { return this->memoryCpuRatio_ != nullptr;};
    void deleteMemoryCpuRatio() { this->memoryCpuRatio_ = nullptr;};
    inline int32_t memoryCpuRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryCpuRatio_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setMemoryCpuRatio(int32_t memoryCpuRatio) { DARABONBA_PTR_SET_VALUE(memoryCpuRatio_, memoryCpuRatio) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeNodeGroupsResponseBodyData& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline DescribeNodeGroupsResponseBodyData& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo> & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo>) };
    inline vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo> nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo>) };
    inline DescribeNodeGroupsResponseBodyData& setNodeInfo(const vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline DescribeNodeGroupsResponseBodyData& setNodeInfo(vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeNodeGroupsResponseBodyData& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // publicAddress Field Functions 
    bool hasPublicAddress() const { return this->publicAddress_ != nullptr;};
    void deletePublicAddress() { this->publicAddress_ = nullptr;};
    inline string publicAddress() const { DARABONBA_PTR_GET_DEFAULT(publicAddress_, "") };
    inline DescribeNodeGroupsResponseBodyData& setPublicAddress(string publicAddress) { DARABONBA_PTR_SET_VALUE(publicAddress_, publicAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNodeGroupsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // residentNodeNumber Field Functions 
    bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
    void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
    inline int32_t residentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline DescribeNodeGroupsResponseBodyData& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline DescribeNodeGroupsResponseBodyData& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNodeGroupsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storagePerformanceLevel Field Functions 
    bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
    void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
    inline string storagePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
    inline DescribeNodeGroupsResponseBodyData& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeNodeGroupsResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeNodeGroupsResponseBodyDataTags>) };
    inline vector<Models::DescribeNodeGroupsResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeNodeGroupsResponseBodyDataTags>) };
    inline DescribeNodeGroupsResponseBodyData& setTags(const vector<Models::DescribeNodeGroupsResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNodeGroupsResponseBodyData& setTags(vector<Models::DescribeNodeGroupsResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetElasticNodeNumber Field Functions 
    bool hasTargetElasticNodeNumber() const { return this->targetElasticNodeNumber_ != nullptr;};
    void deleteTargetElasticNodeNumber() { this->targetElasticNodeNumber_ = nullptr;};
    inline int32_t targetElasticNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(targetElasticNodeNumber_, 0) };
    inline DescribeNodeGroupsResponseBodyData& setTargetElasticNodeNumber(int32_t targetElasticNodeNumber) { DARABONBA_PTR_SET_VALUE(targetElasticNodeNumber_, targetElasticNodeNumber) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeNodeGroupsResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> accountStatus_ = nullptr;
    std::shared_ptr<string> architecture_ = nullptr;
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<string> billingInstanceId_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<int32_t> cu_ = nullptr;
    std::shared_ptr<bool> defaultGroup_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diskNumber_ = nullptr;
    std::shared_ptr<int32_t> elasticNodeNumber_ = nullptr;
    std::shared_ptr<bool> enablePublicNetwork_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> localStorageInstanceType_ = nullptr;
    std::shared_ptr<int32_t> memoryCpuRatio_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNodeGroupsResponseBodyDataNodeInfo>> nodeInfo_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> publicAddress_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> residentNodeNumber_ = nullptr;
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    std::shared_ptr<string> specType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storagePerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNodeGroupsResponseBodyDataTags>> tags_ = nullptr;
    std::shared_ptr<int32_t> targetElasticNodeNumber_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
