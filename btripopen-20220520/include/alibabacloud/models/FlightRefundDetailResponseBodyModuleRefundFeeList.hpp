// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODYMODULEREFUNDFEELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODYMODULEREFUNDFEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundDetailResponseBodyModuleRefundFeeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailResponseBodyModuleRefundFeeList& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailResponseBodyModuleRefundFeeList& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    FlightRefundDetailResponseBodyModuleRefundFeeList() = default ;
    FlightRefundDetailResponseBodyModuleRefundFeeList(const FlightRefundDetailResponseBodyModuleRefundFeeList &) = default ;
    FlightRefundDetailResponseBodyModuleRefundFeeList(FlightRefundDetailResponseBodyModuleRefundFeeList &&) = default ;
    FlightRefundDetailResponseBodyModuleRefundFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailResponseBodyModuleRefundFeeList() = default ;
    FlightRefundDetailResponseBodyModuleRefundFeeList& operator=(const FlightRefundDetailResponseBodyModuleRefundFeeList &) = default ;
    FlightRefundDetailResponseBodyModuleRefundFeeList& operator=(FlightRefundDetailResponseBodyModuleRefundFeeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayTradeNo_ != nullptr
        && this->refundFee_ != nullptr && this->refundPrice_ != nullptr && this->status_ != nullptr; };
    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline FlightRefundDetailResponseBodyModuleRefundFeeList& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline FlightRefundDetailResponseBodyModuleRefundFeeList& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline FlightRefundDetailResponseBodyModuleRefundFeeList& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline FlightRefundDetailResponseBodyModuleRefundFeeList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<int64_t> refundFee_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
