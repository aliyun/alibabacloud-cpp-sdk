// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdateProvisionedProductPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateProvisionedProductPlanResponseBody() = default ;
    UpdateProvisionedProductPlanResponseBody(const UpdateProvisionedProductPlanResponseBody &) = default ;
    UpdateProvisionedProductPlanResponseBody(UpdateProvisionedProductPlanResponseBody &&) = default ;
    UpdateProvisionedProductPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProvisionedProductPlanResponseBody() = default ;
    UpdateProvisionedProductPlanResponseBody& operator=(const UpdateProvisionedProductPlanResponseBody &) = default ;
    UpdateProvisionedProductPlanResponseBody& operator=(UpdateProvisionedProductPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr
        && this->provisionedProductId_ == nullptr && this->requestId_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateProvisionedProductPlanResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline UpdateProvisionedProductPlanResponseBody& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProvisionedProductPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the plan.
    shared_ptr<string> planId_ {};
    // The ID of the product instance.
    shared_ptr<string> provisionedProductId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
