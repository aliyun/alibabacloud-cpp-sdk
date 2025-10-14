// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesAffinity.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesCloudDisks.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesDatasets.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <map>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesIdleInstanceCuller.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesInstanceShutdownTimer.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesInstanceSnapshotList.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesLabels.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesLatestSnapshot.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesRequestedResource.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesTags.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IdleInstanceCuller, idleInstanceCuller_);
      DARABONBA_PTR_TO_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceShutdownTimer, instanceShutdownTimer_);
      DARABONBA_PTR_TO_JSON(InstanceSnapshotList, instanceSnapshotList_);
      DARABONBA_PTR_TO_JSON(InstanceUrl, instanceUrl_);
      DARABONBA_PTR_TO_JSON(JupyterlabUrl, jupyterlabUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestSnapshot, latestSnapshot_);
      DARABONBA_PTR_TO_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IdleInstanceCuller, idleInstanceCuller_);
      DARABONBA_PTR_FROM_JSON(ImageAuth, imageAuth_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceShutdownTimer, instanceShutdownTimer_);
      DARABONBA_PTR_FROM_JSON(InstanceSnapshotList, instanceSnapshotList_);
      DARABONBA_PTR_FROM_JSON(InstanceUrl, instanceUrl_);
      DARABONBA_PTR_FROM_JSON(JupyterlabUrl, jupyterlabUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestSnapshot, latestSnapshot_);
      DARABONBA_PTR_FROM_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances(ListInstancesResponseBodyInstances &&) = default ;
    ListInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstances() = default ;
    ListInstancesResponseBodyInstances& operator=(const ListInstancesResponseBodyInstances &) = default ;
    ListInstancesResponseBodyInstances& operator=(ListInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && return this->accessibility_ == nullptr && return this->accumulatedRunningTimeInMs_ == nullptr && return this->affinity_ == nullptr && return this->cloudDisks_ == nullptr && return this->credentialConfig_ == nullptr
        && return this->datasets_ == nullptr && return this->driver_ == nullptr && return this->dynamicMount_ == nullptr && return this->ecsSpec_ == nullptr && return this->environmentVariables_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->idleInstanceCuller_ == nullptr && return this->imageAuth_ == nullptr && return this->imageId_ == nullptr
        && return this->imageName_ == nullptr && return this->imageUrl_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceShutdownTimer_ == nullptr
        && return this->instanceSnapshotList_ == nullptr && return this->instanceUrl_ == nullptr && return this->jupyterlabUrl_ == nullptr && return this->labels_ == nullptr && return this->latestSnapshot_ == nullptr
        && return this->oversoldInfo_ == nullptr && return this->oversoldType_ == nullptr && return this->paymentType_ == nullptr && return this->priority_ == nullptr && return this->reasonCode_ == nullptr
        && return this->reasonMessage_ == nullptr && return this->requestedResource_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->terminalUrl_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr && return this->userVpc_ == nullptr
        && return this->webIDEUrl_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr && return this->workspaceSource_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListInstancesResponseBodyInstances& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListInstancesResponseBodyInstances& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accumulatedRunningTimeInMs Field Functions 
    bool hasAccumulatedRunningTimeInMs() const { return this->accumulatedRunningTimeInMs_ != nullptr;};
    void deleteAccumulatedRunningTimeInMs() { this->accumulatedRunningTimeInMs_ = nullptr;};
    inline int64_t accumulatedRunningTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(accumulatedRunningTimeInMs_, 0L) };
    inline ListInstancesResponseBodyInstances& setAccumulatedRunningTimeInMs(int64_t accumulatedRunningTimeInMs) { DARABONBA_PTR_SET_VALUE(accumulatedRunningTimeInMs_, accumulatedRunningTimeInMs) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesAffinity & affinity() const { DARABONBA_PTR_GET_CONST(affinity_, Models::ListInstancesResponseBodyInstancesAffinity) };
    inline Models::ListInstancesResponseBodyInstancesAffinity affinity() { DARABONBA_PTR_GET(affinity_, Models::ListInstancesResponseBodyInstancesAffinity) };
    inline ListInstancesResponseBodyInstances& setAffinity(const Models::ListInstancesResponseBodyInstancesAffinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline ListInstancesResponseBodyInstances& setAffinity(Models::ListInstancesResponseBodyInstancesAffinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesCloudDisks> & cloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<Models::ListInstancesResponseBodyInstancesCloudDisks>) };
    inline vector<Models::ListInstancesResponseBodyInstancesCloudDisks> cloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<Models::ListInstancesResponseBodyInstancesCloudDisks>) };
    inline ListInstancesResponseBodyInstances& setCloudDisks(const vector<Models::ListInstancesResponseBodyInstancesCloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline ListInstancesResponseBodyInstances& setCloudDisks(vector<Models::ListInstancesResponseBodyInstancesCloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const Models::CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, Models::CredentialConfig) };
    inline Models::CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, Models::CredentialConfig) };
    inline ListInstancesResponseBodyInstances& setCredentialConfig(const Models::CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline ListInstancesResponseBodyInstances& setCredentialConfig(Models::CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesDatasets> & datasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<Models::ListInstancesResponseBodyInstancesDatasets>) };
    inline vector<Models::ListInstancesResponseBodyInstancesDatasets> datasets() { DARABONBA_PTR_GET(datasets_, vector<Models::ListInstancesResponseBodyInstancesDatasets>) };
    inline ListInstancesResponseBodyInstances& setDatasets(const vector<Models::ListInstancesResponseBodyInstancesDatasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline ListInstancesResponseBodyInstances& setDatasets(vector<Models::ListInstancesResponseBodyInstancesDatasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline ListInstancesResponseBodyInstances& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const Models::DynamicMount & dynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, Models::DynamicMount) };
    inline Models::DynamicMount dynamicMount() { DARABONBA_PTR_GET(dynamicMount_, Models::DynamicMount) };
    inline ListInstancesResponseBodyInstances& setDynamicMount(const Models::DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline ListInstancesResponseBodyInstances& setDynamicMount(Models::DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline ListInstancesResponseBodyInstances& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline ListInstancesResponseBodyInstances& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline ListInstancesResponseBodyInstances& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListInstancesResponseBodyInstances& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // idleInstanceCuller Field Functions 
    bool hasIdleInstanceCuller() const { return this->idleInstanceCuller_ != nullptr;};
    void deleteIdleInstanceCuller() { this->idleInstanceCuller_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesIdleInstanceCuller & idleInstanceCuller() const { DARABONBA_PTR_GET_CONST(idleInstanceCuller_, Models::ListInstancesResponseBodyInstancesIdleInstanceCuller) };
    inline Models::ListInstancesResponseBodyInstancesIdleInstanceCuller idleInstanceCuller() { DARABONBA_PTR_GET(idleInstanceCuller_, Models::ListInstancesResponseBodyInstancesIdleInstanceCuller) };
    inline ListInstancesResponseBodyInstances& setIdleInstanceCuller(const Models::ListInstancesResponseBodyInstancesIdleInstanceCuller & idleInstanceCuller) { DARABONBA_PTR_SET_VALUE(idleInstanceCuller_, idleInstanceCuller) };
    inline ListInstancesResponseBodyInstances& setIdleInstanceCuller(Models::ListInstancesResponseBodyInstancesIdleInstanceCuller && idleInstanceCuller) { DARABONBA_PTR_SET_RVALUE(idleInstanceCuller_, idleInstanceCuller) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string imageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline ListInstancesResponseBodyInstances& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListInstancesResponseBodyInstances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListInstancesResponseBodyInstances& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListInstancesResponseBodyInstances& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceShutdownTimer Field Functions 
    bool hasInstanceShutdownTimer() const { return this->instanceShutdownTimer_ != nullptr;};
    void deleteInstanceShutdownTimer() { this->instanceShutdownTimer_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer & instanceShutdownTimer() const { DARABONBA_PTR_GET_CONST(instanceShutdownTimer_, Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer) };
    inline Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer instanceShutdownTimer() { DARABONBA_PTR_GET(instanceShutdownTimer_, Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer) };
    inline ListInstancesResponseBodyInstances& setInstanceShutdownTimer(const Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer & instanceShutdownTimer) { DARABONBA_PTR_SET_VALUE(instanceShutdownTimer_, instanceShutdownTimer) };
    inline ListInstancesResponseBodyInstances& setInstanceShutdownTimer(Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer && instanceShutdownTimer) { DARABONBA_PTR_SET_RVALUE(instanceShutdownTimer_, instanceShutdownTimer) };


    // instanceSnapshotList Field Functions 
    bool hasInstanceSnapshotList() const { return this->instanceSnapshotList_ != nullptr;};
    void deleteInstanceSnapshotList() { this->instanceSnapshotList_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList> & instanceSnapshotList() const { DARABONBA_PTR_GET_CONST(instanceSnapshotList_, vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList>) };
    inline vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList> instanceSnapshotList() { DARABONBA_PTR_GET(instanceSnapshotList_, vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList>) };
    inline ListInstancesResponseBodyInstances& setInstanceSnapshotList(const vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList> & instanceSnapshotList) { DARABONBA_PTR_SET_VALUE(instanceSnapshotList_, instanceSnapshotList) };
    inline ListInstancesResponseBodyInstances& setInstanceSnapshotList(vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList> && instanceSnapshotList) { DARABONBA_PTR_SET_RVALUE(instanceSnapshotList_, instanceSnapshotList) };


    // instanceUrl Field Functions 
    bool hasInstanceUrl() const { return this->instanceUrl_ != nullptr;};
    void deleteInstanceUrl() { this->instanceUrl_ = nullptr;};
    inline string instanceUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceUrl_, "") };
    inline ListInstancesResponseBodyInstances& setInstanceUrl(string instanceUrl) { DARABONBA_PTR_SET_VALUE(instanceUrl_, instanceUrl) };


    // jupyterlabUrl Field Functions 
    bool hasJupyterlabUrl() const { return this->jupyterlabUrl_ != nullptr;};
    void deleteJupyterlabUrl() { this->jupyterlabUrl_ = nullptr;};
    inline string jupyterlabUrl() const { DARABONBA_PTR_GET_DEFAULT(jupyterlabUrl_, "") };
    inline ListInstancesResponseBodyInstances& setJupyterlabUrl(string jupyterlabUrl) { DARABONBA_PTR_SET_VALUE(jupyterlabUrl_, jupyterlabUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListInstancesResponseBodyInstancesLabels>) };
    inline vector<Models::ListInstancesResponseBodyInstancesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListInstancesResponseBodyInstancesLabels>) };
    inline ListInstancesResponseBodyInstances& setLabels(const vector<Models::ListInstancesResponseBodyInstancesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListInstancesResponseBodyInstances& setLabels(vector<Models::ListInstancesResponseBodyInstancesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestSnapshot Field Functions 
    bool hasLatestSnapshot() const { return this->latestSnapshot_ != nullptr;};
    void deleteLatestSnapshot() { this->latestSnapshot_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesLatestSnapshot & latestSnapshot() const { DARABONBA_PTR_GET_CONST(latestSnapshot_, Models::ListInstancesResponseBodyInstancesLatestSnapshot) };
    inline Models::ListInstancesResponseBodyInstancesLatestSnapshot latestSnapshot() { DARABONBA_PTR_GET(latestSnapshot_, Models::ListInstancesResponseBodyInstancesLatestSnapshot) };
    inline ListInstancesResponseBodyInstances& setLatestSnapshot(const Models::ListInstancesResponseBodyInstancesLatestSnapshot & latestSnapshot) { DARABONBA_PTR_SET_VALUE(latestSnapshot_, latestSnapshot) };
    inline ListInstancesResponseBodyInstances& setLatestSnapshot(Models::ListInstancesResponseBodyInstancesLatestSnapshot && latestSnapshot) { DARABONBA_PTR_SET_RVALUE(latestSnapshot_, latestSnapshot) };


    // oversoldInfo Field Functions 
    bool hasOversoldInfo() const { return this->oversoldInfo_ != nullptr;};
    void deleteOversoldInfo() { this->oversoldInfo_ = nullptr;};
    inline string oversoldInfo() const { DARABONBA_PTR_GET_DEFAULT(oversoldInfo_, "") };
    inline ListInstancesResponseBodyInstances& setOversoldInfo(string oversoldInfo) { DARABONBA_PTR_SET_VALUE(oversoldInfo_, oversoldInfo) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string oversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline ListInstancesResponseBodyInstances& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstancesResponseBodyInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListInstancesResponseBodyInstances& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline ListInstancesResponseBodyInstances& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline ListInstancesResponseBodyInstances& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesRequestedResource & requestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, Models::ListInstancesResponseBodyInstancesRequestedResource) };
    inline Models::ListInstancesResponseBodyInstancesRequestedResource requestedResource() { DARABONBA_PTR_GET(requestedResource_, Models::ListInstancesResponseBodyInstancesRequestedResource) };
    inline ListInstancesResponseBodyInstances& setRequestedResource(const Models::ListInstancesResponseBodyInstancesRequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline ListInstancesResponseBodyInstances& setRequestedResource(Models::ListInstancesResponseBodyInstancesRequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListInstancesResponseBodyInstances& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListInstancesResponseBodyInstances& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyInstancesTags>) };
    inline vector<Models::ListInstancesResponseBodyInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyInstancesTags>) };
    inline ListInstancesResponseBodyInstances& setTags(const vector<Models::ListInstancesResponseBodyInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyInstances& setTags(vector<Models::ListInstancesResponseBodyInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminalUrl Field Functions 
    bool hasTerminalUrl() const { return this->terminalUrl_ != nullptr;};
    void deleteTerminalUrl() { this->terminalUrl_ = nullptr;};
    inline string terminalUrl() const { DARABONBA_PTR_GET_DEFAULT(terminalUrl_, "") };
    inline ListInstancesResponseBodyInstances& setTerminalUrl(string terminalUrl) { DARABONBA_PTR_SET_VALUE(terminalUrl_, terminalUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListInstancesResponseBodyInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListInstancesResponseBodyInstances& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, Models::ListInstancesResponseBodyInstancesUserVpc) };
    inline Models::ListInstancesResponseBodyInstancesUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, Models::ListInstancesResponseBodyInstancesUserVpc) };
    inline ListInstancesResponseBodyInstances& setUserVpc(const Models::ListInstancesResponseBodyInstancesUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline ListInstancesResponseBodyInstances& setUserVpc(Models::ListInstancesResponseBodyInstancesUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // webIDEUrl Field Functions 
    bool hasWebIDEUrl() const { return this->webIDEUrl_ != nullptr;};
    void deleteWebIDEUrl() { this->webIDEUrl_ = nullptr;};
    inline string webIDEUrl() const { DARABONBA_PTR_GET_DEFAULT(webIDEUrl_, "") };
    inline ListInstancesResponseBodyInstances& setWebIDEUrl(string webIDEUrl) { DARABONBA_PTR_SET_VALUE(webIDEUrl_, webIDEUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListInstancesResponseBodyInstances& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListInstancesResponseBodyInstances& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string workspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline ListInstancesResponseBodyInstances& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The accelerator type of the instance. Valid values:
    // 
    // *   CPU
    // *   GPU
    std::shared_ptr<string> acceleratorType_ = nullptr;
    // The accessibility. Valid values:
    // 
    // *   PRIVATE (default): The instances are accessible only to you and the administrator of the workspace.
    // *   PUBLIC: The instances are accessible only to all members in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The accumulated running duration. Unit: milliseconds.
    std::shared_ptr<int64_t> accumulatedRunningTimeInMs_ = nullptr;
    // The affinity configuration.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesAffinity> affinity_ = nullptr;
    // The cloud disks of the instance.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesCloudDisks>> cloudDisks_ = nullptr;
    // The credential configuration.
    std::shared_ptr<Models::CredentialConfig> credentialConfig_ = nullptr;
    // The datasets.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesDatasets>> datasets_ = nullptr;
    // The NVIDIA driver configuration.
    std::shared_ptr<string> driver_ = nullptr;
    // The dynamic mount configurations.
    std::shared_ptr<Models::DynamicMount> dynamicMount_ = nullptr;
    // The ECS instance type of the instance.
    std::shared_ptr<string> ecsSpec_ = nullptr;
    // The environment variables.
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the instance was modified.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The rule for stopping idle instances.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesIdleInstanceCuller> idleInstanceCuller_ = nullptr;
    // The Base64-encoded account and password for the user\\"s private image. The password will be hidden.
    std::shared_ptr<string> imageAuth_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The image address.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The scheduled stop task.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesInstanceShutdownTimer> instanceShutdownTimer_ = nullptr;
    // The instance snapshots.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesInstanceSnapshotList>> instanceSnapshotList_ = nullptr;
    // The instance URL.
    std::shared_ptr<string> instanceUrl_ = nullptr;
    // The JupyterLab URL.
    std::shared_ptr<string> jupyterlabUrl_ = nullptr;
    // The custom labels.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesLabels>> labels_ = nullptr;
    // The user image that was latest saved.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesLatestSnapshot> latestSnapshot_ = nullptr;
    std::shared_ptr<string> oversoldInfo_ = nullptr;
    std::shared_ptr<string> oversoldType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The priority based on which resources are allocated to instances. Resources are preferentially allocated to instances with higher priorities.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The error code of the instance.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The cause of the instance error.
    std::shared_ptr<string> reasonMessage_ = nullptr;
    // The resource configurations.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesRequestedResource> requestedResource_ = nullptr;
    // The resource ID. This parameter is valid only if you set PaymentType to Subscription.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The specifications.
    // 
    // *   In pay-as-you-go scenarios, the value is the specifications of the purchased ECS instance type.
    // *   In subscription scenarios, the value is the requested number of CPU cores and memory size.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The instance status.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstancesTags>> tags_ = nullptr;
    // The terminal URL.
    std::shared_ptr<string> terminalUrl_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The virtual private cloud (VPC) configurations.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesUserVpc> userVpc_ = nullptr;
    // The Web IDE URL.
    std::shared_ptr<string> webIDEUrl_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The workspace name.
    std::shared_ptr<string> workspaceName_ = nullptr;
    // The storage for the workspace. If you leave this parameter empty, the workspace uses File Storage NAS (NAS) storage, cloud disks, or local disks in sequence.
    std::shared_ptr<string> workspaceSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
