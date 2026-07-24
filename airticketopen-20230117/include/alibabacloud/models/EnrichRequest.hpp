// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHREQUEST_HPP_
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
  class EnrichRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(journey_param_list, journeyParamList_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(journey_param_list, journeyParamList_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    EnrichRequest() = default ;
    EnrichRequest(const EnrichRequest &) = default ;
    EnrichRequest(EnrichRequest &&) = default ;
    EnrichRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichRequest() = default ;
    EnrichRequest& operator=(const EnrichRequest &) = default ;
    EnrichRequest& operator=(EnrichRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JourneyParamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JourneyParamList& obj) { 
        DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
        DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
        DARABONBA_PTR_TO_JSON(segment_param_list, segmentParamList_);
      };
      friend void from_json(const Darabonba::Json& j, JourneyParamList& obj) { 
        DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
        DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
        DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
        DARABONBA_PTR_FROM_JSON(segment_param_list, segmentParamList_);
      };
      JourneyParamList() = default ;
      JourneyParamList(const JourneyParamList &) = default ;
      JourneyParamList(JourneyParamList &&) = default ;
      JourneyParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JourneyParamList() = default ;
      JourneyParamList& operator=(const JourneyParamList &) = default ;
      JourneyParamList& operator=(JourneyParamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SegmentParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentParamList& obj) { 
          DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
          DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
          DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
          DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
          DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
          DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
          DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
          DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
          DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
        };
        SegmentParamList() = default ;
        SegmentParamList(const SegmentParamList &) = default ;
        SegmentParamList(SegmentParamList &&) = default ;
        SegmentParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentParamList() = default ;
        SegmentParamList& operator=(const SegmentParamList &) = default ;
        SegmentParamList& operator=(SegmentParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->cabin_ == nullptr && this->childCabin_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr
        && this->departureDate_ == nullptr && this->departureTime_ == nullptr && this->marketingFlightNo_ == nullptr; };
        // arrivalAirport Field Functions 
        bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
        void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
        inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
        inline SegmentParamList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


        // arrivalCity Field Functions 
        bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
        void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
        inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
        inline SegmentParamList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline SegmentParamList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // childCabin Field Functions 
        bool hasChildCabin() const { return this->childCabin_ != nullptr;};
        void deleteChildCabin() { this->childCabin_ = nullptr;};
        inline string getChildCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
        inline SegmentParamList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


        // departureAirport Field Functions 
        bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
        void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
        inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
        inline SegmentParamList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


        // departureCity Field Functions 
        bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
        void deleteDepartureCity() { this->departureCity_ = nullptr;};
        inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
        inline SegmentParamList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


        // departureDate Field Functions 
        bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
        void deleteDepartureDate() { this->departureDate_ = nullptr;};
        inline string getDepartureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
        inline SegmentParamList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


        // departureTime Field Functions 
        bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
        void deleteDepartureTime() { this->departureTime_ = nullptr;};
        inline string getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
        inline SegmentParamList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


        // marketingFlightNo Field Functions 
        bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
        void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
        inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
        inline SegmentParamList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


      protected:
        // Flight arrival airport code (3-letter uppercase)
        shared_ptr<string> arrivalAirport_ {};
        // Flight arrival city code (3-letter uppercase)
        shared_ptr<string> arrivalCity_ {};
        // Booking class
        shared_ptr<string> cabin_ {};
        // Child booking class
        shared_ptr<string> childCabin_ {};
        // Flight departure airport code (3-letter uppercase)
        shared_ptr<string> departureAirport_ {};
        // Flight departure city code (3-letter uppercase)
        shared_ptr<string> departureCity_ {};
        shared_ptr<string> departureDate_ {};
        // String, flight departure date and time (yyyy-MM-dd HH:mm:ss)
        shared_ptr<string> departureTime_ {};
        // Marketing carrier flight number (e.g., KA5809)
        // 
        // This parameter is required.
        shared_ptr<string> marketingFlightNo_ {};
      };

      virtual bool empty() const override { return this->arrivalCity_ == nullptr
        && this->departureCity_ == nullptr && this->departureDate_ == nullptr && this->segmentParamList_ == nullptr; };
      // arrivalCity Field Functions 
      bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
      void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
      inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
      inline JourneyParamList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


      // departureCity Field Functions 
      bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
      void deleteDepartureCity() { this->departureCity_ = nullptr;};
      inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
      inline JourneyParamList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


      // departureDate Field Functions 
      bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
      void deleteDepartureDate() { this->departureDate_ = nullptr;};
      inline string getDepartureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
      inline JourneyParamList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


      // segmentParamList Field Functions 
      bool hasSegmentParamList() const { return this->segmentParamList_ != nullptr;};
      void deleteSegmentParamList() { this->segmentParamList_ = nullptr;};
      inline const vector<JourneyParamList::SegmentParamList> & getSegmentParamList() const { DARABONBA_PTR_GET_CONST(segmentParamList_, vector<JourneyParamList::SegmentParamList>) };
      inline vector<JourneyParamList::SegmentParamList> getSegmentParamList() { DARABONBA_PTR_GET(segmentParamList_, vector<JourneyParamList::SegmentParamList>) };
      inline JourneyParamList& setSegmentParamList(const vector<JourneyParamList::SegmentParamList> & segmentParamList) { DARABONBA_PTR_SET_VALUE(segmentParamList_, segmentParamList) };
      inline JourneyParamList& setSegmentParamList(vector<JourneyParamList::SegmentParamList> && segmentParamList) { DARABONBA_PTR_SET_RVALUE(segmentParamList_, segmentParamList) };


    protected:
      // Arrival city code (3-letter uppercase)
      // 
      // This parameter is required.
      shared_ptr<string> arrivalCity_ {};
      // Departure city code (3-letter uppercase)
      // 
      // This parameter is required.
      shared_ptr<string> departureCity_ {};
      // Departure date (yyyyMMdd)
      // 
      // This parameter is required.
      shared_ptr<string> departureDate_ {};
      // Specified segment information for this journey
      // 
      // This parameter is required.
      shared_ptr<vector<JourneyParamList::SegmentParamList>> segmentParamList_ {};
    };

    virtual bool empty() const override { return this->adults_ == nullptr
        && this->cabinClass_ == nullptr && this->children_ == nullptr && this->infants_ == nullptr && this->journeyParamList_ == nullptr && this->solutionId_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t getAdults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline EnrichRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline EnrichRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline EnrichRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t getInfants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline EnrichRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // journeyParamList Field Functions 
    bool hasJourneyParamList() const { return this->journeyParamList_ != nullptr;};
    void deleteJourneyParamList() { this->journeyParamList_ = nullptr;};
    inline const vector<EnrichRequest::JourneyParamList> & getJourneyParamList() const { DARABONBA_PTR_GET_CONST(journeyParamList_, vector<EnrichRequest::JourneyParamList>) };
    inline vector<EnrichRequest::JourneyParamList> getJourneyParamList() { DARABONBA_PTR_GET(journeyParamList_, vector<EnrichRequest::JourneyParamList>) };
    inline EnrichRequest& setJourneyParamList(const vector<EnrichRequest::JourneyParamList> & journeyParamList) { DARABONBA_PTR_SET_VALUE(journeyParamList_, journeyParamList) };
    inline EnrichRequest& setJourneyParamList(vector<EnrichRequest::JourneyParamList> && journeyParamList) { DARABONBA_PTR_SET_RVALUE(journeyParamList_, journeyParamList) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline EnrichRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // Number of adult passengers 1-9
    shared_ptr<int32_t> adults_ {};
    // Cabin class ALL_CABIN: all cabin classes; Y: economy; FC: first class and business class; S: premium economy; YS: economy and premium economy; YSC: economy, premium economy, and business class;
    shared_ptr<string> cabinClass_ {};
    // Number of child passengers 0-9
    shared_ptr<int32_t> children_ {};
    // Number of infant passengers 0-9
    shared_ptr<int32_t> infants_ {};
    // Journey information
    shared_ptr<vector<EnrichRequest::JourneyParamList>> journeyParamList_ {};
    // solution_id returned by Search
    shared_ptr<string> solutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
