// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTJOBSPEC_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTJOBSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestJobSpecResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateJobRequestJobSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestJobSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_TO_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_TO_JSON(PostCmdLine, postCmdLine_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_TO_JSON(RunasUserPassword, runasUserPassword_);
      DARABONBA_PTR_TO_JSON(StderrPath, stderrPath_);
      DARABONBA_PTR_TO_JSON(StdoutPath, stdoutPath_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
      DARABONBA_PTR_TO_JSON(WallTime, wallTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestJobSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_FROM_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_FROM_JSON(PostCmdLine, postCmdLine_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_FROM_JSON(RunasUserPassword, runasUserPassword_);
      DARABONBA_PTR_FROM_JSON(StderrPath, stderrPath_);
      DARABONBA_PTR_FROM_JSON(StdoutPath, stdoutPath_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
      DARABONBA_PTR_FROM_JSON(WallTime, wallTime_);
    };
    CreateJobRequestJobSpec() = default ;
    CreateJobRequestJobSpec(const CreateJobRequestJobSpec &) = default ;
    CreateJobRequestJobSpec(CreateJobRequestJobSpec &&) = default ;
    CreateJobRequestJobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestJobSpec() = default ;
    CreateJobRequestJobSpec& operator=(const CreateJobRequestJobSpec &) = default ;
    CreateJobRequestJobSpec& operator=(CreateJobRequestJobSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayRequest_ == nullptr
        && return this->commandLine_ == nullptr && return this->jobQueue_ == nullptr && return this->postCmdLine_ == nullptr && return this->priority_ == nullptr && return this->resources_ == nullptr
        && return this->runasUser_ == nullptr && return this->runasUserPassword_ == nullptr && return this->stderrPath_ == nullptr && return this->stdoutPath_ == nullptr && return this->variables_ == nullptr
        && return this->wallTime_ == nullptr; };
    // arrayRequest Field Functions 
    bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
    void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
    inline string arrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
    inline CreateJobRequestJobSpec& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


    // commandLine Field Functions 
    bool hasCommandLine() const { return this->commandLine_ != nullptr;};
    void deleteCommandLine() { this->commandLine_ = nullptr;};
    inline string commandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
    inline CreateJobRequestJobSpec& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


    // jobQueue Field Functions 
    bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
    void deleteJobQueue() { this->jobQueue_ = nullptr;};
    inline string jobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
    inline CreateJobRequestJobSpec& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


    // postCmdLine Field Functions 
    bool hasPostCmdLine() const { return this->postCmdLine_ != nullptr;};
    void deletePostCmdLine() { this->postCmdLine_ = nullptr;};
    inline string postCmdLine() const { DARABONBA_PTR_GET_DEFAULT(postCmdLine_, "") };
    inline CreateJobRequestJobSpec& setPostCmdLine(string postCmdLine) { DARABONBA_PTR_SET_VALUE(postCmdLine_, postCmdLine) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateJobRequestJobSpec& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::CreateJobRequestJobSpecResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::CreateJobRequestJobSpecResources) };
    inline Models::CreateJobRequestJobSpecResources resources() { DARABONBA_PTR_GET(resources_, Models::CreateJobRequestJobSpecResources) };
    inline CreateJobRequestJobSpec& setResources(const Models::CreateJobRequestJobSpecResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateJobRequestJobSpec& setResources(Models::CreateJobRequestJobSpecResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // runasUser Field Functions 
    bool hasRunasUser() const { return this->runasUser_ != nullptr;};
    void deleteRunasUser() { this->runasUser_ = nullptr;};
    inline string runasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
    inline CreateJobRequestJobSpec& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


    // runasUserPassword Field Functions 
    bool hasRunasUserPassword() const { return this->runasUserPassword_ != nullptr;};
    void deleteRunasUserPassword() { this->runasUserPassword_ = nullptr;};
    inline string runasUserPassword() const { DARABONBA_PTR_GET_DEFAULT(runasUserPassword_, "") };
    inline CreateJobRequestJobSpec& setRunasUserPassword(string runasUserPassword) { DARABONBA_PTR_SET_VALUE(runasUserPassword_, runasUserPassword) };


    // stderrPath Field Functions 
    bool hasStderrPath() const { return this->stderrPath_ != nullptr;};
    void deleteStderrPath() { this->stderrPath_ = nullptr;};
    inline string stderrPath() const { DARABONBA_PTR_GET_DEFAULT(stderrPath_, "") };
    inline CreateJobRequestJobSpec& setStderrPath(string stderrPath) { DARABONBA_PTR_SET_VALUE(stderrPath_, stderrPath) };


    // stdoutPath Field Functions 
    bool hasStdoutPath() const { return this->stdoutPath_ != nullptr;};
    void deleteStdoutPath() { this->stdoutPath_ = nullptr;};
    inline string stdoutPath() const { DARABONBA_PTR_GET_DEFAULT(stdoutPath_, "") };
    inline CreateJobRequestJobSpec& setStdoutPath(string stdoutPath) { DARABONBA_PTR_SET_VALUE(stdoutPath_, stdoutPath) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string variables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline CreateJobRequestJobSpec& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


    // wallTime Field Functions 
    bool hasWallTime() const { return this->wallTime_ != nullptr;};
    void deleteWallTime() { this->wallTime_ = nullptr;};
    inline string wallTime() const { DARABONBA_PTR_GET_DEFAULT(wallTime_, "") };
    inline CreateJobRequestJobSpec& setWallTime(string wallTime) { DARABONBA_PTR_SET_VALUE(wallTime_, wallTime) };


  protected:
    // The jobs in the queue.
    // 
    // Format: X-Y:Z. X is the minimum index value. Y is the maximum index value. Z is the step size. For example, 2-7:2 indicates that three jobs need to be run and their index values are 2, 4, and 6.
    std::shared_ptr<string> arrayRequest_ = nullptr;
    // The command or script that is used to run the job. If you want to use a command, you must specify the full path of the command, for example, /bin/ping.
    // 
    // If you want to use a script, you must make sure that you have the execution permissions on it. By default, the user root directory ~/ is used as the default script path on the cluster side. If your script is not in that directory, you must specify the full path in this parameter, such as /home/xxx/job.sh Note that in this mode, if requirements on resources such as CPU and memory are specified in the script, the job will be run based on the resource requirements specified in the script. In this case, do not specify resource requirements in the Resource parameter. Otherwise, the job may fail to run.
    // 
    // If you want to run the job directly by using the CLI, you must specify the absolute path of the command and add two hyphens and a space (-- ) before the path, such as -- /bin/ping -c 10 localhost.
    // 
    // This parameter is required.
    std::shared_ptr<string> commandLine_ = nullptr;
    // The queue to which the job belongs.
    std::shared_ptr<string> jobQueue_ = nullptr;
    // The post-processing command of the job.
    std::shared_ptr<string> postCmdLine_ = nullptr;
    // The job priority.
    std::shared_ptr<string> priority_ = nullptr;
    // The resource configurations of the job.
    std::shared_ptr<Models::CreateJobRequestJobSpecResources> resources_ = nullptr;
    // The cluster-side user as which you want to submit the job.
    std::shared_ptr<string> runasUser_ = nullptr;
    // The password of the user specified by the RunasUser parameter.
    std::shared_ptr<string> runasUserPassword_ = nullptr;
    // The path of the standard error output file of the job. You need to specify the full path.
    std::shared_ptr<string> stderrPath_ = nullptr;
    // The path of the standard output file of the job. You need to specify the full path.
    std::shared_ptr<string> stdoutPath_ = nullptr;
    // The environment variables of the job. The value is a string in the JSON array format. Each array member is a JSON object that contains two members: Name and Value. Name indicates the name of the environment variable, and Value indicates the value of the environment variable.
    std::shared_ptr<string> variables_ = nullptr;
    // The maximum duration for which the job can be run. Format: `hour: minute: second`. For example, `01:00:00` indicates 1 hour.
    std::shared_ptr<string> wallTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
