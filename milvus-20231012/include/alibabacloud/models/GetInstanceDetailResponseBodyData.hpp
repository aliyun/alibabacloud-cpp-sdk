// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceDetailResponseBodyDataClusterInfo.hpp>
#include <alibabacloud/models/GetInstanceDetailResponseBodyDataMeasureConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceDetailResponseBodyDataTags.hpp>
#include <alibabacloud/models/GetInstanceDetailResponseBodyDataVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class GetInstanceDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(EnableHa, enableHa_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MeasureConfig, measureConfig_);
      DARABONBA_PTR_TO_JSON(MultiZoneMode, multiZoneMode_);
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
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(EnableHa, enableHa_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MeasureConfig, measureConfig_);
      DARABONBA_PTR_FROM_JSON(MultiZoneMode, multiZoneMode_);
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
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetInstanceDetailResponseBodyData() = default ;
    GetInstanceDetailResponseBodyData(const GetInstanceDetailResponseBodyData &) = default ;
    GetInstanceDetailResponseBodyData(GetInstanceDetailResponseBodyData &&) = default ;
    GetInstanceDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBodyData() = default ;
    GetInstanceDetailResponseBodyData& operator=(const GetInstanceDetailResponseBodyData &) = default ;
    GetInstanceDetailResponseBodyData& operator=(GetInstanceDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->beginTime_ == nullptr && return this->bucketName_ == nullptr && return this->bucketPath_ == nullptr && return this->clusterInfo_ == nullptr && return this->clusterName_ == nullptr
        && return this->enableHa_ == nullptr && return this->encrypted_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr && return this->instanceStatus_ == nullptr
        && return this->kmsKeyId_ == nullptr && return this->measureConfig_ == nullptr && return this->multiZoneMode_ == nullptr && return this->nodeType_ == nullptr && return this->openPublicNet_ == nullptr
        && return this->packageType_ == nullptr && return this->payType_ == nullptr && return this->productCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->runningTime_ == nullptr && return this->sgId_ == nullptr && return this->tags_ == nullptr && return this->templateVersion_ == nullptr && return this->userConfig_ == nullptr
        && return this->vSwitches_ == nullptr && return this->version_ == nullptr && return this->vpcId_ == nullptr && return this->vswId_ == nullptr && return this->zoneId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline GetInstanceDetailResponseBodyData& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetInstanceDetailResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetInstanceDetailResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline GetInstanceDetailResponseBodyData& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline const Models::GetInstanceDetailResponseBodyDataClusterInfo & clusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Models::GetInstanceDetailResponseBodyDataClusterInfo) };
    inline Models::GetInstanceDetailResponseBodyDataClusterInfo clusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Models::GetInstanceDetailResponseBodyDataClusterInfo) };
    inline GetInstanceDetailResponseBodyData& setClusterInfo(const Models::GetInstanceDetailResponseBodyDataClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
    inline GetInstanceDetailResponseBodyData& setClusterInfo(Models::GetInstanceDetailResponseBodyDataClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetInstanceDetailResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // enableHa Field Functions 
    bool hasEnableHa() const { return this->enableHa_ != nullptr;};
    void deleteEnableHa() { this->enableHa_ = nullptr;};
    inline bool enableHa() const { DARABONBA_PTR_GET_DEFAULT(enableHa_, false) };
    inline GetInstanceDetailResponseBodyData& setEnableHa(bool enableHa) { DARABONBA_PTR_SET_VALUE(enableHa_, enableHa) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline GetInstanceDetailResponseBodyData& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetInstanceDetailResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceDetailResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceDetailResponseBodyData& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline GetInstanceDetailResponseBodyData& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // measureConfig Field Functions 
    bool hasMeasureConfig() const { return this->measureConfig_ != nullptr;};
    void deleteMeasureConfig() { this->measureConfig_ = nullptr;};
    inline const Models::GetInstanceDetailResponseBodyDataMeasureConfig & measureConfig() const { DARABONBA_PTR_GET_CONST(measureConfig_, Models::GetInstanceDetailResponseBodyDataMeasureConfig) };
    inline Models::GetInstanceDetailResponseBodyDataMeasureConfig measureConfig() { DARABONBA_PTR_GET(measureConfig_, Models::GetInstanceDetailResponseBodyDataMeasureConfig) };
    inline GetInstanceDetailResponseBodyData& setMeasureConfig(const Models::GetInstanceDetailResponseBodyDataMeasureConfig & measureConfig) { DARABONBA_PTR_SET_VALUE(measureConfig_, measureConfig) };
    inline GetInstanceDetailResponseBodyData& setMeasureConfig(Models::GetInstanceDetailResponseBodyDataMeasureConfig && measureConfig) { DARABONBA_PTR_SET_RVALUE(measureConfig_, measureConfig) };


    // multiZoneMode Field Functions 
    bool hasMultiZoneMode() const { return this->multiZoneMode_ != nullptr;};
    void deleteMultiZoneMode() { this->multiZoneMode_ = nullptr;};
    inline string multiZoneMode() const { DARABONBA_PTR_GET_DEFAULT(multiZoneMode_, "") };
    inline GetInstanceDetailResponseBodyData& setMultiZoneMode(string multiZoneMode) { DARABONBA_PTR_SET_VALUE(multiZoneMode_, multiZoneMode) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetInstanceDetailResponseBodyData& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // openPublicNet Field Functions 
    bool hasOpenPublicNet() const { return this->openPublicNet_ != nullptr;};
    void deleteOpenPublicNet() { this->openPublicNet_ = nullptr;};
    inline bool openPublicNet() const { DARABONBA_PTR_GET_DEFAULT(openPublicNet_, false) };
    inline GetInstanceDetailResponseBodyData& setOpenPublicNet(bool openPublicNet) { DARABONBA_PTR_SET_VALUE(openPublicNet_, openPublicNet) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetInstanceDetailResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline GetInstanceDetailResponseBodyData& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetInstanceDetailResponseBodyData& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceDetailResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceDetailResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline GetInstanceDetailResponseBodyData& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline GetInstanceDetailResponseBodyData& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetInstanceDetailResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetInstanceDetailResponseBodyDataTags>) };
    inline vector<Models::GetInstanceDetailResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetInstanceDetailResponseBodyDataTags>) };
    inline GetInstanceDetailResponseBodyData& setTags(const vector<Models::GetInstanceDetailResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceDetailResponseBodyData& setTags(vector<Models::GetInstanceDetailResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetInstanceDetailResponseBodyData& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // userConfig Field Functions 
    bool hasUserConfig() const { return this->userConfig_ != nullptr;};
    void deleteUserConfig() { this->userConfig_ = nullptr;};
    inline string userConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
    inline GetInstanceDetailResponseBodyData& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<Models::GetInstanceDetailResponseBodyDataVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Models::GetInstanceDetailResponseBodyDataVSwitches>) };
    inline vector<Models::GetInstanceDetailResponseBodyDataVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Models::GetInstanceDetailResponseBodyDataVSwitches>) };
    inline GetInstanceDetailResponseBodyData& setVSwitches(const vector<Models::GetInstanceDetailResponseBodyDataVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline GetInstanceDetailResponseBodyData& setVSwitches(vector<Models::GetInstanceDetailResponseBodyDataVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetInstanceDetailResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceDetailResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline GetInstanceDetailResponseBodyData& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetInstanceDetailResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // AclId for Public Network Access Control.
    std::shared_ptr<string> aclId_ = nullptr;
    // The start time.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The address of the bucket.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The instance details.
    std::shared_ptr<Models::GetInstanceDetailResponseBodyDataClusterInfo> clusterInfo_ = nullptr;
    // The instance name.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<bool> enableHa_ = nullptr;
    std::shared_ptr<string> encrypted_ = nullptr;
    // The expiration time.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance status. Valid values:
    // 
    // *   creating.
    // *   running.
    // *   updating. Cluster scaling (up/down), configuration changes, and enabling/disabling public network access.
    // *   disable. The cluster has expired and needs to be renewed for activation.
    // *   deleting.
    // *   deleted.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<Models::GetInstanceDetailResponseBodyDataMeasureConfig> measureConfig_ = nullptr;
    std::shared_ptr<string> multiZoneMode_ = nullptr;
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
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> sgId_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceDetailResponseBodyDataTags>> tags_ = nullptr;
    // The version of the software stack.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // User-defined configuration.
    std::shared_ptr<string> userConfig_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceDetailResponseBodyDataVSwitches>> vSwitches_ = nullptr;
    // The kernel version.
    std::shared_ptr<string> version_ = nullptr;
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
