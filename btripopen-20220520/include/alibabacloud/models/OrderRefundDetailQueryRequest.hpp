// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class OrderRefundDetailQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRefundDetailQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRefundDetailQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    OrderRefundDetailQueryRequest() = default ;
    OrderRefundDetailQueryRequest(const OrderRefundDetailQueryRequest &) = default ;
    OrderRefundDetailQueryRequest(OrderRefundDetailQueryRequest &&) = default ;
    OrderRefundDetailQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRefundDetailQueryRequest() = default ;
    OrderRefundDetailQueryRequest& operator=(const OrderRefundDetailQueryRequest &) = default ;
    OrderRefundDetailQueryRequest& operator=(OrderRefundDetailQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cooperatorOrderId_ != nullptr
        && this->orderId_ != nullptr; };
    // cooperatorOrderId Field Functions 
    bool hasCooperatorOrderId() const { return this->cooperatorOrderId_ != nullptr;};
    void deleteCooperatorOrderId() { this->cooperatorOrderId_ = nullptr;};
    inline string cooperatorOrderId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorOrderId_, "") };
    inline OrderRefundDetailQueryRequest& setCooperatorOrderId(string cooperatorOrderId) { DARABONBA_PTR_SET_VALUE(cooperatorOrderId_, cooperatorOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OrderRefundDetailQueryRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cooperatorOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
