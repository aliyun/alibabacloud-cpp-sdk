// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployCustomContainerInputAsyncInvokeConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputConcurrencyConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputCustomContainerConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputFeatureGates.hpp>
#include <alibabacloud/models/DeployCustomContainerInputGpuConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputHttpTrigger.hpp>
#include <alibabacloud/models/DeployCustomContainerInputLogConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputModelConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputNasConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputOssMountConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputProvisionConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInput& obj) { 
      DARABONBA_PTR_TO_JSON(accountID, accountID_);
      DARABONBA_PTR_TO_JSON(asyncInvokeConfig, asyncInvokeConfig_);
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
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInput& obj) { 
      DARABONBA_PTR_FROM_JSON(accountID, accountID_);
      DARABONBA_PTR_FROM_JSON(asyncInvokeConfig, asyncInvokeConfig_);
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
    DeployCustomContainerInput() = default ;
    DeployCustomContainerInput(const DeployCustomContainerInput &) = default ;
    DeployCustomContainerInput(DeployCustomContainerInput &&) = default ;
    DeployCustomContainerInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInput() = default ;
    DeployCustomContainerInput& operator=(const DeployCustomContainerInput &) = default ;
    DeployCustomContainerInput& operator=(DeployCustomContainerInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountID_ != nullptr
        && this->asyncInvokeConfig_ != nullptr && this->concurrencyConfig_ != nullptr && this->cpu_ != nullptr && this->customContainerConfig_ != nullptr && this->description_ != nullptr
        && this->diskSize_ != nullptr && this->envName_ != nullptr && this->environmentVariables_ != nullptr && this->featureGates_ != nullptr && this->gpuConfig_ != nullptr
        && this->httpTrigger_ != nullptr && this->logConfig_ != nullptr && this->memorySize_ != nullptr && this->modelConfig_ != nullptr && this->name_ != nullptr
        && this->nasConfig_ != nullptr && this->originalName_ != nullptr && this->ossMountConfig_ != nullptr && this->projectName_ != nullptr && this->provisionConfig_ != nullptr
        && this->region_ != nullptr && this->reportStatusURL_ != nullptr && this->role_ != nullptr && this->timeout_ != nullptr && this->traceId_ != nullptr
        && this->vpcConfig_ != nullptr; };
    // accountID Field Functions 
    bool hasAccountID() const { return this->accountID_ != nullptr;};
    void deleteAccountID() { this->accountID_ = nullptr;};
    inline string accountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
    inline DeployCustomContainerInput& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


    // asyncInvokeConfig Field Functions 
    bool hasAsyncInvokeConfig() const { return this->asyncInvokeConfig_ != nullptr;};
    void deleteAsyncInvokeConfig() { this->asyncInvokeConfig_ = nullptr;};
    inline const DeployCustomContainerInputAsyncInvokeConfig & asyncInvokeConfig() const { DARABONBA_PTR_GET_CONST(asyncInvokeConfig_, DeployCustomContainerInputAsyncInvokeConfig) };
    inline DeployCustomContainerInputAsyncInvokeConfig asyncInvokeConfig() { DARABONBA_PTR_GET(asyncInvokeConfig_, DeployCustomContainerInputAsyncInvokeConfig) };
    inline DeployCustomContainerInput& setAsyncInvokeConfig(const DeployCustomContainerInputAsyncInvokeConfig & asyncInvokeConfig) { DARABONBA_PTR_SET_VALUE(asyncInvokeConfig_, asyncInvokeConfig) };
    inline DeployCustomContainerInput& setAsyncInvokeConfig(DeployCustomContainerInputAsyncInvokeConfig && asyncInvokeConfig) { DARABONBA_PTR_SET_RVALUE(asyncInvokeConfig_, asyncInvokeConfig) };


    // concurrencyConfig Field Functions 
    bool hasConcurrencyConfig() const { return this->concurrencyConfig_ != nullptr;};
    void deleteConcurrencyConfig() { this->concurrencyConfig_ = nullptr;};
    inline const DeployCustomContainerInputConcurrencyConfig & concurrencyConfig() const { DARABONBA_PTR_GET_CONST(concurrencyConfig_, DeployCustomContainerInputConcurrencyConfig) };
    inline DeployCustomContainerInputConcurrencyConfig concurrencyConfig() { DARABONBA_PTR_GET(concurrencyConfig_, DeployCustomContainerInputConcurrencyConfig) };
    inline DeployCustomContainerInput& setConcurrencyConfig(const DeployCustomContainerInputConcurrencyConfig & concurrencyConfig) { DARABONBA_PTR_SET_VALUE(concurrencyConfig_, concurrencyConfig) };
    inline DeployCustomContainerInput& setConcurrencyConfig(DeployCustomContainerInputConcurrencyConfig && concurrencyConfig) { DARABONBA_PTR_SET_RVALUE(concurrencyConfig_, concurrencyConfig) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DeployCustomContainerInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customContainerConfig Field Functions 
    bool hasCustomContainerConfig() const { return this->customContainerConfig_ != nullptr;};
    void deleteCustomContainerConfig() { this->customContainerConfig_ = nullptr;};
    inline const DeployCustomContainerInputCustomContainerConfig & customContainerConfig() const { DARABONBA_PTR_GET_CONST(customContainerConfig_, DeployCustomContainerInputCustomContainerConfig) };
    inline DeployCustomContainerInputCustomContainerConfig customContainerConfig() { DARABONBA_PTR_GET(customContainerConfig_, DeployCustomContainerInputCustomContainerConfig) };
    inline DeployCustomContainerInput& setCustomContainerConfig(const DeployCustomContainerInputCustomContainerConfig & customContainerConfig) { DARABONBA_PTR_SET_VALUE(customContainerConfig_, customContainerConfig) };
    inline DeployCustomContainerInput& setCustomContainerConfig(DeployCustomContainerInputCustomContainerConfig && customContainerConfig) { DARABONBA_PTR_SET_RVALUE(customContainerConfig_, customContainerConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeployCustomContainerInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DeployCustomContainerInput& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline DeployCustomContainerInput& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline     const Darabonba::Json & environmentVariables() const { DARABONBA_GET(environmentVariables_) };
    Darabonba::Json & environmentVariables() { DARABONBA_GET(environmentVariables_) };
    inline DeployCustomContainerInput& setEnvironmentVariables(const Darabonba::Json & environmentVariables) { DARABONBA_SET_VALUE(environmentVariables_, environmentVariables) };
    inline DeployCustomContainerInput& setEnvironmentVariables(Darabonba::Json & environmentVariables) { DARABONBA_SET_RVALUE(environmentVariables_, environmentVariables) };


    // featureGates Field Functions 
    bool hasFeatureGates() const { return this->featureGates_ != nullptr;};
    void deleteFeatureGates() { this->featureGates_ = nullptr;};
    inline const DeployCustomContainerInputFeatureGates & featureGates() const { DARABONBA_PTR_GET_CONST(featureGates_, DeployCustomContainerInputFeatureGates) };
    inline DeployCustomContainerInputFeatureGates featureGates() { DARABONBA_PTR_GET(featureGates_, DeployCustomContainerInputFeatureGates) };
    inline DeployCustomContainerInput& setFeatureGates(const DeployCustomContainerInputFeatureGates & featureGates) { DARABONBA_PTR_SET_VALUE(featureGates_, featureGates) };
    inline DeployCustomContainerInput& setFeatureGates(DeployCustomContainerInputFeatureGates && featureGates) { DARABONBA_PTR_SET_RVALUE(featureGates_, featureGates) };


    // gpuConfig Field Functions 
    bool hasGpuConfig() const { return this->gpuConfig_ != nullptr;};
    void deleteGpuConfig() { this->gpuConfig_ = nullptr;};
    inline const DeployCustomContainerInputGpuConfig & gpuConfig() const { DARABONBA_PTR_GET_CONST(gpuConfig_, DeployCustomContainerInputGpuConfig) };
    inline DeployCustomContainerInputGpuConfig gpuConfig() { DARABONBA_PTR_GET(gpuConfig_, DeployCustomContainerInputGpuConfig) };
    inline DeployCustomContainerInput& setGpuConfig(const DeployCustomContainerInputGpuConfig & gpuConfig) { DARABONBA_PTR_SET_VALUE(gpuConfig_, gpuConfig) };
    inline DeployCustomContainerInput& setGpuConfig(DeployCustomContainerInputGpuConfig && gpuConfig) { DARABONBA_PTR_SET_RVALUE(gpuConfig_, gpuConfig) };


    // httpTrigger Field Functions 
    bool hasHttpTrigger() const { return this->httpTrigger_ != nullptr;};
    void deleteHttpTrigger() { this->httpTrigger_ = nullptr;};
    inline const DeployCustomContainerInputHttpTrigger & httpTrigger() const { DARABONBA_PTR_GET_CONST(httpTrigger_, DeployCustomContainerInputHttpTrigger) };
    inline DeployCustomContainerInputHttpTrigger httpTrigger() { DARABONBA_PTR_GET(httpTrigger_, DeployCustomContainerInputHttpTrigger) };
    inline DeployCustomContainerInput& setHttpTrigger(const DeployCustomContainerInputHttpTrigger & httpTrigger) { DARABONBA_PTR_SET_VALUE(httpTrigger_, httpTrigger) };
    inline DeployCustomContainerInput& setHttpTrigger(DeployCustomContainerInputHttpTrigger && httpTrigger) { DARABONBA_PTR_SET_RVALUE(httpTrigger_, httpTrigger) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const DeployCustomContainerInputLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, DeployCustomContainerInputLogConfig) };
    inline DeployCustomContainerInputLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, DeployCustomContainerInputLogConfig) };
    inline DeployCustomContainerInput& setLogConfig(const DeployCustomContainerInputLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline DeployCustomContainerInput& setLogConfig(DeployCustomContainerInputLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DeployCustomContainerInput& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const DeployCustomContainerInputModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, DeployCustomContainerInputModelConfig) };
    inline DeployCustomContainerInputModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, DeployCustomContainerInputModelConfig) };
    inline DeployCustomContainerInput& setModelConfig(const DeployCustomContainerInputModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline DeployCustomContainerInput& setModelConfig(DeployCustomContainerInputModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeployCustomContainerInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nasConfig Field Functions 
    bool hasNasConfig() const { return this->nasConfig_ != nullptr;};
    void deleteNasConfig() { this->nasConfig_ = nullptr;};
    inline const DeployCustomContainerInputNasConfig & nasConfig() const { DARABONBA_PTR_GET_CONST(nasConfig_, DeployCustomContainerInputNasConfig) };
    inline DeployCustomContainerInputNasConfig nasConfig() { DARABONBA_PTR_GET(nasConfig_, DeployCustomContainerInputNasConfig) };
    inline DeployCustomContainerInput& setNasConfig(const DeployCustomContainerInputNasConfig & nasConfig) { DARABONBA_PTR_SET_VALUE(nasConfig_, nasConfig) };
    inline DeployCustomContainerInput& setNasConfig(DeployCustomContainerInputNasConfig && nasConfig) { DARABONBA_PTR_SET_RVALUE(nasConfig_, nasConfig) };


    // originalName Field Functions 
    bool hasOriginalName() const { return this->originalName_ != nullptr;};
    void deleteOriginalName() { this->originalName_ = nullptr;};
    inline string originalName() const { DARABONBA_PTR_GET_DEFAULT(originalName_, "") };
    inline DeployCustomContainerInput& setOriginalName(string originalName) { DARABONBA_PTR_SET_VALUE(originalName_, originalName) };


    // ossMountConfig Field Functions 
    bool hasOssMountConfig() const { return this->ossMountConfig_ != nullptr;};
    void deleteOssMountConfig() { this->ossMountConfig_ = nullptr;};
    inline const DeployCustomContainerInputOssMountConfig & ossMountConfig() const { DARABONBA_PTR_GET_CONST(ossMountConfig_, DeployCustomContainerInputOssMountConfig) };
    inline DeployCustomContainerInputOssMountConfig ossMountConfig() { DARABONBA_PTR_GET(ossMountConfig_, DeployCustomContainerInputOssMountConfig) };
    inline DeployCustomContainerInput& setOssMountConfig(const DeployCustomContainerInputOssMountConfig & ossMountConfig) { DARABONBA_PTR_SET_VALUE(ossMountConfig_, ossMountConfig) };
    inline DeployCustomContainerInput& setOssMountConfig(DeployCustomContainerInputOssMountConfig && ossMountConfig) { DARABONBA_PTR_SET_RVALUE(ossMountConfig_, ossMountConfig) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DeployCustomContainerInput& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // provisionConfig Field Functions 
    bool hasProvisionConfig() const { return this->provisionConfig_ != nullptr;};
    void deleteProvisionConfig() { this->provisionConfig_ = nullptr;};
    inline const DeployCustomContainerInputProvisionConfig & provisionConfig() const { DARABONBA_PTR_GET_CONST(provisionConfig_, DeployCustomContainerInputProvisionConfig) };
    inline DeployCustomContainerInputProvisionConfig provisionConfig() { DARABONBA_PTR_GET(provisionConfig_, DeployCustomContainerInputProvisionConfig) };
    inline DeployCustomContainerInput& setProvisionConfig(const DeployCustomContainerInputProvisionConfig & provisionConfig) { DARABONBA_PTR_SET_VALUE(provisionConfig_, provisionConfig) };
    inline DeployCustomContainerInput& setProvisionConfig(DeployCustomContainerInputProvisionConfig && provisionConfig) { DARABONBA_PTR_SET_RVALUE(provisionConfig_, provisionConfig) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DeployCustomContainerInput& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // reportStatusURL Field Functions 
    bool hasReportStatusURL() const { return this->reportStatusURL_ != nullptr;};
    void deleteReportStatusURL() { this->reportStatusURL_ = nullptr;};
    inline string reportStatusURL() const { DARABONBA_PTR_GET_DEFAULT(reportStatusURL_, "") };
    inline DeployCustomContainerInput& setReportStatusURL(string reportStatusURL) { DARABONBA_PTR_SET_VALUE(reportStatusURL_, reportStatusURL) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeployCustomContainerInput& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DeployCustomContainerInput& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DeployCustomContainerInput& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const DeployCustomContainerInputVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, DeployCustomContainerInputVpcConfig) };
    inline DeployCustomContainerInputVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, DeployCustomContainerInputVpcConfig) };
    inline DeployCustomContainerInput& setVpcConfig(const DeployCustomContainerInputVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DeployCustomContainerInput& setVpcConfig(DeployCustomContainerInputVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    std::shared_ptr<string> accountID_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputAsyncInvokeConfig> asyncInvokeConfig_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputConcurrencyConfig> concurrencyConfig_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputCustomContainerConfig> customContainerConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<string> envName_ = nullptr;
    Darabonba::Json environmentVariables_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputFeatureGates> featureGates_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputGpuConfig> gpuConfig_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputHttpTrigger> httpTrigger_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputLogConfig> logConfig_ = nullptr;
    std::shared_ptr<int32_t> memorySize_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputModelConfig> modelConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputNasConfig> nasConfig_ = nullptr;
    std::shared_ptr<string> originalName_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputOssMountConfig> ossMountConfig_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputProvisionConfig> provisionConfig_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> reportStatusURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<DeployCustomContainerInputVpcConfig> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
