// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPAPPLYTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTRESHOPAPPLYLISTFLIGHTRESHOPAPPLYTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_list, flightList_);
      DARABONBA_PTR_TO_JSON(relate_ticket_no_list, relateTicketNoList_);
      DARABONBA_PTR_TO_JSON(ticket_no_list, ticketNoList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
      DARABONBA_PTR_FROM_JSON(relate_ticket_no_list, relateTicketNoList_);
      DARABONBA_PTR_FROM_JSON(ticket_no_list, ticketNoList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightList_ != nullptr
        && this->relateTicketNoList_ != nullptr && this->ticketNoList_ != nullptr && this->userId_ != nullptr; };
    // flightList Field Functions 
    bool hasFlightList() const { return this->flightList_ != nullptr;};
    void deleteFlightList() { this->flightList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList> & flightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList> flightList() { DARABONBA_PTR_GET(flightList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setFlightList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setFlightList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


    // relateTicketNoList Field Functions 
    bool hasRelateTicketNoList() const { return this->relateTicketNoList_ != nullptr;};
    void deleteRelateTicketNoList() { this->relateTicketNoList_ = nullptr;};
    inline const vector<string> & relateTicketNoList() const { DARABONBA_PTR_GET_CONST(relateTicketNoList_, vector<string>) };
    inline vector<string> relateTicketNoList() { DARABONBA_PTR_GET(relateTicketNoList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setRelateTicketNoList(const vector<string> & relateTicketNoList) { DARABONBA_PTR_SET_VALUE(relateTicketNoList_, relateTicketNoList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setRelateTicketNoList(vector<string> && relateTicketNoList) { DARABONBA_PTR_SET_RVALUE(relateTicketNoList_, relateTicketNoList) };


    // ticketNoList Field Functions 
    bool hasTicketNoList() const { return this->ticketNoList_ != nullptr;};
    void deleteTicketNoList() { this->ticketNoList_ = nullptr;};
    inline const vector<string> & ticketNoList() const { DARABONBA_PTR_GET_CONST(ticketNoList_, vector<string>) };
    inline vector<string> ticketNoList() { DARABONBA_PTR_GET(ticketNoList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setTicketNoList(const vector<string> & ticketNoList) { DARABONBA_PTR_SET_VALUE(ticketNoList_, ticketNoList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setTicketNoList(vector<string> && ticketNoList) { DARABONBA_PTR_SET_RVALUE(ticketNoList_, ticketNoList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyListFlightReshopApplyTicketListFlightList>> flightList_ = nullptr;
    std::shared_ptr<vector<string>> relateTicketNoList_ = nullptr;
    std::shared_ptr<vector<string>> ticketNoList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
