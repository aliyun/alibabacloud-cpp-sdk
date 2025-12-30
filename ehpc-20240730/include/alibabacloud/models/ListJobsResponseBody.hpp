// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
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
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobSpec& obj) { 
          DARABONBA_PTR_TO_JSON(ArrayJobId, arrayJobId_);
          DARABONBA_PTR_TO_JSON(ArrayJobSubId, arrayJobSubId_);
          DARABONBA_PTR_TO_JSON(ArrayRequest, arrayRequest_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JobQueue, jobQueue_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Resources, resources_);
          DARABONBA_PTR_TO_JSON(ResourcesActualOccupied, resourcesActualOccupied_);
          DARABONBA_PTR_TO_JSON(RunasUser, runasUser_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(StderrPath, stderrPath_);
          DARABONBA_PTR_TO_JSON(StdoutPath, stdoutPath_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, JobSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(ArrayJobId, arrayJobId_);
          DARABONBA_PTR_FROM_JSON(ArrayJobSubId, arrayJobSubId_);
          DARABONBA_PTR_FROM_JSON(ArrayRequest, arrayRequest_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JobQueue, jobQueue_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Resources, resources_);
          DARABONBA_PTR_FROM_JSON(ResourcesActualOccupied, resourcesActualOccupied_);
          DARABONBA_PTR_FROM_JSON(RunasUser, runasUser_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(StderrPath, stderrPath_);
          DARABONBA_PTR_FROM_JSON(StdoutPath, stdoutPath_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
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
        class ResourcesActualOccupied : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourcesActualOccupied& obj) { 
            DARABONBA_PTR_TO_JSON(Cores, cores_);
            DARABONBA_PTR_TO_JSON(Gpus, gpus_);
            DARABONBA_PTR_TO_JSON(Memory, memory_);
            DARABONBA_PTR_TO_JSON(Nodes, nodes_);
          };
          friend void from_json(const Darabonba::Json& j, ResourcesActualOccupied& obj) { 
            DARABONBA_PTR_FROM_JSON(Cores, cores_);
            DARABONBA_PTR_FROM_JSON(Gpus, gpus_);
            DARABONBA_PTR_FROM_JSON(Memory, memory_);
            DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
          };
          ResourcesActualOccupied() = default ;
          ResourcesActualOccupied(const ResourcesActualOccupied &) = default ;
          ResourcesActualOccupied(ResourcesActualOccupied &&) = default ;
          ResourcesActualOccupied(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourcesActualOccupied() = default ;
          ResourcesActualOccupied& operator=(const ResourcesActualOccupied &) = default ;
          ResourcesActualOccupied& operator=(ResourcesActualOccupied &&) = default ;
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
          inline ResourcesActualOccupied& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


          // gpus Field Functions 
          bool hasGpus() const { return this->gpus_ != nullptr;};
          void deleteGpus() { this->gpus_ = nullptr;};
          inline string getGpus() const { DARABONBA_PTR_GET_DEFAULT(gpus_, "") };
          inline ResourcesActualOccupied& setGpus(string gpus) { DARABONBA_PTR_SET_VALUE(gpus_, gpus) };


          // memory Field Functions 
          bool hasMemory() const { return this->memory_ != nullptr;};
          void deleteMemory() { this->memory_ = nullptr;};
          inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
          inline ResourcesActualOccupied& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          // nodes Field Functions 
          bool hasNodes() const { return this->nodes_ != nullptr;};
          void deleteNodes() { this->nodes_ = nullptr;};
          inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
          inline ResourcesActualOccupied& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


        protected:
          // Number of CPU cores.
          shared_ptr<string> cores_ {};
          // Number of CPUs
          shared_ptr<string> gpus_ {};
          // Number of memory.
          shared_ptr<string> memory_ {};
          // Number of compute nodes.
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
          // The number of vCPUs that were used to run the job.
          shared_ptr<string> cores_ {};
          // The number of GPUs that were used to run the job.
          shared_ptr<string> gpus_ {};
          // The size of memory that was used to run the job.
          shared_ptr<string> memory_ {};
          // The number of compute nodes that were used to run the job.
          shared_ptr<string> nodes_ {};
        };

        virtual bool empty() const override { return this->arrayJobId_ == nullptr
        && this->arrayJobSubId_ == nullptr && this->arrayRequest_ == nullptr && this->comment_ == nullptr && this->id_ == nullptr && this->jobQueue_ == nullptr
        && this->lastModifyTime_ == nullptr && this->nodeList_ == nullptr && this->priority_ == nullptr && this->resources_ == nullptr && this->resourcesActualOccupied_ == nullptr
        && this->runasUser_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->stderrPath_ == nullptr && this->stdoutPath_ == nullptr
        && this->submitTime_ == nullptr && this->variables_ == nullptr; };
        // arrayJobId Field Functions 
        bool hasArrayJobId() const { return this->arrayJobId_ != nullptr;};
        void deleteArrayJobId() { this->arrayJobId_ = nullptr;};
        inline string getArrayJobId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobId_, "") };
        inline JobSpec& setArrayJobId(string arrayJobId) { DARABONBA_PTR_SET_VALUE(arrayJobId_, arrayJobId) };


        // arrayJobSubId Field Functions 
        bool hasArrayJobSubId() const { return this->arrayJobSubId_ != nullptr;};
        void deleteArrayJobSubId() { this->arrayJobSubId_ = nullptr;};
        inline string getArrayJobSubId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobSubId_, "") };
        inline JobSpec& setArrayJobSubId(string arrayJobSubId) { DARABONBA_PTR_SET_VALUE(arrayJobSubId_, arrayJobSubId) };


        // arrayRequest Field Functions 
        bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
        void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
        inline string getArrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
        inline JobSpec& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline JobSpec& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline JobSpec& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobQueue Field Functions 
        bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
        void deleteJobQueue() { this->jobQueue_ = nullptr;};
        inline string getJobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
        inline JobSpec& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
        inline JobSpec& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // nodeList Field Functions 
        bool hasNodeList() const { return this->nodeList_ != nullptr;};
        void deleteNodeList() { this->nodeList_ = nullptr;};
        inline string getNodeList() const { DARABONBA_PTR_GET_DEFAULT(nodeList_, "") };
        inline JobSpec& setNodeList(string nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };


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


        // resourcesActualOccupied Field Functions 
        bool hasResourcesActualOccupied() const { return this->resourcesActualOccupied_ != nullptr;};
        void deleteResourcesActualOccupied() { this->resourcesActualOccupied_ = nullptr;};
        inline const JobSpec::ResourcesActualOccupied & getResourcesActualOccupied() const { DARABONBA_PTR_GET_CONST(resourcesActualOccupied_, JobSpec::ResourcesActualOccupied) };
        inline JobSpec::ResourcesActualOccupied getResourcesActualOccupied() { DARABONBA_PTR_GET(resourcesActualOccupied_, JobSpec::ResourcesActualOccupied) };
        inline JobSpec& setResourcesActualOccupied(const JobSpec::ResourcesActualOccupied & resourcesActualOccupied) { DARABONBA_PTR_SET_VALUE(resourcesActualOccupied_, resourcesActualOccupied) };
        inline JobSpec& setResourcesActualOccupied(JobSpec::ResourcesActualOccupied && resourcesActualOccupied) { DARABONBA_PTR_SET_RVALUE(resourcesActualOccupied_, resourcesActualOccupied) };


        // runasUser Field Functions 
        bool hasRunasUser() const { return this->runasUser_ != nullptr;};
        void deleteRunasUser() { this->runasUser_ = nullptr;};
        inline string getRunasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
        inline JobSpec& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline JobSpec& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline JobSpec& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


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


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline JobSpec& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
        inline JobSpec& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


      protected:
        // The array job ID.
        shared_ptr<string> arrayJobId_ {};
        // The ID of the job in the array.
        shared_ptr<string> arrayJobSubId_ {};
        // The queue format of the job.
        // 
        // *   If the job is not in a queue, the output is empty.
        // *   The format is X-Y:Z. X indicates the first index, Y indicates the final index, and Z indicates the step size. For example, 2-7:2 indicates three sub-jobs numbered 2, 4, and 6.
        shared_ptr<string> arrayRequest_ {};
        // The job description.
        shared_ptr<string> comment_ {};
        // The job ID.
        shared_ptr<string> id_ {};
        // The queue name.
        shared_ptr<string> jobQueue_ {};
        // The time when the job was last updated.
        shared_ptr<string> lastModifyTime_ {};
        // The compute nodes that were used to run the job.
        shared_ptr<string> nodeList_ {};
        // The job priority. Valid values: 0 to 9. A larger value indicates a higher priority.
        shared_ptr<string> priority_ {};
        // The information about the resources required to run the job.
        shared_ptr<JobSpec::Resources> resources_ {};
        // Actual resource usage of the job program
        shared_ptr<JobSpec::ResourcesActualOccupied> resourcesActualOccupied_ {};
        // The user that ran the job.
        shared_ptr<string> runasUser_ {};
        // Job start time.
        shared_ptr<string> startTime_ {};
        // The job state. Valid values: (PBS cluster and Slurm cluster)
        // 
        // *   FINISHED/Completed
        // *   RUNNING/Running
        // *   QUEUED/Pending
        // *   FAILED/Failed
        shared_ptr<string> state_ {};
        // The error output path.
        shared_ptr<string> stderrPath_ {};
        // The standard output path.
        shared_ptr<string> stdoutPath_ {};
        // The time when the job was submitted.
        shared_ptr<string> submitTime_ {};
        // The variables of the job.
        shared_ptr<string> variables_ {};
      };

      virtual bool empty() const override { return this->jobName_ == nullptr
        && this->jobSpec_ == nullptr; };
      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Jobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobSpec Field Functions 
      bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
      void deleteJobSpec() { this->jobSpec_ = nullptr;};
      inline const Jobs::JobSpec & getJobSpec() const { DARABONBA_PTR_GET_CONST(jobSpec_, Jobs::JobSpec) };
      inline Jobs::JobSpec getJobSpec() { DARABONBA_PTR_GET(jobSpec_, Jobs::JobSpec) };
      inline Jobs& setJobSpec(const Jobs::JobSpec & jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };
      inline Jobs& setJobSpec(Jobs::JobSpec && jobSpec) { DARABONBA_PTR_SET_RVALUE(jobSpec_, jobSpec) };


    protected:
      // The job name.
      shared_ptr<string> jobName_ {};
      // The job configurations.
      shared_ptr<Jobs::JobSpec> jobSpec_ {};
    };

    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline vector<ListJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline ListJobsResponseBody& setJobs(const vector<ListJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListJobsResponseBody& setJobs(vector<ListJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The jobs.
    shared_ptr<vector<ListJobsResponseBody::Jobs>> jobs_ {};
    // The page number. Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
