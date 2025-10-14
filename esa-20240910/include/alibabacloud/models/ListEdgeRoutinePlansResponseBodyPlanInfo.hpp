// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEROUTINEPLANSRESPONSEBODYPLANINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEROUTINEPLANSRESPONSEBODYPLANINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeRoutinePlansResponseBodyPlanInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeRoutinePlansResponseBodyPlanInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_TO_JSON(ErRoutineCodeVersionQuota, erRoutineCodeVersionQuota_);
      DARABONBA_PTR_TO_JSON(ErRoutineQuota, erRoutineQuota_);
      DARABONBA_PTR_TO_JSON(ErRoutineRouteSiteCountQuota, erRoutineRouteSiteCountQuota_);
      DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeRoutinePlansResponseBodyPlanInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_FROM_JSON(ErRoutineCodeVersionQuota, erRoutineCodeVersionQuota_);
      DARABONBA_PTR_FROM_JSON(ErRoutineQuota, erRoutineQuota_);
      DARABONBA_PTR_FROM_JSON(ErRoutineRouteSiteCountQuota, erRoutineRouteSiteCountQuota_);
      DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
    };
    ListEdgeRoutinePlansResponseBodyPlanInfo() = default ;
    ListEdgeRoutinePlansResponseBodyPlanInfo(const ListEdgeRoutinePlansResponseBodyPlanInfo &) = default ;
    ListEdgeRoutinePlansResponseBodyPlanInfo(ListEdgeRoutinePlansResponseBodyPlanInfo &&) = default ;
    ListEdgeRoutinePlansResponseBodyPlanInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeRoutinePlansResponseBodyPlanInfo() = default ;
    ListEdgeRoutinePlansResponseBodyPlanInfo& operator=(const ListEdgeRoutinePlansResponseBodyPlanInfo &) = default ;
    ListEdgeRoutinePlansResponseBodyPlanInfo& operator=(ListEdgeRoutinePlansResponseBodyPlanInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingMode_ == nullptr
        && return this->erRoutineCodeVersionQuota_ == nullptr && return this->erRoutineQuota_ == nullptr && return this->erRoutineRouteSiteCountQuota_ == nullptr && return this->paymentMethod_ == nullptr && return this->planName_ == nullptr; };
    // billingMode Field Functions 
    bool hasBillingMode() const { return this->billingMode_ != nullptr;};
    void deleteBillingMode() { this->billingMode_ = nullptr;};
    inline string billingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


    // erRoutineCodeVersionQuota Field Functions 
    bool hasErRoutineCodeVersionQuota() const { return this->erRoutineCodeVersionQuota_ != nullptr;};
    void deleteErRoutineCodeVersionQuota() { this->erRoutineCodeVersionQuota_ = nullptr;};
    inline string erRoutineCodeVersionQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineCodeVersionQuota_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setErRoutineCodeVersionQuota(string erRoutineCodeVersionQuota) { DARABONBA_PTR_SET_VALUE(erRoutineCodeVersionQuota_, erRoutineCodeVersionQuota) };


    // erRoutineQuota Field Functions 
    bool hasErRoutineQuota() const { return this->erRoutineQuota_ != nullptr;};
    void deleteErRoutineQuota() { this->erRoutineQuota_ = nullptr;};
    inline string erRoutineQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineQuota_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setErRoutineQuota(string erRoutineQuota) { DARABONBA_PTR_SET_VALUE(erRoutineQuota_, erRoutineQuota) };


    // erRoutineRouteSiteCountQuota Field Functions 
    bool hasErRoutineRouteSiteCountQuota() const { return this->erRoutineRouteSiteCountQuota_ != nullptr;};
    void deleteErRoutineRouteSiteCountQuota() { this->erRoutineRouteSiteCountQuota_ = nullptr;};
    inline string erRoutineRouteSiteCountQuota() const { DARABONBA_PTR_GET_DEFAULT(erRoutineRouteSiteCountQuota_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setErRoutineRouteSiteCountQuota(string erRoutineRouteSiteCountQuota) { DARABONBA_PTR_SET_VALUE(erRoutineRouteSiteCountQuota_, erRoutineRouteSiteCountQuota) };


    // paymentMethod Field Functions 
    bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
    void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
    inline string paymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ListEdgeRoutinePlansResponseBodyPlanInfo& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


  protected:
    // The billing method. Valid values:
    // 
    // *   PREPAY: subscription.
    // *   POSTPAY: pay-as-you-go.
    std::shared_ptr<string> billingMode_ = nullptr;
    // The maximum number of versions that each routine supports.
    std::shared_ptr<string> erRoutineCodeVersionQuota_ = nullptr;
    // The maximum of routines that can be created.
    std::shared_ptr<string> erRoutineQuota_ = nullptr;
    // The maximum number of websites with which each routine can be associated.
    std::shared_ptr<string> erRoutineRouteSiteCountQuota_ = nullptr;
    // The payment method. Valid values:
    // 
    // *   er_free
    // *   er_pay
    std::shared_ptr<string> paymentMethod_ = nullptr;
    // The plan name.
    std::shared_ptr<string> planName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
