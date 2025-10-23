// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyDataClusterInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ListInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBackup, autoBackup_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OpenPublicNet, openPublicNet_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(SgId, sgId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBackup, autoBackup_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OpenPublicNet, openPublicNet_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(SgId, sgId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData(ListInstancesResponseBodyData &&) = default ;
    ListInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData& operator=(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData& operator=(ListInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBackup_ == nullptr
        && return this->beginTime_ == nullptr && return this->clusterInfo_ == nullptr && return this->clusterName_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceStatus_ == nullptr && return this->nodeType_ == nullptr && return this->openPublicNet_ == nullptr && return this->packageType_ == nullptr && return this->payType_ == nullptr
        && return this->productCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->runningTime_ == nullptr && return this->sgId_ == nullptr
        && return this->tags_ == nullptr && return this->vpcId_ == nullptr && return this->vswId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoBackup Field Functions 
    bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
    void deleteAutoBackup() { this->autoBackup_ = nullptr;};
    inline bool autoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
    inline ListInstancesResponseBodyData& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListInstancesResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline const Models::ListInstancesResponseBodyDataClusterInfo & clusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Models::ListInstancesResponseBodyDataClusterInfo) };
    inline Models::ListInstancesResponseBodyDataClusterInfo clusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Models::ListInstancesResponseBodyDataClusterInfo) };
    inline ListInstancesResponseBodyData& setClusterInfo(const Models::ListInstancesResponseBodyDataClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
    inline ListInstancesResponseBodyData& setClusterInfo(Models::ListInstancesResponseBodyDataClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListInstancesResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListInstancesResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListInstancesResponseBodyData& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListInstancesResponseBodyData& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // openPublicNet Field Functions 
    bool hasOpenPublicNet() const { return this->openPublicNet_ != nullptr;};
    void deleteOpenPublicNet() { this->openPublicNet_ = nullptr;};
    inline bool openPublicNet() const { DARABONBA_PTR_GET_DEFAULT(openPublicNet_, false) };
    inline ListInstancesResponseBodyData& setOpenPublicNet(bool openPublicNet) { DARABONBA_PTR_SET_VALUE(openPublicNet_, openPublicNet) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline ListInstancesResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline ListInstancesResponseBodyData& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListInstancesResponseBodyData& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int32_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0) };
    inline ListInstancesResponseBodyData& setRunningTime(int32_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline ListInstancesResponseBodyData& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyDataTags>) };
    inline vector<Models::ListInstancesResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyDataTags>) };
    inline ListInstancesResponseBodyData& setTags(const vector<Models::ListInstancesResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyData& setTags(vector<Models::ListInstancesResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstancesResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline ListInstancesResponseBodyData& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListInstancesResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> autoBackup_ = nullptr;
    // The start time.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The instance details.
    std::shared_ptr<Models::ListInstancesResponseBodyDataClusterInfo> clusterInfo_ = nullptr;
    // The instance name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The expiration time.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the bastion host. Valid values:
    // 
    // *   creating.
    // *   running.
    // *   updating. Cluster scaling (up/down), configuration changes, and enabling/disabling public network access.
    // *   disable. The cluster has expired and needs to be renewed for activation.
    // *   deleting.
    // *   deleted.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    // Indicates whether Internet access is enabled.
    std::shared_ptr<bool> openPublicNet_ = nullptr;
    // The specification details. Valid values:
    // 
    // *   trial.
    // *   standard.
    std::shared_ptr<string> packageType_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   0: pay-as-you-go
    // *   1: subscription
    std::shared_ptr<int32_t> payType_ = nullptr;
    // The commodity code.
    std::shared_ptr<string> productCode_ = nullptr;
    // The region code.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The runtime.
    std::shared_ptr<int32_t> runningTime_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> sgId_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesResponseBodyDataTags>> tags_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswId_ = nullptr;
    // The zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
