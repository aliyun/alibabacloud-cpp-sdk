// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATIONCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATIONCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequestDesiredConfigurationContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequestDesiredConfigurationContainers& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequestDesiredConfigurationContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    StartInstanceRefreshRequestDesiredConfigurationContainers() = default ;
    StartInstanceRefreshRequestDesiredConfigurationContainers(const StartInstanceRefreshRequestDesiredConfigurationContainers &) = default ;
    StartInstanceRefreshRequestDesiredConfigurationContainers(StartInstanceRefreshRequestDesiredConfigurationContainers &&) = default ;
    StartInstanceRefreshRequestDesiredConfigurationContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequestDesiredConfigurationContainers() = default ;
    StartInstanceRefreshRequestDesiredConfigurationContainers& operator=(const StartInstanceRefreshRequestDesiredConfigurationContainers &) = default ;
    StartInstanceRefreshRequestDesiredConfigurationContainers& operator=(StartInstanceRefreshRequestDesiredConfigurationContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->commands_ != nullptr && this->environmentVars_ != nullptr && this->image_ != nullptr && this->name_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // environmentVars Field Functions 
    bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
    void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
    inline const vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars> & environmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars>) };
    inline vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars> environmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars>) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setEnvironmentVars(const vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setEnvironmentVars(vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartInstanceRefreshRequestDesiredConfigurationContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<string>> args_ = nullptr;
    std::shared_ptr<vector<string>> commands_ = nullptr;
    std::shared_ptr<vector<Models::StartInstanceRefreshRequestDesiredConfigurationContainersEnvironmentVars>> environmentVars_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
