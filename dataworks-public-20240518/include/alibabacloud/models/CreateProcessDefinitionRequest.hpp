// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCESSDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProcessDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationServices, notificationServices_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServices_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateProcessDefinitionRequest() = default ;
    CreateProcessDefinitionRequest(const CreateProcessDefinitionRequest &) = default ;
    CreateProcessDefinitionRequest(CreateProcessDefinitionRequest &&) = default ;
    CreateProcessDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcessDefinitionRequest() = default ;
    CreateProcessDefinitionRequest& operator=(const CreateProcessDefinitionRequest &) = default ;
    CreateProcessDefinitionRequest& operator=(CreateProcessDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleConditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleConditions& obj) { 
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RuleConditions& obj) { 
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RuleConditions() = default ;
      RuleConditions(const RuleConditions &) = default ;
      RuleConditions(RuleConditions &&) = default ;
      RuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleConditions() = default ;
      RuleConditions& operator=(const RuleConditions &) = default ;
      RuleConditions& operator=(RuleConditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expression_ == nullptr
        && this->scope_ == nullptr && this->type_ == nullptr; };
      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline RuleConditions& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline RuleConditions& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The condition expression in the format of ((#type==\\"typeValue\\")). Example: ((#odpsProject==\\"PX_BEIJING_TEST\\")).
      shared_ptr<string> expression_ {};
      // The stage at which the rule takes effect:
      // - `Deployment`: used to determine whether the approval policy matches when a request is submitted.
      // - `Running`: used to determine whether approval is exempted during the execution of the approval process. This value is supported only for the MaxCompute type.
      shared_ptr<string> scope_ {};
      // The condition type. Valid values:
      // 
      // - `odpsProject`
      // - `hologresInstanceId`
      // - `sensibleLevel`
      // - `tableGuid`
      // - `projectId`
      shared_ptr<string> type_ {};
    };

    class NotificationServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotificationServices& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(Receiver, receiver_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationServices& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(Receiver, receiver_);
      };
      NotificationServices() = default ;
      NotificationServices(const NotificationServices &) = default ;
      NotificationServices(NotificationServices &&) = default ;
      NotificationServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotificationServices() = default ;
      NotificationServices& operator=(const NotificationServices &) = default ;
      NotificationServices& operator=(NotificationServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->extension_ == nullptr && this->receiver_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline NotificationServices& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline NotificationServices& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // receiver Field Functions 
      bool hasReceiver() const { return this->receiver_ != nullptr;};
      void deleteReceiver() { this->receiver_ = nullptr;};
      inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
      inline NotificationServices& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    protected:
      // The notification channel. Valid values:
      // 
      // - Mail
      // - Sms
      // - DingRobot
      // - Weixin
      shared_ptr<string> channel_ {};
      // The extension information in JSON format. Example: `{"atAll":"true"}`, which specifies whether to mention all members.
      shared_ptr<string> extension_ {};
      // The WebhookUrl that must be specified when Channel is set to DingRobot or Weixin.
      shared_ptr<string> receiver_ {};
    };

    class ApprovalNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApprovalNodes& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(Assignees, assignees_);
        DARABONBA_ANY_TO_JSON(ExtensionProperties, extensionProperties_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ApprovalNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(Assignees, assignees_);
        DARABONBA_ANY_FROM_JSON(ExtensionProperties, extensionProperties_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      ApprovalNodes() = default ;
      ApprovalNodes(const ApprovalNodes &) = default ;
      ApprovalNodes(ApprovalNodes &&) = default ;
      ApprovalNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApprovalNodes() = default ;
      ApprovalNodes& operator=(const ApprovalNodes &) = default ;
      ApprovalNodes& operator=(ApprovalNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->assignees_ == nullptr && this->extensionProperties_ == nullptr && this->name_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline ApprovalNodes& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // assignees Field Functions 
      bool hasAssignees() const { return this->assignees_ != nullptr;};
      void deleteAssignees() { this->assignees_ = nullptr;};
      inline const vector<string> & getAssignees() const { DARABONBA_PTR_GET_CONST(assignees_, vector<string>) };
      inline vector<string> getAssignees() { DARABONBA_PTR_GET(assignees_, vector<string>) };
      inline ApprovalNodes& setAssignees(const vector<string> & assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };
      inline ApprovalNodes& setAssignees(vector<string> && assignees) { DARABONBA_PTR_SET_RVALUE(assignees_, assignees) };


      // extensionProperties Field Functions 
      bool hasExtensionProperties() const { return this->extensionProperties_ != nullptr;};
      void deleteExtensionProperties() { this->extensionProperties_ = nullptr;};
      inline       const Darabonba::Json & getExtensionProperties() const { DARABONBA_GET(extensionProperties_) };
      Darabonba::Json & getExtensionProperties() { DARABONBA_GET(extensionProperties_) };
      inline ApprovalNodes& setExtensionProperties(const Darabonba::Json & extensionProperties) { DARABONBA_SET_VALUE(extensionProperties_, extensionProperties) };
      inline ApprovalNodes& setExtensionProperties(Darabonba::Json && extensionProperties) { DARABONBA_SET_RVALUE(extensionProperties_, extensionProperties) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApprovalNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The type of approver for the node:
      // - DataWorksProjectRole: workspace role.
      // - DataWorksProjectMember: workspace member.
      // - TableAdministrator: table owner.
      // - TableOrProjectAdministrator: table or workspace administrator.
      // - AliyunResourceOwner: Alibaba Cloud account.
      // - MaxComputeRole: MaxCompute administrator.
      // - DLFAdmin: DLF Legacy administrator.
      // - DLFNextAdmin: DLF Next administrator.
      // - TenantRole: tenant role.
      // - EmrAdministrator: EMR administrator.
      // - LindormAdministrator: Lindorm administrator.
      // - AliyunRamUser: RAM user.
      shared_ptr<string> accountType_ {};
      // The semantics of this parameter varies based on the value of `AccountType`:
      // - DataWorksProjectMember: the user ID of the workspace member.
      // - DataWorksProjectRole: the code of the workspace role. If a custom workspace role is required, set this parameter to "custom-role" and further configure the role in ExtensionProperties.
      // - MaxComputeRole: the MaxCompute role.
      // - TenantRole: the code of the tenant role.
      // - AliyunRamUser: the RAM user ID.
      shared_ptr<vector<string>> assignees_ {};
      // The additional declarations required based on the value of `AccountType`:
      // 
      // - DataWorksProjectMember: specify different workspace member user IDs. The key is the workspace ID, and the value is the user ID of the workspace member. Separate multiple user IDs with commas (,).
      // 
      // - DataWorksProjectRole: specify different custom workspace role codes. The key is the workspace ID, and the value is the custom workspace role code. Separate multiple role codes with commas (,).
      // 
      // - MaxComputeRole: specify the roles under a MaxCompute project. The key is the MaxCompute project name, and the value is the role name in MaxCompute. Separate multiple role names with commas (,).
      Darabonba::Json extensionProperties_ {};
      // The name of the node.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->approvalNodes_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->notificationServices_ == nullptr
        && this->ruleConditions_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
    // approvalNodes Field Functions 
    bool hasApprovalNodes() const { return this->approvalNodes_ != nullptr;};
    void deleteApprovalNodes() { this->approvalNodes_ = nullptr;};
    inline const vector<CreateProcessDefinitionRequest::ApprovalNodes> & getApprovalNodes() const { DARABONBA_PTR_GET_CONST(approvalNodes_, vector<CreateProcessDefinitionRequest::ApprovalNodes>) };
    inline vector<CreateProcessDefinitionRequest::ApprovalNodes> getApprovalNodes() { DARABONBA_PTR_GET(approvalNodes_, vector<CreateProcessDefinitionRequest::ApprovalNodes>) };
    inline CreateProcessDefinitionRequest& setApprovalNodes(const vector<CreateProcessDefinitionRequest::ApprovalNodes> & approvalNodes) { DARABONBA_PTR_SET_VALUE(approvalNodes_, approvalNodes) };
    inline CreateProcessDefinitionRequest& setApprovalNodes(vector<CreateProcessDefinitionRequest::ApprovalNodes> && approvalNodes) { DARABONBA_PTR_SET_RVALUE(approvalNodes_, approvalNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateProcessDefinitionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProcessDefinitionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateProcessDefinitionRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProcessDefinitionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationServices Field Functions 
    bool hasNotificationServices() const { return this->notificationServices_ != nullptr;};
    void deleteNotificationServices() { this->notificationServices_ = nullptr;};
    inline const vector<CreateProcessDefinitionRequest::NotificationServices> & getNotificationServices() const { DARABONBA_PTR_GET_CONST(notificationServices_, vector<CreateProcessDefinitionRequest::NotificationServices>) };
    inline vector<CreateProcessDefinitionRequest::NotificationServices> getNotificationServices() { DARABONBA_PTR_GET(notificationServices_, vector<CreateProcessDefinitionRequest::NotificationServices>) };
    inline CreateProcessDefinitionRequest& setNotificationServices(const vector<CreateProcessDefinitionRequest::NotificationServices> & notificationServices) { DARABONBA_PTR_SET_VALUE(notificationServices_, notificationServices) };
    inline CreateProcessDefinitionRequest& setNotificationServices(vector<CreateProcessDefinitionRequest::NotificationServices> && notificationServices) { DARABONBA_PTR_SET_RVALUE(notificationServices_, notificationServices) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<CreateProcessDefinitionRequest::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<CreateProcessDefinitionRequest::RuleConditions>) };
    inline vector<CreateProcessDefinitionRequest::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<CreateProcessDefinitionRequest::RuleConditions>) };
    inline CreateProcessDefinitionRequest& setRuleConditions(const vector<CreateProcessDefinitionRequest::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline CreateProcessDefinitionRequest& setRuleConditions(vector<CreateProcessDefinitionRequest::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateProcessDefinitionRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateProcessDefinitionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of approval nodes.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateProcessDefinitionRequest::ApprovalNodes>> approvalNodes_ {};
    // The idempotency token. We recommend that you use a UUID.
    shared_ptr<string> clientToken_ {};
    // The description of the process definition.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the process definition.
    shared_ptr<bool> enabled_ {};
    // The name of the process definition.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The notification service declarations.
    shared_ptr<vector<CreateProcessDefinitionRequest::NotificationServices>> notificationServices_ {};
    // The list of condition rules.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateProcessDefinitionRequest::RuleConditions>> ruleConditions_ {};
    // The subtype. Valid values:
    // 
    // - Table
    // - Column
    // - Database
    // - Schema
    // - Default
    shared_ptr<string> subType_ {};
    // The type of the process definition. Valid values:
    // 
    // 1. MaxCompute
    // 2. DataService
    // 3. Extension
    // 4. Hologres
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
