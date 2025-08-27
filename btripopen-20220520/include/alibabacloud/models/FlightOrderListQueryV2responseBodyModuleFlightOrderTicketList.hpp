// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTORDERTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTORDERTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(flight_list, flightList_);
      DARABONBA_PTR_TO_JSON(ticket_no_list, ticketNoList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
      DARABONBA_PTR_FROM_JSON(ticket_no_list, ticketNoList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList(const FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList(FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightList_ != nullptr
        && this->ticketNoList_ != nullptr && this->userId_ != nullptr; };
    // flightList Field Functions 
    bool hasFlightList() const { return this->flightList_ != nullptr;};
    void deleteFlightList() { this->flightList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList> & flightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList> flightList() { DARABONBA_PTR_GET(flightList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& setFlightList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& setFlightList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


    // ticketNoList Field Functions 
    bool hasTicketNoList() const { return this->ticketNoList_ != nullptr;};
    void deleteTicketNoList() { this->ticketNoList_ = nullptr;};
    inline const vector<string> & ticketNoList() const { DARABONBA_PTR_GET_CONST(ticketNoList_, vector<string>) };
    inline vector<string> ticketNoList() { DARABONBA_PTR_GET(ticketNoList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& setTicketNoList(const vector<string> & ticketNoList) { DARABONBA_PTR_SET_VALUE(ticketNoList_, ticketNoList) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& setTicketNoList(vector<string> && ticketNoList) { DARABONBA_PTR_SET_RVALUE(ticketNoList_, ticketNoList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketListFlightList>> flightList_ = nullptr;
    std::shared_ptr<vector<string>> ticketNoList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
