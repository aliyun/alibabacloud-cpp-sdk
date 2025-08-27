// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundDetailV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
    };
    FlightRefundDetailV2Request() = default ;
    FlightRefundDetailV2Request(const FlightRefundDetailV2Request &) = default ;
    FlightRefundDetailV2Request(FlightRefundDetailV2Request &&) = default ;
    FlightRefundDetailV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailV2Request() = default ;
    FlightRefundDetailV2Request& operator=(const FlightRefundDetailV2Request &) = default ;
    FlightRefundDetailV2Request& operator=(FlightRefundDetailV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outRefundApplyId_ != nullptr && this->refundApplyId_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightRefundDetailV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightRefundDetailV2Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightRefundDetailV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline FlightRefundDetailV2Request& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline FlightRefundDetailV2Request& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outRefundApplyId_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
