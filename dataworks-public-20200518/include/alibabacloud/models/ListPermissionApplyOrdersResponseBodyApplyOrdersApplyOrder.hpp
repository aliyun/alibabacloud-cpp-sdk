// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDER_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyBaseId, applyBaseId_);
      DARABONBA_PTR_TO_JSON(ApplyTimestamp, applyTimestamp_);
      DARABONBA_PTR_TO_JSON(ApproveContent, approveContent_);
      DARABONBA_PTR_TO_JSON(FinishApprovalComment, finishApprovalComment_);
      DARABONBA_PTR_TO_JSON(FinishApprovalTimestamp, finishApprovalTimestamp_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyBaseId, applyBaseId_);
      DARABONBA_PTR_FROM_JSON(ApplyTimestamp, applyTimestamp_);
      DARABONBA_PTR_FROM_JSON(ApproveContent, approveContent_);
      DARABONBA_PTR_FROM_JSON(FinishApprovalComment, finishApprovalComment_);
      DARABONBA_PTR_FROM_JSON(FinishApprovalTimestamp, finishApprovalTimestamp_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
    };
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder &&) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& operator=(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& operator=(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyBaseId_ != nullptr
        && this->applyTimestamp_ != nullptr && this->approveContent_ != nullptr && this->finishApprovalComment_ != nullptr && this->finishApprovalTimestamp_ != nullptr && this->flowId_ != nullptr
        && this->flowStatus_ != nullptr; };
    // applyBaseId Field Functions 
    bool hasApplyBaseId() const { return this->applyBaseId_ != nullptr;};
    void deleteApplyBaseId() { this->applyBaseId_ = nullptr;};
    inline string applyBaseId() const { DARABONBA_PTR_GET_DEFAULT(applyBaseId_, "") };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setApplyBaseId(string applyBaseId) { DARABONBA_PTR_SET_VALUE(applyBaseId_, applyBaseId) };


    // applyTimestamp Field Functions 
    bool hasApplyTimestamp() const { return this->applyTimestamp_ != nullptr;};
    void deleteApplyTimestamp() { this->applyTimestamp_ = nullptr;};
    inline int64_t applyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(applyTimestamp_, 0L) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setApplyTimestamp(int64_t applyTimestamp) { DARABONBA_PTR_SET_VALUE(applyTimestamp_, applyTimestamp) };


    // approveContent Field Functions 
    bool hasApproveContent() const { return this->approveContent_ != nullptr;};
    void deleteApproveContent() { this->approveContent_ = nullptr;};
    inline const Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent & approveContent() const { DARABONBA_PTR_GET_CONST(approveContent_, Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent) };
    inline Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent approveContent() { DARABONBA_PTR_GET(approveContent_, Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setApproveContent(const Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent & approveContent) { DARABONBA_PTR_SET_VALUE(approveContent_, approveContent) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setApproveContent(Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent && approveContent) { DARABONBA_PTR_SET_RVALUE(approveContent_, approveContent) };


    // finishApprovalComment Field Functions 
    bool hasFinishApprovalComment() const { return this->finishApprovalComment_ != nullptr;};
    void deleteFinishApprovalComment() { this->finishApprovalComment_ = nullptr;};
    inline string finishApprovalComment() const { DARABONBA_PTR_GET_DEFAULT(finishApprovalComment_, "") };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setFinishApprovalComment(string finishApprovalComment) { DARABONBA_PTR_SET_VALUE(finishApprovalComment_, finishApprovalComment) };


    // finishApprovalTimestamp Field Functions 
    bool hasFinishApprovalTimestamp() const { return this->finishApprovalTimestamp_ != nullptr;};
    void deleteFinishApprovalTimestamp() { this->finishApprovalTimestamp_ = nullptr;};
    inline int64_t finishApprovalTimestamp() const { DARABONBA_PTR_GET_DEFAULT(finishApprovalTimestamp_, 0L) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setFinishApprovalTimestamp(int64_t finishApprovalTimestamp) { DARABONBA_PTR_SET_VALUE(finishApprovalTimestamp_, finishApprovalTimestamp) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowStatus Field Functions 
    bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
    void deleteFlowStatus() { this->flowStatus_ = nullptr;};
    inline int32_t flowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, 0) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrder& setFlowStatus(int32_t flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


  protected:
    // The ID of the Alibaba Cloud account that was used to submit the permission request order.
    std::shared_ptr<string> applyBaseId_ = nullptr;
    // The time when the permission request order was submitted. The parameter value is a UNIX timestamp.
    std::shared_ptr<int64_t> applyTimestamp_ = nullptr;
    // The content of the permission request order.
    std::shared_ptr<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContent> approveContent_ = nullptr;
    std::shared_ptr<string> finishApprovalComment_ = nullptr;
    std::shared_ptr<int64_t> finishApprovalTimestamp_ = nullptr;
    // The ID of the permission request order.
    std::shared_ptr<string> flowId_ = nullptr;
    // The status of the permission request order. Valid values:
    // 
    // *   1: to be processed
    // *   2: approved and authorized
    // *   3: approved but authorization failed
    // *   4: rejected
    std::shared_ptr<int32_t> flowStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
