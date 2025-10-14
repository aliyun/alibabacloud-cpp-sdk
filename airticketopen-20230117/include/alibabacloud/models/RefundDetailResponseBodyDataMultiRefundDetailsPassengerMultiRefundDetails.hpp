// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAMULTIREFUNDDETAILSPASSENGERMULTIREFUNDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAMULTIREFUNDDETAILSPASSENGERMULTIREFUNDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_refund_fee, changeOrderRefundFee_);
      DARABONBA_PTR_TO_JSON(original_order_refund_fee, originalOrderRefundFee_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_refund_fee, changeOrderRefundFee_);
      DARABONBA_PTR_FROM_JSON(original_order_refund_fee, originalOrderRefundFee_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
    };
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails() = default ;
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails(const RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails &) = default ;
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails(RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails &&) = default ;
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails() = default ;
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& operator=(const RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails &) = default ;
    RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& operator=(RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderRefundFee_ == nullptr
        && return this->originalOrderRefundFee_ == nullptr && return this->passenger_ == nullptr; };
    // changeOrderRefundFee Field Functions 
    bool hasChangeOrderRefundFee() const { return this->changeOrderRefundFee_ != nullptr;};
    void deleteChangeOrderRefundFee() { this->changeOrderRefundFee_ = nullptr;};
    inline double changeOrderRefundFee() const { DARABONBA_PTR_GET_DEFAULT(changeOrderRefundFee_, 0.0) };
    inline RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& setChangeOrderRefundFee(double changeOrderRefundFee) { DARABONBA_PTR_SET_VALUE(changeOrderRefundFee_, changeOrderRefundFee) };


    // originalOrderRefundFee Field Functions 
    bool hasOriginalOrderRefundFee() const { return this->originalOrderRefundFee_ != nullptr;};
    void deleteOriginalOrderRefundFee() { this->originalOrderRefundFee_ = nullptr;};
    inline double originalOrderRefundFee() const { DARABONBA_PTR_GET_DEFAULT(originalOrderRefundFee_, 0.0) };
    inline RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& setOriginalOrderRefundFee(double originalOrderRefundFee) { DARABONBA_PTR_SET_VALUE(originalOrderRefundFee_, originalOrderRefundFee) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger) };
    inline Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger) };
    inline RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& setPassenger(const Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails& setPassenger(Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


  protected:
    // amount of the supplementary refund for the change order
    std::shared_ptr<double> changeOrderRefundFee_ = nullptr;
    // amount of the supplementary refund for the original order
    std::shared_ptr<double> originalOrderRefundFee_ = nullptr;
    // passenger for the refund
    std::shared_ptr<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetailsPassenger> passenger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
