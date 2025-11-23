// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODESWORKFLOWNODE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODESWORKFLOWNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUserIdList, auditUserIdList_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OperateComment, operateComment_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(WorkflowInsCode, workflowInsCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUserIdList, auditUserIdList_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OperateComment, operateComment_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInsCode, workflowInsCode_);
    };
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& operator=(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& operator=(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditUserIdList_ == nullptr
        && return this->nodeName_ == nullptr && return this->operateComment_ == nullptr && return this->operateTime_ == nullptr && return this->operatorId_ == nullptr && return this->workflowInsCode_ == nullptr; };
    // auditUserIdList Field Functions 
    bool hasAuditUserIdList() const { return this->auditUserIdList_ != nullptr;};
    void deleteAuditUserIdList() { this->auditUserIdList_ = nullptr;};
    inline const Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList & auditUserIdList() const { DARABONBA_PTR_GET_CONST(auditUserIdList_, Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList) };
    inline Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList auditUserIdList() { DARABONBA_PTR_GET(auditUserIdList_, Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setAuditUserIdList(const Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList & auditUserIdList) { DARABONBA_PTR_SET_VALUE(auditUserIdList_, auditUserIdList) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setAuditUserIdList(Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList && auditUserIdList) { DARABONBA_PTR_SET_RVALUE(auditUserIdList_, auditUserIdList) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // operateComment Field Functions 
    bool hasOperateComment() const { return this->operateComment_ != nullptr;};
    void deleteOperateComment() { this->operateComment_ = nullptr;};
    inline string operateComment() const { DARABONBA_PTR_GET_DEFAULT(operateComment_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setOperateComment(string operateComment) { DARABONBA_PTR_SET_VALUE(operateComment_, operateComment) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline int64_t operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, 0L) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setOperatorId(int64_t operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // workflowInsCode Field Functions 
    bool hasWorkflowInsCode() const { return this->workflowInsCode_ != nullptr;};
    void deleteWorkflowInsCode() { this->workflowInsCode_ = nullptr;};
    inline string workflowInsCode() const { DARABONBA_PTR_GET_DEFAULT(workflowInsCode_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode& setWorkflowInsCode(string workflowInsCode) { DARABONBA_PTR_SET_VALUE(workflowInsCode_, workflowInsCode) };


  protected:
    // The IDs of the approvers.
    std::shared_ptr<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList> auditUserIdList_ = nullptr;
    // The name of the approval node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The remarks of the approval.
    std::shared_ptr<string> operateComment_ = nullptr;
    // The time when the ticket was submitted.
    std::shared_ptr<string> operateTime_ = nullptr;
    // The ID of the user who submitted the ticket.
    std::shared_ptr<int64_t> operatorId_ = nullptr;
    // The approval status of the ticket. Valid values:
    // 
    // *   **START**: The ticket was submitted.
    // *   **ERROR**: An error occurred.
    // *   **AUDITING**: The ticket is being reviewed.
    // *   **REJECT**: The ticket was rejected.
    // *   **CANCEL**: The ticket was revoked.
    // *   **APPROVED**: The ticket was approved.
    std::shared_ptr<string> workflowInsCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
