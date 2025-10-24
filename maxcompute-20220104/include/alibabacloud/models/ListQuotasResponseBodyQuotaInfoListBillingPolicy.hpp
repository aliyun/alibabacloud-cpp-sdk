// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAINFOLISTBILLINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYQUOTAINFOLISTBILLINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBodyQuotaInfoListBillingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyQuotaInfoListBillingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyQuotaInfoListBillingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
    };
    ListQuotasResponseBodyQuotaInfoListBillingPolicy() = default ;
    ListQuotasResponseBodyQuotaInfoListBillingPolicy(const ListQuotasResponseBodyQuotaInfoListBillingPolicy &) = default ;
    ListQuotasResponseBodyQuotaInfoListBillingPolicy(ListQuotasResponseBodyQuotaInfoListBillingPolicy &&) = default ;
    ListQuotasResponseBodyQuotaInfoListBillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyQuotaInfoListBillingPolicy() = default ;
    ListQuotasResponseBodyQuotaInfoListBillingPolicy& operator=(const ListQuotasResponseBodyQuotaInfoListBillingPolicy &) = default ;
    ListQuotasResponseBodyQuotaInfoListBillingPolicy& operator=(ListQuotasResponseBodyQuotaInfoListBillingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingMethod_ == nullptr
        && return this->odpsSpecCode_ == nullptr && return this->orderId_ == nullptr; };
    // billingMethod Field Functions 
    bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
    void deleteBillingMethod() { this->billingMethod_ = nullptr;};
    inline string billingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
    inline ListQuotasResponseBodyQuotaInfoListBillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


    // odpsSpecCode Field Functions 
    bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
    void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
    inline string odpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
    inline ListQuotasResponseBodyQuotaInfoListBillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ListQuotasResponseBodyQuotaInfoListBillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The billing method of the quota. Valid values:
    // 
    // *   subscription: a subscription quota.
    // *   payasyougo: a pay-as-you-go quota.
    std::shared_ptr<string> billingMethod_ = nullptr;
    // The specifications of the order.
    std::shared_ptr<string> odpsSpecCode_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
