// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderRefundDetailQueryResponseBodyModuleRefundDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class OrderRefundDetailQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRefundDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(refund_details, refundDetails_);
      DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRefundDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(refund_details, refundDetails_);
      DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
    };
    OrderRefundDetailQueryResponseBodyModule() = default ;
    OrderRefundDetailQueryResponseBodyModule(const OrderRefundDetailQueryResponseBodyModule &) = default ;
    OrderRefundDetailQueryResponseBodyModule(OrderRefundDetailQueryResponseBodyModule &&) = default ;
    OrderRefundDetailQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRefundDetailQueryResponseBodyModule() = default ;
    OrderRefundDetailQueryResponseBodyModule& operator=(const OrderRefundDetailQueryResponseBodyModule &) = default ;
    OrderRefundDetailQueryResponseBodyModule& operator=(OrderRefundDetailQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->refundDetails_ != nullptr && this->totalAmount_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OrderRefundDetailQueryResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // refundDetails Field Functions 
    bool hasRefundDetails() const { return this->refundDetails_ != nullptr;};
    void deleteRefundDetails() { this->refundDetails_ = nullptr;};
    inline const vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails> & refundDetails() const { DARABONBA_PTR_GET_CONST(refundDetails_, vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails>) };
    inline vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails> refundDetails() { DARABONBA_PTR_GET(refundDetails_, vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails>) };
    inline OrderRefundDetailQueryResponseBodyModule& setRefundDetails(const vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails> & refundDetails) { DARABONBA_PTR_SET_VALUE(refundDetails_, refundDetails) };
    inline OrderRefundDetailQueryResponseBodyModule& setRefundDetails(vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails> && refundDetails) { DARABONBA_PTR_SET_RVALUE(refundDetails_, refundDetails) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline int64_t totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
    inline OrderRefundDetailQueryResponseBodyModule& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<vector<Models::OrderRefundDetailQueryResponseBodyModuleRefundDetails>> refundDetails_ = nullptr;
    std::shared_ptr<int64_t> totalAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
