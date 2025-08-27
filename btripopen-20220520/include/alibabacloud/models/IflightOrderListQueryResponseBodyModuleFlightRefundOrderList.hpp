// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(corp_refund_Amount, corpRefundAmount_);
      DARABONBA_PTR_TO_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
      DARABONBA_PTR_TO_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_TO_JSON(passenger_fee, passengerFee_);
      DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_TO_JSON(person_refund_Amount, personRefundAmount_);
      DARABONBA_PTR_TO_JSON(refund_Amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_refund_Amount, corpRefundAmount_);
      DARABONBA_PTR_FROM_JSON(flight_order_refund_ticket_list, flightOrderRefundTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_segment_list, flightRefundSegmentList_);
      DARABONBA_PTR_FROM_JSON(passenger_fee, passengerFee_);
      DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
      DARABONBA_PTR_FROM_JSON(person_refund_Amount, personRefundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_Amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& operator=(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpRefundAmount_ != nullptr
        && this->flightOrderRefundTicketList_ != nullptr && this->flightRefundSegmentList_ != nullptr && this->passengerFee_ != nullptr && this->passengerInfo_ != nullptr && this->personRefundAmount_ != nullptr
        && this->refundAmount_ != nullptr && this->refundApplyId_ != nullptr && this->refundHandFee_ != nullptr && this->serviceFee_ != nullptr; };
    // corpRefundAmount Field Functions 
    bool hasCorpRefundAmount() const { return this->corpRefundAmount_ != nullptr;};
    void deleteCorpRefundAmount() { this->corpRefundAmount_ = nullptr;};
    inline int32_t corpRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(corpRefundAmount_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setCorpRefundAmount(int32_t corpRefundAmount) { DARABONBA_PTR_SET_VALUE(corpRefundAmount_, corpRefundAmount) };


    // flightOrderRefundTicketList Field Functions 
    bool hasFlightOrderRefundTicketList() const { return this->flightOrderRefundTicketList_ != nullptr;};
    void deleteFlightOrderRefundTicketList() { this->flightOrderRefundTicketList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> & flightOrderRefundTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderRefundTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> flightOrderRefundTicketList() { DARABONBA_PTR_GET(flightOrderRefundTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setFlightOrderRefundTicketList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> & flightOrderRefundTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setFlightOrderRefundTicketList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList> && flightOrderRefundTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderRefundTicketList_, flightOrderRefundTicketList) };


    // flightRefundSegmentList Field Functions 
    bool hasFlightRefundSegmentList() const { return this->flightRefundSegmentList_ != nullptr;};
    void deleteFlightRefundSegmentList() { this->flightRefundSegmentList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> & flightRefundSegmentList() const { DARABONBA_PTR_GET_CONST(flightRefundSegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> flightRefundSegmentList() { DARABONBA_PTR_GET(flightRefundSegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setFlightRefundSegmentList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> & flightRefundSegmentList) { DARABONBA_PTR_SET_VALUE(flightRefundSegmentList_, flightRefundSegmentList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setFlightRefundSegmentList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList> && flightRefundSegmentList) { DARABONBA_PTR_SET_RVALUE(flightRefundSegmentList_, flightRefundSegmentList) };


    // passengerFee Field Functions 
    bool hasPassengerFee() const { return this->passengerFee_ != nullptr;};
    void deletePassengerFee() { this->passengerFee_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee> & passengerFee() const { DARABONBA_PTR_GET_CONST(passengerFee_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee> passengerFee() { DARABONBA_PTR_GET(passengerFee_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setPassengerFee(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee> & passengerFee) { DARABONBA_PTR_SET_VALUE(passengerFee_, passengerFee) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setPassengerFee(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee> && passengerFee) { DARABONBA_PTR_SET_RVALUE(passengerFee_, passengerFee) };


    // passengerInfo Field Functions 
    bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
    void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
    inline const vector<string> & passengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, vector<string>) };
    inline vector<string> passengerInfo() { DARABONBA_PTR_GET(passengerInfo_, vector<string>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setPassengerInfo(const vector<string> & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setPassengerInfo(vector<string> && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


    // personRefundAmount Field Functions 
    bool hasPersonRefundAmount() const { return this->personRefundAmount_ != nullptr;};
    void deletePersonRefundAmount() { this->personRefundAmount_ = nullptr;};
    inline int32_t personRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(personRefundAmount_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setPersonRefundAmount(int32_t personRefundAmount) { DARABONBA_PTR_SET_VALUE(personRefundAmount_, personRefundAmount) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline int32_t refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setRefundAmount(int32_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline int64_t refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundHandFee Field Functions 
    bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
    void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
    inline int32_t refundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setRefundHandFee(int32_t refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderList& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


  protected:
    std::shared_ptr<int32_t> corpRefundAmount_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketList>> flightOrderRefundTicketList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightRefundSegmentList>> flightRefundSegmentList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListPassengerFee>> passengerFee_ = nullptr;
    std::shared_ptr<vector<string>> passengerInfo_ = nullptr;
    std::shared_ptr<int32_t> personRefundAmount_ = nullptr;
    std::shared_ptr<int32_t> refundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundApplyId_ = nullptr;
    std::shared_ptr<int32_t> refundHandFee_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
