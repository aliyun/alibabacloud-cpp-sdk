// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODY_HPP_
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
  class RefundDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RefundDetailResponseBody() = default ;
    RefundDetailResponseBody(const RefundDetailResponseBody &) = default ;
    RefundDetailResponseBody(RefundDetailResponseBody &&) = default ;
    RefundDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBody() = default ;
    RefundDetailResponseBody& operator=(const RefundDetailResponseBody &) = default ;
    RefundDetailResponseBody& operator=(RefundDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(contain_multi_refund, containMultiRefund_);
        DARABONBA_PTR_TO_JSON(multi_refund_details, multiRefundDetails_);
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
        DARABONBA_PTR_TO_JSON(passenger_refund_details, passengerRefundDetails_);
        DARABONBA_PTR_TO_JSON(pay_success_utc_time, paySuccessUtcTime_);
        DARABONBA_PTR_TO_JSON(refund_attachment_urls, refundAttachmentUrls_);
        DARABONBA_PTR_TO_JSON(refund_journeys, refundJourneys_);
        DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
        DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
        DARABONBA_PTR_TO_JSON(refund_type, refundType_);
        DARABONBA_PTR_TO_JSON(refuse_reason, refuseReason_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
        DARABONBA_PTR_TO_JSON(utc_create_time, utcCreateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(contain_multi_refund, containMultiRefund_);
        DARABONBA_PTR_FROM_JSON(multi_refund_details, multiRefundDetails_);
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
        DARABONBA_PTR_FROM_JSON(passenger_refund_details, passengerRefundDetails_);
        DARABONBA_PTR_FROM_JSON(pay_success_utc_time, paySuccessUtcTime_);
        DARABONBA_PTR_FROM_JSON(refund_attachment_urls, refundAttachmentUrls_);
        DARABONBA_PTR_FROM_JSON(refund_journeys, refundJourneys_);
        DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
        DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
        DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
        DARABONBA_PTR_FROM_JSON(refuse_reason, refuseReason_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
        DARABONBA_PTR_FROM_JSON(utc_create_time, utcCreateTime_);
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
      class RefundJourneys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundJourneys& obj) { 
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
        };
        friend void from_json(const Darabonba::Json& j, RefundJourneys& obj) { 
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
        };
        RefundJourneys() = default ;
        RefundJourneys(const RefundJourneys &) = default ;
        RefundJourneys(RefundJourneys &&) = default ;
        RefundJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundJourneys() = default ;
        RefundJourneys& operator=(const RefundJourneys &) = default ;
        RefundJourneys& operator=(RefundJourneys &&) = default ;
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
          // The list of stopover cities. This field has a value when stopQuantity is greater than 0. Multiple cities are separated by commas.
          shared_ptr<string> stopCityList_ {};
          // The number of stopover cities.
          shared_ptr<int32_t> stopQuantity_ {};
        };

        virtual bool empty() const override { return this->segmentList_ == nullptr
        && this->transferCount_ == nullptr; };
        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline const vector<RefundJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<RefundJourneys::SegmentList>) };
        inline vector<RefundJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<RefundJourneys::SegmentList>) };
        inline RefundJourneys& setSegmentList(const vector<RefundJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
        inline RefundJourneys& setSegmentList(vector<RefundJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


        // transferCount Field Functions 
        bool hasTransferCount() const { return this->transferCount_ != nullptr;};
        void deleteTransferCount() { this->transferCount_ = nullptr;};
        inline int32_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
        inline RefundJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


      protected:
        // The segment information.
        shared_ptr<vector<RefundJourneys::SegmentList>> segmentList_ {};
        // The number of transfers.
        shared_ptr<int32_t> transferCount_ {};
      };

      class PassengerRefundDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerRefundDetails& obj) { 
          DARABONBA_PTR_TO_JSON(passenger, passenger_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerRefundDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger, passenger_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        };
        PassengerRefundDetails() = default ;
        PassengerRefundDetails(const PassengerRefundDetails &) = default ;
        PassengerRefundDetails(PassengerRefundDetails &&) = default ;
        PassengerRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerRefundDetails() = default ;
        PassengerRefundDetails& operator=(const PassengerRefundDetails &) = default ;
        PassengerRefundDetails& operator=(PassengerRefundDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundFee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundFee& obj) { 
            DARABONBA_PTR_TO_JSON(already_used_total_fee, alreadyUsedTotalFee_);
            DARABONBA_PTR_TO_JSON(ancillary_refund_to_buyer_money, ancillaryRefundToBuyerMoney_);
            DARABONBA_PTR_TO_JSON(modify_refund_to_buyer_money, modifyRefundToBuyerMoney_);
            DARABONBA_PTR_TO_JSON(non_refundable_change_service_fee, nonRefundableChangeServiceFee_);
            DARABONBA_PTR_TO_JSON(non_refundable_change_upgrade_fee, nonRefundableChangeUpgradeFee_);
            DARABONBA_PTR_TO_JSON(non_refundable_tax_fee, nonRefundableTaxFee_);
            DARABONBA_PTR_TO_JSON(non_refundable_ticket_fee, nonRefundableTicketFee_);
            DARABONBA_PTR_TO_JSON(refund_to_buyer_money, refundToBuyerMoney_);
            DARABONBA_PTR_TO_JSON(suez_service_fee, suezServiceFee_);
          };
          friend void from_json(const Darabonba::Json& j, RefundFee& obj) { 
            DARABONBA_PTR_FROM_JSON(already_used_total_fee, alreadyUsedTotalFee_);
            DARABONBA_PTR_FROM_JSON(ancillary_refund_to_buyer_money, ancillaryRefundToBuyerMoney_);
            DARABONBA_PTR_FROM_JSON(modify_refund_to_buyer_money, modifyRefundToBuyerMoney_);
            DARABONBA_PTR_FROM_JSON(non_refundable_change_service_fee, nonRefundableChangeServiceFee_);
            DARABONBA_PTR_FROM_JSON(non_refundable_change_upgrade_fee, nonRefundableChangeUpgradeFee_);
            DARABONBA_PTR_FROM_JSON(non_refundable_tax_fee, nonRefundableTaxFee_);
            DARABONBA_PTR_FROM_JSON(non_refundable_ticket_fee, nonRefundableTicketFee_);
            DARABONBA_PTR_FROM_JSON(refund_to_buyer_money, refundToBuyerMoney_);
            DARABONBA_PTR_FROM_JSON(suez_service_fee, suezServiceFee_);
          };
          RefundFee() = default ;
          RefundFee(const RefundFee &) = default ;
          RefundFee(RefundFee &&) = default ;
          RefundFee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundFee() = default ;
          RefundFee& operator=(const RefundFee &) = default ;
          RefundFee& operator=(RefundFee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alreadyUsedTotalFee_ == nullptr
        && this->ancillaryRefundToBuyerMoney_ == nullptr && this->modifyRefundToBuyerMoney_ == nullptr && this->nonRefundableChangeServiceFee_ == nullptr && this->nonRefundableChangeUpgradeFee_ == nullptr && this->nonRefundableTaxFee_ == nullptr
        && this->nonRefundableTicketFee_ == nullptr && this->refundToBuyerMoney_ == nullptr && this->suezServiceFee_ == nullptr; };
          // alreadyUsedTotalFee Field Functions 
          bool hasAlreadyUsedTotalFee() const { return this->alreadyUsedTotalFee_ != nullptr;};
          void deleteAlreadyUsedTotalFee() { this->alreadyUsedTotalFee_ = nullptr;};
          inline double getAlreadyUsedTotalFee() const { DARABONBA_PTR_GET_DEFAULT(alreadyUsedTotalFee_, 0.0) };
          inline RefundFee& setAlreadyUsedTotalFee(double alreadyUsedTotalFee) { DARABONBA_PTR_SET_VALUE(alreadyUsedTotalFee_, alreadyUsedTotalFee) };


          // ancillaryRefundToBuyerMoney Field Functions 
          bool hasAncillaryRefundToBuyerMoney() const { return this->ancillaryRefundToBuyerMoney_ != nullptr;};
          void deleteAncillaryRefundToBuyerMoney() { this->ancillaryRefundToBuyerMoney_ = nullptr;};
          inline double getAncillaryRefundToBuyerMoney() const { DARABONBA_PTR_GET_DEFAULT(ancillaryRefundToBuyerMoney_, 0.0) };
          inline RefundFee& setAncillaryRefundToBuyerMoney(double ancillaryRefundToBuyerMoney) { DARABONBA_PTR_SET_VALUE(ancillaryRefundToBuyerMoney_, ancillaryRefundToBuyerMoney) };


          // modifyRefundToBuyerMoney Field Functions 
          bool hasModifyRefundToBuyerMoney() const { return this->modifyRefundToBuyerMoney_ != nullptr;};
          void deleteModifyRefundToBuyerMoney() { this->modifyRefundToBuyerMoney_ = nullptr;};
          inline double getModifyRefundToBuyerMoney() const { DARABONBA_PTR_GET_DEFAULT(modifyRefundToBuyerMoney_, 0.0) };
          inline RefundFee& setModifyRefundToBuyerMoney(double modifyRefundToBuyerMoney) { DARABONBA_PTR_SET_VALUE(modifyRefundToBuyerMoney_, modifyRefundToBuyerMoney) };


          // nonRefundableChangeServiceFee Field Functions 
          bool hasNonRefundableChangeServiceFee() const { return this->nonRefundableChangeServiceFee_ != nullptr;};
          void deleteNonRefundableChangeServiceFee() { this->nonRefundableChangeServiceFee_ = nullptr;};
          inline double getNonRefundableChangeServiceFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeServiceFee_, 0.0) };
          inline RefundFee& setNonRefundableChangeServiceFee(double nonRefundableChangeServiceFee) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeServiceFee_, nonRefundableChangeServiceFee) };


          // nonRefundableChangeUpgradeFee Field Functions 
          bool hasNonRefundableChangeUpgradeFee() const { return this->nonRefundableChangeUpgradeFee_ != nullptr;};
          void deleteNonRefundableChangeUpgradeFee() { this->nonRefundableChangeUpgradeFee_ = nullptr;};
          inline double getNonRefundableChangeUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeUpgradeFee_, 0.0) };
          inline RefundFee& setNonRefundableChangeUpgradeFee(double nonRefundableChangeUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeUpgradeFee_, nonRefundableChangeUpgradeFee) };


          // nonRefundableTaxFee Field Functions 
          bool hasNonRefundableTaxFee() const { return this->nonRefundableTaxFee_ != nullptr;};
          void deleteNonRefundableTaxFee() { this->nonRefundableTaxFee_ = nullptr;};
          inline double getNonRefundableTaxFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxFee_, 0.0) };
          inline RefundFee& setNonRefundableTaxFee(double nonRefundableTaxFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxFee_, nonRefundableTaxFee) };


          // nonRefundableTicketFee Field Functions 
          bool hasNonRefundableTicketFee() const { return this->nonRefundableTicketFee_ != nullptr;};
          void deleteNonRefundableTicketFee() { this->nonRefundableTicketFee_ = nullptr;};
          inline double getNonRefundableTicketFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTicketFee_, 0.0) };
          inline RefundFee& setNonRefundableTicketFee(double nonRefundableTicketFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTicketFee_, nonRefundableTicketFee) };


          // refundToBuyerMoney Field Functions 
          bool hasRefundToBuyerMoney() const { return this->refundToBuyerMoney_ != nullptr;};
          void deleteRefundToBuyerMoney() { this->refundToBuyerMoney_ = nullptr;};
          inline double getRefundToBuyerMoney() const { DARABONBA_PTR_GET_DEFAULT(refundToBuyerMoney_, 0.0) };
          inline RefundFee& setRefundToBuyerMoney(double refundToBuyerMoney) { DARABONBA_PTR_SET_VALUE(refundToBuyerMoney_, refundToBuyerMoney) };


          // suezServiceFee Field Functions 
          bool hasSuezServiceFee() const { return this->suezServiceFee_ != nullptr;};
          void deleteSuezServiceFee() { this->suezServiceFee_ = nullptr;};
          inline double getSuezServiceFee() const { DARABONBA_PTR_GET_DEFAULT(suezServiceFee_, 0.0) };
          inline RefundFee& setSuezServiceFee(double suezServiceFee) { DARABONBA_PTR_SET_VALUE(suezServiceFee_, suezServiceFee) };


        protected:
          // The total price of already used tickets.
          shared_ptr<double> alreadyUsedTotalFee_ {};
          shared_ptr<double> ancillaryRefundToBuyerMoney_ {};
          // The refundable amount to the buyer from rebooking.
          shared_ptr<double> modifyRefundToBuyerMoney_ {};
          // The non-refundable rebooking service fee.
          shared_ptr<double> nonRefundableChangeServiceFee_ {};
          // The non-refundable cabin upgrade service fee.
          shared_ptr<double> nonRefundableChangeUpgradeFee_ {};
          // The non-refundable tax amount, which is the tax refund service fee.
          shared_ptr<double> nonRefundableTaxFee_ {};
          // The non-refundable ticket amount, which is the ticket refund service fee.
          shared_ptr<double> nonRefundableTicketFee_ {};
          // The refundable amount to the buyer from the original ticket (ticket price + taxes - ticket refund service fee - tax refund service fee - total price of already used tickets).
          shared_ptr<double> refundToBuyerMoney_ {};
          shared_ptr<double> suezServiceFee_ {};
        };

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

        virtual bool empty() const override { return this->passenger_ == nullptr
        && this->refundFee_ == nullptr; };
        // passenger Field Functions 
        bool hasPassenger() const { return this->passenger_ != nullptr;};
        void deletePassenger() { this->passenger_ = nullptr;};
        inline const PassengerRefundDetails::Passenger & getPassenger() const { DARABONBA_PTR_GET_CONST(passenger_, PassengerRefundDetails::Passenger) };
        inline PassengerRefundDetails::Passenger getPassenger() { DARABONBA_PTR_GET(passenger_, PassengerRefundDetails::Passenger) };
        inline PassengerRefundDetails& setPassenger(const PassengerRefundDetails::Passenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
        inline PassengerRefundDetails& setPassenger(PassengerRefundDetails::Passenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline const PassengerRefundDetails::RefundFee & getRefundFee() const { DARABONBA_PTR_GET_CONST(refundFee_, PassengerRefundDetails::RefundFee) };
        inline PassengerRefundDetails::RefundFee getRefundFee() { DARABONBA_PTR_GET(refundFee_, PassengerRefundDetails::RefundFee) };
        inline PassengerRefundDetails& setRefundFee(const PassengerRefundDetails::RefundFee & refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };
        inline PassengerRefundDetails& setRefundFee(PassengerRefundDetails::RefundFee && refundFee) { DARABONBA_PTR_SET_RVALUE(refundFee_, refundFee) };


      protected:
        // The passenger information for the refund.
        shared_ptr<PassengerRefundDetails::Passenger> passenger_ {};
        // The refund fee breakdown.
        shared_ptr<PassengerRefundDetails::RefundFee> refundFee_ {};
      };

      class MultiRefundDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiRefundDetails& obj) { 
          DARABONBA_PTR_TO_JSON(multi_refund_order_num, multiRefundOrderNum_);
          DARABONBA_PTR_TO_JSON(multi_refund_transaction_no, multiRefundTransactionNo_);
          DARABONBA_PTR_TO_JSON(passenger_multi_refund_details, passengerMultiRefundDetails_);
        };
        friend void from_json(const Darabonba::Json& j, MultiRefundDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(multi_refund_order_num, multiRefundOrderNum_);
          DARABONBA_PTR_FROM_JSON(multi_refund_transaction_no, multiRefundTransactionNo_);
          DARABONBA_PTR_FROM_JSON(passenger_multi_refund_details, passengerMultiRefundDetails_);
        };
        MultiRefundDetails() = default ;
        MultiRefundDetails(const MultiRefundDetails &) = default ;
        MultiRefundDetails(MultiRefundDetails &&) = default ;
        MultiRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiRefundDetails() = default ;
        MultiRefundDetails& operator=(const MultiRefundDetails &) = default ;
        MultiRefundDetails& operator=(MultiRefundDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PassengerMultiRefundDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PassengerMultiRefundDetails& obj) { 
            DARABONBA_PTR_TO_JSON(change_order_refund_fee, changeOrderRefundFee_);
            DARABONBA_PTR_TO_JSON(original_order_refund_fee, originalOrderRefundFee_);
            DARABONBA_PTR_TO_JSON(passenger, passenger_);
          };
          friend void from_json(const Darabonba::Json& j, PassengerMultiRefundDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(change_order_refund_fee, changeOrderRefundFee_);
            DARABONBA_PTR_FROM_JSON(original_order_refund_fee, originalOrderRefundFee_);
            DARABONBA_PTR_FROM_JSON(passenger, passenger_);
          };
          PassengerMultiRefundDetails() = default ;
          PassengerMultiRefundDetails(const PassengerMultiRefundDetails &) = default ;
          PassengerMultiRefundDetails(PassengerMultiRefundDetails &&) = default ;
          PassengerMultiRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PassengerMultiRefundDetails() = default ;
          PassengerMultiRefundDetails& operator=(const PassengerMultiRefundDetails &) = default ;
          PassengerMultiRefundDetails& operator=(PassengerMultiRefundDetails &&) = default ;
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

          virtual bool empty() const override { return this->changeOrderRefundFee_ == nullptr
        && this->originalOrderRefundFee_ == nullptr && this->passenger_ == nullptr; };
          // changeOrderRefundFee Field Functions 
          bool hasChangeOrderRefundFee() const { return this->changeOrderRefundFee_ != nullptr;};
          void deleteChangeOrderRefundFee() { this->changeOrderRefundFee_ = nullptr;};
          inline double getChangeOrderRefundFee() const { DARABONBA_PTR_GET_DEFAULT(changeOrderRefundFee_, 0.0) };
          inline PassengerMultiRefundDetails& setChangeOrderRefundFee(double changeOrderRefundFee) { DARABONBA_PTR_SET_VALUE(changeOrderRefundFee_, changeOrderRefundFee) };


          // originalOrderRefundFee Field Functions 
          bool hasOriginalOrderRefundFee() const { return this->originalOrderRefundFee_ != nullptr;};
          void deleteOriginalOrderRefundFee() { this->originalOrderRefundFee_ = nullptr;};
          inline double getOriginalOrderRefundFee() const { DARABONBA_PTR_GET_DEFAULT(originalOrderRefundFee_, 0.0) };
          inline PassengerMultiRefundDetails& setOriginalOrderRefundFee(double originalOrderRefundFee) { DARABONBA_PTR_SET_VALUE(originalOrderRefundFee_, originalOrderRefundFee) };


          // passenger Field Functions 
          bool hasPassenger() const { return this->passenger_ != nullptr;};
          void deletePassenger() { this->passenger_ = nullptr;};
          inline const PassengerMultiRefundDetails::Passenger & getPassenger() const { DARABONBA_PTR_GET_CONST(passenger_, PassengerMultiRefundDetails::Passenger) };
          inline PassengerMultiRefundDetails::Passenger getPassenger() { DARABONBA_PTR_GET(passenger_, PassengerMultiRefundDetails::Passenger) };
          inline PassengerMultiRefundDetails& setPassenger(const PassengerMultiRefundDetails::Passenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
          inline PassengerMultiRefundDetails& setPassenger(PassengerMultiRefundDetails::Passenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


        protected:
          // The supplementary refund amount from the rebooking order.
          shared_ptr<double> changeOrderRefundFee_ {};
          // The supplementary refund amount from the original order.
          shared_ptr<double> originalOrderRefundFee_ {};
          // The passenger for the refund.
          shared_ptr<PassengerMultiRefundDetails::Passenger> passenger_ {};
        };

        virtual bool empty() const override { return this->multiRefundOrderNum_ == nullptr
        && this->multiRefundTransactionNo_ == nullptr && this->passengerMultiRefundDetails_ == nullptr; };
        // multiRefundOrderNum Field Functions 
        bool hasMultiRefundOrderNum() const { return this->multiRefundOrderNum_ != nullptr;};
        void deleteMultiRefundOrderNum() { this->multiRefundOrderNum_ = nullptr;};
        inline int64_t getMultiRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(multiRefundOrderNum_, 0L) };
        inline MultiRefundDetails& setMultiRefundOrderNum(int64_t multiRefundOrderNum) { DARABONBA_PTR_SET_VALUE(multiRefundOrderNum_, multiRefundOrderNum) };


        // multiRefundTransactionNo Field Functions 
        bool hasMultiRefundTransactionNo() const { return this->multiRefundTransactionNo_ != nullptr;};
        void deleteMultiRefundTransactionNo() { this->multiRefundTransactionNo_ = nullptr;};
        inline string getMultiRefundTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(multiRefundTransactionNo_, "") };
        inline MultiRefundDetails& setMultiRefundTransactionNo(string multiRefundTransactionNo) { DARABONBA_PTR_SET_VALUE(multiRefundTransactionNo_, multiRefundTransactionNo) };


        // passengerMultiRefundDetails Field Functions 
        bool hasPassengerMultiRefundDetails() const { return this->passengerMultiRefundDetails_ != nullptr;};
        void deletePassengerMultiRefundDetails() { this->passengerMultiRefundDetails_ = nullptr;};
        inline const vector<MultiRefundDetails::PassengerMultiRefundDetails> & getPassengerMultiRefundDetails() const { DARABONBA_PTR_GET_CONST(passengerMultiRefundDetails_, vector<MultiRefundDetails::PassengerMultiRefundDetails>) };
        inline vector<MultiRefundDetails::PassengerMultiRefundDetails> getPassengerMultiRefundDetails() { DARABONBA_PTR_GET(passengerMultiRefundDetails_, vector<MultiRefundDetails::PassengerMultiRefundDetails>) };
        inline MultiRefundDetails& setPassengerMultiRefundDetails(const vector<MultiRefundDetails::PassengerMultiRefundDetails> & passengerMultiRefundDetails) { DARABONBA_PTR_SET_VALUE(passengerMultiRefundDetails_, passengerMultiRefundDetails) };
        inline MultiRefundDetails& setPassengerMultiRefundDetails(vector<MultiRefundDetails::PassengerMultiRefundDetails> && passengerMultiRefundDetails) { DARABONBA_PTR_SET_RVALUE(passengerMultiRefundDetails_, passengerMultiRefundDetails) };


      protected:
        // The refund order number of the supplementary refund.
        shared_ptr<int64_t> multiRefundOrderNum_ {};
        // The transaction serial number of the supplementary refund.
        shared_ptr<string> multiRefundTransactionNo_ {};
        // The passenger-level supplementary refund details.
        shared_ptr<vector<MultiRefundDetails::PassengerMultiRefundDetails>> passengerMultiRefundDetails_ {};
      };

      virtual bool empty() const override { return this->containMultiRefund_ == nullptr
        && this->multiRefundDetails_ == nullptr && this->orderNum_ == nullptr && this->passengerRefundDetails_ == nullptr && this->paySuccessUtcTime_ == nullptr && this->refundAttachmentUrls_ == nullptr
        && this->refundJourneys_ == nullptr && this->refundOrderNum_ == nullptr && this->refundReason_ == nullptr && this->refundType_ == nullptr && this->refuseReason_ == nullptr
        && this->status_ == nullptr && this->transactionNo_ == nullptr && this->utcCreateTime_ == nullptr; };
      // containMultiRefund Field Functions 
      bool hasContainMultiRefund() const { return this->containMultiRefund_ != nullptr;};
      void deleteContainMultiRefund() { this->containMultiRefund_ = nullptr;};
      inline bool getContainMultiRefund() const { DARABONBA_PTR_GET_DEFAULT(containMultiRefund_, false) };
      inline Data& setContainMultiRefund(bool containMultiRefund) { DARABONBA_PTR_SET_VALUE(containMultiRefund_, containMultiRefund) };


      // multiRefundDetails Field Functions 
      bool hasMultiRefundDetails() const { return this->multiRefundDetails_ != nullptr;};
      void deleteMultiRefundDetails() { this->multiRefundDetails_ = nullptr;};
      inline const vector<Data::MultiRefundDetails> & getMultiRefundDetails() const { DARABONBA_PTR_GET_CONST(multiRefundDetails_, vector<Data::MultiRefundDetails>) };
      inline vector<Data::MultiRefundDetails> getMultiRefundDetails() { DARABONBA_PTR_GET(multiRefundDetails_, vector<Data::MultiRefundDetails>) };
      inline Data& setMultiRefundDetails(const vector<Data::MultiRefundDetails> & multiRefundDetails) { DARABONBA_PTR_SET_VALUE(multiRefundDetails_, multiRefundDetails) };
      inline Data& setMultiRefundDetails(vector<Data::MultiRefundDetails> && multiRefundDetails) { DARABONBA_PTR_SET_RVALUE(multiRefundDetails_, multiRefundDetails) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // passengerRefundDetails Field Functions 
      bool hasPassengerRefundDetails() const { return this->passengerRefundDetails_ != nullptr;};
      void deletePassengerRefundDetails() { this->passengerRefundDetails_ = nullptr;};
      inline const vector<Data::PassengerRefundDetails> & getPassengerRefundDetails() const { DARABONBA_PTR_GET_CONST(passengerRefundDetails_, vector<Data::PassengerRefundDetails>) };
      inline vector<Data::PassengerRefundDetails> getPassengerRefundDetails() { DARABONBA_PTR_GET(passengerRefundDetails_, vector<Data::PassengerRefundDetails>) };
      inline Data& setPassengerRefundDetails(const vector<Data::PassengerRefundDetails> & passengerRefundDetails) { DARABONBA_PTR_SET_VALUE(passengerRefundDetails_, passengerRefundDetails) };
      inline Data& setPassengerRefundDetails(vector<Data::PassengerRefundDetails> && passengerRefundDetails) { DARABONBA_PTR_SET_RVALUE(passengerRefundDetails_, passengerRefundDetails) };


      // paySuccessUtcTime Field Functions 
      bool hasPaySuccessUtcTime() const { return this->paySuccessUtcTime_ != nullptr;};
      void deletePaySuccessUtcTime() { this->paySuccessUtcTime_ = nullptr;};
      inline int64_t getPaySuccessUtcTime() const { DARABONBA_PTR_GET_DEFAULT(paySuccessUtcTime_, 0L) };
      inline Data& setPaySuccessUtcTime(int64_t paySuccessUtcTime) { DARABONBA_PTR_SET_VALUE(paySuccessUtcTime_, paySuccessUtcTime) };


      // refundAttachmentUrls Field Functions 
      bool hasRefundAttachmentUrls() const { return this->refundAttachmentUrls_ != nullptr;};
      void deleteRefundAttachmentUrls() { this->refundAttachmentUrls_ = nullptr;};
      inline const vector<string> & getRefundAttachmentUrls() const { DARABONBA_PTR_GET_CONST(refundAttachmentUrls_, vector<string>) };
      inline vector<string> getRefundAttachmentUrls() { DARABONBA_PTR_GET(refundAttachmentUrls_, vector<string>) };
      inline Data& setRefundAttachmentUrls(const vector<string> & refundAttachmentUrls) { DARABONBA_PTR_SET_VALUE(refundAttachmentUrls_, refundAttachmentUrls) };
      inline Data& setRefundAttachmentUrls(vector<string> && refundAttachmentUrls) { DARABONBA_PTR_SET_RVALUE(refundAttachmentUrls_, refundAttachmentUrls) };


      // refundJourneys Field Functions 
      bool hasRefundJourneys() const { return this->refundJourneys_ != nullptr;};
      void deleteRefundJourneys() { this->refundJourneys_ = nullptr;};
      inline const vector<Data::RefundJourneys> & getRefundJourneys() const { DARABONBA_PTR_GET_CONST(refundJourneys_, vector<Data::RefundJourneys>) };
      inline vector<Data::RefundJourneys> getRefundJourneys() { DARABONBA_PTR_GET(refundJourneys_, vector<Data::RefundJourneys>) };
      inline Data& setRefundJourneys(const vector<Data::RefundJourneys> & refundJourneys) { DARABONBA_PTR_SET_VALUE(refundJourneys_, refundJourneys) };
      inline Data& setRefundJourneys(vector<Data::RefundJourneys> && refundJourneys) { DARABONBA_PTR_SET_RVALUE(refundJourneys_, refundJourneys) };


      // refundOrderNum Field Functions 
      bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
      void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
      inline int64_t getRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
      inline Data& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


      // refundReason Field Functions 
      bool hasRefundReason() const { return this->refundReason_ != nullptr;};
      void deleteRefundReason() { this->refundReason_ = nullptr;};
      inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
      inline Data& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


      // refundType Field Functions 
      bool hasRefundType() const { return this->refundType_ != nullptr;};
      void deleteRefundType() { this->refundType_ = nullptr;};
      inline int32_t getRefundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
      inline Data& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


      // refuseReason Field Functions 
      bool hasRefuseReason() const { return this->refuseReason_ != nullptr;};
      void deleteRefuseReason() { this->refuseReason_ = nullptr;};
      inline string getRefuseReason() const { DARABONBA_PTR_GET_DEFAULT(refuseReason_, "") };
      inline Data& setRefuseReason(string refuseReason) { DARABONBA_PTR_SET_VALUE(refuseReason_, refuseReason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transactionNo Field Functions 
      bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
      void deleteTransactionNo() { this->transactionNo_ = nullptr;};
      inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
      inline Data& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


      // utcCreateTime Field Functions 
      bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
      void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
      inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
      inline Data& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


    protected:
      // Indicates whether the refund contains a supplementary refund.
      shared_ptr<bool> containMultiRefund_ {};
      // The list of supplementary refund details associated with the initial refund.
      shared_ptr<vector<Data::MultiRefundDetails>> multiRefundDetails_ {};
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
      // The list of passenger-level refund details.
      shared_ptr<vector<Data::PassengerRefundDetails>> passengerRefundDetails_ {};
      // The actual refund time, in UTC timestamp.
      shared_ptr<int64_t> paySuccessUtcTime_ {};
      // The list of attachment URLs for medical refund requests.
      shared_ptr<vector<string>> refundAttachmentUrls_ {};
      // The journeys included in the refund.
      shared_ptr<vector<Data::RefundJourneys>> refundJourneys_ {};
      // The refund order number.
      shared_ptr<int64_t> refundOrderNum_ {};
      // The reason for the refund request.
      shared_ptr<string> refundReason_ {};
      // The refund request type. Valid values:
      // - 2: voluntary request.
      // - 5: airline-initiated reasons such as flight delay, cancellation, or schedule change.
      // - 6: medical reasons with a certificate from a Grade II Class A hospital or above.
      // - 7: involuntary definitive emergency guidance.
      // - 100: involuntary non-definitive emergency.
      shared_ptr<int32_t> refundType_ {};
      // The reason for rejecting the refund request.
      shared_ptr<string> refuseReason_ {};
      // The refund order status. Valid values:
      // - 0: refund requested.
      // - 1: refund being processed.
      // - 2: refund failed.
      // - 3: refund succeeded.
      shared_ptr<int32_t> status_ {};
      // The transaction serial number.
      shared_ptr<string> transactionNo_ {};
      // The creation time of the refund order, in UTC timestamp.
      shared_ptr<int64_t> utcCreateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RefundDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RefundDetailResponseBody::Data) };
    inline RefundDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RefundDetailResponseBody::Data) };
    inline RefundDetailResponseBody& setData(const RefundDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RefundDetailResponseBody& setData(RefundDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RefundDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline RefundDetailResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline RefundDetailResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline RefundDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RefundDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RefundDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<RefundDetailResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
