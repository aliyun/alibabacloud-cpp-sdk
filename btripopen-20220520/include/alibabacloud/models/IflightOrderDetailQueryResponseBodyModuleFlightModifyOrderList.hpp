// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList.hpp>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(flight_modify_segment_list, flightModifySegmentList_);
      DARABONBA_PTR_TO_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
      DARABONBA_PTR_TO_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_TO_JSON(modify_fee, modifyFee_);
      DARABONBA_PTR_TO_JSON(modify_order_status, modifyOrderStatus_);
      DARABONBA_PTR_TO_JSON(modify_total_fee, modifyTotalFee_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_TO_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(submit_modify_time, submitModifyTime_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(flight_modify_segment_list, flightModifySegmentList_);
      DARABONBA_PTR_FROM_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
      DARABONBA_PTR_FROM_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_FROM_JSON(modify_fee, modifyFee_);
      DARABONBA_PTR_FROM_JSON(modify_order_status, modifyOrderStatus_);
      DARABONBA_PTR_FROM_JSON(modify_total_fee, modifyTotalFee_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_FROM_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(submit_modify_time, submitModifyTime_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList(const IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList(IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList &&) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& operator=(const IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& operator=(IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpPayPrice_ != nullptr
        && this->flightModifySegmentList_ != nullptr && this->flightOrderModifyTicketList_ != nullptr && this->modifyApplyId_ != nullptr && this->modifyFee_ != nullptr && this->modifyOrderStatus_ != nullptr
        && this->modifyTotalFee_ != nullptr && this->passengerList_ != nullptr && this->personPayPrice_ != nullptr && this->relateModifyApplyId_ != nullptr && this->serviceFee_ != nullptr
        && this->submitModifyTime_ != nullptr && this->voluntary_ != nullptr; };
    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int32_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setCorpPayPrice(int32_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // flightModifySegmentList Field Functions 
    bool hasFlightModifySegmentList() const { return this->flightModifySegmentList_ != nullptr;};
    void deleteFlightModifySegmentList() { this->flightModifySegmentList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> & flightModifySegmentList() const { DARABONBA_PTR_GET_CONST(flightModifySegmentList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> flightModifySegmentList() { DARABONBA_PTR_GET(flightModifySegmentList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setFlightModifySegmentList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> & flightModifySegmentList) { DARABONBA_PTR_SET_VALUE(flightModifySegmentList_, flightModifySegmentList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setFlightModifySegmentList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> && flightModifySegmentList) { DARABONBA_PTR_SET_RVALUE(flightModifySegmentList_, flightModifySegmentList) };


    // flightOrderModifyTicketList Field Functions 
    bool hasFlightOrderModifyTicketList() const { return this->flightOrderModifyTicketList_ != nullptr;};
    void deleteFlightOrderModifyTicketList() { this->flightOrderModifyTicketList_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> & flightOrderModifyTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderModifyTicketList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> flightOrderModifyTicketList() { DARABONBA_PTR_GET(flightOrderModifyTicketList_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setFlightOrderModifyTicketList(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> & flightOrderModifyTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setFlightOrderModifyTicketList(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> && flightOrderModifyTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };


    // modifyApplyId Field Functions 
    bool hasModifyApplyId() const { return this->modifyApplyId_ != nullptr;};
    void deleteModifyApplyId() { this->modifyApplyId_ = nullptr;};
    inline int64_t modifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(modifyApplyId_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setModifyApplyId(int64_t modifyApplyId) { DARABONBA_PTR_SET_VALUE(modifyApplyId_, modifyApplyId) };


    // modifyFee Field Functions 
    bool hasModifyFee() const { return this->modifyFee_ != nullptr;};
    void deleteModifyFee() { this->modifyFee_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee> & modifyFee() const { DARABONBA_PTR_GET_CONST(modifyFee_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee> modifyFee() { DARABONBA_PTR_GET(modifyFee_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setModifyFee(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee> & modifyFee) { DARABONBA_PTR_SET_VALUE(modifyFee_, modifyFee) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setModifyFee(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee> && modifyFee) { DARABONBA_PTR_SET_RVALUE(modifyFee_, modifyFee) };


    // modifyOrderStatus Field Functions 
    bool hasModifyOrderStatus() const { return this->modifyOrderStatus_ != nullptr;};
    void deleteModifyOrderStatus() { this->modifyOrderStatus_ = nullptr;};
    inline int32_t modifyOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(modifyOrderStatus_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setModifyOrderStatus(int32_t modifyOrderStatus) { DARABONBA_PTR_SET_VALUE(modifyOrderStatus_, modifyOrderStatus) };


    // modifyTotalFee Field Functions 
    bool hasModifyTotalFee() const { return this->modifyTotalFee_ != nullptr;};
    void deleteModifyTotalFee() { this->modifyTotalFee_ = nullptr;};
    inline int32_t modifyTotalFee() const { DARABONBA_PTR_GET_DEFAULT(modifyTotalFee_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setModifyTotalFee(int32_t modifyTotalFee) { DARABONBA_PTR_SET_VALUE(modifyTotalFee_, modifyTotalFee) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<string> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<string>) };
    inline vector<string> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<string>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setPassengerList(const vector<string> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setPassengerList(vector<string> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // personPayPrice Field Functions 
    bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
    void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
    inline int32_t personPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setPersonPayPrice(int32_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


    // relateModifyApplyId Field Functions 
    bool hasRelateModifyApplyId() const { return this->relateModifyApplyId_ != nullptr;};
    void deleteRelateModifyApplyId() { this->relateModifyApplyId_ = nullptr;};
    inline int64_t relateModifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateModifyApplyId_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setRelateModifyApplyId(int64_t relateModifyApplyId) { DARABONBA_PTR_SET_VALUE(relateModifyApplyId_, relateModifyApplyId) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // submitModifyTime Field Functions 
    bool hasSubmitModifyTime() const { return this->submitModifyTime_ != nullptr;};
    void deleteSubmitModifyTime() { this->submitModifyTime_ = nullptr;};
    inline string submitModifyTime() const { DARABONBA_PTR_GET_DEFAULT(submitModifyTime_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setSubmitModifyTime(string submitModifyTime) { DARABONBA_PTR_SET_VALUE(submitModifyTime_, submitModifyTime) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<int32_t> corpPayPrice_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>> flightModifySegmentList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>> flightOrderModifyTicketList_ = nullptr;
    std::shared_ptr<int64_t> modifyApplyId_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightModifyOrderListModifyFee>> modifyFee_ = nullptr;
    std::shared_ptr<int32_t> modifyOrderStatus_ = nullptr;
    std::shared_ptr<int32_t> modifyTotalFee_ = nullptr;
    std::shared_ptr<vector<string>> passengerList_ = nullptr;
    std::shared_ptr<int32_t> personPayPrice_ = nullptr;
    std::shared_ptr<int64_t> relateModifyApplyId_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
    std::shared_ptr<string> submitModifyTime_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
