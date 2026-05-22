// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEORDERRESPONSEBODY_HPP_
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
  class DescribeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOrderResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(SupplierCompanyName, supplierCompanyName_);
      DARABONBA_PTR_TO_JSON(SupplierTelephones, supplierTelephones_);
      DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOrderResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SupplierCompanyName, supplierCompanyName_);
      DARABONBA_PTR_FROM_JSON(SupplierTelephones, supplierTelephones_);
      DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
    };
    DescribeOrderResponseBody() = default ;
    DescribeOrderResponseBody(const DescribeOrderResponseBody &) = default ;
    DescribeOrderResponseBody(DescribeOrderResponseBody &&) = default ;
    DescribeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOrderResponseBody() = default ;
    DescribeOrderResponseBody& operator=(const DescribeOrderResponseBody &) = default ;
    DescribeOrderResponseBody& operator=(DescribeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupplierTelephones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupplierTelephones& obj) { 
        DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      };
      friend void from_json(const Darabonba::Json& j, SupplierTelephones& obj) { 
        DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      };
      SupplierTelephones() = default ;
      SupplierTelephones(const SupplierTelephones &) = default ;
      SupplierTelephones(SupplierTelephones &&) = default ;
      SupplierTelephones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupplierTelephones() = default ;
      SupplierTelephones& operator=(const SupplierTelephones &) = default ;
      SupplierTelephones& operator=(SupplierTelephones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->telephone_ == nullptr; };
      // telephone Field Functions 
      bool hasTelephone() const { return this->telephone_ != nullptr;};
      void deleteTelephone() { this->telephone_ = nullptr;};
      inline const vector<string> & getTelephone() const { DARABONBA_PTR_GET_CONST(telephone_, vector<string>) };
      inline vector<string> getTelephone() { DARABONBA_PTR_GET(telephone_, vector<string>) };
      inline SupplierTelephones& setTelephone(const vector<string> & telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };
      inline SupplierTelephones& setTelephone(vector<string> && telephone) { DARABONBA_PTR_SET_RVALUE(telephone_, telephone) };


    protected:
      shared_ptr<vector<string>> telephone_ {};
    };

    class InstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceIds() = default ;
      InstanceIds(const InstanceIds &) = default ;
      InstanceIds(InstanceIds &&) = default ;
      InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIds() = default ;
      InstanceIds& operator=(const InstanceIds &) = default ;
      InstanceIds& operator=(InstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<vector<string>> instanceId_ {};
    };

    virtual bool empty() const override { return this->accountQuantity_ == nullptr
        && this->aliUid_ == nullptr && this->components_ == nullptr && this->couponPrice_ == nullptr && this->createdOn_ == nullptr && this->instanceIds_ == nullptr
        && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderType_ == nullptr && this->originalPrice_ == nullptr && this->paidOn_ == nullptr
        && this->payStatus_ == nullptr && this->paymentPrice_ == nullptr && this->periodType_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->productSkuCode_ == nullptr && this->quantity_ == nullptr && this->requestId_ == nullptr && this->supplierCompanyName_ == nullptr && this->supplierTelephones_ == nullptr
        && this->totalPrice_ == nullptr; };
    // accountQuantity Field Functions 
    bool hasAccountQuantity() const { return this->accountQuantity_ != nullptr;};
    void deleteAccountQuantity() { this->accountQuantity_ = nullptr;};
    inline int64_t getAccountQuantity() const { DARABONBA_PTR_GET_DEFAULT(accountQuantity_, 0L) };
    inline DescribeOrderResponseBody& setAccountQuantity(int64_t accountQuantity) { DARABONBA_PTR_SET_VALUE(accountQuantity_, accountQuantity) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeOrderResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline     const Darabonba::Json & getComponents() const { DARABONBA_GET(components_) };
    Darabonba::Json & getComponents() { DARABONBA_GET(components_) };
    inline DescribeOrderResponseBody& setComponents(const Darabonba::Json & components) { DARABONBA_SET_VALUE(components_, components) };
    inline DescribeOrderResponseBody& setComponents(Darabonba::Json && components) { DARABONBA_SET_RVALUE(components_, components) };


    // couponPrice Field Functions 
    bool hasCouponPrice() const { return this->couponPrice_ != nullptr;};
    void deleteCouponPrice() { this->couponPrice_ = nullptr;};
    inline float getCouponPrice() const { DARABONBA_PTR_GET_DEFAULT(couponPrice_, 0.0) };
    inline DescribeOrderResponseBody& setCouponPrice(float couponPrice) { DARABONBA_PTR_SET_VALUE(couponPrice_, couponPrice) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t getCreatedOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeOrderResponseBody& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const DescribeOrderResponseBody::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DescribeOrderResponseBody::InstanceIds) };
    inline DescribeOrderResponseBody::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, DescribeOrderResponseBody::InstanceIds) };
    inline DescribeOrderResponseBody& setInstanceIds(const DescribeOrderResponseBody::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeOrderResponseBody& setInstanceIds(DescribeOrderResponseBody::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeOrderResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline DescribeOrderResponseBody& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeOrderResponseBody& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeOrderResponseBody& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // paidOn Field Functions 
    bool hasPaidOn() const { return this->paidOn_ != nullptr;};
    void deletePaidOn() { this->paidOn_ = nullptr;};
    inline int64_t getPaidOn() const { DARABONBA_PTR_GET_DEFAULT(paidOn_, 0L) };
    inline DescribeOrderResponseBody& setPaidOn(int64_t paidOn) { DARABONBA_PTR_SET_VALUE(paidOn_, paidOn) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline DescribeOrderResponseBody& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // paymentPrice Field Functions 
    bool hasPaymentPrice() const { return this->paymentPrice_ != nullptr;};
    void deletePaymentPrice() { this->paymentPrice_ = nullptr;};
    inline float getPaymentPrice() const { DARABONBA_PTR_GET_DEFAULT(paymentPrice_, 0.0) };
    inline DescribeOrderResponseBody& setPaymentPrice(float paymentPrice) { DARABONBA_PTR_SET_VALUE(paymentPrice_, paymentPrice) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeOrderResponseBody& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeOrderResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeOrderResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string getProductSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeOrderResponseBody& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline DescribeOrderResponseBody& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierCompanyName Field Functions 
    bool hasSupplierCompanyName() const { return this->supplierCompanyName_ != nullptr;};
    void deleteSupplierCompanyName() { this->supplierCompanyName_ = nullptr;};
    inline string getSupplierCompanyName() const { DARABONBA_PTR_GET_DEFAULT(supplierCompanyName_, "") };
    inline DescribeOrderResponseBody& setSupplierCompanyName(string supplierCompanyName) { DARABONBA_PTR_SET_VALUE(supplierCompanyName_, supplierCompanyName) };


    // supplierTelephones Field Functions 
    bool hasSupplierTelephones() const { return this->supplierTelephones_ != nullptr;};
    void deleteSupplierTelephones() { this->supplierTelephones_ = nullptr;};
    inline const DescribeOrderResponseBody::SupplierTelephones & getSupplierTelephones() const { DARABONBA_PTR_GET_CONST(supplierTelephones_, DescribeOrderResponseBody::SupplierTelephones) };
    inline DescribeOrderResponseBody::SupplierTelephones getSupplierTelephones() { DARABONBA_PTR_GET(supplierTelephones_, DescribeOrderResponseBody::SupplierTelephones) };
    inline DescribeOrderResponseBody& setSupplierTelephones(const DescribeOrderResponseBody::SupplierTelephones & supplierTelephones) { DARABONBA_PTR_SET_VALUE(supplierTelephones_, supplierTelephones) };
    inline DescribeOrderResponseBody& setSupplierTelephones(DescribeOrderResponseBody::SupplierTelephones && supplierTelephones) { DARABONBA_PTR_SET_RVALUE(supplierTelephones_, supplierTelephones) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline float getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline DescribeOrderResponseBody& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    shared_ptr<int64_t> accountQuantity_ {};
    shared_ptr<int64_t> aliUid_ {};
    Darabonba::Json components_ {};
    shared_ptr<float> couponPrice_ {};
    shared_ptr<int64_t> createdOn_ {};
    shared_ptr<DescribeOrderResponseBody::InstanceIds> instanceIds_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> orderStatus_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<float> originalPrice_ {};
    shared_ptr<int64_t> paidOn_ {};
    shared_ptr<string> payStatus_ {};
    shared_ptr<float> paymentPrice_ {};
    shared_ptr<string> periodType_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> productSkuCode_ {};
    shared_ptr<int32_t> quantity_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> supplierCompanyName_ {};
    shared_ptr<DescribeOrderResponseBody::SupplierTelephones> supplierTelephones_ {};
    shared_ptr<float> totalPrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
