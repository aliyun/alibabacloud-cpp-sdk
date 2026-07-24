// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ChangeDetailResponseBody() = default ;
    ChangeDetailResponseBody(const ChangeDetailResponseBody &) = default ;
    ChangeDetailResponseBody(ChangeDetailResponseBody &&) = default ;
    ChangeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBody() = default ;
    ChangeDetailResponseBody& operator=(const ChangeDetailResponseBody &) = default ;
    ChangeDetailResponseBody& operator=(ChangeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(change_fee_details, changeFeeDetails_);
        DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
        DARABONBA_PTR_TO_JSON(change_passengers, changePassengers_);
        DARABONBA_PTR_TO_JSON(change_reason_type, changeReasonType_);
        DARABONBA_PTR_TO_JSON(changed_journeys, changedJourneys_);
        DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
        DARABONBA_PTR_TO_JSON(close_utc_time, closeUtcTime_);
        DARABONBA_PTR_TO_JSON(contact, contact_);
        DARABONBA_PTR_TO_JSON(create_utc_time, createUtcTime_);
        DARABONBA_PTR_TO_JSON(last_confirm_utc_time, lastConfirmUtcTime_);
        DARABONBA_PTR_TO_JSON(last_journeys, lastJourneys_);
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
        DARABONBA_PTR_TO_JSON(original_journeys, originalJourneys_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(pay_success_utc_time, paySuccessUtcTime_);
        DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
        DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(change_fee_details, changeFeeDetails_);
        DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
        DARABONBA_PTR_FROM_JSON(change_passengers, changePassengers_);
        DARABONBA_PTR_FROM_JSON(change_reason_type, changeReasonType_);
        DARABONBA_PTR_FROM_JSON(changed_journeys, changedJourneys_);
        DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
        DARABONBA_PTR_FROM_JSON(close_utc_time, closeUtcTime_);
        DARABONBA_PTR_FROM_JSON(contact, contact_);
        DARABONBA_PTR_FROM_JSON(create_utc_time, createUtcTime_);
        DARABONBA_PTR_FROM_JSON(last_confirm_utc_time, lastConfirmUtcTime_);
        DARABONBA_PTR_FROM_JSON(last_journeys, lastJourneys_);
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
        DARABONBA_PTR_FROM_JSON(original_journeys, originalJourneys_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(pay_success_utc_time, paySuccessUtcTime_);
        DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
        DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OriginalJourneys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginalJourneys& obj) { 
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
        };
        friend void from_json(const Darabonba::Json& j, OriginalJourneys& obj) { 
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
        };
        OriginalJourneys() = default ;
        OriginalJourneys(const OriginalJourneys &) = default ;
        OriginalJourneys(OriginalJourneys &&) = default ;
        OriginalJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginalJourneys() = default ;
        OriginalJourneys& operator=(const OriginalJourneys &) = default ;
        OriginalJourneys& operator=(OriginalJourneys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_TO_JSON(availability, availability_);
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(code_share, codeShare_);
            DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
            DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
            DARABONBA_PTR_TO_JSON(equip_type, equipType_);
            DARABONBA_PTR_TO_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
            DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_FROM_JSON(availability, availability_);
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
            DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
            DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
            DARABONBA_PTR_FROM_JSON(equip_type, equipType_);
            DARABONBA_PTR_FROM_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
            DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
          };
          SegmentList() = default ;
          SegmentList(const SegmentList &) = default ;
          SegmentList(SegmentList &&) = default ;
          SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentList() = default ;
          SegmentList& operator=(const SegmentList &) = default ;
          SegmentList& operator=(SegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->arrivalTerminal_ == nullptr && this->arrivalTime_ == nullptr && this->availability_ == nullptr && this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->codeShare_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr && this->departureTerminal_ == nullptr
        && this->departureTime_ == nullptr && this->equipType_ == nullptr && this->flightDuration_ == nullptr && this->marketingAirline_ == nullptr && this->marketingFlightNo_ == nullptr
        && this->marketingFlightNoInt_ == nullptr && this->operatingAirline_ == nullptr && this->operatingFlightNo_ == nullptr && this->segmentId_ == nullptr && this->stopCityList_ == nullptr
        && this->stopQuantity_ == nullptr; };
          // arrivalAirport Field Functions 
          bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
          void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
          inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
          inline SegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


          // arrivalCity Field Functions 
          bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
          void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
          inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
          inline SegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


          // arrivalTerminal Field Functions 
          bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
          void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
          inline string getArrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
          inline SegmentList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


          // arrivalTime Field Functions 
          bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
          void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
          inline string getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
          inline SegmentList& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


          // availability Field Functions 
          bool hasAvailability() const { return this->availability_ != nullptr;};
          void deleteAvailability() { this->availability_ = nullptr;};
          inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
          inline SegmentList& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline SegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline SegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // codeShare Field Functions 
          bool hasCodeShare() const { return this->codeShare_ != nullptr;};
          void deleteCodeShare() { this->codeShare_ = nullptr;};
          inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
          inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


          // departureAirport Field Functions 
          bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
          void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
          inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
          inline SegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


          // departureCity Field Functions 
          bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
          void deleteDepartureCity() { this->departureCity_ = nullptr;};
          inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
          inline SegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


          // departureTerminal Field Functions 
          bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
          void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
          inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
          inline SegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


          // departureTime Field Functions 
          bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
          void deleteDepartureTime() { this->departureTime_ = nullptr;};
          inline string getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
          inline SegmentList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


          // equipType Field Functions 
          bool hasEquipType() const { return this->equipType_ != nullptr;};
          void deleteEquipType() { this->equipType_ = nullptr;};
          inline string getEquipType() const { DARABONBA_PTR_GET_DEFAULT(equipType_, "") };
          inline SegmentList& setEquipType(string equipType) { DARABONBA_PTR_SET_VALUE(equipType_, equipType) };


          // flightDuration Field Functions 
          bool hasFlightDuration() const { return this->flightDuration_ != nullptr;};
          void deleteFlightDuration() { this->flightDuration_ = nullptr;};
          inline int32_t getFlightDuration() const { DARABONBA_PTR_GET_DEFAULT(flightDuration_, 0) };
          inline SegmentList& setFlightDuration(int32_t flightDuration) { DARABONBA_PTR_SET_VALUE(flightDuration_, flightDuration) };


          // marketingAirline Field Functions 
          bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
          void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
          inline string getMarketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
          inline SegmentList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


          // marketingFlightNo Field Functions 
          bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
          void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
          inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
          inline SegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


          // marketingFlightNoInt Field Functions 
          bool hasMarketingFlightNoInt() const { return this->marketingFlightNoInt_ != nullptr;};
          void deleteMarketingFlightNoInt() { this->marketingFlightNoInt_ = nullptr;};
          inline int32_t getMarketingFlightNoInt() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNoInt_, 0) };
          inline SegmentList& setMarketingFlightNoInt(int32_t marketingFlightNoInt) { DARABONBA_PTR_SET_VALUE(marketingFlightNoInt_, marketingFlightNoInt) };


          // operatingAirline Field Functions 
          bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
          void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
          inline string getOperatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
          inline SegmentList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


          // operatingFlightNo Field Functions 
          bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
          void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
          inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
          inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


          // segmentId Field Functions 
          bool hasSegmentId() const { return this->segmentId_ != nullptr;};
          void deleteSegmentId() { this->segmentId_ = nullptr;};
          inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
          inline SegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


          // stopCityList Field Functions 
          bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
          void deleteStopCityList() { this->stopCityList_ = nullptr;};
          inline string getStopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
          inline SegmentList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


          // stopQuantity Field Functions 
          bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
          void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
          inline int32_t getStopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
          inline SegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


        protected:
          // The three-letter IATA code of the arrival airport (uppercase).
          shared_ptr<string> arrivalAirport_ {};
          // The three-letter IATA code of the arrival city (uppercase).
          shared_ptr<string> arrivalCity_ {};
          // The arrival terminal.
          shared_ptr<string> arrivalTerminal_ {};
          // The arrival date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> arrivalTime_ {};
          // The number of remaining seats.
          shared_ptr<string> availability_ {};
          // The cabin code.
          shared_ptr<string> cabin_ {};
          // The cabin class.
          shared_ptr<string> cabinClass_ {};
          // Indicates whether the flight is a codeshare flight.
          shared_ptr<bool> codeShare_ {};
          // The three-letter IATA code of the departure airport (uppercase).
          shared_ptr<string> departureAirport_ {};
          // The three-letter IATA code of the departure city (uppercase).
          shared_ptr<string> departureCity_ {};
          // The departure terminal.
          shared_ptr<string> departureTerminal_ {};
          // The departure date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> departureTime_ {};
          // The aircraft type.
          shared_ptr<string> equipType_ {};
          // The flight duration, in minutes.
          shared_ptr<int32_t> flightDuration_ {};
          // The marketing airline code (such as HO).
          shared_ptr<string> marketingAirline_ {};
          // The marketing flight number (such as HO1295).
          shared_ptr<string> marketingFlightNo_ {};
          // The numeric marketing flight number (such as 1295).
          shared_ptr<int32_t> marketingFlightNoInt_ {};
          // The operating airline code (such as CX).
          shared_ptr<string> operatingAirline_ {};
          // The operating flight number (such as CX601).
          shared_ptr<string> operatingFlightNo_ {};
          // The segment ID. Format: flight number + departure airport + arrival airport + departure date (MMdd).
          shared_ptr<string> segmentId_ {};
          // The list of stopover cities. This parameter has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
          shared_ptr<string> stopCityList_ {};
          // The number of stopover cities.
          shared_ptr<int32_t> stopQuantity_ {};
        };

        virtual bool empty() const override { return this->segmentList_ == nullptr
        && this->transferCount_ == nullptr; };
        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline const vector<OriginalJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<OriginalJourneys::SegmentList>) };
        inline vector<OriginalJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<OriginalJourneys::SegmentList>) };
        inline OriginalJourneys& setSegmentList(const vector<OriginalJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
        inline OriginalJourneys& setSegmentList(vector<OriginalJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


        // transferCount Field Functions 
        bool hasTransferCount() const { return this->transferCount_ != nullptr;};
        void deleteTransferCount() { this->transferCount_ = nullptr;};
        inline int32_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
        inline OriginalJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


      protected:
        // The segment information.
        shared_ptr<vector<OriginalJourneys::SegmentList>> segmentList_ {};
        // The number of transfers.
        shared_ptr<int32_t> transferCount_ {};
      };

      class LastJourneys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastJourneys& obj) { 
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
        };
        friend void from_json(const Darabonba::Json& j, LastJourneys& obj) { 
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
        };
        LastJourneys() = default ;
        LastJourneys(const LastJourneys &) = default ;
        LastJourneys(LastJourneys &&) = default ;
        LastJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastJourneys() = default ;
        LastJourneys& operator=(const LastJourneys &) = default ;
        LastJourneys& operator=(LastJourneys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_TO_JSON(availability, availability_);
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(code_share, codeShare_);
            DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
            DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
            DARABONBA_PTR_TO_JSON(equip_type, equipType_);
            DARABONBA_PTR_TO_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
            DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_FROM_JSON(availability, availability_);
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
            DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
            DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
            DARABONBA_PTR_FROM_JSON(equip_type, equipType_);
            DARABONBA_PTR_FROM_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
            DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
          };
          SegmentList() = default ;
          SegmentList(const SegmentList &) = default ;
          SegmentList(SegmentList &&) = default ;
          SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentList() = default ;
          SegmentList& operator=(const SegmentList &) = default ;
          SegmentList& operator=(SegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->arrivalTerminal_ == nullptr && this->arrivalTime_ == nullptr && this->availability_ == nullptr && this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->codeShare_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr && this->departureTerminal_ == nullptr
        && this->departureTime_ == nullptr && this->equipType_ == nullptr && this->flightDuration_ == nullptr && this->marketingAirline_ == nullptr && this->marketingFlightNo_ == nullptr
        && this->marketingFlightNoInt_ == nullptr && this->operatingAirline_ == nullptr && this->operatingFlightNo_ == nullptr && this->segmentId_ == nullptr && this->stopCityList_ == nullptr
        && this->stopQuantity_ == nullptr; };
          // arrivalAirport Field Functions 
          bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
          void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
          inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
          inline SegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


          // arrivalCity Field Functions 
          bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
          void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
          inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
          inline SegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


          // arrivalTerminal Field Functions 
          bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
          void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
          inline string getArrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
          inline SegmentList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


          // arrivalTime Field Functions 
          bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
          void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
          inline string getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
          inline SegmentList& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


          // availability Field Functions 
          bool hasAvailability() const { return this->availability_ != nullptr;};
          void deleteAvailability() { this->availability_ = nullptr;};
          inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
          inline SegmentList& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline SegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline SegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // codeShare Field Functions 
          bool hasCodeShare() const { return this->codeShare_ != nullptr;};
          void deleteCodeShare() { this->codeShare_ = nullptr;};
          inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
          inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


          // departureAirport Field Functions 
          bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
          void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
          inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
          inline SegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


          // departureCity Field Functions 
          bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
          void deleteDepartureCity() { this->departureCity_ = nullptr;};
          inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
          inline SegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


          // departureTerminal Field Functions 
          bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
          void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
          inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
          inline SegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


          // departureTime Field Functions 
          bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
          void deleteDepartureTime() { this->departureTime_ = nullptr;};
          inline string getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
          inline SegmentList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


          // equipType Field Functions 
          bool hasEquipType() const { return this->equipType_ != nullptr;};
          void deleteEquipType() { this->equipType_ = nullptr;};
          inline string getEquipType() const { DARABONBA_PTR_GET_DEFAULT(equipType_, "") };
          inline SegmentList& setEquipType(string equipType) { DARABONBA_PTR_SET_VALUE(equipType_, equipType) };


          // flightDuration Field Functions 
          bool hasFlightDuration() const { return this->flightDuration_ != nullptr;};
          void deleteFlightDuration() { this->flightDuration_ = nullptr;};
          inline int32_t getFlightDuration() const { DARABONBA_PTR_GET_DEFAULT(flightDuration_, 0) };
          inline SegmentList& setFlightDuration(int32_t flightDuration) { DARABONBA_PTR_SET_VALUE(flightDuration_, flightDuration) };


          // marketingAirline Field Functions 
          bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
          void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
          inline string getMarketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
          inline SegmentList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


          // marketingFlightNo Field Functions 
          bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
          void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
          inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
          inline SegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


          // marketingFlightNoInt Field Functions 
          bool hasMarketingFlightNoInt() const { return this->marketingFlightNoInt_ != nullptr;};
          void deleteMarketingFlightNoInt() { this->marketingFlightNoInt_ = nullptr;};
          inline int32_t getMarketingFlightNoInt() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNoInt_, 0) };
          inline SegmentList& setMarketingFlightNoInt(int32_t marketingFlightNoInt) { DARABONBA_PTR_SET_VALUE(marketingFlightNoInt_, marketingFlightNoInt) };


          // operatingAirline Field Functions 
          bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
          void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
          inline string getOperatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
          inline SegmentList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


          // operatingFlightNo Field Functions 
          bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
          void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
          inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
          inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


          // segmentId Field Functions 
          bool hasSegmentId() const { return this->segmentId_ != nullptr;};
          void deleteSegmentId() { this->segmentId_ = nullptr;};
          inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
          inline SegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


          // stopCityList Field Functions 
          bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
          void deleteStopCityList() { this->stopCityList_ = nullptr;};
          inline string getStopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
          inline SegmentList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


          // stopQuantity Field Functions 
          bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
          void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
          inline int32_t getStopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
          inline SegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


        protected:
          // The three-letter IATA code of the arrival airport (uppercase).
          shared_ptr<string> arrivalAirport_ {};
          // The three-letter IATA code of the arrival city (uppercase).
          shared_ptr<string> arrivalCity_ {};
          // The arrival terminal.
          shared_ptr<string> arrivalTerminal_ {};
          // The arrival date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> arrivalTime_ {};
          // The number of remaining seats.
          shared_ptr<string> availability_ {};
          // The cabin code.
          shared_ptr<string> cabin_ {};
          // The cabin class.
          shared_ptr<string> cabinClass_ {};
          // Indicates whether the flight is a codeshare flight.
          shared_ptr<bool> codeShare_ {};
          // The three-letter IATA code of the departure airport (uppercase).
          shared_ptr<string> departureAirport_ {};
          // The three-letter IATA code of the departure city (uppercase).
          shared_ptr<string> departureCity_ {};
          // The departure terminal.
          shared_ptr<string> departureTerminal_ {};
          // The departure date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> departureTime_ {};
          // The aircraft type.
          shared_ptr<string> equipType_ {};
          // The flight duration, in minutes.
          shared_ptr<int32_t> flightDuration_ {};
          // The marketing airline code (such as HO).
          shared_ptr<string> marketingAirline_ {};
          // The marketing flight number (such as HO1295).
          shared_ptr<string> marketingFlightNo_ {};
          // The numeric marketing flight number (such as 1295).
          shared_ptr<int32_t> marketingFlightNoInt_ {};
          // The operating airline code (such as CX).
          shared_ptr<string> operatingAirline_ {};
          // The operating flight number (such as CX601).
          shared_ptr<string> operatingFlightNo_ {};
          // The segment ID. Format: flight number + departure airport + arrival airport + departure date (MMdd).
          shared_ptr<string> segmentId_ {};
          // The list of stopover cities. This parameter has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
          shared_ptr<string> stopCityList_ {};
          // The number of stopover cities.
          shared_ptr<int32_t> stopQuantity_ {};
        };

        virtual bool empty() const override { return this->segmentList_ == nullptr
        && this->transferCount_ == nullptr; };
        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline const vector<LastJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<LastJourneys::SegmentList>) };
        inline vector<LastJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<LastJourneys::SegmentList>) };
        inline LastJourneys& setSegmentList(const vector<LastJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
        inline LastJourneys& setSegmentList(vector<LastJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


        // transferCount Field Functions 
        bool hasTransferCount() const { return this->transferCount_ != nullptr;};
        void deleteTransferCount() { this->transferCount_ = nullptr;};
        inline int32_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
        inline LastJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


      protected:
        // The segment information.
        shared_ptr<vector<LastJourneys::SegmentList>> segmentList_ {};
        // The number of transfers.
        shared_ptr<int32_t> transferCount_ {};
      };

      class Contact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contact& obj) { 
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_TO_JSON(mobile_phone_num, mobilePhoneNum_);
        };
        friend void from_json(const Darabonba::Json& j, Contact& obj) { 
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_FROM_JSON(mobile_phone_num, mobilePhoneNum_);
        };
        Contact() = default ;
        Contact(const Contact &) = default ;
        Contact(Contact &&) = default ;
        Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contact() = default ;
        Contact& operator=(const Contact &) = default ;
        Contact& operator=(Contact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->mobileCountryCode_ == nullptr && this->mobilePhoneNum_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // mobileCountryCode Field Functions 
        bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
        void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
        inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
        inline Contact& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


        // mobilePhoneNum Field Functions 
        bool hasMobilePhoneNum() const { return this->mobilePhoneNum_ != nullptr;};
        void deleteMobilePhoneNum() { this->mobilePhoneNum_ = nullptr;};
        inline string getMobilePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNum_, "") };
        inline Contact& setMobilePhoneNum(string mobilePhoneNum) { DARABONBA_PTR_SET_VALUE(mobilePhoneNum_, mobilePhoneNum) };


      protected:
        // The email address.
        shared_ptr<string> email_ {};
        // The country calling code.
        shared_ptr<string> mobileCountryCode_ {};
        // The mobile phone number of the contact.
        shared_ptr<string> mobilePhoneNum_ {};
      };

      class ChangedJourneys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangedJourneys& obj) { 
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
        };
        friend void from_json(const Darabonba::Json& j, ChangedJourneys& obj) { 
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
        };
        ChangedJourneys() = default ;
        ChangedJourneys(const ChangedJourneys &) = default ;
        ChangedJourneys(ChangedJourneys &&) = default ;
        ChangedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangedJourneys() = default ;
        ChangedJourneys& operator=(const ChangedJourneys &) = default ;
        ChangedJourneys& operator=(ChangedJourneys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_TO_JSON(availability, availability_);
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(code_share, codeShare_);
            DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
            DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
            DARABONBA_PTR_TO_JSON(equip_type, equipType_);
            DARABONBA_PTR_TO_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_TO_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
            DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
            DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
            DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
            DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
            DARABONBA_PTR_FROM_JSON(availability, availability_);
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
            DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
            DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
            DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
            DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
            DARABONBA_PTR_FROM_JSON(equip_type, equipType_);
            DARABONBA_PTR_FROM_JSON(flight_duration, flightDuration_);
            DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
            DARABONBA_PTR_FROM_JSON(marketing_flight_no_int, marketingFlightNoInt_);
            DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
            DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
            DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
            DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
            DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
          };
          SegmentList() = default ;
          SegmentList(const SegmentList &) = default ;
          SegmentList(SegmentList &&) = default ;
          SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentList() = default ;
          SegmentList& operator=(const SegmentList &) = default ;
          SegmentList& operator=(SegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->arrivalTerminal_ == nullptr && this->arrivalTime_ == nullptr && this->availability_ == nullptr && this->cabin_ == nullptr
        && this->cabinClass_ == nullptr && this->codeShare_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr && this->departureTerminal_ == nullptr
        && this->departureTime_ == nullptr && this->equipType_ == nullptr && this->flightDuration_ == nullptr && this->marketingAirline_ == nullptr && this->marketingFlightNo_ == nullptr
        && this->marketingFlightNoInt_ == nullptr && this->operatingAirline_ == nullptr && this->operatingFlightNo_ == nullptr && this->segmentId_ == nullptr && this->stopCityList_ == nullptr
        && this->stopQuantity_ == nullptr; };
          // arrivalAirport Field Functions 
          bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
          void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
          inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
          inline SegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


          // arrivalCity Field Functions 
          bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
          void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
          inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
          inline SegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


          // arrivalTerminal Field Functions 
          bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
          void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
          inline string getArrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
          inline SegmentList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


          // arrivalTime Field Functions 
          bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
          void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
          inline string getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
          inline SegmentList& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


          // availability Field Functions 
          bool hasAvailability() const { return this->availability_ != nullptr;};
          void deleteAvailability() { this->availability_ = nullptr;};
          inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
          inline SegmentList& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline SegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline SegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // codeShare Field Functions 
          bool hasCodeShare() const { return this->codeShare_ != nullptr;};
          void deleteCodeShare() { this->codeShare_ = nullptr;};
          inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
          inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


          // departureAirport Field Functions 
          bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
          void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
          inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
          inline SegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


          // departureCity Field Functions 
          bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
          void deleteDepartureCity() { this->departureCity_ = nullptr;};
          inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
          inline SegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


          // departureTerminal Field Functions 
          bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
          void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
          inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
          inline SegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


          // departureTime Field Functions 
          bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
          void deleteDepartureTime() { this->departureTime_ = nullptr;};
          inline string getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
          inline SegmentList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


          // equipType Field Functions 
          bool hasEquipType() const { return this->equipType_ != nullptr;};
          void deleteEquipType() { this->equipType_ = nullptr;};
          inline string getEquipType() const { DARABONBA_PTR_GET_DEFAULT(equipType_, "") };
          inline SegmentList& setEquipType(string equipType) { DARABONBA_PTR_SET_VALUE(equipType_, equipType) };


          // flightDuration Field Functions 
          bool hasFlightDuration() const { return this->flightDuration_ != nullptr;};
          void deleteFlightDuration() { this->flightDuration_ = nullptr;};
          inline int32_t getFlightDuration() const { DARABONBA_PTR_GET_DEFAULT(flightDuration_, 0) };
          inline SegmentList& setFlightDuration(int32_t flightDuration) { DARABONBA_PTR_SET_VALUE(flightDuration_, flightDuration) };


          // marketingAirline Field Functions 
          bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
          void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
          inline string getMarketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
          inline SegmentList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


          // marketingFlightNo Field Functions 
          bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
          void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
          inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
          inline SegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


          // marketingFlightNoInt Field Functions 
          bool hasMarketingFlightNoInt() const { return this->marketingFlightNoInt_ != nullptr;};
          void deleteMarketingFlightNoInt() { this->marketingFlightNoInt_ = nullptr;};
          inline int32_t getMarketingFlightNoInt() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNoInt_, 0) };
          inline SegmentList& setMarketingFlightNoInt(int32_t marketingFlightNoInt) { DARABONBA_PTR_SET_VALUE(marketingFlightNoInt_, marketingFlightNoInt) };


          // operatingAirline Field Functions 
          bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
          void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
          inline string getOperatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
          inline SegmentList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


          // operatingFlightNo Field Functions 
          bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
          void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
          inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
          inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


          // segmentId Field Functions 
          bool hasSegmentId() const { return this->segmentId_ != nullptr;};
          void deleteSegmentId() { this->segmentId_ = nullptr;};
          inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
          inline SegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


          // stopCityList Field Functions 
          bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
          void deleteStopCityList() { this->stopCityList_ = nullptr;};
          inline string getStopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
          inline SegmentList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


          // stopQuantity Field Functions 
          bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
          void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
          inline int32_t getStopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
          inline SegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


        protected:
          // The three-letter IATA code of the arrival airport (uppercase).
          shared_ptr<string> arrivalAirport_ {};
          // The three-letter IATA code of the arrival city (uppercase).
          shared_ptr<string> arrivalCity_ {};
          // The arrival terminal.
          shared_ptr<string> arrivalTerminal_ {};
          // The arrival date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> arrivalTime_ {};
          // The number of remaining seats.
          shared_ptr<string> availability_ {};
          // The cabin code.
          shared_ptr<string> cabin_ {};
          // The cabin class.
          shared_ptr<string> cabinClass_ {};
          // Indicates whether the flight is a codeshare flight.
          shared_ptr<bool> codeShare_ {};
          // The three-letter IATA code of the departure airport (uppercase).
          shared_ptr<string> departureAirport_ {};
          // The three-letter IATA code of the departure city (uppercase).
          shared_ptr<string> departureCity_ {};
          // The departure terminal.
          shared_ptr<string> departureTerminal_ {};
          // The departure date and time in string format (yyyy-MM-dd HH:mm:ss).
          shared_ptr<string> departureTime_ {};
          // The aircraft type.
          shared_ptr<string> equipType_ {};
          // The flight duration, in minutes.
          shared_ptr<int32_t> flightDuration_ {};
          // The marketing airline code (such as HO).
          shared_ptr<string> marketingAirline_ {};
          // The marketing flight number (such as HO1295).
          shared_ptr<string> marketingFlightNo_ {};
          // The numeric marketing flight number (such as 1295).
          shared_ptr<int32_t> marketingFlightNoInt_ {};
          // The operating airline code (such as CX).
          shared_ptr<string> operatingAirline_ {};
          // The operating flight number (such as CX601).
          shared_ptr<string> operatingFlightNo_ {};
          // The segment ID. Format: flight number + departure airport + arrival airport + departure date (MMdd).
          shared_ptr<string> segmentId_ {};
          // The list of stopover cities. This parameter has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
          shared_ptr<string> stopCityList_ {};
          // The number of stopover cities.
          shared_ptr<int32_t> stopQuantity_ {};
        };

        virtual bool empty() const override { return this->segmentList_ == nullptr
        && this->transferCount_ == nullptr; };
        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline const vector<ChangedJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<ChangedJourneys::SegmentList>) };
        inline vector<ChangedJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<ChangedJourneys::SegmentList>) };
        inline ChangedJourneys& setSegmentList(const vector<ChangedJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
        inline ChangedJourneys& setSegmentList(vector<ChangedJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


        // transferCount Field Functions 
        bool hasTransferCount() const { return this->transferCount_ != nullptr;};
        void deleteTransferCount() { this->transferCount_ = nullptr;};
        inline int32_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
        inline ChangedJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


      protected:
        // The segment information.
        shared_ptr<vector<ChangedJourneys::SegmentList>> segmentList_ {};
        // The number of transfers.
        shared_ptr<int32_t> transferCount_ {};
      };

      class ChangePassengers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangePassengers& obj) { 
          DARABONBA_PTR_TO_JSON(document, document_);
          DARABONBA_PTR_TO_JSON(first_name, firstName_);
          DARABONBA_PTR_TO_JSON(last_name, lastName_);
        };
        friend void from_json(const Darabonba::Json& j, ChangePassengers& obj) { 
          DARABONBA_PTR_FROM_JSON(document, document_);
          DARABONBA_PTR_FROM_JSON(first_name, firstName_);
          DARABONBA_PTR_FROM_JSON(last_name, lastName_);
        };
        ChangePassengers() = default ;
        ChangePassengers(const ChangePassengers &) = default ;
        ChangePassengers(ChangePassengers &&) = default ;
        ChangePassengers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangePassengers() = default ;
        ChangePassengers& operator=(const ChangePassengers &) = default ;
        ChangePassengers& operator=(ChangePassengers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->document_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr; };
        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
        inline ChangePassengers& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


        // firstName Field Functions 
        bool hasFirstName() const { return this->firstName_ != nullptr;};
        void deleteFirstName() { this->firstName_ = nullptr;};
        inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
        inline ChangePassengers& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


        // lastName Field Functions 
        bool hasLastName() const { return this->lastName_ != nullptr;};
        void deleteLastName() { this->lastName_ = nullptr;};
        inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
        inline ChangePassengers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      protected:
        // The document number.
        shared_ptr<string> document_ {};
        // The first name of the passenger.
        shared_ptr<string> firstName_ {};
        // The last name of the passenger.
        shared_ptr<string> lastName_ {};
      };

      class ChangeFeeDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeFeeDetails& obj) { 
          DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
          DARABONBA_PTR_TO_JSON(passenger, passenger_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeFeeDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
          DARABONBA_PTR_FROM_JSON(passenger, passenger_);
        };
        ChangeFeeDetails() = default ;
        ChangeFeeDetails(const ChangeFeeDetails &) = default ;
        ChangeFeeDetails(ChangeFeeDetails &&) = default ;
        ChangeFeeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeFeeDetails() = default ;
        ChangeFeeDetails& operator=(const ChangeFeeDetails &) = default ;
        ChangeFeeDetails& operator=(ChangeFeeDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Passenger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Passenger& obj) { 
            DARABONBA_PTR_TO_JSON(document, document_);
            DARABONBA_PTR_TO_JSON(first_name, firstName_);
            DARABONBA_PTR_TO_JSON(last_name, lastName_);
          };
          friend void from_json(const Darabonba::Json& j, Passenger& obj) { 
            DARABONBA_PTR_FROM_JSON(document, document_);
            DARABONBA_PTR_FROM_JSON(first_name, firstName_);
            DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          };
          Passenger() = default ;
          Passenger(const Passenger &) = default ;
          Passenger(Passenger &&) = default ;
          Passenger(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Passenger() = default ;
          Passenger& operator=(const Passenger &) = default ;
          Passenger& operator=(Passenger &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->document_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr; };
          // document Field Functions 
          bool hasDocument() const { return this->document_ != nullptr;};
          void deleteDocument() { this->document_ = nullptr;};
          inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
          inline Passenger& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline Passenger& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline Passenger& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        protected:
          // The document number.
          shared_ptr<string> document_ {};
          // The first name of the passenger.
          shared_ptr<string> firstName_ {};
          // The last name of the passenger.
          shared_ptr<string> lastName_ {};
        };

        class ChangeFee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChangeFee& obj) { 
            DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
            DARABONBA_PTR_TO_JSON(suez_service_fee, suezServiceFee_);
            DARABONBA_PTR_TO_JSON(tax_fee, taxFee_);
            DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
          };
          friend void from_json(const Darabonba::Json& j, ChangeFee& obj) { 
            DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
            DARABONBA_PTR_FROM_JSON(suez_service_fee, suezServiceFee_);
            DARABONBA_PTR_FROM_JSON(tax_fee, taxFee_);
            DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
          };
          ChangeFee() = default ;
          ChangeFee(const ChangeFee &) = default ;
          ChangeFee(ChangeFee &&) = default ;
          ChangeFee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChangeFee() = default ;
          ChangeFee& operator=(const ChangeFee &) = default ;
          ChangeFee& operator=(ChangeFee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serviceFee_ == nullptr
        && this->suezServiceFee_ == nullptr && this->taxFee_ == nullptr && this->upgradeFee_ == nullptr; };
          // serviceFee Field Functions 
          bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
          void deleteServiceFee() { this->serviceFee_ = nullptr;};
          inline double getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
          inline ChangeFee& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


          // suezServiceFee Field Functions 
          bool hasSuezServiceFee() const { return this->suezServiceFee_ != nullptr;};
          void deleteSuezServiceFee() { this->suezServiceFee_ = nullptr;};
          inline double getSuezServiceFee() const { DARABONBA_PTR_GET_DEFAULT(suezServiceFee_, 0.0) };
          inline ChangeFee& setSuezServiceFee(double suezServiceFee) { DARABONBA_PTR_SET_VALUE(suezServiceFee_, suezServiceFee) };


          // taxFee Field Functions 
          bool hasTaxFee() const { return this->taxFee_ != nullptr;};
          void deleteTaxFee() { this->taxFee_ = nullptr;};
          inline double getTaxFee() const { DARABONBA_PTR_GET_DEFAULT(taxFee_, 0.0) };
          inline ChangeFee& setTaxFee(double taxFee) { DARABONBA_PTR_SET_VALUE(taxFee_, taxFee) };


          // upgradeFee Field Functions 
          bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
          void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
          inline double getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
          inline ChangeFee& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


        protected:
          // The service fee.
          shared_ptr<double> serviceFee_ {};
          shared_ptr<double> suezServiceFee_ {};
          // The change tax fee.
          shared_ptr<double> taxFee_ {};
          // The upgrade fee.
          shared_ptr<double> upgradeFee_ {};
        };

        virtual bool empty() const override { return this->changeFee_ == nullptr
        && this->passenger_ == nullptr; };
        // changeFee Field Functions 
        bool hasChangeFee() const { return this->changeFee_ != nullptr;};
        void deleteChangeFee() { this->changeFee_ = nullptr;};
        inline const ChangeFeeDetails::ChangeFee & getChangeFee() const { DARABONBA_PTR_GET_CONST(changeFee_, ChangeFeeDetails::ChangeFee) };
        inline ChangeFeeDetails::ChangeFee getChangeFee() { DARABONBA_PTR_GET(changeFee_, ChangeFeeDetails::ChangeFee) };
        inline ChangeFeeDetails& setChangeFee(const ChangeFeeDetails::ChangeFee & changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };
        inline ChangeFeeDetails& setChangeFee(ChangeFeeDetails::ChangeFee && changeFee) { DARABONBA_PTR_SET_RVALUE(changeFee_, changeFee) };


        // passenger Field Functions 
        bool hasPassenger() const { return this->passenger_ != nullptr;};
        void deletePassenger() { this->passenger_ = nullptr;};
        inline const ChangeFeeDetails::Passenger & getPassenger() const { DARABONBA_PTR_GET_CONST(passenger_, ChangeFeeDetails::Passenger) };
        inline ChangeFeeDetails::Passenger getPassenger() { DARABONBA_PTR_GET(passenger_, ChangeFeeDetails::Passenger) };
        inline ChangeFeeDetails& setPassenger(const ChangeFeeDetails::Passenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
        inline ChangeFeeDetails& setPassenger(ChangeFeeDetails::Passenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


      protected:
        // The change fee details for the passenger.
        shared_ptr<ChangeFeeDetails::ChangeFee> changeFee_ {};
        // The passenger information for the change.
        shared_ptr<ChangeFeeDetails::Passenger> passenger_ {};
      };

      virtual bool empty() const override { return this->changeFeeDetails_ == nullptr
        && this->changeOrderNum_ == nullptr && this->changePassengers_ == nullptr && this->changeReasonType_ == nullptr && this->changedJourneys_ == nullptr && this->closeReason_ == nullptr
        && this->closeUtcTime_ == nullptr && this->contact_ == nullptr && this->createUtcTime_ == nullptr && this->lastConfirmUtcTime_ == nullptr && this->lastJourneys_ == nullptr
        && this->orderNum_ == nullptr && this->orderStatus_ == nullptr && this->originalJourneys_ == nullptr && this->payStatus_ == nullptr && this->paySuccessUtcTime_ == nullptr
        && this->totalAmount_ == nullptr && this->transactionNo_ == nullptr; };
      // changeFeeDetails Field Functions 
      bool hasChangeFeeDetails() const { return this->changeFeeDetails_ != nullptr;};
      void deleteChangeFeeDetails() { this->changeFeeDetails_ = nullptr;};
      inline const vector<Data::ChangeFeeDetails> & getChangeFeeDetails() const { DARABONBA_PTR_GET_CONST(changeFeeDetails_, vector<Data::ChangeFeeDetails>) };
      inline vector<Data::ChangeFeeDetails> getChangeFeeDetails() { DARABONBA_PTR_GET(changeFeeDetails_, vector<Data::ChangeFeeDetails>) };
      inline Data& setChangeFeeDetails(const vector<Data::ChangeFeeDetails> & changeFeeDetails) { DARABONBA_PTR_SET_VALUE(changeFeeDetails_, changeFeeDetails) };
      inline Data& setChangeFeeDetails(vector<Data::ChangeFeeDetails> && changeFeeDetails) { DARABONBA_PTR_SET_RVALUE(changeFeeDetails_, changeFeeDetails) };


      // changeOrderNum Field Functions 
      bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
      void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
      inline int64_t getChangeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
      inline Data& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


      // changePassengers Field Functions 
      bool hasChangePassengers() const { return this->changePassengers_ != nullptr;};
      void deleteChangePassengers() { this->changePassengers_ = nullptr;};
      inline const vector<Data::ChangePassengers> & getChangePassengers() const { DARABONBA_PTR_GET_CONST(changePassengers_, vector<Data::ChangePassengers>) };
      inline vector<Data::ChangePassengers> getChangePassengers() { DARABONBA_PTR_GET(changePassengers_, vector<Data::ChangePassengers>) };
      inline Data& setChangePassengers(const vector<Data::ChangePassengers> & changePassengers) { DARABONBA_PTR_SET_VALUE(changePassengers_, changePassengers) };
      inline Data& setChangePassengers(vector<Data::ChangePassengers> && changePassengers) { DARABONBA_PTR_SET_RVALUE(changePassengers_, changePassengers) };


      // changeReasonType Field Functions 
      bool hasChangeReasonType() const { return this->changeReasonType_ != nullptr;};
      void deleteChangeReasonType() { this->changeReasonType_ = nullptr;};
      inline int32_t getChangeReasonType() const { DARABONBA_PTR_GET_DEFAULT(changeReasonType_, 0) };
      inline Data& setChangeReasonType(int32_t changeReasonType) { DARABONBA_PTR_SET_VALUE(changeReasonType_, changeReasonType) };


      // changedJourneys Field Functions 
      bool hasChangedJourneys() const { return this->changedJourneys_ != nullptr;};
      void deleteChangedJourneys() { this->changedJourneys_ = nullptr;};
      inline const vector<Data::ChangedJourneys> & getChangedJourneys() const { DARABONBA_PTR_GET_CONST(changedJourneys_, vector<Data::ChangedJourneys>) };
      inline vector<Data::ChangedJourneys> getChangedJourneys() { DARABONBA_PTR_GET(changedJourneys_, vector<Data::ChangedJourneys>) };
      inline Data& setChangedJourneys(const vector<Data::ChangedJourneys> & changedJourneys) { DARABONBA_PTR_SET_VALUE(changedJourneys_, changedJourneys) };
      inline Data& setChangedJourneys(vector<Data::ChangedJourneys> && changedJourneys) { DARABONBA_PTR_SET_RVALUE(changedJourneys_, changedJourneys) };


      // closeReason Field Functions 
      bool hasCloseReason() const { return this->closeReason_ != nullptr;};
      void deleteCloseReason() { this->closeReason_ = nullptr;};
      inline string getCloseReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
      inline Data& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


      // closeUtcTime Field Functions 
      bool hasCloseUtcTime() const { return this->closeUtcTime_ != nullptr;};
      void deleteCloseUtcTime() { this->closeUtcTime_ = nullptr;};
      inline int64_t getCloseUtcTime() const { DARABONBA_PTR_GET_DEFAULT(closeUtcTime_, 0L) };
      inline Data& setCloseUtcTime(int64_t closeUtcTime) { DARABONBA_PTR_SET_VALUE(closeUtcTime_, closeUtcTime) };


      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline const Data::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, Data::Contact) };
      inline Data::Contact getContact() { DARABONBA_PTR_GET(contact_, Data::Contact) };
      inline Data& setContact(const Data::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
      inline Data& setContact(Data::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


      // createUtcTime Field Functions 
      bool hasCreateUtcTime() const { return this->createUtcTime_ != nullptr;};
      void deleteCreateUtcTime() { this->createUtcTime_ = nullptr;};
      inline int64_t getCreateUtcTime() const { DARABONBA_PTR_GET_DEFAULT(createUtcTime_, 0L) };
      inline Data& setCreateUtcTime(int64_t createUtcTime) { DARABONBA_PTR_SET_VALUE(createUtcTime_, createUtcTime) };


      // lastConfirmUtcTime Field Functions 
      bool hasLastConfirmUtcTime() const { return this->lastConfirmUtcTime_ != nullptr;};
      void deleteLastConfirmUtcTime() { this->lastConfirmUtcTime_ = nullptr;};
      inline int64_t getLastConfirmUtcTime() const { DARABONBA_PTR_GET_DEFAULT(lastConfirmUtcTime_, 0L) };
      inline Data& setLastConfirmUtcTime(int64_t lastConfirmUtcTime) { DARABONBA_PTR_SET_VALUE(lastConfirmUtcTime_, lastConfirmUtcTime) };


      // lastJourneys Field Functions 
      bool hasLastJourneys() const { return this->lastJourneys_ != nullptr;};
      void deleteLastJourneys() { this->lastJourneys_ = nullptr;};
      inline const vector<Data::LastJourneys> & getLastJourneys() const { DARABONBA_PTR_GET_CONST(lastJourneys_, vector<Data::LastJourneys>) };
      inline vector<Data::LastJourneys> getLastJourneys() { DARABONBA_PTR_GET(lastJourneys_, vector<Data::LastJourneys>) };
      inline Data& setLastJourneys(const vector<Data::LastJourneys> & lastJourneys) { DARABONBA_PTR_SET_VALUE(lastJourneys_, lastJourneys) };
      inline Data& setLastJourneys(vector<Data::LastJourneys> && lastJourneys) { DARABONBA_PTR_SET_RVALUE(lastJourneys_, lastJourneys) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Data& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // originalJourneys Field Functions 
      bool hasOriginalJourneys() const { return this->originalJourneys_ != nullptr;};
      void deleteOriginalJourneys() { this->originalJourneys_ = nullptr;};
      inline const vector<Data::OriginalJourneys> & getOriginalJourneys() const { DARABONBA_PTR_GET_CONST(originalJourneys_, vector<Data::OriginalJourneys>) };
      inline vector<Data::OriginalJourneys> getOriginalJourneys() { DARABONBA_PTR_GET(originalJourneys_, vector<Data::OriginalJourneys>) };
      inline Data& setOriginalJourneys(const vector<Data::OriginalJourneys> & originalJourneys) { DARABONBA_PTR_SET_VALUE(originalJourneys_, originalJourneys) };
      inline Data& setOriginalJourneys(vector<Data::OriginalJourneys> && originalJourneys) { DARABONBA_PTR_SET_RVALUE(originalJourneys_, originalJourneys) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Data& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // paySuccessUtcTime Field Functions 
      bool hasPaySuccessUtcTime() const { return this->paySuccessUtcTime_ != nullptr;};
      void deletePaySuccessUtcTime() { this->paySuccessUtcTime_ = nullptr;};
      inline int64_t getPaySuccessUtcTime() const { DARABONBA_PTR_GET_DEFAULT(paySuccessUtcTime_, 0L) };
      inline Data& setPaySuccessUtcTime(int64_t paySuccessUtcTime) { DARABONBA_PTR_SET_VALUE(paySuccessUtcTime_, paySuccessUtcTime) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline double getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
      inline Data& setTotalAmount(double totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      // transactionNo Field Functions 
      bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
      void deleteTransactionNo() { this->transactionNo_ = nullptr;};
      inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
      inline Data& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    protected:
      // The change fee details at the passenger level.
      shared_ptr<vector<Data::ChangeFeeDetails>> changeFeeDetails_ {};
      // The change order number.
      shared_ptr<int64_t> changeOrderNum_ {};
      // The list of passengers for the flight change.
      shared_ptr<vector<Data::ChangePassengers>> changePassengers_ {};
      // The type of the change reason. Valid values:
      // - 0: voluntary date change
      // - 1: flight schedule change or flight cancellation
      // - 2: change due to pandemic.
      shared_ptr<int32_t> changeReasonType_ {};
      // The journeys after the change.
      shared_ptr<vector<Data::ChangedJourneys>> changedJourneys_ {};
      // The reason for closing the change order.
      shared_ptr<string> closeReason_ {};
      // The time when the order was closed, in UTC timestamp.
      shared_ptr<int64_t> closeUtcTime_ {};
      // The contact information for the change order.
      shared_ptr<Data::Contact> contact_ {};
      // The creation time of the change order, in UTC timestamp.
      shared_ptr<int64_t> createUtcTime_ {};
      // The latest payment deadline for the buyer, in UTC timestamp.
      shared_ptr<int64_t> lastConfirmUtcTime_ {};
      // The journeys from the previous change.
      shared_ptr<vector<Data::LastJourneys>> lastJourneys_ {};
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
      // The status of the change order. Valid values:
      // - 0: initial state
      // - 1: pending payment
      // - 2: payment successful
      // - 3: change successful
      // - 4: change closed.
      shared_ptr<int32_t> orderStatus_ {};
      // The original journeys.
      shared_ptr<vector<Data::OriginalJourneys>> originalJourneys_ {};
      // The payment status. Valid values:
      // - 0: initial state
      // - 1: pending payment
      // - 2: payment successful
      // - 4: paid order closed successfully
      // - 5: unpaid order closed successfully.
      shared_ptr<int32_t> payStatus_ {};
      // The time when the buyer completed the payment, in UTC timestamp.
      shared_ptr<int64_t> paySuccessUtcTime_ {};
      // The total payment amount of the change order.
      shared_ptr<double> totalAmount_ {};
      // The transaction number.
      shared_ptr<string> transactionNo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChangeDetailResponseBody::Data) };
    inline ChangeDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ChangeDetailResponseBody::Data) };
    inline ChangeDetailResponseBody& setData(const ChangeDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeDetailResponseBody& setData(ChangeDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ChangeDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline ChangeDetailResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline ChangeDetailResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ChangeDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ChangeDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChangeDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<ChangeDetailResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful HTTP requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
