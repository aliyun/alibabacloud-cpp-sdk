// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateProcessDefinitionWithScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionWithScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(globalParams, globalParams_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_TO_JSON(publish, publish_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceQueue, resourceQueue_);
      DARABONBA_PTR_TO_JSON(retryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(runAs, runAs_);
      DARABONBA_PTR_TO_JSON(schedule, schedule_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskDefinitionJson, taskDefinitionJson_);
      DARABONBA_PTR_TO_JSON(taskParallelism, taskParallelism_);
      DARABONBA_PTR_TO_JSON(taskRelationJson, taskRelationJson_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionWithScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(globalParams, globalParams_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_FROM_JSON(publish, publish_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceQueue, resourceQueue_);
      DARABONBA_PTR_FROM_JSON(retryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(runAs, runAs_);
      DARABONBA_PTR_FROM_JSON(schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskDefinitionJson, taskDefinitionJson_);
      DARABONBA_PTR_FROM_JSON(taskParallelism, taskParallelism_);
      DARABONBA_PTR_FROM_JSON(taskRelationJson, taskRelationJson_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
    };
    CreateProcessDefinitionWithScheduleRequest() = default ;
    CreateProcessDefinitionWithScheduleRequest(const CreateProcessDefinitionWithScheduleRequest &) = default ;
    CreateProcessDefinitionWithScheduleRequest(CreateProcessDefinitionWithScheduleRequest &&) = default ;
    CreateProcessDefinitionWithScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionWithScheduleRequest() = default ;
    CreateProcessDefinitionWithScheduleRequest& operator=(const CreateProcessDefinitionWithScheduleRequest &) = default ;
    CreateProcessDefinitionWithScheduleRequest& operator=(CreateProcessDefinitionWithScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskRelationJson : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskRelationJson& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(postTaskCode, postTaskCode_);
        DARABONBA_PTR_TO_JSON(postTaskVersion, postTaskVersion_);
        DARABONBA_PTR_TO_JSON(preTaskCode, preTaskCode_);
        DARABONBA_PTR_TO_JSON(preTaskVersion, preTaskVersion_);
      };
      friend void from_json(const Darabonba::Json& j, TaskRelationJson& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(postTaskCode, postTaskCode_);
        DARABONBA_PTR_FROM_JSON(postTaskVersion, postTaskVersion_);
        DARABONBA_PTR_FROM_JSON(preTaskCode, preTaskCode_);
        DARABONBA_PTR_FROM_JSON(preTaskVersion, preTaskVersion_);
      };
      TaskRelationJson() = default ;
      TaskRelationJson(const TaskRelationJson &) = default ;
      TaskRelationJson(TaskRelationJson &&) = default ;
      TaskRelationJson(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskRelationJson() = default ;
      TaskRelationJson& operator=(const TaskRelationJson &) = default ;
      TaskRelationJson& operator=(TaskRelationJson &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->postTaskCode_ == nullptr && this->postTaskVersion_ == nullptr && this->preTaskCode_ == nullptr && this->preTaskVersion_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TaskRelationJson& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // postTaskCode Field Functions 
      bool hasPostTaskCode() const { return this->postTaskCode_ != nullptr;};
      void deletePostTaskCode() { this->postTaskCode_ = nullptr;};
      inline int64_t getPostTaskCode() const { DARABONBA_PTR_GET_DEFAULT(postTaskCode_, 0L) };
      inline TaskRelationJson& setPostTaskCode(int64_t postTaskCode) { DARABONBA_PTR_SET_VALUE(postTaskCode_, postTaskCode) };


      // postTaskVersion Field Functions 
      bool hasPostTaskVersion() const { return this->postTaskVersion_ != nullptr;};
      void deletePostTaskVersion() { this->postTaskVersion_ = nullptr;};
      inline int32_t getPostTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(postTaskVersion_, 0) };
      inline TaskRelationJson& setPostTaskVersion(int32_t postTaskVersion) { DARABONBA_PTR_SET_VALUE(postTaskVersion_, postTaskVersion) };


      // preTaskCode Field Functions 
      bool hasPreTaskCode() const { return this->preTaskCode_ != nullptr;};
      void deletePreTaskCode() { this->preTaskCode_ = nullptr;};
      inline int64_t getPreTaskCode() const { DARABONBA_PTR_GET_DEFAULT(preTaskCode_, 0L) };
      inline TaskRelationJson& setPreTaskCode(int64_t preTaskCode) { DARABONBA_PTR_SET_VALUE(preTaskCode_, preTaskCode) };


      // preTaskVersion Field Functions 
      bool hasPreTaskVersion() const { return this->preTaskVersion_ != nullptr;};
      void deletePreTaskVersion() { this->preTaskVersion_ = nullptr;};
      inline int32_t getPreTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(preTaskVersion_, 0) };
      inline TaskRelationJson& setPreTaskVersion(int32_t preTaskVersion) { DARABONBA_PTR_SET_VALUE(preTaskVersion_, preTaskVersion) };


    protected:
      // The name of the node topology. You can enter a workflow name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The ID of the downstream node.
      // 
      // This parameter is required.
      shared_ptr<int64_t> postTaskCode_ {};
      // The version of the downstream node.
      // 
      // This parameter is required.
      shared_ptr<int32_t> postTaskVersion_ {};
      // The ID of the upstream node.
      // 
      // This parameter is required.
      shared_ptr<int64_t> preTaskCode_ {};
      // The version of the upstream node.
      // 
      // This parameter is required.
      shared_ptr<int32_t> preTaskVersion_ {};
    };

    class TaskDefinitionJson : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDefinitionJson& obj) { 
        DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(failAlertEnable, failAlertEnable_);
        DARABONBA_PTR_TO_JSON(failRetryTimes, failRetryTimes_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(startAlertEnable, startAlertEnable_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(taskParams, taskParams_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(timeout, timeout_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDefinitionJson& obj) { 
        DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(failAlertEnable, failAlertEnable_);
        DARABONBA_PTR_FROM_JSON(failRetryTimes, failRetryTimes_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(startAlertEnable, startAlertEnable_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(taskParams, taskParams_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      };
      TaskDefinitionJson() = default ;
      TaskDefinitionJson(const TaskDefinitionJson &) = default ;
      TaskDefinitionJson(TaskDefinitionJson &&) = default ;
      TaskDefinitionJson(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDefinitionJson() = default ;
      TaskDefinitionJson& operator=(const TaskDefinitionJson &) = default ;
      TaskDefinitionJson& operator=(TaskDefinitionJson &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskParams& obj) { 
          DARABONBA_PTR_TO_JSON(displaySparkVersion, displaySparkVersion_);
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(fusion, fusion_);
          DARABONBA_PTR_TO_JSON(localParams, localParams_);
          DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
          DARABONBA_PTR_TO_JSON(sparkConf, sparkConf_);
          DARABONBA_PTR_TO_JSON(sparkDriverCores, sparkDriverCores_);
          DARABONBA_PTR_TO_JSON(sparkDriverMemory, sparkDriverMemory_);
          DARABONBA_PTR_TO_JSON(sparkExecutorCores, sparkExecutorCores_);
          DARABONBA_PTR_TO_JSON(sparkExecutorMemory, sparkExecutorMemory_);
          DARABONBA_PTR_TO_JSON(sparkLogLevel, sparkLogLevel_);
          DARABONBA_PTR_TO_JSON(sparkLogPath, sparkLogPath_);
          DARABONBA_PTR_TO_JSON(sparkVersion, sparkVersion_);
          DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(workspaceBizId, workspaceBizId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskParams& obj) { 
          DARABONBA_PTR_FROM_JSON(displaySparkVersion, displaySparkVersion_);
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(fusion, fusion_);
          DARABONBA_PTR_FROM_JSON(localParams, localParams_);
          DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
          DARABONBA_PTR_FROM_JSON(sparkConf, sparkConf_);
          DARABONBA_PTR_FROM_JSON(sparkDriverCores, sparkDriverCores_);
          DARABONBA_PTR_FROM_JSON(sparkDriverMemory, sparkDriverMemory_);
          DARABONBA_PTR_FROM_JSON(sparkExecutorCores, sparkExecutorCores_);
          DARABONBA_PTR_FROM_JSON(sparkExecutorMemory, sparkExecutorMemory_);
          DARABONBA_PTR_FROM_JSON(sparkLogLevel, sparkLogLevel_);
          DARABONBA_PTR_FROM_JSON(sparkLogPath, sparkLogPath_);
          DARABONBA_PTR_FROM_JSON(sparkVersion, sparkVersion_);
          DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(workspaceBizId, workspaceBizId_);
        };
        TaskParams() = default ;
        TaskParams(const TaskParams &) = default ;
        TaskParams(TaskParams &&) = default ;
        TaskParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskParams() = default ;
        TaskParams& operator=(const TaskParams &) = default ;
        TaskParams& operator=(TaskParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SparkConf : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SparkConf& obj) { 
            DARABONBA_PTR_TO_JSON(key, key_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SparkConf& obj) { 
            DARABONBA_PTR_FROM_JSON(key, key_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          SparkConf() = default ;
          SparkConf(const SparkConf &) = default ;
          SparkConf(SparkConf &&) = default ;
          SparkConf(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SparkConf() = default ;
          SparkConf& operator=(const SparkConf &) = default ;
          SparkConf& operator=(SparkConf &&) = default ;
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
          inline SparkConf& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SparkConf& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the SparkConf object.
          shared_ptr<string> key_ {};
          // The value of the SparkConf object.
          shared_ptr<string> value_ {};
        };

        class LocalParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LocalParams& obj) { 
            DARABONBA_PTR_TO_JSON(direct, direct_);
            DARABONBA_PTR_TO_JSON(prop, prop_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LocalParams& obj) { 
            DARABONBA_PTR_FROM_JSON(direct, direct_);
            DARABONBA_PTR_FROM_JSON(prop, prop_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          LocalParams() = default ;
          LocalParams(const LocalParams &) = default ;
          LocalParams(LocalParams &&) = default ;
          LocalParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LocalParams() = default ;
          LocalParams& operator=(const LocalParams &) = default ;
          LocalParams& operator=(LocalParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->direct_ == nullptr
        && this->prop_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // direct Field Functions 
          bool hasDirect() const { return this->direct_ != nullptr;};
          void deleteDirect() { this->direct_ = nullptr;};
          inline string getDirect() const { DARABONBA_PTR_GET_DEFAULT(direct_, "") };
          inline LocalParams& setDirect(string direct) { DARABONBA_PTR_SET_VALUE(direct_, direct) };


          // prop Field Functions 
          bool hasProp() const { return this->prop_ != nullptr;};
          void deleteProp() { this->prop_ = nullptr;};
          inline string getProp() const { DARABONBA_PTR_GET_DEFAULT(prop_, "") };
          inline LocalParams& setProp(string prop) { DARABONBA_PTR_SET_VALUE(prop_, prop) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline LocalParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline LocalParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> direct_ {};
          shared_ptr<string> prop_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->displaySparkVersion_ == nullptr
        && this->environmentId_ == nullptr && this->fusion_ == nullptr && this->localParams_ == nullptr && this->resourceQueueId_ == nullptr && this->sparkConf_ == nullptr
        && this->sparkDriverCores_ == nullptr && this->sparkDriverMemory_ == nullptr && this->sparkExecutorCores_ == nullptr && this->sparkExecutorMemory_ == nullptr && this->sparkLogLevel_ == nullptr
        && this->sparkLogPath_ == nullptr && this->sparkVersion_ == nullptr && this->taskBizId_ == nullptr && this->type_ == nullptr && this->workspaceBizId_ == nullptr; };
        // displaySparkVersion Field Functions 
        bool hasDisplaySparkVersion() const { return this->displaySparkVersion_ != nullptr;};
        void deleteDisplaySparkVersion() { this->displaySparkVersion_ = nullptr;};
        inline string getDisplaySparkVersion() const { DARABONBA_PTR_GET_DEFAULT(displaySparkVersion_, "") };
        inline TaskParams& setDisplaySparkVersion(string displaySparkVersion) { DARABONBA_PTR_SET_VALUE(displaySparkVersion_, displaySparkVersion) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline TaskParams& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // fusion Field Functions 
        bool hasFusion() const { return this->fusion_ != nullptr;};
        void deleteFusion() { this->fusion_ = nullptr;};
        inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
        inline TaskParams& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


        // localParams Field Functions 
        bool hasLocalParams() const { return this->localParams_ != nullptr;};
        void deleteLocalParams() { this->localParams_ = nullptr;};
        inline const vector<TaskParams::LocalParams> & getLocalParams() const { DARABONBA_PTR_GET_CONST(localParams_, vector<TaskParams::LocalParams>) };
        inline vector<TaskParams::LocalParams> getLocalParams() { DARABONBA_PTR_GET(localParams_, vector<TaskParams::LocalParams>) };
        inline TaskParams& setLocalParams(const vector<TaskParams::LocalParams> & localParams) { DARABONBA_PTR_SET_VALUE(localParams_, localParams) };
        inline TaskParams& setLocalParams(vector<TaskParams::LocalParams> && localParams) { DARABONBA_PTR_SET_RVALUE(localParams_, localParams) };


        // resourceQueueId Field Functions 
        bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
        void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
        inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
        inline TaskParams& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


        // sparkConf Field Functions 
        bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
        void deleteSparkConf() { this->sparkConf_ = nullptr;};
        inline const vector<TaskParams::SparkConf> & getSparkConf() const { DARABONBA_PTR_GET_CONST(sparkConf_, vector<TaskParams::SparkConf>) };
        inline vector<TaskParams::SparkConf> getSparkConf() { DARABONBA_PTR_GET(sparkConf_, vector<TaskParams::SparkConf>) };
        inline TaskParams& setSparkConf(const vector<TaskParams::SparkConf> & sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };
        inline TaskParams& setSparkConf(vector<TaskParams::SparkConf> && sparkConf) { DARABONBA_PTR_SET_RVALUE(sparkConf_, sparkConf) };


        // sparkDriverCores Field Functions 
        bool hasSparkDriverCores() const { return this->sparkDriverCores_ != nullptr;};
        void deleteSparkDriverCores() { this->sparkDriverCores_ = nullptr;};
        inline int32_t getSparkDriverCores() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverCores_, 0) };
        inline TaskParams& setSparkDriverCores(int32_t sparkDriverCores) { DARABONBA_PTR_SET_VALUE(sparkDriverCores_, sparkDriverCores) };


        // sparkDriverMemory Field Functions 
        bool hasSparkDriverMemory() const { return this->sparkDriverMemory_ != nullptr;};
        void deleteSparkDriverMemory() { this->sparkDriverMemory_ = nullptr;};
        inline int64_t getSparkDriverMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkDriverMemory_, 0L) };
        inline TaskParams& setSparkDriverMemory(int64_t sparkDriverMemory) { DARABONBA_PTR_SET_VALUE(sparkDriverMemory_, sparkDriverMemory) };


        // sparkExecutorCores Field Functions 
        bool hasSparkExecutorCores() const { return this->sparkExecutorCores_ != nullptr;};
        void deleteSparkExecutorCores() { this->sparkExecutorCores_ = nullptr;};
        inline int32_t getSparkExecutorCores() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorCores_, 0) };
        inline TaskParams& setSparkExecutorCores(int32_t sparkExecutorCores) { DARABONBA_PTR_SET_VALUE(sparkExecutorCores_, sparkExecutorCores) };


        // sparkExecutorMemory Field Functions 
        bool hasSparkExecutorMemory() const { return this->sparkExecutorMemory_ != nullptr;};
        void deleteSparkExecutorMemory() { this->sparkExecutorMemory_ = nullptr;};
        inline int64_t getSparkExecutorMemory() const { DARABONBA_PTR_GET_DEFAULT(sparkExecutorMemory_, 0L) };
        inline TaskParams& setSparkExecutorMemory(int64_t sparkExecutorMemory) { DARABONBA_PTR_SET_VALUE(sparkExecutorMemory_, sparkExecutorMemory) };


        // sparkLogLevel Field Functions 
        bool hasSparkLogLevel() const { return this->sparkLogLevel_ != nullptr;};
        void deleteSparkLogLevel() { this->sparkLogLevel_ = nullptr;};
        inline string getSparkLogLevel() const { DARABONBA_PTR_GET_DEFAULT(sparkLogLevel_, "") };
        inline TaskParams& setSparkLogLevel(string sparkLogLevel) { DARABONBA_PTR_SET_VALUE(sparkLogLevel_, sparkLogLevel) };


        // sparkLogPath Field Functions 
        bool hasSparkLogPath() const { return this->sparkLogPath_ != nullptr;};
        void deleteSparkLogPath() { this->sparkLogPath_ = nullptr;};
        inline string getSparkLogPath() const { DARABONBA_PTR_GET_DEFAULT(sparkLogPath_, "") };
        inline TaskParams& setSparkLogPath(string sparkLogPath) { DARABONBA_PTR_SET_VALUE(sparkLogPath_, sparkLogPath) };


        // sparkVersion Field Functions 
        bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
        void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
        inline string getSparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
        inline TaskParams& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


        // taskBizId Field Functions 
        bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
        void deleteTaskBizId() { this->taskBizId_ = nullptr;};
        inline string getTaskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
        inline TaskParams& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TaskParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // workspaceBizId Field Functions 
        bool hasWorkspaceBizId() const { return this->workspaceBizId_ != nullptr;};
        void deleteWorkspaceBizId() { this->workspaceBizId_ = nullptr;};
        inline string getWorkspaceBizId() const { DARABONBA_PTR_GET_DEFAULT(workspaceBizId_, "") };
        inline TaskParams& setWorkspaceBizId(string workspaceBizId) { DARABONBA_PTR_SET_VALUE(workspaceBizId_, workspaceBizId) };


      protected:
        // The displayed version of the Spark engine.
        shared_ptr<string> displaySparkVersion_ {};
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // Specifies whether to enable Fusion engine for acceleration.
        shared_ptr<bool> fusion_ {};
        shared_ptr<vector<TaskParams::LocalParams>> localParams_ {};
        // The name of the resource queue on which the job runs.
        // 
        // This parameter is required.
        shared_ptr<string> resourceQueueId_ {};
        // The configurations of the Spark job.
        shared_ptr<vector<TaskParams::SparkConf>> sparkConf_ {};
        // The number of driver cores of the Spark job.
        shared_ptr<int32_t> sparkDriverCores_ {};
        // The size of driver memory of the Spark job.
        shared_ptr<int64_t> sparkDriverMemory_ {};
        // The number of executor cores of the Spark job.
        shared_ptr<int32_t> sparkExecutorCores_ {};
        // The size of executor memory of the Spark job.
        shared_ptr<int64_t> sparkExecutorMemory_ {};
        // The level of the Spark log.
        shared_ptr<string> sparkLogLevel_ {};
        // The path where the operational logs of the Spark job are stored.
        shared_ptr<string> sparkLogPath_ {};
        // The version of the Spark engine.
        shared_ptr<string> sparkVersion_ {};
        // The ID of the data development job.
        // 
        // This parameter is required.
        shared_ptr<string> taskBizId_ {};
        // The type of the Spark job.
        shared_ptr<string> type_ {};
        // The workspace ID.
        // 
        // This parameter is required.
        shared_ptr<string> workspaceBizId_ {};
      };

      virtual bool empty() const override { return this->alertEmailAddress_ == nullptr
        && this->code_ == nullptr && this->description_ == nullptr && this->failAlertEnable_ == nullptr && this->failRetryTimes_ == nullptr && this->name_ == nullptr
        && this->startAlertEnable_ == nullptr && this->tags_ == nullptr && this->taskParams_ == nullptr && this->taskType_ == nullptr && this->timeout_ == nullptr; };
      // alertEmailAddress Field Functions 
      bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
      void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
      inline string getAlertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
      inline TaskDefinitionJson& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
      inline TaskDefinitionJson& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TaskDefinitionJson& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // failAlertEnable Field Functions 
      bool hasFailAlertEnable() const { return this->failAlertEnable_ != nullptr;};
      void deleteFailAlertEnable() { this->failAlertEnable_ = nullptr;};
      inline bool getFailAlertEnable() const { DARABONBA_PTR_GET_DEFAULT(failAlertEnable_, false) };
      inline TaskDefinitionJson& setFailAlertEnable(bool failAlertEnable) { DARABONBA_PTR_SET_VALUE(failAlertEnable_, failAlertEnable) };


      // failRetryTimes Field Functions 
      bool hasFailRetryTimes() const { return this->failRetryTimes_ != nullptr;};
      void deleteFailRetryTimes() { this->failRetryTimes_ = nullptr;};
      inline int32_t getFailRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(failRetryTimes_, 0) };
      inline TaskDefinitionJson& setFailRetryTimes(int32_t failRetryTimes) { DARABONBA_PTR_SET_VALUE(failRetryTimes_, failRetryTimes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TaskDefinitionJson& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // startAlertEnable Field Functions 
      bool hasStartAlertEnable() const { return this->startAlertEnable_ != nullptr;};
      void deleteStartAlertEnable() { this->startAlertEnable_ = nullptr;};
      inline bool getStartAlertEnable() const { DARABONBA_PTR_GET_DEFAULT(startAlertEnable_, false) };
      inline TaskDefinitionJson& setStartAlertEnable(bool startAlertEnable) { DARABONBA_PTR_SET_VALUE(startAlertEnable_, startAlertEnable) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
      inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
      inline TaskDefinitionJson& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TaskDefinitionJson& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskParams Field Functions 
      bool hasTaskParams() const { return this->taskParams_ != nullptr;};
      void deleteTaskParams() { this->taskParams_ = nullptr;};
      inline const TaskDefinitionJson::TaskParams & getTaskParams() const { DARABONBA_PTR_GET_CONST(taskParams_, TaskDefinitionJson::TaskParams) };
      inline TaskDefinitionJson::TaskParams getTaskParams() { DARABONBA_PTR_GET(taskParams_, TaskDefinitionJson::TaskParams) };
      inline TaskDefinitionJson& setTaskParams(const TaskDefinitionJson::TaskParams & taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };
      inline TaskDefinitionJson& setTaskParams(TaskDefinitionJson::TaskParams && taskParams) { DARABONBA_PTR_SET_RVALUE(taskParams_, taskParams) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskDefinitionJson& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline TaskDefinitionJson& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    protected:
      // The email address to receive alerts.
      shared_ptr<string> alertEmailAddress_ {};
      // The node ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> code_ {};
      // The node description.
      shared_ptr<string> description_ {};
      // Specifies whether to send alerts when the node fails.
      shared_ptr<bool> failAlertEnable_ {};
      // The number of retries when the node fails.
      shared_ptr<int32_t> failRetryTimes_ {};
      // The name of the node.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // Specifies whether to send alerts when the node is started.
      shared_ptr<bool> startAlertEnable_ {};
      // The tags.
      shared_ptr<map<string, string>> tags_ {};
      // The job parameters.
      // 
      // This parameter is required.
      shared_ptr<TaskDefinitionJson::TaskParams> taskParams_ {};
      // The type of the node.
      // 
      // This parameter is required.
      shared_ptr<string> taskType_ {};
      // The timeout period of the callback. Unit: seconds.
      shared_ptr<int32_t> timeout_ {};
    };

    class Schedule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
        DARABONBA_PTR_TO_JSON(crontab, crontab_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(timezoneId, timezoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
        DARABONBA_PTR_FROM_JSON(crontab, crontab_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(timezoneId, timezoneId_);
      };
      Schedule() = default ;
      Schedule(const Schedule &) = default ;
      Schedule(Schedule &&) = default ;
      Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schedule() = default ;
      Schedule& operator=(const Schedule &) = default ;
      Schedule& operator=(Schedule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->crontab_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->timezoneId_ == nullptr; };
      // crontab Field Functions 
      bool hasCrontab() const { return this->crontab_ != nullptr;};
      void deleteCrontab() { this->crontab_ = nullptr;};
      inline string getCrontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
      inline Schedule& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Schedule& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Schedule& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // timezoneId Field Functions 
      bool hasTimezoneId() const { return this->timezoneId_ != nullptr;};
      void deleteTimezoneId() { this->timezoneId_ = nullptr;};
      inline string getTimezoneId() const { DARABONBA_PTR_GET_DEFAULT(timezoneId_, "") };
      inline Schedule& setTimezoneId(string timezoneId) { DARABONBA_PTR_SET_VALUE(timezoneId_, timezoneId) };


    protected:
      // The CRON expression that is used for scheduling.
      shared_ptr<string> crontab_ {};
      // The end time of the scheduling.
      shared_ptr<string> endTime_ {};
      // The start time of the scheduling.
      shared_ptr<string> startTime_ {};
      // The ID of the time zone.
      shared_ptr<string> timezoneId_ {};
    };

    class GlobalParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalParams& obj) { 
        DARABONBA_PTR_TO_JSON(direct, direct_);
        DARABONBA_PTR_TO_JSON(prop, prop_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalParams& obj) { 
        DARABONBA_PTR_FROM_JSON(direct, direct_);
        DARABONBA_PTR_FROM_JSON(prop, prop_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      GlobalParams() = default ;
      GlobalParams(const GlobalParams &) = default ;
      GlobalParams(GlobalParams &&) = default ;
      GlobalParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalParams() = default ;
      GlobalParams& operator=(const GlobalParams &) = default ;
      GlobalParams& operator=(GlobalParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->direct_ == nullptr
        && this->prop_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // direct Field Functions 
      bool hasDirect() const { return this->direct_ != nullptr;};
      void deleteDirect() { this->direct_ = nullptr;};
      inline string getDirect() const { DARABONBA_PTR_GET_DEFAULT(direct_, "") };
      inline GlobalParams& setDirect(string direct) { DARABONBA_PTR_SET_VALUE(direct_, direct) };


      // prop Field Functions 
      bool hasProp() const { return this->prop_ != nullptr;};
      void deleteProp() { this->prop_ = nullptr;};
      inline string getProp() const { DARABONBA_PTR_GET_DEFAULT(prop_, "") };
      inline GlobalParams& setProp(string prop) { DARABONBA_PTR_SET_VALUE(prop_, prop) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GlobalParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline GlobalParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> direct_ {};
      shared_ptr<string> prop_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alertEmailAddress_ == nullptr
        && this->description_ == nullptr && this->executionType_ == nullptr && this->globalParams_ == nullptr && this->name_ == nullptr && this->productNamespace_ == nullptr
        && this->publish_ == nullptr && this->regionId_ == nullptr && this->resourceQueue_ == nullptr && this->retryTimes_ == nullptr && this->runAs_ == nullptr
        && this->schedule_ == nullptr && this->tags_ == nullptr && this->taskDefinitionJson_ == nullptr && this->taskParallelism_ == nullptr && this->taskRelationJson_ == nullptr
        && this->timeout_ == nullptr; };
    // alertEmailAddress Field Functions 
    bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
    void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
    inline string getAlertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // globalParams Field Functions 
    bool hasGlobalParams() const { return this->globalParams_ != nullptr;};
    void deleteGlobalParams() { this->globalParams_ = nullptr;};
    inline const vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams> & getGlobalParams() const { DARABONBA_PTR_GET_CONST(globalParams_, vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams>) };
    inline vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams> getGlobalParams() { DARABONBA_PTR_GET(globalParams_, vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams>) };
    inline CreateProcessDefinitionWithScheduleRequest& setGlobalParams(const vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams> & globalParams) { DARABONBA_PTR_SET_VALUE(globalParams_, globalParams) };
    inline CreateProcessDefinitionWithScheduleRequest& setGlobalParams(vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams> && globalParams) { DARABONBA_PTR_SET_RVALUE(globalParams_, globalParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productNamespace Field Functions 
    bool hasProductNamespace() const { return this->productNamespace_ != nullptr;};
    void deleteProductNamespace() { this->productNamespace_ = nullptr;};
    inline string getProductNamespace() const { DARABONBA_PTR_GET_DEFAULT(productNamespace_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setProductNamespace(string productNamespace) { DARABONBA_PTR_SET_VALUE(productNamespace_, productNamespace) };


    // publish Field Functions 
    bool hasPublish() const { return this->publish_ != nullptr;};
    void deletePublish() { this->publish_ = nullptr;};
    inline bool getPublish() const { DARABONBA_PTR_GET_DEFAULT(publish_, false) };
    inline CreateProcessDefinitionWithScheduleRequest& setPublish(bool publish) { DARABONBA_PTR_SET_VALUE(publish_, publish) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceQueue Field Functions 
    bool hasResourceQueue() const { return this->resourceQueue_ != nullptr;};
    void deleteResourceQueue() { this->resourceQueue_ = nullptr;};
    inline string getResourceQueue() const { DARABONBA_PTR_GET_DEFAULT(resourceQueue_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setResourceQueue(string resourceQueue) { DARABONBA_PTR_SET_VALUE(resourceQueue_, resourceQueue) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline CreateProcessDefinitionWithScheduleRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // runAs Field Functions 
    bool hasRunAs() const { return this->runAs_ != nullptr;};
    void deleteRunAs() { this->runAs_ = nullptr;};
    inline string getRunAs() const { DARABONBA_PTR_GET_DEFAULT(runAs_, "") };
    inline CreateProcessDefinitionWithScheduleRequest& setRunAs(string runAs) { DARABONBA_PTR_SET_VALUE(runAs_, runAs) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const CreateProcessDefinitionWithScheduleRequest::Schedule & getSchedule() const { DARABONBA_PTR_GET_CONST(schedule_, CreateProcessDefinitionWithScheduleRequest::Schedule) };
    inline CreateProcessDefinitionWithScheduleRequest::Schedule getSchedule() { DARABONBA_PTR_GET(schedule_, CreateProcessDefinitionWithScheduleRequest::Schedule) };
    inline CreateProcessDefinitionWithScheduleRequest& setSchedule(const CreateProcessDefinitionWithScheduleRequest::Schedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline CreateProcessDefinitionWithScheduleRequest& setSchedule(CreateProcessDefinitionWithScheduleRequest::Schedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline CreateProcessDefinitionWithScheduleRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateProcessDefinitionWithScheduleRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDefinitionJson Field Functions 
    bool hasTaskDefinitionJson() const { return this->taskDefinitionJson_ != nullptr;};
    void deleteTaskDefinitionJson() { this->taskDefinitionJson_ = nullptr;};
    inline const vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson> & getTaskDefinitionJson() const { DARABONBA_PTR_GET_CONST(taskDefinitionJson_, vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson>) };
    inline vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson> getTaskDefinitionJson() { DARABONBA_PTR_GET(taskDefinitionJson_, vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson>) };
    inline CreateProcessDefinitionWithScheduleRequest& setTaskDefinitionJson(const vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson> & taskDefinitionJson) { DARABONBA_PTR_SET_VALUE(taskDefinitionJson_, taskDefinitionJson) };
    inline CreateProcessDefinitionWithScheduleRequest& setTaskDefinitionJson(vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson> && taskDefinitionJson) { DARABONBA_PTR_SET_RVALUE(taskDefinitionJson_, taskDefinitionJson) };


    // taskParallelism Field Functions 
    bool hasTaskParallelism() const { return this->taskParallelism_ != nullptr;};
    void deleteTaskParallelism() { this->taskParallelism_ = nullptr;};
    inline int32_t getTaskParallelism() const { DARABONBA_PTR_GET_DEFAULT(taskParallelism_, 0) };
    inline CreateProcessDefinitionWithScheduleRequest& setTaskParallelism(int32_t taskParallelism) { DARABONBA_PTR_SET_VALUE(taskParallelism_, taskParallelism) };


    // taskRelationJson Field Functions 
    bool hasTaskRelationJson() const { return this->taskRelationJson_ != nullptr;};
    void deleteTaskRelationJson() { this->taskRelationJson_ = nullptr;};
    inline const vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson> & getTaskRelationJson() const { DARABONBA_PTR_GET_CONST(taskRelationJson_, vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson>) };
    inline vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson> getTaskRelationJson() { DARABONBA_PTR_GET(taskRelationJson_, vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson>) };
    inline CreateProcessDefinitionWithScheduleRequest& setTaskRelationJson(const vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson> & taskRelationJson) { DARABONBA_PTR_SET_VALUE(taskRelationJson_, taskRelationJson) };
    inline CreateProcessDefinitionWithScheduleRequest& setTaskRelationJson(vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson> && taskRelationJson) { DARABONBA_PTR_SET_RVALUE(taskRelationJson_, taskRelationJson) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateProcessDefinitionWithScheduleRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The email address to receive alerts.
    shared_ptr<string> alertEmailAddress_ {};
    // The description of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The execution policy
    // 
    // This parameter is required.
    shared_ptr<string> executionType_ {};
    shared_ptr<vector<CreateProcessDefinitionWithScheduleRequest::GlobalParams>> globalParams_ {};
    // The name of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The code of the service.
    // 
    // This parameter is required.
    shared_ptr<string> productNamespace_ {};
    // Specifies whether to publish the workflow.
    shared_ptr<bool> publish_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource queue.
    shared_ptr<string> resourceQueue_ {};
    // The number of retries.
    shared_ptr<int32_t> retryTimes_ {};
    // The ID of the Alibaba Cloud account used by the user who creates the workflow.
    shared_ptr<string> runAs_ {};
    // The scheduling settings.
    shared_ptr<CreateProcessDefinitionWithScheduleRequest::Schedule> schedule_ {};
    // The tags.
    shared_ptr<map<string, string>> tags_ {};
    // The descriptions of all nodes in the workflow.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateProcessDefinitionWithScheduleRequest::TaskDefinitionJson>> taskDefinitionJson_ {};
    // The node parallelism.
    shared_ptr<int32_t> taskParallelism_ {};
    // The dependencies of all nodes in the workflow. preTaskCode specifies the ID of an upstream node, and postTaskCode specifies the ID of a downstream node. The ID of each node is unique. If a node does not have an upstream node, set preTaskCode to 0.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateProcessDefinitionWithScheduleRequest::TaskRelationJson>> taskRelationJson_ {};
    // The default timeout period of the workflow.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
