// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODYMODULEORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODYMODULEORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderListQueryResponseBodyModuleOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderListQueryResponseBodyModuleOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_TO_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_TO_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_TO_JSON(settle_time, settleTime_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderListQueryResponseBodyModuleOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_FROM_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_FROM_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_FROM_JSON(settle_time, settleTime_);
    };
    MealOrderListQueryResponseBodyModuleOrderList() = default ;
    MealOrderListQueryResponseBodyModuleOrderList(const MealOrderListQueryResponseBodyModuleOrderList &) = default ;
    MealOrderListQueryResponseBodyModuleOrderList(MealOrderListQueryResponseBodyModuleOrderList &&) = default ;
    MealOrderListQueryResponseBodyModuleOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderListQueryResponseBodyModuleOrderList() = default ;
    MealOrderListQueryResponseBodyModuleOrderList& operator=(const MealOrderListQueryResponseBodyModuleOrderList &) = default ;
    MealOrderListQueryResponseBodyModuleOrderList& operator=(MealOrderListQueryResponseBodyModuleOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpPayAmount_ != nullptr
        && this->merchantName_ != nullptr && this->orderId_ != nullptr && this->orderStatus_ != nullptr && this->orderType_ != nullptr && this->payAmount_ != nullptr
        && this->personPayAmount_ != nullptr && this->settleTime_ != nullptr; };
    // corpPayAmount Field Functions 
    bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
    void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
    inline int64_t corpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0L) };
    inline MealOrderListQueryResponseBodyModuleOrderList& setCorpPayAmount(int64_t corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


    // merchantName Field Functions 
    bool hasMerchantName() const { return this->merchantName_ != nullptr;};
    void deleteMerchantName() { this->merchantName_ = nullptr;};
    inline string merchantName() const { DARABONBA_PTR_GET_DEFAULT(merchantName_, "") };
    inline MealOrderListQueryResponseBodyModuleOrderList& setMerchantName(string merchantName) { DARABONBA_PTR_SET_VALUE(merchantName_, merchantName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline MealOrderListQueryResponseBodyModuleOrderList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline MealOrderListQueryResponseBodyModuleOrderList& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline MealOrderListQueryResponseBodyModuleOrderList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // payAmount Field Functions 
    bool hasPayAmount() const { return this->payAmount_ != nullptr;};
    void deletePayAmount() { this->payAmount_ = nullptr;};
    inline int64_t payAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
    inline MealOrderListQueryResponseBodyModuleOrderList& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


    // personPayAmount Field Functions 
    bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
    void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
    inline int64_t personPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0L) };
    inline MealOrderListQueryResponseBodyModuleOrderList& setPersonPayAmount(int64_t personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


    // settleTime Field Functions 
    bool hasSettleTime() const { return this->settleTime_ != nullptr;};
    void deleteSettleTime() { this->settleTime_ = nullptr;};
    inline string settleTime() const { DARABONBA_PTR_GET_DEFAULT(settleTime_, "") };
    inline MealOrderListQueryResponseBodyModuleOrderList& setSettleTime(string settleTime) { DARABONBA_PTR_SET_VALUE(settleTime_, settleTime) };


  protected:
    std::shared_ptr<int64_t> corpPayAmount_ = nullptr;
    std::shared_ptr<string> merchantName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int64_t> payAmount_ = nullptr;
    std::shared_ptr<int64_t> personPayAmount_ = nullptr;
    std::shared_ptr<string> settleTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
