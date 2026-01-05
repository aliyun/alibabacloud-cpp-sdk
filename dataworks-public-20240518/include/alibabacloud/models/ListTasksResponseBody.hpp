// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
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
  class ListTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTasksResponseBody() = default ;
    ListTasksResponseBody(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody(ListTasksResponseBody &&) = default ;
    ListTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBody() = default ;
    ListTasksResponseBody& operator=(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody& operator=(ListTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Tasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
          DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(ScriptParameters, scriptParameters_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Trigger, trigger_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
          DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(ScriptParameters, scriptParameters_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
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
          // The CRON expression of the task. This parameter takes effect only if the Type parameter is set to Scheduler.
          shared_ptr<string> cron_ {};
          // The end time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
          shared_ptr<string> endTime_ {};
          // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler.
          // 
          // Valid values:
          // 
          // *   Pause
          // *   Skip
          // *   Normal
          shared_ptr<string> recurrence_ {};
          // The start time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
          shared_ptr<string> startTime_ {};
          // The trigger type.
          // 
          // Valid values:
          // 
          // *   Scheduler: scheduling cycle-based trigger
          // *   Manual: manual trigger
          shared_ptr<string> type_ {};
        };

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
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->instanceMode_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr
        && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->scriptParameters_ == nullptr && this->timeout_ == nullptr && this->trigger_ == nullptr
        && this->type_ == nullptr && this->workflowId_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Tasks& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


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


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Tasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceMode Field Functions 
        bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
        void deleteInstanceMode() { this->instanceMode_ = nullptr;};
        inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
        inline Tasks& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


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


        // projectEnv Field Functions 
        bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
        void deleteProjectEnv() { this->projectEnv_ = nullptr;};
        inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
        inline Tasks& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


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


        // scriptParameters Field Functions 
        bool hasScriptParameters() const { return this->scriptParameters_ != nullptr;};
        void deleteScriptParameters() { this->scriptParameters_ = nullptr;};
        inline string getScriptParameters() const { DARABONBA_PTR_GET_DEFAULT(scriptParameters_, "") };
        inline Tasks& setScriptParameters(string scriptParameters) { DARABONBA_PTR_SET_VALUE(scriptParameters_, scriptParameters) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline Tasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const Tasks::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Tasks::Trigger) };
        inline Tasks::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Tasks::Trigger) };
        inline Tasks& setTrigger(const Tasks::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline Tasks& setTrigger(Tasks::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


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
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The account ID of the creator.
        shared_ptr<string> createUser_ {};
        // The information about the associated data source.
        shared_ptr<Tasks::DataSource> dataSource_ {};
        // The description of the task.
        shared_ptr<string> description_ {};
        // The task ID.
        shared_ptr<int64_t> id_ {};
        // The instance generation mode. Valid values:
        // 
        // *   T+1
        // *   Immediately
        shared_ptr<string> instanceMode_ {};
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
        // The environment of the workspace.
        // 
        // Valid values:
        // 
        // *   Prod: production environment
        // *   Dev: development environment
        shared_ptr<string> projectEnv_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The rerun interval. Unit: seconds.
        shared_ptr<int32_t> rerunInterval_ {};
        // The rerun mode.
        // 
        // Valid values:
        // 
        // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
        // *   FailureAllowed: The task can be rerun only after it fails to run.
        // *   AllAllowed: The task can be rerun regardless of whether it is successfully run or fails to run.
        shared_ptr<string> rerunMode_ {};
        // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
        shared_ptr<int32_t> rerunTimes_ {};
        // The configurations of the runtime environment, such as the resource group information.
        shared_ptr<Tasks::RuntimeResource> runtimeResource_ {};
        // The list of script parameters.
        shared_ptr<string> scriptParameters_ {};
        // The timeout period of task running. Unit: seconds.
        shared_ptr<int32_t> timeout_ {};
        // The method to trigger task scheduling.
        shared_ptr<Tasks::Trigger> trigger_ {};
        // The type of the task.
        shared_ptr<string> type_ {};
        // The ID of the workflow to which the task belongs.
        shared_ptr<int64_t> workflowId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->tasks_ == nullptr && this->totalCount_ == nullptr; };
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


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<PagingInfo::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<PagingInfo::Tasks>) };
      inline vector<PagingInfo::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<PagingInfo::Tasks>) };
      inline PagingInfo& setTasks(const vector<PagingInfo::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline PagingInfo& setTasks(vector<PagingInfo::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The tasks.
      shared_ptr<vector<PagingInfo::Tasks>> tasks_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListTasksResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListTasksResponseBody::PagingInfo) };
    inline ListTasksResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListTasksResponseBody::PagingInfo) };
    inline ListTasksResponseBody& setPagingInfo(const ListTasksResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListTasksResponseBody& setPagingInfo(ListTasksResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListTasksResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
