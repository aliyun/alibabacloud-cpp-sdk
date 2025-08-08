// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers.hpp>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailReasonList.hpp>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetail& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetail& obj) { 
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
    GetApprovalDetailResponseBodyApprovalDetail() = default ;
    GetApprovalDetailResponseBodyApprovalDetail(const GetApprovalDetailResponseBodyApprovalDetail &) = default ;
    GetApprovalDetailResponseBodyApprovalDetail(GetApprovalDetailResponseBodyApprovalDetail &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetail() = default ;
    GetApprovalDetailResponseBodyApprovalDetail& operator=(const GetApprovalDetailResponseBodyApprovalDetail &) = default ;
    GetApprovalDetailResponseBodyApprovalDetail& operator=(GetApprovalDetailResponseBodyApprovalDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditId_ != nullptr
        && this->createTime_ != nullptr && this->currentHandlers_ != nullptr && this->description_ != nullptr && this->orderId_ != nullptr && this->orderType_ != nullptr
        && this->reasonList_ != nullptr && this->templateId_ != nullptr && this->thirdpartyWorkflowComment_ != nullptr && this->thirdpartyWorkflowUrl_ != nullptr && this->title_ != nullptr
        && this->workflowInsCode_ != nullptr && this->workflowNodes_ != nullptr; };
    // auditId Field Functions 
    bool hasAuditId() const { return this->auditId_ != nullptr;};
    void deleteAuditId() { this->auditId_ = nullptr;};
    inline int64_t auditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentHandlers Field Functions 
    bool hasCurrentHandlers() const { return this->currentHandlers_ != nullptr;};
    void deleteCurrentHandlers() { this->currentHandlers_ = nullptr;};
    inline const Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers & currentHandlers() const { DARABONBA_PTR_GET_CONST(currentHandlers_, Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers) };
    inline Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers currentHandlers() { DARABONBA_PTR_GET(currentHandlers_, Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setCurrentHandlers(const Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers & currentHandlers) { DARABONBA_PTR_SET_VALUE(currentHandlers_, currentHandlers) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setCurrentHandlers(Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers && currentHandlers) { DARABONBA_PTR_SET_RVALUE(currentHandlers_, currentHandlers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // reasonList Field Functions 
    bool hasReasonList() const { return this->reasonList_ != nullptr;};
    void deleteReasonList() { this->reasonList_ = nullptr;};
    inline const Models::GetApprovalDetailResponseBodyApprovalDetailReasonList & reasonList() const { DARABONBA_PTR_GET_CONST(reasonList_, Models::GetApprovalDetailResponseBodyApprovalDetailReasonList) };
    inline Models::GetApprovalDetailResponseBodyApprovalDetailReasonList reasonList() { DARABONBA_PTR_GET(reasonList_, Models::GetApprovalDetailResponseBodyApprovalDetailReasonList) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setReasonList(const Models::GetApprovalDetailResponseBodyApprovalDetailReasonList & reasonList) { DARABONBA_PTR_SET_VALUE(reasonList_, reasonList) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setReasonList(Models::GetApprovalDetailResponseBodyApprovalDetailReasonList && reasonList) { DARABONBA_PTR_SET_RVALUE(reasonList_, reasonList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // thirdpartyWorkflowComment Field Functions 
    bool hasThirdpartyWorkflowComment() const { return this->thirdpartyWorkflowComment_ != nullptr;};
    void deleteThirdpartyWorkflowComment() { this->thirdpartyWorkflowComment_ = nullptr;};
    inline string thirdpartyWorkflowComment() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowComment_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setThirdpartyWorkflowComment(string thirdpartyWorkflowComment) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowComment_, thirdpartyWorkflowComment) };


    // thirdpartyWorkflowUrl Field Functions 
    bool hasThirdpartyWorkflowUrl() const { return this->thirdpartyWorkflowUrl_ != nullptr;};
    void deleteThirdpartyWorkflowUrl() { this->thirdpartyWorkflowUrl_ = nullptr;};
    inline string thirdpartyWorkflowUrl() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowUrl_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setThirdpartyWorkflowUrl(string thirdpartyWorkflowUrl) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowUrl_, thirdpartyWorkflowUrl) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workflowInsCode Field Functions 
    bool hasWorkflowInsCode() const { return this->workflowInsCode_ != nullptr;};
    void deleteWorkflowInsCode() { this->workflowInsCode_ = nullptr;};
    inline string workflowInsCode() const { DARABONBA_PTR_GET_DEFAULT(workflowInsCode_, "") };
    inline GetApprovalDetailResponseBodyApprovalDetail& setWorkflowInsCode(string workflowInsCode) { DARABONBA_PTR_SET_VALUE(workflowInsCode_, workflowInsCode) };


    // workflowNodes Field Functions 
    bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
    void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
    inline const Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes & workflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes) };
    inline Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes workflowNodes() { DARABONBA_PTR_GET(workflowNodes_, Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setWorkflowNodes(const Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
    inline GetApprovalDetailResponseBodyApprovalDetail& setWorkflowNodes(Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


  protected:
    // The ID of the approval process.
    std::shared_ptr<int64_t> auditId_ = nullptr;
    // The time when the approval process was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about the approver.
    std::shared_ptr<Models::GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers> currentHandlers_ = nullptr;
    // The description of the approval process.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ticket.
    std::shared_ptr<int64_t> orderId_ = nullptr;
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
    std::shared_ptr<string> orderType_ = nullptr;
    // The reasons for the approval.
    std::shared_ptr<Models::GetApprovalDetailResponseBodyApprovalDetailReasonList> reasonList_ = nullptr;
    // The ID of the workflow template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // Third-party approval flow remarks.
    std::shared_ptr<string> thirdpartyWorkflowComment_ = nullptr;
    // The third-party approval flow link.
    std::shared_ptr<string> thirdpartyWorkflowUrl_ = nullptr;
    // The title of the approval process.
    std::shared_ptr<string> title_ = nullptr;
    // The approval status of the ticket. Valid values:
    // 
    // *   **AUDITING**: The ticket is being reviewed.
    // *   **REJECT**: The ticket was rejected.
    // *   **CANCEL**: The ticket was revoked.
    // *   **APPROVED**: The ticket was approved.
    // 
    // > An approval process contains multiple approval nodes, and this parameter is returned for each approval node.
    std::shared_ptr<string> workflowInsCode_ = nullptr;
    // The details of approval nodes.
    std::shared_ptr<Models::GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes> workflowNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
