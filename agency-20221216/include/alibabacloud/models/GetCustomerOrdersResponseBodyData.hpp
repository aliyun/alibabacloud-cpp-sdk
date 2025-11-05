// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERORDERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERORDERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCustomerOrdersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerAccount, customerAccount_);
      DARABONBA_PTR_TO_JSON(CustomerManager, customerManager_);
      DARABONBA_PTR_TO_JSON(CustomerNo, customerNo_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderSource, orderSource_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OriginalCost, originalCost_);
      DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
      DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_TO_JSON(PretaxCost, pretaxCost_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(TimeToOrder, timeToOrder_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerAccount, customerAccount_);
      DARABONBA_PTR_FROM_JSON(CustomerManager, customerManager_);
      DARABONBA_PTR_FROM_JSON(CustomerNo, customerNo_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderSource, orderSource_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OriginalCost, originalCost_);
      DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
      DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_FROM_JSON(PretaxCost, pretaxCost_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(TimeToOrder, timeToOrder_);
    };
    GetCustomerOrdersResponseBodyData() = default ;
    GetCustomerOrdersResponseBodyData(const GetCustomerOrdersResponseBodyData &) = default ;
    GetCustomerOrdersResponseBodyData(GetCustomerOrdersResponseBodyData &&) = default ;
    GetCustomerOrdersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerOrdersResponseBodyData() = default ;
    GetCustomerOrdersResponseBodyData& operator=(const GetCustomerOrdersResponseBodyData &) = default ;
    GetCustomerOrdersResponseBodyData& operator=(GetCustomerOrdersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerAccount_ == nullptr
        && return this->customerManager_ == nullptr && return this->customerNo_ == nullptr && return this->orderId_ == nullptr && return this->orderSource_ == nullptr && return this->orderStatus_ == nullptr
        && return this->orderType_ == nullptr && return this->originalCost_ == nullptr && return this->paymentMethod_ == nullptr && return this->paymentTime_ == nullptr && return this->pretaxCost_ == nullptr
        && return this->productDetail_ == nullptr && return this->productType_ == nullptr && return this->timeToOrder_ == nullptr; };
    // customerAccount Field Functions 
    bool hasCustomerAccount() const { return this->customerAccount_ != nullptr;};
    void deleteCustomerAccount() { this->customerAccount_ = nullptr;};
    inline string customerAccount() const { DARABONBA_PTR_GET_DEFAULT(customerAccount_, "") };
    inline GetCustomerOrdersResponseBodyData& setCustomerAccount(string customerAccount) { DARABONBA_PTR_SET_VALUE(customerAccount_, customerAccount) };


    // customerManager Field Functions 
    bool hasCustomerManager() const { return this->customerManager_ != nullptr;};
    void deleteCustomerManager() { this->customerManager_ = nullptr;};
    inline string customerManager() const { DARABONBA_PTR_GET_DEFAULT(customerManager_, "") };
    inline GetCustomerOrdersResponseBodyData& setCustomerManager(string customerManager) { DARABONBA_PTR_SET_VALUE(customerManager_, customerManager) };


    // customerNo Field Functions 
    bool hasCustomerNo() const { return this->customerNo_ != nullptr;};
    void deleteCustomerNo() { this->customerNo_ = nullptr;};
    inline int64_t customerNo() const { DARABONBA_PTR_GET_DEFAULT(customerNo_, 0L) };
    inline GetCustomerOrdersResponseBodyData& setCustomerNo(int64_t customerNo) { DARABONBA_PTR_SET_VALUE(customerNo_, customerNo) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetCustomerOrdersResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderSource Field Functions 
    bool hasOrderSource() const { return this->orderSource_ != nullptr;};
    void deleteOrderSource() { this->orderSource_ = nullptr;};
    inline string orderSource() const { DARABONBA_PTR_GET_DEFAULT(orderSource_, "") };
    inline GetCustomerOrdersResponseBodyData& setOrderSource(string orderSource) { DARABONBA_PTR_SET_VALUE(orderSource_, orderSource) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline GetCustomerOrdersResponseBodyData& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetCustomerOrdersResponseBodyData& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // originalCost Field Functions 
    bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
    void deleteOriginalCost() { this->originalCost_ = nullptr;};
    inline double originalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
    inline GetCustomerOrdersResponseBodyData& setOriginalCost(double originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


    // paymentMethod Field Functions 
    bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
    void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
    inline string paymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
    inline GetCustomerOrdersResponseBodyData& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


    // paymentTime Field Functions 
    bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
    void deletePaymentTime() { this->paymentTime_ = nullptr;};
    inline string paymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
    inline GetCustomerOrdersResponseBodyData& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


    // pretaxCost Field Functions 
    bool hasPretaxCost() const { return this->pretaxCost_ != nullptr;};
    void deletePretaxCost() { this->pretaxCost_ = nullptr;};
    inline double pretaxCost() const { DARABONBA_PTR_GET_DEFAULT(pretaxCost_, 0.0) };
    inline GetCustomerOrdersResponseBodyData& setPretaxCost(double pretaxCost) { DARABONBA_PTR_SET_VALUE(pretaxCost_, pretaxCost) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline GetCustomerOrdersResponseBodyData& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetCustomerOrdersResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // timeToOrder Field Functions 
    bool hasTimeToOrder() const { return this->timeToOrder_ != nullptr;};
    void deleteTimeToOrder() { this->timeToOrder_ = nullptr;};
    inline string timeToOrder() const { DARABONBA_PTR_GET_DEFAULT(timeToOrder_, "") };
    inline GetCustomerOrdersResponseBodyData& setTimeToOrder(string timeToOrder) { DARABONBA_PTR_SET_VALUE(timeToOrder_, timeToOrder) };


  protected:
    std::shared_ptr<string> customerAccount_ = nullptr;
    std::shared_ptr<string> customerManager_ = nullptr;
    std::shared_ptr<int64_t> customerNo_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> orderSource_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<double> originalCost_ = nullptr;
    std::shared_ptr<string> paymentMethod_ = nullptr;
    std::shared_ptr<string> paymentTime_ = nullptr;
    std::shared_ptr<double> pretaxCost_ = nullptr;
    std::shared_ptr<string> productDetail_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> timeToOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
