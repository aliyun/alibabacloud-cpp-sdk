// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODY_HPP_
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
  class GetDataQualityScanRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScanRun, dataQualityScanRun_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScanRun, dataQualityScanRun_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanRunResponseBody() = default ;
    GetDataQualityScanRunResponseBody(const GetDataQualityScanRunResponseBody &) = default ;
    GetDataQualityScanRunResponseBody(GetDataQualityScanRunResponseBody &&) = default ;
    GetDataQualityScanRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBody() = default ;
    GetDataQualityScanRunResponseBody& operator=(const GetDataQualityScanRunResponseBody &) = default ;
    GetDataQualityScanRunResponseBody& operator=(GetDataQualityScanRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityScanRun : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityScanRun& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Scan, scan_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityScanRun& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Scan, scan_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataQualityScanRun() = default ;
      DataQualityScanRun(const DataQualityScanRun &) = default ;
      DataQualityScanRun(DataQualityScanRun &&) = default ;
      DataQualityScanRun(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityScanRun() = default ;
      DataQualityScanRun& operator=(const DataQualityScanRun &) = default ;
      DataQualityScanRun& operator=(DataQualityScanRun &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scan& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Scan& obj) { 
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
        Scan() = default ;
        Scan(const Scan &) = default ;
        Scan(Scan &&) = default ;
        Scan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scan() = default ;
        Scan& operator=(const Scan &) = default ;
        Scan& operator=(Scan &&) = default ;
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
          // The trigger method of the data quality monitor.
          // 
          // *   ByManual
          // *   BySchedule
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
          // Reserved CUs for the resource group.
          shared_ptr<float> cu_ {};
          // The resource group ID.
          shared_ptr<string> id_ {};
          // The image ID of the run configuration.
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
          // The hook trigger condition. Currently, only one type of expression syntax is supported:
          // 
          // *   Specify combinations of severity levels and validation statuses for multiple rules, such as `results.any { r -> r.status == \\"Fail\\" && r.rule.severity == \\"Normal\\" || r.status == \\"Error\\" && r.rule.severity == \\"High\\" || r.status == \\"Warn\\" && r.rule.severity == \\"High\\" }`. This means the hook is triggered if any executed rule has Fail with Normal severity, Error with High severity, or Warn with High severity. In the conditional expression, the severity value matches that in the Spec code, and the status value matches that in DataQualityResult.
          shared_ptr<string> condition_ {};
          // The type of the hook.
          // 
          // *   BlockTaskInstance
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
            inline             const Darabonba::Json & getHiveConf() const { DARABONBA_GET(hiveConf_) };
            Darabonba::Json & getHiveConf() { DARABONBA_GET(hiveConf_) };
            inline Runtime& setHiveConf(const Darabonba::Json & hiveConf) { DARABONBA_SET_VALUE(hiveConf_, hiveConf) };
            inline Runtime& setHiveConf(Darabonba::Json && hiveConf) { DARABONBA_SET_RVALUE(hiveConf_, hiveConf) };


            // sparkConf Field Functions 
            bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
            void deleteSparkConf() { this->sparkConf_ = nullptr;};
            inline             const Darabonba::Json & getSparkConf() const { DARABONBA_GET(sparkConf_) };
            Darabonba::Json & getSparkConf() { DARABONBA_GET(sparkConf_) };
            inline Runtime& setSparkConf(const Darabonba::Json & sparkConf) { DARABONBA_SET_VALUE(sparkConf_, sparkConf) };
            inline Runtime& setSparkConf(Darabonba::Json && sparkConf) { DARABONBA_SET_RVALUE(sparkConf_, sparkConf) };


          protected:
            // The type of the compute engine. Only EMR compute engines support these settings.
            // 
            // *   Hive
            // *   Spark
            // *   Kyuubi
            shared_ptr<string> engine_ {};
            // Additional parameters for the Hive engine. Currently, only mapreduce.job.queuename is supported to specify the queue.
            Darabonba::Json hiveConf_ {};
            // Additional parameters for the Spark engine. Currently, only spark.yarn.queue is supported to specify the queue.
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
          // *   Prod
          // *   Dev
          shared_ptr<string> envType_ {};
          // The name of the computing resource, which corresponds to the Name attribute in the ComputeResource data structure of the computing resource API.
          shared_ptr<string> name_ {};
          // The additional runtime settings of the data quality monitor.
          shared_ptr<ComputeResource::Runtime> runtime_ {};
        };

        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr
        && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->spec_ == nullptr && this->trigger_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline const Scan::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, Scan::ComputeResource) };
        inline Scan::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, Scan::ComputeResource) };
        inline Scan& setComputeResource(const Scan::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
        inline Scan& setComputeResource(Scan::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Scan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Scan& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Scan& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hooks Field Functions 
        bool hasHooks() const { return this->hooks_ != nullptr;};
        void deleteHooks() { this->hooks_ = nullptr;};
        inline const vector<Scan::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Scan::Hooks>) };
        inline vector<Scan::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<Scan::Hooks>) };
        inline Scan& setHooks(const vector<Scan::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
        inline Scan& setHooks(vector<Scan::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Scan& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Scan& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline Scan& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Scan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Scan& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<Scan::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Scan::Parameters>) };
        inline vector<Scan::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Scan::Parameters>) };
        inline Scan& setParameters(const vector<Scan::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Scan& setParameters(vector<Scan::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Scan& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const Scan::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Scan::RuntimeResource) };
        inline Scan::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Scan::RuntimeResource) };
        inline Scan& setRuntimeResource(const Scan::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline Scan& setRuntimeResource(Scan::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Scan& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const Scan::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Scan::Trigger) };
        inline Scan::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Scan::Trigger) };
        inline Scan& setTrigger(const Scan::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline Scan& setTrigger(Scan::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      protected:
        // The computing resource settings of the data quality monitor.
        shared_ptr<Scan::ComputeResource> computeResource_ {};
        // The creation time of the data quality monitor.
        shared_ptr<int64_t> createTime_ {};
        // The creator of the data quality monitor.
        shared_ptr<string> createUser_ {};
        // The description of the data quality validation task. Maximum length: 65,535 characters.
        shared_ptr<string> description_ {};
        // The hook configurations after the data quality monitor stops.
        shared_ptr<vector<Scan::Hooks>> hooks_ {};
        // The data quality monitor ID.
        shared_ptr<int64_t> id_ {};
        // The last update time of the data quality monitor.
        shared_ptr<int64_t> modifyTime_ {};
        // The last updater of the data quality monitor.
        shared_ptr<string> modifyUser_ {};
        // The name of the data quality validation task. It can contain digits, letters, Chinese characters, and both half-width and full-width punctuation marks, with a maximum length of 255 characters.
        shared_ptr<string> name_ {};
        // The owner of the data quality monitor.
        shared_ptr<string> owner_ {};
        // The parameter settings of the data quality monitor.
        shared_ptr<vector<Scan::Parameters>> parameters_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The resource group used for running the data quality monitor.
        shared_ptr<Scan::RuntimeResource> runtimeResource_ {};
        // The data quality monitor Spec. For more information, see [Data quality Spec configuration description](https://help.aliyun.com/document_detail/2963394.html).
        shared_ptr<string> spec_ {};
        // The trigger configurations of the data quality monitor.
        shared_ptr<Scan::Trigger> trigger_ {};
      };

      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Details : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Details& obj) { 
            DARABONBA_PTR_TO_JSON(CheckValue, checkValue_);
            DARABONBA_PTR_TO_JSON(ReferenceValue, referenceValue_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Details& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckValue, checkValue_);
            DARABONBA_PTR_FROM_JSON(ReferenceValue, referenceValue_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Details() = default ;
          Details(const Details &) = default ;
          Details(Details &&) = default ;
          Details(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Details() = default ;
          Details& operator=(const Details &) = default ;
          Details& operator=(Details &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkValue_ == nullptr
        && this->referenceValue_ == nullptr && this->status_ == nullptr; };
          // checkValue Field Functions 
          bool hasCheckValue() const { return this->checkValue_ != nullptr;};
          void deleteCheckValue() { this->checkValue_ = nullptr;};
          inline string getCheckValue() const { DARABONBA_PTR_GET_DEFAULT(checkValue_, "") };
          inline Details& setCheckValue(string checkValue) { DARABONBA_PTR_SET_VALUE(checkValue_, checkValue) };


          // referenceValue Field Functions 
          bool hasReferenceValue() const { return this->referenceValue_ != nullptr;};
          void deleteReferenceValue() { this->referenceValue_ = nullptr;};
          inline string getReferenceValue() const { DARABONBA_PTR_GET_DEFAULT(referenceValue_, "") };
          inline Details& setReferenceValue(string referenceValue) { DARABONBA_PTR_SET_VALUE(referenceValue_, referenceValue) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The final value used for comparison with the threshold.
          shared_ptr<string> checkValue_ {};
          // The reference sample used as the baseline for calculating the CheckedValue.
          shared_ptr<string> referenceValue_ {};
          // The final comparison result status.
          // 
          // *   Pass
          // *   Error
          // *   Warn
          // *   Fail
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->details_ == nullptr && this->rule_ == nullptr && this->sample_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Results& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline const vector<Results::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Results::Details>) };
        inline vector<Results::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Results::Details>) };
        inline Results& setDetails(const vector<Results::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
        inline Results& setDetails(vector<Results::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline Results& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline Results& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the validation result is generated.
        shared_ptr<int64_t> createTime_ {};
        // The information about the data quality check.
        shared_ptr<vector<Results::Details>> details_ {};
        // The snapshot of the rule Spec at the start of the validation.
        shared_ptr<string> rule_ {};
        // The sample value used in the validation.
        shared_ptr<string> sample_ {};
        // The validation result status.
        // 
        // *   Pass
        // *   Running
        // *   Error
        // *   Warn
        // *   Fail
        shared_ptr<string> status_ {};
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

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->parameters_ == nullptr && this->results_ == nullptr && this->scan_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataQualityScanRun& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline DataQualityScanRun& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataQualityScanRun& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<DataQualityScanRun::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DataQualityScanRun::Parameters>) };
      inline vector<DataQualityScanRun::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DataQualityScanRun::Parameters>) };
      inline DataQualityScanRun& setParameters(const vector<DataQualityScanRun::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline DataQualityScanRun& setParameters(vector<DataQualityScanRun::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<DataQualityScanRun::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DataQualityScanRun::Results>) };
      inline vector<DataQualityScanRun::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DataQualityScanRun::Results>) };
      inline DataQualityScanRun& setResults(const vector<DataQualityScanRun::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline DataQualityScanRun& setResults(vector<DataQualityScanRun::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // scan Field Functions 
      bool hasScan() const { return this->scan_ != nullptr;};
      void deleteScan() { this->scan_ = nullptr;};
      inline const DataQualityScanRun::Scan & getScan() const { DARABONBA_PTR_GET_CONST(scan_, DataQualityScanRun::Scan) };
      inline DataQualityScanRun::Scan getScan() { DARABONBA_PTR_GET(scan_, DataQualityScanRun::Scan) };
      inline DataQualityScanRun& setScan(const DataQualityScanRun::Scan & scan) { DARABONBA_PTR_SET_VALUE(scan_, scan) };
      inline DataQualityScanRun& setScan(DataQualityScanRun::Scan && scan) { DARABONBA_PTR_SET_RVALUE(scan_, scan) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataQualityScanRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the data quality monitor starts running.
      shared_ptr<int64_t> createTime_ {};
      // The time when the data quality monitor stops.
      shared_ptr<int64_t> finishTime_ {};
      // The running record ID.
      shared_ptr<int64_t> id_ {};
      // The parameter settings used during the actual running.
      shared_ptr<vector<DataQualityScanRun::Parameters>> parameters_ {};
      // The validation results of each rule.
      shared_ptr<vector<DataQualityScanRun::Results>> results_ {};
      // The snapshot of the data quality monitor configuration at the start of the validation.
      shared_ptr<DataQualityScanRun::Scan> scan_ {};
      // The current running status.
      // 
      // *   Pass
      // *   Running
      // *   Error
      // *   Warn
      // *   Fail
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->dataQualityScanRun_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityScanRun Field Functions 
    bool hasDataQualityScanRun() const { return this->dataQualityScanRun_ != nullptr;};
    void deleteDataQualityScanRun() { this->dataQualityScanRun_ = nullptr;};
    inline const GetDataQualityScanRunResponseBody::DataQualityScanRun & getDataQualityScanRun() const { DARABONBA_PTR_GET_CONST(dataQualityScanRun_, GetDataQualityScanRunResponseBody::DataQualityScanRun) };
    inline GetDataQualityScanRunResponseBody::DataQualityScanRun getDataQualityScanRun() { DARABONBA_PTR_GET(dataQualityScanRun_, GetDataQualityScanRunResponseBody::DataQualityScanRun) };
    inline GetDataQualityScanRunResponseBody& setDataQualityScanRun(const GetDataQualityScanRunResponseBody::DataQualityScanRun & dataQualityScanRun) { DARABONBA_PTR_SET_VALUE(dataQualityScanRun_, dataQualityScanRun) };
    inline GetDataQualityScanRunResponseBody& setDataQualityScanRun(GetDataQualityScanRunResponseBody::DataQualityScanRun && dataQualityScanRun) { DARABONBA_PTR_SET_RVALUE(dataQualityScanRun_, dataQualityScanRun) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data quality monitoring running records.
    shared_ptr<GetDataQualityScanRunResponseBody::DataQualityScanRun> dataQualityScanRun_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
