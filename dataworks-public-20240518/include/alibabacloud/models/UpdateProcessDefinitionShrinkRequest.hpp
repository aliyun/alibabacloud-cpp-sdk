// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateProcessDefinitionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodesShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationServices, notificationServicesShrink_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodesShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServicesShrink_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditionsShrink_);
    };
    UpdateProcessDefinitionShrinkRequest() = default ;
    UpdateProcessDefinitionShrinkRequest(const UpdateProcessDefinitionShrinkRequest &) = default ;
    UpdateProcessDefinitionShrinkRequest(UpdateProcessDefinitionShrinkRequest &&) = default ;
    UpdateProcessDefinitionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionShrinkRequest() = default ;
    UpdateProcessDefinitionShrinkRequest& operator=(const UpdateProcessDefinitionShrinkRequest &) = default ;
    UpdateProcessDefinitionShrinkRequest& operator=(UpdateProcessDefinitionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalNodesShrink_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notificationServicesShrink_ == nullptr
        && this->ruleConditionsShrink_ == nullptr; };
    // approvalNodesShrink Field Functions 
    bool hasApprovalNodesShrink() const { return this->approvalNodesShrink_ != nullptr;};
    void deleteApprovalNodesShrink() { this->approvalNodesShrink_ = nullptr;};
    inline string getApprovalNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(approvalNodesShrink_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setApprovalNodesShrink(string approvalNodesShrink) { DARABONBA_PTR_SET_VALUE(approvalNodesShrink_, approvalNodesShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationServicesShrink Field Functions 
    bool hasNotificationServicesShrink() const { return this->notificationServicesShrink_ != nullptr;};
    void deleteNotificationServicesShrink() { this->notificationServicesShrink_ = nullptr;};
    inline string getNotificationServicesShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationServicesShrink_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setNotificationServicesShrink(string notificationServicesShrink) { DARABONBA_PTR_SET_VALUE(notificationServicesShrink_, notificationServicesShrink) };


    // ruleConditionsShrink Field Functions 
    bool hasRuleConditionsShrink() const { return this->ruleConditionsShrink_ != nullptr;};
    void deleteRuleConditionsShrink() { this->ruleConditionsShrink_ = nullptr;};
    inline string getRuleConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(ruleConditionsShrink_, "") };
    inline UpdateProcessDefinitionShrinkRequest& setRuleConditionsShrink(string ruleConditionsShrink) { DARABONBA_PTR_SET_VALUE(ruleConditionsShrink_, ruleConditionsShrink) };


  protected:
    // A list of approval nodes. This parameter does not apply to system policies.
    shared_ptr<string> approvalNodesShrink_ {};
    // An idempotent parameter. It ensures that retried requests do not result in duplicate operations.
    shared_ptr<string> clientToken_ {};
    // The description of the process definition.
    shared_ptr<string> description_ {};
    // The ID of the process definition.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The name of the process definition.
    shared_ptr<string> name_ {};
    // The notification service configurations.
    shared_ptr<string> notificationServicesShrink_ {};
    // A list of rule conditions. This parameter does not apply to system policies.
    shared_ptr<string> ruleConditionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
