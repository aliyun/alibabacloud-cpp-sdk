// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestGlobalParams.hpp>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestSchedule.hpp>
#include <map>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson.hpp>
#include <alibabacloud/models/UpdateProcessDefinitionWithScheduleRequestTaskRelationJson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(globalParams, globalParams_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_TO_JSON(publish, publish_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseState, releaseState_);
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
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(globalParams, globalParams_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productNamespace, productNamespace_);
      DARABONBA_PTR_FROM_JSON(publish, publish_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseState, releaseState_);
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
    UpdateProcessDefinitionWithScheduleRequest() = default ;
    UpdateProcessDefinitionWithScheduleRequest(const UpdateProcessDefinitionWithScheduleRequest &) = default ;
    UpdateProcessDefinitionWithScheduleRequest(UpdateProcessDefinitionWithScheduleRequest &&) = default ;
    UpdateProcessDefinitionWithScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleRequest() = default ;
    UpdateProcessDefinitionWithScheduleRequest& operator=(const UpdateProcessDefinitionWithScheduleRequest &) = default ;
    UpdateProcessDefinitionWithScheduleRequest& operator=(UpdateProcessDefinitionWithScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEmailAddress_ != nullptr
        && this->description_ != nullptr && this->executionType_ != nullptr && this->globalParams_ != nullptr && this->name_ != nullptr && this->productNamespace_ != nullptr
        && this->publish_ != nullptr && this->regionId_ != nullptr && this->releaseState_ != nullptr && this->resourceQueue_ != nullptr && this->retryTimes_ != nullptr
        && this->runAs_ != nullptr && this->schedule_ != nullptr && this->tags_ != nullptr && this->taskDefinitionJson_ != nullptr && this->taskParallelism_ != nullptr
        && this->taskRelationJson_ != nullptr && this->timeout_ != nullptr; };
    // alertEmailAddress Field Functions 
    bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
    void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
    inline string alertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // globalParams Field Functions 
    bool hasGlobalParams() const { return this->globalParams_ != nullptr;};
    void deleteGlobalParams() { this->globalParams_ = nullptr;};
    inline const vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams> & globalParams() const { DARABONBA_PTR_GET_CONST(globalParams_, vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams>) };
    inline vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams> globalParams() { DARABONBA_PTR_GET(globalParams_, vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams>) };
    inline UpdateProcessDefinitionWithScheduleRequest& setGlobalParams(const vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams> & globalParams) { DARABONBA_PTR_SET_VALUE(globalParams_, globalParams) };
    inline UpdateProcessDefinitionWithScheduleRequest& setGlobalParams(vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams> && globalParams) { DARABONBA_PTR_SET_RVALUE(globalParams_, globalParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productNamespace Field Functions 
    bool hasProductNamespace() const { return this->productNamespace_ != nullptr;};
    void deleteProductNamespace() { this->productNamespace_ = nullptr;};
    inline string productNamespace() const { DARABONBA_PTR_GET_DEFAULT(productNamespace_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setProductNamespace(string productNamespace) { DARABONBA_PTR_SET_VALUE(productNamespace_, productNamespace) };


    // publish Field Functions 
    bool hasPublish() const { return this->publish_ != nullptr;};
    void deletePublish() { this->publish_ = nullptr;};
    inline bool publish() const { DARABONBA_PTR_GET_DEFAULT(publish_, false) };
    inline UpdateProcessDefinitionWithScheduleRequest& setPublish(bool publish) { DARABONBA_PTR_SET_VALUE(publish_, publish) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseState Field Functions 
    bool hasReleaseState() const { return this->releaseState_ != nullptr;};
    void deleteReleaseState() { this->releaseState_ = nullptr;};
    inline string releaseState() const { DARABONBA_PTR_GET_DEFAULT(releaseState_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setReleaseState(string releaseState) { DARABONBA_PTR_SET_VALUE(releaseState_, releaseState) };


    // resourceQueue Field Functions 
    bool hasResourceQueue() const { return this->resourceQueue_ != nullptr;};
    void deleteResourceQueue() { this->resourceQueue_ = nullptr;};
    inline string resourceQueue() const { DARABONBA_PTR_GET_DEFAULT(resourceQueue_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setResourceQueue(string resourceQueue) { DARABONBA_PTR_SET_VALUE(resourceQueue_, resourceQueue) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // runAs Field Functions 
    bool hasRunAs() const { return this->runAs_ != nullptr;};
    void deleteRunAs() { this->runAs_ = nullptr;};
    inline string runAs() const { DARABONBA_PTR_GET_DEFAULT(runAs_, "") };
    inline UpdateProcessDefinitionWithScheduleRequest& setRunAs(string runAs) { DARABONBA_PTR_SET_VALUE(runAs_, runAs) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline const UpdateProcessDefinitionWithScheduleRequestSchedule & schedule() const { DARABONBA_PTR_GET_CONST(schedule_, UpdateProcessDefinitionWithScheduleRequestSchedule) };
    inline UpdateProcessDefinitionWithScheduleRequestSchedule schedule() { DARABONBA_PTR_GET(schedule_, UpdateProcessDefinitionWithScheduleRequestSchedule) };
    inline UpdateProcessDefinitionWithScheduleRequest& setSchedule(const UpdateProcessDefinitionWithScheduleRequestSchedule & schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };
    inline UpdateProcessDefinitionWithScheduleRequest& setSchedule(UpdateProcessDefinitionWithScheduleRequestSchedule && schedule) { DARABONBA_PTR_SET_RVALUE(schedule_, schedule) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDefinitionJson Field Functions 
    bool hasTaskDefinitionJson() const { return this->taskDefinitionJson_ != nullptr;};
    void deleteTaskDefinitionJson() { this->taskDefinitionJson_ = nullptr;};
    inline const vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson> & taskDefinitionJson() const { DARABONBA_PTR_GET_CONST(taskDefinitionJson_, vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson>) };
    inline vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson> taskDefinitionJson() { DARABONBA_PTR_GET(taskDefinitionJson_, vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson>) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTaskDefinitionJson(const vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson> & taskDefinitionJson) { DARABONBA_PTR_SET_VALUE(taskDefinitionJson_, taskDefinitionJson) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTaskDefinitionJson(vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson> && taskDefinitionJson) { DARABONBA_PTR_SET_RVALUE(taskDefinitionJson_, taskDefinitionJson) };


    // taskParallelism Field Functions 
    bool hasTaskParallelism() const { return this->taskParallelism_ != nullptr;};
    void deleteTaskParallelism() { this->taskParallelism_ = nullptr;};
    inline int32_t taskParallelism() const { DARABONBA_PTR_GET_DEFAULT(taskParallelism_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTaskParallelism(int32_t taskParallelism) { DARABONBA_PTR_SET_VALUE(taskParallelism_, taskParallelism) };


    // taskRelationJson Field Functions 
    bool hasTaskRelationJson() const { return this->taskRelationJson_ != nullptr;};
    void deleteTaskRelationJson() { this->taskRelationJson_ = nullptr;};
    inline const vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson> & taskRelationJson() const { DARABONBA_PTR_GET_CONST(taskRelationJson_, vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson>) };
    inline vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson> taskRelationJson() { DARABONBA_PTR_GET(taskRelationJson_, vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson>) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTaskRelationJson(const vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson> & taskRelationJson) { DARABONBA_PTR_SET_VALUE(taskRelationJson_, taskRelationJson) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTaskRelationJson(vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson> && taskRelationJson) { DARABONBA_PTR_SET_RVALUE(taskRelationJson_, taskRelationJson) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateProcessDefinitionWithScheduleRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The email address to receive alerts.
    std::shared_ptr<string> alertEmailAddress_ = nullptr;
    // The description of the workflow.
    std::shared_ptr<string> description_ = nullptr;
    // The execution policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionType_ = nullptr;
    std::shared_ptr<vector<UpdateProcessDefinitionWithScheduleRequestGlobalParams>> globalParams_ = nullptr;
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
    // The status of the workflow.
    std::shared_ptr<string> releaseState_ = nullptr;
    // The resource queue.
    std::shared_ptr<string> resourceQueue_ = nullptr;
    // The number of retries.
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
    // The execution user.
    std::shared_ptr<string> runAs_ = nullptr;
    // The scheduling settings.
    std::shared_ptr<UpdateProcessDefinitionWithScheduleRequestSchedule> schedule_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The descriptions of all nodes in the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateProcessDefinitionWithScheduleRequestTaskDefinitionJson>> taskDefinitionJson_ = nullptr;
    // The node parallelism.
    std::shared_ptr<int32_t> taskParallelism_ = nullptr;
    // The dependencies of all nodes in the workflow. preTaskCode specifies the ID of an upstream node, and postTaskCode specifies the ID of a downstream node. The ID of each node is unique. If a node does not have an upstream node, set preTaskCode to 0.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateProcessDefinitionWithScheduleRequestTaskRelationJson>> taskRelationJson_ = nullptr;
    // The default timeout period of the workflow.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
