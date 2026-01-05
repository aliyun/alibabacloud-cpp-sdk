// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUEST_HPP_
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
  class BatchUpdateTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    BatchUpdateTasksRequest() = default ;
    BatchUpdateTasksRequest(const BatchUpdateTasksRequest &) = default ;
    BatchUpdateTasksRequest(BatchUpdateTasksRequest &&) = default ;
    BatchUpdateTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksRequest() = default ;
    BatchUpdateTasksRequest& operator=(const BatchUpdateTasksRequest &) = default ;
    BatchUpdateTasksRequest& operator=(BatchUpdateTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
        DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
        DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
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
        // The cron expression. Takes effect when type=Scheduler.
        shared_ptr<string> cron_ {};
        // The expiration time of periodic triggering. Takes effect only when type is set to Scheduler. The value of this parameter is in the`yyyy-mm-dd hh:mm:ss` format.
        shared_ptr<string> endTime_ {};
        // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        shared_ptr<string> recurrence_ {};
        // The time when periodic triggering takes effect. This parameter takes effect only if the Type parameter is set to Scheduler. The value of this parameter is in the `yyyy-mm-dd hh:mm:ss` format.
        shared_ptr<string> startTime_ {};
        // The trigger type. Valid values:
        // 
        // *   Scheduler: periodically triggered
        // *   Manual
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
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
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
        // The image ID used in the task runtime configuration.
        shared_ptr<string> image_ {};
        // The identifier of the scheduling resource group used in the task runtime configuration.
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
        // The data source name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->description_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->tags_ == nullptr
        && this->timeout_ == nullptr && this->trigger_ == nullptr; };
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


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tasks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tasks::Tags>) };
      inline vector<Tasks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Tasks::Tags>) };
      inline Tasks& setTags(const vector<Tasks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Tasks& setTags(vector<Tasks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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


    protected:
      // Associated data source information.
      shared_ptr<Tasks::DataSource> dataSource_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The project environment.
      // 
      // *   Prod: Production
      // *   Dev: Development
      shared_ptr<string> envType_ {};
      // The task ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The account ID of the task owner.
      shared_ptr<string> owner_ {};
      // The retry interval in seconds.
      shared_ptr<int32_t> rerunInterval_ {};
      // The rerun mode. Valid values:
      // 
      // *   AllDenied: The task cannot be rerun.
      // *   FailureAllowed: The task can be rerun only after it fails.
      // *   AllAllowed: The task can always be rerun.
      shared_ptr<string> rerunMode_ {};
      // The number of retry attempts. Takes effect when the task is configured to allow reruns.
      shared_ptr<int32_t> rerunTimes_ {};
      // Runtime environment configurations, such as resource group information.
      shared_ptr<Tasks::RuntimeResource> runtimeResource_ {};
      // The list of task tags.
      shared_ptr<vector<Tasks::Tags>> tags_ {};
      // The task execution timeout in seconds. The value should be greater than 3600.
      shared_ptr<int32_t> timeout_ {};
      // The task trigger configurations.
      shared_ptr<Tasks::Trigger> trigger_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->tasks_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline BatchUpdateTasksRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<BatchUpdateTasksRequest::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<BatchUpdateTasksRequest::Tasks>) };
    inline vector<BatchUpdateTasksRequest::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<BatchUpdateTasksRequest::Tasks>) };
    inline BatchUpdateTasksRequest& setTasks(const vector<BatchUpdateTasksRequest::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline BatchUpdateTasksRequest& setTasks(vector<BatchUpdateTasksRequest::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The remarks.
    shared_ptr<string> comment_ {};
    // The list of tasks.
    shared_ptr<vector<BatchUpdateTasksRequest::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
