// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYREQUESTCHANGEDJOURNEYSSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYREQUESTCHANGEDJOURNEYSSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyRequestChangedJourneysSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyRequestChangedJourneysSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(arrive_terminal, arriveTerminal_);
      DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_TO_JSON(arrive_time_str, arriveTimeStr_);
      DARABONBA_PTR_TO_JSON(code_share, codeShare_);
      DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
      DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
      DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
      DARABONBA_PTR_TO_JSON(departure_time_str, departureTimeStr_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyRequestChangedJourneysSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(arrive_terminal, arriveTerminal_);
      DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
      DARABONBA_PTR_FROM_JSON(arrive_time_str, arriveTimeStr_);
      DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
      DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
      DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
      DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
      DARABONBA_PTR_FROM_JSON(departure_time_str, departureTimeStr_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
    };
    ChangeApplyRequestChangedJourneysSegmentList() = default ;
    ChangeApplyRequestChangedJourneysSegmentList(const ChangeApplyRequestChangedJourneysSegmentList &) = default ;
    ChangeApplyRequestChangedJourneysSegmentList(ChangeApplyRequestChangedJourneysSegmentList &&) = default ;
    ChangeApplyRequestChangedJourneysSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyRequestChangedJourneysSegmentList() = default ;
    ChangeApplyRequestChangedJourneysSegmentList& operator=(const ChangeApplyRequestChangedJourneysSegmentList &) = default ;
    ChangeApplyRequestChangedJourneysSegmentList& operator=(ChangeApplyRequestChangedJourneysSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && return this->arrivalCity_ == nullptr && return this->arriveTerminal_ == nullptr && return this->arriveTime_ == nullptr && return this->arriveTimeStr_ == nullptr && return this->codeShare_ == nullptr
        && return this->departureAirport_ == nullptr && return this->departureCity_ == nullptr && return this->departureDate_ == nullptr && return this->departureTerminal_ == nullptr && return this->departureTime_ == nullptr
        && return this->departureTimeStr_ == nullptr && return this->marketingFlightNo_ == nullptr && return this->operatingFlightNo_ == nullptr; };
    // arrivalAirport Field Functions 
    bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
    void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
    inline string arrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // arriveTerminal Field Functions 
    bool hasArriveTerminal() const { return this->arriveTerminal_ != nullptr;};
    void deleteArriveTerminal() { this->arriveTerminal_ = nullptr;};
    inline string arriveTerminal() const { DARABONBA_PTR_GET_DEFAULT(arriveTerminal_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setArriveTerminal(string arriveTerminal) { DARABONBA_PTR_SET_VALUE(arriveTerminal_, arriveTerminal) };


    // arriveTime Field Functions 
    bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
    void deleteArriveTime() { this->arriveTime_ = nullptr;};
    inline int64_t arriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, 0L) };
    inline ChangeApplyRequestChangedJourneysSegmentList& setArriveTime(int64_t arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


    // arriveTimeStr Field Functions 
    bool hasArriveTimeStr() const { return this->arriveTimeStr_ != nullptr;};
    void deleteArriveTimeStr() { this->arriveTimeStr_ = nullptr;};
    inline string arriveTimeStr() const { DARABONBA_PTR_GET_DEFAULT(arriveTimeStr_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setArriveTimeStr(string arriveTimeStr) { DARABONBA_PTR_SET_VALUE(arriveTimeStr_, arriveTimeStr) };


    // codeShare Field Functions 
    bool hasCodeShare() const { return this->codeShare_ != nullptr;};
    void deleteCodeShare() { this->codeShare_ = nullptr;};
    inline bool codeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
    inline ChangeApplyRequestChangedJourneysSegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


    // departureAirport Field Functions 
    bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
    void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
    inline string departureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureDate Field Functions 
    bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
    void deleteDepartureDate() { this->departureDate_ = nullptr;};
    inline string departureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


    // departureTerminal Field Functions 
    bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
    void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
    inline string departureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


    // departureTime Field Functions 
    bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
    void deleteDepartureTime() { this->departureTime_ = nullptr;};
    inline int64_t departureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, 0L) };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureTime(int64_t departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


    // departureTimeStr Field Functions 
    bool hasDepartureTimeStr() const { return this->departureTimeStr_ != nullptr;};
    void deleteDepartureTimeStr() { this->departureTimeStr_ = nullptr;};
    inline string departureTimeStr() const { DARABONBA_PTR_GET_DEFAULT(departureTimeStr_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setDepartureTimeStr(string departureTimeStr) { DARABONBA_PTR_SET_VALUE(departureTimeStr_, departureTimeStr) };


    // marketingFlightNo Field Functions 
    bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
    void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
    inline string marketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline ChangeApplyRequestChangedJourneysSegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


  protected:
    std::shared_ptr<string> arrivalAirport_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> arrivalCity_ = nullptr;
    std::shared_ptr<string> arriveTerminal_ = nullptr;
    std::shared_ptr<int64_t> arriveTime_ = nullptr;
    std::shared_ptr<string> arriveTimeStr_ = nullptr;
    std::shared_ptr<bool> codeShare_ = nullptr;
    std::shared_ptr<string> departureAirport_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureDate_ = nullptr;
    std::shared_ptr<string> departureTerminal_ = nullptr;
    std::shared_ptr<int64_t> departureTime_ = nullptr;
    std::shared_ptr<string> departureTimeStr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> marketingFlightNo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
