// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDBResourceGroupRequestRayConfig.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDBResourceGroupRequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_ANY_TO_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_TO_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_ANY_FROM_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
    };
    ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest(ModifyDBResourceGroupRequest &&) = default ;
    ModifyDBResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequest() = default ;
    ModifyDBResourceGroupRequest& operator=(const ModifyDBResourceGroupRequest &) = default ;
    ModifyDBResourceGroupRequest& operator=(ModifyDBResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoStopInterval_ != nullptr
        && this->clusterMode_ != nullptr && this->clusterSizeResource_ != nullptr && this->DBClusterId_ != nullptr && this->enableSpot_ != nullptr && this->engineParams_ != nullptr
        && this->groupName_ != nullptr && this->groupType_ != nullptr && this->maxClusterCount_ != nullptr && this->maxComputeResource_ != nullptr && this->maxGpuQuantity_ != nullptr
        && this->minClusterCount_ != nullptr && this->minComputeResource_ != nullptr && this->minGpuQuantity_ != nullptr && this->rayConfig_ != nullptr && this->regionId_ != nullptr
        && this->rules_ != nullptr && this->specName_ != nullptr && this->status_ != nullptr && this->targetResourceGroupName_ != nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string autoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline ModifyDBResourceGroupRequest& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline ModifyDBResourceGroupRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string clusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline ModifyDBResourceGroupRequest& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBResourceGroupRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline bool enableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
    inline ModifyDBResourceGroupRequest& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engineParams Field Functions 
    bool hasEngineParams() const { return this->engineParams_ != nullptr;};
    void deleteEngineParams() { this->engineParams_ = nullptr;};
    inline     const Darabonba::Json & engineParams() const { DARABONBA_GET(engineParams_) };
    Darabonba::Json & engineParams() { DARABONBA_GET(engineParams_) };
    inline ModifyDBResourceGroupRequest& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
    inline ModifyDBResourceGroupRequest& setEngineParams(Darabonba::Json & engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDBResourceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ModifyDBResourceGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline ModifyDBResourceGroupRequest& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline ModifyDBResourceGroupRequest& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t maxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline ModifyDBResourceGroupRequest& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t minClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline ModifyDBResourceGroupRequest& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline ModifyDBResourceGroupRequest& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t minGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline ModifyDBResourceGroupRequest& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const ModifyDBResourceGroupRequestRayConfig & rayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, ModifyDBResourceGroupRequestRayConfig) };
    inline ModifyDBResourceGroupRequestRayConfig rayConfig() { DARABONBA_PTR_GET(rayConfig_, ModifyDBResourceGroupRequestRayConfig) };
    inline ModifyDBResourceGroupRequest& setRayConfig(const ModifyDBResourceGroupRequestRayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline ModifyDBResourceGroupRequest& setRayConfig(ModifyDBResourceGroupRequestRayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ModifyDBResourceGroupRequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ModifyDBResourceGroupRequestRules>) };
    inline vector<ModifyDBResourceGroupRequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<ModifyDBResourceGroupRequestRules>) };
    inline ModifyDBResourceGroupRequest& setRules(const vector<ModifyDBResourceGroupRequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ModifyDBResourceGroupRequest& setRules(vector<ModifyDBResourceGroupRequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline ModifyDBResourceGroupRequest& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyDBResourceGroupRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string targetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline ModifyDBResourceGroupRequest& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


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
    Darabonba::Json engineParams_ = nullptr;
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
    std::shared_ptr<ModifyDBResourceGroupRequestRayConfig> rayConfig_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The job resubmission rules.
    std::shared_ptr<vector<ModifyDBResourceGroupRequestRules>> rules_ = nullptr;
    std::shared_ptr<string> specName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> targetResourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
