// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICE_HPP_
#define ALIBABACLOUD_MODELS_SERVICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ServiceInstanceCountInResource.hpp>
#include <vector>
#include <alibabacloud/models/ServiceLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class Service : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Service& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppSpecName, appSpecName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AutoscalerEnabled, autoscalerEnabled_);
      DARABONBA_PTR_TO_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CronscalerEnabled, cronscalerEnabled_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(GPUCorePercentage, GPUCorePercentage_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InstanceCountInResource, instanceCountInResource_);
      DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_TO_JSON(PendingInstance, pendingInstance_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceAlias, resourceAlias_);
      DARABONBA_PTR_TO_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RoleAttrs, roleAttrs_);
      DARABONBA_PTR_TO_JSON(RunningInstance, runningInstance_);
      DARABONBA_PTR_TO_JSON(SafetyLock, safetyLock_);
      DARABONBA_PTR_TO_JSON(SecondaryInternetEndpoint, secondaryInternetEndpoint_);
      DARABONBA_PTR_TO_JSON(SecondaryIntranetEndpoint, secondaryIntranetEndpoint_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceUid, serviceUid_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalInstance, totalInstance_);
      DARABONBA_PTR_TO_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Service& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppSpecName, appSpecName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AutoscalerEnabled, autoscalerEnabled_);
      DARABONBA_PTR_FROM_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CronscalerEnabled, cronscalerEnabled_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(GPUCorePercentage, GPUCorePercentage_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InstanceCountInResource, instanceCountInResource_);
      DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ParentUid, parentUid_);
      DARABONBA_PTR_FROM_JSON(PendingInstance, pendingInstance_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceAlias, resourceAlias_);
      DARABONBA_PTR_FROM_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RoleAttrs, roleAttrs_);
      DARABONBA_PTR_FROM_JSON(RunningInstance, runningInstance_);
      DARABONBA_PTR_FROM_JSON(SafetyLock, safetyLock_);
      DARABONBA_PTR_FROM_JSON(SecondaryInternetEndpoint, secondaryInternetEndpoint_);
      DARABONBA_PTR_FROM_JSON(SecondaryIntranetEndpoint, secondaryIntranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceUid, serviceUid_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalInstance, totalInstance_);
      DARABONBA_PTR_FROM_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Service() = default ;
    Service(const Service &) = default ;
    Service(Service &&) = default ;
    Service(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Service() = default ;
    Service& operator=(const Service &) = default ;
    Service& operator=(Service &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->appConfig_ != nullptr && this->appSpecName_ != nullptr && this->appType_ != nullptr && this->appVersion_ != nullptr && this->autoscalerEnabled_ != nullptr
        && this->callerUid_ != nullptr && this->cpu_ != nullptr && this->createTime_ != nullptr && this->cronscalerEnabled_ != nullptr && this->currentVersion_ != nullptr
        && this->extraData_ != nullptr && this->GPUCorePercentage_ != nullptr && this->GPUMemory_ != nullptr && this->gateway_ != nullptr && this->gpu_ != nullptr
        && this->image_ != nullptr && this->instanceCountInResource_ != nullptr && this->internetEndpoint_ != nullptr && this->intranetEndpoint_ != nullptr && this->labels_ != nullptr
        && this->latestVersion_ != nullptr && this->memory_ != nullptr && this->message_ != nullptr && this->namespace_ != nullptr && this->parentUid_ != nullptr
        && this->pendingInstance_ != nullptr && this->quotaId_ != nullptr && this->reason_ != nullptr && this->region_ != nullptr && this->requestId_ != nullptr
        && this->resource_ != nullptr && this->resourceAlias_ != nullptr && this->resourceBurstable_ != nullptr && this->role_ != nullptr && this->roleAttrs_ != nullptr
        && this->runningInstance_ != nullptr && this->safetyLock_ != nullptr && this->secondaryInternetEndpoint_ != nullptr && this->secondaryIntranetEndpoint_ != nullptr && this->serviceConfig_ != nullptr
        && this->serviceGroup_ != nullptr && this->serviceId_ != nullptr && this->serviceName_ != nullptr && this->serviceUid_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->totalInstance_ != nullptr && this->trafficState_ != nullptr && this->updateTime_ != nullptr && this->weight_ != nullptr
        && this->workspaceId_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline Service& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string appConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline Service& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appSpecName Field Functions 
    bool hasAppSpecName() const { return this->appSpecName_ != nullptr;};
    void deleteAppSpecName() { this->appSpecName_ = nullptr;};
    inline string appSpecName() const { DARABONBA_PTR_GET_DEFAULT(appSpecName_, "") };
    inline Service& setAppSpecName(string appSpecName) { DARABONBA_PTR_SET_VALUE(appSpecName_, appSpecName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline Service& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline Service& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // autoscalerEnabled Field Functions 
    bool hasAutoscalerEnabled() const { return this->autoscalerEnabled_ != nullptr;};
    void deleteAutoscalerEnabled() { this->autoscalerEnabled_ = nullptr;};
    inline bool autoscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoscalerEnabled_, false) };
    inline Service& setAutoscalerEnabled(bool autoscalerEnabled) { DARABONBA_PTR_SET_VALUE(autoscalerEnabled_, autoscalerEnabled) };


    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline string callerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
    inline Service& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline Service& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Service& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cronscalerEnabled Field Functions 
    bool hasCronscalerEnabled() const { return this->cronscalerEnabled_ != nullptr;};
    void deleteCronscalerEnabled() { this->cronscalerEnabled_ = nullptr;};
    inline bool cronscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(cronscalerEnabled_, false) };
    inline Service& setCronscalerEnabled(bool cronscalerEnabled) { DARABONBA_PTR_SET_VALUE(cronscalerEnabled_, cronscalerEnabled) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int32_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
    inline Service& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline Service& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // GPUCorePercentage Field Functions 
    bool hasGPUCorePercentage() const { return this->GPUCorePercentage_ != nullptr;};
    void deleteGPUCorePercentage() { this->GPUCorePercentage_ = nullptr;};
    inline int32_t GPUCorePercentage() const { DARABONBA_PTR_GET_DEFAULT(GPUCorePercentage_, 0) };
    inline Service& setGPUCorePercentage(int32_t GPUCorePercentage) { DARABONBA_PTR_SET_VALUE(GPUCorePercentage_, GPUCorePercentage) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline int32_t GPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0) };
    inline Service& setGPUMemory(int32_t GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline Service& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline Service& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline Service& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceCountInResource Field Functions 
    bool hasInstanceCountInResource() const { return this->instanceCountInResource_ != nullptr;};
    void deleteInstanceCountInResource() { this->instanceCountInResource_ = nullptr;};
    inline const ServiceInstanceCountInResource & instanceCountInResource() const { DARABONBA_PTR_GET_CONST(instanceCountInResource_, ServiceInstanceCountInResource) };
    inline ServiceInstanceCountInResource instanceCountInResource() { DARABONBA_PTR_GET(instanceCountInResource_, ServiceInstanceCountInResource) };
    inline Service& setInstanceCountInResource(const ServiceInstanceCountInResource & instanceCountInResource) { DARABONBA_PTR_SET_VALUE(instanceCountInResource_, instanceCountInResource) };
    inline Service& setInstanceCountInResource(ServiceInstanceCountInResource && instanceCountInResource) { DARABONBA_PTR_SET_RVALUE(instanceCountInResource_, instanceCountInResource) };


    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string internetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline Service& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline Service& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ServiceLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ServiceLabels>) };
    inline vector<ServiceLabels> labels() { DARABONBA_PTR_GET(labels_, vector<ServiceLabels>) };
    inline Service& setLabels(const vector<ServiceLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Service& setLabels(vector<ServiceLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline int32_t latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, 0) };
    inline Service& setLatestVersion(int32_t latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Service& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Service& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Service& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parentUid Field Functions 
    bool hasParentUid() const { return this->parentUid_ != nullptr;};
    void deleteParentUid() { this->parentUid_ = nullptr;};
    inline string parentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
    inline Service& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


    // pendingInstance Field Functions 
    bool hasPendingInstance() const { return this->pendingInstance_ != nullptr;};
    void deletePendingInstance() { this->pendingInstance_ = nullptr;};
    inline int32_t pendingInstance() const { DARABONBA_PTR_GET_DEFAULT(pendingInstance_, 0) };
    inline Service& setPendingInstance(int32_t pendingInstance) { DARABONBA_PTR_SET_VALUE(pendingInstance_, pendingInstance) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline Service& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline Service& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline Service& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Service& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline Service& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceAlias Field Functions 
    bool hasResourceAlias() const { return this->resourceAlias_ != nullptr;};
    void deleteResourceAlias() { this->resourceAlias_ = nullptr;};
    inline string resourceAlias() const { DARABONBA_PTR_GET_DEFAULT(resourceAlias_, "") };
    inline Service& setResourceAlias(string resourceAlias) { DARABONBA_PTR_SET_VALUE(resourceAlias_, resourceAlias) };


    // resourceBurstable Field Functions 
    bool hasResourceBurstable() const { return this->resourceBurstable_ != nullptr;};
    void deleteResourceBurstable() { this->resourceBurstable_ = nullptr;};
    inline bool resourceBurstable() const { DARABONBA_PTR_GET_DEFAULT(resourceBurstable_, false) };
    inline Service& setResourceBurstable(bool resourceBurstable) { DARABONBA_PTR_SET_VALUE(resourceBurstable_, resourceBurstable) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline Service& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleAttrs Field Functions 
    bool hasRoleAttrs() const { return this->roleAttrs_ != nullptr;};
    void deleteRoleAttrs() { this->roleAttrs_ = nullptr;};
    inline string roleAttrs() const { DARABONBA_PTR_GET_DEFAULT(roleAttrs_, "") };
    inline Service& setRoleAttrs(string roleAttrs) { DARABONBA_PTR_SET_VALUE(roleAttrs_, roleAttrs) };


    // runningInstance Field Functions 
    bool hasRunningInstance() const { return this->runningInstance_ != nullptr;};
    void deleteRunningInstance() { this->runningInstance_ = nullptr;};
    inline int32_t runningInstance() const { DARABONBA_PTR_GET_DEFAULT(runningInstance_, 0) };
    inline Service& setRunningInstance(int32_t runningInstance) { DARABONBA_PTR_SET_VALUE(runningInstance_, runningInstance) };


    // safetyLock Field Functions 
    bool hasSafetyLock() const { return this->safetyLock_ != nullptr;};
    void deleteSafetyLock() { this->safetyLock_ = nullptr;};
    inline string safetyLock() const { DARABONBA_PTR_GET_DEFAULT(safetyLock_, "") };
    inline Service& setSafetyLock(string safetyLock) { DARABONBA_PTR_SET_VALUE(safetyLock_, safetyLock) };


    // secondaryInternetEndpoint Field Functions 
    bool hasSecondaryInternetEndpoint() const { return this->secondaryInternetEndpoint_ != nullptr;};
    void deleteSecondaryInternetEndpoint() { this->secondaryInternetEndpoint_ = nullptr;};
    inline string secondaryInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(secondaryInternetEndpoint_, "") };
    inline Service& setSecondaryInternetEndpoint(string secondaryInternetEndpoint) { DARABONBA_PTR_SET_VALUE(secondaryInternetEndpoint_, secondaryInternetEndpoint) };


    // secondaryIntranetEndpoint Field Functions 
    bool hasSecondaryIntranetEndpoint() const { return this->secondaryIntranetEndpoint_ != nullptr;};
    void deleteSecondaryIntranetEndpoint() { this->secondaryIntranetEndpoint_ = nullptr;};
    inline string secondaryIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(secondaryIntranetEndpoint_, "") };
    inline Service& setSecondaryIntranetEndpoint(string secondaryIntranetEndpoint) { DARABONBA_PTR_SET_VALUE(secondaryIntranetEndpoint_, secondaryIntranetEndpoint) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string serviceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline Service& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string serviceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline Service& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline Service& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline Service& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceUid Field Functions 
    bool hasServiceUid() const { return this->serviceUid_ != nullptr;};
    void deleteServiceUid() { this->serviceUid_ = nullptr;};
    inline string serviceUid() const { DARABONBA_PTR_GET_DEFAULT(serviceUid_, "") };
    inline Service& setServiceUid(string serviceUid) { DARABONBA_PTR_SET_VALUE(serviceUid_, serviceUid) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline Service& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Service& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalInstance Field Functions 
    bool hasTotalInstance() const { return this->totalInstance_ != nullptr;};
    void deleteTotalInstance() { this->totalInstance_ = nullptr;};
    inline int32_t totalInstance() const { DARABONBA_PTR_GET_DEFAULT(totalInstance_, 0) };
    inline Service& setTotalInstance(int32_t totalInstance) { DARABONBA_PTR_SET_VALUE(totalInstance_, totalInstance) };


    // trafficState Field Functions 
    bool hasTrafficState() const { return this->trafficState_ != nullptr;};
    void deleteTrafficState() { this->trafficState_ = nullptr;};
    inline string trafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
    inline Service& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Service& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline Service& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Service& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> appConfig_ = nullptr;
    std::shared_ptr<string> appSpecName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<bool> autoscalerEnabled_ = nullptr;
    std::shared_ptr<string> callerUid_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> cronscalerEnabled_ = nullptr;
    std::shared_ptr<int32_t> currentVersion_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    std::shared_ptr<int32_t> GPUCorePercentage_ = nullptr;
    std::shared_ptr<int32_t> GPUMemory_ = nullptr;
    std::shared_ptr<string> gateway_ = nullptr;
    std::shared_ptr<int32_t> gpu_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<ServiceInstanceCountInResource> instanceCountInResource_ = nullptr;
    std::shared_ptr<string> internetEndpoint_ = nullptr;
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    std::shared_ptr<vector<ServiceLabels>> labels_ = nullptr;
    std::shared_ptr<int32_t> latestVersion_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> parentUid_ = nullptr;
    std::shared_ptr<int32_t> pendingInstance_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceAlias_ = nullptr;
    std::shared_ptr<bool> resourceBurstable_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> roleAttrs_ = nullptr;
    std::shared_ptr<int32_t> runningInstance_ = nullptr;
    std::shared_ptr<string> safetyLock_ = nullptr;
    std::shared_ptr<string> secondaryInternetEndpoint_ = nullptr;
    std::shared_ptr<string> secondaryIntranetEndpoint_ = nullptr;
    std::shared_ptr<string> serviceConfig_ = nullptr;
    std::shared_ptr<string> serviceGroup_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> serviceUid_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalInstance_ = nullptr;
    std::shared_ptr<string> trafficState_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
