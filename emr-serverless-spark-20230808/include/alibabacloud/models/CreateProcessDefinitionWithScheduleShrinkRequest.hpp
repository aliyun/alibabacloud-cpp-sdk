// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONWITHSCHEDULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateProcessDefinitionWithScheduleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionWithScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(globalParams, globalParamsShrink_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_TO_JSON(publish, publish_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceQueue, resourceQueue_);
      DARABONBA_PTR_TO_JSON(retryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(runAs, runAs_);
      DARABONBA_PTR_TO_JSON(schedule, scheduleShrink_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(taskDefinitionJson, taskDefinitionJsonShrink_);
      DARABONBA_PTR_TO_JSON(taskParallelism, taskParallelism_);
      DARABONBA_PTR_TO_JSON(taskRelationJson, taskRelationJsonShrink_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionWithScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(globalParams, globalParamsShrink_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_FROM_JSON(publish, publish_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceQueue, resourceQueue_);
      DARABONBA_PTR_FROM_JSON(retryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(runAs, runAs_);
      DARABONBA_PTR_FROM_JSON(schedule, scheduleShrink_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDefinitionJson, taskDefinitionJsonShrink_);
      DARABONBA_PTR_FROM_JSON(taskParallelism, taskParallelism_);
      DARABONBA_PTR_FROM_JSON(taskRelationJson, taskRelationJsonShrink_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
    };
    CreateProcessDefinitionWithScheduleShrinkRequest() = default ;
    CreateProcessDefinitionWithScheduleShrinkRequest(const CreateProcessDefinitionWithScheduleShrinkRequest &) = default ;
    CreateProcessDefinitionWithScheduleShrinkRequest(CreateProcessDefinitionWithScheduleShrinkRequest &&) = default ;
    CreateProcessDefinitionWithScheduleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionWithScheduleShrinkRequest() = default ;
    CreateProcessDefinitionWithScheduleShrinkRequest& operator=(const CreateProcessDefinitionWithScheduleShrinkRequest &) = default ;
    CreateProcessDefinitionWithScheduleShrinkRequest& operator=(CreateProcessDefinitionWithScheduleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEmailAddress_ != nullptr
        && this->description_ != nullptr && this->executionType_ != nullptr && this->globalParamsShrink_ != nullptr && this->name_ != nullptr && this->productNamespace_ != nullptr
        && this->publish_ != nullptr && this->regionId_ != nullptr && this->resourceQueue_ != nullptr && this->retryTimes_ != nullptr && this->runAs_ != nullptr
        && this->scheduleShrink_ != nullptr && this->tagsShrink_ != nullptr && this->taskDefinitionJsonShrink_ != nullptr && this->taskParallelism_ != nullptr && this->taskRelationJsonShrink_ != nullptr
        && this->timeout_ != nullptr; };
    // alertEmailAddress Field Functions 
    bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
    void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
    inline string alertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // globalParamsShrink Field Functions 
    bool hasGlobalParamsShrink() const { return this->globalParamsShrink_ != nullptr;};
    void deleteGlobalParamsShrink() { this->globalParamsShrink_ = nullptr;};
    inline string globalParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(globalParamsShrink_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setGlobalParamsShrink(string globalParamsShrink) { DARABONBA_PTR_SET_VALUE(globalParamsShrink_, globalParamsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productNamespace Field Functions 
    bool hasProductNamespace() const { return this->productNamespace_ != nullptr;};
    void deleteProductNamespace() { this->productNamespace_ = nullptr;};
    inline string productNamespace() const { DARABONBA_PTR_GET_DEFAULT(productNamespace_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setProductNamespace(string productNamespace) { DARABONBA_PTR_SET_VALUE(productNamespace_, productNamespace) };


    // publish Field Functions 
    bool hasPublish() const { return this->publish_ != nullptr;};
    void deletePublish() { this->publish_ = nullptr;};
    inline bool publish() const { DARABONBA_PTR_GET_DEFAULT(publish_, false) };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setPublish(bool publish) { DARABONBA_PTR_SET_VALUE(publish_, publish) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceQueue Field Functions 
    bool hasResourceQueue() const { return this->resourceQueue_ != nullptr;};
    void deleteResourceQueue() { this->resourceQueue_ = nullptr;};
    inline string resourceQueue() const { DARABONBA_PTR_GET_DEFAULT(resourceQueue_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setResourceQueue(string resourceQueue) { DARABONBA_PTR_SET_VALUE(resourceQueue_, resourceQueue) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // runAs Field Functions 
    bool hasRunAs() const { return this->runAs_ != nullptr;};
    void deleteRunAs() { this->runAs_ = nullptr;};
    inline string runAs() const { DARABONBA_PTR_GET_DEFAULT(runAs_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setRunAs(string runAs) { DARABONBA_PTR_SET_VALUE(runAs_, runAs) };


    // scheduleShrink Field Functions 
    bool hasScheduleShrink() const { return this->scheduleShrink_ != nullptr;};
    void deleteScheduleShrink() { this->scheduleShrink_ = nullptr;};
    inline string scheduleShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleShrink_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setScheduleShrink(string scheduleShrink) { DARABONBA_PTR_SET_VALUE(scheduleShrink_, scheduleShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskDefinitionJsonShrink Field Functions 
    bool hasTaskDefinitionJsonShrink() const { return this->taskDefinitionJsonShrink_ != nullptr;};
    void deleteTaskDefinitionJsonShrink() { this->taskDefinitionJsonShrink_ = nullptr;};
    inline string taskDefinitionJsonShrink() const { DARABONBA_PTR_GET_DEFAULT(taskDefinitionJsonShrink_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setTaskDefinitionJsonShrink(string taskDefinitionJsonShrink) { DARABONBA_PTR_SET_VALUE(taskDefinitionJsonShrink_, taskDefinitionJsonShrink) };


    // taskParallelism Field Functions 
    bool hasTaskParallelism() const { return this->taskParallelism_ != nullptr;};
    void deleteTaskParallelism() { this->taskParallelism_ = nullptr;};
    inline int32_t taskParallelism() const { DARABONBA_PTR_GET_DEFAULT(taskParallelism_, 0) };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setTaskParallelism(int32_t taskParallelism) { DARABONBA_PTR_SET_VALUE(taskParallelism_, taskParallelism) };


    // taskRelationJsonShrink Field Functions 
    bool hasTaskRelationJsonShrink() const { return this->taskRelationJsonShrink_ != nullptr;};
    void deleteTaskRelationJsonShrink() { this->taskRelationJsonShrink_ = nullptr;};
    inline string taskRelationJsonShrink() const { DARABONBA_PTR_GET_DEFAULT(taskRelationJsonShrink_, "") };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setTaskRelationJsonShrink(string taskRelationJsonShrink) { DARABONBA_PTR_SET_VALUE(taskRelationJsonShrink_, taskRelationJsonShrink) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateProcessDefinitionWithScheduleShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The email address to receive alerts.
    std::shared_ptr<string> alertEmailAddress_ = nullptr;
    // The description of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The execution policy
    // 
    // This parameter is required.
    std::shared_ptr<string> executionType_ = nullptr;
    std::shared_ptr<string> globalParamsShrink_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productNamespace_ = nullptr;
    // Specifies whether to publish the workflow.
    std::shared_ptr<bool> publish_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource queue.
    std::shared_ptr<string> resourceQueue_ = nullptr;
    // The number of retries.
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who creates the workflow.
    std::shared_ptr<string> runAs_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<string> scheduleShrink_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The descriptions of all nodes in the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskDefinitionJsonShrink_ = nullptr;
    // The node parallelism.
    std::shared_ptr<int32_t> taskParallelism_ = nullptr;
    // The dependencies of all nodes in the workflow. preTaskCode specifies the ID of an upstream node, and postTaskCode specifies the ID of a downstream node. The ID of each node is unique. If a node does not have an upstream node, set preTaskCode to 0.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskRelationJsonShrink_ = nullptr;
    // The default timeout period of the workflow.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
