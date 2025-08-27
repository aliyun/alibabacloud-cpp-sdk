// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
    };
    TicketChangingEnquiryResponseBodyModule() = default ;
    TicketChangingEnquiryResponseBodyModule(const TicketChangingEnquiryResponseBodyModule &) = default ;
    TicketChangingEnquiryResponseBodyModule(TicketChangingEnquiryResponseBodyModule &&) = default ;
    TicketChangingEnquiryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModule() = default ;
    TicketChangingEnquiryResponseBodyModule& operator=(const TicketChangingEnquiryResponseBodyModule &) = default ;
    TicketChangingEnquiryResponseBodyModule& operator=(TicketChangingEnquiryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightInfoList_ != nullptr; };
    // flightInfoList Field Functions 
    bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
    void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList> & flightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList> flightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList>) };
    inline TicketChangingEnquiryResponseBodyModule& setFlightInfoList(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
    inline TicketChangingEnquiryResponseBodyModule& setFlightInfoList(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


  protected:
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoList>> flightInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
