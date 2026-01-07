// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICE_HPP_
#define ALIBABACLOUD_MODELS_SERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->labelKey_ == nullptr
        && this->labelValue_ == nullptr; };
      // labelKey Field Functions 
      bool hasLabelKey() const { return this->labelKey_ != nullptr;};
      void deleteLabelKey() { this->labelKey_ = nullptr;};
      inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
      inline Labels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


      // labelValue Field Functions 
      bool hasLabelValue() const { return this->labelValue_ != nullptr;};
      void deleteLabelValue() { this->labelValue_ = nullptr;};
      inline string getLabelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
      inline Labels& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


    protected:
      shared_ptr<string> labelKey_ {};
      shared_ptr<string> labelValue_ {};
    };

    class InstanceCountInResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceCountInResource& obj) { 
        DARABONBA_PTR_TO_JSON(Dedicated, dedicated_);
        DARABONBA_PTR_TO_JSON(Public, public_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceCountInResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Dedicated, dedicated_);
        DARABONBA_PTR_FROM_JSON(Public, public_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
      };
      InstanceCountInResource() = default ;
      InstanceCountInResource(const InstanceCountInResource &) = default ;
      InstanceCountInResource(InstanceCountInResource &&) = default ;
      InstanceCountInResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceCountInResource() = default ;
      InstanceCountInResource& operator=(const InstanceCountInResource &) = default ;
      InstanceCountInResource& operator=(InstanceCountInResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dedicated_ == nullptr
        && this->public_ == nullptr && this->quota_ == nullptr; };
      // dedicated Field Functions 
      bool hasDedicated() const { return this->dedicated_ != nullptr;};
      void deleteDedicated() { this->dedicated_ = nullptr;};
      inline int32_t getDedicated() const { DARABONBA_PTR_GET_DEFAULT(dedicated_, 0) };
      inline InstanceCountInResource& setDedicated(int32_t dedicated) { DARABONBA_PTR_SET_VALUE(dedicated_, dedicated) };


      // public Field Functions 
      bool hasPublic() const { return this->public_ != nullptr;};
      void deletePublic() { this->public_ = nullptr;};
      inline int32_t getPublic() const { DARABONBA_PTR_GET_DEFAULT(public_, 0) };
      inline InstanceCountInResource& setPublic(int32_t _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
      inline InstanceCountInResource& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    protected:
      shared_ptr<int32_t> dedicated_ {};
      shared_ptr<int32_t> public_ {};
      shared_ptr<int32_t> quota_ {};
    };

    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->appConfig_ == nullptr && this->appSpecName_ == nullptr && this->appType_ == nullptr && this->appVersion_ == nullptr && this->autoscalerEnabled_ == nullptr
        && this->callerUid_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->cronscalerEnabled_ == nullptr && this->currentVersion_ == nullptr
        && this->extraData_ == nullptr && this->GPUCorePercentage_ == nullptr && this->GPUMemory_ == nullptr && this->gateway_ == nullptr && this->gpu_ == nullptr
        && this->image_ == nullptr && this->instanceCountInResource_ == nullptr && this->internetEndpoint_ == nullptr && this->intranetEndpoint_ == nullptr && this->labels_ == nullptr
        && this->latestVersion_ == nullptr && this->memory_ == nullptr && this->message_ == nullptr && this->namespace_ == nullptr && this->parentUid_ == nullptr
        && this->pendingInstance_ == nullptr && this->quotaId_ == nullptr && this->reason_ == nullptr && this->region_ == nullptr && this->requestId_ == nullptr
        && this->resource_ == nullptr && this->resourceAlias_ == nullptr && this->resourceBurstable_ == nullptr && this->role_ == nullptr && this->roleAttrs_ == nullptr
        && this->runningInstance_ == nullptr && this->safetyLock_ == nullptr && this->secondaryInternetEndpoint_ == nullptr && this->secondaryIntranetEndpoint_ == nullptr && this->serviceConfig_ == nullptr
        && this->serviceGroup_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceUid_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->totalInstance_ == nullptr && this->trafficState_ == nullptr && this->updateTime_ == nullptr && this->weight_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline Service& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string getAppConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline Service& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appSpecName Field Functions 
    bool hasAppSpecName() const { return this->appSpecName_ != nullptr;};
    void deleteAppSpecName() { this->appSpecName_ = nullptr;};
    inline string getAppSpecName() const { DARABONBA_PTR_GET_DEFAULT(appSpecName_, "") };
    inline Service& setAppSpecName(string appSpecName) { DARABONBA_PTR_SET_VALUE(appSpecName_, appSpecName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline Service& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline Service& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // autoscalerEnabled Field Functions 
    bool hasAutoscalerEnabled() const { return this->autoscalerEnabled_ != nullptr;};
    void deleteAutoscalerEnabled() { this->autoscalerEnabled_ = nullptr;};
    inline bool getAutoscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoscalerEnabled_, false) };
    inline Service& setAutoscalerEnabled(bool autoscalerEnabled) { DARABONBA_PTR_SET_VALUE(autoscalerEnabled_, autoscalerEnabled) };


    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline string getCallerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, "") };
    inline Service& setCallerUid(string callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline Service& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Service& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cronscalerEnabled Field Functions 
    bool hasCronscalerEnabled() const { return this->cronscalerEnabled_ != nullptr;};
    void deleteCronscalerEnabled() { this->cronscalerEnabled_ = nullptr;};
    inline bool getCronscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(cronscalerEnabled_, false) };
    inline Service& setCronscalerEnabled(bool cronscalerEnabled) { DARABONBA_PTR_SET_VALUE(cronscalerEnabled_, cronscalerEnabled) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int32_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
    inline Service& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline Service& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // GPUCorePercentage Field Functions 
    bool hasGPUCorePercentage() const { return this->GPUCorePercentage_ != nullptr;};
    void deleteGPUCorePercentage() { this->GPUCorePercentage_ = nullptr;};
    inline int32_t getGPUCorePercentage() const { DARABONBA_PTR_GET_DEFAULT(GPUCorePercentage_, 0) };
    inline Service& setGPUCorePercentage(int32_t GPUCorePercentage) { DARABONBA_PTR_SET_VALUE(GPUCorePercentage_, GPUCorePercentage) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline int32_t getGPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0) };
    inline Service& setGPUMemory(int32_t GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline Service& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline Service& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline Service& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceCountInResource Field Functions 
    bool hasInstanceCountInResource() const { return this->instanceCountInResource_ != nullptr;};
    void deleteInstanceCountInResource() { this->instanceCountInResource_ = nullptr;};
    inline const Service::InstanceCountInResource & getInstanceCountInResource() const { DARABONBA_PTR_GET_CONST(instanceCountInResource_, Service::InstanceCountInResource) };
    inline Service::InstanceCountInResource getInstanceCountInResource() { DARABONBA_PTR_GET(instanceCountInResource_, Service::InstanceCountInResource) };
    inline Service& setInstanceCountInResource(const Service::InstanceCountInResource & instanceCountInResource) { DARABONBA_PTR_SET_VALUE(instanceCountInResource_, instanceCountInResource) };
    inline Service& setInstanceCountInResource(Service::InstanceCountInResource && instanceCountInResource) { DARABONBA_PTR_SET_RVALUE(instanceCountInResource_, instanceCountInResource) };


    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string getInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline Service& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline Service& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Service::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Service::Labels>) };
    inline vector<Service::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Service::Labels>) };
    inline Service& setLabels(const vector<Service::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Service& setLabels(vector<Service::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline int32_t getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, 0) };
    inline Service& setLatestVersion(int32_t latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Service& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Service& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Service& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parentUid Field Functions 
    bool hasParentUid() const { return this->parentUid_ != nullptr;};
    void deleteParentUid() { this->parentUid_ = nullptr;};
    inline string getParentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
    inline Service& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


    // pendingInstance Field Functions 
    bool hasPendingInstance() const { return this->pendingInstance_ != nullptr;};
    void deletePendingInstance() { this->pendingInstance_ = nullptr;};
    inline int32_t getPendingInstance() const { DARABONBA_PTR_GET_DEFAULT(pendingInstance_, 0) };
    inline Service& setPendingInstance(int32_t pendingInstance) { DARABONBA_PTR_SET_VALUE(pendingInstance_, pendingInstance) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline Service& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline Service& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline Service& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Service& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline Service& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceAlias Field Functions 
    bool hasResourceAlias() const { return this->resourceAlias_ != nullptr;};
    void deleteResourceAlias() { this->resourceAlias_ = nullptr;};
    inline string getResourceAlias() const { DARABONBA_PTR_GET_DEFAULT(resourceAlias_, "") };
    inline Service& setResourceAlias(string resourceAlias) { DARABONBA_PTR_SET_VALUE(resourceAlias_, resourceAlias) };


    // resourceBurstable Field Functions 
    bool hasResourceBurstable() const { return this->resourceBurstable_ != nullptr;};
    void deleteResourceBurstable() { this->resourceBurstable_ = nullptr;};
    inline bool getResourceBurstable() const { DARABONBA_PTR_GET_DEFAULT(resourceBurstable_, false) };
    inline Service& setResourceBurstable(bool resourceBurstable) { DARABONBA_PTR_SET_VALUE(resourceBurstable_, resourceBurstable) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline Service& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleAttrs Field Functions 
    bool hasRoleAttrs() const { return this->roleAttrs_ != nullptr;};
    void deleteRoleAttrs() { this->roleAttrs_ = nullptr;};
    inline string getRoleAttrs() const { DARABONBA_PTR_GET_DEFAULT(roleAttrs_, "") };
    inline Service& setRoleAttrs(string roleAttrs) { DARABONBA_PTR_SET_VALUE(roleAttrs_, roleAttrs) };


    // runningInstance Field Functions 
    bool hasRunningInstance() const { return this->runningInstance_ != nullptr;};
    void deleteRunningInstance() { this->runningInstance_ = nullptr;};
    inline int32_t getRunningInstance() const { DARABONBA_PTR_GET_DEFAULT(runningInstance_, 0) };
    inline Service& setRunningInstance(int32_t runningInstance) { DARABONBA_PTR_SET_VALUE(runningInstance_, runningInstance) };


    // safetyLock Field Functions 
    bool hasSafetyLock() const { return this->safetyLock_ != nullptr;};
    void deleteSafetyLock() { this->safetyLock_ = nullptr;};
    inline string getSafetyLock() const { DARABONBA_PTR_GET_DEFAULT(safetyLock_, "") };
    inline Service& setSafetyLock(string safetyLock) { DARABONBA_PTR_SET_VALUE(safetyLock_, safetyLock) };


    // secondaryInternetEndpoint Field Functions 
    bool hasSecondaryInternetEndpoint() const { return this->secondaryInternetEndpoint_ != nullptr;};
    void deleteSecondaryInternetEndpoint() { this->secondaryInternetEndpoint_ = nullptr;};
    inline string getSecondaryInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(secondaryInternetEndpoint_, "") };
    inline Service& setSecondaryInternetEndpoint(string secondaryInternetEndpoint) { DARABONBA_PTR_SET_VALUE(secondaryInternetEndpoint_, secondaryInternetEndpoint) };


    // secondaryIntranetEndpoint Field Functions 
    bool hasSecondaryIntranetEndpoint() const { return this->secondaryIntranetEndpoint_ != nullptr;};
    void deleteSecondaryIntranetEndpoint() { this->secondaryIntranetEndpoint_ = nullptr;};
    inline string getSecondaryIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(secondaryIntranetEndpoint_, "") };
    inline Service& setSecondaryIntranetEndpoint(string secondaryIntranetEndpoint) { DARABONBA_PTR_SET_VALUE(secondaryIntranetEndpoint_, secondaryIntranetEndpoint) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string getServiceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline Service& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string getServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline Service& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline Service& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline Service& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceUid Field Functions 
    bool hasServiceUid() const { return this->serviceUid_ != nullptr;};
    void deleteServiceUid() { this->serviceUid_ = nullptr;};
    inline string getServiceUid() const { DARABONBA_PTR_GET_DEFAULT(serviceUid_, "") };
    inline Service& setServiceUid(string serviceUid) { DARABONBA_PTR_SET_VALUE(serviceUid_, serviceUid) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline Service& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Service& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalInstance Field Functions 
    bool hasTotalInstance() const { return this->totalInstance_ != nullptr;};
    void deleteTotalInstance() { this->totalInstance_ = nullptr;};
    inline int32_t getTotalInstance() const { DARABONBA_PTR_GET_DEFAULT(totalInstance_, 0) };
    inline Service& setTotalInstance(int32_t totalInstance) { DARABONBA_PTR_SET_VALUE(totalInstance_, totalInstance) };


    // trafficState Field Functions 
    bool hasTrafficState() const { return this->trafficState_ != nullptr;};
    void deleteTrafficState() { this->trafficState_ = nullptr;};
    inline string getTrafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
    inline Service& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Service& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline Service& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Service& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessToken_ {};
    shared_ptr<string> appConfig_ {};
    shared_ptr<string> appSpecName_ {};
    shared_ptr<string> appType_ {};
    shared_ptr<string> appVersion_ {};
    shared_ptr<bool> autoscalerEnabled_ {};
    shared_ptr<string> callerUid_ {};
    shared_ptr<int32_t> cpu_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<bool> cronscalerEnabled_ {};
    shared_ptr<int32_t> currentVersion_ {};
    shared_ptr<string> extraData_ {};
    shared_ptr<int32_t> GPUCorePercentage_ {};
    shared_ptr<int32_t> GPUMemory_ {};
    shared_ptr<string> gateway_ {};
    shared_ptr<int32_t> gpu_ {};
    shared_ptr<string> image_ {};
    shared_ptr<Service::InstanceCountInResource> instanceCountInResource_ {};
    shared_ptr<string> internetEndpoint_ {};
    shared_ptr<string> intranetEndpoint_ {};
    shared_ptr<vector<Service::Labels>> labels_ {};
    shared_ptr<int32_t> latestVersion_ {};
    shared_ptr<int32_t> memory_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> parentUid_ {};
    shared_ptr<int32_t> pendingInstance_ {};
    shared_ptr<string> quotaId_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resource_ {};
    shared_ptr<string> resourceAlias_ {};
    shared_ptr<bool> resourceBurstable_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> roleAttrs_ {};
    shared_ptr<int32_t> runningInstance_ {};
    shared_ptr<string> safetyLock_ {};
    shared_ptr<string> secondaryInternetEndpoint_ {};
    shared_ptr<string> secondaryIntranetEndpoint_ {};
    shared_ptr<string> serviceConfig_ {};
    shared_ptr<string> serviceGroup_ {};
    shared_ptr<string> serviceId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> serviceUid_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> totalInstance_ {};
    shared_ptr<string> trafficState_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<int32_t> weight_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
