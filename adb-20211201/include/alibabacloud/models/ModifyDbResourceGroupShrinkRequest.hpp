// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_TO_JSON(EngineParams, engineParamsShrink_);
      DARABONBA_PTR_TO_JSON(GpuElasticPlan, gpuElasticPlanShrink_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_TO_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_FROM_JSON(EngineParams, engineParamsShrink_);
      DARABONBA_PTR_FROM_JSON(GpuElasticPlan, gpuElasticPlanShrink_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    ModifyDBResourceGroupShrinkRequest() = default ;
    ModifyDBResourceGroupShrinkRequest(const ModifyDBResourceGroupShrinkRequest &) = default ;
    ModifyDBResourceGroupShrinkRequest(ModifyDBResourceGroupShrinkRequest &&) = default ;
    ModifyDBResourceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupShrinkRequest() = default ;
    ModifyDBResourceGroupShrinkRequest& operator=(const ModifyDBResourceGroupShrinkRequest &) = default ;
    ModifyDBResourceGroupShrinkRequest& operator=(ModifyDBResourceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStopInterval_ == nullptr
        && return this->clusterMode_ == nullptr && return this->clusterSizeResource_ == nullptr && return this->DBClusterId_ == nullptr && return this->enableSpot_ == nullptr && return this->engineParamsShrink_ == nullptr
        && return this->gpuElasticPlanShrink_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr && return this->maxClusterCount_ == nullptr && return this->maxComputeResource_ == nullptr
        && return this->maxGpuQuantity_ == nullptr && return this->minClusterCount_ == nullptr && return this->minComputeResource_ == nullptr && return this->minGpuQuantity_ == nullptr && return this->rayConfigShrink_ == nullptr
        && return this->regionId_ == nullptr && return this->rulesShrink_ == nullptr && return this->specName_ == nullptr && return this->status_ == nullptr && return this->targetResourceGroupName_ == nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string autoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string clusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool enableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline ModifyDBResourceGroupShrinkRequest& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engineParamsShrink Field Functions 
    bool hasEngineParamsShrink() const { return this->engineParamsShrink_ != nullptr;};
    void deleteEngineParamsShrink() { this->engineParamsShrink_ = nullptr;};
    inline string engineParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(engineParamsShrink_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setEngineParamsShrink(string engineParamsShrink) { DARABONBA_PTR_SET_VALUE(engineParamsShrink_, engineParamsShrink) };


    // gpuElasticPlanShrink Field Functions 
    bool hasGpuElasticPlanShrink() const { return this->gpuElasticPlanShrink_ != nullptr;};
    void deleteGpuElasticPlanShrink() { this->gpuElasticPlanShrink_ = nullptr;};
    inline string gpuElasticPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(gpuElasticPlanShrink_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setGpuElasticPlanShrink(string gpuElasticPlanShrink) { DARABONBA_PTR_SET_VALUE(gpuElasticPlanShrink_, gpuElasticPlanShrink) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline ModifyDBResourceGroupShrinkRequest& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t maxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline ModifyDBResourceGroupShrinkRequest& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t minClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline ModifyDBResourceGroupShrinkRequest& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t minGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline ModifyDBResourceGroupShrinkRequest& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfigShrink Field Functions 
    bool hasRayConfigShrink() const { return this->rayConfigShrink_ != nullptr;};
    void deleteRayConfigShrink() { this->rayConfigShrink_ = nullptr;};
    inline string rayConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(rayConfigShrink_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setRayConfigShrink(string rayConfigShrink) { DARABONBA_PTR_SET_VALUE(rayConfigShrink_, rayConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string rulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string targetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline ModifyDBResourceGroupShrinkRequest& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


  protected:
    std::shared_ptr<string> autoStopInterval_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clusterMode_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clusterSizeResource_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the spot instance feature for the resource group. After you enable the spot instance feature, you are charged for resources at a lower unit price but the resources are probably released. You can enable the spot instance feature only for job resource groups. Valid values:
    // 
    // *   **True**
    // *   **False**
    std::shared_ptr<bool> enableSpot_ = nullptr;
    std::shared_ptr<string> engineParamsShrink_ = nullptr;
    std::shared_ptr<string> gpuElasticPlanShrink_ = nullptr;
    // The name of the resource group.
    // 
    // > You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the name of a resource group in a cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // > For information about resource groups of Data Lakehouse Edition, see [Resource groups](https://help.aliyun.com/document_detail/428610.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> groupType_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> maxClusterCount_ = nullptr;
    // The maximum amount of reserved computing resources.
    // 
    // *   If GroupType is set to Interactive, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 16ACU.
    // *   If GroupType is set to Job, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 8ACU.
    std::shared_ptr<string> maxComputeResource_ = nullptr;
    std::shared_ptr<int32_t> maxGpuQuantity_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> minClusterCount_ = nullptr;
    // The minimum amount of reserved computing resources.
    // 
    // *   If the GroupType parameter is set to Interactive, set the value to 16ACU.
    // *   If GroupType is set to Job, set the value to 0ACU.
    std::shared_ptr<string> minComputeResource_ = nullptr;
    std::shared_ptr<int32_t> minGpuQuantity_ = nullptr;
    std::shared_ptr<string> rayConfigShrink_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The job resubmission rules.
    std::shared_ptr<string> rulesShrink_ = nullptr;
    std::shared_ptr<string> specName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> targetResourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
