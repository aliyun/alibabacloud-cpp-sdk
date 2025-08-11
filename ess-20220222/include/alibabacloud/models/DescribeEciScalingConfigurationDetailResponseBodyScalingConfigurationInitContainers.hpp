// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODYSCALINGCONFIGURATIONINITCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODYSCALINGCONFIGURATIONINITCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_TO_JSON(InitContainerArgs, initContainerArgs_);
      DARABONBA_PTR_TO_JSON(InitContainerCommands, initContainerCommands_);
      DARABONBA_PTR_TO_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_TO_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_TO_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
      DARABONBA_PTR_TO_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
      DARABONBA_PTR_TO_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_FROM_JSON(InitContainerArgs, initContainerArgs_);
      DARABONBA_PTR_FROM_JSON(InitContainerCommands, initContainerCommands_);
      DARABONBA_PTR_FROM_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_FROM_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_FROM_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
      DARABONBA_PTR_FROM_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
      DARABONBA_PTR_FROM_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers() = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers(const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers &) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers(DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers &&) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers() = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& operator=(const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers &) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& operator=(DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->gpu_ != nullptr && this->image_ != nullptr && this->imagePullPolicy_ != nullptr && this->initContainerArgs_ != nullptr && this->initContainerCommands_ != nullptr
        && this->initContainerEnvironmentVars_ != nullptr && this->initContainerPorts_ != nullptr && this->initContainerVolumeMounts_ != nullptr && this->memory_ != nullptr && this->name_ != nullptr
        && this->securityContextCapabilityAdds_ != nullptr && this->securityContextReadOnlyRootFilesystem_ != nullptr && this->securityContextRunAsUser_ != nullptr && this->workingDir_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePullPolicy Field Functions 
    bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
    void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
    inline string imagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


    // initContainerArgs Field Functions 
    bool hasInitContainerArgs() const { return this->initContainerArgs_ != nullptr;};
    void deleteInitContainerArgs() { this->initContainerArgs_ = nullptr;};
    inline const vector<string> & initContainerArgs() const { DARABONBA_PTR_GET_CONST(initContainerArgs_, vector<string>) };
    inline vector<string> initContainerArgs() { DARABONBA_PTR_GET(initContainerArgs_, vector<string>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerArgs(const vector<string> & initContainerArgs) { DARABONBA_PTR_SET_VALUE(initContainerArgs_, initContainerArgs) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerArgs(vector<string> && initContainerArgs) { DARABONBA_PTR_SET_RVALUE(initContainerArgs_, initContainerArgs) };


    // initContainerCommands Field Functions 
    bool hasInitContainerCommands() const { return this->initContainerCommands_ != nullptr;};
    void deleteInitContainerCommands() { this->initContainerCommands_ = nullptr;};
    inline const vector<string> & initContainerCommands() const { DARABONBA_PTR_GET_CONST(initContainerCommands_, vector<string>) };
    inline vector<string> initContainerCommands() { DARABONBA_PTR_GET(initContainerCommands_, vector<string>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerCommands(const vector<string> & initContainerCommands) { DARABONBA_PTR_SET_VALUE(initContainerCommands_, initContainerCommands) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerCommands(vector<string> && initContainerCommands) { DARABONBA_PTR_SET_RVALUE(initContainerCommands_, initContainerCommands) };


    // initContainerEnvironmentVars Field Functions 
    bool hasInitContainerEnvironmentVars() const { return this->initContainerEnvironmentVars_ != nullptr;};
    void deleteInitContainerEnvironmentVars() { this->initContainerEnvironmentVars_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars() const { DARABONBA_PTR_GET_CONST(initContainerEnvironmentVars_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars>) };
    inline vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars> initContainerEnvironmentVars() { DARABONBA_PTR_GET(initContainerEnvironmentVars_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerEnvironmentVars(const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars) { DARABONBA_PTR_SET_VALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerEnvironmentVars(vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars> && initContainerEnvironmentVars) { DARABONBA_PTR_SET_RVALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };


    // initContainerPorts Field Functions 
    bool hasInitContainerPorts() const { return this->initContainerPorts_ != nullptr;};
    void deleteInitContainerPorts() { this->initContainerPorts_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts> & initContainerPorts() const { DARABONBA_PTR_GET_CONST(initContainerPorts_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts>) };
    inline vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts> initContainerPorts() { DARABONBA_PTR_GET(initContainerPorts_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerPorts(const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts> & initContainerPorts) { DARABONBA_PTR_SET_VALUE(initContainerPorts_, initContainerPorts) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerPorts(vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts> && initContainerPorts) { DARABONBA_PTR_SET_RVALUE(initContainerPorts_, initContainerPorts) };


    // initContainerVolumeMounts Field Functions 
    bool hasInitContainerVolumeMounts() const { return this->initContainerVolumeMounts_ != nullptr;};
    void deleteInitContainerVolumeMounts() { this->initContainerVolumeMounts_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts() const { DARABONBA_PTR_GET_CONST(initContainerVolumeMounts_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts>) };
    inline vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts> initContainerVolumeMounts() { DARABONBA_PTR_GET(initContainerVolumeMounts_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerVolumeMounts(const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts) { DARABONBA_PTR_SET_VALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setInitContainerVolumeMounts(vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts> && initContainerVolumeMounts) { DARABONBA_PTR_SET_RVALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityContextCapabilityAdds Field Functions 
    bool hasSecurityContextCapabilityAdds() const { return this->securityContextCapabilityAdds_ != nullptr;};
    void deleteSecurityContextCapabilityAdds() { this->securityContextCapabilityAdds_ = nullptr;};
    inline const vector<string> & securityContextCapabilityAdds() const { DARABONBA_PTR_GET_CONST(securityContextCapabilityAdds_, vector<string>) };
    inline vector<string> securityContextCapabilityAdds() { DARABONBA_PTR_GET(securityContextCapabilityAdds_, vector<string>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setSecurityContextCapabilityAdds(const vector<string> & securityContextCapabilityAdds) { DARABONBA_PTR_SET_VALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setSecurityContextCapabilityAdds(vector<string> && securityContextCapabilityAdds) { DARABONBA_PTR_SET_RVALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };


    // securityContextReadOnlyRootFilesystem Field Functions 
    bool hasSecurityContextReadOnlyRootFilesystem() const { return this->securityContextReadOnlyRootFilesystem_ != nullptr;};
    void deleteSecurityContextReadOnlyRootFilesystem() { this->securityContextReadOnlyRootFilesystem_ = nullptr;};
    inline bool securityContextReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(securityContextReadOnlyRootFilesystem_, false) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setSecurityContextReadOnlyRootFilesystem(bool securityContextReadOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(securityContextReadOnlyRootFilesystem_, securityContextReadOnlyRootFilesystem) };


    // securityContextRunAsUser Field Functions 
    bool hasSecurityContextRunAsUser() const { return this->securityContextRunAsUser_ != nullptr;};
    void deleteSecurityContextRunAsUser() { this->securityContextRunAsUser_ = nullptr;};
    inline string securityContextRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(securityContextRunAsUser_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setSecurityContextRunAsUser(string securityContextRunAsUser) { DARABONBA_PTR_SET_VALUE(securityContextRunAsUser_, securityContextRunAsUser) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The number of vCPUs that are allocated to the init container.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of GPUs that are allocated to the init container.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The image of the init container.
    std::shared_ptr<string> image_ = nullptr;
    // The image pulling policy.
    std::shared_ptr<string> imagePullPolicy_ = nullptr;
    // The arguments that are passed to the startup commands of the init container.
    std::shared_ptr<vector<string>> initContainerArgs_ = nullptr;
    // The commands that are used to start the init container.
    std::shared_ptr<vector<string>> initContainerCommands_ = nullptr;
    // The environment variables of the init container.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerEnvironmentVars>> initContainerEnvironmentVars_ = nullptr;
    // The ports of the init container.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerPorts>> initContainerPorts_ = nullptr;
    // The volume mounts of the init container.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationInitContainersInitContainerVolumeMounts>> initContainerVolumeMounts_ = nullptr;
    // The memory size of the init container.
    std::shared_ptr<float> memory_ = nullptr;
    // The name of the init container.
    std::shared_ptr<string> name_ = nullptr;
    // The permissions that are granted to the processes in the init container. Valid values: NET_ADMIN and NET_RAW.
    std::shared_ptr<vector<string>> securityContextCapabilityAdds_ = nullptr;
    // Indicates whether the root file system on which the init container runs is read-only. Valid value: true.
    std::shared_ptr<bool> securityContextReadOnlyRootFilesystem_ = nullptr;
    // The ID of the user that runs the init container.
    std::shared_ptr<string> securityContextRunAsUser_ = nullptr;
    // The working directory of the init container.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
