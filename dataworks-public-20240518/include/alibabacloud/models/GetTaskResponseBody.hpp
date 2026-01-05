// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
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
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
        DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
        DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
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
        // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        shared_ptr<string> recurrence_ {};
        // The start time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
        shared_ptr<string> startTime_ {};
        // The trigger type. Valid values:
        // 
        // *   Scheduler: periodic scheduling
        // *   Manual: manual scheduling
        shared_ptr<string> type_ {};
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

      class SubTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTasks& obj) { 
          DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SubTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SubTasks() = default ;
        SubTasks(const SubTasks &) = default ;
        SubTasks(SubTasks &&) = default ;
        SubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTasks() = default ;
        SubTasks& operator=(const SubTasks &) = default ;
        SubTasks& operator=(SubTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubTasksItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubTasksItem& obj) { 
            DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
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
            DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
            DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
            DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            DARABONBA_PTR_TO_JSON(Trigger, trigger_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
          };
          friend void from_json(const Darabonba::Json& j, SubTasksItem& obj) { 
            DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
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
            DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
            DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
            DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
          };
          SubTasksItem() = default ;
          SubTasksItem(const SubTasksItem &) = default ;
          SubTasksItem(SubTasksItem &&) = default ;
          SubTasksItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubTasksItem() = default ;
          SubTasksItem& operator=(const SubTasksItem &) = default ;
          SubTasksItem& operator=(SubTasksItem &&) = default ;
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
            // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
            // 
            // *   Pause
            // *   Skip
            // *   Normal
            shared_ptr<string> recurrence_ {};
            // The start time of the time range during which the task is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler.
            shared_ptr<string> startTime_ {};
            // The trigger type. Valid values:
            // 
            // *   Scheduler: periodic scheduling
            // *   Manual: manual scheduling
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
            // The default number of CUs configured for task running.
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
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr
        && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->timeout_ == nullptr && this->trigger_ == nullptr && this->type_ == nullptr
        && this->workflowId_ == nullptr; };
          // baselineId Field Functions 
          bool hasBaselineId() const { return this->baselineId_ != nullptr;};
          void deleteBaselineId() { this->baselineId_ = nullptr;};
          inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
          inline SubTasksItem& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline SubTasksItem& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // createUser Field Functions 
          bool hasCreateUser() const { return this->createUser_ != nullptr;};
          void deleteCreateUser() { this->createUser_ = nullptr;};
          inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
          inline SubTasksItem& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


          // dataSource Field Functions 
          bool hasDataSource() const { return this->dataSource_ != nullptr;};
          void deleteDataSource() { this->dataSource_ = nullptr;};
          inline const SubTasksItem::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, SubTasksItem::DataSource) };
          inline SubTasksItem::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, SubTasksItem::DataSource) };
          inline SubTasksItem& setDataSource(const SubTasksItem::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
          inline SubTasksItem& setDataSource(SubTasksItem::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline SubTasksItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline SubTasksItem& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline SubTasksItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline SubTasksItem& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // modifyUser Field Functions 
          bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
          void deleteModifyUser() { this->modifyUser_ = nullptr;};
          inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
          inline SubTasksItem& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SubTasksItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // owner Field Functions 
          bool hasOwner() const { return this->owner_ != nullptr;};
          void deleteOwner() { this->owner_ = nullptr;};
          inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
          inline SubTasksItem& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline SubTasksItem& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // projectEnv Field Functions 
          bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
          void deleteProjectEnv() { this->projectEnv_ = nullptr;};
          inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
          inline SubTasksItem& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline SubTasksItem& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // rerunInterval Field Functions 
          bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
          void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
          inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
          inline SubTasksItem& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


          // rerunMode Field Functions 
          bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
          void deleteRerunMode() { this->rerunMode_ = nullptr;};
          inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
          inline SubTasksItem& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


          // rerunTimes Field Functions 
          bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
          void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
          inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
          inline SubTasksItem& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


          // runtimeResource Field Functions 
          bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
          void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
          inline const SubTasksItem::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, SubTasksItem::RuntimeResource) };
          inline SubTasksItem::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, SubTasksItem::RuntimeResource) };
          inline SubTasksItem& setRuntimeResource(const SubTasksItem::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
          inline SubTasksItem& setRuntimeResource(SubTasksItem::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline SubTasksItem& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // trigger Field Functions 
          bool hasTrigger() const { return this->trigger_ != nullptr;};
          void deleteTrigger() { this->trigger_ = nullptr;};
          inline const SubTasksItem::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, SubTasksItem::Trigger) };
          inline SubTasksItem::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, SubTasksItem::Trigger) };
          inline SubTasksItem& setTrigger(const SubTasksItem::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
          inline SubTasksItem& setTrigger(SubTasksItem::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SubTasksItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // workflowId Field Functions 
          bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
          void deleteWorkflowId() { this->workflowId_ = nullptr;};
          inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
          inline SubTasksItem& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


        protected:
          // The baseline ID.
          shared_ptr<int64_t> baselineId_ {};
          // The creation time.
          shared_ptr<int64_t> createTime_ {};
          // The account ID of the creator.
          shared_ptr<string> createUser_ {};
          // The information about the associated data source.
          shared_ptr<SubTasksItem::DataSource> dataSource_ {};
          // The description of the task.
          shared_ptr<string> description_ {};
          // The environment of the workspace. Valid values:
          // 
          // *   Prod: production environment
          // *   Dev: development environment
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
          // The environment of the workspace. This parameter is deprecated and replaced by the EnvType parameter. Valid values:
          // 
          // *   Prod: production environment
          // *   Dev: development environment
          shared_ptr<string> projectEnv_ {};
          // The workspace ID.
          shared_ptr<int64_t> projectId_ {};
          // The rerun interval. Unit: seconds.
          shared_ptr<int32_t> rerunInterval_ {};
          // The rerun mode. Valid values:
          // 
          // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to be run.
          // *   FailureAllowed: The task can be rerun only after it fails to be run.
          // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to be run.
          shared_ptr<string> rerunMode_ {};
          // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
          shared_ptr<int32_t> rerunTimes_ {};
          // The runtime environment configuration of the task, such as the resource group.
          shared_ptr<SubTasksItem::RuntimeResource> runtimeResource_ {};
          // The timeout period of task running. Unit: seconds.
          shared_ptr<int32_t> timeout_ {};
          // The method to trigger task scheduling.
          shared_ptr<SubTasksItem::Trigger> trigger_ {};
          // The type of the task.
          shared_ptr<string> type_ {};
          // The ID of the workflow to which the task belongs.
          shared_ptr<int64_t> workflowId_ {};
        };

        virtual bool empty() const override { return this->subTasks_ == nullptr
        && this->type_ == nullptr; };
        // subTasks Field Functions 
        bool hasSubTasks() const { return this->subTasks_ != nullptr;};
        void deleteSubTasks() { this->subTasks_ = nullptr;};
        inline const vector<SubTasks::SubTasksItem> & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<SubTasks::SubTasksItem>) };
        inline vector<SubTasks::SubTasksItem> getSubTasks() { DARABONBA_PTR_GET(subTasks_, vector<SubTasks::SubTasksItem>) };
        inline SubTasks& setSubTasks(const vector<SubTasks::SubTasksItem> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
        inline SubTasks& setSubTasks(vector<SubTasks::SubTasksItem> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SubTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The subtasks.
        shared_ptr<vector<SubTasks::SubTasksItem>> subTasks_ {};
        // The type of the subtask. Valid values:
        // 
        // *   DoWhile: do-while node
        // *   Combined: node group
        // *   ForEach: for-each node
        shared_ptr<string> type_ {};
      };

      class Script : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Script& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        };
        friend void from_json(const Darabonba::Json& j, Script& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        };
        Script() = default ;
        Script(const Script &) = default ;
        Script(Script &&) = default ;
        Script(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Script() = default ;
        Script& operator=(const Script &) = default ;
        Script& operator=(Script &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->parameters_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Script& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Script& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      protected:
        // The script content.
        shared_ptr<string> content_ {};
        // The script parameters.
        shared_ptr<string> parameters_ {};
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

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
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
        class Variables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variables& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Variables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the variable.
          shared_ptr<string> name_ {};
          // The type. Valid values:
          // 
          // *   Constant: constant
          // *   PassThrough: node output
          // *   System: variable
          // *   NodeOutput: script output
          shared_ptr<string> type_ {};
          // The value of the variable.
          shared_ptr<string> value_ {};
        };

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

        virtual bool empty() const override { return this->taskOutputs_ == nullptr
        && this->variables_ == nullptr; };
        // taskOutputs Field Functions 
        bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
        void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
        inline const vector<Outputs::TaskOutputs> & getTaskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline vector<Outputs::TaskOutputs> getTaskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline Outputs& setTaskOutputs(const vector<Outputs::TaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
        inline Outputs& setTaskOutputs(vector<Outputs::TaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Outputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Outputs::Variables>) };
        inline vector<Outputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Outputs::Variables>) };
        inline Outputs& setVariables(const vector<Outputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Outputs& setVariables(vector<Outputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The task outputs.
        shared_ptr<vector<Outputs::TaskOutputs>> taskOutputs_ {};
        // The variables.
        shared_ptr<vector<Outputs::Variables>> variables_ {};
      };

      class Inputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
        };
        Inputs() = default ;
        Inputs(const Inputs &) = default ;
        Inputs(Inputs &&) = default ;
        Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Inputs() = default ;
        Inputs& operator=(const Inputs &) = default ;
        Inputs& operator=(Inputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Variables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variables& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Variables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the variable.
          shared_ptr<string> name_ {};
          // The type. Valid values:
          // 
          // *   Constant: constant
          // *   PassThrough: node output
          // *   System: variable
          // *   NodeOutput: script output
          shared_ptr<string> type_ {};
          // The value of the variable.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->variables_ == nullptr; };
        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Inputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Inputs::Variables>) };
        inline vector<Inputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Inputs::Variables>) };
        inline Inputs& setVariables(const vector<Inputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Inputs& setVariables(vector<Inputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The variables.
        shared_ptr<vector<Inputs::Variables>> variables_ {};
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
        inline string getUpstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, "") };
        inline Dependencies& setUpstreamTaskId(string upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


      protected:
        // The dependency type. Valid values:
        // 
        // *   CrossCycleDependsOnChildren: cross-cycle dependency on level-1 descendant nodes
        // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
        // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
        // *   Normal: same-cycle scheduling dependency
        shared_ptr<string> type_ {};
        // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
        shared_ptr<string> upstreamOutput_ {};
        // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
        shared_ptr<string> upstreamTaskId_ {};
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
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->id_ == nullptr && this->inputs_ == nullptr && this->instanceMode_ == nullptr && this->modifyTime_ == nullptr
        && this->modifyUser_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr
        && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr
        && this->runtimeResource_ == nullptr && this->script_ == nullptr && this->subTasks_ == nullptr && this->tags_ == nullptr && this->timeout_ == nullptr
        && this->trigger_ == nullptr && this->type_ == nullptr && this->workflowId_ == nullptr; };
      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
      inline Task& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Task& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Task& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline const Task::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Task::DataSource) };
      inline Task::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Task::DataSource) };
      inline Task& setDataSource(const Task::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
      inline Task& setDataSource(Task::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


      // dependencies Field Functions 
      bool hasDependencies() const { return this->dependencies_ != nullptr;};
      void deleteDependencies() { this->dependencies_ = nullptr;};
      inline const vector<Task::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Task::Dependencies>) };
      inline vector<Task::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<Task::Dependencies>) };
      inline Task& setDependencies(const vector<Task::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
      inline Task& setDependencies(vector<Task::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Task& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Task& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Task& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline const Task::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, Task::Inputs) };
      inline Task::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, Task::Inputs) };
      inline Task& setInputs(const Task::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
      inline Task& setInputs(Task::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


      // instanceMode Field Functions 
      bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
      void deleteInstanceMode() { this->instanceMode_ = nullptr;};
      inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
      inline Task& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Task& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Task& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const Task::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, Task::Outputs) };
      inline Task::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, Task::Outputs) };
      inline Task& setOutputs(const Task::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline Task& setOutputs(Task::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Task& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Task& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectEnv Field Functions 
      bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
      void deleteProjectEnv() { this->projectEnv_ = nullptr;};
      inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
      inline Task& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Task& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // rerunInterval Field Functions 
      bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
      void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
      inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
      inline Task& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


      // rerunMode Field Functions 
      bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
      void deleteRerunMode() { this->rerunMode_ = nullptr;};
      inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
      inline Task& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


      // rerunTimes Field Functions 
      bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
      void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
      inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
      inline Task& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline const Task::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Task::RuntimeResource) };
      inline Task::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Task::RuntimeResource) };
      inline Task& setRuntimeResource(const Task::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
      inline Task& setRuntimeResource(Task::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline const Task::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Task::Script) };
      inline Task::Script getScript() { DARABONBA_PTR_GET(script_, Task::Script) };
      inline Task& setScript(const Task::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
      inline Task& setScript(Task::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


      // subTasks Field Functions 
      bool hasSubTasks() const { return this->subTasks_ != nullptr;};
      void deleteSubTasks() { this->subTasks_ = nullptr;};
      inline const Task::SubTasks & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, Task::SubTasks) };
      inline Task::SubTasks getSubTasks() { DARABONBA_PTR_GET(subTasks_, Task::SubTasks) };
      inline Task& setSubTasks(const Task::SubTasks & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
      inline Task& setSubTasks(Task::SubTasks && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Task::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Task::Tags>) };
      inline vector<Task::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Task::Tags>) };
      inline Task& setTags(const vector<Task::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Task& setTags(vector<Task::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline Task& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const Task::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Task::Trigger) };
      inline Task::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Task::Trigger) };
      inline Task& setTrigger(const Task::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline Task& setTrigger(Task::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Task& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
      inline Task& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    protected:
      // The baseline ID.
      shared_ptr<int64_t> baselineId_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The account ID of the creator.
      shared_ptr<string> createUser_ {};
      // The information about the associated data source.
      shared_ptr<Task::DataSource> dataSource_ {};
      // The dependency information.
      shared_ptr<vector<Task::Dependencies>> dependencies_ {};
      // The description of the task.
      shared_ptr<string> description_ {};
      // The environment of the workspace. Valid values:
      // 
      // *   Prod: production environment
      // *   Dev: development environment
      shared_ptr<string> envType_ {};
      // The instance ID.
      shared_ptr<int64_t> id_ {};
      // The input information.
      shared_ptr<Task::Inputs> inputs_ {};
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
      // The output information.
      shared_ptr<Task::Outputs> outputs_ {};
      // The account ID of the task owner.
      shared_ptr<string> owner_ {};
      // The priority of the task. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
      shared_ptr<int32_t> priority_ {};
      // The environment of the workspace. This parameter is deprecated and replaced by the EnvType parameter. Valid values:
      // 
      // *   Prod: production environment
      // *   Dev: development environment
      shared_ptr<string> projectEnv_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The rerun interval. Unit: seconds.
      shared_ptr<int32_t> rerunInterval_ {};
      // The rerun mode. Valid values:
      // 
      // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to be run.
      // *   FailureAllowed: The task can be rerun only after it fails to be run.
      // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to be run.
      shared_ptr<string> rerunMode_ {};
      // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
      shared_ptr<int32_t> rerunTimes_ {};
      // The configurations of the runtime environment, such as the resource group information.
      shared_ptr<Task::RuntimeResource> runtimeResource_ {};
      // The script information.
      shared_ptr<Task::Script> script_ {};
      // The configurations of the subtasks, such as a do-while node.
      shared_ptr<Task::SubTasks> subTasks_ {};
      // The tags.
      shared_ptr<vector<Task::Tags>> tags_ {};
      // The timeout period of task running. Unit: seconds.
      shared_ptr<int32_t> timeout_ {};
      // The method to trigger task scheduling.
      shared_ptr<Task::Trigger> trigger_ {};
      // The type of the task.
      shared_ptr<string> type_ {};
      // The workflow ID.
      shared_ptr<int64_t> workflowId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody& setTask(const GetTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetTaskResponseBody& setTask(GetTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the task.
    shared_ptr<GetTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
