// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODY_HPP_
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
  class ListWorkFlowNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
    };
    ListWorkFlowNodesResponseBody() = default ;
    ListWorkFlowNodesResponseBody(const ListWorkFlowNodesResponseBody &) = default ;
    ListWorkFlowNodesResponseBody(ListWorkFlowNodesResponseBody &&) = default ;
    ListWorkFlowNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowNodesResponseBody() = default ;
    ListWorkFlowNodesResponseBody& operator=(const ListWorkFlowNodesResponseBody &) = default ;
    ListWorkFlowNodesResponseBody& operator=(ListWorkFlowNodesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AuditUsers, auditUsers_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_TO_JSON(CreateUserNickName, createUserNickName_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, WorkflowNode& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditUsers, auditUsers_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
          DARABONBA_PTR_FROM_JSON(CreateUserNickName, createUserNickName_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
        class AuditUsers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuditUsers& obj) { 
            DARABONBA_PTR_TO_JSON(AuditUser, auditUser_);
          };
          friend void from_json(const Darabonba::Json& j, AuditUsers& obj) { 
            DARABONBA_PTR_FROM_JSON(AuditUser, auditUser_);
          };
          AuditUsers() = default ;
          AuditUsers(const AuditUsers &) = default ;
          AuditUsers(AuditUsers &&) = default ;
          AuditUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuditUsers() = default ;
          AuditUsers& operator=(const AuditUsers &) = default ;
          AuditUsers& operator=(AuditUsers &&) = default ;
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
            // The real name of the approver.
            shared_ptr<string> realName_ {};
            // The ID of the approver. The ID is different from the ID of the Alibaba Cloud account of the approver.
            shared_ptr<int64_t> userId_ {};
          };

          virtual bool empty() const override { return this->auditUser_ == nullptr; };
          // auditUser Field Functions 
          bool hasAuditUser() const { return this->auditUser_ != nullptr;};
          void deleteAuditUser() { this->auditUser_ = nullptr;};
          inline const vector<AuditUsers::AuditUser> & getAuditUser() const { DARABONBA_PTR_GET_CONST(auditUser_, vector<AuditUsers::AuditUser>) };
          inline vector<AuditUsers::AuditUser> getAuditUser() { DARABONBA_PTR_GET(auditUser_, vector<AuditUsers::AuditUser>) };
          inline AuditUsers& setAuditUser(const vector<AuditUsers::AuditUser> & auditUser) { DARABONBA_PTR_SET_VALUE(auditUser_, auditUser) };
          inline AuditUsers& setAuditUser(vector<AuditUsers::AuditUser> && auditUser) { DARABONBA_PTR_SET_RVALUE(auditUser_, auditUser) };


        protected:
          shared_ptr<vector<AuditUsers::AuditUser>> auditUser_ {};
        };

        virtual bool empty() const override { return this->auditUsers_ == nullptr
        && this->comment_ == nullptr && this->createUserId_ == nullptr && this->createUserNickName_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeType_ == nullptr; };
        // auditUsers Field Functions 
        bool hasAuditUsers() const { return this->auditUsers_ != nullptr;};
        void deleteAuditUsers() { this->auditUsers_ = nullptr;};
        inline const WorkflowNode::AuditUsers & getAuditUsers() const { DARABONBA_PTR_GET_CONST(auditUsers_, WorkflowNode::AuditUsers) };
        inline WorkflowNode::AuditUsers getAuditUsers() { DARABONBA_PTR_GET(auditUsers_, WorkflowNode::AuditUsers) };
        inline WorkflowNode& setAuditUsers(const WorkflowNode::AuditUsers & auditUsers) { DARABONBA_PTR_SET_VALUE(auditUsers_, auditUsers) };
        inline WorkflowNode& setAuditUsers(WorkflowNode::AuditUsers && auditUsers) { DARABONBA_PTR_SET_RVALUE(auditUsers_, auditUsers) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline WorkflowNode& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createUserId Field Functions 
        bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
        void deleteCreateUserId() { this->createUserId_ = nullptr;};
        inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
        inline WorkflowNode& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


        // createUserNickName Field Functions 
        bool hasCreateUserNickName() const { return this->createUserNickName_ != nullptr;};
        void deleteCreateUserNickName() { this->createUserNickName_ = nullptr;};
        inline string getCreateUserNickName() const { DARABONBA_PTR_GET_DEFAULT(createUserNickName_, "") };
        inline WorkflowNode& setCreateUserNickName(string createUserNickName) { DARABONBA_PTR_SET_VALUE(createUserNickName_, createUserNickName) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline WorkflowNode& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


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
        // The details about approvers.
        shared_ptr<WorkflowNode::AuditUsers> auditUsers_ {};
        // The description of the approval template.
        shared_ptr<string> comment_ {};
        // The ID of the creator. This ID is different from the ID of the Alibaba Cloud account of the creator.
        shared_ptr<int64_t> createUserId_ {};
        // The name of the user who creates the approval node.
        shared_ptr<string> createUserNickName_ {};
        // The ID of the approval node.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the approval node.
        shared_ptr<string> nodeName_ {};
        // The type of the approval node. Valid values:
        // 
        // *   SYS: The approval node is predefined by the system.
        // *   USER_LIST: The approval node is created by a user.
        shared_ptr<string> nodeType_ {};
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

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->workflowNodes_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkFlowNodesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListWorkFlowNodesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkFlowNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkFlowNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workflowNodes Field Functions 
    bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
    void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
    inline const ListWorkFlowNodesResponseBody::WorkflowNodes & getWorkflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, ListWorkFlowNodesResponseBody::WorkflowNodes) };
    inline ListWorkFlowNodesResponseBody::WorkflowNodes getWorkflowNodes() { DARABONBA_PTR_GET(workflowNodes_, ListWorkFlowNodesResponseBody::WorkflowNodes) };
    inline ListWorkFlowNodesResponseBody& setWorkflowNodes(const ListWorkFlowNodesResponseBody::WorkflowNodes & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
    inline ListWorkFlowNodesResponseBody& setWorkflowNodes(ListWorkFlowNodesResponseBody::WorkflowNodes && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The details of approval nodes.
    shared_ptr<ListWorkFlowNodesResponseBody::WorkflowNodes> workflowNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
