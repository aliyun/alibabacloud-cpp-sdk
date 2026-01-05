// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTaskInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUpstreamTaskInstancesResponseBody() = default ;
    ListUpstreamTaskInstancesResponseBody(const ListUpstreamTaskInstancesResponseBody &) = default ;
    ListUpstreamTaskInstancesResponseBody(ListUpstreamTaskInstancesResponseBody &&) = default ;
    ListUpstreamTaskInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTaskInstancesResponseBody() = default ;
    ListUpstreamTaskInstancesResponseBody& operator=(const ListUpstreamTaskInstancesResponseBody &) = default ;
    ListUpstreamTaskInstancesResponseBody& operator=(ListUpstreamTaskInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UpstreamTaskInstances, upstreamTaskInstances_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UpstreamTaskInstances, upstreamTaskInstances_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpstreamTaskInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpstreamTaskInstances& obj) { 
          DARABONBA_PTR_TO_JSON(DependencyType, dependencyType_);
          DARABONBA_PTR_TO_JSON(TaskInstance, taskInstance_);
        };
        friend void from_json(const Darabonba::Json& j, UpstreamTaskInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(DependencyType, dependencyType_);
          DARABONBA_PTR_FROM_JSON(TaskInstance, taskInstance_);
        };
        UpstreamTaskInstances() = default ;
        UpstreamTaskInstances(const UpstreamTaskInstances &) = default ;
        UpstreamTaskInstances(UpstreamTaskInstances &&) = default ;
        UpstreamTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpstreamTaskInstances() = default ;
        UpstreamTaskInstances& operator=(const UpstreamTaskInstances &) = default ;
        UpstreamTaskInstances& operator=(UpstreamTaskInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskInstance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskInstance& obj) { 
            DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
            DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
            DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_TO_JSON(Owner, owner_);
            DARABONBA_PTR_TO_JSON(PeriodNumber, periodNumber_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_TO_JSON(RunNumber, runNumber_);
            DARABONBA_PTR_TO_JSON(Runtime, runtime_);
            DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
            DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(TaskName, taskName_);
            DARABONBA_PTR_TO_JSON(TaskType, taskType_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
            DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
            DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
            DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
            DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
            DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
          };
          friend void from_json(const Darabonba::Json& j, TaskInstance& obj) { 
            DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
            DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
            DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_FROM_JSON(Owner, owner_);
            DARABONBA_PTR_FROM_JSON(PeriodNumber, periodNumber_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_FROM_JSON(RunNumber, runNumber_);
            DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
            DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
            DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
            DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
            DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
            DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
            DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
            DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
            DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
          };
          TaskInstance() = default ;
          TaskInstance(const TaskInstance &) = default ;
          TaskInstance(TaskInstance &&) = default ;
          TaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskInstance() = default ;
          TaskInstance& operator=(const TaskInstance &) = default ;
          TaskInstance& operator=(TaskInstance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuntimeResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
              DARABONBA_PTR_TO_JSON(Cu, cu_);
              DARABONBA_PTR_TO_JSON(Image, image_);
              DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
              DARABONBA_PTR_FROM_JSON(Cu, cu_);
              DARABONBA_PTR_FROM_JSON(Image, image_);
              DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
            };
            RuntimeResource() = default ;
            RuntimeResource(const RuntimeResource &) = default ;
            RuntimeResource(RuntimeResource &&) = default ;
            RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuntimeResource() = default ;
            RuntimeResource& operator=(const RuntimeResource &) = default ;
            RuntimeResource& operator=(RuntimeResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cu_ == nullptr
        && this->image_ == nullptr && this->resourceGroupId_ == nullptr; };
            // cu Field Functions 
            bool hasCu() const { return this->cu_ != nullptr;};
            void deleteCu() { this->cu_ = nullptr;};
            inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
            inline RuntimeResource& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


            // image Field Functions 
            bool hasImage() const { return this->image_ != nullptr;};
            void deleteImage() { this->image_ = nullptr;};
            inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
            inline RuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


            // resourceGroupId Field Functions 
            bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
            void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
            inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
            inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          protected:
            // The default number of compute units (CUs) configured for task running.
            shared_ptr<string> cu_ {};
            // The ID of the image configured for task running.
            shared_ptr<string> image_ {};
            // The ID of the resource group for scheduling configured for task running.
            shared_ptr<string> resourceGroupId_ {};
          };

          class Runtime : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
              DARABONBA_PTR_TO_JSON(Gateway, gateway_);
              DARABONBA_PTR_TO_JSON(ProcessId, processId_);
            };
            friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
              DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
              DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
            };
            Runtime() = default ;
            Runtime(const Runtime &) = default ;
            Runtime(Runtime &&) = default ;
            Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Runtime() = default ;
            Runtime& operator=(const Runtime &) = default ;
            Runtime& operator=(Runtime &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->gateway_ == nullptr
        && this->processId_ == nullptr; };
            // gateway Field Functions 
            bool hasGateway() const { return this->gateway_ != nullptr;};
            void deleteGateway() { this->gateway_ = nullptr;};
            inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
            inline Runtime& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


            // processId Field Functions 
            bool hasProcessId() const { return this->processId_ != nullptr;};
            void deleteProcessId() { this->processId_ = nullptr;};
            inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
            inline Runtime& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


          protected:
            // The host for running.
            shared_ptr<string> gateway_ {};
            // The instance run ID.
            shared_ptr<string> processId_ {};
          };

          class DataSource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            DataSource() = default ;
            DataSource(const DataSource &) = default ;
            DataSource(DataSource &&) = default ;
            DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataSource() = default ;
            DataSource& operator=(const DataSource &) = default ;
            DataSource& operator=(DataSource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The name of the data source.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->bizdate_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->finishedTime_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr
        && this->owner_ == nullptr && this->periodNumber_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr && this->rerunMode_ == nullptr
        && this->runNumber_ == nullptr && this->runtime_ == nullptr && this->runtimeResource_ == nullptr && this->startedTime_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->timeout_ == nullptr && this->triggerRecurrence_ == nullptr
        && this->triggerTime_ == nullptr && this->triggerType_ == nullptr && this->workflowId_ == nullptr && this->workflowInstanceId_ == nullptr && this->workflowInstanceType_ == nullptr
        && this->workflowName_ == nullptr; };
          // baselineId Field Functions 
          bool hasBaselineId() const { return this->baselineId_ != nullptr;};
          void deleteBaselineId() { this->baselineId_ = nullptr;};
          inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
          inline TaskInstance& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


          // bizdate Field Functions 
          bool hasBizdate() const { return this->bizdate_ != nullptr;};
          void deleteBizdate() { this->bizdate_ = nullptr;};
          inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
          inline TaskInstance& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline TaskInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // createUser Field Functions 
          bool hasCreateUser() const { return this->createUser_ != nullptr;};
          void deleteCreateUser() { this->createUser_ = nullptr;};
          inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
          inline TaskInstance& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


          // dataSource Field Functions 
          bool hasDataSource() const { return this->dataSource_ != nullptr;};
          void deleteDataSource() { this->dataSource_ = nullptr;};
          inline const TaskInstance::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, TaskInstance::DataSource) };
          inline TaskInstance::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, TaskInstance::DataSource) };
          inline TaskInstance& setDataSource(const TaskInstance::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
          inline TaskInstance& setDataSource(TaskInstance::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TaskInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline TaskInstance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // finishedTime Field Functions 
          bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
          void deleteFinishedTime() { this->finishedTime_ = nullptr;};
          inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
          inline TaskInstance& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline TaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline TaskInstance& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // modifyUser Field Functions 
          bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
          void deleteModifyUser() { this->modifyUser_ = nullptr;};
          inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
          inline TaskInstance& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


          // owner Field Functions 
          bool hasOwner() const { return this->owner_ != nullptr;};
          void deleteOwner() { this->owner_ = nullptr;};
          inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
          inline TaskInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


          // periodNumber Field Functions 
          bool hasPeriodNumber() const { return this->periodNumber_ != nullptr;};
          void deletePeriodNumber() { this->periodNumber_ = nullptr;};
          inline int32_t getPeriodNumber() const { DARABONBA_PTR_GET_DEFAULT(periodNumber_, 0) };
          inline TaskInstance& setPeriodNumber(int32_t periodNumber) { DARABONBA_PTR_SET_VALUE(periodNumber_, periodNumber) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline TaskInstance& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline TaskInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // rerunMode Field Functions 
          bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
          void deleteRerunMode() { this->rerunMode_ = nullptr;};
          inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
          inline TaskInstance& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


          // runNumber Field Functions 
          bool hasRunNumber() const { return this->runNumber_ != nullptr;};
          void deleteRunNumber() { this->runNumber_ = nullptr;};
          inline int32_t getRunNumber() const { DARABONBA_PTR_GET_DEFAULT(runNumber_, 0) };
          inline TaskInstance& setRunNumber(int32_t runNumber) { DARABONBA_PTR_SET_VALUE(runNumber_, runNumber) };


          // runtime Field Functions 
          bool hasRuntime() const { return this->runtime_ != nullptr;};
          void deleteRuntime() { this->runtime_ = nullptr;};
          inline const TaskInstance::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, TaskInstance::Runtime) };
          inline TaskInstance::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, TaskInstance::Runtime) };
          inline TaskInstance& setRuntime(const TaskInstance::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
          inline TaskInstance& setRuntime(TaskInstance::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


          // runtimeResource Field Functions 
          bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
          void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
          inline const TaskInstance::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, TaskInstance::RuntimeResource) };
          inline TaskInstance::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, TaskInstance::RuntimeResource) };
          inline TaskInstance& setRuntimeResource(const TaskInstance::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
          inline TaskInstance& setRuntimeResource(TaskInstance::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


          // startedTime Field Functions 
          bool hasStartedTime() const { return this->startedTime_ != nullptr;};
          void deleteStartedTime() { this->startedTime_ = nullptr;};
          inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
          inline TaskInstance& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline TaskInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline TaskInstance& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // taskName Field Functions 
          bool hasTaskName() const { return this->taskName_ != nullptr;};
          void deleteTaskName() { this->taskName_ = nullptr;};
          inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
          inline TaskInstance& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


          // taskType Field Functions 
          bool hasTaskType() const { return this->taskType_ != nullptr;};
          void deleteTaskType() { this->taskType_ = nullptr;};
          inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
          inline TaskInstance& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline TaskInstance& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // triggerRecurrence Field Functions 
          bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
          void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
          inline string getTriggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
          inline TaskInstance& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


          // triggerTime Field Functions 
          bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
          void deleteTriggerTime() { this->triggerTime_ = nullptr;};
          inline int64_t getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
          inline TaskInstance& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


          // triggerType Field Functions 
          bool hasTriggerType() const { return this->triggerType_ != nullptr;};
          void deleteTriggerType() { this->triggerType_ = nullptr;};
          inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
          inline TaskInstance& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


          // workflowId Field Functions 
          bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
          void deleteWorkflowId() { this->workflowId_ = nullptr;};
          inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
          inline TaskInstance& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


          // workflowInstanceId Field Functions 
          bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
          void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
          inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
          inline TaskInstance& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


          // workflowInstanceType Field Functions 
          bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
          void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
          inline string getWorkflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
          inline TaskInstance& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


          // workflowName Field Functions 
          bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
          void deleteWorkflowName() { this->workflowName_ = nullptr;};
          inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
          inline TaskInstance& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


        protected:
          // The baseline ID.
          shared_ptr<int64_t> baselineId_ {};
          // The data timestamp.
          shared_ptr<int64_t> bizdate_ {};
          // The creation time.
          shared_ptr<int64_t> createTime_ {};
          // The account ID of the creator.
          shared_ptr<string> createUser_ {};
          // The information about the associated data source.
          shared_ptr<TaskInstance::DataSource> dataSource_ {};
          // The description.
          shared_ptr<string> description_ {};
          // The environment in which the data source is used. Valid values:
          // 
          // *   Dev
          // *   Prod
          shared_ptr<string> envType_ {};
          // The time when the instance finished running.
          shared_ptr<int64_t> finishedTime_ {};
          // The instance ID.
          shared_ptr<int64_t> id_ {};
          // The modification time.
          shared_ptr<int64_t> modifyTime_ {};
          // The account ID of the modifier.
          shared_ptr<string> modifyUser_ {};
          // The account ID of the task owner.
          shared_ptr<string> owner_ {};
          // The sequence number of the cycle. This parameter indicates the cycle of the task instance on the current day.
          shared_ptr<int32_t> periodNumber_ {};
          // The priority of the task. Minimum value: 1. Maximum value: 8. A larger value indicates a higher priority. Default value: 1.
          shared_ptr<int32_t> priority_ {};
          // The workspace ID.
          shared_ptr<int64_t> projectId_ {};
          // The rerun mode.
          shared_ptr<string> rerunMode_ {};
          // The number of times the instance is run. By default, the value starts from 1.
          shared_ptr<int32_t> runNumber_ {};
          // The runtime information about the instance.
          shared_ptr<TaskInstance::Runtime> runtime_ {};
          // The configurations of the runtime environment, such as the resource group information.
          shared_ptr<TaskInstance::RuntimeResource> runtimeResource_ {};
          // The time when the instance started to run.
          shared_ptr<int64_t> startedTime_ {};
          // The status of the instance. Valid values:
          // 
          // *   NotRun: The instance is not run.
          // *   Running: The instance is running.
          // *   WaitTime: The instance is waiting for the scheduling time to arrive.
          // *   CheckingCondition: Branch conditions are being checked for the instance.
          // *   WaitResource: The instance is waiting for resources.
          // *   Failure: The instance fails to be run.
          // *   Success: The instance is successfully run.
          // *   Checking: Data quality is being checked for the instance.
          // *   WaitTrigger: The instance is waiting to be triggered by external scheduling systems.
          shared_ptr<string> status_ {};
          // The ID of the task for which the instance is generated.
          shared_ptr<int64_t> taskId_ {};
          // The name of the task for which the instance is generated.
          shared_ptr<string> taskName_ {};
          // The type of the task for which the instance is generated.
          shared_ptr<string> taskType_ {};
          // The timeout period of task running. Unit: seconds.
          // 
          // Note: The value of this parameter is rounded up by hour.
          shared_ptr<int32_t> timeout_ {};
          // The running mode of the instance after it is triggered. This parameter takes effect only if the TriggerType parameter is set to Scheduler. Valid values:
          // 
          // *   Pause
          // *   Skip
          // *   Normal
          shared_ptr<string> triggerRecurrence_ {};
          // The scheduling time.
          shared_ptr<int64_t> triggerTime_ {};
          // The trigger type. Valid values:
          // 
          // *   Scheduler: scheduling cycle-based trigger
          // *   Manual: manual trigger
          shared_ptr<string> triggerType_ {};
          // The ID of the workflow to which the instance belongs.
          shared_ptr<int64_t> workflowId_ {};
          // The workflow instance ID.
          shared_ptr<int64_t> workflowInstanceId_ {};
          // The type of the workflow instance. Valid values:
          // 
          // *   Normal
          // *   Manual
          // *   SmokeTest
          // *   SupplementData
          // *   ManualWorkflow
          shared_ptr<string> workflowInstanceType_ {};
          // The name of the workflow to which the instance belongs.
          shared_ptr<string> workflowName_ {};
        };

        virtual bool empty() const override { return this->dependencyType_ == nullptr
        && this->taskInstance_ == nullptr; };
        // dependencyType Field Functions 
        bool hasDependencyType() const { return this->dependencyType_ != nullptr;};
        void deleteDependencyType() { this->dependencyType_ = nullptr;};
        inline string getDependencyType() const { DARABONBA_PTR_GET_DEFAULT(dependencyType_, "") };
        inline UpstreamTaskInstances& setDependencyType(string dependencyType) { DARABONBA_PTR_SET_VALUE(dependencyType_, dependencyType) };


        // taskInstance Field Functions 
        bool hasTaskInstance() const { return this->taskInstance_ != nullptr;};
        void deleteTaskInstance() { this->taskInstance_ = nullptr;};
        inline const UpstreamTaskInstances::TaskInstance & getTaskInstance() const { DARABONBA_PTR_GET_CONST(taskInstance_, UpstreamTaskInstances::TaskInstance) };
        inline UpstreamTaskInstances::TaskInstance getTaskInstance() { DARABONBA_PTR_GET(taskInstance_, UpstreamTaskInstances::TaskInstance) };
        inline UpstreamTaskInstances& setTaskInstance(const UpstreamTaskInstances::TaskInstance & taskInstance) { DARABONBA_PTR_SET_VALUE(taskInstance_, taskInstance) };
        inline UpstreamTaskInstances& setTaskInstance(UpstreamTaskInstances::TaskInstance && taskInstance) { DARABONBA_PTR_SET_RVALUE(taskInstance_, taskInstance) };


      protected:
        // The scheduling dependency type. Valid values:
        // 
        // *   Normal
        // *   CrossCycle
        shared_ptr<string> dependencyType_ {};
        // The information about a task instance.
        shared_ptr<UpstreamTaskInstances::TaskInstance> taskInstance_ {};
      };

      class TaskInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInstances& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(PeriodNumber, periodNumber_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_TO_JSON(RunNumber, runNumber_);
          DARABONBA_PTR_TO_JSON(Runtime, runtime_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StepType, stepType_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
          DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
          DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
          DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(PeriodNumber, periodNumber_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_FROM_JSON(RunNumber, runNumber_);
          DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StepType, stepType_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
          DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
          DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
          DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
          DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
        };
        TaskInstances() = default ;
        TaskInstances(const TaskInstances &) = default ;
        TaskInstances(TaskInstances &&) = default ;
        TaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInstances() = default ;
        TaskInstances& operator=(const TaskInstances &) = default ;
        TaskInstances& operator=(TaskInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuntimeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
            DARABONBA_PTR_TO_JSON(Cu, cu_);
            DARABONBA_PTR_TO_JSON(Image, image_);
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
            DARABONBA_PTR_FROM_JSON(Cu, cu_);
            DARABONBA_PTR_FROM_JSON(Image, image_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          };
          RuntimeResource() = default ;
          RuntimeResource(const RuntimeResource &) = default ;
          RuntimeResource(RuntimeResource &&) = default ;
          RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuntimeResource() = default ;
          RuntimeResource& operator=(const RuntimeResource &) = default ;
          RuntimeResource& operator=(RuntimeResource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cu_ == nullptr
        && this->image_ == nullptr && this->resourceGroupId_ == nullptr; };
          // cu Field Functions 
          bool hasCu() const { return this->cu_ != nullptr;};
          void deleteCu() { this->cu_ = nullptr;};
          inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
          inline RuntimeResource& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


          // image Field Functions 
          bool hasImage() const { return this->image_ != nullptr;};
          void deleteImage() { this->image_ = nullptr;};
          inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
          inline RuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        protected:
          // The default number of compute units (CUs) configured for task running.
          shared_ptr<string> cu_ {};
          // The ID of the image configured for task running.
          shared_ptr<string> image_ {};
          // The ID of the resource group for scheduling configured for task running.
          shared_ptr<string> resourceGroupId_ {};
        };

        class Runtime : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
            DARABONBA_PTR_TO_JSON(Gateway, gateway_);
            DARABONBA_PTR_TO_JSON(ProcessId, processId_);
          };
          friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
            DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
            DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
          };
          Runtime() = default ;
          Runtime(const Runtime &) = default ;
          Runtime(Runtime &&) = default ;
          Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Runtime() = default ;
          Runtime& operator=(const Runtime &) = default ;
          Runtime& operator=(Runtime &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gateway_ == nullptr
        && this->processId_ == nullptr; };
          // gateway Field Functions 
          bool hasGateway() const { return this->gateway_ != nullptr;};
          void deleteGateway() { this->gateway_ = nullptr;};
          inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
          inline Runtime& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


          // processId Field Functions 
          bool hasProcessId() const { return this->processId_ != nullptr;};
          void deleteProcessId() { this->processId_ = nullptr;};
          inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
          inline Runtime& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


        protected:
          // The host for running.
          shared_ptr<string> gateway_ {};
          // The instance run ID.
          shared_ptr<string> processId_ {};
        };

        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          DataSource() = default ;
          DataSource(const DataSource &) = default ;
          DataSource(DataSource &&) = default ;
          DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSource() = default ;
          DataSource& operator=(const DataSource &) = default ;
          DataSource& operator=(DataSource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the data source.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->bizdate_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->finishedTime_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr
        && this->owner_ == nullptr && this->periodNumber_ == nullptr && this->priority_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr
        && this->rerunMode_ == nullptr && this->runNumber_ == nullptr && this->runtime_ == nullptr && this->runtimeResource_ == nullptr && this->startedTime_ == nullptr
        && this->status_ == nullptr && this->stepType_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr
        && this->timeout_ == nullptr && this->triggerRecurrence_ == nullptr && this->triggerTime_ == nullptr && this->triggerType_ == nullptr && this->workflowId_ == nullptr
        && this->workflowInstanceId_ == nullptr && this->workflowInstanceType_ == nullptr && this->workflowName_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline TaskInstances& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline TaskInstances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline TaskInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline TaskInstances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const TaskInstances::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, TaskInstances::DataSource) };
        inline TaskInstances::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, TaskInstances::DataSource) };
        inline TaskInstances& setDataSource(const TaskInstances::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline TaskInstances& setDataSource(TaskInstances::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TaskInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline TaskInstances& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
        inline TaskInstances& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline TaskInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline TaskInstances& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TaskInstances& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // periodNumber Field Functions 
        bool hasPeriodNumber() const { return this->periodNumber_ != nullptr;};
        void deletePeriodNumber() { this->periodNumber_ = nullptr;};
        inline int32_t getPeriodNumber() const { DARABONBA_PTR_GET_DEFAULT(periodNumber_, 0) };
        inline TaskInstances& setPeriodNumber(int32_t periodNumber) { DARABONBA_PTR_SET_VALUE(periodNumber_, periodNumber) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline TaskInstances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // projectEnv Field Functions 
        bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
        void deleteProjectEnv() { this->projectEnv_ = nullptr;};
        inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
        inline TaskInstances& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TaskInstances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // rerunMode Field Functions 
        bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
        void deleteRerunMode() { this->rerunMode_ = nullptr;};
        inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
        inline TaskInstances& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


        // runNumber Field Functions 
        bool hasRunNumber() const { return this->runNumber_ != nullptr;};
        void deleteRunNumber() { this->runNumber_ = nullptr;};
        inline int32_t getRunNumber() const { DARABONBA_PTR_GET_DEFAULT(runNumber_, 0) };
        inline TaskInstances& setRunNumber(int32_t runNumber) { DARABONBA_PTR_SET_VALUE(runNumber_, runNumber) };


        // runtime Field Functions 
        bool hasRuntime() const { return this->runtime_ != nullptr;};
        void deleteRuntime() { this->runtime_ = nullptr;};
        inline const TaskInstances::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, TaskInstances::Runtime) };
        inline TaskInstances::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, TaskInstances::Runtime) };
        inline TaskInstances& setRuntime(const TaskInstances::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
        inline TaskInstances& setRuntime(TaskInstances::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const TaskInstances::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, TaskInstances::RuntimeResource) };
        inline TaskInstances::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, TaskInstances::RuntimeResource) };
        inline TaskInstances& setRuntimeResource(const TaskInstances::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline TaskInstances& setRuntimeResource(TaskInstances::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // startedTime Field Functions 
        bool hasStartedTime() const { return this->startedTime_ != nullptr;};
        void deleteStartedTime() { this->startedTime_ = nullptr;};
        inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
        inline TaskInstances& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stepType Field Functions 
        bool hasStepType() const { return this->stepType_ != nullptr;};
        void deleteStepType() { this->stepType_ = nullptr;};
        inline string getStepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
        inline TaskInstances& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline TaskInstances& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline TaskInstances& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline TaskInstances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline TaskInstances& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // triggerRecurrence Field Functions 
        bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
        void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
        inline string getTriggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
        inline TaskInstances& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


        // triggerTime Field Functions 
        bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
        void deleteTriggerTime() { this->triggerTime_ = nullptr;};
        inline int64_t getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
        inline TaskInstances& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline TaskInstances& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline TaskInstances& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


        // workflowInstanceId Field Functions 
        bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
        void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
        inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
        inline TaskInstances& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


        // workflowInstanceType Field Functions 
        bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
        void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
        inline string getWorkflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
        inline TaskInstances& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


        // workflowName Field Functions 
        bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
        void deleteWorkflowName() { this->workflowName_ = nullptr;};
        inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
        inline TaskInstances& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The data timestamp.
        shared_ptr<int64_t> bizdate_ {};
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The account ID of the creator.
        shared_ptr<string> createUser_ {};
        // The information about the associated data source.
        shared_ptr<TaskInstances::DataSource> dataSource_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The environment of the workspace. Valid values:
        // 
        // *   Prod
        // *   Dev
        shared_ptr<string> envType_ {};
        // The time when the instance finished running.
        shared_ptr<int64_t> finishedTime_ {};
        // The instance ID.
        shared_ptr<int64_t> id_ {};
        // The modification time.
        shared_ptr<int64_t> modifyTime_ {};
        // The account ID of the modifier.
        shared_ptr<string> modifyUser_ {};
        // The account ID of the task owner.
        shared_ptr<string> owner_ {};
        // The sequence number of the period. Indicates which cycle of the day the task instance is in.
        shared_ptr<int32_t> periodNumber_ {};
        // The priority of the task. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
        shared_ptr<int32_t> priority_ {};
        // The environment of the workspace. Valid values:
        // 
        // *   Prod: production environment
        // *   Dev: development environment
        shared_ptr<string> projectEnv_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The rerun mode. Valid values:
        // 
        // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
        // *   FailureAllowed: The task can be rerun only after it fails to run.
        // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
        shared_ptr<string> rerunMode_ {};
        // The number of times the instance is run. By default, the value starts from 1.
        shared_ptr<int32_t> runNumber_ {};
        // The runtime information about the instance.
        shared_ptr<TaskInstances::Runtime> runtime_ {};
        // The configurations of the runtime environment, such as the resource group information.
        shared_ptr<TaskInstances::RuntimeResource> runtimeResource_ {};
        // The time when the instance started to run.
        shared_ptr<int64_t> startedTime_ {};
        // The status of the instance. Valid values:
        // 
        // *   NotRun: The instance is not run.
        // *   Running: The instance is running.
        // *   WaitTime: The instance is waiting for the scheduling time to arrive.
        // *   CheckingCondition: Branch conditions are being checked for the instance.
        // *   WaitResource: The instance is waiting for resources.
        // *   Failure: The instance fails to be run.
        // *   Success: The instance is successfully run.
        // *   Checking: Data quality is being checked for the instance.
        shared_ptr<string> status_ {};
        // The scheduling dependency type. Valid values:
        // 
        // *   Normal: same-cycle scheduling dependency
        // *   CrossCycle: cross-cycle scheduling dependency
        shared_ptr<string> stepType_ {};
        // The ID of the task for which the instance is generated.
        shared_ptr<int64_t> taskId_ {};
        // The name of the task for which the instance is generated.
        shared_ptr<string> taskName_ {};
        // The type of the task for which the instance is generated.
        shared_ptr<string> taskType_ {};
        // The timeout period of task running. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The running mode of the instance after it is triggered. This parameter takes effect only if the TriggerType parameter is set to Scheduler. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        shared_ptr<string> triggerRecurrence_ {};
        // The scheduling time.
        shared_ptr<int64_t> triggerTime_ {};
        // The trigger type. Valid values:
        // 
        // *   Scheduler: scheduling cycle-based trigger
        // *   Manual: manual trigger
        shared_ptr<string> triggerType_ {};
        // The ID of the workflow to which the instance belongs.
        shared_ptr<int64_t> workflowId_ {};
        // The workflow instance ID.
        shared_ptr<int64_t> workflowInstanceId_ {};
        // The type of the workflow instance. Valid values:
        // 
        // *   SmokeTest
        // *   SupplementData
        // *   Manual
        // *   ManualWorkflow
        // *   Normal
        // *   ManualFlow
        shared_ptr<string> workflowInstanceType_ {};
        // The name of the workflow to which the instance belongs.
        shared_ptr<string> workflowName_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->taskInstances_ == nullptr && this->totalCount_ == nullptr && this->upstreamTaskInstances_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // taskInstances Field Functions 
      bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
      void deleteTaskInstances() { this->taskInstances_ = nullptr;};
      inline const vector<PagingInfo::TaskInstances> & getTaskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<PagingInfo::TaskInstances>) };
      inline vector<PagingInfo::TaskInstances> getTaskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<PagingInfo::TaskInstances>) };
      inline PagingInfo& setTaskInstances(const vector<PagingInfo::TaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
      inline PagingInfo& setTaskInstances(vector<PagingInfo::TaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // upstreamTaskInstances Field Functions 
      bool hasUpstreamTaskInstances() const { return this->upstreamTaskInstances_ != nullptr;};
      void deleteUpstreamTaskInstances() { this->upstreamTaskInstances_ = nullptr;};
      inline const vector<PagingInfo::UpstreamTaskInstances> & getUpstreamTaskInstances() const { DARABONBA_PTR_GET_CONST(upstreamTaskInstances_, vector<PagingInfo::UpstreamTaskInstances>) };
      inline vector<PagingInfo::UpstreamTaskInstances> getUpstreamTaskInstances() { DARABONBA_PTR_GET(upstreamTaskInstances_, vector<PagingInfo::UpstreamTaskInstances>) };
      inline PagingInfo& setUpstreamTaskInstances(const vector<PagingInfo::UpstreamTaskInstances> & upstreamTaskInstances) { DARABONBA_PTR_SET_VALUE(upstreamTaskInstances_, upstreamTaskInstances) };
      inline PagingInfo& setUpstreamTaskInstances(vector<PagingInfo::UpstreamTaskInstances> && upstreamTaskInstances) { DARABONBA_PTR_SET_RVALUE(upstreamTaskInstances_, upstreamTaskInstances) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The instances. This parameter is deprecated and replaced by the UpstreamTaskInstances parameter.
      shared_ptr<vector<PagingInfo::TaskInstances>> taskInstances_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
      // The ancestor instances.
      shared_ptr<vector<PagingInfo::UpstreamTaskInstances>> upstreamTaskInstances_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListUpstreamTaskInstancesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListUpstreamTaskInstancesResponseBody::PagingInfo) };
    inline ListUpstreamTaskInstancesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListUpstreamTaskInstancesResponseBody::PagingInfo) };
    inline ListUpstreamTaskInstancesResponseBody& setPagingInfo(const ListUpstreamTaskInstancesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListUpstreamTaskInstancesResponseBody& setPagingInfo(ListUpstreamTaskInstancesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUpstreamTaskInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListUpstreamTaskInstancesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
