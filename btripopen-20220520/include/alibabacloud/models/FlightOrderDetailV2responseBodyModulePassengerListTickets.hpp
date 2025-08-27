// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTTICKETS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTTICKETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModulePassengerListTickets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModulePassengerListTickets& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(journey_title, journeyTitle_);
      DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_TO_JSON(pcc, pcc_);
      DARABONBA_PTR_TO_JSON(segment_open_ticket_list, segmentOpenTicketList_);
      DARABONBA_PTR_TO_JSON(ticket_auth_memo, ticketAuthMemo_);
      DARABONBA_PTR_TO_JSON(ticket_auth_status, ticketAuthStatus_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModulePassengerListTickets& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(journey_title, journeyTitle_);
      DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_FROM_JSON(pcc, pcc_);
      DARABONBA_PTR_FROM_JSON(segment_open_ticket_list, segmentOpenTicketList_);
      DARABONBA_PTR_FROM_JSON(ticket_auth_memo, ticketAuthMemo_);
      DARABONBA_PTR_FROM_JSON(ticket_auth_status, ticketAuthStatus_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
    };
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets(const FlightOrderDetailV2ResponseBodyModulePassengerListTickets &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets(FlightOrderDetailV2ResponseBodyModulePassengerListTickets &&) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModulePassengerListTickets() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets& operator=(const FlightOrderDetailV2ResponseBodyModulePassengerListTickets &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTickets& operator=(FlightOrderDetailV2ResponseBodyModulePassengerListTickets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->journeyTitle_ != nullptr && this->openTicketStatus_ != nullptr && this->pcc_ != nullptr && this->segmentOpenTicketList_ != nullptr && this->ticketAuthMemo_ != nullptr
        && this->ticketAuthStatus_ != nullptr && this->ticketNo_ != nullptr && this->ticketPrice_ != nullptr && this->ticketStatus_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // journeyTitle Field Functions 
    bool hasJourneyTitle() const { return this->journeyTitle_ != nullptr;};
    void deleteJourneyTitle() { this->journeyTitle_ = nullptr;};
    inline string journeyTitle() const { DARABONBA_PTR_GET_DEFAULT(journeyTitle_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setJourneyTitle(string journeyTitle) { DARABONBA_PTR_SET_VALUE(journeyTitle_, journeyTitle) };


    // openTicketStatus Field Functions 
    bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
    void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
    inline string openTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


    // pcc Field Functions 
    bool hasPcc() const { return this->pcc_ != nullptr;};
    void deletePcc() { this->pcc_ = nullptr;};
    inline string pcc() const { DARABONBA_PTR_GET_DEFAULT(pcc_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setPcc(string pcc) { DARABONBA_PTR_SET_VALUE(pcc_, pcc) };


    // segmentOpenTicketList Field Functions 
    bool hasSegmentOpenTicketList() const { return this->segmentOpenTicketList_ != nullptr;};
    void deleteSegmentOpenTicketList() { this->segmentOpenTicketList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList> & segmentOpenTicketList() const { DARABONBA_PTR_GET_CONST(segmentOpenTicketList_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList> segmentOpenTicketList() { DARABONBA_PTR_GET(segmentOpenTicketList_, vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList>) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setSegmentOpenTicketList(const vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList> & segmentOpenTicketList) { DARABONBA_PTR_SET_VALUE(segmentOpenTicketList_, segmentOpenTicketList) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setSegmentOpenTicketList(vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList> && segmentOpenTicketList) { DARABONBA_PTR_SET_RVALUE(segmentOpenTicketList_, segmentOpenTicketList) };


    // ticketAuthMemo Field Functions 
    bool hasTicketAuthMemo() const { return this->ticketAuthMemo_ != nullptr;};
    void deleteTicketAuthMemo() { this->ticketAuthMemo_ = nullptr;};
    inline string ticketAuthMemo() const { DARABONBA_PTR_GET_DEFAULT(ticketAuthMemo_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setTicketAuthMemo(string ticketAuthMemo) { DARABONBA_PTR_SET_VALUE(ticketAuthMemo_, ticketAuthMemo) };


    // ticketAuthStatus Field Functions 
    bool hasTicketAuthStatus() const { return this->ticketAuthStatus_ != nullptr;};
    void deleteTicketAuthStatus() { this->ticketAuthStatus_ = nullptr;};
    inline int32_t ticketAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketAuthStatus_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setTicketAuthStatus(int32_t ticketAuthStatus) { DARABONBA_PTR_SET_VALUE(ticketAuthStatus_, ticketAuthStatus) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTickets& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> journeyTitle_ = nullptr;
    std::shared_ptr<string> openTicketStatus_ = nullptr;
    // pcc/office
    std::shared_ptr<string> pcc_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList>> segmentOpenTicketList_ = nullptr;
    std::shared_ptr<string> ticketAuthMemo_ = nullptr;
    std::shared_ptr<int32_t> ticketAuthStatus_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
