// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_ORDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderLineResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(createDate, createDate_);
      DARABONBA_PTR_TO_JSON(distributorId, distributorId_);
      DARABONBA_PTR_TO_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_TO_JSON(orderAmount, orderAmount_);
      DARABONBA_PTR_TO_JSON(orderClosedReason, orderClosedReason_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(orderLineList, orderLineList_);
      DARABONBA_PTR_TO_JSON(orderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createDate, createDate_);
      DARABONBA_PTR_FROM_JSON(distributorId, distributorId_);
      DARABONBA_PTR_FROM_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_FROM_JSON(orderAmount, orderAmount_);
      DARABONBA_PTR_FROM_JSON(orderClosedReason, orderClosedReason_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(orderLineList, orderLineList_);
      DARABONBA_PTR_FROM_JSON(orderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    OrderResult() = default ;
    OrderResult(const OrderResult &) = default ;
    OrderResult(OrderResult &&) = default ;
    OrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderResult() = default ;
    OrderResult& operator=(const OrderResult &) = default ;
    OrderResult& operator=(OrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && this->distributorId_ == nullptr && this->logisticsStatus_ == nullptr && this->orderAmount_ == nullptr && this->orderClosedReason_ == nullptr && this->orderId_ == nullptr
        && this->orderLineList_ == nullptr && this->orderStatus_ == nullptr && this->requestId_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline OrderResult& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // distributorId Field Functions 
    bool hasDistributorId() const { return this->distributorId_ != nullptr;};
    void deleteDistributorId() { this->distributorId_ = nullptr;};
    inline string getDistributorId() const { DARABONBA_PTR_GET_DEFAULT(distributorId_, "") };
    inline OrderResult& setDistributorId(string distributorId) { DARABONBA_PTR_SET_VALUE(distributorId_, distributorId) };


    // logisticsStatus Field Functions 
    bool hasLogisticsStatus() const { return this->logisticsStatus_ != nullptr;};
    void deleteLogisticsStatus() { this->logisticsStatus_ = nullptr;};
    inline string getLogisticsStatus() const { DARABONBA_PTR_GET_DEFAULT(logisticsStatus_, "") };
    inline OrderResult& setLogisticsStatus(string logisticsStatus) { DARABONBA_PTR_SET_VALUE(logisticsStatus_, logisticsStatus) };


    // orderAmount Field Functions 
    bool hasOrderAmount() const { return this->orderAmount_ != nullptr;};
    void deleteOrderAmount() { this->orderAmount_ = nullptr;};
    inline int64_t getOrderAmount() const { DARABONBA_PTR_GET_DEFAULT(orderAmount_, 0L) };
    inline OrderResult& setOrderAmount(int64_t orderAmount) { DARABONBA_PTR_SET_VALUE(orderAmount_, orderAmount) };


    // orderClosedReason Field Functions 
    bool hasOrderClosedReason() const { return this->orderClosedReason_ != nullptr;};
    void deleteOrderClosedReason() { this->orderClosedReason_ = nullptr;};
    inline string getOrderClosedReason() const { DARABONBA_PTR_GET_DEFAULT(orderClosedReason_, "") };
    inline OrderResult& setOrderClosedReason(string orderClosedReason) { DARABONBA_PTR_SET_VALUE(orderClosedReason_, orderClosedReason) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OrderResult& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderLineList Field Functions 
    bool hasOrderLineList() const { return this->orderLineList_ != nullptr;};
    void deleteOrderLineList() { this->orderLineList_ = nullptr;};
    inline const vector<OrderLineResult> & getOrderLineList() const { DARABONBA_PTR_GET_CONST(orderLineList_, vector<OrderLineResult>) };
    inline vector<OrderLineResult> getOrderLineList() { DARABONBA_PTR_GET(orderLineList_, vector<OrderLineResult>) };
    inline OrderResult& setOrderLineList(const vector<OrderLineResult> & orderLineList) { DARABONBA_PTR_SET_VALUE(orderLineList_, orderLineList) };
    inline OrderResult& setOrderLineList(vector<OrderLineResult> && orderLineList) { DARABONBA_PTR_SET_RVALUE(orderLineList_, orderLineList) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline OrderResult& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> createDate_ {};
    shared_ptr<string> distributorId_ {};
    shared_ptr<string> logisticsStatus_ {};
    shared_ptr<int64_t> orderAmount_ {};
    shared_ptr<string> orderClosedReason_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<vector<OrderLineResult>> orderLineList_ {};
    shared_ptr<string> orderStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
