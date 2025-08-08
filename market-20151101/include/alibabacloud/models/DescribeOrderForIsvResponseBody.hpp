// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORDERFORISVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORDERFORISVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeOrderForIsvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrderForIsvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountQuantity, accountQuantity_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_ANY_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CouponPrice, couponPrice_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PaidOn, paidOn_);
      DARABONBA_PTR_TO_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_TO_JSON(PaymentPrice, paymentPrice_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrderForIsvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountQuantity, accountQuantity_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_ANY_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CouponPrice, couponPrice_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PaidOn, paidOn_);
      DARABONBA_PTR_FROM_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_FROM_JSON(PaymentPrice, paymentPrice_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
    };
    DescribeOrderForIsvResponseBody() = default ;
    DescribeOrderForIsvResponseBody(const DescribeOrderForIsvResponseBody &) = default ;
    DescribeOrderForIsvResponseBody(DescribeOrderForIsvResponseBody &&) = default ;
    DescribeOrderForIsvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrderForIsvResponseBody() = default ;
    DescribeOrderForIsvResponseBody& operator=(const DescribeOrderForIsvResponseBody &) = default ;
    DescribeOrderForIsvResponseBody& operator=(DescribeOrderForIsvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountQuantity_ != nullptr
        && this->aliUid_ != nullptr && this->components_ != nullptr && this->couponPrice_ != nullptr && this->createdOn_ != nullptr && this->instanceIds_ != nullptr
        && this->orderId_ != nullptr && this->orderStatus_ != nullptr && this->orderType_ != nullptr && this->originalPrice_ != nullptr && this->paidOn_ != nullptr
        && this->payStatus_ != nullptr && this->paymentPrice_ != nullptr && this->periodType_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr
        && this->productSkuCode_ != nullptr && this->quantity_ != nullptr && this->requestId_ != nullptr && this->totalPrice_ != nullptr; };
    // accountQuantity Field Functions 
    bool hasAccountQuantity() const { return this->accountQuantity_ != nullptr;};
    void deleteAccountQuantity() { this->accountQuantity_ = nullptr;};
    inline int64_t accountQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountQuantity_, 0L) };
    inline DescribeOrderForIsvResponseBody& setAccountQuantity(int64_t accountQuantity) { DARABONBA_PTR_SET_VALUE(accountQuantity_, accountQuantity) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeOrderForIsvResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline     const Darabonba::Json & components() const { DARABONBA_GET(components_) };
    Darabonba::Json & components() { DARABONBA_GET(components_) };
    inline DescribeOrderForIsvResponseBody& setComponents(const Darabonba::Json & components) { DARABONBA_SET_VALUE(components_, components) };
    inline DescribeOrderForIsvResponseBody& setComponents(Darabonba::Json & components) { DARABONBA_SET_RVALUE(components_, components) };


    // couponPrice Field Functions 
    bool hasCouponPrice() const { return this->couponPrice_ != nullptr;};
    void deleteCouponPrice() { this->couponPrice_ = nullptr;};
    inline float couponPrice() const { DARABONBA_PTR_GET_DEFAULT(couponPrice_, 0.0) };
    inline DescribeOrderForIsvResponseBody& setCouponPrice(float couponPrice) { DARABONBA_PTR_SET_VALUE(couponPrice_, couponPrice) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t createdOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeOrderForIsvResponseBody& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeOrderForIsvResponseBody& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeOrderForIsvResponseBody& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeOrderForIsvResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline DescribeOrderForIsvResponseBody& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeOrderForIsvResponseBody& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeOrderForIsvResponseBody& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // paidOn Field Functions 
    bool hasPaidOn() const { return this->paidOn_ != nullptr;};
    void deletePaidOn() { this->paidOn_ = nullptr;};
    inline int64_t paidOn() const { DARABONBA_PTR_GET_DEFAULT(paidOn_, 0L) };
    inline DescribeOrderForIsvResponseBody& setPaidOn(int64_t paidOn) { DARABONBA_PTR_SET_VALUE(paidOn_, paidOn) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline DescribeOrderForIsvResponseBody& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // paymentPrice Field Functions 
    bool hasPaymentPrice() const { return this->paymentPrice_ != nullptr;};
    void deletePaymentPrice() { this->paymentPrice_ = nullptr;};
    inline float paymentPrice() const { DARABONBA_PTR_GET_DEFAULT(paymentPrice_, 0.0) };
    inline DescribeOrderForIsvResponseBody& setPaymentPrice(float paymentPrice) { DARABONBA_PTR_SET_VALUE(paymentPrice_, paymentPrice) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeOrderForIsvResponseBody& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeOrderForIsvResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeOrderForIsvResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeOrderForIsvResponseBody& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline DescribeOrderForIsvResponseBody& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOrderForIsvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline float totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline DescribeOrderForIsvResponseBody& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<int64_t> accountQuantity_ = nullptr;
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    Darabonba::Json components_ = nullptr;
    std::shared_ptr<float> couponPrice_ = nullptr;
    std::shared_ptr<int64_t> createdOn_ = nullptr;
    // List
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> orderStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<float> originalPrice_ = nullptr;
    std::shared_ptr<int64_t> paidOn_ = nullptr;
    std::shared_ptr<string> payStatus_ = nullptr;
    std::shared_ptr<float> paymentPrice_ = nullptr;
    std::shared_ptr<string> periodType_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<float> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
