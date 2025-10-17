// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyGroupsInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyGroupsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyGroupsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
      DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_ANY_TO_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(GroupUsers, groupUsers_);
      DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_TO_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_TO_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(RunningClusterCount, runningClusterCount_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupName, targetResourceGroupName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyGroupsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStopInterval, autoStopInterval_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
      DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_ANY_FROM_JSON(EngineParams, engineParams_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(GroupUsers, groupUsers_);
      DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
      DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
      DARABONBA_PTR_FROM_JSON(MaxGpuQuantity, maxGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
      DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
      DARABONBA_PTR_FROM_JSON(MinGpuQuantity, minGpuQuantity_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(RunningClusterCount, runningClusterCount_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupName, targetResourceGroupName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDBResourceGroupResponseBodyGroupsInfo() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(const DescribeDBResourceGroupResponseBodyGroupsInfo &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(DescribeDBResourceGroupResponseBodyGroupsInfo &&) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyGroupsInfo() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo& operator=(const DescribeDBResourceGroupResponseBodyGroupsInfo &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo& operator=(DescribeDBResourceGroupResponseBodyGroupsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStopInterval_ == nullptr
        && return this->clusterMode_ == nullptr && return this->clusterSizeResource_ == nullptr && return this->createTime_ == nullptr && return this->elasticMinComputeResource_ == nullptr && return this->enableSpot_ == nullptr
        && return this->engine_ == nullptr && return this->engineParams_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr && return this->groupUsers_ == nullptr
        && return this->maxClusterCount_ == nullptr && return this->maxComputeResource_ == nullptr && return this->maxGpuQuantity_ == nullptr && return this->message_ == nullptr && return this->minClusterCount_ == nullptr
        && return this->minComputeResource_ == nullptr && return this->minGpuQuantity_ == nullptr && return this->rayConfig_ == nullptr && return this->rules_ == nullptr && return this->runningClusterCount_ == nullptr
        && return this->specName_ == nullptr && return this->status_ == nullptr && return this->targetResourceGroupName_ == nullptr && return this->updateTime_ == nullptr; };
    // autoStopInterval Field Functions 
    bool hasAutoStopInterval() const { return this->autoStopInterval_ != nullptr;};
    void deleteAutoStopInterval() { this->autoStopInterval_ = nullptr;};
    inline string autoStopInterval() const { DARABONBA_PTR_GET_DEFAULT(autoStopInterval_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setAutoStopInterval(string autoStopInterval) { DARABONBA_PTR_SET_VALUE(autoStopInterval_, autoStopInterval) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string clusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // elasticMinComputeResource Field Functions 
    bool hasElasticMinComputeResource() const { return this->elasticMinComputeResource_ != nullptr;};
    void deleteElasticMinComputeResource() { this->elasticMinComputeResource_ = nullptr;};
    inline string elasticMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(elasticMinComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setElasticMinComputeResource(string elasticMinComputeResource) { DARABONBA_PTR_SET_VALUE(elasticMinComputeResource_, elasticMinComputeResource) };


    // enableSpot Field Functions 
    bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
    void deleteEnableSpot() { this->enableSpot_ = nullptr;};
    inline string enableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEnableSpot(string enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineParams Field Functions 
    bool hasEngineParams() const { return this->engineParams_ != nullptr;};
    void deleteEngineParams() { this->engineParams_ = nullptr;};
    inline     const Darabonba::Json & engineParams() const { DARABONBA_GET(engineParams_) };
    Darabonba::Json & engineParams() { DARABONBA_GET(engineParams_) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngineParams(Darabonba::Json & engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUsers Field Functions 
    bool hasGroupUsers() const { return this->groupUsers_ != nullptr;};
    void deleteGroupUsers() { this->groupUsers_ = nullptr;};
    inline string groupUsers() const { DARABONBA_PTR_GET_DEFAULT(groupUsers_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupUsers(string groupUsers) { DARABONBA_PTR_SET_VALUE(groupUsers_, groupUsers) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // maxGpuQuantity Field Functions 
    bool hasMaxGpuQuantity() const { return this->maxGpuQuantity_ != nullptr;};
    void deleteMaxGpuQuantity() { this->maxGpuQuantity_ = nullptr;};
    inline int32_t maxGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxGpuQuantity_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMaxGpuQuantity(int32_t maxGpuQuantity) { DARABONBA_PTR_SET_VALUE(maxGpuQuantity_, maxGpuQuantity) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t minClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // minGpuQuantity Field Functions 
    bool hasMinGpuQuantity() const { return this->minGpuQuantity_ != nullptr;};
    void deleteMinGpuQuantity() { this->minGpuQuantity_ = nullptr;};
    inline int32_t minGpuQuantity() const { DARABONBA_PTR_GET_DEFAULT(minGpuQuantity_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMinGpuQuantity(int32_t minGpuQuantity) { DARABONBA_PTR_SET_VALUE(minGpuQuantity_, minGpuQuantity) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig & rayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig) };
    inline Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig rayConfig() { DARABONBA_PTR_GET(rayConfig_, Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRayConfig(const Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRayConfig(Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules>) };
    inline vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules>) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRules(const vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRules(vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // runningClusterCount Field Functions 
    bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
    void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
    inline int32_t runningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetResourceGroupName Field Functions 
    bool hasTargetResourceGroupName() const { return this->targetResourceGroupName_ != nullptr;};
    void deleteTargetResourceGroupName() { this->targetResourceGroupName_ = nullptr;};
    inline string targetResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupName_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setTargetResourceGroupName(string targetResourceGroupName) { DARABONBA_PTR_SET_VALUE(targetResourceGroupName_, targetResourceGroupName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> autoStopInterval_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clusterMode_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> clusterSizeResource_ = nullptr;
    // The time when the resource group was created. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The minimum amount of elastic computing resources.
    std::shared_ptr<string> elasticMinComputeResource_ = nullptr;
    // Indicates whether the preemptible instance feature is enabled for the resource group. After the preemptible instance feature is enabled, you are charged for resources at a lower unit price but the resources are probably released. Valid values:
    // 
    // *   **True**
    // *   **False**
    // 
    // The True value is returned only for job resource groups.
    std::shared_ptr<string> enableSpot_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    Darabonba::Json engineParams_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // >  For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/428610.html).
    std::shared_ptr<string> groupType_ = nullptr;
    // The Resource Access Management (RAM) user that is associated with the resource group.
    std::shared_ptr<string> groupUsers_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> maxClusterCount_ = nullptr;
    // The maximum amount of reserved computing resources.
    std::shared_ptr<string> maxComputeResource_ = nullptr;
    std::shared_ptr<int32_t> maxGpuQuantity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> minClusterCount_ = nullptr;
    // The minimum amount of reserved computing resources.
    std::shared_ptr<string> minComputeResource_ = nullptr;
    std::shared_ptr<int32_t> minGpuQuantity_ = nullptr;
    std::shared_ptr<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfig> rayConfig_ = nullptr;
    // The job resubmission rules.
    std::shared_ptr<vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRules>> rules_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<int32_t> runningClusterCount_ = nullptr;
    std::shared_ptr<string> specName_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   **creating**: The resource group is being created.
    // *   **ok**: The resource group is created.
    // *   **pendingdelete**: The resource group is pending to be deleted.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> targetResourceGroupName_ = nullptr;
    // The time when the resource group was updated. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
