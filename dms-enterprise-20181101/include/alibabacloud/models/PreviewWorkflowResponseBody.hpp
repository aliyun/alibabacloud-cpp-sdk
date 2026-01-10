// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODY_HPP_
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
  class PreviewWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkflowDetail, workflowDetail_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkflowDetail, workflowDetail_);
    };
    PreviewWorkflowResponseBody() = default ;
    PreviewWorkflowResponseBody(const PreviewWorkflowResponseBody &) = default ;
    PreviewWorkflowResponseBody(PreviewWorkflowResponseBody &&) = default ;
    PreviewWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBody() = default ;
    PreviewWorkflowResponseBody& operator=(const PreviewWorkflowResponseBody &) = default ;
    PreviewWorkflowResponseBody& operator=(PreviewWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkflowDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(WfCateName, wfCateName_);
        DARABONBA_PTR_TO_JSON(WorkflowNodeList, workflowNodeList_);
      };
      friend void from_json(const Darabonba::Json& j, WorkflowDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(WfCateName, wfCateName_);
        DARABONBA_PTR_FROM_JSON(WorkflowNodeList, workflowNodeList_);
      };
      WorkflowDetail() = default ;
      WorkflowDetail(const WorkflowDetail &) = default ;
      WorkflowDetail(WorkflowDetail &&) = default ;
      WorkflowDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkflowDetail() = default ;
      WorkflowDetail& operator=(const WorkflowDetail &) = default ;
      WorkflowDetail& operator=(WorkflowDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkflowNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkflowNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(WorkflowNode, workflowNode_);
        };
        friend void from_json(const Darabonba::Json& j, WorkflowNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(WorkflowNode, workflowNode_);
        };
        WorkflowNodeList() = default ;
        WorkflowNodeList(const WorkflowNodeList &) = default ;
        WorkflowNodeList(WorkflowNodeList &&) = default ;
        WorkflowNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkflowNodeList() = default ;
        WorkflowNodeList& operator=(const WorkflowNodeList &) = default ;
        WorkflowNodeList& operator=(WorkflowNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WorkflowNode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WorkflowNode& obj) { 
            DARABONBA_PTR_TO_JSON(AuditUserList, auditUserList_);
            DARABONBA_PTR_TO_JSON(Comment, comment_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          };
          friend void from_json(const Darabonba::Json& j, WorkflowNode& obj) { 
            DARABONBA_PTR_FROM_JSON(AuditUserList, auditUserList_);
            DARABONBA_PTR_FROM_JSON(Comment, comment_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
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
          class AuditUserList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AuditUserList& obj) { 
              DARABONBA_PTR_TO_JSON(AuditUser, auditUser_);
            };
            friend void from_json(const Darabonba::Json& j, AuditUserList& obj) { 
              DARABONBA_PTR_FROM_JSON(AuditUser, auditUser_);
            };
            AuditUserList() = default ;
            AuditUserList(const AuditUserList &) = default ;
            AuditUserList(AuditUserList &&) = default ;
            AuditUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AuditUserList() = default ;
            AuditUserList& operator=(const AuditUserList &) = default ;
            AuditUserList& operator=(AuditUserList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AuditUser : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AuditUser& obj) { 
                DARABONBA_PTR_TO_JSON(NickName, nickName_);
                DARABONBA_PTR_TO_JSON(RealName, realName_);
                DARABONBA_PTR_TO_JSON(UserId, userId_);
              };
              friend void from_json(const Darabonba::Json& j, AuditUser& obj) { 
                DARABONBA_PTR_FROM_JSON(NickName, nickName_);
                DARABONBA_PTR_FROM_JSON(RealName, realName_);
                DARABONBA_PTR_FROM_JSON(UserId, userId_);
              };
              AuditUser() = default ;
              AuditUser(const AuditUser &) = default ;
              AuditUser(AuditUser &&) = default ;
              AuditUser(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AuditUser() = default ;
              AuditUser& operator=(const AuditUser &) = default ;
              AuditUser& operator=(AuditUser &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->nickName_ == nullptr
        && this->realName_ == nullptr && this->userId_ == nullptr; };
              // nickName Field Functions 
              bool hasNickName() const { return this->nickName_ != nullptr;};
              void deleteNickName() { this->nickName_ = nullptr;};
              inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
              inline AuditUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


              // realName Field Functions 
              bool hasRealName() const { return this->realName_ != nullptr;};
              void deleteRealName() { this->realName_ = nullptr;};
              inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
              inline AuditUser& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


              // userId Field Functions 
              bool hasUserId() const { return this->userId_ != nullptr;};
              void deleteUserId() { this->userId_ = nullptr;};
              inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
              inline AuditUser& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


            protected:
              // The nickname of the approver.
              shared_ptr<string> nickName_ {};
              // The name of the approver.
              shared_ptr<string> realName_ {};
              // The ID of the approver.
              shared_ptr<int64_t> userId_ {};
            };

            virtual bool empty() const override { return this->auditUser_ == nullptr; };
            // auditUser Field Functions 
            bool hasAuditUser() const { return this->auditUser_ != nullptr;};
            void deleteAuditUser() { this->auditUser_ = nullptr;};
            inline const vector<AuditUserList::AuditUser> & getAuditUser() const { DARABONBA_PTR_GET_CONST(auditUser_, vector<AuditUserList::AuditUser>) };
            inline vector<AuditUserList::AuditUser> getAuditUser() { DARABONBA_PTR_GET(auditUser_, vector<AuditUserList::AuditUser>) };
            inline AuditUserList& setAuditUser(const vector<AuditUserList::AuditUser> & auditUser) { DARABONBA_PTR_SET_VALUE(auditUser_, auditUser) };
            inline AuditUserList& setAuditUser(vector<AuditUserList::AuditUser> && auditUser) { DARABONBA_PTR_SET_RVALUE(auditUser_, auditUser) };


          protected:
            shared_ptr<vector<AuditUserList::AuditUser>> auditUser_ {};
          };

          virtual bool empty() const override { return this->auditUserList_ == nullptr
        && this->comment_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr; };
          // auditUserList Field Functions 
          bool hasAuditUserList() const { return this->auditUserList_ != nullptr;};
          void deleteAuditUserList() { this->auditUserList_ = nullptr;};
          inline const WorkflowNode::AuditUserList & getAuditUserList() const { DARABONBA_PTR_GET_CONST(auditUserList_, WorkflowNode::AuditUserList) };
          inline WorkflowNode::AuditUserList getAuditUserList() { DARABONBA_PTR_GET(auditUserList_, WorkflowNode::AuditUserList) };
          inline WorkflowNode& setAuditUserList(const WorkflowNode::AuditUserList & auditUserList) { DARABONBA_PTR_SET_VALUE(auditUserList_, auditUserList) };
          inline WorkflowNode& setAuditUserList(WorkflowNode::AuditUserList && auditUserList) { DARABONBA_PTR_SET_RVALUE(auditUserList_, auditUserList) };


          // comment Field Functions 
          bool hasComment() const { return this->comment_ != nullptr;};
          void deleteComment() { this->comment_ = nullptr;};
          inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
          inline WorkflowNode& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline WorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // nodeType Field Functions 
          bool hasNodeType() const { return this->nodeType_ != nullptr;};
          void deleteNodeType() { this->nodeType_ = nullptr;};
          inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
          inline WorkflowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        protected:
          // The approvers.
          shared_ptr<WorkflowNode::AuditUserList> auditUserList_ {};
          // The remarks of the approval node.
          shared_ptr<string> comment_ {};
          // The name of the approval node.
          shared_ptr<string> nodeName_ {};
          // The type of the approval node.
          // 
          // Valid values:
          // 
          // *   USER_LIST: The approval node is created by a user.
          // *   UNKNOWN: The source of the approval node is unknown.
          // *   SYS: The approval node is predefined by the system.
          shared_ptr<string> nodeType_ {};
        };

        virtual bool empty() const override { return this->workflowNode_ == nullptr; };
        // workflowNode Field Functions 
        bool hasWorkflowNode() const { return this->workflowNode_ != nullptr;};
        void deleteWorkflowNode() { this->workflowNode_ = nullptr;};
        inline const vector<WorkflowNodeList::WorkflowNode> & getWorkflowNode() const { DARABONBA_PTR_GET_CONST(workflowNode_, vector<WorkflowNodeList::WorkflowNode>) };
        inline vector<WorkflowNodeList::WorkflowNode> getWorkflowNode() { DARABONBA_PTR_GET(workflowNode_, vector<WorkflowNodeList::WorkflowNode>) };
        inline WorkflowNodeList& setWorkflowNode(const vector<WorkflowNodeList::WorkflowNode> & workflowNode) { DARABONBA_PTR_SET_VALUE(workflowNode_, workflowNode) };
        inline WorkflowNodeList& setWorkflowNode(vector<WorkflowNodeList::WorkflowNode> && workflowNode) { DARABONBA_PTR_SET_RVALUE(workflowNode_, workflowNode) };


      protected:
        shared_ptr<vector<WorkflowNodeList::WorkflowNode>> workflowNode_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->wfCateName_ == nullptr && this->workflowNodeList_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline WorkflowDetail& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // wfCateName Field Functions 
      bool hasWfCateName() const { return this->wfCateName_ != nullptr;};
      void deleteWfCateName() { this->wfCateName_ = nullptr;};
      inline string getWfCateName() const { DARABONBA_PTR_GET_DEFAULT(wfCateName_, "") };
      inline WorkflowDetail& setWfCateName(string wfCateName) { DARABONBA_PTR_SET_VALUE(wfCateName_, wfCateName) };


      // workflowNodeList Field Functions 
      bool hasWorkflowNodeList() const { return this->workflowNodeList_ != nullptr;};
      void deleteWorkflowNodeList() { this->workflowNodeList_ = nullptr;};
      inline const WorkflowDetail::WorkflowNodeList & getWorkflowNodeList() const { DARABONBA_PTR_GET_CONST(workflowNodeList_, WorkflowDetail::WorkflowNodeList) };
      inline WorkflowDetail::WorkflowNodeList getWorkflowNodeList() { DARABONBA_PTR_GET(workflowNodeList_, WorkflowDetail::WorkflowNodeList) };
      inline WorkflowDetail& setWorkflowNodeList(const WorkflowDetail::WorkflowNodeList & workflowNodeList) { DARABONBA_PTR_SET_VALUE(workflowNodeList_, workflowNodeList) };
      inline WorkflowDetail& setWorkflowNodeList(WorkflowDetail::WorkflowNodeList && workflowNodeList) { DARABONBA_PTR_SET_RVALUE(workflowNodeList_, workflowNodeList) };


    protected:
      // The remarks of the approval template.
      shared_ptr<string> comment_ {};
      // The name of the approval template.
      shared_ptr<string> wfCateName_ {};
      // The approval nodes.
      shared_ptr<WorkflowDetail::WorkflowNodeList> workflowNodeList_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->workflowDetail_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PreviewWorkflowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PreviewWorkflowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreviewWorkflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workflowDetail Field Functions 
    bool hasWorkflowDetail() const { return this->workflowDetail_ != nullptr;};
    void deleteWorkflowDetail() { this->workflowDetail_ = nullptr;};
    inline const PreviewWorkflowResponseBody::WorkflowDetail & getWorkflowDetail() const { DARABONBA_PTR_GET_CONST(workflowDetail_, PreviewWorkflowResponseBody::WorkflowDetail) };
    inline PreviewWorkflowResponseBody::WorkflowDetail getWorkflowDetail() { DARABONBA_PTR_GET(workflowDetail_, PreviewWorkflowResponseBody::WorkflowDetail) };
    inline PreviewWorkflowResponseBody& setWorkflowDetail(const PreviewWorkflowResponseBody::WorkflowDetail & workflowDetail) { DARABONBA_PTR_SET_VALUE(workflowDetail_, workflowDetail) };
    inline PreviewWorkflowResponseBody& setWorkflowDetail(PreviewWorkflowResponseBody::WorkflowDetail && workflowDetail) { DARABONBA_PTR_SET_RVALUE(workflowDetail_, workflowDetail) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The details of the workflow.
    shared_ptr<PreviewWorkflowResponseBody::WorkflowDetail> workflowDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
