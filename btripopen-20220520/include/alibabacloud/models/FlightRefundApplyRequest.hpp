// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/FlightRefundApplyRequestPassengerSegmentInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corp_refund_price, corpRefundPrice_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(display_refund_money, displayRefundMoney_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(item_unit_ids, itemUnitIds_);
      DARABONBA_PTR_TO_JSON(passenger_segment_info_list, passengerSegmentInfoList_);
      DARABONBA_PTR_TO_JSON(personal_refund_price, personalRefundPrice_);
      DARABONBA_PTR_TO_JSON(reason_detail, reasonDetail_);
      DARABONBA_PTR_TO_JSON(reason_type, reasonType_);
      DARABONBA_PTR_TO_JSON(refund_voucher_info, refundVoucherInfo_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(total_refund_price, totalRefundPrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_refund_price, corpRefundPrice_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(display_refund_money, displayRefundMoney_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(item_unit_ids, itemUnitIds_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_info_list, passengerSegmentInfoList_);
      DARABONBA_PTR_FROM_JSON(personal_refund_price, personalRefundPrice_);
      DARABONBA_PTR_FROM_JSON(reason_detail, reasonDetail_);
      DARABONBA_PTR_FROM_JSON(reason_type, reasonType_);
      DARABONBA_PTR_FROM_JSON(refund_voucher_info, refundVoucherInfo_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(total_refund_price, totalRefundPrice_);
    };
    FlightRefundApplyRequest() = default ;
    FlightRefundApplyRequest(const FlightRefundApplyRequest &) = default ;
    FlightRefundApplyRequest(FlightRefundApplyRequest &&) = default ;
    FlightRefundApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundApplyRequest() = default ;
    FlightRefundApplyRequest& operator=(const FlightRefundApplyRequest &) = default ;
    FlightRefundApplyRequest& operator=(FlightRefundApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpRefundPrice_ != nullptr
        && this->disOrderId_ != nullptr && this->disSubOrderId_ != nullptr && this->displayRefundMoney_ != nullptr && this->extra_ != nullptr && this->isVoluntary_ != nullptr
        && this->itemUnitIds_ != nullptr && this->passengerSegmentInfoList_ != nullptr && this->personalRefundPrice_ != nullptr && this->reasonDetail_ != nullptr && this->reasonType_ != nullptr
        && this->refundVoucherInfo_ != nullptr && this->sessionId_ != nullptr && this->totalRefundPrice_ != nullptr; };
    // corpRefundPrice Field Functions 
    bool hasCorpRefundPrice() const { return this->corpRefundPrice_ != nullptr;};
    void deleteCorpRefundPrice() { this->corpRefundPrice_ = nullptr;};
    inline int64_t corpRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(corpRefundPrice_, 0L) };
    inline FlightRefundApplyRequest& setCorpRefundPrice(int64_t corpRefundPrice) { DARABONBA_PTR_SET_VALUE(corpRefundPrice_, corpRefundPrice) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundApplyRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline FlightRefundApplyRequest& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // displayRefundMoney Field Functions 
    bool hasDisplayRefundMoney() const { return this->displayRefundMoney_ != nullptr;};
    void deleteDisplayRefundMoney() { this->displayRefundMoney_ = nullptr;};
    inline string displayRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(displayRefundMoney_, "") };
    inline FlightRefundApplyRequest& setDisplayRefundMoney(string displayRefundMoney) { DARABONBA_PTR_SET_VALUE(displayRefundMoney_, displayRefundMoney) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & extra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> extra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline FlightRefundApplyRequest& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline FlightRefundApplyRequest& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline FlightRefundApplyRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // itemUnitIds Field Functions 
    bool hasItemUnitIds() const { return this->itemUnitIds_ != nullptr;};
    void deleteItemUnitIds() { this->itemUnitIds_ = nullptr;};
    inline string itemUnitIds() const { DARABONBA_PTR_GET_DEFAULT(itemUnitIds_, "") };
    inline FlightRefundApplyRequest& setItemUnitIds(string itemUnitIds) { DARABONBA_PTR_SET_VALUE(itemUnitIds_, itemUnitIds) };


    // passengerSegmentInfoList Field Functions 
    bool hasPassengerSegmentInfoList() const { return this->passengerSegmentInfoList_ != nullptr;};
    void deletePassengerSegmentInfoList() { this->passengerSegmentInfoList_ = nullptr;};
    inline const vector<FlightRefundApplyRequestPassengerSegmentInfoList> & passengerSegmentInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentInfoList_, vector<FlightRefundApplyRequestPassengerSegmentInfoList>) };
    inline vector<FlightRefundApplyRequestPassengerSegmentInfoList> passengerSegmentInfoList() { DARABONBA_PTR_GET(passengerSegmentInfoList_, vector<FlightRefundApplyRequestPassengerSegmentInfoList>) };
    inline FlightRefundApplyRequest& setPassengerSegmentInfoList(const vector<FlightRefundApplyRequestPassengerSegmentInfoList> & passengerSegmentInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };
    inline FlightRefundApplyRequest& setPassengerSegmentInfoList(vector<FlightRefundApplyRequestPassengerSegmentInfoList> && passengerSegmentInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };


    // personalRefundPrice Field Functions 
    bool hasPersonalRefundPrice() const { return this->personalRefundPrice_ != nullptr;};
    void deletePersonalRefundPrice() { this->personalRefundPrice_ = nullptr;};
    inline int64_t personalRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(personalRefundPrice_, 0L) };
    inline FlightRefundApplyRequest& setPersonalRefundPrice(int64_t personalRefundPrice) { DARABONBA_PTR_SET_VALUE(personalRefundPrice_, personalRefundPrice) };


    // reasonDetail Field Functions 
    bool hasReasonDetail() const { return this->reasonDetail_ != nullptr;};
    void deleteReasonDetail() { this->reasonDetail_ = nullptr;};
    inline string reasonDetail() const { DARABONBA_PTR_GET_DEFAULT(reasonDetail_, "") };
    inline FlightRefundApplyRequest& setReasonDetail(string reasonDetail) { DARABONBA_PTR_SET_VALUE(reasonDetail_, reasonDetail) };


    // reasonType Field Functions 
    bool hasReasonType() const { return this->reasonType_ != nullptr;};
    void deleteReasonType() { this->reasonType_ = nullptr;};
    inline int32_t reasonType() const { DARABONBA_PTR_GET_DEFAULT(reasonType_, 0) };
    inline FlightRefundApplyRequest& setReasonType(int32_t reasonType) { DARABONBA_PTR_SET_VALUE(reasonType_, reasonType) };


    // refundVoucherInfo Field Functions 
    bool hasRefundVoucherInfo() const { return this->refundVoucherInfo_ != nullptr;};
    void deleteRefundVoucherInfo() { this->refundVoucherInfo_ = nullptr;};
    inline const vector<string> & refundVoucherInfo() const { DARABONBA_PTR_GET_CONST(refundVoucherInfo_, vector<string>) };
    inline vector<string> refundVoucherInfo() { DARABONBA_PTR_GET(refundVoucherInfo_, vector<string>) };
    inline FlightRefundApplyRequest& setRefundVoucherInfo(const vector<string> & refundVoucherInfo) { DARABONBA_PTR_SET_VALUE(refundVoucherInfo_, refundVoucherInfo) };
    inline FlightRefundApplyRequest& setRefundVoucherInfo(vector<string> && refundVoucherInfo) { DARABONBA_PTR_SET_RVALUE(refundVoucherInfo_, refundVoucherInfo) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightRefundApplyRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // totalRefundPrice Field Functions 
    bool hasTotalRefundPrice() const { return this->totalRefundPrice_ != nullptr;};
    void deleteTotalRefundPrice() { this->totalRefundPrice_ = nullptr;};
    inline int64_t totalRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(totalRefundPrice_, 0L) };
    inline FlightRefundApplyRequest& setTotalRefundPrice(int64_t totalRefundPrice) { DARABONBA_PTR_SET_VALUE(totalRefundPrice_, totalRefundPrice) };


  protected:
    std::shared_ptr<int64_t> corpRefundPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayRefundMoney_ = nullptr;
    std::shared_ptr<map<string, string>> extra_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> isVoluntary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemUnitIds_ = nullptr;
    std::shared_ptr<vector<FlightRefundApplyRequestPassengerSegmentInfoList>> passengerSegmentInfoList_ = nullptr;
    std::shared_ptr<int64_t> personalRefundPrice_ = nullptr;
    std::shared_ptr<string> reasonDetail_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> reasonType_ = nullptr;
    std::shared_ptr<vector<string>> refundVoucherInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<int64_t> totalRefundPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
