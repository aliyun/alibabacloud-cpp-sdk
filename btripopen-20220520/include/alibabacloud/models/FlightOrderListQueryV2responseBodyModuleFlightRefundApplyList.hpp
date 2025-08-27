// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTREFUNDAPPLYLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTREFUNDAPPLYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_refund_apply_ticket_list, flightRefundApplyTicketList_);
      DARABONBA_PTR_TO_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_TO_JSON(flight_refund_user_fee_list, flightRefundUserFeeList_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_approve_id, refundApproveId_);
      DARABONBA_PTR_TO_JSON(refund_corp_total_amount, refundCorpTotalAmount_);
      DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_TO_JSON(refund_person_total_amount, refundPersonTotalAmount_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_TO_JSON(refund_total_amount, refundTotalAmount_);
      DARABONBA_PTR_TO_JSON(relate_refund_apply_id, relateRefundApplyId_);
      DARABONBA_PTR_TO_JSON(user_id_list, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_refund_apply_ticket_list, flightRefundApplyTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_user_fee_list, flightRefundUserFeeList_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_approve_id, refundApproveId_);
      DARABONBA_PTR_FROM_JSON(refund_corp_total_amount, refundCorpTotalAmount_);
      DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_FROM_JSON(refund_person_total_amount, refundPersonTotalAmount_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_FROM_JSON(refund_total_amount, refundTotalAmount_);
      DARABONBA_PTR_FROM_JSON(relate_refund_apply_id, relateRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(user_id_list, userIdList_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList(const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList(FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightRefundApplyTicketList_ != nullptr
        && this->flightRefundSegmentList_ != nullptr && this->flightRefundUserFeeList_ != nullptr && this->refundApplyId_ != nullptr && this->refundApproveId_ != nullptr && this->refundCorpTotalAmount_ != nullptr
        && this->refundHandFee_ != nullptr && this->refundPersonTotalAmount_ != nullptr && this->refundReason_ != nullptr && this->refundReasonCode_ != nullptr && this->refundTotalAmount_ != nullptr
        && this->relateRefundApplyId_ != nullptr && this->userIdList_ != nullptr; };
    // flightRefundApplyTicketList Field Functions 
    bool hasFlightRefundApplyTicketList() const { return this->flightRefundApplyTicketList_ != nullptr;};
    void deleteFlightRefundApplyTicketList() { this->flightRefundApplyTicketList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList> & flightRefundApplyTicketList() const { DARABONBA_PTR_GET_CONST(flightRefundApplyTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList> flightRefundApplyTicketList() { DARABONBA_PTR_GET(flightRefundApplyTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundApplyTicketList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList> & flightRefundApplyTicketList) { DARABONBA_PTR_SET_VALUE(flightRefundApplyTicketList_, flightRefundApplyTicketList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundApplyTicketList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList> && flightRefundApplyTicketList) { DARABONBA_PTR_SET_RVALUE(flightRefundApplyTicketList_, flightRefundApplyTicketList) };


    // flightRefundSegmentList Field Functions 
    bool hasFlightRefundSegmentList() const { return this->flightRefundSegmentList_ != nullptr;};
    void deleteFlightRefundSegmentList() { this->flightRefundSegmentList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList> & flightRefundSegmentList() const { DARABONBA_PTR_GET_CONST(flightRefundSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList> flightRefundSegmentList() { DARABONBA_PTR_GET(flightRefundSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundSegmentList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList> & flightRefundSegmentList) { DARABONBA_PTR_SET_VALUE(flightRefundSegmentList_, flightRefundSegmentList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundSegmentList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList> && flightRefundSegmentList) { DARABONBA_PTR_SET_RVALUE(flightRefundSegmentList_, flightRefundSegmentList) };


    // flightRefundUserFeeList Field Functions 
    bool hasFlightRefundUserFeeList() const { return this->flightRefundUserFeeList_ != nullptr;};
    void deleteFlightRefundUserFeeList() { this->flightRefundUserFeeList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList> & flightRefundUserFeeList() const { DARABONBA_PTR_GET_CONST(flightRefundUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList> flightRefundUserFeeList() { DARABONBA_PTR_GET(flightRefundUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundUserFeeList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList> & flightRefundUserFeeList) { DARABONBA_PTR_SET_VALUE(flightRefundUserFeeList_, flightRefundUserFeeList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setFlightRefundUserFeeList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList> && flightRefundUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightRefundUserFeeList_, flightRefundUserFeeList) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundApproveId Field Functions 
    bool hasRefundApproveId() const { return this->refundApproveId_ != nullptr;};
    void deleteRefundApproveId() { this->refundApproveId_ = nullptr;};
    inline string refundApproveId() const { DARABONBA_PTR_GET_DEFAULT(refundApproveId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundApproveId(string refundApproveId) { DARABONBA_PTR_SET_VALUE(refundApproveId_, refundApproveId) };


    // refundCorpTotalAmount Field Functions 
    bool hasRefundCorpTotalAmount() const { return this->refundCorpTotalAmount_ != nullptr;};
    void deleteRefundCorpTotalAmount() { this->refundCorpTotalAmount_ = nullptr;};
    inline double refundCorpTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundCorpTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundCorpTotalAmount(double refundCorpTotalAmount) { DARABONBA_PTR_SET_VALUE(refundCorpTotalAmount_, refundCorpTotalAmount) };


    // refundHandFee Field Functions 
    bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
    void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
    inline double refundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundHandFee(double refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


    // refundPersonTotalAmount Field Functions 
    bool hasRefundPersonTotalAmount() const { return this->refundPersonTotalAmount_ != nullptr;};
    void deleteRefundPersonTotalAmount() { this->refundPersonTotalAmount_ = nullptr;};
    inline double refundPersonTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundPersonTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundPersonTotalAmount(double refundPersonTotalAmount) { DARABONBA_PTR_SET_VALUE(refundPersonTotalAmount_, refundPersonTotalAmount) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundReasonCode Field Functions 
    bool hasRefundReasonCode() const { return this->refundReasonCode_ != nullptr;};
    void deleteRefundReasonCode() { this->refundReasonCode_ = nullptr;};
    inline string refundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(refundReasonCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundReasonCode(string refundReasonCode) { DARABONBA_PTR_SET_VALUE(refundReasonCode_, refundReasonCode) };


    // refundTotalAmount Field Functions 
    bool hasRefundTotalAmount() const { return this->refundTotalAmount_ != nullptr;};
    void deleteRefundTotalAmount() { this->refundTotalAmount_ = nullptr;};
    inline double refundTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRefundTotalAmount(double refundTotalAmount) { DARABONBA_PTR_SET_VALUE(refundTotalAmount_, refundTotalAmount) };


    // relateRefundApplyId Field Functions 
    bool hasRelateRefundApplyId() const { return this->relateRefundApplyId_ != nullptr;};
    void deleteRelateRefundApplyId() { this->relateRefundApplyId_ = nullptr;};
    inline string relateRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateRefundApplyId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setRelateRefundApplyId(string relateRefundApplyId) { DARABONBA_PTR_SET_VALUE(relateRefundApplyId_, relateRefundApplyId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundApplyTicketList>> flightRefundApplyTicketList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundSegmentList>> flightRefundSegmentList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyListFlightRefundUserFeeList>> flightRefundUserFeeList_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
    std::shared_ptr<string> refundApproveId_ = nullptr;
    std::shared_ptr<double> refundCorpTotalAmount_ = nullptr;
    std::shared_ptr<double> refundHandFee_ = nullptr;
    std::shared_ptr<double> refundPersonTotalAmount_ = nullptr;
    std::shared_ptr<string> refundReason_ = nullptr;
    std::shared_ptr<string> refundReasonCode_ = nullptr;
    std::shared_ptr<double> refundTotalAmount_ = nullptr;
    std::shared_ptr<string> relateRefundApplyId_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
