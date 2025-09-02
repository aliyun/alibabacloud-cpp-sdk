// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPERMISSIONAPPLYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPERMISSIONAPPLYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ApprovePermissionApplyOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApprovePermissionApplyOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApproveAction, approveAction_);
      DARABONBA_PTR_TO_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
    };
    friend void from_json(const Darabonba::Json& j, ApprovePermissionApplyOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproveAction, approveAction_);
      DARABONBA_PTR_FROM_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
    };
    ApprovePermissionApplyOrderRequest() = default ;
    ApprovePermissionApplyOrderRequest(const ApprovePermissionApplyOrderRequest &) = default ;
    ApprovePermissionApplyOrderRequest(ApprovePermissionApplyOrderRequest &&) = default ;
    ApprovePermissionApplyOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApprovePermissionApplyOrderRequest() = default ;
    ApprovePermissionApplyOrderRequest& operator=(const ApprovePermissionApplyOrderRequest &) = default ;
    ApprovePermissionApplyOrderRequest& operator=(ApprovePermissionApplyOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveAction_ != nullptr
        && this->approveComment_ != nullptr && this->flowId_ != nullptr; };
    // approveAction Field Functions 
    bool hasApproveAction() const { return this->approveAction_ != nullptr;};
    void deleteApproveAction() { this->approveAction_ = nullptr;};
    inline int32_t approveAction() const { DARABONBA_PTR_GET_DEFAULT(approveAction_, 0) };
    inline ApprovePermissionApplyOrderRequest& setApproveAction(int32_t approveAction) { DARABONBA_PTR_SET_VALUE(approveAction_, approveAction) };


    // approveComment Field Functions 
    bool hasApproveComment() const { return this->approveComment_ != nullptr;};
    void deleteApproveComment() { this->approveComment_ = nullptr;};
    inline string approveComment() const { DARABONBA_PTR_GET_DEFAULT(approveComment_, "") };
    inline ApprovePermissionApplyOrderRequest& setApproveComment(string approveComment) { DARABONBA_PTR_SET_VALUE(approveComment_, approveComment) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ApprovePermissionApplyOrderRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


  protected:
    // The action for the permission request order. Valid values:
    // 
    // *   1: approve
    // *   2: reject
    // 
    // <!---->
    // 
    // *   0
    // *   1
    // *   2\\.
    // *   3\\.
    // *   4
    // *   5
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> approveAction_ = nullptr;
    // The comment on the order.
    // 
    // This parameter is required.
    std::shared_ptr<string> approveComment_ = nullptr;
    // The ID of the permission request order. You can call the ListPermissionApplyOrders operation to obtain the order ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
