// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateProvisionedProductPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProvisionedProductPlanResponseBody() = default ;
    CreateProvisionedProductPlanResponseBody(const CreateProvisionedProductPlanResponseBody &) = default ;
    CreateProvisionedProductPlanResponseBody(CreateProvisionedProductPlanResponseBody &&) = default ;
    CreateProvisionedProductPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProvisionedProductPlanResponseBody() = default ;
    CreateProvisionedProductPlanResponseBody& operator=(const CreateProvisionedProductPlanResponseBody &) = default ;
    CreateProvisionedProductPlanResponseBody& operator=(CreateProvisionedProductPlanResponseBody &&) = default ;
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
    inline CreateProvisionedProductPlanResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline CreateProvisionedProductPlanResponseBody& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProvisionedProductPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The plan ID.
    shared_ptr<string> planId_ {};
    // The product instance ID.
    shared_ptr<string> provisionedProductId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
