// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ArrayJobId, arrayJobId_);
        DARABONBA_PTR_TO_JSON(ArrayJobSubId, arrayJobSubId_);
        DARABONBA_PTR_TO_JSON(ArrayRequest, arrayRequest_);
        DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorLog, errorLog_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobQueue, jobQueue_);
        DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
        DARABONBA_PTR_TO_JSON(OutputLog, outputLog_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(ResourcesUsed, resourcesUsed_);
        DARABONBA_PTR_TO_JSON(RunasUser, runasUser_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, JobInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ArrayJobId, arrayJobId_);
        DARABONBA_PTR_FROM_JSON(ArrayJobSubId, arrayJobSubId_);
        DARABONBA_PTR_FROM_JSON(ArrayRequest, arrayRequest_);
        DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorLog, errorLog_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobQueue, jobQueue_);
        DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
        DARABONBA_PTR_FROM_JSON(OutputLog, outputLog_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(ResourcesUsed, resourcesUsed_);
        DARABONBA_PTR_FROM_JSON(RunasUser, runasUser_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
      };
      JobInfo() = default ;
      JobInfo(const JobInfo &) = default ;
      JobInfo(JobInfo &&) = default ;
      JobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobInfo() = default ;
      JobInfo& operator=(const JobInfo &) = default ;
      JobInfo& operator=(JobInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the environment variable.
        shared_ptr<string> name_ {};
        // The value of the environment variable.
        shared_ptr<string> value_ {};
      };

      class ResourcesUsed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcesUsed& obj) { 
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcesUsed& obj) { 
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        };
        ResourcesUsed() = default ;
        ResourcesUsed(const ResourcesUsed &) = default ;
        ResourcesUsed(ResourcesUsed &&) = default ;
        ResourcesUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcesUsed() = default ;
        ResourcesUsed& operator=(const ResourcesUsed &) = default ;
        ResourcesUsed& operator=(ResourcesUsed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cores_ == nullptr
        && this->memory_ == nullptr && this->nodes_ == nullptr; };
        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline string getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
        inline ResourcesUsed& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline ResourcesUsed& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
        inline ResourcesUsed& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


      protected:
        // The number of vCPUs used by the job on each node.
        shared_ptr<string> cores_ {};
        // The memory size used by the job on each node.
        shared_ptr<string> memory_ {};
        // The number of nodes that are used to run the job.
        shared_ptr<string> nodes_ {};
      };

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
        inline string getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
        inline Resources& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // gpus Field Functions 
        bool hasGpus() const { return this->gpus_ != nullptr;};
        void deleteGpus() { this->gpus_ = nullptr;};
        inline string getGpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, "") };
        inline Resources& setGpus(string gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline Resources& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
        inline Resources& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


      protected:
        // The number of vCPUs used by the job on each node.
        shared_ptr<string> cores_ {};
        // The number of GPUs used by the job on each node.
        shared_ptr<string> gpus_ {};
        // The memory size used by the job on each node.
        shared_ptr<string> memory_ {};
        // The number of nodes that are used to run the job.
        shared_ptr<string> nodes_ {};
      };

      virtual bool empty() const override { return this->arrayJobId_ == nullptr
        && this->arrayJobSubId_ == nullptr && this->arrayRequest_ == nullptr && this->commandLine_ == nullptr && this->createTime_ == nullptr && this->errorLog_ == nullptr
        && this->extraInfo_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobQueue_ == nullptr && this->lastModifyTime_ == nullptr
        && this->nodeList_ == nullptr && this->outputLog_ == nullptr && this->priority_ == nullptr && this->resources_ == nullptr && this->resourcesUsed_ == nullptr
        && this->runasUser_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->variables_ == nullptr; };
      // arrayJobId Field Functions 
      bool hasArrayJobId() const { return this->arrayJobId_ != nullptr;};
      void deleteArrayJobId() { this->arrayJobId_ = nullptr;};
      inline string getArrayJobId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobId_, "") };
      inline JobInfo& setArrayJobId(string arrayJobId) { DARABONBA_PTR_SET_VALUE(arrayJobId_, arrayJobId) };


      // arrayJobSubId Field Functions 
      bool hasArrayJobSubId() const { return this->arrayJobSubId_ != nullptr;};
      void deleteArrayJobSubId() { this->arrayJobSubId_ = nullptr;};
      inline string getArrayJobSubId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobSubId_, "") };
      inline JobInfo& setArrayJobSubId(string arrayJobSubId) { DARABONBA_PTR_SET_VALUE(arrayJobSubId_, arrayJobSubId) };


      // arrayRequest Field Functions 
      bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
      void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
      inline string getArrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
      inline JobInfo& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


      // commandLine Field Functions 
      bool hasCommandLine() const { return this->commandLine_ != nullptr;};
      void deleteCommandLine() { this->commandLine_ = nullptr;};
      inline string getCommandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
      inline JobInfo& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorLog Field Functions 
      bool hasErrorLog() const { return this->errorLog_ != nullptr;};
      void deleteErrorLog() { this->errorLog_ = nullptr;};
      inline string getErrorLog() const { DARABONBA_PTR_GET_DEFAULT(errorLog_, "") };
      inline JobInfo& setErrorLog(string errorLog) { DARABONBA_PTR_SET_VALUE(errorLog_, errorLog) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline JobInfo& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline JobInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobQueue Field Functions 
      bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
      void deleteJobQueue() { this->jobQueue_ = nullptr;};
      inline string getJobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
      inline JobInfo& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
      inline JobInfo& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // nodeList Field Functions 
      bool hasNodeList() const { return this->nodeList_ != nullptr;};
      void deleteNodeList() { this->nodeList_ = nullptr;};
      inline string getNodeList() const { DARABONBA_PTR_GET_DEFAULT(nodeList_, "") };
      inline JobInfo& setNodeList(string nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };


      // outputLog Field Functions 
      bool hasOutputLog() const { return this->outputLog_ != nullptr;};
      void deleteOutputLog() { this->outputLog_ = nullptr;};
      inline string getOutputLog() const { DARABONBA_PTR_GET_DEFAULT(outputLog_, "") };
      inline JobInfo& setOutputLog(string outputLog) { DARABONBA_PTR_SET_VALUE(outputLog_, outputLog) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline JobInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const JobInfo::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, JobInfo::Resources) };
      inline JobInfo::Resources getResources() { DARABONBA_PTR_GET(resources_, JobInfo::Resources) };
      inline JobInfo& setResources(const JobInfo::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline JobInfo& setResources(JobInfo::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // resourcesUsed Field Functions 
      bool hasResourcesUsed() const { return this->resourcesUsed_ != nullptr;};
      void deleteResourcesUsed() { this->resourcesUsed_ = nullptr;};
      inline const JobInfo::ResourcesUsed & getResourcesUsed() const { DARABONBA_PTR_GET_CONST(resourcesUsed_, JobInfo::ResourcesUsed) };
      inline JobInfo::ResourcesUsed getResourcesUsed() { DARABONBA_PTR_GET(resourcesUsed_, JobInfo::ResourcesUsed) };
      inline JobInfo& setResourcesUsed(const JobInfo::ResourcesUsed & resourcesUsed) { DARABONBA_PTR_SET_VALUE(resourcesUsed_, resourcesUsed) };
      inline JobInfo& setResourcesUsed(JobInfo::ResourcesUsed && resourcesUsed) { DARABONBA_PTR_SET_RVALUE(resourcesUsed_, resourcesUsed) };


      // runasUser Field Functions 
      bool hasRunasUser() const { return this->runasUser_ != nullptr;};
      void deleteRunasUser() { this->runasUser_ = nullptr;};
      inline string getRunasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
      inline JobInfo& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline JobInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<JobInfo::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<JobInfo::Variables>) };
      inline vector<JobInfo::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<JobInfo::Variables>) };
      inline JobInfo& setVariables(const vector<JobInfo::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline JobInfo& setVariables(vector<JobInfo::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      // The parent job ID. If the return value is a non-empty string, the job is an array job.
      shared_ptr<string> arrayJobId_ {};
      // The sub-job ID. This parameter is valid when the ArrayJobId parameter is a non-empty string.
      shared_ptr<string> arrayJobSubId_ {};
      // The job queue. If the job is not in a queue, the output is empty.
      // 
      // The format is X-Y:Z. X indicates the first index, Y indicates the final index, and Z indicates the step size. For example, 2-7:2 indicates three sub-jobs numbered 2, 4, and 6.
      shared_ptr<string> arrayRequest_ {};
      // The command that is used to run the job.
      shared_ptr<string> commandLine_ {};
      // The time when the job was submitted.
      shared_ptr<string> createTime_ {};
      // The error log file of the job.
      shared_ptr<string> errorLog_ {};
      // Additional information.
      shared_ptr<string> extraInfo_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The job name.
      shared_ptr<string> jobName_ {};
      // The queue to which the job belongs.
      shared_ptr<string> jobQueue_ {};
      // The time when the job was last modified.
      shared_ptr<string> lastModifyTime_ {};
      // The compute nodes that are used to run the job.
      shared_ptr<string> nodeList_ {};
      // The standard output log file of the job.
      shared_ptr<string> outputLog_ {};
      // The priority of the job.
      shared_ptr<string> priority_ {};
      // The resources that were requested when the job was submitted.
      shared_ptr<JobInfo::Resources> resources_ {};
      // The resources that are actually used by the job.
      shared_ptr<JobInfo::ResourcesUsed> resourcesUsed_ {};
      // The user to which the job belongs or that is used to submit the job. This user is a cluster-side user.
      shared_ptr<string> runasUser_ {};
      // The time when the job was started.
      shared_ptr<string> startTime_ {};
      // The job state.
      shared_ptr<string> state_ {};
      // The variables of the job.
      shared_ptr<vector<JobInfo::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->jobInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // jobInfo Field Functions 
    bool hasJobInfo() const { return this->jobInfo_ != nullptr;};
    void deleteJobInfo() { this->jobInfo_ = nullptr;};
    inline const GetJobResponseBody::JobInfo & getJobInfo() const { DARABONBA_PTR_GET_CONST(jobInfo_, GetJobResponseBody::JobInfo) };
    inline GetJobResponseBody::JobInfo getJobInfo() { DARABONBA_PTR_GET(jobInfo_, GetJobResponseBody::JobInfo) };
    inline GetJobResponseBody& setJobInfo(const GetJobResponseBody::JobInfo & jobInfo) { DARABONBA_PTR_SET_VALUE(jobInfo_, jobInfo) };
    inline GetJobResponseBody& setJobInfo(GetJobResponseBody::JobInfo && jobInfo) { DARABONBA_PTR_SET_RVALUE(jobInfo_, jobInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The job details.
    shared_ptr<GetJobResponseBody::JobInfo> jobInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request result. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
