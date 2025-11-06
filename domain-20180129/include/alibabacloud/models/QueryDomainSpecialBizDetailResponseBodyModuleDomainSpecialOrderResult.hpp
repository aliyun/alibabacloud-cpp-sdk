// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULEDOMAINSPECIALORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULEDOMAINSPECIALORDERRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(OrderAmount, orderAmount_);
      DARABONBA_PTR_TO_JSON(OrderCurrency, orderCurrency_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderTime, orderTime_);
      DARABONBA_PTR_TO_JSON(OrderYear, orderYear_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(SubOrderId, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(OrderAmount, orderAmount_);
      DARABONBA_PTR_FROM_JSON(OrderCurrency, orderCurrency_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderTime, orderTime_);
      DARABONBA_PTR_FROM_JSON(OrderYear, orderYear_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(SubOrderId, subOrderId_);
    };
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult() = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult(const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult(QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult &&) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult() = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& operator=(const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& operator=(QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->orderAmount_ == nullptr && return this->orderCurrency_ == nullptr && return this->orderId_ == nullptr && return this->orderStatus_ == nullptr && return this->orderTime_ == nullptr
        && return this->orderYear_ == nullptr && return this->saleId_ == nullptr && return this->subOrderId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // orderAmount Field Functions 
    bool hasOrderAmount() const { return this->orderAmount_ != nullptr;};
    void deleteOrderAmount() { this->orderAmount_ = nullptr;};
    inline double orderAmount() const { DARABONBA_PTR_GET_DEFAULT(orderAmount_, 0.0) };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderAmount(double orderAmount) { DARABONBA_PTR_SET_VALUE(orderAmount_, orderAmount) };


    // orderCurrency Field Functions 
    bool hasOrderCurrency() const { return this->orderCurrency_ != nullptr;};
    void deleteOrderCurrency() { this->orderCurrency_ = nullptr;};
    inline string orderCurrency() const { DARABONBA_PTR_GET_DEFAULT(orderCurrency_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderCurrency(string orderCurrency) { DARABONBA_PTR_SET_VALUE(orderCurrency_, orderCurrency) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderTime Field Functions 
    bool hasOrderTime() const { return this->orderTime_ != nullptr;};
    void deleteOrderTime() { this->orderTime_ = nullptr;};
    inline string orderTime() const { DARABONBA_PTR_GET_DEFAULT(orderTime_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderTime(string orderTime) { DARABONBA_PTR_SET_VALUE(orderTime_, orderTime) };


    // orderYear Field Functions 
    bool hasOrderYear() const { return this->orderYear_ != nullptr;};
    void deleteOrderYear() { this->orderYear_ = nullptr;};
    inline int32_t orderYear() const { DARABONBA_PTR_GET_DEFAULT(orderYear_, 0) };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setOrderYear(int32_t orderYear) { DARABONBA_PTR_SET_VALUE(orderYear_, orderYear) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string saleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    // The cost type.
    std::shared_ptr<string> actionType_ = nullptr;
    // The amount of the order.
    std::shared_ptr<double> orderAmount_ = nullptr;
    // The currency.
    std::shared_ptr<string> orderCurrency_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The order status.
    std::shared_ptr<string> orderStatus_ = nullptr;
    // The time when the order was placed.
    std::shared_ptr<string> orderTime_ = nullptr;
    // The validity period.
    std::shared_ptr<int32_t> orderYear_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> saleId_ = nullptr;
    // The suborder ID.
    std::shared_ptr<string> subOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
