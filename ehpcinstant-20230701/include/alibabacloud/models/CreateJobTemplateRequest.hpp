// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBTEMPLATEREQUEST_HPP_
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
  class CreateJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplateConfig, jobTemplateConfig_);
      DARABONBA_PTR_TO_JSON(JobTemplateDescription, jobTemplateDescription_);
      DARABONBA_PTR_TO_JSON(JobTemplateName, jobTemplateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplateConfig, jobTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(JobTemplateDescription, jobTemplateDescription_);
      DARABONBA_PTR_FROM_JSON(JobTemplateName, jobTemplateName_);
    };
    CreateJobTemplateRequest() = default ;
    CreateJobTemplateRequest(const CreateJobTemplateRequest &) = default ;
    CreateJobTemplateRequest(CreateJobTemplateRequest &&) = default ;
    CreateJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobTemplateRequest() = default ;
    CreateJobTemplateRequest& operator=(const CreateJobTemplateRequest &) = default ;
    CreateJobTemplateRequest& operator=(CreateJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobTemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobTemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentPolicy, deploymentPolicy_);
        DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
        DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      };
      friend void from_json(const Darabonba::Json& j, JobTemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentPolicy, deploymentPolicy_);
        DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      };
      JobTemplateConfig() = default ;
      JobTemplateConfig(const JobTemplateConfig &) = default ;
      JobTemplateConfig(JobTemplateConfig &&) = default ;
      JobTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobTemplateConfig() = default ;
      JobTemplateConfig& operator=(const JobTemplateConfig &) = default ;
      JobTemplateConfig& operator=(JobTemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutorPolicy, executorPolicy_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
          DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
        };
        friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutorPolicy, executorPolicy_);
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
            DARABONBA_PTR_TO_JSON(VolumeMount, volumeMount_);
          };
          friend void from_json(const Darabonba::Json& j, TaskSpec& obj) { 
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
            DARABONBA_PTR_FROM_JSON(RetryPolicy, retryPolicy_);
            DARABONBA_PTR_FROM_JSON(TaskExecutor, taskExecutor_);
            DARABONBA_PTR_FROM_JSON(VolumeMount, volumeMount_);
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
          class VolumeMount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VolumeMount& obj) { 
              DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
              DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
              DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
              DARABONBA_PTR_TO_JSON(VolumeDriver, volumeDriver_);
            };
            friend void from_json(const Darabonba::Json& j, VolumeMount& obj) { 
              DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
              DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
              DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
              DARABONBA_PTR_FROM_JSON(VolumeDriver, volumeDriver_);
            };
            VolumeMount() = default ;
            VolumeMount(const VolumeMount &) = default ;
            VolumeMount(VolumeMount &&) = default ;
            VolumeMount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VolumeMount() = default ;
            VolumeMount& operator=(const VolumeMount &) = default ;
            VolumeMount& operator=(VolumeMount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->mountOptions_ == nullptr
        && this->mountPath_ == nullptr && this->readOnly_ == nullptr && this->volumeDriver_ == nullptr; };
            // mountOptions Field Functions 
            bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
            void deleteMountOptions() { this->mountOptions_ = nullptr;};
            inline string getMountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
            inline VolumeMount& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


            // mountPath Field Functions 
            bool hasMountPath() const { return this->mountPath_ != nullptr;};
            void deleteMountPath() { this->mountPath_ = nullptr;};
            inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
            inline VolumeMount& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


            // readOnly Field Functions 
            bool hasReadOnly() const { return this->readOnly_ != nullptr;};
            void deleteReadOnly() { this->readOnly_ = nullptr;};
            inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
            inline VolumeMount& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


            // volumeDriver Field Functions 
            bool hasVolumeDriver() const { return this->volumeDriver_ != nullptr;};
            void deleteVolumeDriver() { this->volumeDriver_ = nullptr;};
            inline string getVolumeDriver() const { DARABONBA_PTR_GET_DEFAULT(volumeDriver_, "") };
            inline VolumeMount& setVolumeDriver(string volumeDriver) { DARABONBA_PTR_SET_VALUE(volumeDriver_, volumeDriver) };


          protected:
            // The list of mount parameters for the data volume. The parameters are in key-value pair format and passed in JSON.
            shared_ptr<string> mountOptions_ {};
            // The directory where the data volume is mounted to the task.
            shared_ptr<string> mountPath_ {};
            // Specifies whether the data volume is read-only.
            shared_ptr<bool> readOnly_ {};
            // The type of the data volume.
            shared_ptr<string> volumeDriver_ {};
          };

          class TaskExecutor : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TaskExecutor& obj) { 
              DARABONBA_PTR_TO_JSON(Container, container_);
              DARABONBA_PTR_TO_JSON(VM, VM_);
            };
            friend void from_json(const Darabonba::Json& j, TaskExecutor& obj) { 
              DARABONBA_PTR_FROM_JSON(Container, container_);
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
                DARABONBA_PTR_TO_JSON(AppId, appId_);
                DARABONBA_PTR_TO_JSON(Image, image_);
                DARABONBA_PTR_TO_JSON(Password, password_);
                DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
                DARABONBA_PTR_TO_JSON(Script, script_);
              };
              friend void from_json(const Darabonba::Json& j, VM& obj) { 
                DARABONBA_PTR_FROM_JSON(AppId, appId_);
                DARABONBA_PTR_FROM_JSON(Image, image_);
                DARABONBA_PTR_FROM_JSON(Password, password_);
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
              virtual bool empty() const override { return this->appId_ == nullptr
        && this->image_ == nullptr && this->password_ == nullptr && this->prologScript_ == nullptr && this->script_ == nullptr; };
              // appId Field Functions 
              bool hasAppId() const { return this->appId_ != nullptr;};
              void deleteAppId() { this->appId_ = nullptr;};
              inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
              inline VM& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


              // image Field Functions 
              bool hasImage() const { return this->image_ != nullptr;};
              void deleteImage() { this->image_ = nullptr;};
              inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
              inline VM& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


              // password Field Functions 
              bool hasPassword() const { return this->password_ != nullptr;};
              void deletePassword() { this->password_ = nullptr;};
              inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
              inline VM& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


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
              // The ID of the virtual machine application.
              shared_ptr<string> appId_ {};
              // The image ID.
              shared_ptr<string> image_ {};
              // The logon password for the virtual machine environment.
              shared_ptr<string> password_ {};
              // The prolog script. The script must be Base64-encoded.
              shared_ptr<string> prologScript_ {};
              // The job execution script. The script must be Base64-encoded.
              shared_ptr<string> script_ {};
            };

            class Container : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Container& obj) { 
                DARABONBA_PTR_TO_JSON(AppId, appId_);
                DARABONBA_PTR_TO_JSON(Arg, arg_);
                DARABONBA_PTR_TO_JSON(Command, command_);
                DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
                DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
                DARABONBA_PTR_TO_JSON(Image, image_);
                DARABONBA_PTR_TO_JSON(ImageRegistryOptions, imageRegistryOptions_);
                DARABONBA_PTR_TO_JSON(Privileged, privileged_);
                DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
              };
              friend void from_json(const Darabonba::Json& j, Container& obj) { 
                DARABONBA_PTR_FROM_JSON(AppId, appId_);
                DARABONBA_PTR_FROM_JSON(Arg, arg_);
                DARABONBA_PTR_FROM_JSON(Command, command_);
                DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
                DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
                DARABONBA_PTR_FROM_JSON(Image, image_);
                DARABONBA_PTR_FROM_JSON(ImageRegistryOptions, imageRegistryOptions_);
                DARABONBA_PTR_FROM_JSON(Privileged, privileged_);
                DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
              };
              Container() = default ;
              Container(const Container &) = default ;
              Container(Container &&) = default ;
              Container(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Container() = default ;
              Container& operator=(const Container &) = default ;
              Container& operator=(Container &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class EnvironmentVars : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const EnvironmentVars& obj) { 
                  DARABONBA_PTR_TO_JSON(Name, name_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, EnvironmentVars& obj) { 
                  DARABONBA_PTR_FROM_JSON(Name, name_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                EnvironmentVars() = default ;
                EnvironmentVars(const EnvironmentVars &) = default ;
                EnvironmentVars(EnvironmentVars &&) = default ;
                EnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~EnvironmentVars() = default ;
                EnvironmentVars& operator=(const EnvironmentVars &) = default ;
                EnvironmentVars& operator=(EnvironmentVars &&) = default ;
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
                inline EnvironmentVars& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline EnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // The name of the environment variable.
                shared_ptr<string> name_ {};
                // The value of the environment variable.
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->appId_ == nullptr
        && this->arg_ == nullptr && this->command_ == nullptr && this->environmentVars_ == nullptr && this->gpuDriverVersion_ == nullptr && this->image_ == nullptr
        && this->imageRegistryOptions_ == nullptr && this->privileged_ == nullptr && this->workingDir_ == nullptr; };
              // appId Field Functions 
              bool hasAppId() const { return this->appId_ != nullptr;};
              void deleteAppId() { this->appId_ = nullptr;};
              inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
              inline Container& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


              // arg Field Functions 
              bool hasArg() const { return this->arg_ != nullptr;};
              void deleteArg() { this->arg_ = nullptr;};
              inline const vector<string> & getArg() const { DARABONBA_PTR_GET_CONST(arg_, vector<string>) };
              inline vector<string> getArg() { DARABONBA_PTR_GET(arg_, vector<string>) };
              inline Container& setArg(const vector<string> & arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };
              inline Container& setArg(vector<string> && arg) { DARABONBA_PTR_SET_RVALUE(arg_, arg) };


              // command Field Functions 
              bool hasCommand() const { return this->command_ != nullptr;};
              void deleteCommand() { this->command_ = nullptr;};
              inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
              inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
              inline Container& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
              inline Container& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


              // environmentVars Field Functions 
              bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
              void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
              inline const vector<Container::EnvironmentVars> & getEnvironmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Container::EnvironmentVars>) };
              inline vector<Container::EnvironmentVars> getEnvironmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Container::EnvironmentVars>) };
              inline Container& setEnvironmentVars(const vector<Container::EnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
              inline Container& setEnvironmentVars(vector<Container::EnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


              // gpuDriverVersion Field Functions 
              bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
              void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
              inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
              inline Container& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


              // image Field Functions 
              bool hasImage() const { return this->image_ != nullptr;};
              void deleteImage() { this->image_ = nullptr;};
              inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
              inline Container& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


              // imageRegistryOptions Field Functions 
              bool hasImageRegistryOptions() const { return this->imageRegistryOptions_ != nullptr;};
              void deleteImageRegistryOptions() { this->imageRegistryOptions_ = nullptr;};
              inline string getImageRegistryOptions() const { DARABONBA_PTR_GET_DEFAULT(imageRegistryOptions_, "") };
              inline Container& setImageRegistryOptions(string imageRegistryOptions) { DARABONBA_PTR_SET_VALUE(imageRegistryOptions_, imageRegistryOptions) };


              // privileged Field Functions 
              bool hasPrivileged() const { return this->privileged_ != nullptr;};
              void deletePrivileged() { this->privileged_ = nullptr;};
              inline bool getPrivileged() const { DARABONBA_PTR_GET_DEFAULT(privileged_, false) };
              inline Container& setPrivileged(bool privileged) { DARABONBA_PTR_SET_VALUE(privileged_, privileged) };


              // workingDir Field Functions 
              bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
              void deleteWorkingDir() { this->workingDir_ = nullptr;};
              inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
              inline Container& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


            protected:
              // The ID of the container application.
              shared_ptr<string> appId_ {};
              // The arguments for the container startup commands.
              shared_ptr<vector<string>> arg_ {};
              // The list of startup commands for the container.
              shared_ptr<vector<string>> command_ {};
              // The environment variables of the container.
              shared_ptr<vector<Container::EnvironmentVars>> environmentVars_ {};
              // The GPU driver version.
              shared_ptr<string> gpuDriverVersion_ {};
              // The container image.
              shared_ptr<string> image_ {};
              // The list of mount parameters for the custom image registry. The parameters are in key-value pair format and passed in JSON.
              shared_ptr<string> imageRegistryOptions_ {};
              // Specifies whether the container runs in privileged mode. Default value: false.
              shared_ptr<bool> privileged_ {};
              // The working directory of the container.
              shared_ptr<string> workingDir_ {};
            };

            virtual bool empty() const override { return this->container_ == nullptr
        && this->VM_ == nullptr; };
            // container Field Functions 
            bool hasContainer() const { return this->container_ != nullptr;};
            void deleteContainer() { this->container_ = nullptr;};
            inline const TaskExecutor::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, TaskExecutor::Container) };
            inline TaskExecutor::Container getContainer() { DARABONBA_PTR_GET(container_, TaskExecutor::Container) };
            inline TaskExecutor& setContainer(const TaskExecutor::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
            inline TaskExecutor& setContainer(TaskExecutor::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


            // VM Field Functions 
            bool hasVM() const { return this->VM_ != nullptr;};
            void deleteVM() { this->VM_ = nullptr;};
            inline const TaskExecutor::VM & getVM() const { DARABONBA_PTR_GET_CONST(VM_, TaskExecutor::VM) };
            inline TaskExecutor::VM getVM() { DARABONBA_PTR_GET(VM_, TaskExecutor::VM) };
            inline TaskExecutor& setVM(const TaskExecutor::VM & vM) { DARABONBA_PTR_SET_VALUE(VM_, vM) };
            inline TaskExecutor& setVM(TaskExecutor::VM && vM) { DARABONBA_PTR_SET_RVALUE(VM_, vM) };


          protected:
            // The container environment configuration.
            shared_ptr<TaskExecutor::Container> container_ {};
            // The virtual machine environment configuration.
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
              // The next action of the task. Valid values:
              // - Retry: Retries the task.
              // - Exit: Exits the task.
              shared_ptr<string> action_ {};
              // The exit code of the task. This code is used together with the Action parameter to form the retry rules for the job. Valid values: 0 to 255.
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
            // The retry rules.
            shared_ptr<vector<RetryPolicy::ExitCodeActions>> exitCodeActions_ {};
            // The number of retries.
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
              // The size of the cloud disk. Unit: GiB.
              shared_ptr<int32_t> size_ {};
              // The type of the cloud disk.
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
            inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
            inline Resource& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          protected:
            // The number of CPU cores in the runtime environment.
            shared_ptr<float> cores_ {};
            // The array of cloud disks.
            shared_ptr<vector<Resource::Disks>> disks_ {};
            // Specifies whether hyper-threading is enabled in the runtime environment.
            shared_ptr<bool> enableHT_ {};
            // The hostname prefix of the runtime environment.
            shared_ptr<string> hostNamePrefix_ {};
            // The instance types of the runtime environment.
            shared_ptr<vector<string>> instanceTypes_ {};
            // The memory size of the runtime environment. Unit: GiB.
            shared_ptr<float> memory_ {};
          };

          virtual bool empty() const override { return this->resource_ == nullptr
        && this->retryPolicy_ == nullptr && this->taskExecutor_ == nullptr && this->volumeMount_ == nullptr; };
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


          // volumeMount Field Functions 
          bool hasVolumeMount() const { return this->volumeMount_ != nullptr;};
          void deleteVolumeMount() { this->volumeMount_ = nullptr;};
          inline const vector<TaskSpec::VolumeMount> & getVolumeMount() const { DARABONBA_PTR_GET_CONST(volumeMount_, vector<TaskSpec::VolumeMount>) };
          inline vector<TaskSpec::VolumeMount> getVolumeMount() { DARABONBA_PTR_GET(volumeMount_, vector<TaskSpec::VolumeMount>) };
          inline TaskSpec& setVolumeMount(const vector<TaskSpec::VolumeMount> & volumeMount) { DARABONBA_PTR_SET_VALUE(volumeMount_, volumeMount) };
          inline TaskSpec& setVolumeMount(vector<TaskSpec::VolumeMount> && volumeMount) { DARABONBA_PTR_SET_RVALUE(volumeMount_, volumeMount) };


        protected:
          // The resource information of the runtime environment.
          shared_ptr<TaskSpec::Resource> resource_ {};
          // The retry policy of the task.
          shared_ptr<TaskSpec::RetryPolicy> retryPolicy_ {};
          // The execution configuration of the task.
          shared_ptr<vector<TaskSpec::TaskExecutor>> taskExecutor_ {};
          // The list of data volumes mounted to the task. A maximum of 10 data volumes are supported.
          shared_ptr<vector<TaskSpec::VolumeMount>> volumeMount_ {};
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
            // The start value of the array job index. Valid values: 0 to 4999.
            shared_ptr<int32_t> indexStart_ {};
            // The step size of the array job index.
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
          // The maximum number of nodes on which the job can run.
          shared_ptr<int32_t> maxCount_ {};
        };

        virtual bool empty() const override { return this->executorPolicy_ == nullptr
        && this->taskName_ == nullptr && this->taskSpec_ == nullptr && this->taskSustainable_ == nullptr; };
        // executorPolicy Field Functions 
        bool hasExecutorPolicy() const { return this->executorPolicy_ != nullptr;};
        void deleteExecutorPolicy() { this->executorPolicy_ = nullptr;};
        inline const Tasks::ExecutorPolicy & getExecutorPolicy() const { DARABONBA_PTR_GET_CONST(executorPolicy_, Tasks::ExecutorPolicy) };
        inline Tasks::ExecutorPolicy getExecutorPolicy() { DARABONBA_PTR_GET(executorPolicy_, Tasks::ExecutorPolicy) };
        inline Tasks& setExecutorPolicy(const Tasks::ExecutorPolicy & executorPolicy) { DARABONBA_PTR_SET_VALUE(executorPolicy_, executorPolicy) };
        inline Tasks& setExecutorPolicy(Tasks::ExecutorPolicy && executorPolicy) { DARABONBA_PTR_SET_RVALUE(executorPolicy_, executorPolicy) };


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
        // The name of the task.
        shared_ptr<string> taskName_ {};
        // The specification details of the task.
        shared_ptr<Tasks::TaskSpec> taskSpec_ {};
        // Specifies whether the job is a long-running job. Valid values:
        // - true: The job is a background service job.
        // - false: The job is a batch job.
        // Default value: false.
        shared_ptr<bool> taskSustainable_ {};
      };

      class SecurityPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
        };
        SecurityPolicy() = default ;
        SecurityPolicy(const SecurityPolicy &) = default ;
        SecurityPolicy(SecurityPolicy &&) = default ;
        SecurityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityPolicy() = default ;
        SecurityPolicy& operator=(const SecurityPolicy &) = default ;
        SecurityPolicy& operator=(SecurityPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecurityGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroup& obj) { 
            DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          };
          SecurityGroup() = default ;
          SecurityGroup(const SecurityGroup &) = default ;
          SecurityGroup(SecurityGroup &&) = default ;
          SecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroup() = default ;
          SecurityGroup& operator=(const SecurityGroup &) = default ;
          SecurityGroup& operator=(SecurityGroup &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroupIds_ == nullptr; };
          // securityGroupIds Field Functions 
          bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
          void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
          inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
          inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
          inline SecurityGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
          inline SecurityGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        protected:
          // The security group IDs.
          shared_ptr<vector<string>> securityGroupIds_ {};
        };

        virtual bool empty() const override { return this->securityGroup_ == nullptr; };
        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline const SecurityPolicy::SecurityGroup & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, SecurityPolicy::SecurityGroup) };
        inline SecurityPolicy::SecurityGroup getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, SecurityPolicy::SecurityGroup) };
        inline SecurityPolicy& setSecurityGroup(const SecurityPolicy::SecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
        inline SecurityPolicy& setSecurityGroup(SecurityPolicy::SecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


      protected:
        // The security group.
        shared_ptr<SecurityPolicy::SecurityGroup> securityGroup_ {};
      };

      class DeploymentPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Pool, pool_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Pool, pool_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
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
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the tag.
          // 
          // This parameter is required.
          shared_ptr<string> key_ {};
          // The value of the tag.
          shared_ptr<string> value_ {};
        };

        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
            DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
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
          virtual bool empty() const override { return this->enableExternalIpAddress_ == nullptr
        && this->vswitch_ == nullptr; };
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
          // Specifies whether to assign a public IP address to the job. Default value: false.
          shared_ptr<bool> enableExternalIpAddress_ {};
          // The vSwitches.
          shared_ptr<vector<string>> vswitch_ {};
        };

        virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && this->level_ == nullptr && this->network_ == nullptr && this->pool_ == nullptr && this->priority_ == nullptr && this->tags_ == nullptr; };
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


        // pool Field Functions 
        bool hasPool() const { return this->pool_ != nullptr;};
        void deletePool() { this->pool_ = nullptr;};
        inline string getPool() const { DARABONBA_PTR_GET_DEFAULT(pool_, "") };
        inline DeploymentPolicy& setPool(string pool) { DARABONBA_PTR_SET_VALUE(pool_, pool) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline DeploymentPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<DeploymentPolicy::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DeploymentPolicy::Tags>) };
        inline vector<DeploymentPolicy::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DeploymentPolicy::Tags>) };
        inline DeploymentPolicy& setTags(const vector<DeploymentPolicy::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DeploymentPolicy& setTags(vector<DeploymentPolicy::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The resource type.
        shared_ptr<string> allocationSpec_ {};
        // The computing power level. This parameter is valid only when the resource type is economy. Valid values:
        // - General: general-purpose.
        // - Performance: performance-enhanced.
        shared_ptr<string> level_ {};
        // The network configuration.
        shared_ptr<DeploymentPolicy::Network> network_ {};
        // The resource pool of the job.
        shared_ptr<string> pool_ {};
        // The priority of the job. A larger value indicates a higher scheduling priority for the job.
        shared_ptr<int32_t> priority_ {};
        // The tags of the job.
        shared_ptr<vector<DeploymentPolicy::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->deploymentPolicy_ == nullptr
        && this->jobDescription_ == nullptr && this->jobName_ == nullptr && this->jobScheduler_ == nullptr && this->securityPolicy_ == nullptr && this->tasks_ == nullptr; };
      // deploymentPolicy Field Functions 
      bool hasDeploymentPolicy() const { return this->deploymentPolicy_ != nullptr;};
      void deleteDeploymentPolicy() { this->deploymentPolicy_ = nullptr;};
      inline const JobTemplateConfig::DeploymentPolicy & getDeploymentPolicy() const { DARABONBA_PTR_GET_CONST(deploymentPolicy_, JobTemplateConfig::DeploymentPolicy) };
      inline JobTemplateConfig::DeploymentPolicy getDeploymentPolicy() { DARABONBA_PTR_GET(deploymentPolicy_, JobTemplateConfig::DeploymentPolicy) };
      inline JobTemplateConfig& setDeploymentPolicy(const JobTemplateConfig::DeploymentPolicy & deploymentPolicy) { DARABONBA_PTR_SET_VALUE(deploymentPolicy_, deploymentPolicy) };
      inline JobTemplateConfig& setDeploymentPolicy(JobTemplateConfig::DeploymentPolicy && deploymentPolicy) { DARABONBA_PTR_SET_RVALUE(deploymentPolicy_, deploymentPolicy) };


      // jobDescription Field Functions 
      bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
      void deleteJobDescription() { this->jobDescription_ = nullptr;};
      inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
      inline JobTemplateConfig& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline JobTemplateConfig& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobScheduler Field Functions 
      bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
      void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
      inline string getJobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
      inline JobTemplateConfig& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


      // securityPolicy Field Functions 
      bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
      void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
      inline const JobTemplateConfig::SecurityPolicy & getSecurityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, JobTemplateConfig::SecurityPolicy) };
      inline JobTemplateConfig::SecurityPolicy getSecurityPolicy() { DARABONBA_PTR_GET(securityPolicy_, JobTemplateConfig::SecurityPolicy) };
      inline JobTemplateConfig& setSecurityPolicy(const JobTemplateConfig::SecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
      inline JobTemplateConfig& setSecurityPolicy(JobTemplateConfig::SecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<JobTemplateConfig::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<JobTemplateConfig::Tasks>) };
      inline vector<JobTemplateConfig::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<JobTemplateConfig::Tasks>) };
      inline JobTemplateConfig& setTasks(const vector<JobTemplateConfig::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline JobTemplateConfig& setTasks(vector<JobTemplateConfig::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    protected:
      // The resource deployment policy.
      shared_ptr<JobTemplateConfig::DeploymentPolicy> deploymentPolicy_ {};
      // The description of the job.
      shared_ptr<string> jobDescription_ {};
      // The name of the job.
      shared_ptr<string> jobName_ {};
      shared_ptr<string> jobScheduler_ {};
      // The security policy.
      shared_ptr<JobTemplateConfig::SecurityPolicy> securityPolicy_ {};
      // The list of tasks. A maximum of 5 tasks are supported.
      shared_ptr<vector<JobTemplateConfig::Tasks>> tasks_ {};
    };

    virtual bool empty() const override { return this->jobTemplateConfig_ == nullptr
        && this->jobTemplateDescription_ == nullptr && this->jobTemplateName_ == nullptr; };
    // jobTemplateConfig Field Functions 
    bool hasJobTemplateConfig() const { return this->jobTemplateConfig_ != nullptr;};
    void deleteJobTemplateConfig() { this->jobTemplateConfig_ = nullptr;};
    inline const CreateJobTemplateRequest::JobTemplateConfig & getJobTemplateConfig() const { DARABONBA_PTR_GET_CONST(jobTemplateConfig_, CreateJobTemplateRequest::JobTemplateConfig) };
    inline CreateJobTemplateRequest::JobTemplateConfig getJobTemplateConfig() { DARABONBA_PTR_GET(jobTemplateConfig_, CreateJobTemplateRequest::JobTemplateConfig) };
    inline CreateJobTemplateRequest& setJobTemplateConfig(const CreateJobTemplateRequest::JobTemplateConfig & jobTemplateConfig) { DARABONBA_PTR_SET_VALUE(jobTemplateConfig_, jobTemplateConfig) };
    inline CreateJobTemplateRequest& setJobTemplateConfig(CreateJobTemplateRequest::JobTemplateConfig && jobTemplateConfig) { DARABONBA_PTR_SET_RVALUE(jobTemplateConfig_, jobTemplateConfig) };


    // jobTemplateDescription Field Functions 
    bool hasJobTemplateDescription() const { return this->jobTemplateDescription_ != nullptr;};
    void deleteJobTemplateDescription() { this->jobTemplateDescription_ = nullptr;};
    inline string getJobTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateDescription_, "") };
    inline CreateJobTemplateRequest& setJobTemplateDescription(string jobTemplateDescription) { DARABONBA_PTR_SET_VALUE(jobTemplateDescription_, jobTemplateDescription) };


    // jobTemplateName Field Functions 
    bool hasJobTemplateName() const { return this->jobTemplateName_ != nullptr;};
    void deleteJobTemplateName() { this->jobTemplateName_ = nullptr;};
    inline string getJobTemplateName() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateName_, "") };
    inline CreateJobTemplateRequest& setJobTemplateName(string jobTemplateName) { DARABONBA_PTR_SET_VALUE(jobTemplateName_, jobTemplateName) };


  protected:
    // The configuration of the template.
    shared_ptr<CreateJobTemplateRequest::JobTemplateConfig> jobTemplateConfig_ {};
    // The description of the template.
    shared_ptr<string> jobTemplateDescription_ {};
    // The name of the template.
    // 
    // This parameter is required.
    shared_ptr<string> jobTemplateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
