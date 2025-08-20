// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATION_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets.hpp>
#include <alibabacloud/models/GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences.hpp>
#include <alibabacloud/models/GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupOperationResponseBodyStackGroupOperation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBodyStackGroupOperation& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_TO_JSON(RetainStacks, retainStacks_);
      DARABONBA_PTR_TO_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
      DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBodyStackGroupOperation& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_FROM_JSON(RetainStacks, retainStacks_);
      DARABONBA_PTR_FROM_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
      DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetStackGroupOperationResponseBodyStackGroupOperation() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperation(const GetStackGroupOperationResponseBodyStackGroupOperation &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperation(GetStackGroupOperationResponseBodyStackGroupOperation &&) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBodyStackGroupOperation() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperation& operator=(const GetStackGroupOperationResponseBodyStackGroupOperation &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperation& operator=(GetStackGroupOperationResponseBodyStackGroupOperation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->administrationRoleName_ != nullptr && this->createTime_ != nullptr && this->deploymentTargets_ != nullptr && this->endTime_ != nullptr && this->executionRoleName_ != nullptr
        && this->operationDescription_ != nullptr && this->operationId_ != nullptr && this->operationPreferences_ != nullptr && this->retainStacks_ != nullptr && this->stackGroupDriftDetectionDetail_ != nullptr
        && this->stackGroupId_ != nullptr && this->stackGroupName_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // administrationRoleName Field Functions 
    bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
    void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
    inline string administrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets & deploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets) };
    inline Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets deploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setDeploymentTargets(const Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setDeploymentTargets(Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executionRoleName Field Functions 
    bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
    void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
    inline string executionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline const Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences & operationPreferences() const { DARABONBA_PTR_GET_CONST(operationPreferences_, Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences) };
    inline Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences operationPreferences() { DARABONBA_PTR_GET(operationPreferences_, Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setOperationPreferences(const Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences & operationPreferences) { DARABONBA_PTR_SET_VALUE(operationPreferences_, operationPreferences) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setOperationPreferences(Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences && operationPreferences) { DARABONBA_PTR_SET_RVALUE(operationPreferences_, operationPreferences) };


    // retainStacks Field Functions 
    bool hasRetainStacks() const { return this->retainStacks_ != nullptr;};
    void deleteRetainStacks() { this->retainStacks_ = nullptr;};
    inline bool retainStacks() const { DARABONBA_PTR_GET_DEFAULT(retainStacks_, false) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setRetainStacks(bool retainStacks) { DARABONBA_PTR_SET_VALUE(retainStacks_, retainStacks) };


    // stackGroupDriftDetectionDetail Field Functions 
    bool hasStackGroupDriftDetectionDetail() const { return this->stackGroupDriftDetectionDetail_ != nullptr;};
    void deleteStackGroupDriftDetectionDetail() { this->stackGroupDriftDetectionDetail_ = nullptr;};
    inline const Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail() const { DARABONBA_PTR_GET_CONST(stackGroupDriftDetectionDetail_, Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail) };
    inline Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail stackGroupDriftDetectionDetail() { DARABONBA_PTR_GET(stackGroupDriftDetectionDetail_, Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setStackGroupDriftDetectionDetail(const Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_VALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setStackGroupDriftDetectionDetail(Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail && stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_RVALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };


    // stackGroupId Field Functions 
    bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
    void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
    inline string stackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The operation type.
    // 
    // Valid values:
    // 
    // *   CREATE
    // *   UPDATE
    // *   DELETE
    // *   DETECT_DRIFT
    std::shared_ptr<string> action_ = nullptr;
    // The name of the RAM role that you specify for the administrator account when you create the self-managed stack group. ROS assumes the administrator role to perform operations. If this parameter is not specified, the default value AliyunROSStackGroupAdministrationRole is returned.
    std::shared_ptr<string> administrationRoleName_ = nullptr;
    // The time when the operation was initiated.
    std::shared_ptr<string> createTime_ = nullptr;
    // The destinations to deploy stack instances when the stack is granted service-managed permissions.
    std::shared_ptr<Models::GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets> deploymentTargets_ = nullptr;
    // The time when the operation ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the RAM role that you specify for the execution account when you create the self-managed stack group. The administrator role AliyunROSStackGroupAdministrationRole assumes the execution role to perform operations. If this parameter is not specified, the default value AliyunROSStackGroupExecutionRole is returned.
    std::shared_ptr<string> executionRoleName_ = nullptr;
    // The description of the operation.
    // 
    // > This parameter is returned only if OperationDescription is specified when the [CreateStackInstances](https://help.aliyun.com/document_detail/151338.html) operation is called to create stack instances.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // The operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
    // The operation settings.
    std::shared_ptr<Models::GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences> operationPreferences_ = nullptr;
    // Indicates whether stacks are retained when the associated stack instances are deleted. When you delete a stack instance, you can choose to delete or retain the stack with which the stack instance is associated.
    // 
    // Valid values:
    // 
    // *   true: Stacks are retained when the associated stack instances are deleted.
    // *   false: Stacks are deleted when the associated stack instances are deleted. Proceed with caution.
    // 
    // > This parameter is returned only if you delete stack instances.
    std::shared_ptr<bool> retainStacks_ = nullptr;
    // The information about drift detection.
    // 
    // > This parameter is returned only if drift detection is performed.
    std::shared_ptr<Models::GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail_ = nullptr;
    // The ID of the stack group.
    std::shared_ptr<string> stackGroupId_ = nullptr;
    // The name of the stack group.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The state of the operation.
    // 
    // Valid values:
    // 
    // *   RUNNING
    // *   SUCCEEDED
    // *   FAILED
    // *   STOPPING
    // *   STOPPED
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
