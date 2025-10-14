// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAMULTIREFUNDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAMULTIREFUNDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataMultiRefundDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataMultiRefundDetails& obj) { 
      DARABONBA_PTR_TO_JSON(multi_refund_order_num, multiRefundOrderNum_);
      DARABONBA_PTR_TO_JSON(multi_refund_transaction_no, multiRefundTransactionNo_);
      DARABONBA_PTR_TO_JSON(passenger_multi_refund_details, passengerMultiRefundDetails_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataMultiRefundDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(multi_refund_order_num, multiRefundOrderNum_);
      DARABONBA_PTR_FROM_JSON(multi_refund_transaction_no, multiRefundTransactionNo_);
      DARABONBA_PTR_FROM_JSON(passenger_multi_refund_details, passengerMultiRefundDetails_);
    };
    RefundDetailResponseBodyDataMultiRefundDetails() = default ;
    RefundDetailResponseBodyDataMultiRefundDetails(const RefundDetailResponseBodyDataMultiRefundDetails &) = default ;
    RefundDetailResponseBodyDataMultiRefundDetails(RefundDetailResponseBodyDataMultiRefundDetails &&) = default ;
    RefundDetailResponseBodyDataMultiRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataMultiRefundDetails() = default ;
    RefundDetailResponseBodyDataMultiRefundDetails& operator=(const RefundDetailResponseBodyDataMultiRefundDetails &) = default ;
    RefundDetailResponseBodyDataMultiRefundDetails& operator=(RefundDetailResponseBodyDataMultiRefundDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multiRefundOrderNum_ == nullptr
        && return this->multiRefundTransactionNo_ == nullptr && return this->passengerMultiRefundDetails_ == nullptr; };
    // multiRefundOrderNum Field Functions 
    bool hasMultiRefundOrderNum() const { return this->multiRefundOrderNum_ != nullptr;};
    void deleteMultiRefundOrderNum() { this->multiRefundOrderNum_ = nullptr;};
    inline int64_t multiRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(multiRefundOrderNum_, 0L) };
    inline RefundDetailResponseBodyDataMultiRefundDetails& setMultiRefundOrderNum(int64_t multiRefundOrderNum) { DARABONBA_PTR_SET_VALUE(multiRefundOrderNum_, multiRefundOrderNum) };


    // multiRefundTransactionNo Field Functions 
    bool hasMultiRefundTransactionNo() const { return this->multiRefundTransactionNo_ != nullptr;};
    void deleteMultiRefundTransactionNo() { this->multiRefundTransactionNo_ = nullptr;};
    inline string multiRefundTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(multiRefundTransactionNo_, "") };
    inline RefundDetailResponseBodyDataMultiRefundDetails& setMultiRefundTransactionNo(string multiRefundTransactionNo) { DARABONBA_PTR_SET_VALUE(multiRefundTransactionNo_, multiRefundTransactionNo) };


    // passengerMultiRefundDetails Field Functions 
    bool hasPassengerMultiRefundDetails() const { return this->passengerMultiRefundDetails_ != nullptr;};
    void deletePassengerMultiRefundDetails() { this->passengerMultiRefundDetails_ = nullptr;};
    inline const vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails> & passengerMultiRefundDetails() const { DARABONBA_PTR_GET_CONST(passengerMultiRefundDetails_, vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails>) };
    inline vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails> passengerMultiRefundDetails() { DARABONBA_PTR_GET(passengerMultiRefundDetails_, vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails>) };
    inline RefundDetailResponseBodyDataMultiRefundDetails& setPassengerMultiRefundDetails(const vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails> & passengerMultiRefundDetails) { DARABONBA_PTR_SET_VALUE(passengerMultiRefundDetails_, passengerMultiRefundDetails) };
    inline RefundDetailResponseBodyDataMultiRefundDetails& setPassengerMultiRefundDetails(vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails> && passengerMultiRefundDetails) { DARABONBA_PTR_SET_RVALUE(passengerMultiRefundDetails_, passengerMultiRefundDetails) };


  protected:
    // supplementary refund order number
    std::shared_ptr<int64_t> multiRefundOrderNum_ = nullptr;
    // transaction number of the supplementary refund order
    std::shared_ptr<string> multiRefundTransactionNo_ = nullptr;
    // supplementary refund details in passenger dimension
    std::shared_ptr<vector<Models::RefundDetailResponseBodyDataMultiRefundDetailsPassengerMultiRefundDetails>> passengerMultiRefundDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
