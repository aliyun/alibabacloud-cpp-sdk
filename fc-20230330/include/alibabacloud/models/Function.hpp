// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTION_HPP_
#define ALIBABACLOUD_MODELS_FUNCTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomContainerConfig.hpp>
#include <alibabacloud/models/CustomDNS.hpp>
#include <alibabacloud/models/CustomRuntimeConfig.hpp>
#include <map>
#include <alibabacloud/models/GPUConfig.hpp>
#include <alibabacloud/models/InstanceLifecycleConfig.hpp>
#include <alibabacloud/models/FunctionRestriction.hpp>
#include <vector>
#include <alibabacloud/models/FunctionLayer.hpp>
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
  class Function : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Function& obj) { 
      DARABONBA_PTR_TO_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_TO_JSON(codeSize, codeSize_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_TO_JSON(customDNS, customDNS_);
      DARABONBA_PTR_TO_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disableInjectCredentials, disableInjectCredentials_);
      DARABONBA_PTR_TO_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(enableLongLiving, enableLongLiving_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(functionId, functionId_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(idleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceIsolationMode, instanceIsolationMode_);
      DARABONBA_PTR_TO_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(invocationRestriction, invocationRestriction_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(lastUpdateStatus, lastUpdateStatus_);
      DARABONBA_PTR_TO_JSON(lastUpdateStatusReason, lastUpdateStatusReason_);
      DARABONBA_PTR_TO_JSON(lastUpdateStatusReasonCode, lastUpdateStatusReasonCode_);
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
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(stateReason, stateReason_);
      DARABONBA_PTR_TO_JSON(stateReasonCode, stateReasonCode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, Function& obj) { 
      DARABONBA_PTR_FROM_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_FROM_JSON(codeSize, codeSize_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_FROM_JSON(customDNS, customDNS_);
      DARABONBA_PTR_FROM_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disableInjectCredentials, disableInjectCredentials_);
      DARABONBA_PTR_FROM_JSON(disableOndemand, disableOndemand_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(enableLongLiving, enableLongLiving_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(functionId, functionId_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(idleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceIsolationMode, instanceIsolationMode_);
      DARABONBA_PTR_FROM_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(invocationRestriction, invocationRestriction_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(lastUpdateStatus, lastUpdateStatus_);
      DARABONBA_PTR_FROM_JSON(lastUpdateStatusReason, lastUpdateStatusReason_);
      DARABONBA_PTR_FROM_JSON(lastUpdateStatusReasonCode, lastUpdateStatusReasonCode_);
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
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(stateReason, stateReason_);
      DARABONBA_PTR_FROM_JSON(stateReasonCode, stateReasonCode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    Function() = default ;
    Function(const Function &) = default ;
    Function(Function &&) = default ;
    Function(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Function() = default ;
    Function& operator=(const Function &) = default ;
    Function& operator=(Function &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeChecksum_ == nullptr
        && this->codeSize_ == nullptr && this->cpu_ == nullptr && this->createdTime_ == nullptr && this->customContainerConfig_ == nullptr && this->customDNS_ == nullptr
        && this->customRuntimeConfig_ == nullptr && this->description_ == nullptr && this->disableInjectCredentials_ == nullptr && this->disableOndemand_ == nullptr && this->diskSize_ == nullptr
        && this->enableLongLiving_ == nullptr && this->environmentVariables_ == nullptr && this->functionArn_ == nullptr && this->functionId_ == nullptr && this->functionName_ == nullptr
        && this->gpuConfig_ == nullptr && this->handler_ == nullptr && this->idleTimeout_ == nullptr && this->instanceConcurrency_ == nullptr && this->instanceIsolationMode_ == nullptr
        && this->instanceLifecycleConfig_ == nullptr && this->internetAccess_ == nullptr && this->invocationRestriction_ == nullptr && this->lastModifiedTime_ == nullptr && this->lastUpdateStatus_ == nullptr
        && this->lastUpdateStatusReason_ == nullptr && this->lastUpdateStatusReasonCode_ == nullptr && this->layers_ == nullptr && this->logConfig_ == nullptr && this->memorySize_ == nullptr
        && this->nasConfig_ == nullptr && this->ossMountConfig_ == nullptr && this->polarFsConfig_ == nullptr && this->resourceGroupId_ == nullptr && this->role_ == nullptr
        && this->runtime_ == nullptr && this->sessionAffinity_ == nullptr && this->sessionAffinityConfig_ == nullptr && this->state_ == nullptr && this->stateReason_ == nullptr
        && this->stateReasonCode_ == nullptr && this->tags_ == nullptr && this->timeout_ == nullptr && this->tracingConfig_ == nullptr && this->vpcConfig_ == nullptr; };
    // codeChecksum Field Functions 
    bool hasCodeChecksum() const { return this->codeChecksum_ != nullptr;};
    void deleteCodeChecksum() { this->codeChecksum_ = nullptr;};
    inline string getCodeChecksum() const { DARABONBA_PTR_GET_DEFAULT(codeChecksum_, "") };
    inline Function& setCodeChecksum(string codeChecksum) { DARABONBA_PTR_SET_VALUE(codeChecksum_, codeChecksum) };


    // codeSize Field Functions 
    bool hasCodeSize() const { return this->codeSize_ != nullptr;};
    void deleteCodeSize() { this->codeSize_ = nullptr;};
    inline int64_t getCodeSize() const { DARABONBA_PTR_GET_DEFAULT(codeSize_, 0L) };
    inline Function& setCodeSize(int64_t codeSize) { DARABONBA_PTR_SET_VALUE(codeSize_, codeSize) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Function& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Function& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customContainerConfig Field Functions 
    bool hasCustomContainerConfig() const { return this->customContainerConfig_ != nullptr;};
    void deleteCustomContainerConfig() { this->customContainerConfig_ = nullptr;};
    inline const CustomContainerConfig & getCustomContainerConfig() const { DARABONBA_PTR_GET_CONST(customContainerConfig_, CustomContainerConfig) };
    inline CustomContainerConfig getCustomContainerConfig() { DARABONBA_PTR_GET(customContainerConfig_, CustomContainerConfig) };
    inline Function& setCustomContainerConfig(const CustomContainerConfig & customContainerConfig) { DARABONBA_PTR_SET_VALUE(customContainerConfig_, customContainerConfig) };
    inline Function& setCustomContainerConfig(CustomContainerConfig && customContainerConfig) { DARABONBA_PTR_SET_RVALUE(customContainerConfig_, customContainerConfig) };


    // customDNS Field Functions 
    bool hasCustomDNS() const { return this->customDNS_ != nullptr;};
    void deleteCustomDNS() { this->customDNS_ = nullptr;};
    inline const CustomDNS & getCustomDNS() const { DARABONBA_PTR_GET_CONST(customDNS_, CustomDNS) };
    inline CustomDNS getCustomDNS() { DARABONBA_PTR_GET(customDNS_, CustomDNS) };
    inline Function& setCustomDNS(const CustomDNS & customDNS) { DARABONBA_PTR_SET_VALUE(customDNS_, customDNS) };
    inline Function& setCustomDNS(CustomDNS && customDNS) { DARABONBA_PTR_SET_RVALUE(customDNS_, customDNS) };


    // customRuntimeConfig Field Functions 
    bool hasCustomRuntimeConfig() const { return this->customRuntimeConfig_ != nullptr;};
    void deleteCustomRuntimeConfig() { this->customRuntimeConfig_ = nullptr;};
    inline const CustomRuntimeConfig & getCustomRuntimeConfig() const { DARABONBA_PTR_GET_CONST(customRuntimeConfig_, CustomRuntimeConfig) };
    inline CustomRuntimeConfig getCustomRuntimeConfig() { DARABONBA_PTR_GET(customRuntimeConfig_, CustomRuntimeConfig) };
    inline Function& setCustomRuntimeConfig(const CustomRuntimeConfig & customRuntimeConfig) { DARABONBA_PTR_SET_VALUE(customRuntimeConfig_, customRuntimeConfig) };
    inline Function& setCustomRuntimeConfig(CustomRuntimeConfig && customRuntimeConfig) { DARABONBA_PTR_SET_RVALUE(customRuntimeConfig_, customRuntimeConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Function& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInjectCredentials Field Functions 
    bool hasDisableInjectCredentials() const { return this->disableInjectCredentials_ != nullptr;};
    void deleteDisableInjectCredentials() { this->disableInjectCredentials_ = nullptr;};
    inline string getDisableInjectCredentials() const { DARABONBA_PTR_GET_DEFAULT(disableInjectCredentials_, "") };
    inline Function& setDisableInjectCredentials(string disableInjectCredentials) { DARABONBA_PTR_SET_VALUE(disableInjectCredentials_, disableInjectCredentials) };


    // disableOndemand Field Functions 
    bool hasDisableOndemand() const { return this->disableOndemand_ != nullptr;};
    void deleteDisableOndemand() { this->disableOndemand_ = nullptr;};
    inline bool getDisableOndemand() const { DARABONBA_PTR_GET_DEFAULT(disableOndemand_, false) };
    inline Function& setDisableOndemand(bool disableOndemand) { DARABONBA_PTR_SET_VALUE(disableOndemand_, disableOndemand) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline Function& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableLongLiving Field Functions 
    bool hasEnableLongLiving() const { return this->enableLongLiving_ != nullptr;};
    void deleteEnableLongLiving() { this->enableLongLiving_ = nullptr;};
    inline bool getEnableLongLiving() const { DARABONBA_PTR_GET_DEFAULT(enableLongLiving_, false) };
    inline Function& setEnableLongLiving(bool enableLongLiving) { DARABONBA_PTR_SET_VALUE(enableLongLiving_, enableLongLiving) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline Function& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline Function& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string getFunctionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline Function& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // functionId Field Functions 
    bool hasFunctionId() const { return this->functionId_ != nullptr;};
    void deleteFunctionId() { this->functionId_ = nullptr;};
    inline string getFunctionId() const { DARABONBA_PTR_GET_DEFAULT(functionId_, "") };
    inline Function& setFunctionId(string functionId) { DARABONBA_PTR_SET_VALUE(functionId_, functionId) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline Function& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline const GPUConfig & getGpuConfig() const { DARABONBA_PTR_GET_CONST(gpuConfig_, GPUConfig) };
    inline GPUConfig getGpuConfig() { DARABONBA_PTR_GET(gpuConfig_, GPUConfig) };
    inline Function& setGpuConfig(const GPUConfig & gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };
    inline Function& setGpuConfig(GPUConfig && gpuConfig) { DARABONBA_PTR_SET_RVALUE(gpuConfig_, gpuConfig) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline Function& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline Function& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t getInstanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline Function& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // instanceIsolationMode Field Functions 
    bool hasInstanceIsolationMode() const { return this->instanceIsolationMode_ != nullptr;};
    void deleteInstanceIsolationMode() { this->instanceIsolationMode_ = nullptr;};
    inline string getInstanceIsolationMode() const { DARABONBA_PTR_GET_DEFAULT(instanceIsolationMode_, "") };
    inline Function& setInstanceIsolationMode(string instanceIsolationMode) { DARABONBA_PTR_SET_VALUE(instanceIsolationMode_, instanceIsolationMode) };


    // instanceLifecycleConfig Field Functions 
    bool hasInstanceLifecycleConfig() const { return this->instanceLifecycleConfig_ != nullptr;};
    void deleteInstanceLifecycleConfig() { this->instanceLifecycleConfig_ = nullptr;};
    inline const InstanceLifecycleConfig & getInstanceLifecycleConfig() const { DARABONBA_PTR_GET_CONST(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline InstanceLifecycleConfig getInstanceLifecycleConfig() { DARABONBA_PTR_GET(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline Function& setInstanceLifecycleConfig(const InstanceLifecycleConfig & instanceLifecycleConfig) { DARABONBA_PTR_SET_VALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };
    inline Function& setInstanceLifecycleConfig(InstanceLifecycleConfig && instanceLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline Function& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // invocationRestriction Field Functions 
    bool hasInvocationRestriction() const { return this->invocationRestriction_ != nullptr;};
    void deleteInvocationRestriction() { this->invocationRestriction_ = nullptr;};
    inline const FunctionRestriction & getInvocationRestriction() const { DARABONBA_PTR_GET_CONST(invocationRestriction_, FunctionRestriction) };
    inline FunctionRestriction getInvocationRestriction() { DARABONBA_PTR_GET(invocationRestriction_, FunctionRestriction) };
    inline Function& setInvocationRestriction(const FunctionRestriction & invocationRestriction) { DARABONBA_PTR_SET_VALUE(invocationRestriction_, invocationRestriction) };
    inline Function& setInvocationRestriction(FunctionRestriction && invocationRestriction) { DARABONBA_PTR_SET_RVALUE(invocationRestriction_, invocationRestriction) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline Function& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // lastUpdateStatus Field Functions 
    bool hasLastUpdateStatus() const { return this->lastUpdateStatus_ != nullptr;};
    void deleteLastUpdateStatus() { this->lastUpdateStatus_ = nullptr;};
    inline string getLastUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateStatus_, "") };
    inline Function& setLastUpdateStatus(string lastUpdateStatus) { DARABONBA_PTR_SET_VALUE(lastUpdateStatus_, lastUpdateStatus) };


    // lastUpdateStatusReason Field Functions 
    bool hasLastUpdateStatusReason() const { return this->lastUpdateStatusReason_ != nullptr;};
    void deleteLastUpdateStatusReason() { this->lastUpdateStatusReason_ = nullptr;};
    inline string getLastUpdateStatusReason() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateStatusReason_, "") };
    inline Function& setLastUpdateStatusReason(string lastUpdateStatusReason) { DARABONBA_PTR_SET_VALUE(lastUpdateStatusReason_, lastUpdateStatusReason) };


    // lastUpdateStatusReasonCode Field Functions 
    bool hasLastUpdateStatusReasonCode() const { return this->lastUpdateStatusReasonCode_ != nullptr;};
    void deleteLastUpdateStatusReasonCode() { this->lastUpdateStatusReasonCode_ = nullptr;};
    inline string getLastUpdateStatusReasonCode() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateStatusReasonCode_, "") };
    inline Function& setLastUpdateStatusReasonCode(string lastUpdateStatusReasonCode) { DARABONBA_PTR_SET_VALUE(lastUpdateStatusReasonCode_, lastUpdateStatusReasonCode) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<FunctionLayer> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<FunctionLayer>) };
    inline vector<FunctionLayer> getLayers() { DARABONBA_PTR_GET(layers_, vector<FunctionLayer>) };
    inline Function& setLayers(const vector<FunctionLayer> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline Function& setLayers(vector<FunctionLayer> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, LogConfig) };
    inline LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, LogConfig) };
    inline Function& setLogConfig(const LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline Function& setLogConfig(LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline Function& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline Function& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline Function& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline Function& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline Function& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // polarFsConfig Field Functions 
    bool hasPolarFsConfig() const { return this->polarFsConfig_ != nullptr;};
    void deletePolarFsConfig() { this->polarFsConfig_ = nullptr;};
    inline const PolarFsConfig & getPolarFsConfig() const { DARABONBA_PTR_GET_CONST(polarFsConfig_, PolarFsConfig) };
    inline PolarFsConfig getPolarFsConfig() { DARABONBA_PTR_GET(polarFsConfig_, PolarFsConfig) };
    inline Function& setPolarFsConfig(const PolarFsConfig & polarFsConfig) { DARABONBA_PTR_SET_VALUE(polarFsConfig_, polarFsConfig) };
    inline Function& setPolarFsConfig(PolarFsConfig && polarFsConfig) { DARABONBA_PTR_SET_RVALUE(polarFsConfig_, polarFsConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Function& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline Function& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline Function& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline Function& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // sessionAffinityConfig Field Functions 
    bool hasSessionAffinityConfig() const { return this->sessionAffinityConfig_ != nullptr;};
    void deleteSessionAffinityConfig() { this->sessionAffinityConfig_ = nullptr;};
    inline string getSessionAffinityConfig() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityConfig_, "") };
    inline Function& setSessionAffinityConfig(string sessionAffinityConfig) { DARABONBA_PTR_SET_VALUE(sessionAffinityConfig_, sessionAffinityConfig) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline Function& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateReason Field Functions 
    bool hasStateReason() const { return this->stateReason_ != nullptr;};
    void deleteStateReason() { this->stateReason_ = nullptr;};
    inline string getStateReason() const { DARABONBA_PTR_GET_DEFAULT(stateReason_, "") };
    inline Function& setStateReason(string stateReason) { DARABONBA_PTR_SET_VALUE(stateReason_, stateReason) };


    // stateReasonCode Field Functions 
    bool hasStateReasonCode() const { return this->stateReasonCode_ != nullptr;};
    void deleteStateReasonCode() { this->stateReasonCode_ = nullptr;};
    inline string getStateReasonCode() const { DARABONBA_PTR_GET_DEFAULT(stateReasonCode_, "") };
    inline Function& setStateReasonCode(string stateReasonCode) { DARABONBA_PTR_SET_VALUE(stateReasonCode_, stateReasonCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline Function& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Function& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline Function& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracingConfig Field Functions 
    bool hasTracingConfig() const { return this->tracingConfig_ != nullptr;};
    void deleteTracingConfig() { this->tracingConfig_ = nullptr;};
    inline const TracingConfig & getTracingConfig() const { DARABONBA_PTR_GET_CONST(tracingConfig_, TracingConfig) };
    inline TracingConfig getTracingConfig() { DARABONBA_PTR_GET(tracingConfig_, TracingConfig) };
    inline Function& setTracingConfig(const TracingConfig & tracingConfig) { DARABONBA_PTR_SET_VALUE(tracingConfig_, tracingConfig) };
    inline Function& setTracingConfig(TracingConfig && tracingConfig) { DARABONBA_PTR_SET_RVALUE(tracingConfig_, tracingConfig) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const VPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, VPCConfig) };
    inline VPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, VPCConfig) };
    inline Function& setVpcConfig(const VPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline Function& setVpcConfig(VPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The CRC-64 value of the function code package.
    shared_ptr<string> codeChecksum_ {};
    // The size of the function code package returned by the system. Unit: bytes.
    shared_ptr<int64_t> codeSize_ {};
    // The CPU power allocated to the function. Unit: vCPUs. The value must be a multiple of 0.05. The minimum value is 0.05 and the maximum value is 16. The ratio of cpu to memorySize (in GB) must be from 1:1 to 1:4.
    shared_ptr<float> cpu_ {};
    // The time when the function was created.
    shared_ptr<string> createdTime_ {};
    // The configurations of the Custom Container runtime. After you configure a Custom Container runtime for your function, Function Compute can execute the function in a custom container image. Configure either code or customContainerConfig.
    shared_ptr<CustomContainerConfig> customContainerConfig_ {};
    // The custom DNS settings of the function.
    shared_ptr<CustomDNS> customDNS_ {};
    // The configurations of the custom runtime.
    shared_ptr<CustomRuntimeConfig> customRuntimeConfig_ {};
    // The description of the function.
    shared_ptr<string> description_ {};
    shared_ptr<string> disableInjectCredentials_ {};
    shared_ptr<bool> disableOndemand_ {};
    // The disk size of the function. Unit: MB. Valid values: 512 and 10240.
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<bool> enableLongLiving_ {};
    // The environment variables of the function. You can access the specified environment variables in the runtime.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The identifier of the function resource.
    shared_ptr<string> functionArn_ {};
    // The globally unique ID generated by the system for the function.
    shared_ptr<string> functionId_ {};
    // The name of the function.
    shared_ptr<string> functionName_ {};
    // The GPU configurations of the function.
    shared_ptr<GPUConfig> gpuConfig_ {};
    // The handler of the function. The format of the handler is related to the runtime you use.
    shared_ptr<string> handler_ {};
    shared_ptr<int32_t> idleTimeout_ {};
    // The maximum number of requests that a function instance can process at a time.
    shared_ptr<int32_t> instanceConcurrency_ {};
    shared_ptr<string> instanceIsolationMode_ {};
    // The configurations of instance lifecycle hooks.
    shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig_ {};
    // Specifies whether to allow the function to access the Internet. Default value: true.
    shared_ptr<bool> internetAccess_ {};
    shared_ptr<FunctionRestriction> invocationRestriction_ {};
    // The last time the function was updated.
    shared_ptr<string> lastModifiedTime_ {};
    // The status of the most recent update that was executed on the function. The initial value for this parameter is Successful once the function has been successfully created. Valid values: Successful, Failed, and InProgress.
    shared_ptr<string> lastUpdateStatus_ {};
    // The reason for the most recent update that was executed on the function.
    shared_ptr<string> lastUpdateStatusReason_ {};
    // The reason code for the most recent update that was executed on the function.
    shared_ptr<string> lastUpdateStatusReasonCode_ {};
    // The layers.
    shared_ptr<vector<FunctionLayer>> layers_ {};
    // The logging configurations. Logs generated by the function are written to the specified Logstore.
    shared_ptr<LogConfig> logConfig_ {};
    // The memory capacity for the function. Unit: MB. The value must be a multiple of 64. The minimum capacity is 128 MB and the maximum capacity is 32 GB. The ratio of cpu to memorySize (in GB) must be from 1:1 to 1:4.
    shared_ptr<int32_t> memorySize_ {};
    // The File Storage NAS (NAS) configurations. The configurations allow the function to access the specified NAS file system.
    shared_ptr<NASConfig> nasConfig_ {};
    // The OSS mounting configurations.
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<PolarFsConfig> polarFsConfig_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The Resource Access Management (RAM) role that is assigned to the function. Function Compute assumes the role to obtain a Security Token Service (STS) token, which serves as a temporary key for your function to access other Alibaba Cloud services, such as Object Storage Service (OSS) and Tablestore.
    shared_ptr<string> role_ {};
    // The runtime of the function. Valid values: nodejs8, nodejs10, nodejs12, nodejs14, nodejs16, nodejs18, nodejs20, go1, python3, python3.9, python3.10, java8, java11, php7.2, dotnetcore3.1, custom, custom.debian10, and custom-container.
    shared_ptr<string> runtime_ {};
    shared_ptr<string> sessionAffinity_ {};
    shared_ptr<string> sessionAffinityConfig_ {};
    // The current state of the function.
    shared_ptr<string> state_ {};
    // The reason for the current state of the function.
    shared_ptr<string> stateReason_ {};
    // The reason code for the current state of the function.
    shared_ptr<string> stateReasonCode_ {};
    // The tags.
    shared_ptr<vector<Tag>> tags_ {};
    // The timeout period for function execution. Unit: seconds. Default value: 3. Valid values: 1 to 86400. The execution of the function is terminated when the timeout period expires.
    shared_ptr<int32_t> timeout_ {};
    // The configurations of Managed Service for OpenTelemetry. After Function Compute is integrated with Managed Service for OpenTelemetry, you can record the invocation duration of a request, view the cold start duration of a function, and track the execution duration of the function.
    shared_ptr<TracingConfig> tracingConfig_ {};
    // The Virtual Private Cloud (VPC) configurations. The configurations allow the function to access the specified VPC resources.
    shared_ptr<VPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
