// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNCTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNCTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InputCodeLocation.hpp>
#include <alibabacloud/models/CustomContainerConfig.hpp>
#include <alibabacloud/models/CustomDNS.hpp>
#include <alibabacloud/models/CustomRuntimeConfig.hpp>
#include <map>
#include <alibabacloud/models/GPUConfig.hpp>
#include <alibabacloud/models/InstanceLifecycleConfig.hpp>
#include <vector>
#include <alibabacloud/models/LogConfig.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
#include <alibabacloud/models/PolarFsConfig.hpp>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/TracingConfig.hpp>
#include <alibabacloud/models/VPCConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateFunctionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFunctionInput& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_TO_JSON(customDNS, customDNS_);
      DARABONBA_PTR_TO_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disableInjectCredentials, disableInjectCredentials_);
      DARABONBA_PTR_TO_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(enableLongLiving, enableLongLiving_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(idleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceIsolationMode, instanceIsolationMode_);
      DARABONBA_PTR_TO_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(sessionAffinityConfig, sessionAffinityConfig_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFunctionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_FROM_JSON(customDNS, customDNS_);
      DARABONBA_PTR_FROM_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disableInjectCredentials, disableInjectCredentials_);
      DARABONBA_PTR_FROM_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(enableLongLiving, enableLongLiving_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(idleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceIsolationMode, instanceIsolationMode_);
      DARABONBA_PTR_FROM_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(polarFsConfig, polarFsConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(sessionAffinityConfig, sessionAffinityConfig_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    CreateFunctionInput() = default ;
    CreateFunctionInput(const CreateFunctionInput &) = default ;
    CreateFunctionInput(CreateFunctionInput &&) = default ;
    CreateFunctionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFunctionInput() = default ;
    CreateFunctionInput& operator=(const CreateFunctionInput &) = default ;
    CreateFunctionInput& operator=(CreateFunctionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->cpu_ == nullptr && return this->customContainerConfig_ == nullptr && return this->customDNS_ == nullptr && return this->customRuntimeConfig_ == nullptr && return this->description_ == nullptr
        && return this->disableInjectCredentials_ == nullptr && return this->disableOndemand_ == nullptr && return this->diskSize_ == nullptr && return this->enableLongLiving_ == nullptr && return this->environmentVariables_ == nullptr
        && return this->functionName_ == nullptr && return this->gpuConfig_ == nullptr && return this->handler_ == nullptr && return this->idleTimeout_ == nullptr && return this->instanceConcurrency_ == nullptr
        && return this->instanceIsolationMode_ == nullptr && return this->instanceLifecycleConfig_ == nullptr && return this->internetAccess_ == nullptr && return this->layers_ == nullptr && return this->logConfig_ == nullptr
        && return this->memorySize_ == nullptr && return this->nasConfig_ == nullptr && return this->ossMountConfig_ == nullptr && return this->polarFsConfig_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->role_ == nullptr && return this->runtime_ == nullptr && return this->sessionAffinity_ == nullptr && return this->sessionAffinityConfig_ == nullptr && return this->tags_ == nullptr
        && return this->timeout_ == nullptr && return this->tracingConfig_ == nullptr && return this->vpcConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const InputCodeLocation & code() const { DARABONBA_PTR_GET_CONST(code_, InputCodeLocation) };
    inline InputCodeLocation code() { DARABONBA_PTR_GET(code_, InputCodeLocation) };
    inline CreateFunctionInput& setCode(const InputCodeLocation & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline CreateFunctionInput& setCode(InputCodeLocation && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateFunctionInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customContainerConfig Field Functions 
    bool hasCustomContainerConfig() const { return this->customContainerConfig_ != nullptr;};
    void deleteCustomContainerConfig() { this->customContainerConfig_ = nullptr;};
    inline const CustomContainerConfig & customContainerConfig() const { DARABONBA_PTR_GET_CONST(customContainerConfig_, CustomContainerConfig) };
    inline CustomContainerConfig customContainerConfig() { DARABONBA_PTR_GET(customContainerConfig_, CustomContainerConfig) };
    inline CreateFunctionInput& setCustomContainerConfig(const CustomContainerConfig & customContainerConfig) { DARABONBA_PTR_SET_VALUE(customContainerConfig_, customContainerConfig) };
    inline CreateFunctionInput& setCustomContainerConfig(CustomContainerConfig && customContainerConfig) { DARABONBA_PTR_SET_RVALUE(customContainerConfig_, customContainerConfig) };


    // customDNS Field Functions 
    bool hasCustomDNS() const { return this->customDNS_ != nullptr;};
    void deleteCustomDNS() { this->customDNS_ = nullptr;};
    inline const CustomDNS & customDNS() const { DARABONBA_PTR_GET_CONST(customDNS_, CustomDNS) };
    inline CustomDNS customDNS() { DARABONBA_PTR_GET(customDNS_, CustomDNS) };
    inline CreateFunctionInput& setCustomDNS(const CustomDNS & customDNS) { DARABONBA_PTR_SET_VALUE(customDNS_, customDNS) };
    inline CreateFunctionInput& setCustomDNS(CustomDNS && customDNS) { DARABONBA_PTR_SET_RVALUE(customDNS_, customDNS) };


    // customRuntimeConfig Field Functions 
    bool hasCustomRuntimeConfig() const { return this->customRuntimeConfig_ != nullptr;};
    void deleteCustomRuntimeConfig() { this->customRuntimeConfig_ = nullptr;};
    inline const CustomRuntimeConfig & customRuntimeConfig() const { DARABONBA_PTR_GET_CONST(customRuntimeConfig_, CustomRuntimeConfig) };
    inline CustomRuntimeConfig customRuntimeConfig() { DARABONBA_PTR_GET(customRuntimeConfig_, CustomRuntimeConfig) };
    inline CreateFunctionInput& setCustomRuntimeConfig(const CustomRuntimeConfig & customRuntimeConfig) { DARABONBA_PTR_SET_VALUE(customRuntimeConfig_, customRuntimeConfig) };
    inline CreateFunctionInput& setCustomRuntimeConfig(CustomRuntimeConfig && customRuntimeConfig) { DARABONBA_PTR_SET_RVALUE(customRuntimeConfig_, customRuntimeConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFunctionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInjectCredentials Field Functions 
    bool hasDisableInjectCredentials() const { return this->disableInjectCredentials_ != nullptr;};
    void deleteDisableInjectCredentials() { this->disableInjectCredentials_ = nullptr;};
    inline string disableInjectCredentials() const { DARABONBA_PTR_GET_DEFAULT(disableInjectCredentials_, "") };
    inline CreateFunctionInput& setDisableInjectCredentials(string disableInjectCredentials) { DARABONBA_PTR_SET_VALUE(disableInjectCredentials_, disableInjectCredentials) };


    // disableOndemand Field Functions 
    bool hasDisableOndemand() const { return this->disableOndemand_ != nullptr;};
    void deleteDisableOndemand() { this->disableOndemand_ = nullptr;};
    inline bool disableOndemand() const { DARABONBA_PTR_GET_DEFAULT(disableOndemand_, false) };
    inline CreateFunctionInput& setDisableOndemand(bool disableOndemand) { DARABONBA_PTR_SET_VALUE(disableOndemand_, disableOndemand) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateFunctionInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableLongLiving Field Functions 
    bool hasEnableLongLiving() const { return this->enableLongLiving_ != nullptr;};
    void deleteEnableLongLiving() { this->enableLongLiving_ = nullptr;};
    inline bool enableLongLiving() const { DARABONBA_PTR_GET_DEFAULT(enableLongLiving_, false) };
    inline CreateFunctionInput& setEnableLongLiving(bool enableLongLiving) { DARABONBA_PTR_SET_VALUE(enableLongLiving_, enableLongLiving) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & environmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> environmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline CreateFunctionInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline CreateFunctionInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline CreateFunctionInput& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline const GPUConfig & gpuConfig() const { DARABONBA_PTR_GET_CONST(gpuConfig_, GPUConfig) };
    inline GPUConfig gpuConfig() { DARABONBA_PTR_GET(gpuConfig_, GPUConfig) };
    inline CreateFunctionInput& setGpuConfig(const GPUConfig & gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };
    inline CreateFunctionInput& setGpuConfig(GPUConfig && gpuConfig) { DARABONBA_PTR_SET_RVALUE(gpuConfig_, gpuConfig) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string handler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline CreateFunctionInput& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateFunctionInput& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t instanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline CreateFunctionInput& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // instanceIsolationMode Field Functions 
    bool hasInstanceIsolationMode() const { return this->instanceIsolationMode_ != nullptr;};
    void deleteInstanceIsolationMode() { this->instanceIsolationMode_ = nullptr;};
    inline string instanceIsolationMode() const { DARABONBA_PTR_GET_DEFAULT(instanceIsolationMode_, "") };
    inline CreateFunctionInput& setInstanceIsolationMode(string instanceIsolationMode) { DARABONBA_PTR_SET_VALUE(instanceIsolationMode_, instanceIsolationMode) };


    // instanceLifecycleConfig Field Functions 
    bool hasInstanceLifecycleConfig() const { return this->instanceLifecycleConfig_ != nullptr;};
    void deleteInstanceLifecycleConfig() { this->instanceLifecycleConfig_ = nullptr;};
    inline const InstanceLifecycleConfig & instanceLifecycleConfig() const { DARABONBA_PTR_GET_CONST(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline InstanceLifecycleConfig instanceLifecycleConfig() { DARABONBA_PTR_GET(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline CreateFunctionInput& setInstanceLifecycleConfig(const InstanceLifecycleConfig & instanceLifecycleConfig) { DARABONBA_PTR_SET_VALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };
    inline CreateFunctionInput& setInstanceLifecycleConfig(InstanceLifecycleConfig && instanceLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool internetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline CreateFunctionInput& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<string> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
    inline vector<string> layers() { DARABONBA_PTR_GET(layers_, vector<string>) };
    inline CreateFunctionInput& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline CreateFunctionInput& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const LogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, LogConfig) };
    inline LogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, LogConfig) };
    inline CreateFunctionInput& setLogConfig(const LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline CreateFunctionInput& setLogConfig(LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline CreateFunctionInput& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & nasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig nasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline CreateFunctionInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline CreateFunctionInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & ossMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig ossMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline CreateFunctionInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline CreateFunctionInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // polarFsConfig Field Functions 
    bool hasPolarFsConfig() const { return this->polarFsConfig_ != nullptr;};
    void deletePolarFsConfig() { this->polarFsConfig_ = nullptr;};
    inline const PolarFsConfig & polarFsConfig() const { DARABONBA_PTR_GET_CONST(polarFsConfig_, PolarFsConfig) };
    inline PolarFsConfig polarFsConfig() { DARABONBA_PTR_GET(polarFsConfig_, PolarFsConfig) };
    inline CreateFunctionInput& setPolarFsConfig(const PolarFsConfig & polarFsConfig) { DARABONBA_PTR_SET_VALUE(polarFsConfig_, polarFsConfig) };
    inline CreateFunctionInput& setPolarFsConfig(PolarFsConfig && polarFsConfig) { DARABONBA_PTR_SET_RVALUE(polarFsConfig_, polarFsConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFunctionInput& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateFunctionInput& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline CreateFunctionInput& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string sessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline CreateFunctionInput& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // sessionAffinityConfig Field Functions 
    bool hasSessionAffinityConfig() const { return this->sessionAffinityConfig_ != nullptr;};
    void deleteSessionAffinityConfig() { this->sessionAffinityConfig_ = nullptr;};
    inline string sessionAffinityConfig() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityConfig_, "") };
    inline CreateFunctionInput& setSessionAffinityConfig(string sessionAffinityConfig) { DARABONBA_PTR_SET_VALUE(sessionAffinityConfig_, sessionAffinityConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline CreateFunctionInput& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateFunctionInput& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateFunctionInput& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracingConfig Field Functions 
    bool hasTracingConfig() const { return this->tracingConfig_ != nullptr;};
    void deleteTracingConfig() { this->tracingConfig_ = nullptr;};
    inline const TracingConfig & tracingConfig() const { DARABONBA_PTR_GET_CONST(tracingConfig_, TracingConfig) };
    inline TracingConfig tracingConfig() { DARABONBA_PTR_GET(tracingConfig_, TracingConfig) };
    inline CreateFunctionInput& setTracingConfig(const TracingConfig & tracingConfig) { DARABONBA_PTR_SET_VALUE(tracingConfig_, tracingConfig) };
    inline CreateFunctionInput& setTracingConfig(TracingConfig && tracingConfig) { DARABONBA_PTR_SET_RVALUE(tracingConfig_, tracingConfig) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const VPCConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, VPCConfig) };
    inline VPCConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, VPCConfig) };
    inline CreateFunctionInput& setVpcConfig(const VPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline CreateFunctionInput& setVpcConfig(VPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    std::shared_ptr<InputCodeLocation> code_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<CustomContainerConfig> customContainerConfig_ = nullptr;
    std::shared_ptr<CustomDNS> customDNS_ = nullptr;
    std::shared_ptr<CustomRuntimeConfig> customRuntimeConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> disableInjectCredentials_ = nullptr;
    std::shared_ptr<bool> disableOndemand_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<bool> enableLongLiving_ = nullptr;
    std::shared_ptr<map<string, string>> environmentVariables_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<GPUConfig> gpuConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> handler_ = nullptr;
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    std::shared_ptr<int32_t> instanceConcurrency_ = nullptr;
    std::shared_ptr<string> instanceIsolationMode_ = nullptr;
    std::shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig_ = nullptr;
    std::shared_ptr<bool> internetAccess_ = nullptr;
    std::shared_ptr<vector<string>> layers_ = nullptr;
    std::shared_ptr<LogConfig> logConfig_ = nullptr;
    std::shared_ptr<int32_t> memorySize_ = nullptr;
    std::shared_ptr<NASConfig> nasConfig_ = nullptr;
    std::shared_ptr<OSSMountConfig> ossMountConfig_ = nullptr;
    std::shared_ptr<PolarFsConfig> polarFsConfig_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> runtime_ = nullptr;
    std::shared_ptr<string> sessionAffinity_ = nullptr;
    std::shared_ptr<string> sessionAffinityConfig_ = nullptr;
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<TracingConfig> tracingConfig_ = nullptr;
    std::shared_ptr<VPCConfig> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
