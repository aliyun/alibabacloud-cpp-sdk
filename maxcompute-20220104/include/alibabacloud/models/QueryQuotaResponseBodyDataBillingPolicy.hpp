// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODYDATABILLINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODYDATABILLINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryQuotaResponseBodyDataBillingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQuotaResponseBodyDataBillingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQuotaResponseBodyDataBillingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
    };
    QueryQuotaResponseBodyDataBillingPolicy() = default ;
    QueryQuotaResponseBodyDataBillingPolicy(const QueryQuotaResponseBodyDataBillingPolicy &) = default ;
    QueryQuotaResponseBodyDataBillingPolicy(QueryQuotaResponseBodyDataBillingPolicy &&) = default ;
    QueryQuotaResponseBodyDataBillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQuotaResponseBodyDataBillingPolicy() = default ;
    QueryQuotaResponseBodyDataBillingPolicy& operator=(const QueryQuotaResponseBodyDataBillingPolicy &) = default ;
    QueryQuotaResponseBodyDataBillingPolicy& operator=(QueryQuotaResponseBodyDataBillingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingMethod_ != nullptr
        && this->instanceId_ != nullptr && this->odpsSpecCode_ != nullptr && this->orderId_ != nullptr; };
    // billingMethod Field Functions 
    bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
    void deleteBillingMethod() { this->billingMethod_ = nullptr;};
    inline string billingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
    inline QueryQuotaResponseBodyDataBillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryQuotaResponseBodyDataBillingPolicy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // odpsSpecCode Field Functions 
    bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
    void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
    inline string odpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
    inline QueryQuotaResponseBodyDataBillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryQuotaResponseBodyDataBillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The billing method. Valid values:
    // 
    // *   subscription: the subscription quota.
    // *   payasyougo: the pay-as-you-go quota.
    std::shared_ptr<string> billingMethod_ = nullptr;
    // In MaxCompute, instanceId and orderId are considered the same.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The order specifications.
    std::shared_ptr<string> odpsSpecCode_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
