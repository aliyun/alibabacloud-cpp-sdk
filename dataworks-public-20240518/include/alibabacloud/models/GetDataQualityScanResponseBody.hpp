// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODY_HPP_
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
  class GetDataQualityScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScan, dataQualityScan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScan, dataQualityScan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanResponseBody() = default ;
    GetDataQualityScanResponseBody(const GetDataQualityScanResponseBody &) = default ;
    GetDataQualityScanResponseBody(GetDataQualityScanResponseBody &&) = default ;
    GetDataQualityScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBody() = default ;
    GetDataQualityScanResponseBody& operator=(const GetDataQualityScanResponseBody &) = default ;
    GetDataQualityScanResponseBody& operator=(GetDataQualityScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityScan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityScan& obj) { 
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
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityScan& obj) { 
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
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      };
      DataQualityScan() = default ;
      DataQualityScan(const DataQualityScan &) = default ;
      DataQualityScan(DataQualityScan &&) = default ;
      DataQualityScan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityScan() = default ;
      DataQualityScan& operator=(const DataQualityScan &) = default ;
      DataQualityScan& operator=(DataQualityScan &&) = default ;
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
        // If the trigger mode is set to BySchedule, the scheduling task ID must be specified.
        shared_ptr<vector<int64_t>> taskIds_ {};
        // The trigger mode of the monitoring task.
        // 
        // Valid values:
        // 
        // *   ByManual: Manual trigger. This is the default setting.
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
        // Reserved compute units (CU) for the resource group.
        shared_ptr<float> cu_ {};
        // The resource group ID.
        shared_ptr<string> id_ {};
        // The image ID used in the runtime configuration.
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
        // The parameter value.
        shared_ptr<string> name_ {};
        // The parameter name.
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
        // The Hook trigger condition. The hook will run if the condition is met. Currently, only one type of expression syntax is supported:
        // 
        // *   You can specify multiple combinations of rule severity levels and validation statuses using an expression such as `results.any { r -> r.status == \\"Fail\\" && r.rule.severity == \\"Normal\\" || r.status == \\"Error\\" && r.rule.severity == \\"High\\" || r.status == \\"Warn\\" && r.rule.severity == \\"High\\" }`. This expression means the condition is met if any executed rule has a result of Fail with severity Normal, Error with severity High, or Warn with severity High. In the condition expression, the values of severity and status are predefined enums. The values of severity must match those defined in the Spec, and the values of status must match those in DataQualityResult.
        shared_ptr<string> condition_ {};
        // The type of the Hook.
        // 
        // Valid values:
        // 
        // *   BlockTaskInstance: BlockTaskInstance: Blocks the scheduling of the task instance.
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
            DARABONBA_ANY_TO_JSON(HiveConf, hiveConf_);
            DARABONBA_ANY_TO_JSON(SparkConf, sparkConf_);
          };
          friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
            DARABONBA_PTR_FROM_JSON(Engine, engine_);
            DARABONBA_ANY_FROM_JSON(HiveConf, hiveConf_);
            DARABONBA_ANY_FROM_JSON(SparkConf, sparkConf_);
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
          inline           const Darabonba::Json & getHiveConf() const { DARABONBA_GET(hiveConf_) };
          Darabonba::Json & getHiveConf() { DARABONBA_GET(hiveConf_) };
          inline Runtime& setHiveConf(const Darabonba::Json & hiveConf) { DARABONBA_SET_VALUE(hiveConf_, hiveConf) };
          inline Runtime& setHiveConf(Darabonba::Json && hiveConf) { DARABONBA_SET_RVALUE(hiveConf_, hiveConf) };


          // sparkConf Field Functions 
          bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
          void deleteSparkConf() { this->sparkConf_ = nullptr;};
          inline           const Darabonba::Json & getSparkConf() const { DARABONBA_GET(sparkConf_) };
          Darabonba::Json & getSparkConf() { DARABONBA_GET(sparkConf_) };
          inline Runtime& setSparkConf(const Darabonba::Json & sparkConf) { DARABONBA_SET_VALUE(sparkConf_, sparkConf) };
          inline Runtime& setSparkConf(Darabonba::Json && sparkConf) { DARABONBA_SET_RVALUE(sparkConf_, sparkConf) };


        protected:
          // The type of the compute engine. Only EMR compute engines support these settings.
          // 
          // Valid values:
          // 
          // *   Hive: Hive SQL
          // *   Spark: Spark SQL
          // *   Kyuubi
          shared_ptr<string> engine_ {};
          // Additional Hive engine parameters. Currently, only the mapreduce.job.queuename parameter is supported.
          Darabonba::Json hiveConf_ {};
          // Additional Spark engine parameters. Currently, only the spark.yarn.queue parameter is supported.
          Darabonba::Json sparkConf_ {};
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
        // The workspace environment to which the compute engine belongs.
        // 
        // Valid values:
        // 
        // *   Prod: production environment .
        // *   Dev: development environment.
        shared_ptr<string> envType_ {};
        // The name of the compute engine, which is a unique identifier.
        shared_ptr<string> name_ {};
        // More settings for data quality monitor at runtime.
        shared_ptr<ComputeResource::Runtime> runtime_ {};
      };

      virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr
        && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->spec_ == nullptr && this->trigger_ == nullptr; };
      // computeResource Field Functions 
      bool hasComputeResource() const { return this->computeResource_ != nullptr;};
      void deleteComputeResource() { this->computeResource_ = nullptr;};
      inline const DataQualityScan::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, DataQualityScan::ComputeResource) };
      inline DataQualityScan::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, DataQualityScan::ComputeResource) };
      inline DataQualityScan& setComputeResource(const DataQualityScan::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
      inline DataQualityScan& setComputeResource(DataQualityScan::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataQualityScan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline DataQualityScan& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataQualityScan& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hooks Field Functions 
      bool hasHooks() const { return this->hooks_ != nullptr;};
      void deleteHooks() { this->hooks_ = nullptr;};
      inline const vector<DataQualityScan::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<DataQualityScan::Hooks>) };
      inline vector<DataQualityScan::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<DataQualityScan::Hooks>) };
      inline DataQualityScan& setHooks(const vector<DataQualityScan::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
      inline DataQualityScan& setHooks(vector<DataQualityScan::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataQualityScan& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline DataQualityScan& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline DataQualityScan& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataQualityScan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline DataQualityScan& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<DataQualityScan::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DataQualityScan::Parameters>) };
      inline vector<DataQualityScan::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DataQualityScan::Parameters>) };
      inline DataQualityScan& setParameters(const vector<DataQualityScan::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline DataQualityScan& setParameters(vector<DataQualityScan::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataQualityScan& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline const DataQualityScan::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, DataQualityScan::RuntimeResource) };
      inline DataQualityScan::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, DataQualityScan::RuntimeResource) };
      inline DataQualityScan& setRuntimeResource(const DataQualityScan::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
      inline DataQualityScan& setRuntimeResource(DataQualityScan::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline DataQualityScan& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const DataQualityScan::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataQualityScan::Trigger) };
      inline DataQualityScan::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, DataQualityScan::Trigger) };
      inline DataQualityScan& setTrigger(const DataQualityScan::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline DataQualityScan& setTrigger(DataQualityScan::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    protected:
      // The compute engine used at runtime. Optional. If not specified, the data source defined in the Spec is used.
      shared_ptr<DataQualityScan::ComputeResource> computeResource_ {};
      // The creation time of the data quality monitor.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the user who creates the data quality monitor.
      shared_ptr<string> createUser_ {};
      // The data quality monitor description.
      shared_ptr<string> description_ {};
      // The Hook configurations after the data quality monitoring run ends.
      shared_ptr<vector<DataQualityScan::Hooks>> hooks_ {};
      // The data quality monitoring ID.
      shared_ptr<int64_t> id_ {};
      // Last modified time of the data quality monitor.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the user who last modifies the data quality monitor.
      shared_ptr<string> modifyUser_ {};
      // The data quality monitor name.
      shared_ptr<string> name_ {};
      // The ID of the user who owns the data quality monitor.
      shared_ptr<string> owner_ {};
      // The definition of execution parameters for the data quality monitor.
      shared_ptr<vector<DataQualityScan::Parameters>> parameters_ {};
      // The workspace ID where the data quality monitor resides. You can obtain the workspace ID by calling the [ListProjects](https://help.aliyun.com/document_detail/2780068.html) operation.
      shared_ptr<int64_t> projectId_ {};
      // The resource group used during the running of the data quality monitor.
      shared_ptr<DataQualityScan::RuntimeResource> runtimeResource_ {};
      // Spec code for the content of the data quality monitoring.
      shared_ptr<string> spec_ {};
      // The trigger configurations of the data quality monitoring task.
      shared_ptr<DataQualityScan::Trigger> trigger_ {};
    };

    virtual bool empty() const override { return this->dataQualityScan_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityScan Field Functions 
    bool hasDataQualityScan() const { return this->dataQualityScan_ != nullptr;};
    void deleteDataQualityScan() { this->dataQualityScan_ = nullptr;};
    inline const GetDataQualityScanResponseBody::DataQualityScan & getDataQualityScan() const { DARABONBA_PTR_GET_CONST(dataQualityScan_, GetDataQualityScanResponseBody::DataQualityScan) };
    inline GetDataQualityScanResponseBody::DataQualityScan getDataQualityScan() { DARABONBA_PTR_GET(dataQualityScan_, GetDataQualityScanResponseBody::DataQualityScan) };
    inline GetDataQualityScanResponseBody& setDataQualityScan(const GetDataQualityScanResponseBody::DataQualityScan & dataQualityScan) { DARABONBA_PTR_SET_VALUE(dataQualityScan_, dataQualityScan) };
    inline GetDataQualityScanResponseBody& setDataQualityScan(GetDataQualityScanResponseBody::DataQualityScan && dataQualityScan) { DARABONBA_PTR_SET_RVALUE(dataQualityScan_, dataQualityScan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data quality monitoring details.
    shared_ptr<GetDataQualityScanResponseBody::DataQualityScan> dataQualityScan_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
