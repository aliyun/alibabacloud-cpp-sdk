// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUESTMODIFYFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUESTMODIFYFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingApplyRequestModifyFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyRequestModifyFlightInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyRequestModifyFlightInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
    };
    TicketChangingApplyRequestModifyFlightInfoList() = default ;
    TicketChangingApplyRequestModifyFlightInfoList(const TicketChangingApplyRequestModifyFlightInfoList &) = default ;
    TicketChangingApplyRequestModifyFlightInfoList(TicketChangingApplyRequestModifyFlightInfoList &&) = default ;
    TicketChangingApplyRequestModifyFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyRequestModifyFlightInfoList() = default ;
    TicketChangingApplyRequestModifyFlightInfoList& operator=(const TicketChangingApplyRequestModifyFlightInfoList &) = default ;
    TicketChangingApplyRequestModifyFlightInfoList& operator=(TicketChangingApplyRequestModifyFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->cabin_ != nullptr && this->depCity_ != nullptr && this->depDate_ != nullptr && this->flightNo_ != nullptr && this->passengerInfoList_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline TicketChangingApplyRequestModifyFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // passengerInfoList Field Functions 
    bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
    void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
    inline const vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList> & passengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList>) };
    inline vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList> passengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList>) };
    inline TicketChangingApplyRequestModifyFlightInfoList& setPassengerInfoList(const vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
    inline TicketChangingApplyRequestModifyFlightInfoList& setPassengerInfoList(vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> flightNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::TicketChangingApplyRequestModifyFlightInfoListPassengerInfoList>> passengerInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
