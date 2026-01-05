// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DeleteProvisionedProductPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    DeleteProvisionedProductPlanRequest() = default ;
    DeleteProvisionedProductPlanRequest(const DeleteProvisionedProductPlanRequest &) = default ;
    DeleteProvisionedProductPlanRequest(DeleteProvisionedProductPlanRequest &&) = default ;
    DeleteProvisionedProductPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProvisionedProductPlanRequest() = default ;
    DeleteProvisionedProductPlanRequest& operator=(const DeleteProvisionedProductPlanRequest &) = default ;
    DeleteProvisionedProductPlanRequest& operator=(DeleteProvisionedProductPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DeleteProvisionedProductPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


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
