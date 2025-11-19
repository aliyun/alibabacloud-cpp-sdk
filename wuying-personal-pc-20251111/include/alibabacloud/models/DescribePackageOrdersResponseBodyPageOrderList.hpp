// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSRESPONSEBODYPAGEORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEORDERSRESPONSEBODYPAGEORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribePackageOrdersResponseBodyPageOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageOrdersResponseBodyPageOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(CreatorAliUid, creatorAliUid_);
      DARABONBA_PTR_TO_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(GmtCanceledTime, gmtCanceledTime_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtPaidTime, gmtPaidTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageOrdersResponseBodyPageOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(CreatorAliUid, creatorAliUid_);
      DARABONBA_PTR_FROM_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(GmtCanceledTime, gmtCanceledTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtPaidTime, gmtPaidTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePackageOrdersResponseBodyPageOrderList() = default ;
    DescribePackageOrdersResponseBodyPageOrderList(const DescribePackageOrdersResponseBodyPageOrderList &) = default ;
    DescribePackageOrdersResponseBodyPageOrderList(DescribePackageOrdersResponseBodyPageOrderList &&) = default ;
    DescribePackageOrdersResponseBodyPageOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageOrdersResponseBodyPageOrderList() = default ;
    DescribePackageOrdersResponseBodyPageOrderList& operator=(const DescribePackageOrdersResponseBodyPageOrderList &) = default ;
    DescribePackageOrdersResponseBodyPageOrderList& operator=(DescribePackageOrdersResponseBodyPageOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->creatorAliUid_ == nullptr && return this->deliveryAddress_ == nullptr && return this->desktopId_ == nullptr && return this->gmtCanceledTime_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtPaidTime_ == nullptr && return this->instanceId_ == nullptr && return this->orderId_ == nullptr && return this->orderStatus_ == nullptr && return this->orderType_ == nullptr
        && return this->productCode_ == nullptr && return this->productSkuCode_ == nullptr && return this->productType_ == nullptr && return this->tradePrice_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribePackageOrdersResponseBodyPageOrderList& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // creatorAliUid Field Functions 
    bool hasCreatorAliUid() const { return this->creatorAliUid_ != nullptr;};
    void deleteCreatorAliUid() { this->creatorAliUid_ = nullptr;};
    inline int64_t creatorAliUid() const { DARABONBA_PTR_GET_DEFAULT(creatorAliUid_, 0L) };
    inline DescribePackageOrdersResponseBodyPageOrderList& setCreatorAliUid(int64_t creatorAliUid) { DARABONBA_PTR_SET_VALUE(creatorAliUid_, creatorAliUid) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline string deliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // gmtCanceledTime Field Functions 
    bool hasGmtCanceledTime() const { return this->gmtCanceledTime_ != nullptr;};
    void deleteGmtCanceledTime() { this->gmtCanceledTime_ = nullptr;};
    inline string gmtCanceledTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCanceledTime_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setGmtCanceledTime(string gmtCanceledTime) { DARABONBA_PTR_SET_VALUE(gmtCanceledTime_, gmtCanceledTime) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtPaidTime Field Functions 
    bool hasGmtPaidTime() const { return this->gmtPaidTime_ != nullptr;};
    void deleteGmtPaidTime() { this->gmtPaidTime_ = nullptr;};
    inline string gmtPaidTime() const { DARABONBA_PTR_GET_DEFAULT(gmtPaidTime_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setGmtPaidTime(string gmtPaidTime) { DARABONBA_PTR_SET_VALUE(gmtPaidTime_, gmtPaidTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string productSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline string tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, "") };
    inline DescribePackageOrdersResponseBodyPageOrderList& setTradePrice(string tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<int64_t> creatorAliUid_ = nullptr;
    std::shared_ptr<string> deliveryAddress_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> gmtCanceledTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> gmtPaidTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> orderStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productSkuCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
