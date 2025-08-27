// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(refund_money, refundMoney_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refund_money, refundMoney_);
    };
    FlightRefundApplyResponseBodyModule() = default ;
    FlightRefundApplyResponseBodyModule(const FlightRefundApplyResponseBodyModule &) = default ;
    FlightRefundApplyResponseBodyModule(FlightRefundApplyResponseBodyModule &&) = default ;
    FlightRefundApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundApplyResponseBodyModule() = default ;
    FlightRefundApplyResponseBodyModule& operator=(const FlightRefundApplyResponseBodyModule &) = default ;
    FlightRefundApplyResponseBodyModule& operator=(FlightRefundApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disOrderId_ != nullptr
        && this->disSubOrderId_ != nullptr && this->refundApplyId_ != nullptr && this->refundFee_ != nullptr && this->refundMoney_ != nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundApplyResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline FlightRefundApplyResponseBodyModule& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline int64_t refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
    inline FlightRefundApplyResponseBodyModule& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline int64_t refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
    inline FlightRefundApplyResponseBodyModule& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundMoney Field Functions 
    bool hasRefundMoney() const { return this->refundMoney_ != nullptr;};
    void deleteRefundMoney() { this->refundMoney_ = nullptr;};
    inline int64_t refundMoney() const { DARABONBA_PTR_GET_DEFAULT(refundMoney_, 0L) };
    inline FlightRefundApplyResponseBodyModule& setRefundMoney(int64_t refundMoney) { DARABONBA_PTR_SET_VALUE(refundMoney_, refundMoney) };


  protected:
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<int64_t> refundApplyId_ = nullptr;
    std::shared_ptr<int64_t> refundFee_ = nullptr;
    std::shared_ptr<int64_t> refundMoney_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
