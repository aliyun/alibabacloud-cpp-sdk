// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
    };
    TicketChangingFlightListResponseBodyModule() = default ;
    TicketChangingFlightListResponseBodyModule(const TicketChangingFlightListResponseBodyModule &) = default ;
    TicketChangingFlightListResponseBodyModule(TicketChangingFlightListResponseBodyModule &&) = default ;
    TicketChangingFlightListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListResponseBodyModule() = default ;
    TicketChangingFlightListResponseBodyModule& operator=(const TicketChangingFlightListResponseBodyModule &) = default ;
    TicketChangingFlightListResponseBodyModule& operator=(TicketChangingFlightListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightInfoList_ != nullptr; };
    // flightInfoList Field Functions 
    bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
    void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
    inline const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList> & flightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList>) };
    inline vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList> flightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList>) };
    inline TicketChangingFlightListResponseBodyModule& setFlightInfoList(const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
    inline TicketChangingFlightListResponseBodyModule& setFlightInfoList(vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


  protected:
    std::shared_ptr<vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoList>> flightInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
