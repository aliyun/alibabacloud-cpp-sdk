// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        DARABONBA_PTR_TO_JSON(AppExtraInfo, appExtraInfo_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DependencyPolicy, dependencyPolicy_);
        DARABONBA_PTR_TO_JSON(DeploymentPolicy, deploymentPolicy_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      };
      friend void from_json(const Darabonba::Json& j, JobInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppExtraInfo, appExtraInfo_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DependencyPolicy, dependencyPolicy_);
        DARABONBA_PTR_FROM_JSON(DeploymentPolicy, deploymentPolicy_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
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
      class Tasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutorPolicy, executorPolicy_);
          DARABONBA_PTR_TO_JSON(ExecutorStatus, executorStatus_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
          DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
        };
        friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutorPolicy, executorPolicy_);
          DARABONBA_PTR_FROM_JSON(ExecutorStatus, executorStatus_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskSpec, taskSpec_);
          DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
        };
        Tasks() = default ;
        Tasks(const Tasks &) = default ;
        Tasks(Tasks &&) = default ;
        Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tasks() = default ;
        Tasks& operator=(const Tasks &) = default ;
        Tasks& operator=(Tasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskSpec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskSpec& obj) { 
            DARABONBA_PTR_TO_JSON(Resource, resource_);
            DARABONBA_PTR_TO_JSON(RetryPolicy, retryPolicy_);
            DARABONBA_PTR_TO_JSON(TaskExecutor, taskExecutor_);
          };
          friend void from_json(const Darabonba::Json& j, TaskSpec& obj) { 
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
            DARABONBA_PTR_FROM_JSON(RetryPolicy, retryPolicy_);
            DARABONBA_PTR_FROM_JSON(TaskExecutor, taskExecutor_);
          };
          TaskSpec() = default ;
          TaskSpec(const TaskSpec &) = default ;
          TaskSpec(TaskSpec &&) = default ;
          TaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskSpec() = default ;
          TaskSpec& operator=(const TaskSpec &) = default ;
          TaskSpec& operator=(TaskSpec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TaskExecutor : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TaskExecutor& obj) { 
              DARABONBA_PTR_TO_JSON(VM, VM_);
            };
            friend void from_json(const Darabonba::Json& j, TaskExecutor& obj) { 
              DARABONBA_PTR_FROM_JSON(VM, VM_);
            };
            TaskExecutor() = default ;
            TaskExecutor(const TaskExecutor &) = default ;
            TaskExecutor(TaskExecutor &&) = default ;
            TaskExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TaskExecutor() = default ;
            TaskExecutor& operator=(const TaskExecutor &) = default ;
            TaskExecutor& operator=(TaskExecutor &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VM : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VM& obj) { 
                DARABONBA_PTR_TO_JSON(Image, image_);
                DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
                DARABONBA_PTR_TO_JSON(Script, script_);
              };
              friend void from_json(const Darabonba::Json& j, VM& obj) { 
                DARABONBA_PTR_FROM_JSON(Image, image_);
                DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
                DARABONBA_PTR_FROM_JSON(Script, script_);
              };
              VM() = default ;
              VM(const VM &) = default ;
              VM(VM &&) = default ;
              VM(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VM() = default ;
              VM& operator=(const VM &) = default ;
              VM& operator=(VM &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->image_ == nullptr
        && this->prologScript_ == nullptr && this->script_ == nullptr; };
              // image Field Functions 
              bool hasImage() const { return this->image_ != nullptr;};
              void deleteImage() { this->image_ = nullptr;};
              inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
              inline VM& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


              // prologScript Field Functions 
              bool hasPrologScript() const { return this->prologScript_ != nullptr;};
              void deletePrologScript() { this->prologScript_ = nullptr;};
              inline string getPrologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
              inline VM& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


              // script Field Functions 
              bool hasScript() const { return this->script_ != nullptr;};
              void deleteScript() { this->script_ = nullptr;};
              inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
              inline VM& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


            protected:
              // The image ID.
              shared_ptr<string> image_ {};
              // The pre-processing script. Base64 encoding is required.
              shared_ptr<string> prologScript_ {};
              // The running-job script. Base64 encoding is required.
              shared_ptr<string> script_ {};
            };

            virtual bool empty() const override { return this->VM_ == nullptr; };
            // VM Field Functions 
            bool hasVM() const { return this->VM_ != nullptr;};
            void deleteVM() { this->VM_ = nullptr;};
            inline const TaskExecutor::VM & getVM() const { DARABONBA_PTR_GET_CONST(VM_, TaskExecutor::VM) };
            inline TaskExecutor::VM getVM() { DARABONBA_PTR_GET(VM_, TaskExecutor::VM) };
            inline TaskExecutor& setVM(const TaskExecutor::VM & vM) { DARABONBA_PTR_SET_VALUE(VM_, vM) };
            inline TaskExecutor& setVM(TaskExecutor::VM && vM) { DARABONBA_PTR_SET_RVALUE(VM_, vM) };


          protected:
            // Use ECS instances.
            shared_ptr<TaskExecutor::VM> VM_ {};
          };

          class RetryPolicy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RetryPolicy& obj) { 
              DARABONBA_PTR_TO_JSON(ExitCodeActions, exitCodeActions_);
              DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
            };
            friend void from_json(const Darabonba::Json& j, RetryPolicy& obj) { 
              DARABONBA_PTR_FROM_JSON(ExitCodeActions, exitCodeActions_);
              DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
            };
            RetryPolicy() = default ;
            RetryPolicy(const RetryPolicy &) = default ;
            RetryPolicy(RetryPolicy &&) = default ;
            RetryPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RetryPolicy() = default ;
            RetryPolicy& operator=(const RetryPolicy &) = default ;
            RetryPolicy& operator=(RetryPolicy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ExitCodeActions : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExitCodeActions& obj) { 
                DARABONBA_PTR_TO_JSON(Action, action_);
                DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
              };
              friend void from_json(const Darabonba::Json& j, ExitCodeActions& obj) { 
                DARABONBA_PTR_FROM_JSON(Action, action_);
                DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
              };
              ExitCodeActions() = default ;
              ExitCodeActions(const ExitCodeActions &) = default ;
              ExitCodeActions(ExitCodeActions &&) = default ;
              ExitCodeActions(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExitCodeActions() = default ;
              ExitCodeActions& operator=(const ExitCodeActions &) = default ;
              ExitCodeActions& operator=(ExitCodeActions &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->action_ == nullptr
        && this->exitCode_ == nullptr; };
              // action Field Functions 
              bool hasAction() const { return this->action_ != nullptr;};
              void deleteAction() { this->action_ = nullptr;};
              inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
              inline ExitCodeActions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


              // exitCode Field Functions 
              bool hasExitCode() const { return this->exitCode_ != nullptr;};
              void deleteExitCode() { this->exitCode_ = nullptr;};
              inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
              inline ExitCodeActions& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


            protected:
              shared_ptr<string> action_ {};
              shared_ptr<int64_t> exitCode_ {};
            };

            virtual bool empty() const override { return this->exitCodeActions_ == nullptr
        && this->retryCount_ == nullptr; };
            // exitCodeActions Field Functions 
            bool hasExitCodeActions() const { return this->exitCodeActions_ != nullptr;};
            void deleteExitCodeActions() { this->exitCodeActions_ = nullptr;};
            inline const vector<RetryPolicy::ExitCodeActions> & getExitCodeActions() const { DARABONBA_PTR_GET_CONST(exitCodeActions_, vector<RetryPolicy::ExitCodeActions>) };
            inline vector<RetryPolicy::ExitCodeActions> getExitCodeActions() { DARABONBA_PTR_GET(exitCodeActions_, vector<RetryPolicy::ExitCodeActions>) };
            inline RetryPolicy& setExitCodeActions(const vector<RetryPolicy::ExitCodeActions> & exitCodeActions) { DARABONBA_PTR_SET_VALUE(exitCodeActions_, exitCodeActions) };
            inline RetryPolicy& setExitCodeActions(vector<RetryPolicy::ExitCodeActions> && exitCodeActions) { DARABONBA_PTR_SET_RVALUE(exitCodeActions_, exitCodeActions) };


            // retryCount Field Functions 
            bool hasRetryCount() const { return this->retryCount_ != nullptr;};
            void deleteRetryCount() { this->retryCount_ = nullptr;};
            inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
            inline RetryPolicy& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


          protected:
            shared_ptr<vector<RetryPolicy::ExitCodeActions>> exitCodeActions_ {};
            shared_ptr<int32_t> retryCount_ {};
          };

          class Resource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resource& obj) { 
              DARABONBA_PTR_TO_JSON(Cores, cores_);
              DARABONBA_PTR_TO_JSON(Disks, disks_);
              DARABONBA_PTR_TO_JSON(EnableHT, enableHT_);
              DARABONBA_PTR_TO_JSON(HostNamePrefix, hostNamePrefix_);
              DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
              DARABONBA_PTR_TO_JSON(Memory, memory_);
            };
            friend void from_json(const Darabonba::Json& j, Resource& obj) { 
              DARABONBA_PTR_FROM_JSON(Cores, cores_);
              DARABONBA_PTR_FROM_JSON(Disks, disks_);
              DARABONBA_PTR_FROM_JSON(EnableHT, enableHT_);
              DARABONBA_PTR_FROM_JSON(HostNamePrefix, hostNamePrefix_);
              DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
              DARABONBA_PTR_FROM_JSON(Memory, memory_);
            };
            Resource() = default ;
            Resource(const Resource &) = default ;
            Resource(Resource &&) = default ;
            Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Resource() = default ;
            Resource& operator=(const Resource &) = default ;
            Resource& operator=(Resource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Disks : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Disks& obj) { 
                DARABONBA_PTR_TO_JSON(Size, size_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, Disks& obj) { 
                DARABONBA_PTR_FROM_JSON(Size, size_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              Disks() = default ;
              Disks(const Disks &) = default ;
              Disks(Disks &&) = default ;
              Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Disks() = default ;
              Disks& operator=(const Disks &) = default ;
              Disks& operator=(Disks &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->size_ == nullptr
        && this->type_ == nullptr; };
              // size Field Functions 
              bool hasSize() const { return this->size_ != nullptr;};
              void deleteSize() { this->size_ = nullptr;};
              inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
              inline Disks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Disks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The size of the disk.
              shared_ptr<int32_t> size_ {};
              // The type of the disk. The following disk categories are supported:
              // 
              // *   System: system disk.
              // *   Data: data disk.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->cores_ == nullptr
        && this->disks_ == nullptr && this->enableHT_ == nullptr && this->hostNamePrefix_ == nullptr && this->instanceTypes_ == nullptr && this->memory_ == nullptr; };
            // cores Field Functions 
            bool hasCores() const { return this->cores_ != nullptr;};
            void deleteCores() { this->cores_ = nullptr;};
            inline float getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0.0) };
            inline Resource& setCores(float cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


            // disks Field Functions 
            bool hasDisks() const { return this->disks_ != nullptr;};
            void deleteDisks() { this->disks_ = nullptr;};
            inline const vector<Resource::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Resource::Disks>) };
            inline vector<Resource::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Resource::Disks>) };
            inline Resource& setDisks(const vector<Resource::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
            inline Resource& setDisks(vector<Resource::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


            // enableHT Field Functions 
            bool hasEnableHT() const { return this->enableHT_ != nullptr;};
            void deleteEnableHT() { this->enableHT_ = nullptr;};
            inline bool getEnableHT() const { DARABONBA_PTR_GET_DEFAULT(enableHT_, false) };
            inline Resource& setEnableHT(bool enableHT) { DARABONBA_PTR_SET_VALUE(enableHT_, enableHT) };


            // hostNamePrefix Field Functions 
            bool hasHostNamePrefix() const { return this->hostNamePrefix_ != nullptr;};
            void deleteHostNamePrefix() { this->hostNamePrefix_ = nullptr;};
            inline string getHostNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(hostNamePrefix_, "") };
            inline Resource& setHostNamePrefix(string hostNamePrefix) { DARABONBA_PTR_SET_VALUE(hostNamePrefix_, hostNamePrefix) };


            // instanceTypes Field Functions 
            bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
            void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
            inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
            inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
            inline Resource& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
            inline Resource& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


            // memory Field Functions 
            bool hasMemory() const { return this->memory_ != nullptr;};
            void deleteMemory() { this->memory_ = nullptr;};
            inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
            inline Resource& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          protected:
            // The number of CPUs on which the job is run.
            shared_ptr<float> cores_ {};
            // The array of the disks.
            shared_ptr<vector<Resource::Disks>> disks_ {};
            shared_ptr<bool> enableHT_ {};
            shared_ptr<string> hostNamePrefix_ {};
            shared_ptr<vector<string>> instanceTypes_ {};
            // The memory capacity. Unit: GiB.
            shared_ptr<int32_t> memory_ {};
          };

          virtual bool empty() const override { return this->resource_ == nullptr
        && this->retryPolicy_ == nullptr && this->taskExecutor_ == nullptr; };
          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline const TaskSpec::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, TaskSpec::Resource) };
          inline TaskSpec::Resource getResource() { DARABONBA_PTR_GET(resource_, TaskSpec::Resource) };
          inline TaskSpec& setResource(const TaskSpec::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
          inline TaskSpec& setResource(TaskSpec::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


          // retryPolicy Field Functions 
          bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
          void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
          inline const TaskSpec::RetryPolicy & getRetryPolicy() const { DARABONBA_PTR_GET_CONST(retryPolicy_, TaskSpec::RetryPolicy) };
          inline TaskSpec::RetryPolicy getRetryPolicy() { DARABONBA_PTR_GET(retryPolicy_, TaskSpec::RetryPolicy) };
          inline TaskSpec& setRetryPolicy(const TaskSpec::RetryPolicy & retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };
          inline TaskSpec& setRetryPolicy(TaskSpec::RetryPolicy && retryPolicy) { DARABONBA_PTR_SET_RVALUE(retryPolicy_, retryPolicy) };


          // taskExecutor Field Functions 
          bool hasTaskExecutor() const { return this->taskExecutor_ != nullptr;};
          void deleteTaskExecutor() { this->taskExecutor_ = nullptr;};
          inline const vector<TaskSpec::TaskExecutor> & getTaskExecutor() const { DARABONBA_PTR_GET_CONST(taskExecutor_, vector<TaskSpec::TaskExecutor>) };
          inline vector<TaskSpec::TaskExecutor> getTaskExecutor() { DARABONBA_PTR_GET(taskExecutor_, vector<TaskSpec::TaskExecutor>) };
          inline TaskSpec& setTaskExecutor(const vector<TaskSpec::TaskExecutor> & taskExecutor) { DARABONBA_PTR_SET_VALUE(taskExecutor_, taskExecutor) };
          inline TaskSpec& setTaskExecutor(vector<TaskSpec::TaskExecutor> && taskExecutor) { DARABONBA_PTR_SET_RVALUE(taskExecutor_, taskExecutor) };


        protected:
          // The resource information.
          shared_ptr<TaskSpec::Resource> resource_ {};
          shared_ptr<TaskSpec::RetryPolicy> retryPolicy_ {};
          // The task execution configurations.
          shared_ptr<vector<TaskSpec::TaskExecutor>> taskExecutor_ {};
        };

        class ExecutorStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutorStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ArrayId, arrayId_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutorStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ArrayId, arrayId_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
          };
          ExecutorStatus() = default ;
          ExecutorStatus(const ExecutorStatus &) = default ;
          ExecutorStatus(ExecutorStatus &&) = default ;
          ExecutorStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExecutorStatus() = default ;
          ExecutorStatus& operator=(const ExecutorStatus &) = default ;
          ExecutorStatus& operator=(ExecutorStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrayId_ == nullptr
        && this->createTime_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr; };
          // arrayId Field Functions 
          bool hasArrayId() const { return this->arrayId_ != nullptr;};
          void deleteArrayId() { this->arrayId_ = nullptr;};
          inline int32_t getArrayId() const { DARABONBA_PTR_GET_DEFAULT(arrayId_, 0) };
          inline ExecutorStatus& setArrayId(int32_t arrayId) { DARABONBA_PTR_SET_VALUE(arrayId_, arrayId) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline ExecutorStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline ExecutorStatus& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline ExecutorStatus& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ExecutorStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // statusReason Field Functions 
          bool hasStatusReason() const { return this->statusReason_ != nullptr;};
          void deleteStatusReason() { this->statusReason_ = nullptr;};
          inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
          inline ExecutorStatus& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


        protected:
          // Sub-job ID
          shared_ptr<int32_t> arrayId_ {};
          // The time when the job was created.
          shared_ptr<string> createTime_ {};
          // The end time of the scaling plan job.
          shared_ptr<string> endTime_ {};
          // The start time of the scaling plan job.
          shared_ptr<string> startTime_ {};
          // The status of the job.
          shared_ptr<string> status_ {};
          // The reason why the stack instance is in the OUTDATED state.
          shared_ptr<string> statusReason_ {};
        };

        class ExecutorPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutorPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(ArraySpec, arraySpec_);
            DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutorPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(ArraySpec, arraySpec_);
            DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
          };
          ExecutorPolicy() = default ;
          ExecutorPolicy(const ExecutorPolicy &) = default ;
          ExecutorPolicy(ExecutorPolicy &&) = default ;
          ExecutorPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExecutorPolicy() = default ;
          ExecutorPolicy& operator=(const ExecutorPolicy &) = default ;
          ExecutorPolicy& operator=(ExecutorPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ArraySpec : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ArraySpec& obj) { 
              DARABONBA_PTR_TO_JSON(IndexEnd, indexEnd_);
              DARABONBA_PTR_TO_JSON(IndexStart, indexStart_);
              DARABONBA_PTR_TO_JSON(IndexStep, indexStep_);
            };
            friend void from_json(const Darabonba::Json& j, ArraySpec& obj) { 
              DARABONBA_PTR_FROM_JSON(IndexEnd, indexEnd_);
              DARABONBA_PTR_FROM_JSON(IndexStart, indexStart_);
              DARABONBA_PTR_FROM_JSON(IndexStep, indexStep_);
            };
            ArraySpec() = default ;
            ArraySpec(const ArraySpec &) = default ;
            ArraySpec(ArraySpec &&) = default ;
            ArraySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ArraySpec() = default ;
            ArraySpec& operator=(const ArraySpec &) = default ;
            ArraySpec& operator=(ArraySpec &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->indexEnd_ == nullptr
        && this->indexStart_ == nullptr && this->indexStep_ == nullptr; };
            // indexEnd Field Functions 
            bool hasIndexEnd() const { return this->indexEnd_ != nullptr;};
            void deleteIndexEnd() { this->indexEnd_ = nullptr;};
            inline int32_t getIndexEnd() const { DARABONBA_PTR_GET_DEFAULT(indexEnd_, 0) };
            inline ArraySpec& setIndexEnd(int32_t indexEnd) { DARABONBA_PTR_SET_VALUE(indexEnd_, indexEnd) };


            // indexStart Field Functions 
            bool hasIndexStart() const { return this->indexStart_ != nullptr;};
            void deleteIndexStart() { this->indexStart_ = nullptr;};
            inline int32_t getIndexStart() const { DARABONBA_PTR_GET_DEFAULT(indexStart_, 0) };
            inline ArraySpec& setIndexStart(int32_t indexStart) { DARABONBA_PTR_SET_VALUE(indexStart_, indexStart) };


            // indexStep Field Functions 
            bool hasIndexStep() const { return this->indexStep_ != nullptr;};
            void deleteIndexStep() { this->indexStep_ = nullptr;};
            inline int32_t getIndexStep() const { DARABONBA_PTR_GET_DEFAULT(indexStep_, 0) };
            inline ArraySpec& setIndexStep(int32_t indexStep) { DARABONBA_PTR_SET_VALUE(indexStep_, indexStep) };


          protected:
            // The end value of the array job index. Valid values: 0 to 4999. The value must be greater than or equal to the value of IndexStart.
            shared_ptr<int32_t> indexEnd_ {};
            // The starting value of the array job index. Valid values: 0 to 4999.
            shared_ptr<int32_t> indexStart_ {};
            // The interval of the array job index.
            // 
            // > If the array job property is IndexStart=1,IndexEnd=5, and IndexStep=2, the array job contains three subtasks. The values of the subtask indexes are 1,3, and 5.
            shared_ptr<int32_t> indexStep_ {};
          };

          virtual bool empty() const override { return this->arraySpec_ == nullptr
        && this->maxCount_ == nullptr; };
          // arraySpec Field Functions 
          bool hasArraySpec() const { return this->arraySpec_ != nullptr;};
          void deleteArraySpec() { this->arraySpec_ = nullptr;};
          inline const ExecutorPolicy::ArraySpec & getArraySpec() const { DARABONBA_PTR_GET_CONST(arraySpec_, ExecutorPolicy::ArraySpec) };
          inline ExecutorPolicy::ArraySpec getArraySpec() { DARABONBA_PTR_GET(arraySpec_, ExecutorPolicy::ArraySpec) };
          inline ExecutorPolicy& setArraySpec(const ExecutorPolicy::ArraySpec & arraySpec) { DARABONBA_PTR_SET_VALUE(arraySpec_, arraySpec) };
          inline ExecutorPolicy& setArraySpec(ExecutorPolicy::ArraySpec && arraySpec) { DARABONBA_PTR_SET_RVALUE(arraySpec_, arraySpec) };


          // maxCount Field Functions 
          bool hasMaxCount() const { return this->maxCount_ != nullptr;};
          void deleteMaxCount() { this->maxCount_ = nullptr;};
          inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
          inline ExecutorPolicy& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


        protected:
          // The details of the array job.
          shared_ptr<ExecutorPolicy::ArraySpec> arraySpec_ {};
          // The maximum number of nodes to run the job.
          shared_ptr<int32_t> maxCount_ {};
        };

        virtual bool empty() const override { return this->executorPolicy_ == nullptr
        && this->executorStatus_ == nullptr && this->taskName_ == nullptr && this->taskSpec_ == nullptr && this->taskSustainable_ == nullptr; };
        // executorPolicy Field Functions 
        bool hasExecutorPolicy() const { return this->executorPolicy_ != nullptr;};
        void deleteExecutorPolicy() { this->executorPolicy_ = nullptr;};
        inline const Tasks::ExecutorPolicy & getExecutorPolicy() const { DARABONBA_PTR_GET_CONST(executorPolicy_, Tasks::ExecutorPolicy) };
        inline Tasks::ExecutorPolicy getExecutorPolicy() { DARABONBA_PTR_GET(executorPolicy_, Tasks::ExecutorPolicy) };
        inline Tasks& setExecutorPolicy(const Tasks::ExecutorPolicy & executorPolicy) { DARABONBA_PTR_SET_VALUE(executorPolicy_, executorPolicy) };
        inline Tasks& setExecutorPolicy(Tasks::ExecutorPolicy && executorPolicy) { DARABONBA_PTR_SET_RVALUE(executorPolicy_, executorPolicy) };


        // executorStatus Field Functions 
        bool hasExecutorStatus() const { return this->executorStatus_ != nullptr;};
        void deleteExecutorStatus() { this->executorStatus_ = nullptr;};
        inline const vector<Tasks::ExecutorStatus> & getExecutorStatus() const { DARABONBA_PTR_GET_CONST(executorStatus_, vector<Tasks::ExecutorStatus>) };
        inline vector<Tasks::ExecutorStatus> getExecutorStatus() { DARABONBA_PTR_GET(executorStatus_, vector<Tasks::ExecutorStatus>) };
        inline Tasks& setExecutorStatus(const vector<Tasks::ExecutorStatus> & executorStatus) { DARABONBA_PTR_SET_VALUE(executorStatus_, executorStatus) };
        inline Tasks& setExecutorStatus(vector<Tasks::ExecutorStatus> && executorStatus) { DARABONBA_PTR_SET_RVALUE(executorStatus_, executorStatus) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline Tasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskSpec Field Functions 
        bool hasTaskSpec() const { return this->taskSpec_ != nullptr;};
        void deleteTaskSpec() { this->taskSpec_ = nullptr;};
        inline const Tasks::TaskSpec & getTaskSpec() const { DARABONBA_PTR_GET_CONST(taskSpec_, Tasks::TaskSpec) };
        inline Tasks::TaskSpec getTaskSpec() { DARABONBA_PTR_GET(taskSpec_, Tasks::TaskSpec) };
        inline Tasks& setTaskSpec(const Tasks::TaskSpec & taskSpec) { DARABONBA_PTR_SET_VALUE(taskSpec_, taskSpec) };
        inline Tasks& setTaskSpec(Tasks::TaskSpec && taskSpec) { DARABONBA_PTR_SET_RVALUE(taskSpec_, taskSpec) };


        // taskSustainable Field Functions 
        bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
        void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
        inline bool getTaskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
        inline Tasks& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


      protected:
        // The task execution policy.
        shared_ptr<Tasks::ExecutorPolicy> executorPolicy_ {};
        // The execution status of the task.
        shared_ptr<vector<Tasks::ExecutorStatus>> executorStatus_ {};
        // The name of the task.
        shared_ptr<string> taskName_ {};
        // The details of the task specification.
        shared_ptr<Tasks::TaskSpec> taskSpec_ {};
        // Indicate whether the job is a long-running job.
        shared_ptr<bool> taskSustainable_ {};
      };

      class DeploymentPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        DeploymentPolicy() = default ;
        DeploymentPolicy(const DeploymentPolicy &) = default ;
        DeploymentPolicy(DeploymentPolicy &&) = default ;
        DeploymentPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentPolicy() = default ;
        DeploymentPolicy& operator=(const DeploymentPolicy &) = default ;
        DeploymentPolicy& operator=(DeploymentPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The key of the job tag.
          shared_ptr<string> tagKey_ {};
          // The value of the job tag.
          shared_ptr<string> tagValue_ {};
        };

        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(EnableENIMapping, enableENIMapping_);
            DARABONBA_PTR_TO_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
            DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableENIMapping, enableENIMapping_);
            DARABONBA_PTR_FROM_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
            DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
          };
          Network() = default ;
          Network(const Network &) = default ;
          Network(Network &&) = default ;
          Network(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Network() = default ;
          Network& operator=(const Network &) = default ;
          Network& operator=(Network &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableENIMapping_ == nullptr
        && this->enableExternalIpAddress_ == nullptr && this->vswitch_ == nullptr; };
          // enableENIMapping Field Functions 
          bool hasEnableENIMapping() const { return this->enableENIMapping_ != nullptr;};
          void deleteEnableENIMapping() { this->enableENIMapping_ = nullptr;};
          inline bool getEnableENIMapping() const { DARABONBA_PTR_GET_DEFAULT(enableENIMapping_, false) };
          inline Network& setEnableENIMapping(bool enableENIMapping) { DARABONBA_PTR_SET_VALUE(enableENIMapping_, enableENIMapping) };


          // enableExternalIpAddress Field Functions 
          bool hasEnableExternalIpAddress() const { return this->enableExternalIpAddress_ != nullptr;};
          void deleteEnableExternalIpAddress() { this->enableExternalIpAddress_ = nullptr;};
          inline bool getEnableExternalIpAddress() const { DARABONBA_PTR_GET_DEFAULT(enableExternalIpAddress_, false) };
          inline Network& setEnableExternalIpAddress(bool enableExternalIpAddress) { DARABONBA_PTR_SET_VALUE(enableExternalIpAddress_, enableExternalIpAddress) };


          // vswitch Field Functions 
          bool hasVswitch() const { return this->vswitch_ != nullptr;};
          void deleteVswitch() { this->vswitch_ = nullptr;};
          inline const vector<string> & getVswitch() const { DARABONBA_PTR_GET_CONST(vswitch_, vector<string>) };
          inline vector<string> getVswitch() { DARABONBA_PTR_GET(vswitch_, vector<string>) };
          inline Network& setVswitch(const vector<string> & vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };
          inline Network& setVswitch(vector<string> && vswitch) { DARABONBA_PTR_SET_RVALUE(vswitch_, vswitch) };


        protected:
          // Whether the resource is created in the zone corresponding to the passed-in VSwitch parameter.
          // 
          // *   true: The resource is created in the zone corresponding to the passed-in VSwitch parameter.
          // *   false: The resource is created in any zone that has resources.
          shared_ptr<bool> enableENIMapping_ {};
          // Whether to create a public IP address.
          // 
          // Valid values:
          // 
          // *   false: false.
          // *   true: true.
          shared_ptr<bool> enableExternalIpAddress_ {};
          // The VSwitch array.
          shared_ptr<vector<string>> vswitch_ {};
        };

        virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && this->level_ == nullptr && this->network_ == nullptr && this->tags_ == nullptr; };
        // allocationSpec Field Functions 
        bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
        void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
        inline string getAllocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
        inline DeploymentPolicy& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline DeploymentPolicy& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const DeploymentPolicy::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, DeploymentPolicy::Network) };
        inline DeploymentPolicy::Network getNetwork() { DARABONBA_PTR_GET(network_, DeploymentPolicy::Network) };
        inline DeploymentPolicy& setNetwork(const DeploymentPolicy::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline DeploymentPolicy& setNetwork(DeploymentPolicy::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<DeploymentPolicy::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DeploymentPolicy::Tags>) };
        inline vector<DeploymentPolicy::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DeploymentPolicy::Tags>) };
        inline DeploymentPolicy& setTags(const vector<DeploymentPolicy::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DeploymentPolicy& setTags(vector<DeploymentPolicy::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The type of the resource. Only Dedicated is supported. You must enable a whitelist.
        shared_ptr<string> allocationSpec_ {};
        // The computing power level. The following disk categories are supported:
        // 
        // *   General
        // *   Performance
        // 
        // Default value: General
        shared_ptr<string> level_ {};
        // The network configuration information.
        shared_ptr<DeploymentPolicy::Network> network_ {};
        // The list of job tags.
        shared_ptr<vector<DeploymentPolicy::Tags>> tags_ {};
      };

      class DependencyPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DependencyPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(JobDependency, jobDependency_);
        };
        friend void from_json(const Darabonba::Json& j, DependencyPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(JobDependency, jobDependency_);
        };
        DependencyPolicy() = default ;
        DependencyPolicy(const DependencyPolicy &) = default ;
        DependencyPolicy(DependencyPolicy &&) = default ;
        DependencyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DependencyPolicy() = default ;
        DependencyPolicy& operator=(const DependencyPolicy &) = default ;
        DependencyPolicy& operator=(DependencyPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class JobDependency : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JobDependency& obj) { 
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, JobDependency& obj) { 
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          JobDependency() = default ;
          JobDependency(const JobDependency &) = default ;
          JobDependency(JobDependency &&) = default ;
          JobDependency(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~JobDependency() = default ;
          JobDependency& operator=(const JobDependency &) = default ;
          JobDependency& operator=(JobDependency &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->jobId_ == nullptr
        && this->type_ == nullptr; };
          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline JobDependency& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline JobDependency& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> jobId_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->jobDependency_ == nullptr; };
        // jobDependency Field Functions 
        bool hasJobDependency() const { return this->jobDependency_ != nullptr;};
        void deleteJobDependency() { this->jobDependency_ = nullptr;};
        inline const vector<DependencyPolicy::JobDependency> & getJobDependency() const { DARABONBA_PTR_GET_CONST(jobDependency_, vector<DependencyPolicy::JobDependency>) };
        inline vector<DependencyPolicy::JobDependency> getJobDependency() { DARABONBA_PTR_GET(jobDependency_, vector<DependencyPolicy::JobDependency>) };
        inline DependencyPolicy& setJobDependency(const vector<DependencyPolicy::JobDependency> & jobDependency) { DARABONBA_PTR_SET_VALUE(jobDependency_, jobDependency) };
        inline DependencyPolicy& setJobDependency(vector<DependencyPolicy::JobDependency> && jobDependency) { DARABONBA_PTR_SET_RVALUE(jobDependency_, jobDependency) };


      protected:
        shared_ptr<vector<DependencyPolicy::JobDependency>> jobDependency_ {};
      };

      virtual bool empty() const override { return this->appExtraInfo_ == nullptr
        && this->createTime_ == nullptr && this->dependencyPolicy_ == nullptr && this->deploymentPolicy_ == nullptr && this->endTime_ == nullptr && this->jobDescription_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobScheduler_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->tasks_ == nullptr; };
      // appExtraInfo Field Functions 
      bool hasAppExtraInfo() const { return this->appExtraInfo_ != nullptr;};
      void deleteAppExtraInfo() { this->appExtraInfo_ = nullptr;};
      inline string getAppExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(appExtraInfo_, "") };
      inline JobInfo& setAppExtraInfo(string appExtraInfo) { DARABONBA_PTR_SET_VALUE(appExtraInfo_, appExtraInfo) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dependencyPolicy Field Functions 
      bool hasDependencyPolicy() const { return this->dependencyPolicy_ != nullptr;};
      void deleteDependencyPolicy() { this->dependencyPolicy_ = nullptr;};
      inline const JobInfo::DependencyPolicy & getDependencyPolicy() const { DARABONBA_PTR_GET_CONST(dependencyPolicy_, JobInfo::DependencyPolicy) };
      inline JobInfo::DependencyPolicy getDependencyPolicy() { DARABONBA_PTR_GET(dependencyPolicy_, JobInfo::DependencyPolicy) };
      inline JobInfo& setDependencyPolicy(const JobInfo::DependencyPolicy & dependencyPolicy) { DARABONBA_PTR_SET_VALUE(dependencyPolicy_, dependencyPolicy) };
      inline JobInfo& setDependencyPolicy(JobInfo::DependencyPolicy && dependencyPolicy) { DARABONBA_PTR_SET_RVALUE(dependencyPolicy_, dependencyPolicy) };


      // deploymentPolicy Field Functions 
      bool hasDeploymentPolicy() const { return this->deploymentPolicy_ != nullptr;};
      void deleteDeploymentPolicy() { this->deploymentPolicy_ = nullptr;};
      inline const JobInfo::DeploymentPolicy & getDeploymentPolicy() const { DARABONBA_PTR_GET_CONST(deploymentPolicy_, JobInfo::DeploymentPolicy) };
      inline JobInfo::DeploymentPolicy getDeploymentPolicy() { DARABONBA_PTR_GET(deploymentPolicy_, JobInfo::DeploymentPolicy) };
      inline JobInfo& setDeploymentPolicy(const JobInfo::DeploymentPolicy & deploymentPolicy) { DARABONBA_PTR_SET_VALUE(deploymentPolicy_, deploymentPolicy) };
      inline JobInfo& setDeploymentPolicy(JobInfo::DeploymentPolicy && deploymentPolicy) { DARABONBA_PTR_SET_RVALUE(deploymentPolicy_, deploymentPolicy) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline JobInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // jobDescription Field Functions 
      bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
      void deleteJobDescription() { this->jobDescription_ = nullptr;};
      inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
      inline JobInfo& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


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


      // jobScheduler Field Functions 
      bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
      void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
      inline string getJobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
      inline JobInfo& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline JobInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<JobInfo::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<JobInfo::Tasks>) };
      inline vector<JobInfo::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<JobInfo::Tasks>) };
      inline JobInfo& setTasks(const vector<JobInfo::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline JobInfo& setTasks(vector<JobInfo::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    protected:
      // The additional information about the application.
      shared_ptr<string> appExtraInfo_ {};
      // The time when the job was submitted.
      shared_ptr<string> createTime_ {};
      shared_ptr<JobInfo::DependencyPolicy> dependencyPolicy_ {};
      // The resource deployment policy.
      shared_ptr<JobInfo::DeploymentPolicy> deploymentPolicy_ {};
      // The time when the job is complete.
      shared_ptr<string> endTime_ {};
      // The description of the job.
      shared_ptr<string> jobDescription_ {};
      // The ID of the job.
      shared_ptr<string> jobId_ {};
      // The job name.
      shared_ptr<string> jobName_ {};
      // The type of the job scheduler.
      shared_ptr<string> jobScheduler_ {};
      // The time when the job started.
      shared_ptr<string> startTime_ {};
      // The job status. Valid values:
      // 
      // *   Pending: The job is being queued.
      // *   Initing: The job is being initialized.
      // *   Succeed: The job is successfully run.
      // *   Failed: The job failed to run.
      // *   Running: The job is running.
      // *   Exception: scheduling exception
      // *   Retrying: The job is being retried.
      // *   Expired: The job timed out.
      // *   Deleted: The job is deleted.
      // *   Suspended: job hibernation
      // *   Restarting: The job is being restarted.
      shared_ptr<string> status_ {};
      // The list of tasks. Only one task is supported.
      shared_ptr<vector<JobInfo::Tasks>> tasks_ {};
    };

    virtual bool empty() const override { return this->jobInfo_ == nullptr
        && this->requestId_ == nullptr; };
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


  protected:
    // The job details.
    shared_ptr<GetJobResponseBody::JobInfo> jobInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
