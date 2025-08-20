// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChangeSetResponseBodyLog.hpp>
#include <alibabacloud/models/GetChangeSetResponseBodyParameters.hpp>
#include <alibabacloud/models/GetChangeSetResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetChangeSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_TO_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_TO_JSON(Changes, changes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_FROM_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_FROM_JSON(Changes, changes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    GetChangeSetResponseBody() = default ;
    GetChangeSetResponseBody(const GetChangeSetResponseBody &) = default ;
    GetChangeSetResponseBody(GetChangeSetResponseBody &&) = default ;
    GetChangeSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeSetResponseBody() = default ;
    GetChangeSetResponseBody& operator=(const GetChangeSetResponseBody &) = default ;
    GetChangeSetResponseBody& operator=(GetChangeSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->changeSetName_ != nullptr && this->changeSetType_ != nullptr && this->changes_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr
        && this->disableRollback_ != nullptr && this->executionStatus_ != nullptr && this->log_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr
        && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->stackId_ != nullptr && this->stackName_ != nullptr && this->status_ != nullptr
        && this->statusReason_ != nullptr && this->tags_ != nullptr && this->templateBody_ != nullptr && this->timeoutInMinutes_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetChangeSetResponseBody& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // changeSetName Field Functions 
    bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
    void deleteChangeSetName() { this->changeSetName_ = nullptr;};
    inline string changeSetName() const { DARABONBA_PTR_GET_DEFAULT(changeSetName_, "") };
    inline GetChangeSetResponseBody& setChangeSetName(string changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };


    // changeSetType Field Functions 
    bool hasChangeSetType() const { return this->changeSetType_ != nullptr;};
    void deleteChangeSetType() { this->changeSetType_ = nullptr;};
    inline string changeSetType() const { DARABONBA_PTR_GET_DEFAULT(changeSetType_, "") };
    inline GetChangeSetResponseBody& setChangeSetType(string changeSetType) { DARABONBA_PTR_SET_VALUE(changeSetType_, changeSetType) };


    // changes Field Functions 
    bool hasChanges() const { return this->changes_ != nullptr;};
    void deleteChanges() { this->changes_ = nullptr;};
    inline const vector<Darabonba::Json> & changes() const { DARABONBA_PTR_GET_CONST(changes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> changes() { DARABONBA_PTR_GET(changes_, vector<Darabonba::Json>) };
    inline GetChangeSetResponseBody& setChanges(const vector<Darabonba::Json> & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
    inline GetChangeSetResponseBody& setChanges(vector<Darabonba::Json> && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetChangeSetResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetChangeSetResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline GetChangeSetResponseBody& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string executionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline GetChangeSetResponseBody& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const GetChangeSetResponseBodyLog & log() const { DARABONBA_PTR_GET_CONST(log_, GetChangeSetResponseBodyLog) };
    inline GetChangeSetResponseBodyLog log() { DARABONBA_PTR_GET(log_, GetChangeSetResponseBodyLog) };
    inline GetChangeSetResponseBody& setLog(const GetChangeSetResponseBodyLog & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline GetChangeSetResponseBody& setLog(GetChangeSetResponseBodyLog && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetChangeSetResponseBodyParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetChangeSetResponseBodyParameters>) };
    inline vector<GetChangeSetResponseBodyParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetChangeSetResponseBodyParameters>) };
    inline GetChangeSetResponseBody& setParameters(const vector<GetChangeSetResponseBodyParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetChangeSetResponseBody& setParameters(vector<GetChangeSetResponseBodyParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetChangeSetResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChangeSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetChangeSetResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetChangeSetResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline GetChangeSetResponseBody& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetChangeSetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetChangeSetResponseBody& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetChangeSetResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetChangeSetResponseBodyTags>) };
    inline vector<GetChangeSetResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetChangeSetResponseBodyTags>) };
    inline GetChangeSetResponseBody& setTags(const vector<GetChangeSetResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetChangeSetResponseBody& setTags(vector<GetChangeSetResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetChangeSetResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline GetChangeSetResponseBody& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The ID of the change set.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The name of the change set.
    std::shared_ptr<string> changeSetName_ = nullptr;
    // The type of the change set.
    std::shared_ptr<string> changeSetType_ = nullptr;
    // The changes of the change set.
    std::shared_ptr<vector<Darabonba::Json>> changes_ = nullptr;
    // The time when the change set was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the change set.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether rollback was performed when the stack failed to be created or updated.
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The execution status of the change set.
    std::shared_ptr<string> executionStatus_ = nullptr;
    // The output logs of the change set.
    std::shared_ptr<GetChangeSetResponseBodyLog> log_ = nullptr;
    // The parameters of the stack.
    std::shared_ptr<vector<GetChangeSetResponseBodyParameters>> parameters_ = nullptr;
    // The region ID of the change set.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the stack with which the change set is associated.
    std::shared_ptr<string> stackId_ = nullptr;
    // The name of the stack with which the change set is associated.
    std::shared_ptr<string> stackName_ = nullptr;
    // The status of the change set.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the change set is in its current state.
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<vector<GetChangeSetResponseBodyTags>> tags_ = nullptr;
    // The template body of the change set.
    // 
    // > This parameter takes effect only if you set ShowTemplate to true.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The timeout period that is specified for the stack creation or update operation.
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
