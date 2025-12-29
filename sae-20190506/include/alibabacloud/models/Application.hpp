// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATION_HPP_
#define ALIBABACLOUD_MODELS_APPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomDNS.hpp>
#include <alibabacloud/models/CustomHealthCheckConfig.hpp>
#include <alibabacloud/models/CustomHostAlias.hpp>
#include <alibabacloud/models/CustomRuntimeConfig.hpp>
#include <map>
#include <alibabacloud/models/HTTPTriggerConfig.hpp>
#include <alibabacloud/models/ImageConfig.hpp>
#include <alibabacloud/models/InstanceLifecycleConfig.hpp>
#include <vector>
#include <alibabacloud/models/Probe.hpp>
#include <alibabacloud/models/LogConfig.hpp>
#include <alibabacloud/models/NASConfig.hpp>
#include <alibabacloud/models/OSSMountConfig.hpp>
#include <alibabacloud/models/ScaleConfig.hpp>
#include <alibabacloud/models/SLSConfig.hpp>
#include <alibabacloud/models/TracingConfig.hpp>
#include <alibabacloud/models/Version.hpp>
#include <alibabacloud/models/VPCConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class Application : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Application& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(caPort, caPort_);
      DARABONBA_PTR_TO_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_TO_JSON(codeSize, codeSize_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(customDNS, customDNS_);
      DARABONBA_PTR_TO_JSON(customDomainName, customDomainName_);
      DARABONBA_PTR_TO_JSON(customHealthCheckConfig, customHealthCheckConfig_);
      DARABONBA_PTR_TO_JSON(customHostAlias, customHostAlias_);
      DARABONBA_PTR_TO_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(enableAppMetric, enableAppMetric_);
      DARABONBA_PTR_TO_JSON(enableArmsAdvanced, enableArmsAdvanced_);
      DARABONBA_PTR_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(gpuMemorySize, gpuMemorySize_);
      DARABONBA_PTR_TO_JSON(handler, handler_);
      DARABONBA_PTR_TO_JSON(httpTriggerConfig, httpTriggerConfig_);
      DARABONBA_PTR_TO_JSON(imageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(initializationTimeout, initializationTimeout_);
      DARABONBA_PTR_TO_JSON(initializer, initializer_);
      DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_TO_JSON(instanceSoftConcurrency, instanceSoftConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(layersArnV2, layersArnV2_);
      DARABONBA_PTR_TO_JSON(livenessProbe, livenessProbe_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(programmingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(scaleConfig, scaleConfig_);
      DARABONBA_PTR_TO_JSON(slsConfig, slsConfig_);
      DARABONBA_PTR_TO_JSON(startupProbe, startupProbe_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_TO_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_TO_JSON(urlIntranet, urlIntranet_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, Application& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(caPort, caPort_);
      DARABONBA_PTR_FROM_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_FROM_JSON(codeSize, codeSize_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(customDNS, customDNS_);
      DARABONBA_PTR_FROM_JSON(customDomainName, customDomainName_);
      DARABONBA_PTR_FROM_JSON(customHealthCheckConfig, customHealthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(customHostAlias, customHostAlias_);
      DARABONBA_PTR_FROM_JSON(customRuntimeConfig, customRuntimeConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(enableAppMetric, enableAppMetric_);
      DARABONBA_PTR_FROM_JSON(enableArmsAdvanced, enableArmsAdvanced_);
      DARABONBA_PTR_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(gpuMemorySize, gpuMemorySize_);
      DARABONBA_PTR_FROM_JSON(handler, handler_);
      DARABONBA_PTR_FROM_JSON(httpTriggerConfig, httpTriggerConfig_);
      DARABONBA_PTR_FROM_JSON(imageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(initializationTimeout, initializationTimeout_);
      DARABONBA_PTR_FROM_JSON(initializer, initializer_);
      DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_FROM_JSON(instanceSoftConcurrency, instanceSoftConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(internetAccess, internetAccess_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(layersArnV2, layersArnV2_);
      DARABONBA_PTR_FROM_JSON(livenessProbe, livenessProbe_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(namespaceID, namespaceID_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(programmingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(scaleConfig, scaleConfig_);
      DARABONBA_PTR_FROM_JSON(slsConfig, slsConfig_);
      DARABONBA_PTR_FROM_JSON(startupProbe, startupProbe_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(tracingConfig, tracingConfig_);
      DARABONBA_PTR_FROM_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_FROM_JSON(urlIntranet, urlIntranet_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    Application() = default ;
    Application(const Application &) = default ;
    Application(Application &&) = default ;
    Application(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Application() = default ;
    Application& operator=(const Application &) = default ;
    Application& operator=(Application &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->applicationId_ == nullptr && this->applicationName_ == nullptr && this->args_ == nullptr && this->caPort_ == nullptr && this->codeChecksum_ == nullptr
        && this->codeSize_ == nullptr && this->command_ == nullptr && this->cpu_ == nullptr && this->createdTime_ == nullptr && this->customDNS_ == nullptr
        && this->customDomainName_ == nullptr && this->customHealthCheckConfig_ == nullptr && this->customHostAlias_ == nullptr && this->customRuntimeConfig_ == nullptr && this->description_ == nullptr
        && this->diskSize_ == nullptr && this->enableAppMetric_ == nullptr && this->enableArmsAdvanced_ == nullptr && this->environmentVariables_ == nullptr && this->gpuMemorySize_ == nullptr
        && this->handler_ == nullptr && this->httpTriggerConfig_ == nullptr && this->imageConfig_ == nullptr && this->initializationTimeout_ == nullptr && this->initializer_ == nullptr
        && this->instanceConcurrency_ == nullptr && this->instanceLifecycleConfig_ == nullptr && this->instanceSoftConcurrency_ == nullptr && this->instanceType_ == nullptr && this->internetAccess_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->layers_ == nullptr && this->layersArnV2_ == nullptr && this->livenessProbe_ == nullptr && this->logConfig_ == nullptr
        && this->memorySize_ == nullptr && this->namespace_ == nullptr && this->namespaceID_ == nullptr && this->namespaceName_ == nullptr && this->nasConfig_ == nullptr
        && this->ossMountConfig_ == nullptr && this->programmingLanguage_ == nullptr && this->runtime_ == nullptr && this->scaleConfig_ == nullptr && this->slsConfig_ == nullptr
        && this->startupProbe_ == nullptr && this->timeout_ == nullptr && this->tracingConfig_ == nullptr && this->urlInternet_ == nullptr && this->urlIntranet_ == nullptr
        && this->version_ == nullptr && this->vpcConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Application& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline Application& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline Application& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline Application& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // caPort Field Functions 
    bool hasCaPort() const { return this->caPort_ != nullptr;};
    void deleteCaPort() { this->caPort_ = nullptr;};
    inline int32_t getCaPort() const { DARABONBA_PTR_GET_DEFAULT(caPort_, 0) };
    inline Application& setCaPort(int32_t caPort) { DARABONBA_PTR_SET_VALUE(caPort_, caPort) };


    // codeChecksum Field Functions 
    bool hasCodeChecksum() const { return this->codeChecksum_ != nullptr;};
    void deleteCodeChecksum() { this->codeChecksum_ = nullptr;};
    inline string getCodeChecksum() const { DARABONBA_PTR_GET_DEFAULT(codeChecksum_, "") };
    inline Application& setCodeChecksum(string codeChecksum) { DARABONBA_PTR_SET_VALUE(codeChecksum_, codeChecksum) };


    // codeSize Field Functions 
    bool hasCodeSize() const { return this->codeSize_ != nullptr;};
    void deleteCodeSize() { this->codeSize_ = nullptr;};
    inline int64_t getCodeSize() const { DARABONBA_PTR_GET_DEFAULT(codeSize_, 0L) };
    inline Application& setCodeSize(int64_t codeSize) { DARABONBA_PTR_SET_VALUE(codeSize_, codeSize) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline Application& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Application& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Application& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customDNS Field Functions 
    bool hasCustomDNS() const { return this->customDNS_ != nullptr;};
    void deleteCustomDNS() { this->customDNS_ = nullptr;};
    inline const CustomDNS & getCustomDNS() const { DARABONBA_PTR_GET_CONST(customDNS_, CustomDNS) };
    inline CustomDNS getCustomDNS() { DARABONBA_PTR_GET(customDNS_, CustomDNS) };
    inline Application& setCustomDNS(const CustomDNS & customDNS) { DARABONBA_PTR_SET_VALUE(customDNS_, customDNS) };
    inline Application& setCustomDNS(CustomDNS && customDNS) { DARABONBA_PTR_SET_RVALUE(customDNS_, customDNS) };


    // customDomainName Field Functions 
    bool hasCustomDomainName() const { return this->customDomainName_ != nullptr;};
    void deleteCustomDomainName() { this->customDomainName_ = nullptr;};
    inline string getCustomDomainName() const { DARABONBA_PTR_GET_DEFAULT(customDomainName_, "") };
    inline Application& setCustomDomainName(string customDomainName) { DARABONBA_PTR_SET_VALUE(customDomainName_, customDomainName) };


    // customHealthCheckConfig Field Functions 
    bool hasCustomHealthCheckConfig() const { return this->customHealthCheckConfig_ != nullptr;};
    void deleteCustomHealthCheckConfig() { this->customHealthCheckConfig_ = nullptr;};
    inline const CustomHealthCheckConfig & getCustomHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(customHealthCheckConfig_, CustomHealthCheckConfig) };
    inline CustomHealthCheckConfig getCustomHealthCheckConfig() { DARABONBA_PTR_GET(customHealthCheckConfig_, CustomHealthCheckConfig) };
    inline Application& setCustomHealthCheckConfig(const CustomHealthCheckConfig & customHealthCheckConfig) { DARABONBA_PTR_SET_VALUE(customHealthCheckConfig_, customHealthCheckConfig) };
    inline Application& setCustomHealthCheckConfig(CustomHealthCheckConfig && customHealthCheckConfig) { DARABONBA_PTR_SET_RVALUE(customHealthCheckConfig_, customHealthCheckConfig) };


    // customHostAlias Field Functions 
    bool hasCustomHostAlias() const { return this->customHostAlias_ != nullptr;};
    void deleteCustomHostAlias() { this->customHostAlias_ = nullptr;};
    inline const CustomHostAlias & getCustomHostAlias() const { DARABONBA_PTR_GET_CONST(customHostAlias_, CustomHostAlias) };
    inline CustomHostAlias getCustomHostAlias() { DARABONBA_PTR_GET(customHostAlias_, CustomHostAlias) };
    inline Application& setCustomHostAlias(const CustomHostAlias & customHostAlias) { DARABONBA_PTR_SET_VALUE(customHostAlias_, customHostAlias) };
    inline Application& setCustomHostAlias(CustomHostAlias && customHostAlias) { DARABONBA_PTR_SET_RVALUE(customHostAlias_, customHostAlias) };


    // customRuntimeConfig Field Functions 
    bool hasCustomRuntimeConfig() const { return this->customRuntimeConfig_ != nullptr;};
    void deleteCustomRuntimeConfig() { this->customRuntimeConfig_ = nullptr;};
    inline const CustomRuntimeConfig & getCustomRuntimeConfig() const { DARABONBA_PTR_GET_CONST(customRuntimeConfig_, CustomRuntimeConfig) };
    inline CustomRuntimeConfig getCustomRuntimeConfig() { DARABONBA_PTR_GET(customRuntimeConfig_, CustomRuntimeConfig) };
    inline Application& setCustomRuntimeConfig(const CustomRuntimeConfig & customRuntimeConfig) { DARABONBA_PTR_SET_VALUE(customRuntimeConfig_, customRuntimeConfig) };
    inline Application& setCustomRuntimeConfig(CustomRuntimeConfig && customRuntimeConfig) { DARABONBA_PTR_SET_RVALUE(customRuntimeConfig_, customRuntimeConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Application& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline Application& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableAppMetric Field Functions 
    bool hasEnableAppMetric() const { return this->enableAppMetric_ != nullptr;};
    void deleteEnableAppMetric() { this->enableAppMetric_ = nullptr;};
    inline bool getEnableAppMetric() const { DARABONBA_PTR_GET_DEFAULT(enableAppMetric_, false) };
    inline Application& setEnableAppMetric(bool enableAppMetric) { DARABONBA_PTR_SET_VALUE(enableAppMetric_, enableAppMetric) };


    // enableArmsAdvanced Field Functions 
    bool hasEnableArmsAdvanced() const { return this->enableArmsAdvanced_ != nullptr;};
    void deleteEnableArmsAdvanced() { this->enableArmsAdvanced_ = nullptr;};
    inline bool getEnableArmsAdvanced() const { DARABONBA_PTR_GET_DEFAULT(enableArmsAdvanced_, false) };
    inline Application& setEnableArmsAdvanced(bool enableArmsAdvanced) { DARABONBA_PTR_SET_VALUE(enableArmsAdvanced_, enableArmsAdvanced) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline Application& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline Application& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gpuMemorySize Field Functions 
    bool hasGpuMemorySize() const { return this->gpuMemorySize_ != nullptr;};
    void deleteGpuMemorySize() { this->gpuMemorySize_ = nullptr;};
    inline int32_t getGpuMemorySize() const { DARABONBA_PTR_GET_DEFAULT(gpuMemorySize_, 0) };
    inline Application& setGpuMemorySize(int32_t gpuMemorySize) { DARABONBA_PTR_SET_VALUE(gpuMemorySize_, gpuMemorySize) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline Application& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // httpTriggerConfig Field Functions 
    bool hasHttpTriggerConfig() const { return this->httpTriggerConfig_ != nullptr;};
    void deleteHttpTriggerConfig() { this->httpTriggerConfig_ = nullptr;};
    inline const HTTPTriggerConfig & getHttpTriggerConfig() const { DARABONBA_PTR_GET_CONST(httpTriggerConfig_, HTTPTriggerConfig) };
    inline HTTPTriggerConfig getHttpTriggerConfig() { DARABONBA_PTR_GET(httpTriggerConfig_, HTTPTriggerConfig) };
    inline Application& setHttpTriggerConfig(const HTTPTriggerConfig & httpTriggerConfig) { DARABONBA_PTR_SET_VALUE(httpTriggerConfig_, httpTriggerConfig) };
    inline Application& setHttpTriggerConfig(HTTPTriggerConfig && httpTriggerConfig) { DARABONBA_PTR_SET_RVALUE(httpTriggerConfig_, httpTriggerConfig) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const ImageConfig & getImageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, ImageConfig) };
    inline ImageConfig getImageConfig() { DARABONBA_PTR_GET(imageConfig_, ImageConfig) };
    inline Application& setImageConfig(const ImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline Application& setImageConfig(ImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // initializationTimeout Field Functions 
    bool hasInitializationTimeout() const { return this->initializationTimeout_ != nullptr;};
    void deleteInitializationTimeout() { this->initializationTimeout_ = nullptr;};
    inline int32_t getInitializationTimeout() const { DARABONBA_PTR_GET_DEFAULT(initializationTimeout_, 0) };
    inline Application& setInitializationTimeout(int32_t initializationTimeout) { DARABONBA_PTR_SET_VALUE(initializationTimeout_, initializationTimeout) };


    // initializer Field Functions 
    bool hasInitializer() const { return this->initializer_ != nullptr;};
    void deleteInitializer() { this->initializer_ = nullptr;};
    inline string getInitializer() const { DARABONBA_PTR_GET_DEFAULT(initializer_, "") };
    inline Application& setInitializer(string initializer) { DARABONBA_PTR_SET_VALUE(initializer_, initializer) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t getInstanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline Application& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // instanceLifecycleConfig Field Functions 
    bool hasInstanceLifecycleConfig() const { return this->instanceLifecycleConfig_ != nullptr;};
    void deleteInstanceLifecycleConfig() { this->instanceLifecycleConfig_ = nullptr;};
    inline const InstanceLifecycleConfig & getInstanceLifecycleConfig() const { DARABONBA_PTR_GET_CONST(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline InstanceLifecycleConfig getInstanceLifecycleConfig() { DARABONBA_PTR_GET(instanceLifecycleConfig_, InstanceLifecycleConfig) };
    inline Application& setInstanceLifecycleConfig(const InstanceLifecycleConfig & instanceLifecycleConfig) { DARABONBA_PTR_SET_VALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };
    inline Application& setInstanceLifecycleConfig(InstanceLifecycleConfig && instanceLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };


    // instanceSoftConcurrency Field Functions 
    bool hasInstanceSoftConcurrency() const { return this->instanceSoftConcurrency_ != nullptr;};
    void deleteInstanceSoftConcurrency() { this->instanceSoftConcurrency_ = nullptr;};
    inline int32_t getInstanceSoftConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceSoftConcurrency_, 0) };
    inline Application& setInstanceSoftConcurrency(int32_t instanceSoftConcurrency) { DARABONBA_PTR_SET_VALUE(instanceSoftConcurrency_, instanceSoftConcurrency) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline Application& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetAccess Field Functions 
    bool hasInternetAccess() const { return this->internetAccess_ != nullptr;};
    void deleteInternetAccess() { this->internetAccess_ = nullptr;};
    inline bool getInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(internetAccess_, false) };
    inline Application& setInternetAccess(bool internetAccess) { DARABONBA_PTR_SET_VALUE(internetAccess_, internetAccess) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline Application& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<string> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
    inline vector<string> getLayers() { DARABONBA_PTR_GET(layers_, vector<string>) };
    inline Application& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline Application& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // layersArnV2 Field Functions 
    bool hasLayersArnV2() const { return this->layersArnV2_ != nullptr;};
    void deleteLayersArnV2() { this->layersArnV2_ = nullptr;};
    inline const vector<string> & getLayersArnV2() const { DARABONBA_PTR_GET_CONST(layersArnV2_, vector<string>) };
    inline vector<string> getLayersArnV2() { DARABONBA_PTR_GET(layersArnV2_, vector<string>) };
    inline Application& setLayersArnV2(const vector<string> & layersArnV2) { DARABONBA_PTR_SET_VALUE(layersArnV2_, layersArnV2) };
    inline Application& setLayersArnV2(vector<string> && layersArnV2) { DARABONBA_PTR_SET_RVALUE(layersArnV2_, layersArnV2) };


    // livenessProbe Field Functions 
    bool hasLivenessProbe() const { return this->livenessProbe_ != nullptr;};
    void deleteLivenessProbe() { this->livenessProbe_ = nullptr;};
    inline const Probe & getLivenessProbe() const { DARABONBA_PTR_GET_CONST(livenessProbe_, Probe) };
    inline Probe getLivenessProbe() { DARABONBA_PTR_GET(livenessProbe_, Probe) };
    inline Application& setLivenessProbe(const Probe & livenessProbe) { DARABONBA_PTR_SET_VALUE(livenessProbe_, livenessProbe) };
    inline Application& setLivenessProbe(Probe && livenessProbe) { DARABONBA_PTR_SET_RVALUE(livenessProbe_, livenessProbe) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, LogConfig) };
    inline LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, LogConfig) };
    inline Application& setLogConfig(const LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline Application& setLogConfig(LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline Application& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Application& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceID Field Functions 
    bool hasNamespaceID() const { return this->namespaceID_ != nullptr;};
    void deleteNamespaceID() { this->namespaceID_ = nullptr;};
    inline string getNamespaceID() const { DARABONBA_PTR_GET_DEFAULT(namespaceID_, "") };
    inline Application& setNamespaceID(string namespaceID) { DARABONBA_PTR_SET_VALUE(namespaceID_, namespaceID) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline Application& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const NASConfig & getNasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, NASConfig) };
    inline NASConfig getNasConfig() { DARABONBA_PTR_GET(nasConfig_, NASConfig) };
    inline Application& setNasConfig(const NASConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline Application& setNasConfig(NASConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const OSSMountConfig & getOssMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, OSSMountConfig) };
    inline OSSMountConfig getOssMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, OSSMountConfig) };
    inline Application& setOssMountConfig(const OSSMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline Application& setOssMountConfig(OSSMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline Application& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline Application& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // scaleConfig Field Functions 
    bool hasScaleConfig() const { return this->scaleConfig_ != nullptr;};
    void deleteScaleConfig() { this->scaleConfig_ = nullptr;};
    inline const ScaleConfig & getScaleConfig() const { DARABONBA_PTR_GET_CONST(scaleConfig_, ScaleConfig) };
    inline ScaleConfig getScaleConfig() { DARABONBA_PTR_GET(scaleConfig_, ScaleConfig) };
    inline Application& setScaleConfig(const ScaleConfig & scaleConfig) { DARABONBA_PTR_SET_VALUE(scaleConfig_, scaleConfig) };
    inline Application& setScaleConfig(ScaleConfig && scaleConfig) { DARABONBA_PTR_SET_RVALUE(scaleConfig_, scaleConfig) };


    // slsConfig Field Functions 
    bool hasSlsConfig() const { return this->slsConfig_ != nullptr;};
    void deleteSlsConfig() { this->slsConfig_ = nullptr;};
    inline const SLSConfig & getSlsConfig() const { DARABONBA_PTR_GET_CONST(slsConfig_, SLSConfig) };
    inline SLSConfig getSlsConfig() { DARABONBA_PTR_GET(slsConfig_, SLSConfig) };
    inline Application& setSlsConfig(const SLSConfig & slsConfig) { DARABONBA_PTR_SET_VALUE(slsConfig_, slsConfig) };
    inline Application& setSlsConfig(SLSConfig && slsConfig) { DARABONBA_PTR_SET_RVALUE(slsConfig_, slsConfig) };


    // startupProbe Field Functions 
    bool hasStartupProbe() const { return this->startupProbe_ != nullptr;};
    void deleteStartupProbe() { this->startupProbe_ = nullptr;};
    inline const Probe & getStartupProbe() const { DARABONBA_PTR_GET_CONST(startupProbe_, Probe) };
    inline Probe getStartupProbe() { DARABONBA_PTR_GET(startupProbe_, Probe) };
    inline Application& setStartupProbe(const Probe & startupProbe) { DARABONBA_PTR_SET_VALUE(startupProbe_, startupProbe) };
    inline Application& setStartupProbe(Probe && startupProbe) { DARABONBA_PTR_SET_RVALUE(startupProbe_, startupProbe) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline Application& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tracingConfig Field Functions 
    bool hasTracingConfig() const { return this->tracingConfig_ != nullptr;};
    void deleteTracingConfig() { this->tracingConfig_ = nullptr;};
    inline const TracingConfig & getTracingConfig() const { DARABONBA_PTR_GET_CONST(tracingConfig_, TracingConfig) };
    inline TracingConfig getTracingConfig() { DARABONBA_PTR_GET(tracingConfig_, TracingConfig) };
    inline Application& setTracingConfig(const TracingConfig & tracingConfig) { DARABONBA_PTR_SET_VALUE(tracingConfig_, tracingConfig) };
    inline Application& setTracingConfig(TracingConfig && tracingConfig) { DARABONBA_PTR_SET_RVALUE(tracingConfig_, tracingConfig) };


    // urlInternet Field Functions 
    bool hasUrlInternet() const { return this->urlInternet_ != nullptr;};
    void deleteUrlInternet() { this->urlInternet_ = nullptr;};
    inline string getUrlInternet() const { DARABONBA_PTR_GET_DEFAULT(urlInternet_, "") };
    inline Application& setUrlInternet(string urlInternet) { DARABONBA_PTR_SET_VALUE(urlInternet_, urlInternet) };


    // urlIntranet Field Functions 
    bool hasUrlIntranet() const { return this->urlIntranet_ != nullptr;};
    void deleteUrlIntranet() { this->urlIntranet_ = nullptr;};
    inline string getUrlIntranet() const { DARABONBA_PTR_GET_DEFAULT(urlIntranet_, "") };
    inline Application& setUrlIntranet(string urlIntranet) { DARABONBA_PTR_SET_VALUE(urlIntranet_, urlIntranet) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const Version & getVersion() const { DARABONBA_PTR_GET_CONST(version_, Version) };
    inline Version getVersion() { DARABONBA_PTR_GET(version_, Version) };
    inline Application& setVersion(const Version & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline Application& setVersion(Version && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const VPCConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, VPCConfig) };
    inline VPCConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, VPCConfig) };
    inline Application& setVpcConfig(const VPCConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline Application& setVpcConfig(VPCConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> applicationName_ {};
    shared_ptr<string> args_ {};
    shared_ptr<int32_t> caPort_ {};
    shared_ptr<string> codeChecksum_ {};
    shared_ptr<int64_t> codeSize_ {};
    shared_ptr<string> command_ {};
    shared_ptr<float> cpu_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<CustomDNS> customDNS_ {};
    shared_ptr<string> customDomainName_ {};
    shared_ptr<CustomHealthCheckConfig> customHealthCheckConfig_ {};
    shared_ptr<CustomHostAlias> customHostAlias_ {};
    shared_ptr<CustomRuntimeConfig> customRuntimeConfig_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> diskSize_ {};
    shared_ptr<bool> enableAppMetric_ {};
    shared_ptr<bool> enableArmsAdvanced_ {};
    shared_ptr<map<string, string>> environmentVariables_ {};
    shared_ptr<int32_t> gpuMemorySize_ {};
    shared_ptr<string> handler_ {};
    shared_ptr<HTTPTriggerConfig> httpTriggerConfig_ {};
    shared_ptr<ImageConfig> imageConfig_ {};
    shared_ptr<int32_t> initializationTimeout_ {};
    shared_ptr<string> initializer_ {};
    shared_ptr<int32_t> instanceConcurrency_ {};
    shared_ptr<InstanceLifecycleConfig> instanceLifecycleConfig_ {};
    shared_ptr<int32_t> instanceSoftConcurrency_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<bool> internetAccess_ {};
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<vector<string>> layers_ {};
    shared_ptr<vector<string>> layersArnV2_ {};
    shared_ptr<Probe> livenessProbe_ {};
    shared_ptr<LogConfig> logConfig_ {};
    shared_ptr<int32_t> memorySize_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> namespaceID_ {};
    shared_ptr<string> namespaceName_ {};
    shared_ptr<NASConfig> nasConfig_ {};
    shared_ptr<OSSMountConfig> ossMountConfig_ {};
    shared_ptr<string> programmingLanguage_ {};
    shared_ptr<string> runtime_ {};
    shared_ptr<ScaleConfig> scaleConfig_ {};
    shared_ptr<SLSConfig> slsConfig_ {};
    shared_ptr<Probe> startupProbe_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<TracingConfig> tracingConfig_ {};
    shared_ptr<string> urlInternet_ {};
    shared_ptr<string> urlIntranet_ {};
    shared_ptr<Version> version_ {};
    shared_ptr<VPCConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
