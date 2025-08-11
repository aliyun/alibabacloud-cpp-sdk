// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTINITCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestInitContainersSecurityContext.hpp>
#include <vector>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestInitContainersInitContainerPorts.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestInitContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestInitContainers& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_TO_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_TO_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_TO_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestInitContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_FROM_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_FROM_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_FROM_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    CreateEciScalingConfigurationRequestInitContainers() = default ;
    CreateEciScalingConfigurationRequestInitContainers(const CreateEciScalingConfigurationRequestInitContainers &) = default ;
    CreateEciScalingConfigurationRequestInitContainers(CreateEciScalingConfigurationRequestInitContainers &&) = default ;
    CreateEciScalingConfigurationRequestInitContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestInitContainers() = default ;
    CreateEciScalingConfigurationRequestInitContainers& operator=(const CreateEciScalingConfigurationRequestInitContainers &) = default ;
    CreateEciScalingConfigurationRequestInitContainers& operator=(CreateEciScalingConfigurationRequestInitContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityContext_ != nullptr
        && this->args_ != nullptr && this->commands_ != nullptr && this->cpu_ != nullptr && this->gpu_ != nullptr && this->image_ != nullptr
        && this->imagePullPolicy_ != nullptr && this->initContainerEnvironmentVars_ != nullptr && this->initContainerPorts_ != nullptr && this->initContainerVolumeMounts_ != nullptr && this->memory_ != nullptr
        && this->name_ != nullptr && this->workingDir_ != nullptr; };
    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext & securityContext() const { DARABONBA_PTR_GET_CONST(securityContext_, Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext) };
    inline Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext securityContext() { DARABONBA_PTR_GET(securityContext_, Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext) };
    inline CreateEciScalingConfigurationRequestInitContainers& setSecurityContext(const Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext & securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };
    inline CreateEciScalingConfigurationRequestInitContainers& setSecurityContext(Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext && securityContext) { DARABONBA_PTR_SET_RVALUE(securityContext_, securityContext) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline CreateEciScalingConfigurationRequestInitContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline CreateEciScalingConfigurationRequestInitContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline CreateEciScalingConfigurationRequestInitContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline CreateEciScalingConfigurationRequestInitContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateEciScalingConfigurationRequestInitContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline CreateEciScalingConfigurationRequestInitContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateEciScalingConfigurationRequestInitContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePullPolicy Field Functions 
    bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
    void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
    inline string imagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
    inline CreateEciScalingConfigurationRequestInitContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


    // initContainerEnvironmentVars Field Functions 
    bool hasInitContainerEnvironmentVars() const { return this->initContainerEnvironmentVars_ != nullptr;};
    void deleteInitContainerEnvironmentVars() { this->initContainerEnvironmentVars_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars() const { DARABONBA_PTR_GET_CONST(initContainerEnvironmentVars_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>) };
    inline vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> initContainerEnvironmentVars() { DARABONBA_PTR_GET(initContainerEnvironmentVars_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerEnvironmentVars(const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars) { DARABONBA_PTR_SET_VALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerEnvironmentVars(vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> && initContainerEnvironmentVars) { DARABONBA_PTR_SET_RVALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };


    // initContainerPorts Field Functions 
    bool hasInitContainerPorts() const { return this->initContainerPorts_ != nullptr;};
    void deleteInitContainerPorts() { this->initContainerPorts_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts> & initContainerPorts() const { DARABONBA_PTR_GET_CONST(initContainerPorts_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts>) };
    inline vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts> initContainerPorts() { DARABONBA_PTR_GET(initContainerPorts_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts>) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerPorts(const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts> & initContainerPorts) { DARABONBA_PTR_SET_VALUE(initContainerPorts_, initContainerPorts) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerPorts(vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts> && initContainerPorts) { DARABONBA_PTR_SET_RVALUE(initContainerPorts_, initContainerPorts) };


    // initContainerVolumeMounts Field Functions 
    bool hasInitContainerVolumeMounts() const { return this->initContainerVolumeMounts_ != nullptr;};
    void deleteInitContainerVolumeMounts() { this->initContainerVolumeMounts_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts() const { DARABONBA_PTR_GET_CONST(initContainerVolumeMounts_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>) };
    inline vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> initContainerVolumeMounts() { DARABONBA_PTR_GET(initContainerVolumeMounts_, vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerVolumeMounts(const vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts) { DARABONBA_PTR_SET_VALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };
    inline CreateEciScalingConfigurationRequestInitContainers& setInitContainerVolumeMounts(vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> && initContainerVolumeMounts) { DARABONBA_PTR_SET_RVALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline CreateEciScalingConfigurationRequestInitContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEciScalingConfigurationRequestInitContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline CreateEciScalingConfigurationRequestInitContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestInitContainersSecurityContext> securityContext_ = nullptr;
    // The startup arguments of the init container. You can specify up to 10 arguments.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The startup commands of the init container.
    std::shared_ptr<vector<string>> commands_ = nullptr;
    // The number of vCPUs per init container.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of GPUs per init container.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The image of the init container.
    std::shared_ptr<string> image_ = nullptr;
    // The image pulling policy.
    std::shared_ptr<string> imagePullPolicy_ = nullptr;
    // The environment variables of the init container.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>> initContainerEnvironmentVars_ = nullptr;
    // The ports of init containers.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerPorts>> initContainerPorts_ = nullptr;
    // The volume mounts of the init container.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>> initContainerVolumeMounts_ = nullptr;
    // The memory size per init container. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The name of the init container.
    std::shared_ptr<string> name_ = nullptr;
    // The working directory of the init container.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
