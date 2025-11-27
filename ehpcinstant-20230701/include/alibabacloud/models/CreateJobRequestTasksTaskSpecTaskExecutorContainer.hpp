// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTORCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTORCONTAINER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecTaskExecutorContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecTaskExecutorContainer& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Arg, arg_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecTaskExecutorContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Arg, arg_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    CreateJobRequestTasksTaskSpecTaskExecutorContainer() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorContainer(const CreateJobRequestTasksTaskSpecTaskExecutorContainer &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorContainer(CreateJobRequestTasksTaskSpecTaskExecutorContainer &&) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecTaskExecutorContainer() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorContainer& operator=(const CreateJobRequestTasksTaskSpecTaskExecutorContainer &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorContainer& operator=(CreateJobRequestTasksTaskSpecTaskExecutorContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->arg_ == nullptr && return this->command_ == nullptr && return this->environmentVars_ == nullptr && return this->image_ == nullptr && return this->workingDir_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // arg Field Functions 
    bool hasArg() const { return this->arg_ != nullptr;};
    void deleteArg() { this->arg_ = nullptr;};
    inline const vector<string> & arg() const { DARABONBA_PTR_GET_CONST(arg_, vector<string>) };
    inline vector<string> arg() { DARABONBA_PTR_GET(arg_, vector<string>) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setArg(const vector<string> & arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setArg(vector<string> && arg) { DARABONBA_PTR_SET_RVALUE(arg_, arg) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // environmentVars Field Functions 
    bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
    void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
    inline const vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars> & environmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars>) };
    inline vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars> environmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars>) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setEnvironmentVars(const vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setEnvironmentVars(vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorContainer& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The startup argument of the init container. A maximum of 10 groups.
    std::shared_ptr<vector<string>> arg_ = nullptr;
    // The container startup commands. You can specify up to 20 commands. Each command can be up to 256 characters in length.
    // 
    // > 
    // 
    // *   If the start command contains spaces (for example, `sleep 60s` ), the input JSON format parameter is `["sleep", "60s"]`.
    // 
    // *   If the startup command is complex, the parameter format may be a combination of `Command: ["/bin/bash"]` and `Arg:["-c", "<customized command>"]`. The `<customized command>` is a user-defined combination of commands and can contain characters such as spaces.
    std::shared_ptr<vector<string>> command_ = nullptr;
    // The environment variables of the container. A maximum of 20 groups.
    std::shared_ptr<vector<Models::CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars>> environmentVars_ = nullptr;
    // The image of the container.
    // 
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
    // The working directory of the container.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
