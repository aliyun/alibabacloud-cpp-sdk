// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDESCONTAINEROVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDESCONTAINEROVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentRequestOverridesContainerOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentRequestOverridesContainerOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentRequestOverridesContainerOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ScaleWithAdjustmentRequestOverridesContainerOverrides() = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverrides(const ScaleWithAdjustmentRequestOverridesContainerOverrides &) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverrides(ScaleWithAdjustmentRequestOverridesContainerOverrides &&) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentRequestOverridesContainerOverrides() = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverrides& operator=(const ScaleWithAdjustmentRequestOverridesContainerOverrides &) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverrides& operator=(ScaleWithAdjustmentRequestOverridesContainerOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && return this->commands_ == nullptr && return this->cpu_ == nullptr && return this->environmentVars_ == nullptr && return this->memory_ == nullptr && return this->name_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // environmentVars Field Functions 
    bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
    void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
    inline const vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars> & environmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars>) };
    inline vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars> environmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars>) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setEnvironmentVars(const vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setEnvironmentVars(vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScaleWithAdjustmentRequestOverridesContainerOverrides& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The argument that corresponds to the startup command of the container. You can specify up to 10 arguments.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The container startup commands. You can specify up to 20 commands. Each command can contain up to 256 characters.
    std::shared_ptr<vector<string>> commands_ = nullptr;
    // The number of vCPUs that you want to allocate to the container. Unit: vCPUs.
    std::shared_ptr<float> cpu_ = nullptr;
    // The information about the environment variables.
    std::shared_ptr<vector<Models::ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars>> environmentVars_ = nullptr;
    // The memory size that you want to allocate to the container. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The name of container N. If you specify ContainerOverrides, you must also specify Name. ContainerOverrides takes effect only when the container name specified by Name matches that specified in the scaling configuration.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
