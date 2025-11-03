// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPP_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationAppCmdArgs.hpp>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationAppEnvList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationApp& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BuildpackId, buildpackId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Cmd, cmd_);
      DARABONBA_PTR_TO_JSON(CmdArgs, cmdArgs_);
      DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DevelopType, developType_);
      DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_TO_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_TO_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_TO_JSON(EnvList, envList_);
      DARABONBA_PTR_TO_JSON(FeatureAnnotations, featureAnnotations_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(InstancesBeforeScaling, instancesBeforeScaling_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LimitCpuM, limitCpuM_);
      DARABONBA_PTR_TO_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_TO_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_TO_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_TO_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_TO_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_TO_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestCpuM, requestCpuM_);
      DARABONBA_PTR_TO_JSON(RequestEphemeralStorage, requestEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(SlbInfo, slbInfo_);
      DARABONBA_PTR_TO_JSON(TomcatVersion, tomcatVersion_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationApp& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BuildpackId, buildpackId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(CmdArgs, cmdArgs_);
      DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DevelopType, developType_);
      DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
      DARABONBA_PTR_FROM_JSON(EnableEmptyPushReject, enableEmptyPushReject_);
      DARABONBA_PTR_FROM_JSON(EnableLosslessRule, enableLosslessRule_);
      DARABONBA_PTR_FROM_JSON(EnvList, envList_);
      DARABONBA_PTR_FROM_JSON(FeatureAnnotations, featureAnnotations_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(InstancesBeforeScaling, instancesBeforeScaling_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LimitCpuM, limitCpuM_);
      DARABONBA_PTR_FROM_JSON(LimitEphemeralStorage, limitEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleAligned, losslessRuleAligned_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleDelayTime, losslessRuleDelayTime_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleFuncType, losslessRuleFuncType_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleRelated, losslessRuleRelated_);
      DARABONBA_PTR_FROM_JSON(LosslessRuleWarmupTime, losslessRuleWarmupTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestCpuM, requestCpuM_);
      DARABONBA_PTR_FROM_JSON(RequestEphemeralStorage, requestEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(SlbInfo, slbInfo_);
      DARABONBA_PTR_FROM_JSON(TomcatVersion, tomcatVersion_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    GetK8sApplicationResponseBodyApplcationApp() = default ;
    GetK8sApplicationResponseBodyApplcationApp(const GetK8sApplicationResponseBodyApplcationApp &) = default ;
    GetK8sApplicationResponseBodyApplcationApp(GetK8sApplicationResponseBodyApplcationApp &&) = default ;
    GetK8sApplicationResponseBodyApplcationApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationApp() = default ;
    GetK8sApplicationResponseBodyApplcationApp& operator=(const GetK8sApplicationResponseBodyApplcationApp &) = default ;
    GetK8sApplicationResponseBodyApplcationApp& operator=(GetK8sApplicationResponseBodyApplcationApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->appId_ == nullptr && return this->applicationName_ == nullptr && return this->applicationType_ == nullptr && return this->buildpackId_ == nullptr && return this->clusterId_ == nullptr
        && return this->cmd_ == nullptr && return this->cmdArgs_ == nullptr && return this->csClusterId_ == nullptr && return this->deployType_ == nullptr && return this->developType_ == nullptr
        && return this->edasContainerVersion_ == nullptr && return this->enableEmptyPushReject_ == nullptr && return this->enableLosslessRule_ == nullptr && return this->envList_ == nullptr && return this->featureAnnotations_ == nullptr
        && return this->instances_ == nullptr && return this->instancesBeforeScaling_ == nullptr && return this->k8sNamespace_ == nullptr && return this->labels_ == nullptr && return this->limitCpuM_ == nullptr
        && return this->limitEphemeralStorage_ == nullptr && return this->limitMem_ == nullptr && return this->losslessRuleAligned_ == nullptr && return this->losslessRuleDelayTime_ == nullptr && return this->losslessRuleFuncType_ == nullptr
        && return this->losslessRuleRelated_ == nullptr && return this->losslessRuleWarmupTime_ == nullptr && return this->regionId_ == nullptr && return this->requestCpuM_ == nullptr && return this->requestEphemeralStorage_ == nullptr
        && return this->requestMem_ == nullptr && return this->securityContext_ == nullptr && return this->slbInfo_ == nullptr && return this->tomcatVersion_ == nullptr && return this->workloadType_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // buildpackId Field Functions 
    bool hasBuildpackId() const { return this->buildpackId_ != nullptr;};
    void deleteBuildpackId() { this->buildpackId_ = nullptr;};
    inline int32_t buildpackId() const { DARABONBA_PTR_GET_DEFAULT(buildpackId_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setBuildpackId(int32_t buildpackId) { DARABONBA_PTR_SET_VALUE(buildpackId_, buildpackId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // cmdArgs Field Functions 
    bool hasCmdArgs() const { return this->cmdArgs_ != nullptr;};
    void deleteCmdArgs() { this->cmdArgs_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs & cmdArgs() const { DARABONBA_PTR_GET_CONST(cmdArgs_, Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs) };
    inline Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs cmdArgs() { DARABONBA_PTR_GET(cmdArgs_, Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs) };
    inline GetK8sApplicationResponseBodyApplcationApp& setCmdArgs(const Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs & cmdArgs) { DARABONBA_PTR_SET_VALUE(cmdArgs_, cmdArgs) };
    inline GetK8sApplicationResponseBodyApplcationApp& setCmdArgs(Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs && cmdArgs) { DARABONBA_PTR_SET_RVALUE(cmdArgs_, cmdArgs) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string csClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // developType Field Functions 
    bool hasDevelopType() const { return this->developType_ != nullptr;};
    void deleteDevelopType() { this->developType_ = nullptr;};
    inline string developType() const { DARABONBA_PTR_GET_DEFAULT(developType_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setDevelopType(string developType) { DARABONBA_PTR_SET_VALUE(developType_, developType) };


    // edasContainerVersion Field Functions 
    bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
    void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
    inline string edasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


    // enableEmptyPushReject Field Functions 
    bool hasEnableEmptyPushReject() const { return this->enableEmptyPushReject_ != nullptr;};
    void deleteEnableEmptyPushReject() { this->enableEmptyPushReject_ = nullptr;};
    inline bool enableEmptyPushReject() const { DARABONBA_PTR_GET_DEFAULT(enableEmptyPushReject_, false) };
    inline GetK8sApplicationResponseBodyApplcationApp& setEnableEmptyPushReject(bool enableEmptyPushReject) { DARABONBA_PTR_SET_VALUE(enableEmptyPushReject_, enableEmptyPushReject) };


    // enableLosslessRule Field Functions 
    bool hasEnableLosslessRule() const { return this->enableLosslessRule_ != nullptr;};
    void deleteEnableLosslessRule() { this->enableLosslessRule_ = nullptr;};
    inline bool enableLosslessRule() const { DARABONBA_PTR_GET_DEFAULT(enableLosslessRule_, false) };
    inline GetK8sApplicationResponseBodyApplcationApp& setEnableLosslessRule(bool enableLosslessRule) { DARABONBA_PTR_SET_VALUE(enableLosslessRule_, enableLosslessRule) };


    // envList Field Functions 
    bool hasEnvList() const { return this->envList_ != nullptr;};
    void deleteEnvList() { this->envList_ = nullptr;};
    inline const Models::GetK8sApplicationResponseBodyApplcationAppEnvList & envList() const { DARABONBA_PTR_GET_CONST(envList_, Models::GetK8sApplicationResponseBodyApplcationAppEnvList) };
    inline Models::GetK8sApplicationResponseBodyApplcationAppEnvList envList() { DARABONBA_PTR_GET(envList_, Models::GetK8sApplicationResponseBodyApplcationAppEnvList) };
    inline GetK8sApplicationResponseBodyApplcationApp& setEnvList(const Models::GetK8sApplicationResponseBodyApplcationAppEnvList & envList) { DARABONBA_PTR_SET_VALUE(envList_, envList) };
    inline GetK8sApplicationResponseBodyApplcationApp& setEnvList(Models::GetK8sApplicationResponseBodyApplcationAppEnvList && envList) { DARABONBA_PTR_SET_RVALUE(envList_, envList) };


    // featureAnnotations Field Functions 
    bool hasFeatureAnnotations() const { return this->featureAnnotations_ != nullptr;};
    void deleteFeatureAnnotations() { this->featureAnnotations_ = nullptr;};
    inline string featureAnnotations() const { DARABONBA_PTR_GET_DEFAULT(featureAnnotations_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setFeatureAnnotations(string featureAnnotations) { DARABONBA_PTR_SET_VALUE(featureAnnotations_, featureAnnotations) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int32_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // instancesBeforeScaling Field Functions 
    bool hasInstancesBeforeScaling() const { return this->instancesBeforeScaling_ != nullptr;};
    void deleteInstancesBeforeScaling() { this->instancesBeforeScaling_ = nullptr;};
    inline int32_t instancesBeforeScaling() const { DARABONBA_PTR_GET_DEFAULT(instancesBeforeScaling_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setInstancesBeforeScaling(int32_t instancesBeforeScaling) { DARABONBA_PTR_SET_VALUE(instancesBeforeScaling_, instancesBeforeScaling) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // limitCpuM Field Functions 
    bool hasLimitCpuM() const { return this->limitCpuM_ != nullptr;};
    void deleteLimitCpuM() { this->limitCpuM_ = nullptr;};
    inline int32_t limitCpuM() const { DARABONBA_PTR_GET_DEFAULT(limitCpuM_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLimitCpuM(int32_t limitCpuM) { DARABONBA_PTR_SET_VALUE(limitCpuM_, limitCpuM) };


    // limitEphemeralStorage Field Functions 
    bool hasLimitEphemeralStorage() const { return this->limitEphemeralStorage_ != nullptr;};
    void deleteLimitEphemeralStorage() { this->limitEphemeralStorage_ = nullptr;};
    inline string limitEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(limitEphemeralStorage_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setLimitEphemeralStorage(string limitEphemeralStorage) { DARABONBA_PTR_SET_VALUE(limitEphemeralStorage_, limitEphemeralStorage) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline int32_t limitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLimitMem(int32_t limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // losslessRuleAligned Field Functions 
    bool hasLosslessRuleAligned() const { return this->losslessRuleAligned_ != nullptr;};
    void deleteLosslessRuleAligned() { this->losslessRuleAligned_ = nullptr;};
    inline bool losslessRuleAligned() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleAligned_, false) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLosslessRuleAligned(bool losslessRuleAligned) { DARABONBA_PTR_SET_VALUE(losslessRuleAligned_, losslessRuleAligned) };


    // losslessRuleDelayTime Field Functions 
    bool hasLosslessRuleDelayTime() const { return this->losslessRuleDelayTime_ != nullptr;};
    void deleteLosslessRuleDelayTime() { this->losslessRuleDelayTime_ = nullptr;};
    inline int32_t losslessRuleDelayTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleDelayTime_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLosslessRuleDelayTime(int32_t losslessRuleDelayTime) { DARABONBA_PTR_SET_VALUE(losslessRuleDelayTime_, losslessRuleDelayTime) };


    // losslessRuleFuncType Field Functions 
    bool hasLosslessRuleFuncType() const { return this->losslessRuleFuncType_ != nullptr;};
    void deleteLosslessRuleFuncType() { this->losslessRuleFuncType_ = nullptr;};
    inline int32_t losslessRuleFuncType() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleFuncType_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLosslessRuleFuncType(int32_t losslessRuleFuncType) { DARABONBA_PTR_SET_VALUE(losslessRuleFuncType_, losslessRuleFuncType) };


    // losslessRuleRelated Field Functions 
    bool hasLosslessRuleRelated() const { return this->losslessRuleRelated_ != nullptr;};
    void deleteLosslessRuleRelated() { this->losslessRuleRelated_ = nullptr;};
    inline bool losslessRuleRelated() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleRelated_, false) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLosslessRuleRelated(bool losslessRuleRelated) { DARABONBA_PTR_SET_VALUE(losslessRuleRelated_, losslessRuleRelated) };


    // losslessRuleWarmupTime Field Functions 
    bool hasLosslessRuleWarmupTime() const { return this->losslessRuleWarmupTime_ != nullptr;};
    void deleteLosslessRuleWarmupTime() { this->losslessRuleWarmupTime_ = nullptr;};
    inline int32_t losslessRuleWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(losslessRuleWarmupTime_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setLosslessRuleWarmupTime(int32_t losslessRuleWarmupTime) { DARABONBA_PTR_SET_VALUE(losslessRuleWarmupTime_, losslessRuleWarmupTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestCpuM Field Functions 
    bool hasRequestCpuM() const { return this->requestCpuM_ != nullptr;};
    void deleteRequestCpuM() { this->requestCpuM_ = nullptr;};
    inline int32_t requestCpuM() const { DARABONBA_PTR_GET_DEFAULT(requestCpuM_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setRequestCpuM(int32_t requestCpuM) { DARABONBA_PTR_SET_VALUE(requestCpuM_, requestCpuM) };


    // requestEphemeralStorage Field Functions 
    bool hasRequestEphemeralStorage() const { return this->requestEphemeralStorage_ != nullptr;};
    void deleteRequestEphemeralStorage() { this->requestEphemeralStorage_ = nullptr;};
    inline string requestEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(requestEphemeralStorage_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setRequestEphemeralStorage(string requestEphemeralStorage) { DARABONBA_PTR_SET_VALUE(requestEphemeralStorage_, requestEphemeralStorage) };


    // requestMem Field Functions 
    bool hasRequestMem() const { return this->requestMem_ != nullptr;};
    void deleteRequestMem() { this->requestMem_ = nullptr;};
    inline int32_t requestMem() const { DARABONBA_PTR_GET_DEFAULT(requestMem_, 0) };
    inline GetK8sApplicationResponseBodyApplcationApp& setRequestMem(int32_t requestMem) { DARABONBA_PTR_SET_VALUE(requestMem_, requestMem) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline string securityContext() const { DARABONBA_PTR_GET_DEFAULT(securityContext_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setSecurityContext(string securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };


    // slbInfo Field Functions 
    bool hasSlbInfo() const { return this->slbInfo_ != nullptr;};
    void deleteSlbInfo() { this->slbInfo_ = nullptr;};
    inline string slbInfo() const { DARABONBA_PTR_GET_DEFAULT(slbInfo_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setSlbInfo(string slbInfo) { DARABONBA_PTR_SET_VALUE(slbInfo_, slbInfo) };


    // tomcatVersion Field Functions 
    bool hasTomcatVersion() const { return this->tomcatVersion_ != nullptr;};
    void deleteTomcatVersion() { this->tomcatVersion_ = nullptr;};
    inline string tomcatVersion() const { DARABONBA_PTR_GET_DEFAULT(tomcatVersion_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setTomcatVersion(string tomcatVersion) { DARABONBA_PTR_SET_VALUE(tomcatVersion_, tomcatVersion) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline GetK8sApplicationResponseBodyApplcationApp& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    // The annotation of an application pod.
    std::shared_ptr<string> annotations_ = nullptr;
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The type of the application.
    std::shared_ptr<string> applicationType_ = nullptr;
    // The build package number of Enterprise Distributed Application Service (EDAS) Container.
    std::shared_ptr<int32_t> buildpackId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The startup command.
    std::shared_ptr<string> cmd_ = nullptr;
    // The list of commands.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationAppCmdArgs> cmdArgs_ = nullptr;
    // The ID of the cluster to which the container belongs.
    std::shared_ptr<string> csClusterId_ = nullptr;
    // The deployment type of the application. Example: Image.
    std::shared_ptr<string> deployType_ = nullptr;
    // The application type. Valid values:
    // 
    // *   General: native Java application
    // *   Pandora: Pandora application
    // *   Multilingual: multilingual application
    std::shared_ptr<string> developType_ = nullptr;
    // The version of EDAS Container.
    std::shared_ptr<string> edasContainerVersion_ = nullptr;
    // Indicates whether the Empty List Protection feature is enabled for the application.
    std::shared_ptr<bool> enableEmptyPushReject_ = nullptr;
    // Indicates whether the Graceful Release feature is enabled for the application.
    std::shared_ptr<bool> enableLosslessRule_ = nullptr;
    // The list of environment variables.
    std::shared_ptr<Models::GetK8sApplicationResponseBodyApplcationAppEnvList> envList_ = nullptr;
    // The feature annotations. Possible values:
    // 
    // *   base.combination.edas: enables EDAS integrated management solution.
    // *   base.combination.arms: enables ARMS monitoring.
    // *   base.combination.mse: enables MSE microservices governance.
    // *   base.combination.none: enables lifecycle management.
    std::shared_ptr<string> featureAnnotations_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> instances_ = nullptr;
    // The number of application instances before the last auto scaling operation.
    std::shared_ptr<int32_t> instancesBeforeScaling_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The label of an application pod.
    std::shared_ptr<string> labels_ = nullptr;
    // The maximum number of CPU cores allowed. Unit: millicores. 1,000 millicores equal one CPU core.
    std::shared_ptr<int32_t> limitCpuM_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<string> limitEphemeralStorage_ = nullptr;
    // The maximum size of the memory allowed. Unit: MiB.
    std::shared_ptr<int32_t> limitMem_ = nullptr;
    // Indicates whether the Graceful Rolling Release and Configure Complete Service Registration before Readiness Probing feature is enabled for the application.
    std::shared_ptr<bool> losslessRuleAligned_ = nullptr;
    // The delay of service registration. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleDelayTime_ = nullptr;
    // The number of prefetching curves.
    std::shared_ptr<int32_t> losslessRuleFuncType_ = nullptr;
    // Indicates whether the Graceful Rolling Release and Configure Complete Service Prefetching before Readiness Probing feature is enabled for the application.
    std::shared_ptr<bool> losslessRuleRelated_ = nullptr;
    // The service prefetching duration. Unit: seconds.
    std::shared_ptr<int32_t> losslessRuleWarmupTime_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of requested CPU cores. Unit: millicores. 1,000 millicores equal one CPU core.
    std::shared_ptr<int32_t> requestCpuM_ = nullptr;
    // The size of space reserved for ephemeral storage resources. Unit: GB. Value 0 indicates that no limit is set on the space size.
    std::shared_ptr<string> requestEphemeralStorage_ = nullptr;
    // The size of the reserved memory. Unit: MiB.
    std::shared_ptr<int32_t> requestMem_ = nullptr;
    std::shared_ptr<string> securityContext_ = nullptr;
    // The configuration information about the Server Load Balancer (SLB).
    std::shared_ptr<string> slbInfo_ = nullptr;
    // The version of Apache Tomcat.
    std::shared_ptr<string> tomcatVersion_ = nullptr;
    // The workload type. Valid values: Deployment and StatefulSet. If you do not specify this parameter, Deployment is used.
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
