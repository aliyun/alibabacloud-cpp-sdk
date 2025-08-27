// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
    };
    IntlFlightRefundDetailRequest() = default ;
    IntlFlightRefundDetailRequest(const IntlFlightRefundDetailRequest &) = default ;
    IntlFlightRefundDetailRequest(IntlFlightRefundDetailRequest &&) = default ;
    IntlFlightRefundDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailRequest() = default ;
    IntlFlightRefundDetailRequest& operator=(const IntlFlightRefundDetailRequest &) = default ;
    IntlFlightRefundDetailRequest& operator=(IntlFlightRefundDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outRefundApplyId_ != nullptr && this->refundApplyId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightRefundDetailRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightRefundDetailRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundDetailRequest& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline IntlFlightRefundDetailRequest& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outRefundApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> refundApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
