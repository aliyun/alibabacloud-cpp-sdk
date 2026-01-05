// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPROVISIONEDPRODUCTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPROVISIONEDPRODUCTPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CancelProvisionedProductPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    CancelProvisionedProductPlanRequest() = default ;
    CancelProvisionedProductPlanRequest(const CancelProvisionedProductPlanRequest &) = default ;
    CancelProvisionedProductPlanRequest(CancelProvisionedProductPlanRequest &&) = default ;
    CancelProvisionedProductPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelProvisionedProductPlanRequest() = default ;
    CancelProvisionedProductPlanRequest& operator=(const CancelProvisionedProductPlanRequest &) = default ;
    CancelProvisionedProductPlanRequest& operator=(CancelProvisionedProductPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline CancelProvisionedProductPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    // The ID of the plan.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
