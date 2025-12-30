// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobSpec& obj) { 
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
      friend void from_json(const Darabonba::Json& j, JobSpec& obj) { 
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
      JobSpec() = default ;
      JobSpec(const JobSpec &) = default ;
      JobSpec(JobSpec &&) = default ;
      JobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobSpec() = default ;
      JobSpec& operator=(const JobSpec &) = default ;
      JobSpec& operator=(JobSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(Gpus, gpus_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(Gpus, gpus_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cores_ == nullptr
        && this->gpus_ == nullptr && this->memory_ == nullptr && this->nodes_ == nullptr; };
        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
        inline Resources& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // gpus Field Functions 
        bool hasGpus() const { return this->gpus_ != nullptr;};
        void deleteGpus() { this->gpus_ = nullptr;};
        inline int32_t getGpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, 0) };
        inline Resources& setGpus(int32_t gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline Resources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline int32_t getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, 0) };
        inline Resources& setNodes(int32_t nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


      protected:
        // The number of vCPUs to be allocated to each compute node.
        shared_ptr<int32_t> cores_ {};
        // The number of GPUs to be allocated to each compute node.
        shared_ptr<int32_t> gpus_ {};
        // The memory size to be allocated to each compute node. The memory size is in string format. Unit: MB or GB.
        shared_ptr<string> memory_ {};
        // The number of compute nodes to be allocated to the job.
        shared_ptr<int32_t> nodes_ {};
      };

      virtual bool empty() const override { return this->arrayRequest_ == nullptr
        && this->commandLine_ == nullptr && this->jobQueue_ == nullptr && this->postCmdLine_ == nullptr && this->priority_ == nullptr && this->resources_ == nullptr
        && this->runasUser_ == nullptr && this->runasUserPassword_ == nullptr && this->stderrPath_ == nullptr && this->stdoutPath_ == nullptr && this->variables_ == nullptr
        && this->wallTime_ == nullptr; };
      // arrayRequest Field Functions 
      bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
      void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
      inline string getArrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
      inline JobSpec& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


      // commandLine Field Functions 
      bool hasCommandLine() const { return this->commandLine_ != nullptr;};
      void deleteCommandLine() { this->commandLine_ = nullptr;};
      inline string getCommandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
      inline JobSpec& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


      // jobQueue Field Functions 
      bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
      void deleteJobQueue() { this->jobQueue_ = nullptr;};
      inline string getJobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
      inline JobSpec& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


      // postCmdLine Field Functions 
      bool hasPostCmdLine() const { return this->postCmdLine_ != nullptr;};
      void deletePostCmdLine() { this->postCmdLine_ = nullptr;};
      inline string getPostCmdLine() const { DARABONBA_PTR_GET_DEFAULT(postCmdLine_, "") };
      inline JobSpec& setPostCmdLine(string postCmdLine) { DARABONBA_PTR_SET_VALUE(postCmdLine_, postCmdLine) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline JobSpec& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const JobSpec::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, JobSpec::Resources) };
      inline JobSpec::Resources getResources() { DARABONBA_PTR_GET(resources_, JobSpec::Resources) };
      inline JobSpec& setResources(const JobSpec::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline JobSpec& setResources(JobSpec::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // runasUser Field Functions 
      bool hasRunasUser() const { return this->runasUser_ != nullptr;};
      void deleteRunasUser() { this->runasUser_ = nullptr;};
      inline string getRunasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
      inline JobSpec& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


      // runasUserPassword Field Functions 
      bool hasRunasUserPassword() const { return this->runasUserPassword_ != nullptr;};
      void deleteRunasUserPassword() { this->runasUserPassword_ = nullptr;};
      inline string getRunasUserPassword() const { DARABONBA_PTR_GET_DEFAULT(runasUserPassword_, "") };
      inline JobSpec& setRunasUserPassword(string runasUserPassword) { DARABONBA_PTR_SET_VALUE(runasUserPassword_, runasUserPassword) };


      // stderrPath Field Functions 
      bool hasStderrPath() const { return this->stderrPath_ != nullptr;};
      void deleteStderrPath() { this->stderrPath_ = nullptr;};
      inline string getStderrPath() const { DARABONBA_PTR_GET_DEFAULT(stderrPath_, "") };
      inline JobSpec& setStderrPath(string stderrPath) { DARABONBA_PTR_SET_VALUE(stderrPath_, stderrPath) };


      // stdoutPath Field Functions 
      bool hasStdoutPath() const { return this->stdoutPath_ != nullptr;};
      void deleteStdoutPath() { this->stdoutPath_ = nullptr;};
      inline string getStdoutPath() const { DARABONBA_PTR_GET_DEFAULT(stdoutPath_, "") };
      inline JobSpec& setStdoutPath(string stdoutPath) { DARABONBA_PTR_SET_VALUE(stdoutPath_, stdoutPath) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
      inline JobSpec& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


      // wallTime Field Functions 
      bool hasWallTime() const { return this->wallTime_ != nullptr;};
      void deleteWallTime() { this->wallTime_ = nullptr;};
      inline string getWallTime() const { DARABONBA_PTR_GET_DEFAULT(wallTime_, "") };
      inline JobSpec& setWallTime(string wallTime) { DARABONBA_PTR_SET_VALUE(wallTime_, wallTime) };


    protected:
      // The jobs in the queue.
      // 
      // Format: X-Y:Z. X is the minimum index value. Y is the maximum index value. Z is the step size. For example, 2-7:2 indicates that three jobs need to be run and their index values are 2, 4, and 6.
      shared_ptr<string> arrayRequest_ {};
      // The command or script that is used to run the job. If you want to use a command, you must specify the full path of the command, for example, /bin/ping.
      // 
      // If you want to use a script, you must make sure that you have the execution permissions on it. By default, the user root directory ~/ is used as the default script path on the cluster side. If your script is not in that directory, you must specify the full path in this parameter, such as /home/xxx/job.sh Note that in this mode, if requirements on resources such as CPU and memory are specified in the script, the job will be run based on the resource requirements specified in the script. In this case, do not specify resource requirements in the Resource parameter. Otherwise, the job may fail to run.
      // 
      // If you want to run the job directly by using the CLI, you must specify the absolute path of the command and add two hyphens and a space (-- ) before the path, such as -- /bin/ping -c 10 localhost.
      // 
      // This parameter is required.
      shared_ptr<string> commandLine_ {};
      // The queue to which the job belongs.
      shared_ptr<string> jobQueue_ {};
      // The post-processing command of the job.
      shared_ptr<string> postCmdLine_ {};
      // The job priority.
      shared_ptr<string> priority_ {};
      // The resource configurations of the job.
      shared_ptr<JobSpec::Resources> resources_ {};
      // The cluster-side user as which you want to submit the job.
      shared_ptr<string> runasUser_ {};
      // The password of the user specified by the RunasUser parameter.
      shared_ptr<string> runasUserPassword_ {};
      // The path of the standard error output file of the job. You need to specify the full path.
      shared_ptr<string> stderrPath_ {};
      // The path of the standard output file of the job. You need to specify the full path.
      shared_ptr<string> stdoutPath_ {};
      // The environment variables of the job. The value is a string in the JSON array format. Each array member is a JSON object that contains two members: Name and Value. Name indicates the name of the environment variable, and Value indicates the value of the environment variable.
      shared_ptr<string> variables_ {};
      // The maximum duration for which the job can be run. Format: `hour: minute: second`. For example, `01:00:00` indicates 1 hour.
      shared_ptr<string> wallTime_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->jobName_ == nullptr && this->jobSpec_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline const CreateJobRequest::JobSpec & getJobSpec() const { DARABONBA_PTR_GET_CONST(jobSpec_, CreateJobRequest::JobSpec) };
    inline CreateJobRequest::JobSpec getJobSpec() { DARABONBA_PTR_GET(jobSpec_, CreateJobRequest::JobSpec) };
    inline CreateJobRequest& setJobSpec(const CreateJobRequest::JobSpec & jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };
    inline CreateJobRequest& setJobSpec(CreateJobRequest::JobSpec && jobSpec) { DARABONBA_PTR_SET_RVALUE(jobSpec_, jobSpec) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The job name.
    shared_ptr<string> jobName_ {};
    // The job configurations.
    shared_ptr<CreateJobRequest::JobSpec> jobSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
