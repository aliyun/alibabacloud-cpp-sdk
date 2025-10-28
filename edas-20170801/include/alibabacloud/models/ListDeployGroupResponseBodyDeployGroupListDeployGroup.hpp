// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPLISTDEPLOYGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPLISTDEPLOYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListDeployGroupResponseBodyDeployGroupListDeployGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeployGroupResponseBodyDeployGroupListDeployGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(BaseComponentMetaName, baseComponentMetaName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_TO_JSON(DeploymentName, deploymentName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
      DARABONBA_PTR_TO_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(PackagePublicUrl, packagePublicUrl_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_TO_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(Reversion, reversion_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VExtServerGroupId, VExtServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeployGroupResponseBodyDeployGroupListDeployGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(BaseComponentMetaName, baseComponentMetaName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_FROM_JSON(DeploymentName, deploymentName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(PackagePublicUrl, packagePublicUrl_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      DARABONBA_PTR_FROM_JSON(PackageVersionId, packageVersionId_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(Reversion, reversion_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VExtServerGroupId, VExtServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    ListDeployGroupResponseBodyDeployGroupListDeployGroup() = default ;
    ListDeployGroupResponseBodyDeployGroupListDeployGroup(const ListDeployGroupResponseBodyDeployGroupListDeployGroup &) = default ;
    ListDeployGroupResponseBodyDeployGroupListDeployGroup(ListDeployGroupResponseBodyDeployGroupListDeployGroup &&) = default ;
    ListDeployGroupResponseBodyDeployGroupListDeployGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeployGroupResponseBodyDeployGroupListDeployGroup() = default ;
    ListDeployGroupResponseBodyDeployGroupListDeployGroup& operator=(const ListDeployGroupResponseBodyDeployGroupListDeployGroup &) = default ;
    ListDeployGroupResponseBodyDeployGroupListDeployGroup& operator=(ListDeployGroupResponseBodyDeployGroupListDeployGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appVersionId_ == nullptr && return this->baseComponentMetaName_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->cpuLimit_ == nullptr
        && return this->cpuRequest_ == nullptr && return this->createTime_ == nullptr && return this->csClusterId_ == nullptr && return this->deploymentName_ == nullptr && return this->env_ == nullptr
        && return this->ephemeralStorageLimit_ == nullptr && return this->ephemeralStorageRequest_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr
        && return this->labels_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->memoryLimit_ == nullptr && return this->memoryRequest_ == nullptr && return this->nameSpace_ == nullptr
        && return this->packagePublicUrl_ == nullptr && return this->packageUrl_ == nullptr && return this->packageVersion_ == nullptr && return this->packageVersionId_ == nullptr && return this->postStart_ == nullptr
        && return this->preStop_ == nullptr && return this->reversion_ == nullptr && return this->selector_ == nullptr && return this->status_ == nullptr && return this->strategy_ == nullptr
        && return this->updateTime_ == nullptr && return this->VExtServerGroupId_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string appVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // baseComponentMetaName Field Functions 
    bool hasBaseComponentMetaName() const { return this->baseComponentMetaName_ != nullptr;};
    void deleteBaseComponentMetaName() { this->baseComponentMetaName_ = nullptr;};
    inline string baseComponentMetaName() const { DARABONBA_PTR_GET_DEFAULT(baseComponentMetaName_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setBaseComponentMetaName(string baseComponentMetaName) { DARABONBA_PTR_SET_VALUE(baseComponentMetaName_, baseComponentMetaName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline string cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline string cpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setCpuRequest(string cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string csClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string deploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // ephemeralStorageLimit Field Functions 
    bool hasEphemeralStorageLimit() const { return this->ephemeralStorageLimit_ != nullptr;};
    void deleteEphemeralStorageLimit() { this->ephemeralStorageLimit_ = nullptr;};
    inline string ephemeralStorageLimit() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageLimit_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setEphemeralStorageLimit(string ephemeralStorageLimit) { DARABONBA_PTR_SET_VALUE(ephemeralStorageLimit_, ephemeralStorageLimit) };


    // ephemeralStorageRequest Field Functions 
    bool hasEphemeralStorageRequest() const { return this->ephemeralStorageRequest_ != nullptr;};
    void deleteEphemeralStorageRequest() { this->ephemeralStorageRequest_ = nullptr;};
    inline string ephemeralStorageRequest() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageRequest_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setEphemeralStorageRequest(string ephemeralStorageRequest) { DARABONBA_PTR_SET_VALUE(ephemeralStorageRequest_, ephemeralStorageRequest) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline int32_t groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, 0) };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setGroupType(int32_t groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline int64_t lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline string memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRequest Field Functions 
    bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
    void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
    inline string memoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setMemoryRequest(string memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string nameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // packagePublicUrl Field Functions 
    bool hasPackagePublicUrl() const { return this->packagePublicUrl_ != nullptr;};
    void deletePackagePublicUrl() { this->packagePublicUrl_ = nullptr;};
    inline string packagePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(packagePublicUrl_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPackagePublicUrl(string packagePublicUrl) { DARABONBA_PTR_SET_VALUE(packagePublicUrl_, packagePublicUrl) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline string packageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    // packageVersionId Field Functions 
    bool hasPackageVersionId() const { return this->packageVersionId_ != nullptr;};
    void deletePackageVersionId() { this->packageVersionId_ = nullptr;};
    inline string packageVersionId() const { DARABONBA_PTR_GET_DEFAULT(packageVersionId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPackageVersionId(string packageVersionId) { DARABONBA_PTR_SET_VALUE(packageVersionId_, packageVersionId) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // reversion Field Functions 
    bool hasReversion() const { return this->reversion_ != nullptr;};
    void deleteReversion() { this->reversion_ = nullptr;};
    inline string reversion() const { DARABONBA_PTR_GET_DEFAULT(reversion_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setReversion(string reversion) { DARABONBA_PTR_SET_VALUE(reversion_, reversion) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline string selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // VExtServerGroupId Field Functions 
    bool hasVExtServerGroupId() const { return this->VExtServerGroupId_ != nullptr;};
    void deleteVExtServerGroupId() { this->VExtServerGroupId_ = nullptr;};
    inline string VExtServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VExtServerGroupId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setVExtServerGroupId(string VExtServerGroupId) { DARABONBA_PTR_SET_VALUE(VExtServerGroupId_, VExtServerGroupId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline ListDeployGroupResponseBodyDeployGroupListDeployGroup& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the change process for application deployment in the instance group.
    std::shared_ptr<string> appVersionId_ = nullptr;
    // The name of the basic component.
    std::shared_ptr<string> baseComponentMetaName_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running.
    std::shared_ptr<string> cpuLimit_ = nullptr;
    // The number of CPU cores requested for each application instance when the application is running. Unit: cores. Value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<string> cpuRequest_ = nullptr;
    // The time when the application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Container Service for Kubernetes (ACK) cluster.
    std::shared_ptr<string> csClusterId_ = nullptr;
    // The name of the deployment.
    std::shared_ptr<string> deploymentName_ = nullptr;
    // The ID of the ACK cluster.
    std::shared_ptr<string> env_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<string> ephemeralStorageLimit_ = nullptr;
    // The minimum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<string> ephemeralStorageRequest_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the instance group. Valid values:
    // 
    // *   0: default group.
    // *   1: Canary release is disabled for traffic management.
    // *   2: Canary release is enabled for traffic management.
    std::shared_ptr<int32_t> groupType_ = nullptr;
    // The tag.
    std::shared_ptr<string> labels_ = nullptr;
    // The time when the application was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastUpdateTime_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is running. Unit: MB. Value 0 indicates that no limit is set on the memory size.
    std::shared_ptr<string> memoryLimit_ = nullptr;
    // The size of memory requested for each application instance when the application is running. Unit: MB. Value 0 indicates that no limit is set on the memory size.
    std::shared_ptr<string> memoryRequest_ = nullptr;
    // The namespace.
    std::shared_ptr<string> nameSpace_ = nullptr;
    // The external download URL of the deployment package.
    std::shared_ptr<string> packagePublicUrl_ = nullptr;
    // The URL of the deployment package.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The version of the deployment package.
    std::shared_ptr<string> packageVersion_ = nullptr;
    // The version of the deployment package that was used to deploy an application in the instance group.
    std::shared_ptr<string> packageVersionId_ = nullptr;
    // The post-start script.
    std::shared_ptr<string> postStart_ = nullptr;
    // The pre-stop script.
    std::shared_ptr<string> preStop_ = nullptr;
    // The version of the application. The value progressively increases in the range of 0 to 7.
    std::shared_ptr<string> reversion_ = nullptr;
    // The ID of the application deployed in the ACK cluster in Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> selector_ = nullptr;
    // The state of the application instance group. Valid values:
    // 
    // *   0: ready
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   10: failed due to a system exception
    std::shared_ptr<string> status_ = nullptr;
    // The throttling policy. This parameter is reserved.
    std::shared_ptr<string> strategy_ = nullptr;
    // The time when the application was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the vServer group of the Internet-facing SLB instance associated with the instance group.
    std::shared_ptr<string> VExtServerGroupId_ = nullptr;
    // The ID of the vServer group of the internal-facing Server Load Balancer (SLB) instance associated with the instance group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
