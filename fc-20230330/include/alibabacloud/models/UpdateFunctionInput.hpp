// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONINPUT_HPP_
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
  class UpdateFunctionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionInput& obj) { 
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
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(sessionAffinityConfig, sessionAffinityConfig_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionInput& obj) { 
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
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(sessionAffinityConfig, sessionAffinityConfig_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    UpdateFunctionInput() = default ;
    UpdateFunctionInput(const UpdateFunctionInput &) = default ;
    UpdateFunctionInput(UpdateFunctionInput &&) = default ;
    UpdateFunctionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionInput() = default ;
    UpdateFunctionInput& operator=(const UpdateFunctionInput &) = default ;
    UpdateFunctionInput& operator=(UpdateFunctionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->cpu_ == nullptr && this->customContainerConfig_ == nullptr && this->customDNS_ == nullptr && this->customRuntimeConfig_ == nullptr && this->description_ == nullptr
        && this->disableInjectCredentials_ == nullptr && this->disableOndemand_ == nullptr && this->diskSize_ == nullptr && this->enableLongLiving_ == nullptr && this->environmentVariables_ == nullptr
        && this->gpuConfig_ == nullptr && this->handler_ == nullptr && this->idleTimeout_ == nullptr && this->instanceConcurrency_ == nullptr && this->instanceIsolationMode_ == nullptr
        && this->instanceLifecycleConfig_ == nullptr && this->internetAccess_ == nullptr && this->layers_ == nullptr && this->logConfig_ == nullptr && this->memorySize_ == nullptr
        && this->nasConfig_ == nullptr && this->ossMountConfig_ == nullptr && this->polarFsConfig_ == nullptr && this->role_ == nullptr && this->runtime_ == nullptr
        && this->sessionAffinity_ == nullptr && this->sessionAffinityConfig_ == nullptr && this->timeout_ == nullptr && this->tracingConfig_ == nullptr && this->vpcConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const InputCodeLocation & getCode() const { DARABONBA_PTR_GET_CONST(code_, InputCodeLocation) };
    inline InputCodeLocation getCode() { DARABONBA_PTR_GET(code_, InputCodeLocation) };
    inline UpdateFunctionInput& setCode(const InputCodeLocation & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline UpdateFunctionInput& setCode(InputCodeLocation && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline UpdateFunctionInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customContainerConfig Field Functions 
    bool hasCustomContainerConfig() const { return this->customContainerConfig_ != nullptr;};
    void deleteCustomContainerConfig() { this->customContainerConfig_ = nullptr;};
    inline const CustomContainerConfig & getCustomContainerConfig() const { DARABONBA_PTR_GET_CONST(customContainerConfig_, CustomContainerConfig) };
    inline CustomContainerConfig getCustomContainerConfig() { DARABONBA_PTR_GET(customContainerConfig_, CustomContainerConfig) };
    inline UpdateFunctionInput& setCustomContainerConfig(const CustomContainerConfig & customContainerConfig) { DARABONBA_PTR_SET_VALUE(customContainerConfig_, customContainerConfig) };
    inline UpdateFunctionInput& setCustomContainerConfig(CustomContainerConfig && customContainerConfig) { DARABONBA_PTR_SET_RVALUE(customContainerConfig_, customContainerConfig) };


    // customDNS Field Functions 
    bool hasCustomDNS() const { return this->customDNS_ != nullptr;};
    void deleteCustomDNS() { this->customDNS_ = nullptr;};
    inline const CustomDNS & getCustomDNS() const { DARABONBA_PTR_GET_CONST(customDNS_, CustomDNS) };
    inline CustomDNS getCustomDNS() { DARABONBA_PTR_GET(customDNS_, CustomDNS) };
    inline UpdateFunctionInput& setCustomDNS(const CustomDNS & customDNS) { DARABONBA_PTR_SET_VALUE(customDNS_, customDNS) };
    inline UpdateFunctionInput& setCustomDNS(CustomDNS && customDNS) { DARABONBA_PTR_SET_RVALUE(customDNS_, customDNS) };


    // customRuntimeConfig Field Functions 
    bool hasCustomRuntimeConfig() const { return this->customRuntimeConfig_ != nullptr;};
    void deleteCustomRuntimeConfig() { this->customRuntimeConfig_ = nullptr;};
    inline const CustomRuntimeConfig & getCustomRuntimeConfig() const { DARABONBA_PTR_GET_CONST(customRuntimeConfig_, CustomRuntimeConfig) };
    inline CustomRuntimeConfig getCustomRuntimeConfig() { DARABONBA_PTR_GET(customRuntimeConfig_, CustomRuntimeConfig) };
    inline UpdateFunctionInput& setCustomRuntimeConfig(const CustomRuntimeConfig & customRuntimeConfig) { DARABONBA_PTR_SET_VALUE(customRuntimeConfig_, customRuntimeConfig) };
    inline UpdateFunctionInput& setCustomRuntimeConfig(CustomRuntimeConfig && customRuntimeConfig) { DARABONBA_PTR_SET_RVALUE(customRuntimeConfig_, customRuntimeConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunctionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInjectCredentials Field Functions 
    bool hasDisableInjectCredentials() const { return this->disableInjectCredentials_ != nullptr;};
    void deleteDisableInjectCredentials() { this->disableInjectCredentials_ = nullptr;};
    inline string getDisableInjectCredentials() const { DARABONBA_PTR_GET_DEFAULT(disableInjectCredentials_, "") };
    inline UpdateFunctionInput& setDisableInjectCredentials(string disableInjectCredentials) { DARABONBA_PTR_SET_VALUE(disableInjectCredentials_, disableInjectCredentials) };


    // disableOndemand Field Functions 
    bool hasDisableOndemand() const { return this->disableOndemand_ != nullptr;};
    void deleteDisableOndemand() { this->disableOndemand_ = nullptr;};
    inline bool getDisableOndemand() const { DARABONBA_PTR_GET_DEFAULT(disableOndemand_, false) };
    inline UpdateFunctionInput& setDisableOndemand(bool disableOndemand) { DARABONBA_PTR_SET_VALUE(disableOndemand_, disableOndemand) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline UpdateFunctionInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableLongLiving Field Functions 
    bool hasEnableLongLiving() const { return this->enableLongLiving_ != nullptr;};
    void deleteEnableLongLiving() { this->enableLongLiving_ = nullptr;};
    inline bool getEnableLongLiving() const { DARABONBA_PTR_GET_DEFAULT(enableLongLiving_, false) };
    inline UpdateFunctionInput& setEnableLongLiving(bool enableLongLiving) { DARABONBA_PTR_SET_VALUE(enableLongLiving_, enableLongLiving) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateFunctionInput& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateFunctionInput& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline const GPUConfig & getGpuConfig() const { DARABONBA_PTR_GET_CONST(gpuConfig_, GPUConfig) };
    inline GPUConfig getGpuConfig() { DARABONBA_PTR_GET(gpuConfig_, GPUConfig) };
    inline UpdateFunctionInput& setGpuConfig(const GPUConfig & gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };
    inline UpdateFunctionInput& setGpuConfig(GPUConfig && gpuConfig) { DARABONBA_PTR_SET_RVALUE(gpuConfig_, gpuConfig) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline UpdateFunctionInput& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateFunctionInput& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t getInstanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline UpdateFunctionInput& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // instanceIsolationMode Field Functions 
    bool hasInstanceIsolationMode() const { return this->instanceIsolationMode_ != nullptr;};
    void deleteInstanceIsolationMode() { this->instanceIsolationMode_ = nullptr;};
    inline string getInstanceIsolationMode() const { DARABONBA_PTR_GET_DEFAULT(instanceIsolationMode_, "") };
    inline UpdateFunctionInput& setInstanceIsolationMode(string instanceIsolationMode) { DARABONBA_PTR_SET_VALUE(instanceIsolationMode_, instanceIsolationMode) };


    // instanceLifecycleConfig Field Functions 
    bool hasInstanceLifecycleConfig() const { return this->instanceLifecycleConfig_ != nullptr;};
    void deleteInstanceLifecycleConfig() { this->instanceLifecycleConfig_ = nullptr;};
    inline const InstanceLifecycleConfig & getInstanceLifecycleConfig() const { DARABONBA_PTR_GET_CONST(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline InstanceLifecycleConfig getInstanceLifecycleConfig() { DARABONBA_PTR_GET(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline UpdateFunctionInput& setInstanceLifecycleConfig(const InstanceLifecycleConfig & instanceLifecycleConfig) { DARABONBA_PTR_SET_VALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };
    inline UpdateFunctionInput& setInstanceLifecycleConfig(InstanceLifecycleConfig && instanceLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline UpdateFunctionInput& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<string> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
    inline vector<string> getLayers() { DARABONBA_PTR_GET(layers_, vector<string>) };
    inline UpdateFunctionInput& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline UpdateFunctionInput& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, LogConfig) };
    inline LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, LogConfig) };
    inline UpdateFunctionInput& setLogConfig(const LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline UpdateFunctionInput& setLogConfig(LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline UpdateFunctionInput& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline UpdateFunctionInput& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline UpdateFunctionInput& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline UpdateFunctionInput& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline UpdateFunctionInput& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // polarFsConfig Field Functions 
    bool hasPolarFsConfig() const { return this->polarFsConfig_ != nullptr;};
    void deletePolarFsConfig() { this->polarFsConfig_ = nullptr;};
    inline const PolarFsConfig & getPolarFsConfig() const { DARABONBA_PTR_GET_CONST(polarFsConfig_, PolarFsConfig) };
    inline PolarFsConfig getPolarFsConfig() { DARABONBA_PTR_GET(polarFsConfig_, PolarFsConfig) };
    inline UpdateFunctionInput& setPolarFsConfig(const PolarFsConfig & polarFsConfig) { DARABONBA_PTR_SET_VALUE(polarFsConfig_, polarFsConfig) };
    inline UpdateFunctionInput& setPolarFsConfig(PolarFsConfig && polarFsConfig) { DARABONBA_PTR_SET_RVALUE(polarFsConfig_, polarFsConfig) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline UpdateFunctionInput& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline UpdateFunctionInput& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline UpdateFunctionInput& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // sessionAffinityConfig Field Functions 
    bool hasSessionAffinityConfig() const { return this->sessionAffinityConfig_ != nullptr;};
    void deleteSessionAffinityConfig() { this->sessionAffinityConfig_ = nullptr;};
    inline string getSessionAffinityConfig() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityConfig_, "") };
    inline UpdateFunctionInput& setSessionAffinityConfig(string sessionAffinityConfig) { DARABONBA_PTR_SET_VALUE(sessionAffinityConfig_, sessionAffinityConfig) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateFunctionInput& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracingConfig Field Functions 
    bool hasTracingConfig() const { return this->tracingConfig_ != nullptr;};
    void deleteTracingConfig() { this->tracingConfig_ = nullptr;};
    inline const TracingConfig & getTracingConfig() const { DARABONBA_PTR_GET_CONST(tracingConfig_, TracingConfig) };
    inline TracingConfig getTracingConfig() { DARABONBA_PTR_GET(tracingConfig_, TracingConfig) };
    inline UpdateFunctionInput& setTracingConfig(const TracingConfig & tracingConfig) { DARABONBA_PTR_SET_VALUE(tracingConfig_, tracingConfig) };
    inline UpdateFunctionInput& setTracingConfig(TracingConfig && tracingConfig) { DARABONBA_PTR_SET_RVALUE(tracingConfig_, tracingConfig) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const VPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, VPCConfig) };
    inline VPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, VPCConfig) };
    inline UpdateFunctionInput& setVpcConfig(const VPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline UpdateFunctionInput& setVpcConfig(VPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    shared_ptr<InputCodeLocation> code_ {};
    shared_ptr<float> cpu_ {};
    shared_ptr<CustomContainerConfig> customContainerConfig_ {};
    shared_ptr<CustomDNS> customDNS_ {};
    shared_ptr<CustomRuntimeConfig> customRuntimeConfig_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> disableInjectCredentials_ {};
    shared_ptr<bool> disableOndemand_ {};
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<bool> enableLongLiving_ {};
    shared_ptr<map<string, string>> environmentVariables_ {};
    shared_ptr<GPUConfig> gpuConfig_ {};
    shared_ptr<string> handler_ {};
    shared_ptr<int32_t> idleTimeout_ {};
    shared_ptr<int32_t> instanceConcurrency_ {};
    shared_ptr<string> instanceIsolationMode_ {};
    shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig_ {};
    shared_ptr<bool> internetAccess_ {};
    shared_ptr<vector<string>> layers_ {};
    shared_ptr<LogConfig> logConfig_ {};
    shared_ptr<int32_t> memorySize_ {};
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<PolarFsConfig> polarFsConfig_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> runtime_ {};
    shared_ptr<string> sessionAffinity_ {};
    shared_ptr<string> sessionAffinityConfig_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<TracingConfig> tracingConfig_ {};
    shared_ptr<VPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
