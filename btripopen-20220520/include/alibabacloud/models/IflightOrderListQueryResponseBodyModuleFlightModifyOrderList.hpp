// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(flight_modify_segment_list, flightModifySegmentList_);
      DARABONBA_PTR_TO_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
      DARABONBA_PTR_TO_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_fee, passengerFee_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_TO_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(total_fee, totalFee_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(flight_modify_segment_list, flightModifySegmentList_);
      DARABONBA_PTR_FROM_JSON(flight_order_modify_ticket_list, flightOrderModifyTicketList_);
      DARABONBA_PTR_FROM_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_fee, passengerFee_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_FROM_JSON(relate_modify_apply_id, relateModifyApplyId_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(total_fee, totalFee_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& operator=(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpPayPrice_ != nullptr
        && this->flightModifySegmentList_ != nullptr && this->flightOrderModifyTicketList_ != nullptr && this->modifyApplyId_ != nullptr && this->passengerFee_ != nullptr && this->passengerList_ != nullptr
        && this->personPayPrice_ != nullptr && this->relateModifyApplyId_ != nullptr && this->serviceFee_ != nullptr && this->totalFee_ != nullptr; };
    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int32_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setCorpPayPrice(int32_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // flightModifySegmentList Field Functions 
    bool hasFlightModifySegmentList() const { return this->flightModifySegmentList_ != nullptr;};
    void deleteFlightModifySegmentList() { this->flightModifySegmentList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> & flightModifySegmentList() const { DARABONBA_PTR_GET_CONST(flightModifySegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> flightModifySegmentList() { DARABONBA_PTR_GET(flightModifySegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setFlightModifySegmentList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> & flightModifySegmentList) { DARABONBA_PTR_SET_VALUE(flightModifySegmentList_, flightModifySegmentList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setFlightModifySegmentList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList> && flightModifySegmentList) { DARABONBA_PTR_SET_RVALUE(flightModifySegmentList_, flightModifySegmentList) };


    // flightOrderModifyTicketList Field Functions 
    bool hasFlightOrderModifyTicketList() const { return this->flightOrderModifyTicketList_ != nullptr;};
    void deleteFlightOrderModifyTicketList() { this->flightOrderModifyTicketList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> & flightOrderModifyTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderModifyTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> flightOrderModifyTicketList() { DARABONBA_PTR_GET(flightOrderModifyTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setFlightOrderModifyTicketList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> & flightOrderModifyTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setFlightOrderModifyTicketList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList> && flightOrderModifyTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderModifyTicketList_, flightOrderModifyTicketList) };


    // modifyApplyId Field Functions 
    bool hasModifyApplyId() const { return this->modifyApplyId_ != nullptr;};
    void deleteModifyApplyId() { this->modifyApplyId_ = nullptr;};
    inline int64_t modifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(modifyApplyId_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setModifyApplyId(int64_t modifyApplyId) { DARABONBA_PTR_SET_VALUE(modifyApplyId_, modifyApplyId) };


    // passengerFee Field Functions 
    bool hasPassengerFee() const { return this->passengerFee_ != nullptr;};
    void deletePassengerFee() { this->passengerFee_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee> & passengerFee() const { DARABONBA_PTR_GET_CONST(passengerFee_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee> passengerFee() { DARABONBA_PTR_GET(passengerFee_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setPassengerFee(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee> & passengerFee) { DARABONBA_PTR_SET_VALUE(passengerFee_, passengerFee) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setPassengerFee(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee> && passengerFee) { DARABONBA_PTR_SET_RVALUE(passengerFee_, passengerFee) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<string> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<string>) };
    inline vector<string> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<string>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setPassengerList(const vector<string> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setPassengerList(vector<string> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // personPayPrice Field Functions 
    bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
    void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
    inline int32_t personPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setPersonPayPrice(int32_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


    // relateModifyApplyId Field Functions 
    bool hasRelateModifyApplyId() const { return this->relateModifyApplyId_ != nullptr;};
    void deleteRelateModifyApplyId() { this->relateModifyApplyId_ = nullptr;};
    inline int64_t relateModifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateModifyApplyId_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setRelateModifyApplyId(int64_t relateModifyApplyId) { DARABONBA_PTR_SET_VALUE(relateModifyApplyId_, relateModifyApplyId) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // totalFee Field Functions 
    bool hasTotalFee() const { return this->totalFee_ != nullptr;};
    void deleteTotalFee() { this->totalFee_ = nullptr;};
    inline int64_t totalFee() const { DARABONBA_PTR_GET_DEFAULT(totalFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderList& setTotalFee(int64_t totalFee) { DARABONBA_PTR_SET_VALUE(totalFee_, totalFee) };


  protected:
    std::shared_ptr<int32_t> corpPayPrice_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightModifySegmentList>> flightModifySegmentList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList>> flightOrderModifyTicketList_ = nullptr;
    std::shared_ptr<int64_t> modifyApplyId_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee>> passengerFee_ = nullptr;
    std::shared_ptr<vector<string>> passengerList_ = nullptr;
    std::shared_ptr<int32_t> personPayPrice_ = nullptr;
    std::shared_ptr<int64_t> relateModifyApplyId_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
    std::shared_ptr<int64_t> totalFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
