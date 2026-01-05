// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ApproveProvisionedProductPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApproveProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, ApproveProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalAction, approvalAction_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    ApproveProvisionedProductPlanRequest() = default ;
    ApproveProvisionedProductPlanRequest(const ApproveProvisionedProductPlanRequest &) = default ;
    ApproveProvisionedProductPlanRequest(ApproveProvisionedProductPlanRequest &&) = default ;
    ApproveProvisionedProductPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApproveProvisionedProductPlanRequest() = default ;
    ApproveProvisionedProductPlanRequest& operator=(const ApproveProvisionedProductPlanRequest &) = default ;
    ApproveProvisionedProductPlanRequest& operator=(ApproveProvisionedProductPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalAction_ == nullptr
        && this->comment_ == nullptr && this->planId_ == nullptr; };
    // approvalAction Field Functions 
    bool hasApprovalAction() const { return this->approvalAction_ != nullptr;};
    void deleteApprovalAction() { this->approvalAction_ = nullptr;};
    inline string getApprovalAction() const { DARABONBA_PTR_GET_DEFAULT(approvalAction_, "") };
    inline ApproveProvisionedProductPlanRequest& setApprovalAction(string approvalAction) { DARABONBA_PTR_SET_VALUE(approvalAction_, approvalAction) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ApproveProvisionedProductPlanRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ApproveProvisionedProductPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    // The review action. Valid values:
    // 
    // *   Approve
    // *   Reject
    // 
    // This parameter is required.
    shared_ptr<string> approvalAction_ {};
    // The review description.
    shared_ptr<string> comment_ {};
    // The ID of the plan.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
