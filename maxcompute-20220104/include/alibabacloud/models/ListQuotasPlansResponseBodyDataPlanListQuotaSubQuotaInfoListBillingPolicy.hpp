// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTBILLINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTBILLINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
    };
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy(const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy &) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy(ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy &&) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy() = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& operator=(const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy &) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& operator=(ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingMethod_ != nullptr
        && this->odpsSpecCode_ != nullptr && this->orderId_ != nullptr; };
    // billingMethod Field Functions 
    bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
    void deleteBillingMethod() { this->billingMethod_ = nullptr;};
    inline string billingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


    // odpsSpecCode Field Functions 
    bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
    void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
    inline string odpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListBillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The billing method of the quota. Valid values:
    // 
    // *   subscription: a subscription quota.
    // *   payasyougo: a pay-as-you-go quota.
    std::shared_ptr<string> billingMethod_ = nullptr;
    // The specifications of the order.
    std::shared_ptr<string> odpsSpecCode_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
