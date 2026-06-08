// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSINSTANCERESPONSEBODY_HPP_
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
  class GetProcessInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessInstance, processInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessInstance, processInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProcessInstanceResponseBody() = default ;
    GetProcessInstanceResponseBody(const GetProcessInstanceResponseBody &) = default ;
    GetProcessInstanceResponseBody(GetProcessInstanceResponseBody &&) = default ;
    GetProcessInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessInstanceResponseBody() = default ;
    GetProcessInstanceResponseBody& operator=(const GetProcessInstanceResponseBody &) = default ;
    GetProcessInstanceResponseBody& operator=(GetProcessInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessInstance& obj) { 
        DARABONBA_PTR_TO_JSON(Applicator, applicator_);
        DARABONBA_PTR_TO_JSON(ApplicatorName, applicatorName_);
        DARABONBA_PTR_TO_JSON(ApprovalProcessDefinition, approvalProcessDefinition_);
        DARABONBA_PTR_TO_JSON(ApprovalTasks, approvalTasks_);
        DARABONBA_PTR_TO_JSON(AuthErrorMessage, authErrorMessage_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_ANY_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(Applicator, applicator_);
        DARABONBA_PTR_FROM_JSON(ApplicatorName, applicatorName_);
        DARABONBA_PTR_FROM_JSON(ApprovalProcessDefinition, approvalProcessDefinition_);
        DARABONBA_PTR_FROM_JSON(ApprovalTasks, approvalTasks_);
        DARABONBA_PTR_FROM_JSON(AuthErrorMessage, authErrorMessage_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_ANY_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      ProcessInstance() = default ;
      ProcessInstance(const ProcessInstance &) = default ;
      ProcessInstance(ProcessInstance &&) = default ;
      ProcessInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessInstance() = default ;
      ProcessInstance& operator=(const ProcessInstance &) = default ;
      ProcessInstance& operator=(ProcessInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApprovalTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalTasks& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalComment, approvalComment_);
          DARABONBA_PTR_TO_JSON(ApprovalDecision, approvalDecision_);
          DARABONBA_PTR_TO_JSON(ApprovalNode, approvalNode_);
          DARABONBA_PTR_TO_JSON(Assignee, assignee_);
          DARABONBA_PTR_TO_JSON(AssigneeName, assigneeName_);
          DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskCandidates, taskCandidates_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalComment, approvalComment_);
          DARABONBA_PTR_FROM_JSON(ApprovalDecision, approvalDecision_);
          DARABONBA_PTR_FROM_JSON(ApprovalNode, approvalNode_);
          DARABONBA_PTR_FROM_JSON(Assignee, assignee_);
          DARABONBA_PTR_FROM_JSON(AssigneeName, assigneeName_);
          DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskCandidates, taskCandidates_);
        };
        ApprovalTasks() = default ;
        ApprovalTasks(const ApprovalTasks &) = default ;
        ApprovalTasks(ApprovalTasks &&) = default ;
        ApprovalTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalTasks() = default ;
        ApprovalTasks& operator=(const ApprovalTasks &) = default ;
        ApprovalTasks& operator=(ApprovalTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskCandidates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskCandidates& obj) { 
            DARABONBA_PTR_TO_JSON(MemberName, memberName_);
            DARABONBA_PTR_TO_JSON(MemberUserId, memberUserId_);
          };
          friend void from_json(const Darabonba::Json& j, TaskCandidates& obj) { 
            DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
            DARABONBA_PTR_FROM_JSON(MemberUserId, memberUserId_);
          };
          TaskCandidates() = default ;
          TaskCandidates(const TaskCandidates &) = default ;
          TaskCandidates(TaskCandidates &&) = default ;
          TaskCandidates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskCandidates() = default ;
          TaskCandidates& operator=(const TaskCandidates &) = default ;
          TaskCandidates& operator=(TaskCandidates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->memberName_ == nullptr
        && this->memberUserId_ == nullptr; };
          // memberName Field Functions 
          bool hasMemberName() const { return this->memberName_ != nullptr;};
          void deleteMemberName() { this->memberName_ = nullptr;};
          inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
          inline TaskCandidates& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


          // memberUserId Field Functions 
          bool hasMemberUserId() const { return this->memberUserId_ != nullptr;};
          void deleteMemberUserId() { this->memberUserId_ = nullptr;};
          inline string getMemberUserId() const { DARABONBA_PTR_GET_DEFAULT(memberUserId_, "") };
          inline TaskCandidates& setMemberUserId(string memberUserId) { DARABONBA_PTR_SET_VALUE(memberUserId_, memberUserId) };


        protected:
          shared_ptr<string> memberName_ {};
          shared_ptr<string> memberUserId_ {};
        };

        class ApprovalNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApprovalNode& obj) { 
            DARABONBA_PTR_TO_JSON(AccountType, accountType_);
            DARABONBA_PTR_TO_JSON(Assignees, assignees_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ApprovalNode& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
            DARABONBA_PTR_FROM_JSON(Assignees, assignees_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ApprovalNode() = default ;
          ApprovalNode(const ApprovalNode &) = default ;
          ApprovalNode(ApprovalNode &&) = default ;
          ApprovalNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApprovalNode() = default ;
          ApprovalNode& operator=(const ApprovalNode &) = default ;
          ApprovalNode& operator=(ApprovalNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountType_ == nullptr
        && this->assignees_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
          // accountType Field Functions 
          bool hasAccountType() const { return this->accountType_ != nullptr;};
          void deleteAccountType() { this->accountType_ = nullptr;};
          inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
          inline ApprovalNode& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


          // assignees Field Functions 
          bool hasAssignees() const { return this->assignees_ != nullptr;};
          void deleteAssignees() { this->assignees_ = nullptr;};
          inline const vector<string> & getAssignees() const { DARABONBA_PTR_GET_CONST(assignees_, vector<string>) };
          inline vector<string> getAssignees() { DARABONBA_PTR_GET(assignees_, vector<string>) };
          inline ApprovalNode& setAssignees(const vector<string> & assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };
          inline ApprovalNode& setAssignees(vector<string> && assignees) { DARABONBA_PTR_SET_RVALUE(assignees_, assignees) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline ApprovalNode& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ApprovalNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> accountType_ {};
          shared_ptr<vector<string>> assignees_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->approvalComment_ == nullptr
        && this->approvalDecision_ == nullptr && this->approvalNode_ == nullptr && this->assignee_ == nullptr && this->assigneeName_ == nullptr && this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->taskCandidates_ == nullptr; };
        // approvalComment Field Functions 
        bool hasApprovalComment() const { return this->approvalComment_ != nullptr;};
        void deleteApprovalComment() { this->approvalComment_ = nullptr;};
        inline string getApprovalComment() const { DARABONBA_PTR_GET_DEFAULT(approvalComment_, "") };
        inline ApprovalTasks& setApprovalComment(string approvalComment) { DARABONBA_PTR_SET_VALUE(approvalComment_, approvalComment) };


        // approvalDecision Field Functions 
        bool hasApprovalDecision() const { return this->approvalDecision_ != nullptr;};
        void deleteApprovalDecision() { this->approvalDecision_ = nullptr;};
        inline string getApprovalDecision() const { DARABONBA_PTR_GET_DEFAULT(approvalDecision_, "") };
        inline ApprovalTasks& setApprovalDecision(string approvalDecision) { DARABONBA_PTR_SET_VALUE(approvalDecision_, approvalDecision) };


        // approvalNode Field Functions 
        bool hasApprovalNode() const { return this->approvalNode_ != nullptr;};
        void deleteApprovalNode() { this->approvalNode_ = nullptr;};
        inline const ApprovalTasks::ApprovalNode & getApprovalNode() const { DARABONBA_PTR_GET_CONST(approvalNode_, ApprovalTasks::ApprovalNode) };
        inline ApprovalTasks::ApprovalNode getApprovalNode() { DARABONBA_PTR_GET(approvalNode_, ApprovalTasks::ApprovalNode) };
        inline ApprovalTasks& setApprovalNode(const ApprovalTasks::ApprovalNode & approvalNode) { DARABONBA_PTR_SET_VALUE(approvalNode_, approvalNode) };
        inline ApprovalTasks& setApprovalNode(ApprovalTasks::ApprovalNode && approvalNode) { DARABONBA_PTR_SET_RVALUE(approvalNode_, approvalNode) };


        // assignee Field Functions 
        bool hasAssignee() const { return this->assignee_ != nullptr;};
        void deleteAssignee() { this->assignee_ = nullptr;};
        inline string getAssignee() const { DARABONBA_PTR_GET_DEFAULT(assignee_, "") };
        inline ApprovalTasks& setAssignee(string assignee) { DARABONBA_PTR_SET_VALUE(assignee_, assignee) };


        // assigneeName Field Functions 
        bool hasAssigneeName() const { return this->assigneeName_ != nullptr;};
        void deleteAssigneeName() { this->assigneeName_ = nullptr;};
        inline string getAssigneeName() const { DARABONBA_PTR_GET_DEFAULT(assigneeName_, "") };
        inline ApprovalTasks& setAssigneeName(string assigneeName) { DARABONBA_PTR_SET_VALUE(assigneeName_, assigneeName) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
        inline ApprovalTasks& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ApprovalTasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ApprovalTasks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ApprovalTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskCandidates Field Functions 
        bool hasTaskCandidates() const { return this->taskCandidates_ != nullptr;};
        void deleteTaskCandidates() { this->taskCandidates_ = nullptr;};
        inline const vector<ApprovalTasks::TaskCandidates> & getTaskCandidates() const { DARABONBA_PTR_GET_CONST(taskCandidates_, vector<ApprovalTasks::TaskCandidates>) };
        inline vector<ApprovalTasks::TaskCandidates> getTaskCandidates() { DARABONBA_PTR_GET(taskCandidates_, vector<ApprovalTasks::TaskCandidates>) };
        inline ApprovalTasks& setTaskCandidates(const vector<ApprovalTasks::TaskCandidates> & taskCandidates) { DARABONBA_PTR_SET_VALUE(taskCandidates_, taskCandidates) };
        inline ApprovalTasks& setTaskCandidates(vector<ApprovalTasks::TaskCandidates> && taskCandidates) { DARABONBA_PTR_SET_RVALUE(taskCandidates_, taskCandidates) };


      protected:
        shared_ptr<string> approvalComment_ {};
        shared_ptr<string> approvalDecision_ {};
        shared_ptr<ApprovalTasks::ApprovalNode> approvalNode_ {};
        shared_ptr<string> assignee_ {};
        shared_ptr<string> assigneeName_ {};
        shared_ptr<int64_t> completeTime_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<ApprovalTasks::TaskCandidates>> taskCandidates_ {};
      };

      class ApprovalProcessDefinition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalProcessDefinition& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalNodes, approvalNodes_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NotificationServices, notificationServices_);
          DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalProcessDefinition& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalNodes, approvalNodes_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NotificationServices, notificationServices_);
          DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ApprovalProcessDefinition() = default ;
        ApprovalProcessDefinition(const ApprovalProcessDefinition &) = default ;
        ApprovalProcessDefinition(ApprovalProcessDefinition &&) = default ;
        ApprovalProcessDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalProcessDefinition() = default ;
        ApprovalProcessDefinition& operator=(const ApprovalProcessDefinition &) = default ;
        ApprovalProcessDefinition& operator=(ApprovalProcessDefinition &&) = default ;
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
          shared_ptr<string> expression_ {};
          shared_ptr<string> scope_ {};
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
          shared_ptr<string> channel_ {};
          shared_ptr<string> extension_ {};
          shared_ptr<string> receiver_ {};
        };

        class ApprovalNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApprovalNodes& obj) { 
            DARABONBA_PTR_TO_JSON(AccountType, accountType_);
            DARABONBA_PTR_TO_JSON(Assignees, assignees_);
            DARABONBA_PTR_TO_JSON(ExtensionProperties, extensionProperties_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ApprovalNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
            DARABONBA_PTR_FROM_JSON(Assignees, assignees_);
            DARABONBA_PTR_FROM_JSON(ExtensionProperties, extensionProperties_);
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
          inline string getExtensionProperties() const { DARABONBA_PTR_GET_DEFAULT(extensionProperties_, "") };
          inline ApprovalNodes& setExtensionProperties(string extensionProperties) { DARABONBA_PTR_SET_VALUE(extensionProperties_, extensionProperties) };


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
          shared_ptr<string> accountType_ {};
          shared_ptr<vector<string>> assignees_ {};
          shared_ptr<string> extensionProperties_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->approvalNodes_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notificationServices_ == nullptr
        && this->ruleConditions_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
        // approvalNodes Field Functions 
        bool hasApprovalNodes() const { return this->approvalNodes_ != nullptr;};
        void deleteApprovalNodes() { this->approvalNodes_ = nullptr;};
        inline const vector<ApprovalProcessDefinition::ApprovalNodes> & getApprovalNodes() const { DARABONBA_PTR_GET_CONST(approvalNodes_, vector<ApprovalProcessDefinition::ApprovalNodes>) };
        inline vector<ApprovalProcessDefinition::ApprovalNodes> getApprovalNodes() { DARABONBA_PTR_GET(approvalNodes_, vector<ApprovalProcessDefinition::ApprovalNodes>) };
        inline ApprovalProcessDefinition& setApprovalNodes(const vector<ApprovalProcessDefinition::ApprovalNodes> & approvalNodes) { DARABONBA_PTR_SET_VALUE(approvalNodes_, approvalNodes) };
        inline ApprovalProcessDefinition& setApprovalNodes(vector<ApprovalProcessDefinition::ApprovalNodes> && approvalNodes) { DARABONBA_PTR_SET_RVALUE(approvalNodes_, approvalNodes) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApprovalProcessDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline ApprovalProcessDefinition& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ApprovalProcessDefinition& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ApprovalProcessDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // notificationServices Field Functions 
        bool hasNotificationServices() const { return this->notificationServices_ != nullptr;};
        void deleteNotificationServices() { this->notificationServices_ = nullptr;};
        inline const vector<ApprovalProcessDefinition::NotificationServices> & getNotificationServices() const { DARABONBA_PTR_GET_CONST(notificationServices_, vector<ApprovalProcessDefinition::NotificationServices>) };
        inline vector<ApprovalProcessDefinition::NotificationServices> getNotificationServices() { DARABONBA_PTR_GET(notificationServices_, vector<ApprovalProcessDefinition::NotificationServices>) };
        inline ApprovalProcessDefinition& setNotificationServices(const vector<ApprovalProcessDefinition::NotificationServices> & notificationServices) { DARABONBA_PTR_SET_VALUE(notificationServices_, notificationServices) };
        inline ApprovalProcessDefinition& setNotificationServices(vector<ApprovalProcessDefinition::NotificationServices> && notificationServices) { DARABONBA_PTR_SET_RVALUE(notificationServices_, notificationServices) };


        // ruleConditions Field Functions 
        bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
        void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
        inline const vector<ApprovalProcessDefinition::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<ApprovalProcessDefinition::RuleConditions>) };
        inline vector<ApprovalProcessDefinition::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<ApprovalProcessDefinition::RuleConditions>) };
        inline ApprovalProcessDefinition& setRuleConditions(const vector<ApprovalProcessDefinition::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
        inline ApprovalProcessDefinition& setRuleConditions(vector<ApprovalProcessDefinition::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline ApprovalProcessDefinition& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ApprovalProcessDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<ApprovalProcessDefinition::ApprovalNodes>> approvalNodes_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<ApprovalProcessDefinition::NotificationServices>> notificationServices_ {};
        shared_ptr<vector<ApprovalProcessDefinition::RuleConditions>> ruleConditions_ {};
        shared_ptr<string> subType_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->applicator_ == nullptr
        && this->applicatorName_ == nullptr && this->approvalProcessDefinition_ == nullptr && this->approvalTasks_ == nullptr && this->authErrorMessage_ == nullptr && this->id_ == nullptr
        && this->reason_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // applicator Field Functions 
      bool hasApplicator() const { return this->applicator_ != nullptr;};
      void deleteApplicator() { this->applicator_ = nullptr;};
      inline string getApplicator() const { DARABONBA_PTR_GET_DEFAULT(applicator_, "") };
      inline ProcessInstance& setApplicator(string applicator) { DARABONBA_PTR_SET_VALUE(applicator_, applicator) };


      // applicatorName Field Functions 
      bool hasApplicatorName() const { return this->applicatorName_ != nullptr;};
      void deleteApplicatorName() { this->applicatorName_ = nullptr;};
      inline string getApplicatorName() const { DARABONBA_PTR_GET_DEFAULT(applicatorName_, "") };
      inline ProcessInstance& setApplicatorName(string applicatorName) { DARABONBA_PTR_SET_VALUE(applicatorName_, applicatorName) };


      // approvalProcessDefinition Field Functions 
      bool hasApprovalProcessDefinition() const { return this->approvalProcessDefinition_ != nullptr;};
      void deleteApprovalProcessDefinition() { this->approvalProcessDefinition_ = nullptr;};
      inline const ProcessInstance::ApprovalProcessDefinition & getApprovalProcessDefinition() const { DARABONBA_PTR_GET_CONST(approvalProcessDefinition_, ProcessInstance::ApprovalProcessDefinition) };
      inline ProcessInstance::ApprovalProcessDefinition getApprovalProcessDefinition() { DARABONBA_PTR_GET(approvalProcessDefinition_, ProcessInstance::ApprovalProcessDefinition) };
      inline ProcessInstance& setApprovalProcessDefinition(const ProcessInstance::ApprovalProcessDefinition & approvalProcessDefinition) { DARABONBA_PTR_SET_VALUE(approvalProcessDefinition_, approvalProcessDefinition) };
      inline ProcessInstance& setApprovalProcessDefinition(ProcessInstance::ApprovalProcessDefinition && approvalProcessDefinition) { DARABONBA_PTR_SET_RVALUE(approvalProcessDefinition_, approvalProcessDefinition) };


      // approvalTasks Field Functions 
      bool hasApprovalTasks() const { return this->approvalTasks_ != nullptr;};
      void deleteApprovalTasks() { this->approvalTasks_ = nullptr;};
      inline const vector<ProcessInstance::ApprovalTasks> & getApprovalTasks() const { DARABONBA_PTR_GET_CONST(approvalTasks_, vector<ProcessInstance::ApprovalTasks>) };
      inline vector<ProcessInstance::ApprovalTasks> getApprovalTasks() { DARABONBA_PTR_GET(approvalTasks_, vector<ProcessInstance::ApprovalTasks>) };
      inline ProcessInstance& setApprovalTasks(const vector<ProcessInstance::ApprovalTasks> & approvalTasks) { DARABONBA_PTR_SET_VALUE(approvalTasks_, approvalTasks) };
      inline ProcessInstance& setApprovalTasks(vector<ProcessInstance::ApprovalTasks> && approvalTasks) { DARABONBA_PTR_SET_RVALUE(approvalTasks_, approvalTasks) };


      // authErrorMessage Field Functions 
      bool hasAuthErrorMessage() const { return this->authErrorMessage_ != nullptr;};
      void deleteAuthErrorMessage() { this->authErrorMessage_ = nullptr;};
      inline string getAuthErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(authErrorMessage_, "") };
      inline ProcessInstance& setAuthErrorMessage(string authErrorMessage) { DARABONBA_PTR_SET_VALUE(authErrorMessage_, authErrorMessage) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ProcessInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ProcessInstance& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline       const Darabonba::Json & getStartTime() const { DARABONBA_GET(startTime_) };
      Darabonba::Json & getStartTime() { DARABONBA_GET(startTime_) };
      inline ProcessInstance& setStartTime(const Darabonba::Json & startTime) { DARABONBA_SET_VALUE(startTime_, startTime) };
      inline ProcessInstance& setStartTime(Darabonba::Json && startTime) { DARABONBA_SET_RVALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProcessInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ProcessInstance& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> applicator_ {};
      shared_ptr<string> applicatorName_ {};
      shared_ptr<ProcessInstance::ApprovalProcessDefinition> approvalProcessDefinition_ {};
      shared_ptr<vector<ProcessInstance::ApprovalTasks>> approvalTasks_ {};
      shared_ptr<string> authErrorMessage_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> reason_ {};
      Darabonba::Json startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->processInstance_ == nullptr
        && this->requestId_ == nullptr; };
    // processInstance Field Functions 
    bool hasProcessInstance() const { return this->processInstance_ != nullptr;};
    void deleteProcessInstance() { this->processInstance_ = nullptr;};
    inline const GetProcessInstanceResponseBody::ProcessInstance & getProcessInstance() const { DARABONBA_PTR_GET_CONST(processInstance_, GetProcessInstanceResponseBody::ProcessInstance) };
    inline GetProcessInstanceResponseBody::ProcessInstance getProcessInstance() { DARABONBA_PTR_GET(processInstance_, GetProcessInstanceResponseBody::ProcessInstance) };
    inline GetProcessInstanceResponseBody& setProcessInstance(const GetProcessInstanceResponseBody::ProcessInstance & processInstance) { DARABONBA_PTR_SET_VALUE(processInstance_, processInstance) };
    inline GetProcessInstanceResponseBody& setProcessInstance(GetProcessInstanceResponseBody::ProcessInstance && processInstance) { DARABONBA_PTR_SET_RVALUE(processInstance_, processInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProcessInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetProcessInstanceResponseBody::ProcessInstance> processInstance_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
