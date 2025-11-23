// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODYWORKFLOWNODESWORKFLOWNODE_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODYWORKFLOWNODESWORKFLOWNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUsers, auditUsers_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserNickName, createUserNickName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUsers, auditUsers_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserNickName, createUserNickName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode() = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode(const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode &) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode(ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode &&) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode() = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& operator=(const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode &) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& operator=(ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditUsers_ == nullptr
        && return this->comment_ == nullptr && return this->createUserId_ == nullptr && return this->createUserNickName_ == nullptr && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr
        && return this->nodeType_ == nullptr; };
    // auditUsers Field Functions 
    bool hasAuditUsers() const { return this->auditUsers_ != nullptr;};
    void deleteAuditUsers() { this->auditUsers_ = nullptr;};
    inline const Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers & auditUsers() const { DARABONBA_PTR_GET_CONST(auditUsers_, Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers) };
    inline Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers auditUsers() { DARABONBA_PTR_GET(auditUsers_, Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setAuditUsers(const Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers & auditUsers) { DARABONBA_PTR_SET_VALUE(auditUsers_, auditUsers) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setAuditUsers(Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers && auditUsers) { DARABONBA_PTR_SET_RVALUE(auditUsers_, auditUsers) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserNickName Field Functions 
    bool hasCreateUserNickName() const { return this->createUserNickName_ != nullptr;};
    void deleteCreateUserNickName() { this->createUserNickName_ = nullptr;};
    inline string createUserNickName() const { DARABONBA_PTR_GET_DEFAULT(createUserNickName_, "") };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setCreateUserNickName(string createUserNickName) { DARABONBA_PTR_SET_VALUE(createUserNickName_, createUserNickName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // The details about approvers.
    std::shared_ptr<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers> auditUsers_ = nullptr;
    // The description of the approval template.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the creator. This ID is different from the ID of the Alibaba Cloud account of the creator.
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    // The name of the user who creates the approval node.
    std::shared_ptr<string> createUserNickName_ = nullptr;
    // The ID of the approval node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the approval node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The type of the approval node. Valid values:
    // 
    // *   SYS: The approval node is predefined by the system.
    // *   USER_LIST: The approval node is created by a user.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
