// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INITCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class InitContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_TO_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, InitContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMapMountDesc, configMapMountDesc_);
      DARABONBA_PTR_FROM_JSON(EmptyDirDesc, emptyDirDesc_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    InitContainerConfig() = default ;
    InitContainerConfig(const InitContainerConfig &) = default ;
    InitContainerConfig(InitContainerConfig &&) = default ;
    InitContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitContainerConfig() = default ;
    InitContainerConfig& operator=(const InitContainerConfig &) = default ;
    InitContainerConfig& operator=(InitContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->commandArgs_ != nullptr && this->configMapMountDesc_ != nullptr && this->emptyDirDesc_ != nullptr && this->envs_ != nullptr && this->imageUrl_ != nullptr
        && this->name_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline InitContainerConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline string commandArgs() const { DARABONBA_PTR_GET_DEFAULT(commandArgs_, "") };
    inline InitContainerConfig& setCommandArgs(string commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };


    // configMapMountDesc Field Functions 
    bool hasConfigMapMountDesc() const { return this->configMapMountDesc_ != nullptr;};
    void deleteConfigMapMountDesc() { this->configMapMountDesc_ = nullptr;};
    inline string configMapMountDesc() const { DARABONBA_PTR_GET_DEFAULT(configMapMountDesc_, "") };
    inline InitContainerConfig& setConfigMapMountDesc(string configMapMountDesc) { DARABONBA_PTR_SET_VALUE(configMapMountDesc_, configMapMountDesc) };


    // emptyDirDesc Field Functions 
    bool hasEmptyDirDesc() const { return this->emptyDirDesc_ != nullptr;};
    void deleteEmptyDirDesc() { this->emptyDirDesc_ = nullptr;};
    inline string emptyDirDesc() const { DARABONBA_PTR_GET_DEFAULT(emptyDirDesc_, "") };
    inline InitContainerConfig& setEmptyDirDesc(string emptyDirDesc) { DARABONBA_PTR_SET_VALUE(emptyDirDesc_, emptyDirDesc) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline string envs() const { DARABONBA_PTR_GET_DEFAULT(envs_, "") };
    inline InitContainerConfig& setEnvs(string envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline InitContainerConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InitContainerConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<string> commandArgs_ = nullptr;
    std::shared_ptr<string> configMapMountDesc_ = nullptr;
    std::shared_ptr<string> emptyDirDesc_ = nullptr;
    std::shared_ptr<string> envs_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
