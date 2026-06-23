// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONREQUEST_HPP_
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
  class UpdateProcessDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationServices, notificationServices_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServices_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
    };
    UpdateProcessDefinitionRequest() = default ;
    UpdateProcessDefinitionRequest(const UpdateProcessDefinitionRequest &) = default ;
    UpdateProcessDefinitionRequest(UpdateProcessDefinitionRequest &&) = default ;
    UpdateProcessDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionRequest() = default ;
    UpdateProcessDefinitionRequest& operator=(const UpdateProcessDefinitionRequest &) = default ;
    UpdateProcessDefinitionRequest& operator=(UpdateProcessDefinitionRequest &&) = default ;
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
      // The conditional expression. Format: ((#type==\\"typeValue\\")). For example: ((#odpsProject==\\"PX_BEIJING_TEST\\")).
      shared_ptr<string> expression_ {};
      // The phase in which the rule takes effect. Valid values:
      // 
      // - **Deployment**: Determines whether the approval policy applies when an application is submitted.
      // 
      // - **Running**: Determines whether to skip the approval during the approval process. This phase is supported only for MaxCompute.
      shared_ptr<string> scope_ {};
      // The type of the condition. Valid values:
      // 
      // - `odpsProject`
      // 
      // - `hologresInstanceId`
      // 
      // - `sensibleLevel`
      // 
      // - `tableGuid`
      // 
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
      // 
      // - Sms
      // 
      // - DingRobot
      // 
      // - Weixin
      shared_ptr<string> channel_ {};
      // Additional information in JSON format. For example, use {"atAll":"true"} to specify whether to notify all members.
      shared_ptr<string> extension_ {};
      // The webhook URL. This parameter is required when `Channel` is set to `DingRobot` or `Weixin`.
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
      inline string getAssignees() const { DARABONBA_PTR_GET_DEFAULT(assignees_, "") };
      inline ApprovalNodes& setAssignees(string assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };


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
      // The approver type for the node. Valid values:
      // 
      // - `DataWorksProjectRole`: A workspace role.
      // 
      // - `DataWorksProjectMember`: A workspace member.
      // 
      // - `TableAdministrator`: A table administrator.
      // 
      // - `TableOrProjectAdministrator`: The administrator of the table or project.
      // 
      // - `AliyunResourceOwner`: An Alibaba Cloud account.
      // 
      // - `MaxComputeRole`: A MaxCompute administrator.
      // 
      // - `DLFAdmin`: A DlfLegacy administrator.
      // 
      // - `DLFNextAdmin`: A DLFNext administrator.
      // 
      // - `TenantRole`: A tenant role.
      // 
      // - `EmrAdministrator`: An EMR administrator.
      // 
      // - `LindormAdministrator`: A Lindorm administrator.
      // 
      // - `AliyunRamUser`: A RAM user.
      shared_ptr<string> accountType_ {};
      // Specifies the approvers. The required value depends on the `AccountType`:
      // 
      // - If `AccountType` is `DataWorksProjectMember`, this parameter specifies the user IDs of workspace members.
      // 
      // - If `AccountType` is `DataWorksProjectRole`, this parameter specifies the codes of workspace roles.
      // 
      // - If `AccountType` is `MaxComputeRole`, this parameter specifies the MaxCompute roles.
      // 
      // - If `AccountType` is `TenantRole`, this parameter specifies the codes of tenant roles.
      // 
      // - If `AccountType` is `AliyunRamUser`, this parameter specifies the user IDs of RAM users.
      shared_ptr<string> assignees_ {};
      // Additional properties that are required for specific `AccountType` values:
      // 
      // - If `AccountType` is `DataWorksProjectMember`: The key is `projectId` and the value is the user ID of a workspace member. Use commas (,) to separate multiple user IDs.
      // 
      // - If `AccountType` is `MaxComputeRole`: The key is the MaxCompute project name and the value is the role name in MaxCompute. Use commas (,) to separate multiple role names.
      Darabonba::Json extensionProperties_ {};
      // The name of the node.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->approvalNodes_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notificationServices_ == nullptr
        && this->ruleConditions_ == nullptr; };
    // approvalNodes Field Functions 
    bool hasApprovalNodes() const { return this->approvalNodes_ != nullptr;};
    void deleteApprovalNodes() { this->approvalNodes_ = nullptr;};
    inline const vector<UpdateProcessDefinitionRequest::ApprovalNodes> & getApprovalNodes() const { DARABONBA_PTR_GET_CONST(approvalNodes_, vector<UpdateProcessDefinitionRequest::ApprovalNodes>) };
    inline vector<UpdateProcessDefinitionRequest::ApprovalNodes> getApprovalNodes() { DARABONBA_PTR_GET(approvalNodes_, vector<UpdateProcessDefinitionRequest::ApprovalNodes>) };
    inline UpdateProcessDefinitionRequest& setApprovalNodes(const vector<UpdateProcessDefinitionRequest::ApprovalNodes> & approvalNodes) { DARABONBA_PTR_SET_VALUE(approvalNodes_, approvalNodes) };
    inline UpdateProcessDefinitionRequest& setApprovalNodes(vector<UpdateProcessDefinitionRequest::ApprovalNodes> && approvalNodes) { DARABONBA_PTR_SET_RVALUE(approvalNodes_, approvalNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProcessDefinitionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProcessDefinitionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateProcessDefinitionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProcessDefinitionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationServices Field Functions 
    bool hasNotificationServices() const { return this->notificationServices_ != nullptr;};
    void deleteNotificationServices() { this->notificationServices_ = nullptr;};
    inline const vector<UpdateProcessDefinitionRequest::NotificationServices> & getNotificationServices() const { DARABONBA_PTR_GET_CONST(notificationServices_, vector<UpdateProcessDefinitionRequest::NotificationServices>) };
    inline vector<UpdateProcessDefinitionRequest::NotificationServices> getNotificationServices() { DARABONBA_PTR_GET(notificationServices_, vector<UpdateProcessDefinitionRequest::NotificationServices>) };
    inline UpdateProcessDefinitionRequest& setNotificationServices(const vector<UpdateProcessDefinitionRequest::NotificationServices> & notificationServices) { DARABONBA_PTR_SET_VALUE(notificationServices_, notificationServices) };
    inline UpdateProcessDefinitionRequest& setNotificationServices(vector<UpdateProcessDefinitionRequest::NotificationServices> && notificationServices) { DARABONBA_PTR_SET_RVALUE(notificationServices_, notificationServices) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<UpdateProcessDefinitionRequest::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<UpdateProcessDefinitionRequest::RuleConditions>) };
    inline vector<UpdateProcessDefinitionRequest::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<UpdateProcessDefinitionRequest::RuleConditions>) };
    inline UpdateProcessDefinitionRequest& setRuleConditions(const vector<UpdateProcessDefinitionRequest::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline UpdateProcessDefinitionRequest& setRuleConditions(vector<UpdateProcessDefinitionRequest::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


  protected:
    // A list of approval nodes. This parameter does not apply to system policies.
    shared_ptr<vector<UpdateProcessDefinitionRequest::ApprovalNodes>> approvalNodes_ {};
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
    shared_ptr<vector<UpdateProcessDefinitionRequest::NotificationServices>> notificationServices_ {};
    // A list of rule conditions. This parameter does not apply to system policies.
    shared_ptr<vector<UpdateProcessDefinitionRequest::RuleConditions>> ruleConditions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
