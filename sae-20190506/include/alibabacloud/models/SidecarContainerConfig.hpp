// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIDECARCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SIDECARCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SidecarContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SidecarContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SidecarContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SidecarContainerConfig() = default ;
    SidecarContainerConfig(const SidecarContainerConfig &) = default ;
    SidecarContainerConfig(SidecarContainerConfig &&) = default ;
    SidecarContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SidecarContainerConfig() = default ;
    SidecarContainerConfig& operator=(const SidecarContainerConfig &) = default ;
    SidecarContainerConfig& operator=(SidecarContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && return this->command_ == nullptr && return this->commandArgs_ == nullptr && return this->configMapMountDesc_ == nullptr && return this->cpu_ == nullptr && return this->emptyDirDesc_ == nullptr
        && return this->envs_ == nullptr && return this->imageUrl_ == nullptr && return this->memory_ == nullptr && return this->name_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline SidecarContainerConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline SidecarContainerConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline SidecarContainerConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string configMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline SidecarContainerConfig& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline SidecarContainerConfig& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline string emptyDirDesc() const { DARABONBA_PTR_GET_DEFAULT(emptyDirDesc_, "") };
    inline SidecarContainerConfig& setEmptyDirDesc(string emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline SidecarContainerConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SidecarContainerConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline SidecarContainerConfig& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SidecarContainerConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<string> commandArgs_ = nullptr;
    std::shared_ptr<string> configMapMountDesc_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> emptyDirDesc_ = nullptr;
    std::shared_ptr<string> envs_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
