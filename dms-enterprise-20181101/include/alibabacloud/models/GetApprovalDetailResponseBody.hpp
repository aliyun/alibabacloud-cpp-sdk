// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetApprovalDetailResponseBody() = default ;
    GetApprovalDetailResponseBody(const GetApprovalDetailResponseBody &) = default ;
    GetApprovalDetailResponseBody(GetApprovalDetailResponseBody &&) = default ;
    GetApprovalDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBody() = default ;
    GetApprovalDetailResponseBody& operator=(const GetApprovalDetailResponseBody &) = default ;
    GetApprovalDetailResponseBody& operator=(GetApprovalDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApprovalDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApprovalDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuditId, auditId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CurrentHandlers, currentHandlers_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(ReasonList, reasonList_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(ThirdpartyWorkflowComment, thirdpartyWorkflowComment_);
        DARABONBA_PTR_TO_JSON(ThirdpartyWorkflowUrl, thirdpartyWorkflowUrl_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(WorkflowInsCode, workflowInsCode_);
        DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
      };
      friend void from_json(const Darabonba::Json& j, ApprovalDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditId, auditId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CurrentHandlers, currentHandlers_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(ReasonList, reasonList_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(ThirdpartyWorkflowComment, thirdpartyWorkflowComment_);
        DARABONBA_PTR_FROM_JSON(ThirdpartyWorkflowUrl, thirdpartyWorkflowUrl_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(WorkflowInsCode, workflowInsCode_);
        DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
      };
      ApprovalDetail() = default ;
      ApprovalDetail(const ApprovalDetail &) = default ;
      ApprovalDetail(ApprovalDetail &&) = default ;
      ApprovalDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApprovalDetail() = default ;
      ApprovalDetail& operator=(const ApprovalDetail &) = default ;
      ApprovalDetail& operator=(ApprovalDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkflowNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkflowNodes& obj) { 
          DARABONBA_PTR_TO_JSON(WorkflowNode, workflowNode_);
        };
        friend void from_json(const Darabonba::Json& j, WorkflowNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(WorkflowNode, workflowNode_);
        };
        WorkflowNodes() = default ;
        WorkflowNodes(const WorkflowNodes &) = default ;
        WorkflowNodes(WorkflowNodes &&) = default ;
        WorkflowNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkflowNodes() = default ;
        WorkflowNodes& operator=(const WorkflowNodes &) = default ;
        WorkflowNodes& operator=(WorkflowNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WorkflowNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WorkflowNode& obj) { 
            DARABONBA_PTR_TO_JSON(AuditUserIdList, auditUserIdList_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(OperateComment, operateComment_);
            DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
            DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
            DARABONBA_PTR_TO_JSON(WorkflowInsCode, workflowInsCode_);
          };
          friend void from_json(const Darabonba::Json& j, WorkflowNode& obj) { 
            DARABONBA_PTR_FROM_JSON(AuditUserIdList, auditUserIdList_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(OperateComment, operateComment_);
            DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
            DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
            DARABONBA_PTR_FROM_JSON(WorkflowInsCode, workflowInsCode_);
          };
          WorkflowNode() = default ;
          WorkflowNode(const WorkflowNode &) = default ;
          WorkflowNode(WorkflowNode &&) = default ;
          WorkflowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WorkflowNode() = default ;
          WorkflowNode& operator=(const WorkflowNode &) = default ;
          WorkflowNode& operator=(WorkflowNode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AuditUserIdList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AuditUserIdList& obj) { 
              DARABONBA_PTR_TO_JSON(AuditUserIds, auditUserIds_);
            };
            friend void from_json(const Darabonba::Json& j, AuditUserIdList& obj) { 
              DARABONBA_PTR_FROM_JSON(AuditUserIds, auditUserIds_);
            };
            AuditUserIdList() = default ;
            AuditUserIdList(const AuditUserIdList &) = default ;
            AuditUserIdList(AuditUserIdList &&) = default ;
            AuditUserIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AuditUserIdList() = default ;
            AuditUserIdList& operator=(const AuditUserIdList &) = default ;
            AuditUserIdList& operator=(AuditUserIdList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->auditUserIds_ == nullptr; };
            // auditUserIds Field Functions 
            bool hasAuditUserIds() const { return this->auditUserIds_ != nullptr;};
            void deleteAuditUserIds() { this->auditUserIds_ = nullptr;};
            inline const vector<string> & getAuditUserIds() const { DARABONBA_PTR_GET_CONST(auditUserIds_, vector<string>) };
            inline vector<string> getAuditUserIds() { DARABONBA_PTR_GET(auditUserIds_, vector<string>) };
            inline AuditUserIdList& setAuditUserIds(const vector<string> & auditUserIds) { DARABONBA_PTR_SET_VALUE(auditUserIds_, auditUserIds) };
            inline AuditUserIdList& setAuditUserIds(vector<string> && auditUserIds) { DARABONBA_PTR_SET_RVALUE(auditUserIds_, auditUserIds) };


          protected:
            shared_ptr<vector<string>> auditUserIds_ {};
          };

          virtual bool empty() const override { return this->auditUserIdList_ == nullptr
        && this->nodeName_ == nullptr && this->operateComment_ == nullptr && this->operateTime_ == nullptr && this->operatorId_ == nullptr && this->workflowInsCode_ == nullptr; };
          // auditUserIdList Field Functions 
          bool hasAuditUserIdList() const { return this->auditUserIdList_ != nullptr;};
          void deleteAuditUserIdList() { this->auditUserIdList_ = nullptr;};
          inline const WorkflowNode::AuditUserIdList & getAuditUserIdList() const { DARABONBA_PTR_GET_CONST(auditUserIdList_, WorkflowNode::AuditUserIdList) };
          inline WorkflowNode::AuditUserIdList getAuditUserIdList() { DARABONBA_PTR_GET(auditUserIdList_, WorkflowNode::AuditUserIdList) };
          inline WorkflowNode& setAuditUserIdList(const WorkflowNode::AuditUserIdList & auditUserIdList) { DARABONBA_PTR_SET_VALUE(auditUserIdList_, auditUserIdList) };
          inline WorkflowNode& setAuditUserIdList(WorkflowNode::AuditUserIdList && auditUserIdList) { DARABONBA_PTR_SET_RVALUE(auditUserIdList_, auditUserIdList) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline WorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // operateComment Field Functions 
          bool hasOperateComment() const { return this->operateComment_ != nullptr;};
          void deleteOperateComment() { this->operateComment_ = nullptr;};
          inline string getOperateComment() const { DARABONBA_PTR_GET_DEFAULT(operateComment_, "") };
          inline WorkflowNode& setOperateComment(string operateComment) { DARABONBA_PTR_SET_VALUE(operateComment_, operateComment) };


          // operateTime Field Functions 
          bool hasOperateTime() const { return this->operateTime_ != nullptr;};
          void deleteOperateTime() { this->operateTime_ = nullptr;};
          inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
          inline WorkflowNode& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


          // operatorId Field Functions 
          bool hasOperatorId() const { return this->operatorId_ != nullptr;};
          void deleteOperatorId() { this->operatorId_ = nullptr;};
          inline int64_t getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, 0L) };
          inline WorkflowNode& setOperatorId(int64_t operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


          // workflowInsCode Field Functions 
          bool hasWorkflowInsCode() const { return this->workflowInsCode_ != nullptr;};
          void deleteWorkflowInsCode() { this->workflowInsCode_ = nullptr;};
          inline string getWorkflowInsCode() const { DARABONBA_PTR_GET_DEFAULT(workflowInsCode_, "") };
          inline WorkflowNode& setWorkflowInsCode(string workflowInsCode) { DARABONBA_PTR_SET_VALUE(workflowInsCode_, workflowInsCode) };


        protected:
          // The IDs of the approvers.
          shared_ptr<WorkflowNode::AuditUserIdList> auditUserIdList_ {};
          // The name of the approval node.
          shared_ptr<string> nodeName_ {};
          // The remarks of the approval.
          shared_ptr<string> operateComment_ {};
          // The time when the ticket was submitted.
          shared_ptr<string> operateTime_ {};
          // The ID of the user who submitted the ticket.
          shared_ptr<int64_t> operatorId_ {};
          // The approval status of the ticket. Valid values:
          // 
          // *   **START**: The ticket was submitted.
          // *   **ERROR**: An error occurred.
          // *   **AUDITING**: The ticket is being reviewed.
          // *   **REJECT**: The ticket was rejected.
          // *   **CANCEL**: The ticket was revoked.
          // *   **APPROVED**: The ticket was approved.
          shared_ptr<string> workflowInsCode_ {};
        };

        virtual bool empty() const override { return this->workflowNode_ == nullptr; };
        // workflowNode Field Functions 
        bool hasWorkflowNode() const { return this->workflowNode_ != nullptr;};
        void deleteWorkflowNode() { this->workflowNode_ = nullptr;};
        inline const vector<WorkflowNodes::WorkflowNode> & getWorkflowNode() const { DARABONBA_PTR_GET_CONST(workflowNode_, vector<WorkflowNodes::WorkflowNode>) };
        inline vector<WorkflowNodes::WorkflowNode> getWorkflowNode() { DARABONBA_PTR_GET(workflowNode_, vector<WorkflowNodes::WorkflowNode>) };
        inline WorkflowNodes& setWorkflowNode(const vector<WorkflowNodes::WorkflowNode> & workflowNode) { DARABONBA_PTR_SET_VALUE(workflowNode_, workflowNode) };
        inline WorkflowNodes& setWorkflowNode(vector<WorkflowNodes::WorkflowNode> && workflowNode) { DARABONBA_PTR_SET_RVALUE(workflowNode_, workflowNode) };


      protected:
        shared_ptr<vector<WorkflowNodes::WorkflowNode>> workflowNode_ {};
      };

      class ReasonList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReasonList& obj) { 
          DARABONBA_PTR_TO_JSON(Reasons, reasons_);
        };
        friend void from_json(const Darabonba::Json& j, ReasonList& obj) { 
          DARABONBA_PTR_FROM_JSON(Reasons, reasons_);
        };
        ReasonList() = default ;
        ReasonList(const ReasonList &) = default ;
        ReasonList(ReasonList &&) = default ;
        ReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReasonList() = default ;
        ReasonList& operator=(const ReasonList &) = default ;
        ReasonList& operator=(ReasonList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reasons_ == nullptr; };
        // reasons Field Functions 
        bool hasReasons() const { return this->reasons_ != nullptr;};
        void deleteReasons() { this->reasons_ = nullptr;};
        inline const vector<string> & getReasons() const { DARABONBA_PTR_GET_CONST(reasons_, vector<string>) };
        inline vector<string> getReasons() { DARABONBA_PTR_GET(reasons_, vector<string>) };
        inline ReasonList& setReasons(const vector<string> & reasons) { DARABONBA_PTR_SET_VALUE(reasons_, reasons) };
        inline ReasonList& setReasons(vector<string> && reasons) { DARABONBA_PTR_SET_RVALUE(reasons_, reasons) };


      protected:
        shared_ptr<vector<string>> reasons_ {};
      };

      class CurrentHandlers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentHandlers& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentHandler, currentHandler_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentHandlers& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentHandler, currentHandler_);
        };
        CurrentHandlers() = default ;
        CurrentHandlers(const CurrentHandlers &) = default ;
        CurrentHandlers(CurrentHandlers &&) = default ;
        CurrentHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentHandlers() = default ;
        CurrentHandlers& operator=(const CurrentHandlers &) = default ;
        CurrentHandlers& operator=(CurrentHandlers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CurrentHandler : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CurrentHandler& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(NickName, nickName_);
          };
          friend void from_json(const Darabonba::Json& j, CurrentHandler& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          };
          CurrentHandler() = default ;
          CurrentHandler(const CurrentHandler &) = default ;
          CurrentHandler(CurrentHandler &&) = default ;
          CurrentHandler(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CurrentHandler() = default ;
          CurrentHandler& operator=(const CurrentHandler &) = default ;
          CurrentHandler& operator=(CurrentHandler &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->nickName_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CurrentHandler& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // nickName Field Functions 
          bool hasNickName() const { return this->nickName_ != nullptr;};
          void deleteNickName() { this->nickName_ = nullptr;};
          inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
          inline CurrentHandler& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        protected:
          // The ID of the user.
          shared_ptr<int64_t> id_ {};
          // The nickname of the user.
          shared_ptr<string> nickName_ {};
        };

        virtual bool empty() const override { return this->currentHandler_ == nullptr; };
        // currentHandler Field Functions 
        bool hasCurrentHandler() const { return this->currentHandler_ != nullptr;};
        void deleteCurrentHandler() { this->currentHandler_ = nullptr;};
        inline const vector<CurrentHandlers::CurrentHandler> & getCurrentHandler() const { DARABONBA_PTR_GET_CONST(currentHandler_, vector<CurrentHandlers::CurrentHandler>) };
        inline vector<CurrentHandlers::CurrentHandler> getCurrentHandler() { DARABONBA_PTR_GET(currentHandler_, vector<CurrentHandlers::CurrentHandler>) };
        inline CurrentHandlers& setCurrentHandler(const vector<CurrentHandlers::CurrentHandler> & currentHandler) { DARABONBA_PTR_SET_VALUE(currentHandler_, currentHandler) };
        inline CurrentHandlers& setCurrentHandler(vector<CurrentHandlers::CurrentHandler> && currentHandler) { DARABONBA_PTR_SET_RVALUE(currentHandler_, currentHandler) };


      protected:
        shared_ptr<vector<CurrentHandlers::CurrentHandler>> currentHandler_ {};
      };

      virtual bool empty() const override { return this->auditId_ == nullptr
        && this->createTime_ == nullptr && this->currentHandlers_ == nullptr && this->description_ == nullptr && this->orderId_ == nullptr && this->orderType_ == nullptr
        && this->reasonList_ == nullptr && this->templateId_ == nullptr && this->thirdpartyWorkflowComment_ == nullptr && this->thirdpartyWorkflowUrl_ == nullptr && this->title_ == nullptr
        && this->workflowInsCode_ == nullptr && this->workflowNodes_ == nullptr; };
      // auditId Field Functions 
      bool hasAuditId() const { return this->auditId_ != nullptr;};
      void deleteAuditId() { this->auditId_ = nullptr;};
      inline int64_t getAuditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
      inline ApprovalDetail& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApprovalDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentHandlers Field Functions 
      bool hasCurrentHandlers() const { return this->currentHandlers_ != nullptr;};
      void deleteCurrentHandlers() { this->currentHandlers_ = nullptr;};
      inline const ApprovalDetail::CurrentHandlers & getCurrentHandlers() const { DARABONBA_PTR_GET_CONST(currentHandlers_, ApprovalDetail::CurrentHandlers) };
      inline ApprovalDetail::CurrentHandlers getCurrentHandlers() { DARABONBA_PTR_GET(currentHandlers_, ApprovalDetail::CurrentHandlers) };
      inline ApprovalDetail& setCurrentHandlers(const ApprovalDetail::CurrentHandlers & currentHandlers) { DARABONBA_PTR_SET_VALUE(currentHandlers_, currentHandlers) };
      inline ApprovalDetail& setCurrentHandlers(ApprovalDetail::CurrentHandlers && currentHandlers) { DARABONBA_PTR_SET_RVALUE(currentHandlers_, currentHandlers) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApprovalDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline ApprovalDetail& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline ApprovalDetail& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // reasonList Field Functions 
      bool hasReasonList() const { return this->reasonList_ != nullptr;};
      void deleteReasonList() { this->reasonList_ = nullptr;};
      inline const ApprovalDetail::ReasonList & getReasonList() const { DARABONBA_PTR_GET_CONST(reasonList_, ApprovalDetail::ReasonList) };
      inline ApprovalDetail::ReasonList getReasonList() { DARABONBA_PTR_GET(reasonList_, ApprovalDetail::ReasonList) };
      inline ApprovalDetail& setReasonList(const ApprovalDetail::ReasonList & reasonList) { DARABONBA_PTR_SET_VALUE(reasonList_, reasonList) };
      inline ApprovalDetail& setReasonList(ApprovalDetail::ReasonList && reasonList) { DARABONBA_PTR_SET_RVALUE(reasonList_, reasonList) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline ApprovalDetail& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // thirdpartyWorkflowComment Field Functions 
      bool hasThirdpartyWorkflowComment() const { return this->thirdpartyWorkflowComment_ != nullptr;};
      void deleteThirdpartyWorkflowComment() { this->thirdpartyWorkflowComment_ = nullptr;};
      inline string getThirdpartyWorkflowComment() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowComment_, "") };
      inline ApprovalDetail& setThirdpartyWorkflowComment(string thirdpartyWorkflowComment) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowComment_, thirdpartyWorkflowComment) };


      // thirdpartyWorkflowUrl Field Functions 
      bool hasThirdpartyWorkflowUrl() const { return this->thirdpartyWorkflowUrl_ != nullptr;};
      void deleteThirdpartyWorkflowUrl() { this->thirdpartyWorkflowUrl_ = nullptr;};
      inline string getThirdpartyWorkflowUrl() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowUrl_, "") };
      inline ApprovalDetail& setThirdpartyWorkflowUrl(string thirdpartyWorkflowUrl) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowUrl_, thirdpartyWorkflowUrl) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ApprovalDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // workflowInsCode Field Functions 
      bool hasWorkflowInsCode() const { return this->workflowInsCode_ != nullptr;};
      void deleteWorkflowInsCode() { this->workflowInsCode_ = nullptr;};
      inline string getWorkflowInsCode() const { DARABONBA_PTR_GET_DEFAULT(workflowInsCode_, "") };
      inline ApprovalDetail& setWorkflowInsCode(string workflowInsCode) { DARABONBA_PTR_SET_VALUE(workflowInsCode_, workflowInsCode) };


      // workflowNodes Field Functions 
      bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
      void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
      inline const ApprovalDetail::WorkflowNodes & getWorkflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, ApprovalDetail::WorkflowNodes) };
      inline ApprovalDetail::WorkflowNodes getWorkflowNodes() { DARABONBA_PTR_GET(workflowNodes_, ApprovalDetail::WorkflowNodes) };
      inline ApprovalDetail& setWorkflowNodes(const ApprovalDetail::WorkflowNodes & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
      inline ApprovalDetail& setWorkflowNodes(ApprovalDetail::WorkflowNodes && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


    protected:
      // The ID of the approval process.
      shared_ptr<int64_t> auditId_ {};
      // The time when the approval process was created.
      shared_ptr<string> createTime_ {};
      // The information about the approver.
      shared_ptr<ApprovalDetail::CurrentHandlers> currentHandlers_ {};
      // The description of the approval process.
      shared_ptr<string> description_ {};
      // The ID of the ticket.
      shared_ptr<int64_t> orderId_ {};
      // The type of the ticket. Valid values:
      // 
      // *   **NDDL**: a schema design ticket
      // *   **DATA_TRACK**: a data tracking ticket
      // *   **TABLE_SYNC**: a table synchronization ticket
      // *   **PERM_APPLY**: a permission application ticket
      // *   **DATA_EXPORT**: a data export ticket
      // *   **DATA_CORRECT**: a data change ticket
      // *   **OWNER_APPLY**: an owner role application ticket
      // *   **SENSITIVITY**: a column sensitivity level change ticket
      shared_ptr<string> orderType_ {};
      // The reasons for the approval.
      shared_ptr<ApprovalDetail::ReasonList> reasonList_ {};
      // The ID of the workflow template.
      shared_ptr<int64_t> templateId_ {};
      // Third-party approval flow remarks.
      shared_ptr<string> thirdpartyWorkflowComment_ {};
      // The third-party approval flow link.
      shared_ptr<string> thirdpartyWorkflowUrl_ {};
      // The title of the approval process.
      shared_ptr<string> title_ {};
      // The approval status of the ticket. Valid values:
      // 
      // *   **AUDITING**: The ticket is being reviewed.
      // *   **REJECT**: The ticket was rejected.
      // *   **CANCEL**: The ticket was revoked.
      // *   **APPROVED**: The ticket was approved.
      // 
      // > An approval process contains multiple approval nodes, and this parameter is returned for each approval node.
      shared_ptr<string> workflowInsCode_ {};
      // The details of approval nodes.
      shared_ptr<ApprovalDetail::WorkflowNodes> workflowNodes_ {};
    };

    virtual bool empty() const override { return this->approvalDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // approvalDetail Field Functions 
    bool hasApprovalDetail() const { return this->approvalDetail_ != nullptr;};
    void deleteApprovalDetail() { this->approvalDetail_ = nullptr;};
    inline const GetApprovalDetailResponseBody::ApprovalDetail & getApprovalDetail() const { DARABONBA_PTR_GET_CONST(approvalDetail_, GetApprovalDetailResponseBody::ApprovalDetail) };
    inline GetApprovalDetailResponseBody::ApprovalDetail getApprovalDetail() { DARABONBA_PTR_GET(approvalDetail_, GetApprovalDetailResponseBody::ApprovalDetail) };
    inline GetApprovalDetailResponseBody& setApprovalDetail(const GetApprovalDetailResponseBody::ApprovalDetail & approvalDetail) { DARABONBA_PTR_SET_VALUE(approvalDetail_, approvalDetail) };
    inline GetApprovalDetailResponseBody& setApprovalDetail(GetApprovalDetailResponseBody::ApprovalDetail && approvalDetail) { DARABONBA_PTR_SET_RVALUE(approvalDetail_, approvalDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetApprovalDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetApprovalDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetApprovalDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The approval details of the ticket.
    shared_ptr<GetApprovalDetailResponseBody::ApprovalDetail> approvalDetail_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
