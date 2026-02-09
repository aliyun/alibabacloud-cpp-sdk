// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERSPEC_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnvVar.hpp>
#include <alibabacloud/models/ResourceRequirements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ContainerSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    ContainerSpec() = default ;
    ContainerSpec(const ContainerSpec &) = default ;
    ContainerSpec(ContainerSpec &&) = default ;
    ContainerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerSpec() = default ;
    ContainerSpec& operator=(const ContainerSpec &) = default ;
    ContainerSpec& operator=(ContainerSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->command_ == nullptr && this->env_ == nullptr && this->image_ == nullptr && this->name_ == nullptr && this->resources_ == nullptr
        && this->workingDir_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline ContainerSpec& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline ContainerSpec& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline ContainerSpec& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline ContainerSpec& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline const vector<EnvVar> & getEnv() const { DARABONBA_PTR_GET_CONST(env_, vector<EnvVar>) };
    inline vector<EnvVar> getEnv() { DARABONBA_PTR_GET(env_, vector<EnvVar>) };
    inline ContainerSpec& setEnv(const vector<EnvVar> & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
    inline ContainerSpec& setEnv(vector<EnvVar> && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ContainerSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ContainerSpec& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const ResourceRequirements & getResources() const { DARABONBA_PTR_GET_CONST(resources_, ResourceRequirements) };
    inline ResourceRequirements getResources() { DARABONBA_PTR_GET(resources_, ResourceRequirements) };
    inline ContainerSpec& setResources(const ResourceRequirements & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ContainerSpec& setResources(ResourceRequirements && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline ContainerSpec& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The command parameters.
    shared_ptr<vector<string>> args_ {};
    // The user command.
    shared_ptr<vector<string>> command_ {};
    // The environment variables.
    shared_ptr<vector<EnvVar>> env_ {};
    // The endpoint of the container image.
    shared_ptr<string> image_ {};
    // The name of the container.
    shared_ptr<string> name_ {};
    // The container resources.
    shared_ptr<ResourceRequirements> resources_ {};
    // The working directory in the container.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
