// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
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
  class GetWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody(GetWorkflowResponseBody &&) = default ;
    GetWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody& operator=(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody& operator=(GetWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workflow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workflow& obj) { 
        DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      };
      friend void from_json(const Darabonba::Json& j, Workflow& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      };
      Workflow() = default ;
      Workflow(const Workflow &) = default ;
      Workflow(Workflow &&) = default ;
      Workflow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workflow() = default ;
      Workflow& operator=(const Workflow &) = default ;
      Workflow& operator=(Workflow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Trigger : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
          DARABONBA_PTR_TO_JSON(Cron, cron_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
          DARABONBA_PTR_FROM_JSON(Cron, cron_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Trigger() = default ;
        Trigger(const Trigger &) = default ;
        Trigger(Trigger &&) = default ;
        Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trigger() = default ;
        Trigger& operator=(const Trigger &) = default ;
        Trigger& operator=(Trigger &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cron_ == nullptr
        && this->endTime_ == nullptr && this->recurrence_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
        // cron Field Functions 
        bool hasCron() const { return this->cron_ != nullptr;};
        void deleteCron() { this->cron_ = nullptr;};
        inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
        inline Trigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Trigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // recurrence Field Functions 
        bool hasRecurrence() const { return this->recurrence_ != nullptr;};
        void deleteRecurrence() { this->recurrence_ = nullptr;};
        inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
        inline Trigger& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Trigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The CRON expression. This parameter takes effect only if the Type parameter is set to Scheduler.
        shared_ptr<string> cron_ {};
        // The end time of the time range during which the workflow is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
        shared_ptr<string> endTime_ {};
        // The running mode of the workflow after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        shared_ptr<string> recurrence_ {};
        // The start time of the time range during which the workflow is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
        shared_ptr<string> startTime_ {};
        // The trigger type. Valid values:
        // 
        // *   Scheduler: scheduling cycle-based trigger
        // *   Manual: manual trigger
        shared_ptr<string> type_ {};
      };

      class Tasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
          DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
          DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
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
        && this->clientUniqueCode_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr
        && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->timeout_ == nullptr && this->triggerRecurrence_ == nullptr && this->type_ == nullptr
        && this->workflowId_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Tasks& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // clientUniqueCode Field Functions 
        bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
        void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
        inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
        inline Tasks& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Tasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Tasks& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const Tasks::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Tasks::DataSource) };
        inline Tasks::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Tasks::DataSource) };
        inline Tasks& setDataSource(const Tasks::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Tasks& setDataSource(Tasks::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline Tasks& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Tasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Tasks& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline Tasks& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Tasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Tasks& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Tasks& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // rerunInterval Field Functions 
        bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
        void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
        inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
        inline Tasks& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


        // rerunMode Field Functions 
        bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
        void deleteRerunMode() { this->rerunMode_ = nullptr;};
        inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
        inline Tasks& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


        // rerunTimes Field Functions 
        bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
        void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
        inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
        inline Tasks& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const Tasks::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Tasks::RuntimeResource) };
        inline Tasks::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Tasks::RuntimeResource) };
        inline Tasks& setRuntimeResource(const Tasks::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline Tasks& setRuntimeResource(Tasks::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline Tasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // triggerRecurrence Field Functions 
        bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
        void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
        inline string getTriggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
        inline Tasks& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Tasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline Tasks& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The unique code of the client. This parameter is used to create a task asynchronously and implement the idempotence of the task. If you do not specify this parameter when you create the task, the system automatically generates a unique code. The unique code is uniquely associated with the task ID. If you specify this parameter when you update or delete the task, the value of this parameter must be the unique code that is used to create the task.
        shared_ptr<string> clientUniqueCode_ {};
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The account ID of the creator.
        shared_ptr<string> createUser_ {};
        // The information about the associated data source.
        shared_ptr<Tasks::DataSource> dataSource_ {};
        // The description of the task.
        shared_ptr<string> description_ {};
        // The environment of the workspace. Valid values:
        // 
        // *   Prod
        // *   Dev
        shared_ptr<string> envType_ {};
        // The task ID.
        shared_ptr<int64_t> id_ {};
        // The modification time.
        shared_ptr<int64_t> modifyTime_ {};
        // The account ID of the modifier.
        shared_ptr<string> modifyUser_ {};
        // The name of the task.
        shared_ptr<string> name_ {};
        // The account ID of the task owner.
        shared_ptr<string> owner_ {};
        // The priority of the task. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
        shared_ptr<int32_t> priority_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The rerun interval. Unit: seconds.
        shared_ptr<int32_t> rerunInterval_ {};
        // The rerun mode. Valid values:
        // 
        // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
        // *   FailureAllowed: The task can be rerun only after it fails to run.
        // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
        shared_ptr<string> rerunMode_ {};
        // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
        shared_ptr<int32_t> rerunTimes_ {};
        // The configurations of the runtime environment, such as the resource group information.
        shared_ptr<Tasks::RuntimeResource> runtimeResource_ {};
        // The timeout period of task running. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The running mode of the task after it is triggered. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        shared_ptr<string> triggerRecurrence_ {};
        // The type of the task.
        shared_ptr<string> type_ {};
        // The ID of the workflow to which the task belongs.
        shared_ptr<int64_t> workflowId_ {};
      };

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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskOutputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskOutputs& obj) { 
            DARABONBA_PTR_TO_JSON(Output, output_);
          };
          friend void from_json(const Darabonba::Json& j, TaskOutputs& obj) { 
            DARABONBA_PTR_FROM_JSON(Output, output_);
          };
          TaskOutputs() = default ;
          TaskOutputs(const TaskOutputs &) = default ;
          TaskOutputs(TaskOutputs &&) = default ;
          TaskOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskOutputs() = default ;
          TaskOutputs& operator=(const TaskOutputs &) = default ;
          TaskOutputs& operator=(TaskOutputs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->output_ == nullptr; };
          // output Field Functions 
          bool hasOutput() const { return this->output_ != nullptr;};
          void deleteOutput() { this->output_ = nullptr;};
          inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
          inline TaskOutputs& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        protected:
          // The identifier of the output.
          shared_ptr<string> output_ {};
        };

        virtual bool empty() const override { return this->taskOutputs_ == nullptr; };
        // taskOutputs Field Functions 
        bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
        void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
        inline const vector<Outputs::TaskOutputs> & getTaskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline vector<Outputs::TaskOutputs> getTaskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline Outputs& setTaskOutputs(const vector<Outputs::TaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
        inline Outputs& setTaskOutputs(vector<Outputs::TaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


      protected:
        // The task outputs.
        shared_ptr<vector<Outputs::TaskOutputs>> taskOutputs_ {};
      };

      class Dependencies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dependencies& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
          DARABONBA_PTR_TO_JSON(UpstreamTaskId, upstreamTaskId_);
        };
        friend void from_json(const Darabonba::Json& j, Dependencies& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
          DARABONBA_PTR_FROM_JSON(UpstreamTaskId, upstreamTaskId_);
        };
        Dependencies() = default ;
        Dependencies(const Dependencies &) = default ;
        Dependencies(Dependencies &&) = default ;
        Dependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dependencies() = default ;
        Dependencies& operator=(const Dependencies &) = default ;
        Dependencies& operator=(Dependencies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->upstreamOutput_ == nullptr && this->upstreamTaskId_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Dependencies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // upstreamOutput Field Functions 
        bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
        void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
        inline string getUpstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
        inline Dependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


        // upstreamTaskId Field Functions 
        bool hasUpstreamTaskId() const { return this->upstreamTaskId_ != nullptr;};
        void deleteUpstreamTaskId() { this->upstreamTaskId_ = nullptr;};
        inline int64_t getUpstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, 0L) };
        inline Dependencies& setUpstreamTaskId(int64_t upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


      protected:
        // The scheduling dependency type. Valid values:
        // 
        // *   CrossCycleDependsOnChildren: cross-cycle dependency on the level-1 descendant nodes of a node
        // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
        // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
        // *   Normal: same-cycle scheduling dependency
        shared_ptr<string> type_ {};
        // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
        shared_ptr<string> upstreamOutput_ {};
        // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
        shared_ptr<int64_t> upstreamTaskId_ {};
      };

      virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr
        && this->owner_ == nullptr && this->parameters_ == nullptr && this->projectId_ == nullptr && this->tags_ == nullptr && this->tasks_ == nullptr
        && this->trigger_ == nullptr; };
      // clientUniqueCode Field Functions 
      bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
      void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
      inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
      inline Workflow& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Workflow& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Workflow& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // dependencies Field Functions 
      bool hasDependencies() const { return this->dependencies_ != nullptr;};
      void deleteDependencies() { this->dependencies_ = nullptr;};
      inline const vector<Workflow::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Workflow::Dependencies>) };
      inline vector<Workflow::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<Workflow::Dependencies>) };
      inline Workflow& setDependencies(const vector<Workflow::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
      inline Workflow& setDependencies(vector<Workflow::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Workflow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Workflow& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Workflow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Workflow& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Workflow& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Workflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const Workflow::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, Workflow::Outputs) };
      inline Workflow::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, Workflow::Outputs) };
      inline Workflow& setOutputs(const Workflow::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline Workflow& setOutputs(Workflow::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Workflow& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline Workflow& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Workflow& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Workflow::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Workflow::Tags>) };
      inline vector<Workflow::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Workflow::Tags>) };
      inline Workflow& setTags(const vector<Workflow::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Workflow& setTags(vector<Workflow::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<Workflow::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Workflow::Tasks>) };
      inline vector<Workflow::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<Workflow::Tasks>) };
      inline Workflow& setTasks(const vector<Workflow::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline Workflow& setTasks(vector<Workflow::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const Workflow::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Workflow::Trigger) };
      inline Workflow::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Workflow::Trigger) };
      inline Workflow& setTrigger(const Workflow::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline Workflow& setTrigger(Workflow::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    protected:
      // The unique code of the client. This parameter is used to create a workflow asynchronously and implement the idempotence of the workflow. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
      shared_ptr<string> clientUniqueCode_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The account ID of the creator.
      shared_ptr<string> createUser_ {};
      // The dependency information.
      shared_ptr<vector<Workflow::Dependencies>> dependencies_ {};
      // The description of the workflow.
      shared_ptr<string> description_ {};
      // The environment of the workspace. Valid values:
      // 
      // *   Prod: production environment
      // *   Dev: development environment
      shared_ptr<string> envType_ {};
      // The workflow ID.
      shared_ptr<int64_t> id_ {};
      // The modification time.
      shared_ptr<int64_t> modifyTime_ {};
      // The account ID of the modifier.
      shared_ptr<string> modifyUser_ {};
      // The name of the workflow.
      shared_ptr<string> name_ {};
      // The output information.
      shared_ptr<Workflow::Outputs> outputs_ {};
      // The account ID of the workflow owner.
      shared_ptr<string> owner_ {};
      // The parameters.
      shared_ptr<string> parameters_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The tags.
      shared_ptr<vector<Workflow::Tags>> tags_ {};
      // The tasks.
      shared_ptr<vector<Workflow::Tasks>> tasks_ {};
      // The trigger method.
      shared_ptr<Workflow::Trigger> trigger_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workflow_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const GetWorkflowResponseBody::Workflow & getWorkflow() const { DARABONBA_PTR_GET_CONST(workflow_, GetWorkflowResponseBody::Workflow) };
    inline GetWorkflowResponseBody::Workflow getWorkflow() { DARABONBA_PTR_GET(workflow_, GetWorkflowResponseBody::Workflow) };
    inline GetWorkflowResponseBody& setWorkflow(const GetWorkflowResponseBody::Workflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline GetWorkflowResponseBody& setWorkflow(GetWorkflowResponseBody::Workflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the workflow.
    shared_ptr<GetWorkflowResponseBody::Workflow> workflow_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
