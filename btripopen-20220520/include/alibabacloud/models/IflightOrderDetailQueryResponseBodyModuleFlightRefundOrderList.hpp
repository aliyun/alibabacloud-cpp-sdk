// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(corp_refund_Amount, corpRefundAmount_);
      DARABONBA_PTR_TO_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
      DARABONBA_PTR_TO_JSON(flight_passenger_fee, flightPassengerFee_);
      DARABONBA_PTR_TO_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(person_refund_Amount, personRefundAmount_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_TO_JSON(refund_order_status, refundOrderStatus_);
      DARABONBA_PTR_TO_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_TO_JSON(refund_total_Amount, refundTotalAmount_);
      DARABONBA_PTR_TO_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_TO_JSON(relate_refund_apply_id, relateRefundApplyId_);
      DARABONBA_PTR_TO_JSON(repeat_refund, repeatRefund_);
      DARABONBA_PTR_TO_JSON(submit_refund_time, submitRefundTime_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_refund_Amount, corpRefundAmount_);
      DARABONBA_PTR_FROM_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_passenger_fee, flightPassengerFee_);
      DARABONBA_PTR_FROM_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(person_refund_Amount, personRefundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_FROM_JSON(refund_order_status, refundOrderStatus_);
      DARABONBA_PTR_FROM_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_FROM_JSON(refund_total_Amount, refundTotalAmount_);
      DARABONBA_PTR_FROM_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_FROM_JSON(relate_refund_apply_id, relateRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(repeat_refund, repeatRefund_);
      DARABONBA_PTR_FROM_JSON(submit_refund_time, submitRefundTime_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList(const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList(IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList &&) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& operator=(const IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& operator=(IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpRefundAmount_ != nullptr
        && this->flightOrderRefundTicketList_ != nullptr && this->flightPassengerFee_ != nullptr && this->flightRefundSegmentList_ != nullptr && this->passengerList_ != nullptr && this->personRefundAmount_ != nullptr
        && this->refundApplyId_ != nullptr && this->refundHandFee_ != nullptr && this->refundOrderStatus_ != nullptr && this->refundServiceFee_ != nullptr && this->refundTotalAmount_ != nullptr
        && this->relateModifyApplyId_ != nullptr && this->relateRefundApplyId_ != nullptr && this->repeatRefund_ != nullptr && this->submitRefundTime_ != nullptr && this->voluntary_ != nullptr; };
    // corpRefundAmount Field Functions 
    bool hasCorpRefundAmount() const { return this->corpRefundAmount_ != nullptr;};
    void deleteCorpRefundAmount() { this->corpRefundAmount_ = nullptr;};
    inline int32_t corpRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(corpRefundAmount_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setCorpRefundAmount(int32_t corpRefundAmount) { DARABONBA_PTR_SET_VALUE(corpRefundAmount_, corpRefundAmount) };


    // flightOrderRefundTicketList Field Functions 
    bool hasFlightOrderRefundTicketList() const { return this->flightOrderRefundTicketList_ != nullptr;};
    void deleteFlightOrderRefundTicketList() { this->flightOrderRefundTicketList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> & flightOrderRefundTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderRefundTicketList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> flightOrderRefundTicketList() { DARABONBA_PTR_GET(flightOrderRefundTicketList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightOrderRefundTicketList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> & flightOrderRefundTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightOrderRefundTicketList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> && flightOrderRefundTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };


    // flightPassengerFee Field Functions 
    bool hasFlightPassengerFee() const { return this->flightPassengerFee_ != nullptr;};
    void deleteFlightPassengerFee() { this->flightPassengerFee_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee> & flightPassengerFee() const { DARABONBA_PTR_GET_CONST(flightPassengerFee_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee> flightPassengerFee() { DARABONBA_PTR_GET(flightPassengerFee_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightPassengerFee(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee> & flightPassengerFee) { DARABONBA_PTR_SET_VALUE(flightPassengerFee_, flightPassengerFee) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightPassengerFee(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee> && flightPassengerFee) { DARABONBA_PTR_SET_RVALUE(flightPassengerFee_, flightPassengerFee) };


    // flightRefundSegmentList Field Functions 
    bool hasFlightRefundSegmentList() const { return this->flightRefundSegmentList_ != nullptr;};
    void deleteFlightRefundSegmentList() { this->flightRefundSegmentList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> & flightRefundSegmentList() const { DARABONBA_PTR_GET_CONST(flightRefundSegmentList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> flightRefundSegmentList() { DARABONBA_PTR_GET(flightRefundSegmentList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightRefundSegmentList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> & flightRefundSegmentList) { DARABONBA_PTR_SET_VALUE(flightRefundSegmentList_, flightRefundSegmentList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setFlightRefundSegmentList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> && flightRefundSegmentList) { DARABONBA_PTR_SET_RVALUE(flightRefundSegmentList_, flightRefundSegmentList) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<string> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<string>) };
    inline vector<string> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<string>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setPassengerList(const vector<string> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setPassengerList(vector<string> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // personRefundAmount Field Functions 
    bool hasPersonRefundAmount() const { return this->personRefundAmount_ != nullptr;};
    void deletePersonRefundAmount() { this->personRefundAmount_ = nullptr;};
    inline int32_t personRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(personRefundAmount_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setPersonRefundAmount(int32_t personRefundAmount) { DARABONBA_PTR_SET_VALUE(personRefundAmount_, personRefundAmount) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline int64_t refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundHandFee Field Functions 
    bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
    void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
    inline int32_t refundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRefundHandFee(int32_t refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


    // refundOrderStatus Field Functions 
    bool hasRefundOrderStatus() const { return this->refundOrderStatus_ != nullptr;};
    void deleteRefundOrderStatus() { this->refundOrderStatus_ = nullptr;};
    inline int32_t refundOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(refundOrderStatus_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRefundOrderStatus(int32_t refundOrderStatus) { DARABONBA_PTR_SET_VALUE(refundOrderStatus_, refundOrderStatus) };


    // refundServiceFee Field Functions 
    bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
    void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
    inline int64_t refundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRefundServiceFee(int64_t refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


    // refundTotalAmount Field Functions 
    bool hasRefundTotalAmount() const { return this->refundTotalAmount_ != nullptr;};
    void deleteRefundTotalAmount() { this->refundTotalAmount_ = nullptr;};
    inline int32_t refundTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTotalAmount_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRefundTotalAmount(int32_t refundTotalAmount) { DARABONBA_PTR_SET_VALUE(refundTotalAmount_, refundTotalAmount) };


    // relateModifyApplyId Field Functions 
    bool hasRelateModifyApplyId() const { return this->relateModifyApplyId_ != nullptr;};
    void deleteRelateModifyApplyId() { this->relateModifyApplyId_ = nullptr;};
    inline const vector<int64_t> & relateModifyApplyId() const { DARABONBA_PTR_GET_CONST(relateModifyApplyId_, vector<int64_t>) };
    inline vector<int64_t> relateModifyApplyId() { DARABONBA_PTR_GET(relateModifyApplyId_, vector<int64_t>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRelateModifyApplyId(const vector<int64_t> & relateModifyApplyId) { DARABONBA_PTR_SET_VALUE(relateModifyApplyId_, relateModifyApplyId) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRelateModifyApplyId(vector<int64_t> && relateModifyApplyId) { DARABONBA_PTR_SET_RVALUE(relateModifyApplyId_, relateModifyApplyId) };


    // relateRefundApplyId Field Functions 
    bool hasRelateRefundApplyId() const { return this->relateRefundApplyId_ != nullptr;};
    void deleteRelateRefundApplyId() { this->relateRefundApplyId_ = nullptr;};
    inline int64_t relateRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateRefundApplyId_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRelateRefundApplyId(int64_t relateRefundApplyId) { DARABONBA_PTR_SET_VALUE(relateRefundApplyId_, relateRefundApplyId) };


    // repeatRefund Field Functions 
    bool hasRepeatRefund() const { return this->repeatRefund_ != nullptr;};
    void deleteRepeatRefund() { this->repeatRefund_ = nullptr;};
    inline bool repeatRefund() const { DARABONBA_PTR_GET_DEFAULT(repeatRefund_, false) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setRepeatRefund(bool repeatRefund) { DARABONBA_PTR_SET_VALUE(repeatRefund_, repeatRefund) };


    // submitRefundTime Field Functions 
    bool hasSubmitRefundTime() const { return this->submitRefundTime_ != nullptr;};
    void deleteSubmitRefundTime() { this->submitRefundTime_ = nullptr;};
    inline string submitRefundTime() const { DARABONBA_PTR_GET_DEFAULT(submitRefundTime_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setSubmitRefundTime(string submitRefundTime) { DARABONBA_PTR_SET_VALUE(submitRefundTime_, submitRefundTime) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<int32_t> corpRefundAmount_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>> flightOrderRefundTicketList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightPassengerFee>> flightPassengerFee_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>> flightRefundSegmentList_ = nullptr;
    std::shared_ptr<vector<string>> passengerList_ = nullptr;
    std::shared_ptr<int32_t> personRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundApplyId_ = nullptr;
    std::shared_ptr<int32_t> refundHandFee_ = nullptr;
    std::shared_ptr<int32_t> refundOrderStatus_ = nullptr;
    std::shared_ptr<int64_t> refundServiceFee_ = nullptr;
    std::shared_ptr<int32_t> refundTotalAmount_ = nullptr;
    std::shared_ptr<vector<int64_t>> relateModifyApplyId_ = nullptr;
    std::shared_ptr<int64_t> relateRefundApplyId_ = nullptr;
    std::shared_ptr<bool> repeatRefund_ = nullptr;
    std::shared_ptr<string> submitRefundTime_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
