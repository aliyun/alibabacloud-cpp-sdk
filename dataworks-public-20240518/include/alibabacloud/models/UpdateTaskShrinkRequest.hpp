// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependenciesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputsShrink_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Script, scriptShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependenciesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputsShrink_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Script, scriptShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    UpdateTaskShrinkRequest() = default ;
    UpdateTaskShrinkRequest(const UpdateTaskShrinkRequest &) = default ;
    UpdateTaskShrinkRequest(UpdateTaskShrinkRequest &&) = default ;
    UpdateTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskShrinkRequest() = default ;
    UpdateTaskShrinkRequest& operator=(const UpdateTaskShrinkRequest &) = default ;
    UpdateTaskShrinkRequest& operator=(UpdateTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->dataSourceShrink_ == nullptr && this->dependenciesShrink_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr
        && this->inputsShrink_ == nullptr && this->instanceMode_ == nullptr && this->name_ == nullptr && this->outputsShrink_ == nullptr && this->owner_ == nullptr
        && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr && this->runtimeResourceShrink_ == nullptr && this->scriptShrink_ == nullptr
        && this->tagsShrink_ == nullptr && this->timeout_ == nullptr && this->triggerShrink_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateTaskShrinkRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dataSourceShrink Field Functions 
    bool hasDataSourceShrink() const { return this->dataSourceShrink_ != nullptr;};
    void deleteDataSourceShrink() { this->dataSourceShrink_ = nullptr;};
    inline string getDataSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceShrink_, "") };
    inline UpdateTaskShrinkRequest& setDataSourceShrink(string dataSourceShrink) { DARABONBA_PTR_SET_VALUE(dataSourceShrink_, dataSourceShrink) };


    // dependenciesShrink Field Functions 
    bool hasDependenciesShrink() const { return this->dependenciesShrink_ != nullptr;};
    void deleteDependenciesShrink() { this->dependenciesShrink_ = nullptr;};
    inline string getDependenciesShrink() const { DARABONBA_PTR_GET_DEFAULT(dependenciesShrink_, "") };
    inline UpdateTaskShrinkRequest& setDependenciesShrink(string dependenciesShrink) { DARABONBA_PTR_SET_VALUE(dependenciesShrink_, dependenciesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateTaskShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateTaskShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputsShrink Field Functions 
    bool hasInputsShrink() const { return this->inputsShrink_ != nullptr;};
    void deleteInputsShrink() { this->inputsShrink_ = nullptr;};
    inline string getInputsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputsShrink_, "") };
    inline UpdateTaskShrinkRequest& setInputsShrink(string inputsShrink) { DARABONBA_PTR_SET_VALUE(inputsShrink_, inputsShrink) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline UpdateTaskShrinkRequest& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputsShrink Field Functions 
    bool hasOutputsShrink() const { return this->outputsShrink_ != nullptr;};
    void deleteOutputsShrink() { this->outputsShrink_ = nullptr;};
    inline string getOutputsShrink() const { DARABONBA_PTR_GET_DEFAULT(outputsShrink_, "") };
    inline UpdateTaskShrinkRequest& setOutputsShrink(string outputsShrink) { DARABONBA_PTR_SET_VALUE(outputsShrink_, outputsShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateTaskShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline UpdateTaskShrinkRequest& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline UpdateTaskShrinkRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline UpdateTaskShrinkRequest& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string getRuntimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline UpdateTaskShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


    // scriptShrink Field Functions 
    bool hasScriptShrink() const { return this->scriptShrink_ != nullptr;};
    void deleteScriptShrink() { this->scriptShrink_ = nullptr;};
    inline string getScriptShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptShrink_, "") };
    inline UpdateTaskShrinkRequest& setScriptShrink(string scriptShrink) { DARABONBA_PTR_SET_VALUE(scriptShrink_, scriptShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateTaskShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string getTriggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline UpdateTaskShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The client unique code of the node, used to uniquely identify a node. This code is used to implement asynchronous operations and idempotence. If not specified during creation, the system automatically generates one, and the code is uniquely bound to the resource ID. When updating or deleting a resource, if this parameter is specified, it must be consistent with the client unique code used during creation.
    shared_ptr<string> clientUniqueCode_ {};
    // The associated data source information.
    shared_ptr<string> dataSourceShrink_ {};
    // The dependency information.
    shared_ptr<string> dependenciesShrink_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The project environment. Valid values:
    // - Prod: production.
    // - Dev: development.
    shared_ptr<string> envType_ {};
    // The node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The input information.
    shared_ptr<string> inputsShrink_ {};
    // The instance generation mode. Valid values:
    // - T+1: The instance is generated the next day.
    // - Immediately: The instance is generated immediately. Note: Only periodic instances whose scheduled time is at least ten minutes after the node publish time are generated normally. During the full instance generation period (22:00 to 24:00), real-time instance generation is not available. You can submit and publish nodes, but new nodes do not automatically generate instances.
    shared_ptr<string> instanceMode_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The output information.
    shared_ptr<string> outputsShrink_ {};
    // The account ID of the node owner.
    shared_ptr<string> owner_ {};
    // The retry time interval, in milliseconds. The value cannot exceed 1800000.
    shared_ptr<int32_t> rerunInterval_ {};
    // Specifies whether the node can be rerun. Valid values:
    // - AllDenied: The node cannot be rerun regardless of whether it succeeds or fails.
    // - FailureAllowed: The node can be rerun only when it fails.
    // - AllAllowed: The node can be rerun regardless of whether it succeeds or fails.
    shared_ptr<string> rerunMode_ {};
    // The number of retries. This parameter takes effect when the node is configured to allow reruns.
    shared_ptr<int32_t> rerunTimes_ {};
    // The environment configuration, such as resource group information.
    shared_ptr<string> runtimeResourceShrink_ {};
    // The script information.
    shared_ptr<string> scriptShrink_ {};
    // The list of node tags.
    shared_ptr<string> tagsShrink_ {};
    // The node execution timeout period, in seconds. The value must be greater than 3600.
    shared_ptr<int32_t> timeout_ {};
    // The node trigger method.
    shared_ptr<string> triggerShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
