// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModulePassengerTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModulePassengerTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(ticket_list, ticketList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModulePassengerTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(ticket_list, ticketList_);
    };
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList(const IntlFlightOrderDetailResponseBodyModulePassengerTicketList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList(IntlFlightOrderDetailResponseBodyModulePassengerTicketList &&) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModulePassengerTicketList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList& operator=(const IntlFlightOrderDetailResponseBodyModulePassengerTicketList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketList& operator=(IntlFlightOrderDetailResponseBodyModulePassengerTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->ticketList_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // ticketList Field Functions 
    bool hasTicketList() const { return this->ticketList_ != nullptr;};
    void deleteTicketList() { this->ticketList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList> & ticketList() const { DARABONBA_PTR_GET_CONST(ticketList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList> ticketList() { DARABONBA_PTR_GET(ticketList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList>) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketList& setTicketList(const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList> & ticketList) { DARABONBA_PTR_SET_VALUE(ticketList_, ticketList) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketList& setTicketList(vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList> && ticketList) { DARABONBA_PTR_SET_RVALUE(ticketList_, ticketList) };


  protected:
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList>> ticketList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
