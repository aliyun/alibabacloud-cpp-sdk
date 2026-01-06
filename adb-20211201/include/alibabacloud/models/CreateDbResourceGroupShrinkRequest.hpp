// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBResourceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
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
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
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
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    CreateDBResourceGroupShrinkRequest() = default ;
    CreateDBResourceGroupShrinkRequest(const CreateDBResourceGroupShrinkRequest &) = default ;
    CreateDBResourceGroupShrinkRequest(CreateDBResourceGroupShrinkRequest &&) = default ;
    CreateDBResourceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupShrinkRequest() = default ;
    CreateDBResourceGroupShrinkRequest& operator=(const CreateDBResourceGroupShrinkRequest &) = default ;
    CreateDBResourceGroupShrinkRequest& operator=(CreateDBResourceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStopInterval_ == nullptr
        && this->clusterMode_ == nullptr && this->clusterSizeResource_ == nullptr && this->DBClusterId_ == nullptr && this->enableSpot_ == nullptr && this->engine_ == nullptr
        && this->engineParamsShrink_ == nullptr && this->gpuElasticPlanShrink_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->maxClusterCount_ == nullptr
        && this->maxComputeResource_ == nullptr && this->maxGpuQuantity_ == nullptr && this->minClusterCount_ == nullptr && this->minComputeResource_ == nullptr && this->minGpuQuantity_ == nullptr
        && this->rayConfigShrink_ == nullptr && this->regionId_ == nullptr && this->rulesShrink_ == nullptr && this->specName_ == nullptr && this->targetResourceGroupName_ == nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string getAutoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline CreateDBResourceGroupShrinkRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateDBResourceGroupShrinkRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline CreateDBResourceGroupShrinkRequest& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBResourceGroupShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool getEnableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline CreateDBResourceGroupShrinkRequest& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBResourceGroupShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineParamsShrink Field Functions 
    bool hasEngineParamsShrink() const { return this->engineParamsShrink_ != nullptr;};
    void deleteEngineParamsShrink() { this->engineParamsShrink_ = nullptr;};
    inline string getEngineParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(engineParamsShrink_, "") };
    inline CreateDBResourceGroupShrinkRequest& setEngineParamsShrink(string engineParamsShrink) { DARABONBA_PTR_SET_VALUE(engineParamsShrink_, engineParamsShrink) };


    // gpuElasticPlanShrink Field Functions 
    bool hasGpuElasticPlanShrink() const { return this->gpuElasticPlanShrink_ != nullptr;};
    void deleteGpuElasticPlanShrink() { this->gpuElasticPlanShrink_ = nullptr;};
    inline string getGpuElasticPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(gpuElasticPlanShrink_, "") };
    inline CreateDBResourceGroupShrinkRequest& setGpuElasticPlanShrink(string gpuElasticPlanShrink) { DARABONBA_PTR_SET_VALUE(gpuElasticPlanShrink_, gpuElasticPlanShrink) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateDBResourceGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateDBResourceGroupShrinkRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline CreateDBResourceGroupShrinkRequest& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline CreateDBResourceGroupShrinkRequest& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t getMaxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline CreateDBResourceGroupShrinkRequest& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline CreateDBResourceGroupShrinkRequest& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline CreateDBResourceGroupShrinkRequest& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t getMinGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline CreateDBResourceGroupShrinkRequest& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfigShrink Field Functions 
    bool hasRayConfigShrink() const { return this->rayConfigShrink_ != nullptr;};
    void deleteRayConfigShrink() { this->rayConfigShrink_ = nullptr;};
    inline string getRayConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(rayConfigShrink_, "") };
    inline CreateDBResourceGroupShrinkRequest& setRayConfigShrink(string rayConfigShrink) { DARABONBA_PTR_SET_VALUE(rayConfigShrink_, rayConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBResourceGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateDBResourceGroupShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline CreateDBResourceGroupShrinkRequest& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string getTargetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline CreateDBResourceGroupShrinkRequest& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


  protected:
    shared_ptr<string> autoStopInterval_ {};
    // A reserved parameter.
    shared_ptr<string> clusterMode_ {};
    // A reserved parameter.
    shared_ptr<string> clusterSizeResource_ {};
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to enable the spot instance feature for the resource group. After you enable the spot instance feature, you are charged for resources at a lower unit price but the resources are probably released. You can enable the spot instance feature only for job resource groups. Valid values:
    // 
    // *   **True**
    // *   **False**
    shared_ptr<bool> enableSpot_ {};
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineParamsShrink_ {};
    shared_ptr<string> gpuElasticPlanShrink_ {};
    // The name of the resource group.
    // 
    // *   The name can be up to 255 characters in length.
    // *   The name must start with a letter or a digit.
    // *   The name can contain letters, digits, hyphens (_), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // >  For more information about resource groups, see [Resource group overview](https://help.aliyun.com/document_detail/428610.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // A reserved parameter.
    shared_ptr<int32_t> maxClusterCount_ {};
    // The maximum reserved computing resources.
    // 
    // *   If GroupType is set to Interactive, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 16ACU.
    // *   If GroupType is set to Job, the maximum amount of reserved computing resources refers to the amount of resources that are not allocated in the cluster. Set this parameter to a value in increments of 8ACU.
    shared_ptr<string> maxComputeResource_ {};
    // A reserved parameter.
    shared_ptr<int32_t> maxGpuQuantity_ {};
    // A reserved parameter.
    shared_ptr<int32_t> minClusterCount_ {};
    // The minimum reserved computing resources.
    // 
    // *   When GroupType is set to Interactive, set this parameter to 16ACU.
    // *   When GroupType is set to Job, set this parameter to 0ACU.
    shared_ptr<string> minComputeResource_ {};
    // A reserved parameter.
    shared_ptr<int32_t> minGpuQuantity_ {};
    shared_ptr<string> rayConfigShrink_ {};
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/612393.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The job resubmission rules.
    shared_ptr<string> rulesShrink_ {};
    // A reserved parameter.
    shared_ptr<string> specName_ {};
    // A reserved parameter.
    shared_ptr<string> targetResourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
