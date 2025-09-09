// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyAffinity.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyCloudDisks.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDatasets.hpp>
#include <alibabacloud/models/DynamicMount.hpp>
#include <map>
#include <alibabacloud/models/GetInstanceResponseBodyIdleInstanceCuller.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceShutdownTimer.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceSnapshotList.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyLabels.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyLatestSnapshot.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyNodeErrorRecovery.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyRequestedResource.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyTags.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
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
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeErrorRecovery, nodeErrorRecovery_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProxyPath, proxyPath_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_TO_JSON(UserCommandId, userCommandId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(WorkspaceSource, workspaceSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AccumulatedRunningTimeInMs, accumulatedRunningTimeInMs_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(CloudDisks, cloudDisks_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(DynamicMount, dynamicMount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
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
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeErrorRecovery, nodeErrorRecovery_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProxyPath, proxyPath_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestedResource, requestedResource_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminalUrl, terminalUrl_);
      DARABONBA_PTR_FROM_JSON(UserCommandId, userCommandId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WebIDEUrl, webIDEUrl_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceSource, workspaceSource_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->accessibility_ != nullptr && this->accumulatedRunningTimeInMs_ != nullptr && this->affinity_ != nullptr && this->cloudDisks_ != nullptr && this->code_ != nullptr
        && this->credentialConfig_ != nullptr && this->datasets_ != nullptr && this->driver_ != nullptr && this->dynamicMount_ != nullptr && this->ecsSpec_ != nullptr
        && this->environmentVariables_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->httpStatusCode_ != nullptr && this->idleInstanceCuller_ != nullptr
        && this->imageAuth_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->imageUrl_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->instanceShutdownTimer_ != nullptr && this->instanceSnapshotList_ != nullptr && this->instanceUrl_ != nullptr && this->jupyterlabUrl_ != nullptr
        && this->labels_ != nullptr && this->latestSnapshot_ != nullptr && this->message_ != nullptr && this->nodeErrorRecovery_ != nullptr && this->paymentType_ != nullptr
        && this->priority_ != nullptr && this->proxyPath_ != nullptr && this->reasonCode_ != nullptr && this->reasonMessage_ != nullptr && this->requestId_ != nullptr
        && this->requestedResource_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr && this->status_ != nullptr && this->success_ != nullptr
        && this->tags_ != nullptr && this->terminalUrl_ != nullptr && this->userCommandId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr
        && this->userVpc_ != nullptr && this->webIDEUrl_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr && this->workspaceSource_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline GetInstanceResponseBody& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetInstanceResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accumulatedRunningTimeInMs Field Functions 
    bool hasAccumulatedRunningTimeInMs() const { return this->accumulatedRunningTimeInMs_ != nullptr;};
    void deleteAccumulatedRunningTimeInMs() { this->accumulatedRunningTimeInMs_ = nullptr;};
    inline int64_t accumulatedRunningTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(accumulatedRunningTimeInMs_, 0L) };
    inline GetInstanceResponseBody& setAccumulatedRunningTimeInMs(int64_t accumulatedRunningTimeInMs) { DARABONBA_PTR_SET_VALUE(accumulatedRunningTimeInMs_, accumulatedRunningTimeInMs) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline const GetInstanceResponseBodyAffinity & affinity() const { DARABONBA_PTR_GET_CONST(affinity_, GetInstanceResponseBodyAffinity) };
    inline GetInstanceResponseBodyAffinity affinity() { DARABONBA_PTR_GET(affinity_, GetInstanceResponseBodyAffinity) };
    inline GetInstanceResponseBody& setAffinity(const GetInstanceResponseBodyAffinity & affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };
    inline GetInstanceResponseBody& setAffinity(GetInstanceResponseBodyAffinity && affinity) { DARABONBA_PTR_SET_RVALUE(affinity_, affinity) };


    // cloudDisks Field Functions 
    bool hasCloudDisks() const { return this->cloudDisks_ != nullptr;};
    void deleteCloudDisks() { this->cloudDisks_ = nullptr;};
    inline const vector<GetInstanceResponseBodyCloudDisks> & cloudDisks() const { DARABONBA_PTR_GET_CONST(cloudDisks_, vector<GetInstanceResponseBodyCloudDisks>) };
    inline vector<GetInstanceResponseBodyCloudDisks> cloudDisks() { DARABONBA_PTR_GET(cloudDisks_, vector<GetInstanceResponseBodyCloudDisks>) };
    inline GetInstanceResponseBody& setCloudDisks(const vector<GetInstanceResponseBodyCloudDisks> & cloudDisks) { DARABONBA_PTR_SET_VALUE(cloudDisks_, cloudDisks) };
    inline GetInstanceResponseBody& setCloudDisks(vector<GetInstanceResponseBodyCloudDisks> && cloudDisks) { DARABONBA_PTR_SET_RVALUE(cloudDisks_, cloudDisks) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GetInstanceResponseBody& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GetInstanceResponseBody& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<GetInstanceResponseBodyDatasets> & datasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<GetInstanceResponseBodyDatasets>) };
    inline vector<GetInstanceResponseBodyDatasets> datasets() { DARABONBA_PTR_GET(datasets_, vector<GetInstanceResponseBodyDatasets>) };
    inline GetInstanceResponseBody& setDatasets(const vector<GetInstanceResponseBodyDatasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline GetInstanceResponseBody& setDatasets(vector<GetInstanceResponseBodyDatasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline GetInstanceResponseBody& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // dynamicMount Field Functions 
    bool hasDynamicMount() const { return this->dynamicMount_ != nullptr;};
    void deleteDynamicMount() { this->dynamicMount_ = nullptr;};
    inline const DynamicMount & dynamicMount() const { DARABONBA_PTR_GET_CONST(dynamicMount_, DynamicMount) };
    inline DynamicMount dynamicMount() { DARABONBA_PTR_GET(dynamicMount_, DynamicMount) };
    inline GetInstanceResponseBody& setDynamicMount(const DynamicMount & dynamicMount) { DARABONBA_PTR_SET_VALUE(dynamicMount_, dynamicMount) };
    inline GetInstanceResponseBody& setDynamicMount(DynamicMount && dynamicMount) { DARABONBA_PTR_SET_RVALUE(dynamicMount_, dynamicMount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline GetInstanceResponseBody& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline GetInstanceResponseBody& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline GetInstanceResponseBody& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetInstanceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetInstanceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // idleInstanceCuller Field Functions 
    bool hasIdleInstanceCuller() const { return this->idleInstanceCuller_ != nullptr;};
    void deleteIdleInstanceCuller() { this->idleInstanceCuller_ = nullptr;};
    inline const GetInstanceResponseBodyIdleInstanceCuller & idleInstanceCuller() const { DARABONBA_PTR_GET_CONST(idleInstanceCuller_, GetInstanceResponseBodyIdleInstanceCuller) };
    inline GetInstanceResponseBodyIdleInstanceCuller idleInstanceCuller() { DARABONBA_PTR_GET(idleInstanceCuller_, GetInstanceResponseBodyIdleInstanceCuller) };
    inline GetInstanceResponseBody& setIdleInstanceCuller(const GetInstanceResponseBodyIdleInstanceCuller & idleInstanceCuller) { DARABONBA_PTR_SET_VALUE(idleInstanceCuller_, idleInstanceCuller) };
    inline GetInstanceResponseBody& setIdleInstanceCuller(GetInstanceResponseBodyIdleInstanceCuller && idleInstanceCuller) { DARABONBA_PTR_SET_RVALUE(idleInstanceCuller_, idleInstanceCuller) };


    // imageAuth Field Functions 
    bool hasImageAuth() const { return this->imageAuth_ != nullptr;};
    void deleteImageAuth() { this->imageAuth_ = nullptr;};
    inline string imageAuth() const { DARABONBA_PTR_GET_DEFAULT(imageAuth_, "") };
    inline GetInstanceResponseBody& setImageAuth(string imageAuth) { DARABONBA_PTR_SET_VALUE(imageAuth_, imageAuth) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetInstanceResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetInstanceResponseBody& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetInstanceResponseBody& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceShutdownTimer Field Functions 
    bool hasInstanceShutdownTimer() const { return this->instanceShutdownTimer_ != nullptr;};
    void deleteInstanceShutdownTimer() { this->instanceShutdownTimer_ = nullptr;};
    inline const GetInstanceResponseBodyInstanceShutdownTimer & instanceShutdownTimer() const { DARABONBA_PTR_GET_CONST(instanceShutdownTimer_, GetInstanceResponseBodyInstanceShutdownTimer) };
    inline GetInstanceResponseBodyInstanceShutdownTimer instanceShutdownTimer() { DARABONBA_PTR_GET(instanceShutdownTimer_, GetInstanceResponseBodyInstanceShutdownTimer) };
    inline GetInstanceResponseBody& setInstanceShutdownTimer(const GetInstanceResponseBodyInstanceShutdownTimer & instanceShutdownTimer) { DARABONBA_PTR_SET_VALUE(instanceShutdownTimer_, instanceShutdownTimer) };
    inline GetInstanceResponseBody& setInstanceShutdownTimer(GetInstanceResponseBodyInstanceShutdownTimer && instanceShutdownTimer) { DARABONBA_PTR_SET_RVALUE(instanceShutdownTimer_, instanceShutdownTimer) };


    // instanceSnapshotList Field Functions 
    bool hasInstanceSnapshotList() const { return this->instanceSnapshotList_ != nullptr;};
    void deleteInstanceSnapshotList() { this->instanceSnapshotList_ = nullptr;};
    inline const vector<GetInstanceResponseBodyInstanceSnapshotList> & instanceSnapshotList() const { DARABONBA_PTR_GET_CONST(instanceSnapshotList_, vector<GetInstanceResponseBodyInstanceSnapshotList>) };
    inline vector<GetInstanceResponseBodyInstanceSnapshotList> instanceSnapshotList() { DARABONBA_PTR_GET(instanceSnapshotList_, vector<GetInstanceResponseBodyInstanceSnapshotList>) };
    inline GetInstanceResponseBody& setInstanceSnapshotList(const vector<GetInstanceResponseBodyInstanceSnapshotList> & instanceSnapshotList) { DARABONBA_PTR_SET_VALUE(instanceSnapshotList_, instanceSnapshotList) };
    inline GetInstanceResponseBody& setInstanceSnapshotList(vector<GetInstanceResponseBodyInstanceSnapshotList> && instanceSnapshotList) { DARABONBA_PTR_SET_RVALUE(instanceSnapshotList_, instanceSnapshotList) };


    // instanceUrl Field Functions 
    bool hasInstanceUrl() const { return this->instanceUrl_ != nullptr;};
    void deleteInstanceUrl() { this->instanceUrl_ = nullptr;};
    inline string instanceUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceUrl_, "") };
    inline GetInstanceResponseBody& setInstanceUrl(string instanceUrl) { DARABONBA_PTR_SET_VALUE(instanceUrl_, instanceUrl) };


    // jupyterlabUrl Field Functions 
    bool hasJupyterlabUrl() const { return this->jupyterlabUrl_ != nullptr;};
    void deleteJupyterlabUrl() { this->jupyterlabUrl_ = nullptr;};
    inline string jupyterlabUrl() const { DARABONBA_PTR_GET_DEFAULT(jupyterlabUrl_, "") };
    inline GetInstanceResponseBody& setJupyterlabUrl(string jupyterlabUrl) { DARABONBA_PTR_SET_VALUE(jupyterlabUrl_, jupyterlabUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetInstanceResponseBodyLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetInstanceResponseBodyLabels>) };
    inline vector<GetInstanceResponseBodyLabels> labels() { DARABONBA_PTR_GET(labels_, vector<GetInstanceResponseBodyLabels>) };
    inline GetInstanceResponseBody& setLabels(const vector<GetInstanceResponseBodyLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetInstanceResponseBody& setLabels(vector<GetInstanceResponseBodyLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestSnapshot Field Functions 
    bool hasLatestSnapshot() const { return this->latestSnapshot_ != nullptr;};
    void deleteLatestSnapshot() { this->latestSnapshot_ = nullptr;};
    inline const GetInstanceResponseBodyLatestSnapshot & latestSnapshot() const { DARABONBA_PTR_GET_CONST(latestSnapshot_, GetInstanceResponseBodyLatestSnapshot) };
    inline GetInstanceResponseBodyLatestSnapshot latestSnapshot() { DARABONBA_PTR_GET(latestSnapshot_, GetInstanceResponseBodyLatestSnapshot) };
    inline GetInstanceResponseBody& setLatestSnapshot(const GetInstanceResponseBodyLatestSnapshot & latestSnapshot) { DARABONBA_PTR_SET_VALUE(latestSnapshot_, latestSnapshot) };
    inline GetInstanceResponseBody& setLatestSnapshot(GetInstanceResponseBodyLatestSnapshot && latestSnapshot) { DARABONBA_PTR_SET_RVALUE(latestSnapshot_, latestSnapshot) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeErrorRecovery Field Functions 
    bool hasNodeErrorRecovery() const { return this->nodeErrorRecovery_ != nullptr;};
    void deleteNodeErrorRecovery() { this->nodeErrorRecovery_ = nullptr;};
    inline const GetInstanceResponseBodyNodeErrorRecovery & nodeErrorRecovery() const { DARABONBA_PTR_GET_CONST(nodeErrorRecovery_, GetInstanceResponseBodyNodeErrorRecovery) };
    inline GetInstanceResponseBodyNodeErrorRecovery nodeErrorRecovery() { DARABONBA_PTR_GET(nodeErrorRecovery_, GetInstanceResponseBodyNodeErrorRecovery) };
    inline GetInstanceResponseBody& setNodeErrorRecovery(const GetInstanceResponseBodyNodeErrorRecovery & nodeErrorRecovery) { DARABONBA_PTR_SET_VALUE(nodeErrorRecovery_, nodeErrorRecovery) };
    inline GetInstanceResponseBody& setNodeErrorRecovery(GetInstanceResponseBodyNodeErrorRecovery && nodeErrorRecovery) { DARABONBA_PTR_SET_RVALUE(nodeErrorRecovery_, nodeErrorRecovery) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline GetInstanceResponseBody& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // proxyPath Field Functions 
    bool hasProxyPath() const { return this->proxyPath_ != nullptr;};
    void deleteProxyPath() { this->proxyPath_ = nullptr;};
    inline string proxyPath() const { DARABONBA_PTR_GET_DEFAULT(proxyPath_, "") };
    inline GetInstanceResponseBody& setProxyPath(string proxyPath) { DARABONBA_PTR_SET_VALUE(proxyPath_, proxyPath) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetInstanceResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetInstanceResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestedResource Field Functions 
    bool hasRequestedResource() const { return this->requestedResource_ != nullptr;};
    void deleteRequestedResource() { this->requestedResource_ = nullptr;};
    inline const GetInstanceResponseBodyRequestedResource & requestedResource() const { DARABONBA_PTR_GET_CONST(requestedResource_, GetInstanceResponseBodyRequestedResource) };
    inline GetInstanceResponseBodyRequestedResource requestedResource() { DARABONBA_PTR_GET(requestedResource_, GetInstanceResponseBodyRequestedResource) };
    inline GetInstanceResponseBody& setRequestedResource(const GetInstanceResponseBodyRequestedResource & requestedResource) { DARABONBA_PTR_SET_VALUE(requestedResource_, requestedResource) };
    inline GetInstanceResponseBody& setRequestedResource(GetInstanceResponseBodyRequestedResource && requestedResource) { DARABONBA_PTR_SET_RVALUE(requestedResource_, requestedResource) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetInstanceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetInstanceResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetInstanceResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetInstanceResponseBodyTags>) };
    inline vector<GetInstanceResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetInstanceResponseBodyTags>) };
    inline GetInstanceResponseBody& setTags(const vector<GetInstanceResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBody& setTags(vector<GetInstanceResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminalUrl Field Functions 
    bool hasTerminalUrl() const { return this->terminalUrl_ != nullptr;};
    void deleteTerminalUrl() { this->terminalUrl_ = nullptr;};
    inline string terminalUrl() const { DARABONBA_PTR_GET_DEFAULT(terminalUrl_, "") };
    inline GetInstanceResponseBody& setTerminalUrl(string terminalUrl) { DARABONBA_PTR_SET_VALUE(terminalUrl_, terminalUrl) };


    // userCommandId Field Functions 
    bool hasUserCommandId() const { return this->userCommandId_ != nullptr;};
    void deleteUserCommandId() { this->userCommandId_ = nullptr;};
    inline string userCommandId() const { DARABONBA_PTR_GET_DEFAULT(userCommandId_, "") };
    inline GetInstanceResponseBody& setUserCommandId(string userCommandId) { DARABONBA_PTR_SET_VALUE(userCommandId_, userCommandId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetInstanceResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetInstanceResponseBodyUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetInstanceResponseBodyUserVpc) };
    inline GetInstanceResponseBodyUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, GetInstanceResponseBodyUserVpc) };
    inline GetInstanceResponseBody& setUserVpc(const GetInstanceResponseBodyUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetInstanceResponseBody& setUserVpc(GetInstanceResponseBodyUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // webIDEUrl Field Functions 
    bool hasWebIDEUrl() const { return this->webIDEUrl_ != nullptr;};
    void deleteWebIDEUrl() { this->webIDEUrl_ = nullptr;};
    inline string webIDEUrl() const { DARABONBA_PTR_GET_DEFAULT(webIDEUrl_, "") };
    inline GetInstanceResponseBody& setWebIDEUrl(string webIDEUrl) { DARABONBA_PTR_SET_VALUE(webIDEUrl_, webIDEUrl) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetInstanceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetInstanceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceSource Field Functions 
    bool hasWorkspaceSource() const { return this->workspaceSource_ != nullptr;};
    void deleteWorkspaceSource() { this->workspaceSource_ = nullptr;};
    inline string workspaceSource() const { DARABONBA_PTR_GET_DEFAULT(workspaceSource_, "") };
    inline GetInstanceResponseBody& setWorkspaceSource(string workspaceSource) { DARABONBA_PTR_SET_VALUE(workspaceSource_, workspaceSource) };


  protected:
    // The accelerator type of the instance.
    // 
    // Valid values:
    // 
    // *   CPU
    // *   GPU
    std::shared_ptr<string> acceleratorType_ = nullptr;
    // The accessibility. Valid values:
    // 
    // *   PRIVATE: Accessible only to you and the administrator of the workspace.
    // *   PUBLIC: Accessible to all members in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The accumulated running duration. Unit: milliseconds.
    std::shared_ptr<int64_t> accumulatedRunningTimeInMs_ = nullptr;
    // The affinity configuration.
    std::shared_ptr<GetInstanceResponseBodyAffinity> affinity_ = nullptr;
    // The cloud disks of the instance.
    std::shared_ptr<vector<GetInstanceResponseBodyCloudDisks>> cloudDisks_ = nullptr;
    // The status code. Valid values:
    // 
    // *   InternalError: All errors, except for parameter validation errors, are internal errors.
    // *   ValidationError: A parameter validation error.
    std::shared_ptr<string> code_ = nullptr;
    // The credential injection configuration.
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The datasets.
    std::shared_ptr<vector<GetInstanceResponseBodyDatasets>> datasets_ = nullptr;
    // The NVIDIA driver configuration.
    std::shared_ptr<string> driver_ = nullptr;
    // The dynamic mount configuration.
    std::shared_ptr<DynamicMount> dynamicMount_ = nullptr;
    // The ECS instance type of the instance.
    std::shared_ptr<string> ecsSpec_ = nullptr;
    // The environment variables.
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    // The creation time of the instance.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The last modified time of the instance.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The HTTP status code. Valid values:
    // 
    // *   400
    // *   404
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The automatic shutdown settings.
    std::shared_ptr<GetInstanceResponseBodyIdleInstanceCuller> idleInstanceCuller_ = nullptr;
    // The Base64-encoded account and password for the user‘s private image. The password will be hidden.
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
    // The scheduled stop tasks.
    std::shared_ptr<GetInstanceResponseBodyInstanceShutdownTimer> instanceShutdownTimer_ = nullptr;
    // The instance snapshots.
    std::shared_ptr<vector<GetInstanceResponseBodyInstanceSnapshotList>> instanceSnapshotList_ = nullptr;
    // The instance URL.
    std::shared_ptr<string> instanceUrl_ = nullptr;
    // The JupyterLab URL.
    std::shared_ptr<string> jupyterlabUrl_ = nullptr;
    // The custom tags.
    std::shared_ptr<vector<GetInstanceResponseBodyLabels>> labels_ = nullptr;
    // The latest user image saved.
    std::shared_ptr<GetInstanceResponseBodyLatestSnapshot> latestSnapshot_ = nullptr;
    // The error message. Valid values:
    // 
    // *   If the request is successful, null is returned.
    // *   If the request fails, the cause for the failure is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The error recovery configuration of the node.
    std::shared_ptr<GetInstanceResponseBodyNodeErrorRecovery> nodeErrorRecovery_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The priority based on which resources are allocated to instances.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // The proxy path.
    std::shared_ptr<string> proxyPath_ = nullptr;
    // The error code of the instance.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The cause of the instance error.
    std::shared_ptr<string> reasonMessage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource configurations in subscription scenarios.
    std::shared_ptr<GetInstanceResponseBodyRequestedResource> requestedResource_ = nullptr;
    // The resource ID. This parameter is available if the billing method is subscription.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The specification type.
    // 
    // *   For subscription, this is the requested CPU and memory size.
    // *   For pay-as-you-go, this is the selected ECS instance type.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The instance status.
    // 
    // Valid values:
    // 
    // *   Creating
    // *   SaveFailed
    // *   Stopped
    // *   Failed
    // *   ResourceAllocating
    // *   Stopping
    // *   Updating
    // *   Saving
    // *   Queuing
    // *   Recovering
    // *   Starting
    // *   Running
    // *   Saved
    // *   Deleting
    // *   EnvPreparing
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetInstanceResponseBodyTags>> tags_ = nullptr;
    // The terminal URL.
    std::shared_ptr<string> terminalUrl_ = nullptr;
    std::shared_ptr<string> userCommandId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The virtual private cloud (VPC) configurations.
    std::shared_ptr<GetInstanceResponseBodyUserVpc> userVpc_ = nullptr;
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
