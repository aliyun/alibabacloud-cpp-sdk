// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTAUTOMATERESPONSECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTAUTOMATERESPONSECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostAutomateResponseConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostAutomateResponseConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_TO_JSON(ExecutionCondition, executionCondition_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, PostAutomateResponseConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(AutoResponseType, autoResponseType_);
      DARABONBA_PTR_FROM_JSON(ExecutionCondition, executionCondition_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    PostAutomateResponseConfigRequest() = default ;
    PostAutomateResponseConfigRequest(const PostAutomateResponseConfigRequest &) = default ;
    PostAutomateResponseConfigRequest(PostAutomateResponseConfigRequest &&) = default ;
    PostAutomateResponseConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostAutomateResponseConfigRequest() = default ;
    PostAutomateResponseConfigRequest& operator=(const PostAutomateResponseConfigRequest &) = default ;
    PostAutomateResponseConfigRequest& operator=(PostAutomateResponseConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionConfig_ == nullptr
        && this->actionType_ == nullptr && this->autoResponseType_ == nullptr && this->executionCondition_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->ruleName_ == nullptr && this->subUserId_ == nullptr; };
    // actionConfig Field Functions 
    bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
    void deleteActionConfig() { this->actionConfig_ = nullptr;};
    inline string getActionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
    inline PostAutomateResponseConfigRequest& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline PostAutomateResponseConfigRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // autoResponseType Field Functions 
    bool hasAutoResponseType() const { return this->autoResponseType_ != nullptr;};
    void deleteAutoResponseType() { this->autoResponseType_ = nullptr;};
    inline string getAutoResponseType() const { DARABONBA_PTR_GET_DEFAULT(autoResponseType_, "") };
    inline PostAutomateResponseConfigRequest& setAutoResponseType(string autoResponseType) { DARABONBA_PTR_SET_VALUE(autoResponseType_, autoResponseType) };


    // executionCondition Field Functions 
    bool hasExecutionCondition() const { return this->executionCondition_ != nullptr;};
    void deleteExecutionCondition() { this->executionCondition_ = nullptr;};
    inline string getExecutionCondition() const { DARABONBA_PTR_GET_DEFAULT(executionCondition_, "") };
    inline PostAutomateResponseConfigRequest& setExecutionCondition(string executionCondition) { DARABONBA_PTR_SET_VALUE(executionCondition_, executionCondition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PostAutomateResponseConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostAutomateResponseConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostAutomateResponseConfigRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostAutomateResponseConfigRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PostAutomateResponseConfigRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline PostAutomateResponseConfigRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The configuration of the action that is specified in the automated response rule. The value is a JSON array.
    shared_ptr<string> actionConfig_ {};
    // The type of the action. Separate multiple values with commas. Valid values:
    // 
    // - **doPlaybook**: runs a playbook
    // 
    // - **changeEventStatus**: changes the status of the event
    // 
    // - **changeThreatLevel**: changes the threat level of the event
    shared_ptr<string> actionType_ {};
    // The type of the automated response. Valid values:
    // 
    // - **event**: event
    // 
    // - **alert**: alert
    shared_ptr<string> autoResponseType_ {};
    // The trigger condition of the automated response rule. The value is in the JSON format.
    shared_ptr<string> executionCondition_ {};
    // The ID of the automated response rule.
    shared_ptr<int64_t> id_ {};
    // The region where the Data Management center of Threat Analysis is located. Select a region based on the location of your assets. Valid values:
    // 
    // - **cn-hangzhou**: your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - **ap-southeast-1**: your assets are outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the user that the administrator uses to switch the view. This parameter is used when an administrator switches to the perspective of a member.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // 
    // - 1: the view of all accounts that are managed by the administrator.
    shared_ptr<int32_t> roleType_ {};
    // The name of the automated response rule.
    shared_ptr<string> ruleName_ {};
    // The ID of the user who created the rule.
    shared_ptr<int64_t> subUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
