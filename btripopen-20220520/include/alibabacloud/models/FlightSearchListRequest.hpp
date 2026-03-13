// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_TO_JSON(transfer_city_code, transferCityCode_);
      DARABONBA_PTR_TO_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_TO_JSON(transfer_leave_date, transferLeaveDate_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_FROM_JSON(transfer_city_code, transferCityCode_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_no, transferFlightNo_);
      DARABONBA_PTR_FROM_JSON(transfer_leave_date, transferLeaveDate_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightSearchListRequest() = default ;
    FlightSearchListRequest(const FlightSearchListRequest &) = default ;
    FlightSearchListRequest(FlightSearchListRequest &&) = default ;
    FlightSearchListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListRequest() = default ;
    FlightSearchListRequest& operator=(const FlightSearchListRequest &) = default ;
    FlightSearchListRequest& operator=(FlightSearchListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrDate_ == nullptr && this->cabinClass_ == nullptr && this->depCityCode_ == nullptr
        && this->depCityName_ == nullptr && this->depDate_ == nullptr && this->flightNo_ == nullptr && this->needMultiClassPrice_ == nullptr && this->transferCityCode_ == nullptr
        && this->transferFlightNo_ == nullptr && this->transferLeaveDate_ == nullptr && this->tripType_ == nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightSearchListRequest& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightSearchListRequest& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightSearchListRequest& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline FlightSearchListRequest& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightSearchListRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightSearchListRequest& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightSearchListRequest& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightSearchListRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightSearchListRequest& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // needMultiClassPrice Field Functions 
    bool hasNeedMultiClassPrice() const { return this->needMultiClassPrice_ != nullptr;};
    void deleteNeedMultiClassPrice() { this->needMultiClassPrice_ = nullptr;};
    inline bool getNeedMultiClassPrice() const { DARABONBA_PTR_GET_DEFAULT(needMultiClassPrice_, false) };
    inline FlightSearchListRequest& setNeedMultiClassPrice(bool needMultiClassPrice) { DARABONBA_PTR_SET_VALUE(needMultiClassPrice_, needMultiClassPrice) };


    // transferCityCode Field Functions 
    bool hasTransferCityCode() const { return this->transferCityCode_ != nullptr;};
    void deleteTransferCityCode() { this->transferCityCode_ = nullptr;};
    inline string getTransferCityCode() const { DARABONBA_PTR_GET_DEFAULT(transferCityCode_, "") };
    inline FlightSearchListRequest& setTransferCityCode(string transferCityCode) { DARABONBA_PTR_SET_VALUE(transferCityCode_, transferCityCode) };


    // transferFlightNo Field Functions 
    bool hasTransferFlightNo() const { return this->transferFlightNo_ != nullptr;};
    void deleteTransferFlightNo() { this->transferFlightNo_ = nullptr;};
    inline string getTransferFlightNo() const { DARABONBA_PTR_GET_DEFAULT(transferFlightNo_, "") };
    inline FlightSearchListRequest& setTransferFlightNo(string transferFlightNo) { DARABONBA_PTR_SET_VALUE(transferFlightNo_, transferFlightNo) };


    // transferLeaveDate Field Functions 
    bool hasTransferLeaveDate() const { return this->transferLeaveDate_ != nullptr;};
    void deleteTransferLeaveDate() { this->transferLeaveDate_ = nullptr;};
    inline string getTransferLeaveDate() const { DARABONBA_PTR_GET_DEFAULT(transferLeaveDate_, "") };
    inline FlightSearchListRequest& setTransferLeaveDate(string transferLeaveDate) { DARABONBA_PTR_SET_VALUE(transferLeaveDate_, transferLeaveDate) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline string getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, "") };
    inline FlightSearchListRequest& setTripType(string tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    shared_ptr<string> airlineCode_ {};
    // This parameter is required.
    shared_ptr<string> arrCityCode_ {};
    shared_ptr<string> arrCityName_ {};
    shared_ptr<string> arrDate_ {};
    shared_ptr<string> cabinClass_ {};
    // This parameter is required.
    shared_ptr<string> depCityCode_ {};
    shared_ptr<string> depCityName_ {};
    // This parameter is required.
    shared_ptr<string> depDate_ {};
    shared_ptr<string> flightNo_ {};
    shared_ptr<bool> needMultiClassPrice_ {};
    shared_ptr<string> transferCityCode_ {};
    shared_ptr<string> transferFlightNo_ {};
    shared_ptr<string> transferLeaveDate_ {};
    // This parameter is required.
    shared_ptr<string> tripType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
