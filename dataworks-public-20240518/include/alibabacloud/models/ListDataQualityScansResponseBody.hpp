// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODY_HPP_
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
  class ListDataQualityScansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityScansResponseBody() = default ;
    ListDataQualityScansResponseBody(const ListDataQualityScansResponseBody &) = default ;
    ListDataQualityScansResponseBody(ListDataQualityScansResponseBody &&) = default ;
    ListDataQualityScansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBody() = default ;
    ListDataQualityScansResponseBody& operator=(const ListDataQualityScansResponseBody &) = default ;
    ListDataQualityScansResponseBody& operator=(ListDataQualityScansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityScans, dataQualityScans_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityScans, dataQualityScans_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityScans : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityScans& obj) { 
          DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Hooks, hooks_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityScans& obj) { 
          DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        };
        DataQualityScans() = default ;
        DataQualityScans(const DataQualityScans &) = default ;
        DataQualityScans(DataQualityScans &&) = default ;
        DataQualityScans(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityScans() = default ;
        DataQualityScans& operator=(const DataQualityScans &) = default ;
        DataQualityScans& operator=(DataQualityScans &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Trigger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
            DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
            DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
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
          virtual bool empty() const override { return this->taskIds_ == nullptr
        && this->type_ == nullptr; };
          // taskIds Field Functions 
          bool hasTaskIds() const { return this->taskIds_ != nullptr;};
          void deleteTaskIds() { this->taskIds_ = nullptr;};
          inline const vector<int64_t> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
          inline vector<int64_t> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
          inline Trigger& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
          inline Trigger& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // If the trigger mode is BySchedule, the ID of the scheduling task that triggers the monitor must be configured.
          shared_ptr<vector<int64_t>> taskIds_ {};
          // The trigger mode of the data quality monitor. Valid values:
          // 
          // *   ByManual: Manually triggered. Default setting.
          // *   BySchedule: Triggered by a scheduled task instance.
          shared_ptr<string> type_ {};
        };

        class RuntimeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
            DARABONBA_PTR_TO_JSON(Cu, cu_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Image, image_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
            DARABONBA_PTR_FROM_JSON(Cu, cu_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Image, image_);
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
        && this->id_ == nullptr && this->image_ == nullptr; };
          // cu Field Functions 
          bool hasCu() const { return this->cu_ != nullptr;};
          void deleteCu() { this->cu_ = nullptr;};
          inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
          inline RuntimeResource& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline RuntimeResource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // image Field Functions 
          bool hasImage() const { return this->image_ != nullptr;};
          void deleteImage() { this->image_ = nullptr;};
          inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
          inline RuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        protected:
          // CU consumption for task running.
          shared_ptr<float> cu_ {};
          // The ID of the resource group.
          shared_ptr<string> id_ {};
          // The ID of the image configured for task running.
          shared_ptr<string> image_ {};
        };

        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
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
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The parameter name.
          shared_ptr<string> name_ {};
          // The parameter value.
          shared_ptr<string> value_ {};
        };

        class Hooks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hooks& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Hooks& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Hooks() = default ;
          Hooks(const Hooks &) = default ;
          Hooks(Hooks &&) = default ;
          Hooks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hooks() = default ;
          Hooks& operator=(const Hooks &) = default ;
          Hooks& operator=(Hooks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->condition_ == nullptr
        && this->type_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Hooks& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Hooks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The hook trigger condition. When this condition is met, the hook is triggered. Valid expression format:
          // 
          // Specifies multiple combinations of rule severity levels and rule validation statuses, such as `results.any { r -> r.status == \\"Fail\\" && r.rule.severity == \\"Normal\\" || r.status == \\"Error\\" && r.rule.severity == \\"High\\" || r.status == \\"Warn\\" && r.rule.severity == \\"High\\" }`. This means the hook is triggered if any executed rule has Fail with Normal severity, Error with High severity, or Warn with High severity. The severity values must match those defined in the Spec. The status values must match those in DataQualityResult.
          shared_ptr<string> condition_ {};
          // The type of the hook. Valid values:
          // 
          // *   BlockTaskInstance: Blocks the scheduling of the task instance.
          shared_ptr<string> type_ {};
        };

        class ComputeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Runtime, runtime_);
          };
          friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
          };
          ComputeResource() = default ;
          ComputeResource(const ComputeResource &) = default ;
          ComputeResource(ComputeResource &&) = default ;
          ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComputeResource() = default ;
          ComputeResource& operator=(const ComputeResource &) = default ;
          ComputeResource& operator=(ComputeResource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Runtime : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
              DARABONBA_PTR_TO_JSON(Engine, engine_);
              DARABONBA_PTR_TO_JSON(HiveConf, hiveConf_);
              DARABONBA_PTR_TO_JSON(SparkConf, sparkConf_);
            };
            friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
              DARABONBA_PTR_FROM_JSON(Engine, engine_);
              DARABONBA_PTR_FROM_JSON(HiveConf, hiveConf_);
              DARABONBA_PTR_FROM_JSON(SparkConf, sparkConf_);
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
            virtual bool empty() const override { return this->engine_ == nullptr
        && this->hiveConf_ == nullptr && this->sparkConf_ == nullptr; };
            // engine Field Functions 
            bool hasEngine() const { return this->engine_ != nullptr;};
            void deleteEngine() { this->engine_ = nullptr;};
            inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
            inline Runtime& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


            // hiveConf Field Functions 
            bool hasHiveConf() const { return this->hiveConf_ != nullptr;};
            void deleteHiveConf() { this->hiveConf_ = nullptr;};
            inline string getHiveConf() const { DARABONBA_PTR_GET_DEFAULT(hiveConf_, "") };
            inline Runtime& setHiveConf(string hiveConf) { DARABONBA_PTR_SET_VALUE(hiveConf_, hiveConf) };


            // sparkConf Field Functions 
            bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
            void deleteSparkConf() { this->sparkConf_ = nullptr;};
            inline string getSparkConf() const { DARABONBA_PTR_GET_DEFAULT(sparkConf_, "") };
            inline Runtime& setSparkConf(string sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };


          protected:
            // The engine type. These settings are only supported for the EMR compute engine. Valid values:
            // 
            // *   Hive: Hive SQL
            // *   Spark: Spark SQL
            // *   Kyuubi
            shared_ptr<string> engine_ {};
            // Additional parameters for the Hive engine. Currently, only mapreduce.job.queuename is supported to set the queue.
            shared_ptr<string> hiveConf_ {};
            // Additional parameters for the Spark engine. Currently, only spark.yarn.queue is supported to set the queue.
            shared_ptr<string> sparkConf_ {};
          };

          virtual bool empty() const override { return this->envType_ == nullptr
        && this->name_ == nullptr && this->runtime_ == nullptr; };
          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline ComputeResource& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // runtime Field Functions 
          bool hasRuntime() const { return this->runtime_ != nullptr;};
          void deleteRuntime() { this->runtime_ = nullptr;};
          inline const ComputeResource::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, ComputeResource::Runtime) };
          inline ComputeResource::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, ComputeResource::Runtime) };
          inline ComputeResource& setRuntime(const ComputeResource::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
          inline ComputeResource& setRuntime(ComputeResource::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


        protected:
          // Workspace environment of the compute engine. Valid values:
          // 
          // *   Prod
          // *   Dev
          shared_ptr<string> envType_ {};
          // The name of the computing engine. Uniquely identifies the engine.
          shared_ptr<string> name_ {};
          // Additional runtime settings for the data quality monitor.
          shared_ptr<ComputeResource::Runtime> runtime_ {};
        };

        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr
        && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->trigger_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline const DataQualityScans::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, DataQualityScans::ComputeResource) };
        inline DataQualityScans::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, DataQualityScans::ComputeResource) };
        inline DataQualityScans& setComputeResource(const DataQualityScans::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
        inline DataQualityScans& setComputeResource(DataQualityScans::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataQualityScans& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline DataQualityScans& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataQualityScans& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hooks Field Functions 
        bool hasHooks() const { return this->hooks_ != nullptr;};
        void deleteHooks() { this->hooks_ = nullptr;};
        inline const vector<DataQualityScans::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<DataQualityScans::Hooks>) };
        inline vector<DataQualityScans::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<DataQualityScans::Hooks>) };
        inline DataQualityScans& setHooks(const vector<DataQualityScans::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
        inline DataQualityScans& setHooks(vector<DataQualityScans::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityScans& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline DataQualityScans& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline DataQualityScans& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataQualityScans& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline DataQualityScans& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<DataQualityScans::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DataQualityScans::Parameters>) };
        inline vector<DataQualityScans::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DataQualityScans::Parameters>) };
        inline DataQualityScans& setParameters(const vector<DataQualityScans::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline DataQualityScans& setParameters(vector<DataQualityScans::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityScans& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const DataQualityScans::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, DataQualityScans::RuntimeResource) };
        inline DataQualityScans::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, DataQualityScans::RuntimeResource) };
        inline DataQualityScans& setRuntimeResource(const DataQualityScans::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline DataQualityScans& setRuntimeResource(DataQualityScans::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const DataQualityScans::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataQualityScans::Trigger) };
        inline DataQualityScans::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, DataQualityScans::Trigger) };
        inline DataQualityScans& setTrigger(const DataQualityScans::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline DataQualityScans& setTrigger(DataQualityScans::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      protected:
        // The compute engine used during execution. If it is not specified, the data source connection defined in the Spec will be used.
        shared_ptr<DataQualityScans::ComputeResource> computeResource_ {};
        // The creation time of the data quality monitor.
        shared_ptr<int64_t> createTime_ {};
        // The creator of the data quality monitor.
        shared_ptr<string> createUser_ {};
        // The description of the data quality scan task. Maximum length: 65,535 characters.
        shared_ptr<string> description_ {};
        // The hook configuration after the data quality monitor stops.
        shared_ptr<vector<DataQualityScans::Hooks>> hooks_ {};
        // The ID of the data quality monitor.
        shared_ptr<int64_t> id_ {};
        // Last update time of the data quality monitor.
        shared_ptr<int64_t> modifyTime_ {};
        // The user ID of the last person who updated the data quality monitor.
        shared_ptr<string> modifyUser_ {};
        // The name of the data quality scan task. Can include digits, letters, Chinese characters, and both half-width and full-width punctuation marks. Maximum length: 255 characters.
        shared_ptr<string> name_ {};
        // The user ID of the owner responsible for the data quality monitor.
        shared_ptr<string> owner_ {};
        // Execution parameter definitions for the data quality monitor.
        shared_ptr<vector<DataQualityScans::Parameters>> parameters_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The resource group used during the execution of the data quality monitor.
        shared_ptr<DataQualityScans::RuntimeResource> runtimeResource_ {};
        // Trigger settings for the data quality monitor.
        shared_ptr<DataQualityScans::Trigger> trigger_ {};
      };

      virtual bool empty() const override { return this->dataQualityScans_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityScans Field Functions 
      bool hasDataQualityScans() const { return this->dataQualityScans_ != nullptr;};
      void deleteDataQualityScans() { this->dataQualityScans_ = nullptr;};
      inline const vector<PageInfo::DataQualityScans> & getDataQualityScans() const { DARABONBA_PTR_GET_CONST(dataQualityScans_, vector<PageInfo::DataQualityScans>) };
      inline vector<PageInfo::DataQualityScans> getDataQualityScans() { DARABONBA_PTR_GET(dataQualityScans_, vector<PageInfo::DataQualityScans>) };
      inline PageInfo& setDataQualityScans(const vector<PageInfo::DataQualityScans> & dataQualityScans) { DARABONBA_PTR_SET_VALUE(dataQualityScans_, dataQualityScans) };
      inline PageInfo& setDataQualityScans(vector<PageInfo::DataQualityScans> && dataQualityScans) { DARABONBA_PTR_SET_RVALUE(dataQualityScans_, dataQualityScans) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of data quality monitors.
      shared_ptr<vector<PageInfo::DataQualityScans>> dataQualityScans_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityScansResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityScansResponseBody::PageInfo) };
    inline ListDataQualityScansResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityScansResponseBody::PageInfo) };
    inline ListDataQualityScansResponseBody& setPageInfo(const ListDataQualityScansResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityScansResponseBody& setPageInfo(ListDataQualityScansResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityScansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The page information.
    shared_ptr<ListDataQualityScansResponseBody::PageInfo> pageInfo_ {};
    // The API request ID, which is generated as a UUID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
