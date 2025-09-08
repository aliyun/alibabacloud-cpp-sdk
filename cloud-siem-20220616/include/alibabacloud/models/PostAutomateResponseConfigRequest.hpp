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
    virtual bool empty() const override { this->actionConfig_ != nullptr
        && this->actionType_ != nullptr && this->autoResponseType_ != nullptr && this->executionCondition_ != nullptr && this->id_ != nullptr && this->regionId_ != nullptr
        && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->ruleName_ != nullptr && this->subUserId_ != nullptr; };
    // actionConfig Field Functions 
    bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
    void deleteActionConfig() { this->actionConfig_ = nullptr;};
    inline string actionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
    inline PostAutomateResponseConfigRequest& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline PostAutomateResponseConfigRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // autoResponseType Field Functions 
    bool hasAutoResponseType() const { return this->autoResponseType_ != nullptr;};
    void deleteAutoResponseType() { this->autoResponseType_ = nullptr;};
    inline string autoResponseType() const { DARABONBA_PTR_GET_DEFAULT(autoResponseType_, "") };
    inline PostAutomateResponseConfigRequest& setAutoResponseType(string autoResponseType) { DARABONBA_PTR_SET_VALUE(autoResponseType_, autoResponseType) };


    // executionCondition Field Functions 
    bool hasExecutionCondition() const { return this->executionCondition_ != nullptr;};
    void deleteExecutionCondition() { this->executionCondition_ = nullptr;};
    inline string executionCondition() const { DARABONBA_PTR_GET_DEFAULT(executionCondition_, "") };
    inline PostAutomateResponseConfigRequest& setExecutionCondition(string executionCondition) { DARABONBA_PTR_SET_VALUE(executionCondition_, executionCondition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PostAutomateResponseConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostAutomateResponseConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostAutomateResponseConfigRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostAutomateResponseConfigRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PostAutomateResponseConfigRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline PostAutomateResponseConfigRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The action configuration of the automated response rule. The value is in the JSON format.
    std::shared_ptr<string> actionConfig_ = nullptr;
    // The type of the handling action. Multiple types are separated by commas (,). Valid values:
    // 
    // *   **doPlaybook**: runs the playbook.
    // *   **changeEventStatus**: changes the event status.
    // *   **changeThreatLevel**: changes the threat level of the event.
    std::shared_ptr<string> actionType_ = nullptr;
    // The type of the automated response rule. Valid values:
    // 
    // *   **event**
    // *   **alert**
    std::shared_ptr<string> autoResponseType_ = nullptr;
    // The trigger condition of the automated response rule. The value is in the JSON format.
    std::shared_ptr<string> executionCondition_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The data management center of the threat analysis feature. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   **cn-hangzhou**: Your assets reside in regions in China.
    // *   **ap-southeast-1**: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The rule name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The ID of the user who created the rule.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
