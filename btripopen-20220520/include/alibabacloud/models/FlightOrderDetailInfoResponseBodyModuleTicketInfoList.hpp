// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULETICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULETICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailInfoResponseBodyModuleTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailInfoResponseBodyModuleTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_TO_JSON(pnr_code, pnrCode_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailInfoResponseBodyModuleTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_FROM_JSON(pnr_code, pnrCode_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
    };
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList() = default ;
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList(const FlightOrderDetailInfoResponseBodyModuleTicketInfoList &) = default ;
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList(FlightOrderDetailInfoResponseBodyModuleTicketInfoList &&) = default ;
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailInfoResponseBodyModuleTicketInfoList() = default ;
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList& operator=(const FlightOrderDetailInfoResponseBodyModuleTicketInfoList &) = default ;
    FlightOrderDetailInfoResponseBodyModuleTicketInfoList& operator=(FlightOrderDetailInfoResponseBodyModuleTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openTicketStatus_ != nullptr
        && this->pnrCode_ != nullptr && this->ticketNo_ != nullptr && this->ticketStatus_ != nullptr; };
    // openTicketStatus Field Functions 
    bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
    void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
    inline string openTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTicketInfoList& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


    // pnrCode Field Functions 
    bool hasPnrCode() const { return this->pnrCode_ != nullptr;};
    void deletePnrCode() { this->pnrCode_ = nullptr;};
    inline string pnrCode() const { DARABONBA_PTR_GET_DEFAULT(pnrCode_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTicketInfoList& setPnrCode(string pnrCode) { DARABONBA_PTR_SET_VALUE(pnrCode_, pnrCode) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    std::shared_ptr<string> openTicketStatus_ = nullptr;
    std::shared_ptr<string> pnrCode_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
