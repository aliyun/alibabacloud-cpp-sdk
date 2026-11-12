// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class RunCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      DARABONBA_PTR_TO_JSON(WorkingUser, workingUser_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      DARABONBA_PTR_FROM_JSON(WorkingUser, workingUser_);
    };
    RunCommandShrinkRequest() = default ;
    RunCommandShrinkRequest(const RunCommandShrinkRequest &) = default ;
    RunCommandShrinkRequest(RunCommandShrinkRequest &&) = default ;
    RunCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandShrinkRequest() = default ;
    RunCommandShrinkRequest& operator=(const RunCommandShrinkRequest &) = default ;
    RunCommandShrinkRequest& operator=(RunCommandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->enableParameter_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->parametersShrink_ == nullptr && this->regionId_ == nullptr
        && this->timeout_ == nullptr && this->type_ == nullptr && this->windowsPasswordName_ == nullptr && this->workingDir_ == nullptr && this->workingUser_ == nullptr; };
    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunCommandShrinkRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunCommandShrinkRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunCommandShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCommandShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline RunCommandShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunCommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline RunCommandShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunCommandShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string getWindowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline RunCommandShrinkRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunCommandShrinkRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    // workingUser Field Functions 
    bool hasWorkingUser() const { return this->workingUser_ != nullptr;};
    void deleteWorkingUser() { this->workingUser_ = nullptr;};
    inline string getWorkingUser() const { DARABONBA_PTR_GET_DEFAULT(workingUser_, "") };
    inline RunCommandShrinkRequest& setWorkingUser(string workingUser) { DARABONBA_PTR_SET_VALUE(workingUser_, workingUser) };


  protected:
    // The command content. Note the following items:
    // 
    // - Set `EnableParameter=true` to enable the custom parameter feature in the command content:
    // - Define custom parameters by enclosing them in `{{}}`. Spaces and line breaks before and after the parameter name within `{{}}` are ignored.
    // - The number of custom parameters cannot exceed 20.
    // - Custom parameter names can contain only letters (a-z, A-Z), digits (0-9), hyphens (-), and underscores (_). Other characters are not supported. Parameter names are case-insensitive.
    // - A single custom parameter name cannot exceed 64 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // Specifies whether the command contains custom parameters.
    // 
    // Default value: false.
    shared_ptr<bool> enableParameter_ {};
    // The instance ID of the simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the command execution.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The key-value pairs of custom parameters to pass in when the command contains custom parameters. For example, if the command content is `echo {{name}}`, you can use the `Parameters` parameter to pass in the key-value pair `{"name":"Jack"}`. The custom parameter automatically replaces the variable value `name`, and the actual command that runs is `echo Jack`.
    // 
    // The number of custom parameters ranges from 0 to 20. Note the following items:
    // 
    // - Keys cannot be empty strings and can contain up to 64 characters.
    // - Values can be empty strings.
    // - The set of custom parameter names must be a subset of the parameter set defined when the command was created. For parameters that are not passed in, you can use empty strings as substitutes.
    // 
    // Default value: empty, which indicates that this parameter is unset to disable custom parameters.
    shared_ptr<string> parametersShrink_ {};
    // The region ID. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query the latest region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The timeout period for the command to run on the server instance. Unit: seconds.
    // 
    // When a command execution task times out, Command Assistant forcefully terminates the task process. Valid values: 10 to 86400 (24 hours).
    // 
    // Default value: 60.
    shared_ptr<int32_t> timeout_ {};
    // The language type of the command. Valid values:
    // 
    // - RunBatScript: Bat commands for Windows instances.
    // - RunPowerShellScript: PowerShell commands for Windows instances.
    // - RunShellScript: Shell commands for Linux instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The password name of the user that runs the command on a Windows instance.
    // 
    // If you want to run a command as a non-default user (System) on a Windows instance, you must specify both WorkingUser and this parameter. To reduce the risk of password leaks, store the plaintext password in the parameter repository of CloudOps Orchestration Service and pass in only the password name here.
    shared_ptr<string> windowsPasswordName_ {};
    // The custom execution path of the command. Default paths:
    // 
    // - Linux instances: The default execution path is the /root directory of the root user.
    // - Windows instances: The default execution path is the C:\\Windows\\system32 directory.
    shared_ptr<string> workingDir_ {};
    // The user that you want to use to run the command on the simple application server instance. We recommend that you use a regular user to run commands to reduce security risks.
    // Default values:
    // 
    // - root: On Linux instances, commands are run as the root user by default.
    // 
    // - system: On Windows instances, commands are run as the system user by default.
    shared_ptr<string> workingUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
