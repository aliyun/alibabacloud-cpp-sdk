// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ApproveOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalNodeId, approvalNodeId_);
      DARABONBA_PTR_TO_JSON(ApprovalNodePos, approvalNodePos_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(NewApprover, newApprover_);
      DARABONBA_PTR_TO_JSON(NewApproverList, newApproverList_);
      DARABONBA_PTR_TO_JSON(OldApprover, oldApprover_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalNodeId, approvalNodeId_);
      DARABONBA_PTR_FROM_JSON(ApprovalNodePos, approvalNodePos_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(NewApprover, newApprover_);
      DARABONBA_PTR_FROM_JSON(NewApproverList, newApproverList_);
      DARABONBA_PTR_FROM_JSON(OldApprover, oldApprover_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    ApproveOrderRequest() = default ;
    ApproveOrderRequest(const ApproveOrderRequest &) = default ;
    ApproveOrderRequest(ApproveOrderRequest &&) = default ;
    ApproveOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveOrderRequest() = default ;
    ApproveOrderRequest& operator=(const ApproveOrderRequest &) = default ;
    ApproveOrderRequest& operator=(ApproveOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalNodeId_ == nullptr
        && this->approvalNodePos_ == nullptr && this->approvalType_ == nullptr && this->comment_ == nullptr && this->newApprover_ == nullptr && this->newApproverList_ == nullptr
        && this->oldApprover_ == nullptr && this->realLoginUserUid_ == nullptr && this->tid_ == nullptr && this->workflowInstanceId_ == nullptr; };
    // approvalNodeId Field Functions 
    bool hasApprovalNodeId() const { return this->approvalNodeId_ != nullptr;};
    void deleteApprovalNodeId() { this->approvalNodeId_ = nullptr;};
    inline int64_t getApprovalNodeId() const { DARABONBA_PTR_GET_DEFAULT(approvalNodeId_, 0L) };
    inline ApproveOrderRequest& setApprovalNodeId(int64_t approvalNodeId) { DARABONBA_PTR_SET_VALUE(approvalNodeId_, approvalNodeId) };


    // approvalNodePos Field Functions 
    bool hasApprovalNodePos() const { return this->approvalNodePos_ != nullptr;};
    void deleteApprovalNodePos() { this->approvalNodePos_ = nullptr;};
    inline string getApprovalNodePos() const { DARABONBA_PTR_GET_DEFAULT(approvalNodePos_, "") };
    inline ApproveOrderRequest& setApprovalNodePos(string approvalNodePos) { DARABONBA_PTR_SET_VALUE(approvalNodePos_, approvalNodePos) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline ApproveOrderRequest& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ApproveOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // newApprover Field Functions 
    bool hasNewApprover() const { return this->newApprover_ != nullptr;};
    void deleteNewApprover() { this->newApprover_ = nullptr;};
    inline int64_t getNewApprover() const { DARABONBA_PTR_GET_DEFAULT(newApprover_, 0L) };
    inline ApproveOrderRequest& setNewApprover(int64_t newApprover) { DARABONBA_PTR_SET_VALUE(newApprover_, newApprover) };


    // newApproverList Field Functions 
    bool hasNewApproverList() const { return this->newApproverList_ != nullptr;};
    void deleteNewApproverList() { this->newApproverList_ = nullptr;};
    inline string getNewApproverList() const { DARABONBA_PTR_GET_DEFAULT(newApproverList_, "") };
    inline ApproveOrderRequest& setNewApproverList(string newApproverList) { DARABONBA_PTR_SET_VALUE(newApproverList_, newApproverList) };


    // oldApprover Field Functions 
    bool hasOldApprover() const { return this->oldApprover_ != nullptr;};
    void deleteOldApprover() { this->oldApprover_ = nullptr;};
    inline int64_t getOldApprover() const { DARABONBA_PTR_GET_DEFAULT(oldApprover_, 0L) };
    inline ApproveOrderRequest& setOldApprover(int64_t oldApprover) { DARABONBA_PTR_SET_VALUE(oldApprover_, oldApprover) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ApproveOrderRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ApproveOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline ApproveOrderRequest& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


  protected:
    // If ApprovalType is set to ADD_APPROVAL_NODE, you need to specify this parameter. The ID of the user that is added as the new approval node. This node must be a user-defined approval node. You can call the ListUserDefineWorkFlowNodes operation to obtain the value of this parameter.
    shared_ptr<int64_t> approvalNodeId_ {};
    // The position of the new approval node. You must specify this parameter if ApprovalType is set to ADD_APPROVAL_NODE. Valid values:
    // 
    // *   **PRE_ADD_APPROVAL_NODE**: before the current approval node.
    // *   **POST_ADD_APPROVAL_NODE**: after the current approval node.
    shared_ptr<string> approvalNodePos_ {};
    // The action that you want to perform on the ticket. Valid values:
    // 
    // *   **AGREE**
    // *   **CANCEL**
    // *   **REJECT**
    // *   **TRANSFER**
    // *   **ADD_APPROVAL_NODE**
    // 
    // This parameter is required.
    shared_ptr<string> approvalType_ {};
    // The description of the ticket.
    shared_ptr<string> comment_ {};
    // The ID of the user to which the ticket is transferred. If ApprovalType is set to TRANSFER, you need to specify this parameter.
    shared_ptr<int64_t> newApprover_ {};
    // >  You can specify this parameter if ApprovalType is set to TRANSFER. You need to only specify one of NewApproverList and NewApprover.
    // 
    // The IDs of the users to whom the ticket is transferred. Separate multiple IDs with commas (,).
    shared_ptr<string> newApproverList_ {};
    // The ID of the user that transfers the ticket to another user. The default value is the ID of the current user. If the current user is an administrator or a database administrator (DBA), the user can change the value of this parameter to the ID of another user.
    shared_ptr<int64_t> oldApprover_ {};
    // The UID of the Alibaba Cloud account that actually calls the API.
    shared_ptr<string> realLoginUserUid_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The ID of the approval process. You can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/144642.html) operation to obtain the ID of the approval process.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workflowInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
