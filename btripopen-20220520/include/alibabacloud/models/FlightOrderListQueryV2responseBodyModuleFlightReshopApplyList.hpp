// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_reshop_apply_ticket_list, flightReshopApplyTicketList_);
      DARABONBA_PTR_TO_JSON(flight_reshop_segment_list, flightReshopSegmentList_);
      DARABONBA_PTR_TO_JSON(flight_reshop_user_fee_list, flightReshopUserFeeList_);
      DARABONBA_PTR_TO_JSON(relate_reshop_apply_id, relateReshopApplyId_);
      DARABONBA_PTR_TO_JSON(reshop_apply_id, reshopApplyId_);
      DARABONBA_PTR_TO_JSON(reshop_approve_id, reshopApproveId_);
      DARABONBA_PTR_TO_JSON(reshop_corp_total_amount, reshopCorpTotalAmount_);
      DARABONBA_PTR_TO_JSON(reshop_person_total_amount, reshopPersonTotalAmount_);
      DARABONBA_PTR_TO_JSON(reshop_reason, reshopReason_);
      DARABONBA_PTR_TO_JSON(reshop_reason_code, reshopReasonCode_);
      DARABONBA_PTR_TO_JSON(reshop_total_amount, reshopTotalAmount_);
      DARABONBA_PTR_TO_JSON(user_id_list, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_reshop_apply_ticket_list, flightReshopApplyTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_reshop_segment_list, flightReshopSegmentList_);
      DARABONBA_PTR_FROM_JSON(flight_reshop_user_fee_list, flightReshopUserFeeList_);
      DARABONBA_PTR_FROM_JSON(relate_reshop_apply_id, relateReshopApplyId_);
      DARABONBA_PTR_FROM_JSON(reshop_apply_id, reshopApplyId_);
      DARABONBA_PTR_FROM_JSON(reshop_approve_id, reshopApproveId_);
      DARABONBA_PTR_FROM_JSON(reshop_corp_total_amount, reshopCorpTotalAmount_);
      DARABONBA_PTR_FROM_JSON(reshop_person_total_amount, reshopPersonTotalAmount_);
      DARABONBA_PTR_FROM_JSON(reshop_reason, reshopReason_);
      DARABONBA_PTR_FROM_JSON(reshop_reason_code, reshopReasonCode_);
      DARABONBA_PTR_FROM_JSON(reshop_total_amount, reshopTotalAmount_);
      DARABONBA_PTR_FROM_JSON(user_id_list, userIdList_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightReshopApplyTicketList_ != nullptr
        && this->flightReshopSegmentList_ != nullptr && this->flightReshopUserFeeList_ != nullptr && this->relateReshopApplyId_ != nullptr && this->reshopApplyId_ != nullptr && this->reshopApproveId_ != nullptr
        && this->reshopCorpTotalAmount_ != nullptr && this->reshopPersonTotalAmount_ != nullptr && this->reshopReason_ != nullptr && this->reshopReasonCode_ != nullptr && this->reshopTotalAmount_ != nullptr
        && this->userIdList_ != nullptr; };
    // flightReshopApplyTicketList Field Functions 
    bool hasFlightReshopApplyTicketList() const { return this->flightReshopApplyTicketList_ != nullptr;};
    void deleteFlightReshopApplyTicketList() { this->flightReshopApplyTicketList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList> & flightReshopApplyTicketList() const { DARABONBA_PTR_GET_CONST(flightReshopApplyTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList> flightReshopApplyTicketList() { DARABONBA_PTR_GET(flightReshopApplyTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopApplyTicketList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList> & flightReshopApplyTicketList) { DARABONBA_PTR_SET_VALUE(flightReshopApplyTicketList_, flightReshopApplyTicketList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopApplyTicketList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList> && flightReshopApplyTicketList) { DARABONBA_PTR_SET_RVALUE(flightReshopApplyTicketList_, flightReshopApplyTicketList) };


    // flightReshopSegmentList Field Functions 
    bool hasFlightReshopSegmentList() const { return this->flightReshopSegmentList_ != nullptr;};
    void deleteFlightReshopSegmentList() { this->flightReshopSegmentList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList> & flightReshopSegmentList() const { DARABONBA_PTR_GET_CONST(flightReshopSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList> flightReshopSegmentList() { DARABONBA_PTR_GET(flightReshopSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopSegmentList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList> & flightReshopSegmentList) { DARABONBA_PTR_SET_VALUE(flightReshopSegmentList_, flightReshopSegmentList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopSegmentList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList> && flightReshopSegmentList) { DARABONBA_PTR_SET_RVALUE(flightReshopSegmentList_, flightReshopSegmentList) };


    // flightReshopUserFeeList Field Functions 
    bool hasFlightReshopUserFeeList() const { return this->flightReshopUserFeeList_ != nullptr;};
    void deleteFlightReshopUserFeeList() { this->flightReshopUserFeeList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList> & flightReshopUserFeeList() const { DARABONBA_PTR_GET_CONST(flightReshopUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList> flightReshopUserFeeList() { DARABONBA_PTR_GET(flightReshopUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopUserFeeList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList> & flightReshopUserFeeList) { DARABONBA_PTR_SET_VALUE(flightReshopUserFeeList_, flightReshopUserFeeList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setFlightReshopUserFeeList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList> && flightReshopUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightReshopUserFeeList_, flightReshopUserFeeList) };


    // relateReshopApplyId Field Functions 
    bool hasRelateReshopApplyId() const { return this->relateReshopApplyId_ != nullptr;};
    void deleteRelateReshopApplyId() { this->relateReshopApplyId_ = nullptr;};
    inline int64_t relateReshopApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateReshopApplyId_, 0L) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setRelateReshopApplyId(int64_t relateReshopApplyId) { DARABONBA_PTR_SET_VALUE(relateReshopApplyId_, relateReshopApplyId) };


    // reshopApplyId Field Functions 
    bool hasReshopApplyId() const { return this->reshopApplyId_ != nullptr;};
    void deleteReshopApplyId() { this->reshopApplyId_ = nullptr;};
    inline int64_t reshopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reshopApplyId_, 0L) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopApplyId(int64_t reshopApplyId) { DARABONBA_PTR_SET_VALUE(reshopApplyId_, reshopApplyId) };


    // reshopApproveId Field Functions 
    bool hasReshopApproveId() const { return this->reshopApproveId_ != nullptr;};
    void deleteReshopApproveId() { this->reshopApproveId_ = nullptr;};
    inline string reshopApproveId() const { DARABONBA_PTR_GET_DEFAULT(reshopApproveId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopApproveId(string reshopApproveId) { DARABONBA_PTR_SET_VALUE(reshopApproveId_, reshopApproveId) };


    // reshopCorpTotalAmount Field Functions 
    bool hasReshopCorpTotalAmount() const { return this->reshopCorpTotalAmount_ != nullptr;};
    void deleteReshopCorpTotalAmount() { this->reshopCorpTotalAmount_ = nullptr;};
    inline double reshopCorpTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopCorpTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopCorpTotalAmount(double reshopCorpTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopCorpTotalAmount_, reshopCorpTotalAmount) };


    // reshopPersonTotalAmount Field Functions 
    bool hasReshopPersonTotalAmount() const { return this->reshopPersonTotalAmount_ != nullptr;};
    void deleteReshopPersonTotalAmount() { this->reshopPersonTotalAmount_ = nullptr;};
    inline double reshopPersonTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopPersonTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopPersonTotalAmount(double reshopPersonTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopPersonTotalAmount_, reshopPersonTotalAmount) };


    // reshopReason Field Functions 
    bool hasReshopReason() const { return this->reshopReason_ != nullptr;};
    void deleteReshopReason() { this->reshopReason_ = nullptr;};
    inline string reshopReason() const { DARABONBA_PTR_GET_DEFAULT(reshopReason_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopReason(string reshopReason) { DARABONBA_PTR_SET_VALUE(reshopReason_, reshopReason) };


    // reshopReasonCode Field Functions 
    bool hasReshopReasonCode() const { return this->reshopReasonCode_ != nullptr;};
    void deleteReshopReasonCode() { this->reshopReasonCode_ = nullptr;};
    inline string reshopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reshopReasonCode_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopReasonCode(string reshopReasonCode) { DARABONBA_PTR_SET_VALUE(reshopReasonCode_, reshopReasonCode) };


    // reshopTotalAmount Field Functions 
    bool hasReshopTotalAmount() const { return this->reshopTotalAmount_ != nullptr;};
    void deleteReshopTotalAmount() { this->reshopTotalAmount_ = nullptr;};
    inline double reshopTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopTotalAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setReshopTotalAmount(double reshopTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopTotalAmount_, reshopTotalAmount) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList>> flightReshopApplyTicketList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopSegmentList>> flightReshopSegmentList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopUserFeeList>> flightReshopUserFeeList_ = nullptr;
    std::shared_ptr<int64_t> relateReshopApplyId_ = nullptr;
    std::shared_ptr<int64_t> reshopApplyId_ = nullptr;
    std::shared_ptr<string> reshopApproveId_ = nullptr;
    std::shared_ptr<double> reshopCorpTotalAmount_ = nullptr;
    std::shared_ptr<double> reshopPersonTotalAmount_ = nullptr;
    std::shared_ptr<string> reshopReason_ = nullptr;
    std::shared_ptr<string> reshopReasonCode_ = nullptr;
    std::shared_ptr<double> reshopTotalAmount_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
