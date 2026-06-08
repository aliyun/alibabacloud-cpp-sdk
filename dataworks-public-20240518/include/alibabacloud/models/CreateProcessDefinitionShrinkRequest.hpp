// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProcessDefinitionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodesShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationServices, notificationServicesShrink_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditionsShrink_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodesShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServicesShrink_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditionsShrink_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateProcessDefinitionShrinkRequest() = default ;
    CreateProcessDefinitionShrinkRequest(const CreateProcessDefinitionShrinkRequest &) = default ;
    CreateProcessDefinitionShrinkRequest(CreateProcessDefinitionShrinkRequest &&) = default ;
    CreateProcessDefinitionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionShrinkRequest() = default ;
    CreateProcessDefinitionShrinkRequest& operator=(const CreateProcessDefinitionShrinkRequest &) = default ;
    CreateProcessDefinitionShrinkRequest& operator=(CreateProcessDefinitionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalNodesShrink_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->notificationServicesShrink_ == nullptr
        && this->ruleConditionsShrink_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
    // approvalNodesShrink Field Functions 
    bool hasApprovalNodesShrink() const { return this->approvalNodesShrink_ != nullptr;};
    void deleteApprovalNodesShrink() { this->approvalNodesShrink_ = nullptr;};
    inline string getApprovalNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(approvalNodesShrink_, "") };
    inline CreateProcessDefinitionShrinkRequest& setApprovalNodesShrink(string approvalNodesShrink) { DARABONBA_PTR_SET_VALUE(approvalNodesShrink_, approvalNodesShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProcessDefinitionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProcessDefinitionShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateProcessDefinitionShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProcessDefinitionShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationServicesShrink Field Functions 
    bool hasNotificationServicesShrink() const { return this->notificationServicesShrink_ != nullptr;};
    void deleteNotificationServicesShrink() { this->notificationServicesShrink_ = nullptr;};
    inline string getNotificationServicesShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationServicesShrink_, "") };
    inline CreateProcessDefinitionShrinkRequest& setNotificationServicesShrink(string notificationServicesShrink) { DARABONBA_PTR_SET_VALUE(notificationServicesShrink_, notificationServicesShrink) };


    // ruleConditionsShrink Field Functions 
    bool hasRuleConditionsShrink() const { return this->ruleConditionsShrink_ != nullptr;};
    void deleteRuleConditionsShrink() { this->ruleConditionsShrink_ = nullptr;};
    inline string getRuleConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(ruleConditionsShrink_, "") };
    inline CreateProcessDefinitionShrinkRequest& setRuleConditionsShrink(string ruleConditionsShrink) { DARABONBA_PTR_SET_VALUE(ruleConditionsShrink_, ruleConditionsShrink) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateProcessDefinitionShrinkRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateProcessDefinitionShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> approvalNodesShrink_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> notificationServicesShrink_ {};
    // This parameter is required.
    shared_ptr<string> ruleConditionsShrink_ {};
    shared_ptr<string> subType_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
