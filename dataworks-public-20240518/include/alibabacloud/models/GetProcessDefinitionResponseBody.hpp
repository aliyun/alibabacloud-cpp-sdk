// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODY_HPP_
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
  class GetProcessDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessDefinition, processDefinition_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessDefinition, processDefinition_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody(GetProcessDefinitionResponseBody &&) = default ;
    GetProcessDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBody() = default ;
    GetProcessDefinitionResponseBody& operator=(const GetProcessDefinitionResponseBody &) = default ;
    GetProcessDefinitionResponseBody& operator=(GetProcessDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodes_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsSystem, isSystem_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotificationServices, notificationServices_);
        DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodes_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsSystem, isSystem_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServices_);
        DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ProcessDefinition() = default ;
      ProcessDefinition(const ProcessDefinition &) = default ;
      ProcessDefinition(ProcessDefinition &&) = default ;
      ProcessDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessDefinition() = default ;
      ProcessDefinition& operator=(const ProcessDefinition &) = default ;
      ProcessDefinition& operator=(ProcessDefinition &&) = default ;
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
        // A conditional expression is in the format `((#type==\\"typeValue\\"))`, such as `((#odpsProject==\\"PX_BEIJING_TEST\\"))`.
        shared_ptr<string> expression_ {};
        // rule effective stage:
        // 
        // - `Deployment` determines whether an application matches this approval policy upon submission.
        // 
        // - `Running` is used to determine whether an approval process is approval-free. This feature is supported only for the MaxCompute type.
        shared_ptr<string> scope_ {};
        // The condition type. This is an enumeration:
        // 
        // - `odpsProject`,
        // 
        // - `hologresInstanceId`
        // 
        // - `sensibleLevel`,
        // 
        // - `tableGuid`,
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
        // Notification channel, an enumeration:
        // 
        // - Mail
        // 
        // - Sms
        // 
        // - DingRobot
        // 
        // - Weixin
        shared_ptr<string> channel_ {};
        // Additional information in JSON format, such as `{"atAll":"true"}` to specify whether to @all members.
        shared_ptr<string> extension_ {};
        // You must specify WebhookUrl when Channel is DingRobot or Weixin.
        shared_ptr<string> receiver_ {};
      };

      class ApprovalNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalNodes& obj) { 
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(Assignees, assignees_);
          DARABONBA_ANY_TO_JSON(ExtensionProperties, extensionProperties_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(Assignees, assignees_);
          DARABONBA_ANY_FROM_JSON(ExtensionProperties, extensionProperties_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
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
        && this->assignees_ == nullptr && this->extensionProperties_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
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
        inline         const Darabonba::Json & getExtensionProperties() const { DARABONBA_GET(extensionProperties_) };
        Darabonba::Json & getExtensionProperties() { DARABONBA_GET(extensionProperties_) };
        inline ApprovalNodes& setExtensionProperties(const Darabonba::Json & extensionProperties) { DARABONBA_SET_VALUE(extensionProperties_, extensionProperties) };
        inline ApprovalNodes& setExtensionProperties(Darabonba::Json && extensionProperties) { DARABONBA_SET_RVALUE(extensionProperties_, extensionProperties) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ApprovalNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ApprovalNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // **Node approver type**:
        // 
        // - DataWorksProjectRole project role
        // 
        // - DataWorksProjectMember project member
        // 
        // - TableAdministrator table administrator
        // 
        // - TableOrProjectAdministrator Table or project administrator
        // 
        // - AliyunResourceOwner Alibaba Cloud account
        // 
        // - MaxComputeRole MC Administrator
        // 
        // - DLFAdmin and DlfLegacy administrator
        // 
        // - DLFNext Administrator
        // 
        // - TenantRole tenant role
        // 
        // - EmrAdministrator Emr administrator
        // 
        // - LindormAdministrator Lindorm Administrator
        // 
        // - AliyunRamUser RAM user
        shared_ptr<string> accountType_ {};
        // **`AccountType` has different semantics for different types**:
        // 
        // - DataWorksProjectMember specifies the project member\\"s UserId.
        // 
        // - DataWorksProjectRole specifies the code of the project role.
        // 
        // - MaxComputeRole specifies the MaxCompute role.
        // 
        // - TenantRole specifies the tenant role code.
        // 
        // - AliyunRamUser specifies the RAM user ID.
        shared_ptr<vector<string>> assignees_ {};
        // When `AccountType `is set to different types, you must provide different additional declarations:
        // 
        // - DataWorksProjectMember: The key is projectId, and the value is the UserIds of project members, separated by commas.
        // 
        // - MaxComputeRole: The key is a MaxCompute project and the value is a role name in MaxCompute. Multiple role names are separated by a comma.
        Darabonba::Json extensionProperties_ {};
        // Node ID
        shared_ptr<string> id_ {};
        // **Node Name**
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->approvalNodes_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->id_ == nullptr && this->isSystem_ == nullptr && this->name_ == nullptr
        && this->notificationServices_ == nullptr && this->ruleConditions_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
      // approvalNodes Field Functions 
      bool hasApprovalNodes() const { return this->approvalNodes_ != nullptr;};
      void deleteApprovalNodes() { this->approvalNodes_ = nullptr;};
      inline const vector<ProcessDefinition::ApprovalNodes> & getApprovalNodes() const { DARABONBA_PTR_GET_CONST(approvalNodes_, vector<ProcessDefinition::ApprovalNodes>) };
      inline vector<ProcessDefinition::ApprovalNodes> getApprovalNodes() { DARABONBA_PTR_GET(approvalNodes_, vector<ProcessDefinition::ApprovalNodes>) };
      inline ProcessDefinition& setApprovalNodes(const vector<ProcessDefinition::ApprovalNodes> & approvalNodes) { DARABONBA_PTR_SET_VALUE(approvalNodes_, approvalNodes) };
      inline ProcessDefinition& setApprovalNodes(vector<ProcessDefinition::ApprovalNodes> && approvalNodes) { DARABONBA_PTR_SET_RVALUE(approvalNodes_, approvalNodes) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProcessDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ProcessDefinition& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ProcessDefinition& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isSystem Field Functions 
      bool hasIsSystem() const { return this->isSystem_ != nullptr;};
      void deleteIsSystem() { this->isSystem_ = nullptr;};
      inline bool getIsSystem() const { DARABONBA_PTR_GET_DEFAULT(isSystem_, false) };
      inline ProcessDefinition& setIsSystem(bool isSystem) { DARABONBA_PTR_SET_VALUE(isSystem_, isSystem) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProcessDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notificationServices Field Functions 
      bool hasNotificationServices() const { return this->notificationServices_ != nullptr;};
      void deleteNotificationServices() { this->notificationServices_ = nullptr;};
      inline const vector<ProcessDefinition::NotificationServices> & getNotificationServices() const { DARABONBA_PTR_GET_CONST(notificationServices_, vector<ProcessDefinition::NotificationServices>) };
      inline vector<ProcessDefinition::NotificationServices> getNotificationServices() { DARABONBA_PTR_GET(notificationServices_, vector<ProcessDefinition::NotificationServices>) };
      inline ProcessDefinition& setNotificationServices(const vector<ProcessDefinition::NotificationServices> & notificationServices) { DARABONBA_PTR_SET_VALUE(notificationServices_, notificationServices) };
      inline ProcessDefinition& setNotificationServices(vector<ProcessDefinition::NotificationServices> && notificationServices) { DARABONBA_PTR_SET_RVALUE(notificationServices_, notificationServices) };


      // ruleConditions Field Functions 
      bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
      void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
      inline const vector<ProcessDefinition::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<ProcessDefinition::RuleConditions>) };
      inline vector<ProcessDefinition::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<ProcessDefinition::RuleConditions>) };
      inline ProcessDefinition& setRuleConditions(const vector<ProcessDefinition::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
      inline ProcessDefinition& setRuleConditions(vector<ProcessDefinition::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline ProcessDefinition& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProcessDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Approval node list
      shared_ptr<vector<ProcessDefinition::ApprovalNodes>> approvalNodes_ {};
      // The description of the business process.
      shared_ptr<string> description_ {};
      // Enable
      shared_ptr<bool> enabled_ {};
      // Process definition ID
      shared_ptr<string> id_ {};
      // System Default Policy
      shared_ptr<bool> isSystem_ {};
      // Process definition name
      shared_ptr<string> name_ {};
      // Notification Service Statement
      shared_ptr<vector<ProcessDefinition::NotificationServices>> notificationServices_ {};
      // List of rule conditions
      shared_ptr<vector<ProcessDefinition::RuleConditions>> ruleConditions_ {};
      // Subtype:
      // 
      // - Table
      // 
      // - Column
      // 
      // - Database
      // 
      // - Schema
      // 
      // - Default
      shared_ptr<string> subType_ {};
      // Process definition type. Valid values:
      // 
      // - MaxCompute
      // 
      // - DataService
      // 
      // - Extension
      // 
      // - Hologres
      // 
      // - DlfV1 (Custom creation not supported).
      // 
      // - EMR (Custom creation not supported).
      // 
      // - DataAssetGovernance (Custom creation not supported).
      // 
      // - Lindorm (Custom creation not supported).
      // 
      // - StarRocks (Custom creation not supported).
      // 
      // - DlfNext (Custom creation not supported).
      // 
      // - DataWorks (Custom creation not supported).
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->processDefinition_ == nullptr
        && this->requestId_ == nullptr; };
    // processDefinition Field Functions 
    bool hasProcessDefinition() const { return this->processDefinition_ != nullptr;};
    void deleteProcessDefinition() { this->processDefinition_ = nullptr;};
    inline const GetProcessDefinitionResponseBody::ProcessDefinition & getProcessDefinition() const { DARABONBA_PTR_GET_CONST(processDefinition_, GetProcessDefinitionResponseBody::ProcessDefinition) };
    inline GetProcessDefinitionResponseBody::ProcessDefinition getProcessDefinition() { DARABONBA_PTR_GET(processDefinition_, GetProcessDefinitionResponseBody::ProcessDefinition) };
    inline GetProcessDefinitionResponseBody& setProcessDefinition(const GetProcessDefinitionResponseBody::ProcessDefinition & processDefinition) { DARABONBA_PTR_SET_VALUE(processDefinition_, processDefinition) };
    inline GetProcessDefinitionResponseBody& setProcessDefinition(GetProcessDefinitionResponseBody::ProcessDefinition && processDefinition) { DARABONBA_PTR_SET_RVALUE(processDefinition_, processDefinition) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProcessDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Process definition
    shared_ptr<GetProcessDefinitionResponseBody::ProcessDefinition> processDefinition_ {};
    // API request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
