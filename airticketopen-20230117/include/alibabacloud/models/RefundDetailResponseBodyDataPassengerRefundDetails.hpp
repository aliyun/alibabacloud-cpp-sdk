// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefundDetailResponseBodyDataPassengerRefundDetailsPassenger.hpp>
#include <alibabacloud/models/RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataPassengerRefundDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataPassengerRefundDetails& obj) { 
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataPassengerRefundDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
    };
    RefundDetailResponseBodyDataPassengerRefundDetails() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetails(const RefundDetailResponseBodyDataPassengerRefundDetails &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetails(RefundDetailResponseBodyDataPassengerRefundDetails &&) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataPassengerRefundDetails() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetails& operator=(const RefundDetailResponseBodyDataPassengerRefundDetails &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetails& operator=(RefundDetailResponseBodyDataPassengerRefundDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passenger_ == nullptr
        && return this->refundFee_ == nullptr; };
    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger) };
    inline Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger) };
    inline RefundDetailResponseBodyDataPassengerRefundDetails& setPassenger(const Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline RefundDetailResponseBodyDataPassengerRefundDetails& setPassenger(Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline const Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee & refundFee() const { DARABONBA_PTR_GET_CONST(refundFee_, Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee) };
    inline Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee refundFee() { DARABONBA_PTR_GET(refundFee_, Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee) };
    inline RefundDetailResponseBodyDataPassengerRefundDetails& setRefundFee(const Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee & refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };
    inline RefundDetailResponseBodyDataPassengerRefundDetails& setRefundFee(Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee && refundFee) { DARABONBA_PTR_SET_RVALUE(refundFee_, refundFee) };


  protected:
    // information of the passenger applying for a refund
    std::shared_ptr<Models::RefundDetailResponseBodyDataPassengerRefundDetailsPassenger> passenger_ = nullptr;
    // details of the refund fee
    std::shared_ptr<Models::RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee> refundFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
