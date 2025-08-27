// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList.hpp>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModulePassengerList.hpp>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo.hpp>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModuleSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(passenge_refund_fee_detail_list, passengeRefundFeeDetailList_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(refund_order_info, refundOrderInfo_);
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(passenge_refund_fee_detail_list, passengeRefundFeeDetailList_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(refund_order_info, refundOrderInfo_);
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    IntlFlightRefundDetailResponseBodyModule() = default ;
    IntlFlightRefundDetailResponseBodyModule(const IntlFlightRefundDetailResponseBodyModule &) = default ;
    IntlFlightRefundDetailResponseBodyModule(IntlFlightRefundDetailResponseBodyModule &&) = default ;
    IntlFlightRefundDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModule() = default ;
    IntlFlightRefundDetailResponseBodyModule& operator=(const IntlFlightRefundDetailResponseBodyModule &) = default ;
    IntlFlightRefundDetailResponseBodyModule& operator=(IntlFlightRefundDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengeRefundFeeDetailList_ != nullptr
        && this->passengerList_ != nullptr && this->refundOrderInfo_ != nullptr && this->segmentList_ != nullptr; };
    // passengeRefundFeeDetailList Field Functions 
    bool hasPassengeRefundFeeDetailList() const { return this->passengeRefundFeeDetailList_ != nullptr;};
    void deletePassengeRefundFeeDetailList() { this->passengeRefundFeeDetailList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList> & passengeRefundFeeDetailList() const { DARABONBA_PTR_GET_CONST(passengeRefundFeeDetailList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList>) };
    inline vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList> passengeRefundFeeDetailList() { DARABONBA_PTR_GET(passengeRefundFeeDetailList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList>) };
    inline IntlFlightRefundDetailResponseBodyModule& setPassengeRefundFeeDetailList(const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList> & passengeRefundFeeDetailList) { DARABONBA_PTR_SET_VALUE(passengeRefundFeeDetailList_, passengeRefundFeeDetailList) };
    inline IntlFlightRefundDetailResponseBodyModule& setPassengeRefundFeeDetailList(vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList> && passengeRefundFeeDetailList) { DARABONBA_PTR_SET_RVALUE(passengeRefundFeeDetailList_, passengeRefundFeeDetailList) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList>) };
    inline vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList>) };
    inline IntlFlightRefundDetailResponseBodyModule& setPassengerList(const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightRefundDetailResponseBodyModule& setPassengerList(vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // refundOrderInfo Field Functions 
    bool hasRefundOrderInfo() const { return this->refundOrderInfo_ != nullptr;};
    void deleteRefundOrderInfo() { this->refundOrderInfo_ = nullptr;};
    inline const Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo & refundOrderInfo() const { DARABONBA_PTR_GET_CONST(refundOrderInfo_, Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo) };
    inline Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo refundOrderInfo() { DARABONBA_PTR_GET(refundOrderInfo_, Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo) };
    inline IntlFlightRefundDetailResponseBodyModule& setRefundOrderInfo(const Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo & refundOrderInfo) { DARABONBA_PTR_SET_VALUE(refundOrderInfo_, refundOrderInfo) };
    inline IntlFlightRefundDetailResponseBodyModule& setRefundOrderInfo(Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo && refundOrderInfo) { DARABONBA_PTR_SET_RVALUE(refundOrderInfo_, refundOrderInfo) };


    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList>) };
    inline vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList>) };
    inline IntlFlightRefundDetailResponseBodyModule& setSegmentList(const vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline IntlFlightRefundDetailResponseBodyModule& setSegmentList(vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList>> passengeRefundFeeDetailList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundDetailResponseBodyModulePassengerList>> passengerList_ = nullptr;
    std::shared_ptr<Models::IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo> refundOrderInfo_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundDetailResponseBodyModuleSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
