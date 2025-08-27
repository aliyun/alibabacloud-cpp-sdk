// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLISTFLIGHTORDERMODIFYTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLISTFLIGHTORDERMODIFYTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& operator=(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->flightNo_ != nullptr && this->ticketNo_ != nullptr && this->userId_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass> & cabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass> cabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& setCabinClass(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& setCabinClass(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListFlightOrderModifyTicketListCabinClass>> cabinClass_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
