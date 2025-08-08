// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWORKFLOWEXTRAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETWORKFLOWEXTRAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SetWorkflowExtraInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWorkflowExtraInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderAddApprovalNode, renderAddApprovalNode_);
      DARABONBA_PTR_TO_JSON(RenderAgree, renderAgree_);
      DARABONBA_PTR_TO_JSON(RenderCancel, renderCancel_);
      DARABONBA_PTR_TO_JSON(RenderReject, renderReject_);
      DARABONBA_PTR_TO_JSON(RenderTransfer, renderTransfer_);
      DARABONBA_PTR_TO_JSON(ThirdpartyWorkflowComment, thirdpartyWorkflowComment_);
      DARABONBA_PTR_TO_JSON(ThirdpartyWorkflowUrl, thirdpartyWorkflowUrl_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetWorkflowExtraInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderAddApprovalNode, renderAddApprovalNode_);
      DARABONBA_PTR_FROM_JSON(RenderAgree, renderAgree_);
      DARABONBA_PTR_FROM_JSON(RenderCancel, renderCancel_);
      DARABONBA_PTR_FROM_JSON(RenderReject, renderReject_);
      DARABONBA_PTR_FROM_JSON(RenderTransfer, renderTransfer_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyWorkflowComment, thirdpartyWorkflowComment_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyWorkflowUrl, thirdpartyWorkflowUrl_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    SetWorkflowExtraInfoRequest() = default ;
    SetWorkflowExtraInfoRequest(const SetWorkflowExtraInfoRequest &) = default ;
    SetWorkflowExtraInfoRequest(SetWorkflowExtraInfoRequest &&) = default ;
    SetWorkflowExtraInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWorkflowExtraInfoRequest() = default ;
    SetWorkflowExtraInfoRequest& operator=(const SetWorkflowExtraInfoRequest &) = default ;
    SetWorkflowExtraInfoRequest& operator=(SetWorkflowExtraInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderAddApprovalNode_ != nullptr
        && this->renderAgree_ != nullptr && this->renderCancel_ != nullptr && this->renderReject_ != nullptr && this->renderTransfer_ != nullptr && this->thirdpartyWorkflowComment_ != nullptr
        && this->thirdpartyWorkflowUrl_ != nullptr && this->tid_ != nullptr && this->workflowInstanceId_ != nullptr; };
    // renderAddApprovalNode Field Functions 
    bool hasRenderAddApprovalNode() const { return this->renderAddApprovalNode_ != nullptr;};
    void deleteRenderAddApprovalNode() { this->renderAddApprovalNode_ = nullptr;};
    inline bool renderAddApprovalNode() const { DARABONBA_PTR_GET_DEFAULT(renderAddApprovalNode_, false) };
    inline SetWorkflowExtraInfoRequest& setRenderAddApprovalNode(bool renderAddApprovalNode) { DARABONBA_PTR_SET_VALUE(renderAddApprovalNode_, renderAddApprovalNode) };


    // renderAgree Field Functions 
    bool hasRenderAgree() const { return this->renderAgree_ != nullptr;};
    void deleteRenderAgree() { this->renderAgree_ = nullptr;};
    inline bool renderAgree() const { DARABONBA_PTR_GET_DEFAULT(renderAgree_, false) };
    inline SetWorkflowExtraInfoRequest& setRenderAgree(bool renderAgree) { DARABONBA_PTR_SET_VALUE(renderAgree_, renderAgree) };


    // renderCancel Field Functions 
    bool hasRenderCancel() const { return this->renderCancel_ != nullptr;};
    void deleteRenderCancel() { this->renderCancel_ = nullptr;};
    inline bool renderCancel() const { DARABONBA_PTR_GET_DEFAULT(renderCancel_, false) };
    inline SetWorkflowExtraInfoRequest& setRenderCancel(bool renderCancel) { DARABONBA_PTR_SET_VALUE(renderCancel_, renderCancel) };


    // renderReject Field Functions 
    bool hasRenderReject() const { return this->renderReject_ != nullptr;};
    void deleteRenderReject() { this->renderReject_ = nullptr;};
    inline bool renderReject() const { DARABONBA_PTR_GET_DEFAULT(renderReject_, false) };
    inline SetWorkflowExtraInfoRequest& setRenderReject(bool renderReject) { DARABONBA_PTR_SET_VALUE(renderReject_, renderReject) };


    // renderTransfer Field Functions 
    bool hasRenderTransfer() const { return this->renderTransfer_ != nullptr;};
    void deleteRenderTransfer() { this->renderTransfer_ = nullptr;};
    inline bool renderTransfer() const { DARABONBA_PTR_GET_DEFAULT(renderTransfer_, false) };
    inline SetWorkflowExtraInfoRequest& setRenderTransfer(bool renderTransfer) { DARABONBA_PTR_SET_VALUE(renderTransfer_, renderTransfer) };


    // thirdpartyWorkflowComment Field Functions 
    bool hasThirdpartyWorkflowComment() const { return this->thirdpartyWorkflowComment_ != nullptr;};
    void deleteThirdpartyWorkflowComment() { this->thirdpartyWorkflowComment_ = nullptr;};
    inline string thirdpartyWorkflowComment() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowComment_, "") };
    inline SetWorkflowExtraInfoRequest& setThirdpartyWorkflowComment(string thirdpartyWorkflowComment) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowComment_, thirdpartyWorkflowComment) };


    // thirdpartyWorkflowUrl Field Functions 
    bool hasThirdpartyWorkflowUrl() const { return this->thirdpartyWorkflowUrl_ != nullptr;};
    void deleteThirdpartyWorkflowUrl() { this->thirdpartyWorkflowUrl_ = nullptr;};
    inline string thirdpartyWorkflowUrl() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyWorkflowUrl_, "") };
    inline SetWorkflowExtraInfoRequest& setThirdpartyWorkflowUrl(string thirdpartyWorkflowUrl) { DARABONBA_PTR_SET_VALUE(thirdpartyWorkflowUrl_, thirdpartyWorkflowUrl) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SetWorkflowExtraInfoRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline SetWorkflowExtraInfoRequest& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


  protected:
    std::shared_ptr<bool> renderAddApprovalNode_ = nullptr;
    std::shared_ptr<bool> renderAgree_ = nullptr;
    std::shared_ptr<bool> renderCancel_ = nullptr;
    std::shared_ptr<bool> renderReject_ = nullptr;
    std::shared_ptr<bool> renderTransfer_ = nullptr;
    std::shared_ptr<string> thirdpartyWorkflowComment_ = nullptr;
    std::shared_ptr<string> thirdpartyWorkflowUrl_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
