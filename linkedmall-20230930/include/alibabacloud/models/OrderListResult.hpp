// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResult& obj) { 
      DARABONBA_PTR_TO_JSON(orderList, orderList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(orderList, orderList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    OrderListResult() = default ;
    OrderListResult(const OrderListResult &) = default ;
    OrderListResult(OrderListResult &&) = default ;
    OrderListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResult() = default ;
    OrderListResult& operator=(const OrderListResult &) = default ;
    OrderListResult& operator=(OrderListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<OrderResult> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<OrderResult>) };
    inline vector<OrderResult> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<OrderResult>) };
    inline OrderListResult& setOrderList(const vector<OrderResult> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline OrderListResult& setOrderList(vector<OrderResult> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline OrderListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<OrderResult>> orderList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
