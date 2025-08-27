// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModuleBaggageRule.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModuleJourneyList.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModuleOriginJourneyList.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePassengerList.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePassengerTicketList.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePriceInfo.hpp>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModuleRefundChangeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
      DARABONBA_PTR_TO_JSON(close_time, closeTime_);
      DARABONBA_PTR_TO_JSON(close_type, closeType_);
      DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(origin_journey_list, originJourneyList_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(passenger_price_info_list, passengerPriceInfoList_);
      DARABONBA_PTR_TO_JSON(passenger_ticket_list, passengerTicketList_);
      DARABONBA_PTR_TO_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(price_info, priceInfo_);
      DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_desc, reShopReasonDesc_);
      DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success_time, successTime_);
      DARABONBA_PTR_TO_JSON(user_intention_memo, userIntentionMemo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
      DARABONBA_PTR_FROM_JSON(close_time, closeTime_);
      DARABONBA_PTR_FROM_JSON(close_type, closeType_);
      DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(origin_journey_list, originJourneyList_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(passenger_price_info_list, passengerPriceInfoList_);
      DARABONBA_PTR_FROM_JSON(passenger_ticket_list, passengerTicketList_);
      DARABONBA_PTR_FROM_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(price_info, priceInfo_);
      DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_code, reShopReasonCode_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_desc, reShopReasonDesc_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success_time, successTime_);
      DARABONBA_PTR_FROM_JSON(user_intention_memo, userIntentionMemo_);
    };
    IntlFlightReShopDetailResponseBodyModule() = default ;
    IntlFlightReShopDetailResponseBodyModule(const IntlFlightReShopDetailResponseBodyModule &) = default ;
    IntlFlightReShopDetailResponseBodyModule(IntlFlightReShopDetailResponseBodyModule &&) = default ;
    IntlFlightReShopDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModule() = default ;
    IntlFlightReShopDetailResponseBodyModule& operator=(const IntlFlightReShopDetailResponseBodyModule &) = default ;
    IntlFlightReShopDetailResponseBodyModule& operator=(IntlFlightReShopDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->closeReason_ != nullptr && this->closeTime_ != nullptr && this->closeType_ != nullptr && this->journeyList_ != nullptr && this->orderId_ != nullptr
        && this->originJourneyList_ != nullptr && this->outOrderId_ != nullptr && this->outReShopApplyId_ != nullptr && this->passengerList_ != nullptr && this->passengerPriceInfoList_ != nullptr
        && this->passengerTicketList_ != nullptr && this->payLatestTime_ != nullptr && this->payStatus_ != nullptr && this->priceInfo_ != nullptr && this->reShopApplyId_ != nullptr
        && this->reShopReasonCode_ != nullptr && this->reShopReasonDesc_ != nullptr && this->refundChangeRule_ != nullptr && this->status_ != nullptr && this->successTime_ != nullptr
        && this->userIntentionMemo_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline const Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule & baggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule) };
    inline Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule baggageRule() { DARABONBA_PTR_GET(baggageRule_, Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule) };
    inline IntlFlightReShopDetailResponseBodyModule& setBaggageRule(const Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
    inline IntlFlightReShopDetailResponseBodyModule& setBaggageRule(Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


    // closeReason Field Functions 
    bool hasCloseReason() const { return this->closeReason_ != nullptr;};
    void deleteCloseReason() { this->closeReason_ = nullptr;};
    inline string closeReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


    // closeTime Field Functions 
    bool hasCloseTime() const { return this->closeTime_ != nullptr;};
    void deleteCloseTime() { this->closeTime_ = nullptr;};
    inline string closeTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setCloseTime(string closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


    // closeType Field Functions 
    bool hasCloseType() const { return this->closeType_ != nullptr;};
    void deleteCloseType() { this->closeType_ = nullptr;};
    inline int32_t closeType() const { DARABONBA_PTR_GET_DEFAULT(closeType_, 0) };
    inline IntlFlightReShopDetailResponseBodyModule& setCloseType(int32_t closeType) { DARABONBA_PTR_SET_VALUE(closeType_, closeType) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList>) };
    inline IntlFlightReShopDetailResponseBodyModule& setJourneyList(const vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline IntlFlightReShopDetailResponseBodyModule& setJourneyList(vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModule& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // originJourneyList Field Functions 
    bool hasOriginJourneyList() const { return this->originJourneyList_ != nullptr;};
    void deleteOriginJourneyList() { this->originJourneyList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList> & originJourneyList() const { DARABONBA_PTR_GET_CONST(originJourneyList_, vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList> originJourneyList() { DARABONBA_PTR_GET(originJourneyList_, vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList>) };
    inline IntlFlightReShopDetailResponseBodyModule& setOriginJourneyList(const vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList> & originJourneyList) { DARABONBA_PTR_SET_VALUE(originJourneyList_, originJourneyList) };
    inline IntlFlightReShopDetailResponseBodyModule& setOriginJourneyList(vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList> && originJourneyList) { DARABONBA_PTR_SET_RVALUE(originJourneyList_, originJourneyList) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string outReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList>) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerList(const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerList(vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // passengerPriceInfoList Field Functions 
    bool hasPassengerPriceInfoList() const { return this->passengerPriceInfoList_ != nullptr;};
    void deletePassengerPriceInfoList() { this->passengerPriceInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList> & passengerPriceInfoList() const { DARABONBA_PTR_GET_CONST(passengerPriceInfoList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList> passengerPriceInfoList() { DARABONBA_PTR_GET(passengerPriceInfoList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList>) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerPriceInfoList(const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList> & passengerPriceInfoList) { DARABONBA_PTR_SET_VALUE(passengerPriceInfoList_, passengerPriceInfoList) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerPriceInfoList(vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList> && passengerPriceInfoList) { DARABONBA_PTR_SET_RVALUE(passengerPriceInfoList_, passengerPriceInfoList) };


    // passengerTicketList Field Functions 
    bool hasPassengerTicketList() const { return this->passengerTicketList_ != nullptr;};
    void deletePassengerTicketList() { this->passengerTicketList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList> & passengerTicketList() const { DARABONBA_PTR_GET_CONST(passengerTicketList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList> passengerTicketList() { DARABONBA_PTR_GET(passengerTicketList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList>) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerTicketList(const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList> & passengerTicketList) { DARABONBA_PTR_SET_VALUE(passengerTicketList_, passengerTicketList) };
    inline IntlFlightReShopDetailResponseBodyModule& setPassengerTicketList(vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList> && passengerTicketList) { DARABONBA_PTR_SET_RVALUE(passengerTicketList_, passengerTicketList) };


    // payLatestTime Field Functions 
    bool hasPayLatestTime() const { return this->payLatestTime_ != nullptr;};
    void deletePayLatestTime() { this->payLatestTime_ = nullptr;};
    inline string payLatestTime() const { DARABONBA_PTR_GET_DEFAULT(payLatestTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setPayLatestTime(string payLatestTime) { DARABONBA_PTR_SET_VALUE(payLatestTime_, payLatestTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline IntlFlightReShopDetailResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const Models::IntlFlightReShopDetailResponseBodyModulePriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, Models::IntlFlightReShopDetailResponseBodyModulePriceInfo) };
    inline Models::IntlFlightReShopDetailResponseBodyModulePriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, Models::IntlFlightReShopDetailResponseBodyModulePriceInfo) };
    inline IntlFlightReShopDetailResponseBodyModule& setPriceInfo(const Models::IntlFlightReShopDetailResponseBodyModulePriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline IntlFlightReShopDetailResponseBodyModule& setPriceInfo(Models::IntlFlightReShopDetailResponseBodyModulePriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // reShopApplyId Field Functions 
    bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
    void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
    inline int64_t reShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModule& setReShopApplyId(int64_t reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


    // reShopReasonCode Field Functions 
    bool hasReShopReasonCode() const { return this->reShopReasonCode_ != nullptr;};
    void deleteReShopReasonCode() { this->reShopReasonCode_ = nullptr;};
    inline string reShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonCode_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setReShopReasonCode(string reShopReasonCode) { DARABONBA_PTR_SET_VALUE(reShopReasonCode_, reShopReasonCode) };


    // reShopReasonDesc Field Functions 
    bool hasReShopReasonDesc() const { return this->reShopReasonDesc_ != nullptr;};
    void deleteReShopReasonDesc() { this->reShopReasonDesc_ = nullptr;};
    inline string reShopReasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reShopReasonDesc_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setReShopReasonDesc(string reShopReasonDesc) { DARABONBA_PTR_SET_VALUE(reShopReasonDesc_, reShopReasonDesc) };


    // refundChangeRule Field Functions 
    bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
    void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
    inline const Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule & refundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule) };
    inline Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule refundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule) };
    inline IntlFlightReShopDetailResponseBodyModule& setRefundChangeRule(const Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
    inline IntlFlightReShopDetailResponseBodyModule& setRefundChangeRule(Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline IntlFlightReShopDetailResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successTime Field Functions 
    bool hasSuccessTime() const { return this->successTime_ != nullptr;};
    void deleteSuccessTime() { this->successTime_ = nullptr;};
    inline string successTime() const { DARABONBA_PTR_GET_DEFAULT(successTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setSuccessTime(string successTime) { DARABONBA_PTR_SET_VALUE(successTime_, successTime) };


    // userIntentionMemo Field Functions 
    bool hasUserIntentionMemo() const { return this->userIntentionMemo_ != nullptr;};
    void deleteUserIntentionMemo() { this->userIntentionMemo_ = nullptr;};
    inline string userIntentionMemo() const { DARABONBA_PTR_GET_DEFAULT(userIntentionMemo_, "") };
    inline IntlFlightReShopDetailResponseBodyModule& setUserIntentionMemo(string userIntentionMemo) { DARABONBA_PTR_SET_VALUE(userIntentionMemo_, userIntentionMemo) };


  protected:
    std::shared_ptr<Models::IntlFlightReShopDetailResponseBodyModuleBaggageRule> baggageRule_ = nullptr;
    std::shared_ptr<string> closeReason_ = nullptr;
    std::shared_ptr<string> closeTime_ = nullptr;
    std::shared_ptr<int32_t> closeType_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModuleJourneyList>> journeyList_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModuleOriginJourneyList>> originJourneyList_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outReShopApplyId_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoList>> passengerPriceInfoList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketList>> passengerTicketList_ = nullptr;
    std::shared_ptr<string> payLatestTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<Models::IntlFlightReShopDetailResponseBodyModulePriceInfo> priceInfo_ = nullptr;
    std::shared_ptr<int64_t> reShopApplyId_ = nullptr;
    std::shared_ptr<string> reShopReasonCode_ = nullptr;
    std::shared_ptr<string> reShopReasonDesc_ = nullptr;
    std::shared_ptr<Models::IntlFlightReShopDetailResponseBodyModuleRefundChangeRule> refundChangeRule_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> successTime_ = nullptr;
    std::shared_ptr<string> userIntentionMemo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
