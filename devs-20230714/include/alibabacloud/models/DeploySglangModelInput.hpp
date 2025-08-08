// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploySGLangModelInputConcurrencyConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputCustomContainerConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputFeatureGates.hpp>
#include <alibabacloud/models/DeploySGLangModelInputGpuConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputHttpTrigger.hpp>
#include <alibabacloud/models/DeploySGLangModelInputLogConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputModelConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputNasConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputOssMountConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputProvisionConfig.hpp>
#include <alibabacloud/models/DeploySGLangModelInputVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInput& obj) { 
      DARABONBA_PTR_TO_JSON(accountID, accountID_);
      DARABONBA_PTR_TO_JSON(concurrencyConfig, concurrencyConfig_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(envName, envName_);
      DARABONBA_ANY_TO_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(featureGates, featureGates_);
      DARABONBA_PTR_TO_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_TO_JSON(httpTrigger, httpTrigger_);
      DARABONBA_PTR_TO_JSON(imageName, imageName_);
      DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_TO_JSON(originalName, originalName_);
      DARABONBA_PTR_TO_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(provisionConfig, provisionConfig_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(reportStatusURL, reportStatusURL_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInput& obj) { 
      DARABONBA_PTR_FROM_JSON(accountID, accountID_);
      DARABONBA_PTR_FROM_JSON(concurrencyConfig, concurrencyConfig_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(customContainerConfig, customContainerConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(envName, envName_);
      DARABONBA_ANY_FROM_JSON(environmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(featureGates, featureGates_);
      DARABONBA_PTR_FROM_JSON(gpuConfig, gpuConfig_);
      DARABONBA_PTR_FROM_JSON(httpTrigger, httpTrigger_);
      DARABONBA_PTR_FROM_JSON(imageName, imageName_);
      DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nasConfig, nasConfig_);
      DARABONBA_PTR_FROM_JSON(originalName, originalName_);
      DARABONBA_PTR_FROM_JSON(ossMountConfig, ossMountConfig_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(provisionConfig, provisionConfig_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(reportStatusURL, reportStatusURL_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    DeploySGLangModelInput() = default ;
    DeploySGLangModelInput(const DeploySGLangModelInput &) = default ;
    DeploySGLangModelInput(DeploySGLangModelInput &&) = default ;
    DeploySGLangModelInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInput() = default ;
    DeploySGLangModelInput& operator=(const DeploySGLangModelInput &) = default ;
    DeploySGLangModelInput& operator=(DeploySGLangModelInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->concurrencyConfig_ != nullptr && this->cpu_ != nullptr && this->customContainerConfig_ != nullptr && this->description_ != nullptr && this->diskSize_ != nullptr
        && this->envName_ != nullptr && this->environmentVariables_ != nullptr && this->featureGates_ != nullptr && this->gpuConfig_ != nullptr && this->httpTrigger_ != nullptr
        && this->imageName_ != nullptr && this->instanceConcurrency_ != nullptr && this->logConfig_ != nullptr && this->memorySize_ != nullptr && this->modelConfig_ != nullptr
        && this->name_ != nullptr && this->nasConfig_ != nullptr && this->originalName_ != nullptr && this->ossMountConfig_ != nullptr && this->projectName_ != nullptr
        && this->provisionConfig_ != nullptr && this->region_ != nullptr && this->reportStatusURL_ != nullptr && this->role_ != nullptr && this->timeout_ != nullptr
        && this->traceId_ != nullptr && this->vpcConfig_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline DeploySGLangModelInput& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // concurrencyConfig Field Functions 
    bool hasConcurrencyConfig() const { return this->concurrencyConfig_ != nullptr;};
    void deleteConcurrencyConfig() { this->concurrencyConfig_ = nullptr;};
    inline const DeploySGLangModelInputConcurrencyConfig & concurrencyConfig() const { DARABONBA_PTR_GET_CONST(concurrencyConfig_, DeploySGLangModelInputConcurrencyConfig) };
    inline DeploySGLangModelInputConcurrencyConfig concurrencyConfig() { DARABONBA_PTR_GET(concurrencyConfig_, DeploySGLangModelInputConcurrencyConfig) };
    inline DeploySGLangModelInput& setConcurrencyConfig(const DeploySGLangModelInputConcurrencyConfig & concurrencyConfig) { DARABONBA_PTR_SET_VALUE(concurrencyConfig_, concurrencyConfig) };
    inline DeploySGLangModelInput& setConcurrencyConfig(DeploySGLangModelInputConcurrencyConfig && concurrencyConfig) { DARABONBA_PTR_SET_RVALUE(concurrencyConfig_, concurrencyConfig) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DeploySGLangModelInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customContainerConfig Field Functions 
    bool hasCustomContainerConfig() const { return this->customContainerConfig_ != nullptr;};
    void deleteCustomContainerConfig() { this->customContainerConfig_ = nullptr;};
    inline const DeploySGLangModelInputCustomContainerConfig & customContainerConfig() const { DARABONBA_PTR_GET_CONST(customContainerConfig_, DeploySGLangModelInputCustomContainerConfig) };
    inline DeploySGLangModelInputCustomContainerConfig customContainerConfig() { DARABONBA_PTR_GET(customContainerConfig_, DeploySGLangModelInputCustomContainerConfig) };
    inline DeploySGLangModelInput& setCustomContainerConfig(const DeploySGLangModelInputCustomContainerConfig & customContainerConfig) { DARABONBA_PTR_SET_VALUE(customContainerConfig_, customContainerConfig) };
    inline DeploySGLangModelInput& setCustomContainerConfig(DeploySGLangModelInputCustomContainerConfig && customContainerConfig) { DARABONBA_PTR_SET_RVALUE(customContainerConfig_, customContainerConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeploySGLangModelInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DeploySGLangModelInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline DeploySGLangModelInput& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline     const Darabonba::Json & environmentVariables() const { DARABONBA_GET(environmentVariables_) };
    Darabonba::Json & environmentVariables() { DARABONBA_GET(environmentVariables_) };
    inline DeploySGLangModelInput& setEnvironmentVariables(const Darabonba::Json & environmentVariables) { DARABONBA_SET_VALUE(environmentVariables_, environmentVariables) };
    inline DeploySGLangModelInput& setEnvironmentVariables(Darabonba::Json & environmentVariables) { DARABONBA_SET_RVALUE(environmentVariables_, environmentVariables) };


    // featureGates Field Functions 
    bool hasFeatureGates() const { return this->featureGates_ != nullptr;};
    void deleteFeatureGates() { this->featureGates_ = nullptr;};
    inline const DeploySGLangModelInputFeatureGates & featureGates() const { DARABONBA_PTR_GET_CONST(featureGates_, DeploySGLangModelInputFeatureGates) };
    inline DeploySGLangModelInputFeatureGates featureGates() { DARABONBA_PTR_GET(featureGates_, DeploySGLangModelInputFeatureGates) };
    inline DeploySGLangModelInput& setFeatureGates(const DeploySGLangModelInputFeatureGates & featureGates) { DARABONBA_PTR_SET_VALUE(featureGates_, featureGates) };
    inline DeploySGLangModelInput& setFeatureGates(DeploySGLangModelInputFeatureGates && featureGates) { DARABONBA_PTR_SET_RVALUE(featureGates_, featureGates) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline const DeploySGLangModelInputGpuConfig & gpuConfig() const { DARABONBA_PTR_GET_CONST(gpuConfig_, DeploySGLangModelInputGpuConfig) };
    inline DeploySGLangModelInputGpuConfig gpuConfig() { DARABONBA_PTR_GET(gpuConfig_, DeploySGLangModelInputGpuConfig) };
    inline DeploySGLangModelInput& setGpuConfig(const DeploySGLangModelInputGpuConfig & gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };
    inline DeploySGLangModelInput& setGpuConfig(DeploySGLangModelInputGpuConfig && gpuConfig) { DARABONBA_PTR_SET_RVALUE(gpuConfig_, gpuConfig) };


    // httpTrigger Field Functions 
    bool hasHttpTrigger() const { return this->httpTrigger_ != nullptr;};
    void deleteHttpTrigger() { this->httpTrigger_ = nullptr;};
    inline const DeploySGLangModelInputHttpTrigger & httpTrigger() const { DARABONBA_PTR_GET_CONST(httpTrigger_, DeploySGLangModelInputHttpTrigger) };
    inline DeploySGLangModelInputHttpTrigger httpTrigger() { DARABONBA_PTR_GET(httpTrigger_, DeploySGLangModelInputHttpTrigger) };
    inline DeploySGLangModelInput& setHttpTrigger(const DeploySGLangModelInputHttpTrigger & httpTrigger) { DARABONBA_PTR_SET_VALUE(httpTrigger_, httpTrigger) };
    inline DeploySGLangModelInput& setHttpTrigger(DeploySGLangModelInputHttpTrigger && httpTrigger) { DARABONBA_PTR_SET_RVALUE(httpTrigger_, httpTrigger) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DeploySGLangModelInput& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t instanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline DeploySGLangModelInput& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const DeploySGLangModelInputLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, DeploySGLangModelInputLogConfig) };
    inline DeploySGLangModelInputLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, DeploySGLangModelInputLogConfig) };
    inline DeploySGLangModelInput& setLogConfig(const DeploySGLangModelInputLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline DeploySGLangModelInput& setLogConfig(DeploySGLangModelInputLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DeploySGLangModelInput& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const DeploySGLangModelInputModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, DeploySGLangModelInputModelConfig) };
    inline DeploySGLangModelInputModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, DeploySGLangModelInputModelConfig) };
    inline DeploySGLangModelInput& setModelConfig(const DeploySGLangModelInputModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline DeploySGLangModelInput& setModelConfig(DeploySGLangModelInputModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeploySGLangModelInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const DeploySGLangModelInputNasConfig & nasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, DeploySGLangModelInputNasConfig) };
    inline DeploySGLangModelInputNasConfig nasConfig() { DARABONBA_PTR_GET(nasConfig_, DeploySGLangModelInputNasConfig) };
    inline DeploySGLangModelInput& setNasConfig(const DeploySGLangModelInputNasConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline DeploySGLangModelInput& setNasConfig(DeploySGLangModelInputNasConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // originalName Field Functions 
    bool hasOriginalName() const { return this->originalName_ != nullptr;};
    void deleteOriginalName() { this->originalName_ = nullptr;};
    inline string originalName() const { DARABONBA_PTR_GET_DEFAULT(originalName_, "") };
    inline DeploySGLangModelInput& setOriginalName(string originalName) { DARABONBA_PTR_SET_VALUE(originalName_, originalName) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const DeploySGLangModelInputOssMountConfig & ossMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, DeploySGLangModelInputOssMountConfig) };
    inline DeploySGLangModelInputOssMountConfig ossMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, DeploySGLangModelInputOssMountConfig) };
    inline DeploySGLangModelInput& setOssMountConfig(const DeploySGLangModelInputOssMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline DeploySGLangModelInput& setOssMountConfig(DeploySGLangModelInputOssMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DeploySGLangModelInput& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // provisionConfig Field Functions 
    bool hasProvisionConfig() const { return this->provisionConfig_ != nullptr;};
    void deleteProvisionConfig() { this->provisionConfig_ = nullptr;};
    inline const DeploySGLangModelInputProvisionConfig & provisionConfig() const { DARABONBA_PTR_GET_CONST(provisionConfig_, DeploySGLangModelInputProvisionConfig) };
    inline DeploySGLangModelInputProvisionConfig provisionConfig() { DARABONBA_PTR_GET(provisionConfig_, DeploySGLangModelInputProvisionConfig) };
    inline DeploySGLangModelInput& setProvisionConfig(const DeploySGLangModelInputProvisionConfig & provisionConfig) { DARABONBA_PTR_SET_VALUE(provisionConfig_, provisionConfig) };
    inline DeploySGLangModelInput& setProvisionConfig(DeploySGLangModelInputProvisionConfig && provisionConfig) { DARABONBA_PTR_SET_RVALUE(provisionConfig_, provisionConfig) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DeploySGLangModelInput& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // reportStatusURL Field Functions 
    bool hasReportStatusURL() const { return this->reportStatusURL_ != nullptr;};
    void deleteReportStatusURL() { this->reportStatusURL_ = nullptr;};
    inline string reportStatusURL() const { DARABONBA_PTR_GET_DEFAULT(reportStatusURL_, "") };
    inline DeploySGLangModelInput& setReportStatusURL(string reportStatusURL) { DARABONBA_PTR_SET_VALUE(reportStatusURL_, reportStatusURL) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeploySGLangModelInput& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeploySGLangModelInput& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DeploySGLangModelInput& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const DeploySGLangModelInputVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, DeploySGLangModelInputVpcConfig) };
    inline DeploySGLangModelInputVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, DeploySGLangModelInputVpcConfig) };
    inline DeploySGLangModelInput& setVpcConfig(const DeploySGLangModelInputVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DeploySGLangModelInput& setVpcConfig(DeploySGLangModelInputVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    std::shared_ptr<string> accountID_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputConcurrencyConfig> concurrencyConfig_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputCustomContainerConfig> customContainerConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<string> envName_ = nullptr;
    Darabonba::Json environmentVariables_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputFeatureGates> featureGates_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputGpuConfig> gpuConfig_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputHttpTrigger> httpTrigger_ = nullptr;
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<int32_t> instanceConcurrency_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputLogConfig> logConfig_ = nullptr;
    std::shared_ptr<int32_t> memorySize_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputModelConfig> modelConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputNasConfig> nasConfig_ = nullptr;
    std::shared_ptr<string> originalName_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputOssMountConfig> ossMountConfig_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputProvisionConfig> provisionConfig_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> reportStatusURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<DeploySGLangModelInputVpcConfig> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
