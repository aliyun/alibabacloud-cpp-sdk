// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
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
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Inputs, inputs_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Outputs, outputs_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Trigger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
            DARABONBA_PTR_TO_JSON(Cron, cron_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Timezone, timezone_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
            DARABONBA_PTR_FROM_JSON(Cron, cron_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
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
        && this->endTime_ == nullptr && this->id_ == nullptr && this->startTime_ == nullptr && this->timezone_ == nullptr && this->type_ == nullptr; };
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


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Trigger& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline Trigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timezone Field Functions 
          bool hasTimezone() const { return this->timezone_ != nullptr;};
          void deleteTimezone() { this->timezone_ = nullptr;};
          inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
          inline Trigger& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The cron expression for scheduling.
          shared_ptr<string> cron_ {};
          // The end time of the validity period of the trigger.
          shared_ptr<string> endTime_ {};
          // The trigger ID.
          // 
          // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
          shared_ptr<string> id_ {};
          // The start time of the validity period of the trigger.
          shared_ptr<string> startTime_ {};
          // The time zone.
          shared_ptr<string> timezone_ {};
          // The trigger type.
          // 
          // Valid values:
          // 
          // *   Scheduler: Periodic scheduling
          // *   Manual: Manual trigger
          // *   Streaming: Streaming task
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

        class Strategy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
            DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
            DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          };
          friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
            DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
            DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
            DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          };
          Strategy() = default ;
          Strategy(const Strategy &) = default ;
          Strategy(Strategy &&) = default ;
          Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Strategy() = default ;
          Strategy& operator=(const Strategy &) = default ;
          Strategy& operator=(Strategy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceMode_ == nullptr
        && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr && this->timeout_ == nullptr; };
          // instanceMode Field Functions 
          bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
          void deleteInstanceMode() { this->instanceMode_ = nullptr;};
          inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
          inline Strategy& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


          // rerunInterval Field Functions 
          bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
          void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
          inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
          inline Strategy& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


          // rerunMode Field Functions 
          bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
          void deleteRerunMode() { this->rerunMode_ = nullptr;};
          inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
          inline Strategy& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


          // rerunTimes Field Functions 
          bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
          void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
          inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
          inline Strategy& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
          inline Strategy& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        protected:
          // The instance generation mode. Valid values:
          // 
          // *   T+1
          // *   Immediately
          shared_ptr<string> instanceMode_ {};
          // The rerun interval. Unit: milliseconds.
          shared_ptr<int32_t> rerunInterval_ {};
          // The rerun mode. Valid values:
          // 
          // *   Allowed
          // *   Denied
          // *   FailureAllowed
          shared_ptr<string> rerunMode_ {};
          // The number of reruns.
          shared_ptr<int32_t> rerunTimes_ {};
          // Timeout.
          shared_ptr<int32_t> timeout_ {};
        };

        class Script : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Script& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Runtime, runtime_);
          };
          friend void from_json(const Darabonba::Json& j, Script& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
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
          class Runtime : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
              DARABONBA_PTR_TO_JSON(Command, command_);
            };
            friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
              DARABONBA_PTR_FROM_JSON(Command, command_);
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
            virtual bool empty() const override { return this->command_ == nullptr; };
            // command Field Functions 
            bool hasCommand() const { return this->command_ != nullptr;};
            void deleteCommand() { this->command_ = nullptr;};
            inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
            inline Runtime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          protected:
            // The command used to distinguish node types.
            shared_ptr<string> command_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->path_ == nullptr && this->runtime_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Script& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline Script& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // runtime Field Functions 
          bool hasRuntime() const { return this->runtime_ != nullptr;};
          void deleteRuntime() { this->runtime_ = nullptr;};
          inline const Script::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Script::Runtime) };
          inline Script::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Script::Runtime) };
          inline Script& setRuntime(const Script::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
          inline Script& setRuntime(Script::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


        protected:
          // The ID of the script.
          // 
          // >  This field is of type Long in SDK versions prior to 8.0.0, and of type String in SDK version 8.0.0 and later. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
          shared_ptr<string> id_ {};
          // The script path.
          shared_ptr<string> path_ {};
          // The runtime.
          shared_ptr<Script::Runtime> runtime_ {};
        };

        class RuntimeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
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
          virtual bool empty() const override { return this->resourceGroup_ == nullptr
        && this->resourceGroupId_ == nullptr; };
          // resourceGroup Field Functions 
          bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
          void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
          inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
          inline RuntimeResource& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        protected:
          // The identifier of the resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the identifier of the resource group.
          shared_ptr<string> resourceGroup_ {};
          // The resource group ID.
          shared_ptr<string> resourceGroupId_ {};
        };

        class Outputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
            DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
            DARABONBA_PTR_TO_JSON(Tables, tables_);
            DARABONBA_PTR_TO_JSON(Variables, variables_);
          };
          friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
            DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
            DARABONBA_PTR_FROM_JSON(Tables, tables_);
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
              DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Node, node_);
              DARABONBA_PTR_TO_JSON(Scope, scope_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Variables& obj) { 
              DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Node, node_);
              DARABONBA_PTR_FROM_JSON(Scope, scope_);
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
            class Node : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Node& obj) { 
                DARABONBA_PTR_TO_JSON(Output, output_);
              };
              friend void from_json(const Darabonba::Json& j, Node& obj) { 
                DARABONBA_PTR_FROM_JSON(Output, output_);
              };
              Node() = default ;
              Node(const Node &) = default ;
              Node(Node &&) = default ;
              Node(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Node() = default ;
              Node& operator=(const Node &) = default ;
              Node& operator=(Node &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->output_ == nullptr; };
              // output Field Functions 
              bool hasOutput() const { return this->output_ != nullptr;};
              void deleteOutput() { this->output_ = nullptr;};
              inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
              inline Node& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


            protected:
              // The output of the node.
              shared_ptr<string> output_ {};
            };

            virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->node_ == nullptr && this->scope_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // artifactType Field Functions 
            bool hasArtifactType() const { return this->artifactType_ != nullptr;};
            void deleteArtifactType() { this->artifactType_ = nullptr;};
            inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
            inline Variables& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Variables& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // node Field Functions 
            bool hasNode() const { return this->node_ != nullptr;};
            void deleteNode() { this->node_ = nullptr;};
            inline const Variables::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, Variables::Node) };
            inline Variables::Node getNode() { DARABONBA_PTR_GET(node_, Variables::Node) };
            inline Variables& setNode(const Variables::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
            inline Variables& setNode(Variables::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


            // scope Field Functions 
            bool hasScope() const { return this->scope_ != nullptr;};
            void deleteScope() { this->scope_ = nullptr;};
            inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
            inline Variables& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


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
            // The artifact type.
            shared_ptr<string> artifactType_ {};
            // The variable ID.
            // 
            // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
            shared_ptr<string> id_ {};
            // The name of the variable.
            shared_ptr<string> name_ {};
            // The node to which the variable belongs.
            shared_ptr<Variables::Node> node_ {};
            // The variable scope. Valid values:
            // 
            // *   NodeParameter
            // *   NodeContext
            // *   Workflow
            // *   Workspace
            shared_ptr<string> scope_ {};
            // The variable type. Valid values:
            // 
            // *   NoKvVariableExpression
            // *   Constant
            // *   PassThrough
            // *   System
            // *   NodeOutput
            shared_ptr<string> type_ {};
            // The variable value.
            shared_ptr<string> value_ {};
          };

          class Tables : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tables& obj) { 
              DARABONBA_PTR_TO_JSON(Guid, guid_);
            };
            friend void from_json(const Darabonba::Json& j, Tables& obj) { 
              DARABONBA_PTR_FROM_JSON(Guid, guid_);
            };
            Tables() = default ;
            Tables(const Tables &) = default ;
            Tables(Tables &&) = default ;
            Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tables() = default ;
            Tables& operator=(const Tables &) = default ;
            Tables& operator=(Tables &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->guid_ == nullptr; };
            // guid Field Functions 
            bool hasGuid() const { return this->guid_ != nullptr;};
            void deleteGuid() { this->guid_ = nullptr;};
            inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
            inline Tables& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          protected:
            // The table ID.
            shared_ptr<string> guid_ {};
          };

          class NodeOutputs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NodeOutputs& obj) { 
              DARABONBA_PTR_TO_JSON(Data, data_);
            };
            friend void from_json(const Darabonba::Json& j, NodeOutputs& obj) { 
              DARABONBA_PTR_FROM_JSON(Data, data_);
            };
            NodeOutputs() = default ;
            NodeOutputs(const NodeOutputs &) = default ;
            NodeOutputs(NodeOutputs &&) = default ;
            NodeOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NodeOutputs() = default ;
            NodeOutputs& operator=(const NodeOutputs &) = default ;
            NodeOutputs& operator=(NodeOutputs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->data_ == nullptr; };
            // data Field Functions 
            bool hasData() const { return this->data_ != nullptr;};
            void deleteData() { this->data_ = nullptr;};
            inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
            inline NodeOutputs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


          protected:
            // The output of the node.
            shared_ptr<string> data_ {};
          };

          virtual bool empty() const override { return this->nodeOutputs_ == nullptr
        && this->tables_ == nullptr && this->variables_ == nullptr; };
          // nodeOutputs Field Functions 
          bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
          void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
          inline const vector<Outputs::NodeOutputs> & getNodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Outputs::NodeOutputs>) };
          inline vector<Outputs::NodeOutputs> getNodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Outputs::NodeOutputs>) };
          inline Outputs& setNodeOutputs(const vector<Outputs::NodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
          inline Outputs& setNodeOutputs(vector<Outputs::NodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


          // tables Field Functions 
          bool hasTables() const { return this->tables_ != nullptr;};
          void deleteTables() { this->tables_ = nullptr;};
          inline const vector<Outputs::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Outputs::Tables>) };
          inline vector<Outputs::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Outputs::Tables>) };
          inline Outputs& setTables(const vector<Outputs::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
          inline Outputs& setTables(vector<Outputs::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


          // variables Field Functions 
          bool hasVariables() const { return this->variables_ != nullptr;};
          void deleteVariables() { this->variables_ = nullptr;};
          inline const vector<Outputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Outputs::Variables>) };
          inline vector<Outputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Outputs::Variables>) };
          inline Outputs& setVariables(const vector<Outputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
          inline Outputs& setVariables(vector<Outputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


        protected:
          // The node output list.
          shared_ptr<vector<Outputs::NodeOutputs>> nodeOutputs_ {};
          // The table list.
          shared_ptr<vector<Outputs::Tables>> tables_ {};
          // The variable list.
          shared_ptr<vector<Outputs::Variables>> variables_ {};
        };

        class Inputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
            DARABONBA_PTR_TO_JSON(NodeOutputs, nodeOutputs_);
            DARABONBA_PTR_TO_JSON(Tables, tables_);
            DARABONBA_PTR_TO_JSON(Variables, variables_);
          };
          friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
            DARABONBA_PTR_FROM_JSON(NodeOutputs, nodeOutputs_);
            DARABONBA_PTR_FROM_JSON(Tables, tables_);
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
              DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Node, node_);
              DARABONBA_PTR_TO_JSON(Scope, scope_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Variables& obj) { 
              DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Node, node_);
              DARABONBA_PTR_FROM_JSON(Scope, scope_);
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
            class Node : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Node& obj) { 
                DARABONBA_PTR_TO_JSON(Output, output_);
              };
              friend void from_json(const Darabonba::Json& j, Node& obj) { 
                DARABONBA_PTR_FROM_JSON(Output, output_);
              };
              Node() = default ;
              Node(const Node &) = default ;
              Node(Node &&) = default ;
              Node(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Node() = default ;
              Node& operator=(const Node &) = default ;
              Node& operator=(Node &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->output_ == nullptr; };
              // output Field Functions 
              bool hasOutput() const { return this->output_ != nullptr;};
              void deleteOutput() { this->output_ = nullptr;};
              inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
              inline Node& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


            protected:
              // The output of the node.
              shared_ptr<string> output_ {};
            };

            virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->node_ == nullptr && this->scope_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // artifactType Field Functions 
            bool hasArtifactType() const { return this->artifactType_ != nullptr;};
            void deleteArtifactType() { this->artifactType_ = nullptr;};
            inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
            inline Variables& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Variables& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // node Field Functions 
            bool hasNode() const { return this->node_ != nullptr;};
            void deleteNode() { this->node_ = nullptr;};
            inline const Variables::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, Variables::Node) };
            inline Variables::Node getNode() { DARABONBA_PTR_GET(node_, Variables::Node) };
            inline Variables& setNode(const Variables::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
            inline Variables& setNode(Variables::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


            // scope Field Functions 
            bool hasScope() const { return this->scope_ != nullptr;};
            void deleteScope() { this->scope_ = nullptr;};
            inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
            inline Variables& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


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
            // The artifact type.
            shared_ptr<string> artifactType_ {};
            // The variable ID.
            // 
            // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
            shared_ptr<string> id_ {};
            // The name of the variable.
            shared_ptr<string> name_ {};
            // The node to which the variable belongs.
            shared_ptr<Variables::Node> node_ {};
            // The scope of the variable. Valid values:
            // 
            // *   WorkSpace
            // *   NodeParameter
            // *   NodeContext
            // *   Workflow
            shared_ptr<string> scope_ {};
            // The type of the variable. Valid values:
            // 
            // *   NoKvVariableExpression
            // *   Constant
            // *   PassThrough
            // *   System
            // *   NodeOutput
            shared_ptr<string> type_ {};
            // The variable value.
            shared_ptr<string> value_ {};
          };

          class Tables : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tables& obj) { 
              DARABONBA_PTR_TO_JSON(Guid, guid_);
            };
            friend void from_json(const Darabonba::Json& j, Tables& obj) { 
              DARABONBA_PTR_FROM_JSON(Guid, guid_);
            };
            Tables() = default ;
            Tables(const Tables &) = default ;
            Tables(Tables &&) = default ;
            Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tables() = default ;
            Tables& operator=(const Tables &) = default ;
            Tables& operator=(Tables &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->guid_ == nullptr; };
            // guid Field Functions 
            bool hasGuid() const { return this->guid_ != nullptr;};
            void deleteGuid() { this->guid_ = nullptr;};
            inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
            inline Tables& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          protected:
            // The table ID.
            shared_ptr<string> guid_ {};
          };

          class NodeOutputs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NodeOutputs& obj) { 
              DARABONBA_PTR_TO_JSON(Data, data_);
            };
            friend void from_json(const Darabonba::Json& j, NodeOutputs& obj) { 
              DARABONBA_PTR_FROM_JSON(Data, data_);
            };
            NodeOutputs() = default ;
            NodeOutputs(const NodeOutputs &) = default ;
            NodeOutputs(NodeOutputs &&) = default ;
            NodeOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NodeOutputs() = default ;
            NodeOutputs& operator=(const NodeOutputs &) = default ;
            NodeOutputs& operator=(NodeOutputs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->data_ == nullptr; };
            // data Field Functions 
            bool hasData() const { return this->data_ != nullptr;};
            void deleteData() { this->data_ = nullptr;};
            inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
            inline NodeOutputs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


          protected:
            // The output of the node.
            shared_ptr<string> data_ {};
          };

          virtual bool empty() const override { return this->nodeOutputs_ == nullptr
        && this->tables_ == nullptr && this->variables_ == nullptr; };
          // nodeOutputs Field Functions 
          bool hasNodeOutputs() const { return this->nodeOutputs_ != nullptr;};
          void deleteNodeOutputs() { this->nodeOutputs_ = nullptr;};
          inline const vector<Inputs::NodeOutputs> & getNodeOutputs() const { DARABONBA_PTR_GET_CONST(nodeOutputs_, vector<Inputs::NodeOutputs>) };
          inline vector<Inputs::NodeOutputs> getNodeOutputs() { DARABONBA_PTR_GET(nodeOutputs_, vector<Inputs::NodeOutputs>) };
          inline Inputs& setNodeOutputs(const vector<Inputs::NodeOutputs> & nodeOutputs) { DARABONBA_PTR_SET_VALUE(nodeOutputs_, nodeOutputs) };
          inline Inputs& setNodeOutputs(vector<Inputs::NodeOutputs> && nodeOutputs) { DARABONBA_PTR_SET_RVALUE(nodeOutputs_, nodeOutputs) };


          // tables Field Functions 
          bool hasTables() const { return this->tables_ != nullptr;};
          void deleteTables() { this->tables_ = nullptr;};
          inline const vector<Inputs::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Inputs::Tables>) };
          inline vector<Inputs::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Inputs::Tables>) };
          inline Inputs& setTables(const vector<Inputs::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
          inline Inputs& setTables(vector<Inputs::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


          // variables Field Functions 
          bool hasVariables() const { return this->variables_ != nullptr;};
          void deleteVariables() { this->variables_ = nullptr;};
          inline const vector<Inputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Inputs::Variables>) };
          inline vector<Inputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Inputs::Variables>) };
          inline Inputs& setVariables(const vector<Inputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
          inline Inputs& setVariables(vector<Inputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


        protected:
          // The node output list.
          shared_ptr<vector<Inputs::NodeOutputs>> nodeOutputs_ {};
          // The table list.
          shared_ptr<vector<Inputs::Tables>> tables_ {};
          // The variable list.
          shared_ptr<vector<Inputs::Variables>> variables_ {};
        };

        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The name of the data source.
          shared_ptr<string> name_ {};
          // The type of the data source.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSource_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->inputs_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->recurrence_ == nullptr
        && this->runtimeResource_ == nullptr && this->script_ == nullptr && this->strategy_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr
        && this->trigger_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Nodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const Nodes::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Nodes::DataSource) };
        inline Nodes::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Nodes::DataSource) };
        inline Nodes& setDataSource(const Nodes::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Nodes& setDataSource(Nodes::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Nodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Nodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline const Nodes::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, Nodes::Inputs) };
        inline Nodes::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, Nodes::Inputs) };
        inline Nodes& setInputs(const Nodes::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
        inline Nodes& setInputs(Nodes::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Nodes& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outputs Field Functions 
        bool hasOutputs() const { return this->outputs_ != nullptr;};
        void deleteOutputs() { this->outputs_ = nullptr;};
        inline const Nodes::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, Nodes::Outputs) };
        inline Nodes::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, Nodes::Outputs) };
        inline Nodes& setOutputs(const Nodes::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
        inline Nodes& setOutputs(Nodes::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Nodes& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Nodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // recurrence Field Functions 
        bool hasRecurrence() const { return this->recurrence_ != nullptr;};
        void deleteRecurrence() { this->recurrence_ = nullptr;};
        inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
        inline Nodes& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const Nodes::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Nodes::RuntimeResource) };
        inline Nodes::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Nodes::RuntimeResource) };
        inline Nodes& setRuntimeResource(const Nodes::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline Nodes& setRuntimeResource(Nodes::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline const Nodes::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Nodes::Script) };
        inline Nodes::Script getScript() { DARABONBA_PTR_GET(script_, Nodes::Script) };
        inline Nodes& setScript(const Nodes::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
        inline Nodes& setScript(Nodes::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline const Nodes::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Nodes::Strategy) };
        inline Nodes::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Nodes::Strategy) };
        inline Nodes& setStrategy(const Nodes::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
        inline Nodes& setStrategy(Nodes::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Nodes::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Nodes::Tags>) };
        inline vector<Nodes::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Nodes::Tags>) };
        inline Nodes& setTags(const vector<Nodes::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Nodes& setTags(vector<Nodes::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline Nodes& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const Nodes::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Nodes::Trigger) };
        inline Nodes::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Nodes::Trigger) };
        inline Nodes& setTrigger(const Nodes::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline Nodes& setTrigger(Nodes::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      protected:
        // The timestamp when the node in Data Studio was created.
        shared_ptr<int64_t> createTime_ {};
        // The data source.
        shared_ptr<Nodes::DataSource> dataSource_ {};
        // The description of the node.
        shared_ptr<string> description_ {};
        // The unique identifier of the Data Studio node.
        // 
        // >  This field is of the Long type in SDK versions prior to 8.0.0, and of the String type in SDK versions 8.0.0 and later. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
        shared_ptr<string> id_ {};
        // The node input.
        shared_ptr<Nodes::Inputs> inputs_ {};
        // The timestamp when the node in DataStudio was last modified.
        shared_ptr<int64_t> modifyTime_ {};
        // The name of the node.
        shared_ptr<string> name_ {};
        // The output of the node.
        shared_ptr<Nodes::Outputs> outputs_ {};
        // The owner of nodes in Data Studio.
        shared_ptr<string> owner_ {};
        // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
        shared_ptr<int64_t> projectId_ {};
        // The scheduling type.
        // 
        // Valid values:
        // 
        // *   Normal: The node is scheduled as expected.
        // *   Pause: The node is paused, and the running of its descendant nodes is blocked.
        // *   Skip: The node is dry run. The system does not actually run the node but directly prompts that the node is successfully run. The running duration of the node is 0 seconds. In addition, the node does not occupy resources or block the running of its descendant nodes.
        shared_ptr<string> recurrence_ {};
        // The information about the resource group.
        shared_ptr<Nodes::RuntimeResource> runtimeResource_ {};
        // The script information.
        shared_ptr<Nodes::Script> script_ {};
        // The scheduling policy.
        shared_ptr<Nodes::Strategy> strategy_ {};
        // The tag information (not in use).
        shared_ptr<vector<Nodes::Tags>> tags_ {};
        // The ID of the scheduling task.
        shared_ptr<int64_t> taskId_ {};
        // The trigger.
        shared_ptr<Nodes::Trigger> trigger_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<PagingInfo::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<PagingInfo::Nodes>) };
      inline vector<PagingInfo::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<PagingInfo::Nodes>) };
      inline PagingInfo& setNodes(const vector<PagingInfo::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline PagingInfo& setNodes(vector<PagingInfo::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline PagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline PagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline PagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of nodes in Data Studio.
      shared_ptr<vector<PagingInfo::Nodes>> nodes_ {};
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListNodesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListNodesResponseBody::PagingInfo) };
    inline ListNodesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListNodesResponseBody::PagingInfo) };
    inline ListNodesResponseBody& setPagingInfo(const ListNodesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListNodesResponseBody& setPagingInfo(ListNodesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListNodesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
