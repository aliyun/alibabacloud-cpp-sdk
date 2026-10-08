// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyTaskInfoRequest() = default ;
    ModifyTaskInfoRequest(const ModifyTaskInfoRequest &) = default ;
    ModifyTaskInfoRequest(ModifyTaskInfoRequest &&) = default ;
    ModifyTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTaskInfoRequest() = default ;
    ModifyTaskInfoRequest& operator=(const ModifyTaskInfoRequest &) = default ;
    ModifyTaskInfoRequest& operator=(ModifyTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionParams_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr && this->stepName_ == nullptr
        && this->taskAction_ == nullptr && this->taskId_ == nullptr; };
    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline ModifyTaskInfoRequest& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTaskInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyTaskInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyTaskInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyTaskInfoRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline ModifyTaskInfoRequest& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ModifyTaskInfoRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyTaskInfoRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The action-related parameters, which can be extended as needed. When taskAction is set to modifySwitchTime, set ActionParams to `{"recoverMode": "xxx", "recoverTime": "xxx"}`.
    // 
    // recoverMode specifies the task recovery pattern. Valid values:
    // - **timePoint**: Execute at a specified point in time.
    // - **immediate**: Execute immediately.
    // 
    // recoverTime specifies the recovery time in UTC+0. Format: yyyy-MM-ddTHH:mm:ssZ. This parameter is required when recoverMode is set to timePoint.
    shared_ptr<string> actionParams_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/610399.html) operation to query available region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The name of the execution step.
    shared_ptr<string> stepName_ {};
    // The task action. Set the value to modifySwitchTime, which indicates modifying the switchover time or recovery time.
    shared_ptr<string> taskAction_ {};
    // The task ID. You can call the DescribeTasks operation to obtain the task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
