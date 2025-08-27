// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class RunCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    RunCommandRequest() = default ;
    RunCommandRequest(const RunCommandRequest &) = default ;
    RunCommandRequest(RunCommandRequest &&) = default ;
    RunCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandRequest() = default ;
    RunCommandRequest& operator=(const RunCommandRequest &) = default ;
    RunCommandRequest& operator=(RunCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->commandContent_ != nullptr && this->commandId_ != nullptr && this->contentEncoding_ != nullptr && this->description_ != nullptr && this->enableParameter_ != nullptr
        && this->frequency_ != nullptr && this->launcher_ != nullptr && this->name_ != nullptr && this->nodeIdList_ != nullptr && this->parameters_ != nullptr
        && this->repeatMode_ != nullptr && this->terminationMode_ != nullptr && this->timeout_ != nullptr && this->username_ != nullptr && this->workingDir_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunCommandRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline RunCommandRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunCommandRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool enableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunCommandRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline RunCommandRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline RunCommandRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCommandRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeIdList Field Functions 
    bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
    void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
    inline const vector<string> & nodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<string>) };
    inline vector<string> nodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<string>) };
    inline RunCommandRequest& setNodeIdList(const vector<string> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
    inline RunCommandRequest& setNodeIdList(vector<string> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline RunCommandRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline RunCommandRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline RunCommandRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string terminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline RunCommandRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline RunCommandRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline RunCommandRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunCommandRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The client token to ensure the idempotency of the request. Use your client to generate the token that is unique among requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see "How to ensure idempotence".
    std::shared_ptr<string> clientToken_ = nullptr;
    // The command content. Take note of the following:
    // 
    // *   When `EnableParameter` is set to true, you can use custom parameters in the command.
    // *   Define custom parameters in the {{}} format. Within `{{}}`, the spaces and line feeds before and after the parameter names are ignored.
    // *   You can specify up to 20 custom parameters.
    // *   A custom parameter name can contain only letters, digits, underscores (_), and hyphens (-). The name is not case-sensitive.
    // *   Each custom parameter name is up to 64 bytes in length.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The ID of the command.
    std::shared_ptr<string> commandId_ = nullptr;
    // The encoding mode of the command content. Valid values:
    // 
    // *   PlainText
    // *   Base64
    // 
    // Default value: PlainText. If the specified value of this parameter is invalid, PlainText is used by default.
    std::shared_ptr<string> contentEncoding_ = nullptr;
    // The command description.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to use custom parameters in the command.
    // 
    // Default value: false.
    std::shared_ptr<bool> enableParameter_ = nullptr;
    // The schedule to run the command. Supported schedule types: at a fixed interval based on a rate expression, run only once at a specific time, or run at specific times based on a cron expression.
    // 
    // *   To run the command at a fixed interval, use a rate expression to specify the interval. The interval can be in seconds, minutes, hours, or days. This option is suitable for scenarios in which tasks need to be executed at a fixed interval. Format: rate(\\<Execution interval value> \\<Execution interval unit>). For example, rate(5m) means to run the command every 5 minutes. When you specify an interval, take note of the following limits:
    // 
    //     *   The interval can be anywhere from 60 seconds to 7 days, but must be longer than the timeout period of the scheduled task.
    //     *   The interval is the time between two consecutive executions, irrelevant of the time required to run the command. For example, assume that you set the interval to 5 minutes and that it takes 2 minutes to run the command each time. The system waits 3 minutes before running the command again.
    //     *   The command is not immediately executed after the task is created. For example, assume that you set the interval to 5 minutes. The task begins to be executed 5 minutes after it is created.
    // 
    // *   To run a command only once at a specific point in time, specify a point in time and a time zone. Format: at(yyyy-MM-dd HH:mm:ss \\<Time zone>). If you do not specify a time zone, the Coordinated Universal Time (UTC) time zone is used by default. The time zone name supports the following formats: Full name, such as Asia/Shanghai and America/Los_Angeles. The time offset from GMT. Examples: GMT+8:00 (UTC+8) and GMT-7:00 (UTC-7). If you use the GMT format, you cannot add leading zeros to the hour value. The time zone abbreviation. Only UTC is supported. For example, to configure a command to run only once at 13:15:30 on June 6, 2022 (Shanghai time), set the time to at(2022-06-06 13:15:30 Asia/Shanghai). To configure a command to run only once at 13:15:30 on June 6, 2022 (UTC-7), set the time to at(2022-06-06 13:15:30 GMT-7:00).
    // 
    // *   To run a command at designated points in time, use a cron expression to define the schedule. Format: \\<Cron expression> \\<Time zone>. Example: \\<Seconds> \\<Minutes> \\<Hours> \\<Day of the month> \\<Month> \\<Day of the week> \\<Year (optional)> \\<Time zone>. The system calculates the execution times of the command based on the specified cron expression and time zone and runs the command as scheduled. If you do not specify a time zone, the system time zone of the instance is used by default. For more information, see Cron expressions. The time zone name supports the following formats:
    // 
    //     *   Full name, such as Asia/Shanghai and America/Los_Angeles.
    //     *   The time offset from GMT. Examples: GMT+8:00 (UTC+8) and GMT-7:00 (UTC-7). If you use the GMT format, you cannot add leading zeros to the hour value.
    //     *   The time zone abbreviation. Only UTC is supported.
    // 
    //     For example, if you specify a command to run at 10:15:00 every day in 2022 in China/Shanghai time, set the time to 0 15 10 ? \\* \\* 2022 Asia/Shanghai. To configure a command to run every half an hour from 10:00:00 to 11:30:00 every day in 2022 (UTC+8), set the schedule to 0 0/30 10-11 \\* \\* ? 2022 GMT+8:00. To configure a command to run every 5 minutes from 14:00:00 to 14:55:00 every October every two years from 2022 in UTC, set the schedule to 0 0/5 14 \\* 10 ? 2022/2 UTC.
    std::shared_ptr<string> frequency_ = nullptr;
    // The launcher for script execution. Cannot exceed 1 KB.
    std::shared_ptr<string> launcher_ = nullptr;
    // The command name.
    std::shared_ptr<string> name_ = nullptr;
    // The node list.
    std::shared_ptr<vector<string>> nodeIdList_ = nullptr;
    // The key-value pairs of custom parameters to pass in when the command includes custom parameters. For example, the command content is `echo {{name}}`. You can use `Parameters` to pass in the `{"name":"Jack"}` key-value pair. The `name` key of the custom parameter is automatically replaced by the paired Jack value to generate a new command. As a result, the `echo Jack` command is run.
    // 
    // You can specify 0 to 10 custom parameters. Take note of the following:
    // 
    // *   The key of a custom parameter can be up to 64 characters in length, and cannot be an empty string.
    // *   The value of a custom parameter can be an empty string.
    // *   If you want to retain a command, make sure that the command after Base64 encoding, including custom parameters and original command content, does not exceed 18 KB in size. If you do not want to retain the command, make sure that the command after Base64 encoding does not exceed 24 KB in size. You can set `KeepCommand` to specify whether to retain the command.
    // *   The specified custom parameter names must be included in the custom parameter names that you specify when you create the command. You can use empty strings to represent the parameters that are not passed in.
    // 
    // This parameter is left empty by default, which indicates that the custom parameter feature is disabled.
    Darabonba::Json parameters_ = nullptr;
    // The mode to run the command. Valid values:
    // 
    // *   Once: runs the command immediately.
    // *   Period: runs the command based on a schedule. When set to `Period`, `Frequency` is required.
    // *   NextRebootOnly: runs the command the next time the instances is started.
    // *   EveryReboot: runs the command every time the instance is started.
    // 
    // Default value:
    // 
    // *   If you do not specify `Frequency`, the default value is `Once`.
    // *   If you specify `Frequency`, RepeatMode is set to `Period` regardless of whether a value is already specified.
    std::shared_ptr<string> repeatMode_ = nullptr;
    // Indicates how the command task is stopped when a command execution is manually stopped or times out. Valid values:
    // 
    // Process: The process of the command is stopped. ProcessTree: The process tree of the command is stopped. In this case, the process of the command and all subprocesses are stopped.
    std::shared_ptr<string> terminationMode_ = nullptr;
    // The timeout period for the command. Unit: seconds. A timeout error occurs if the command cannot be run because the process slows down or because a specific module or Cloud Assistant Agent does not exist. When the specified timeout period ends, the command process is forcefully terminated. Default value: 60.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The username that you use to run the command. The name can be up to 255 characters in length. For Linux instances, the root user is used by default.
    std::shared_ptr<string> username_ = nullptr;
    // The working path of the command. You can specify a custom path. Default path:
    // 
    // Linux instances: By default, the path is in the /home directory of the root user.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
