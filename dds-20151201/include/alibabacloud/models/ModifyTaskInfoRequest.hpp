// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
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
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->stepName_ == nullptr && this->taskAction_ == nullptr
        && this->taskId_ == nullptr; };
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
    // A action-related parameter. This parameter can be extended based on your business requirements. This parameter value varies with the value of the TaskAction parameter.
    shared_ptr<string> actionParams_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the step visible to the user.
    // 
    // This parameter is required.
    shared_ptr<string> stepName_ {};
    // The action name that corresponds to the state described in the actionInfo parameter of the [DescribeHistoryTasks](https://help.aliyun.com/document_detail/2639186.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> taskAction_ {};
    // The task ID. Separate multiple IDs with commas (,). You can specify up to 10 task IDs.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
