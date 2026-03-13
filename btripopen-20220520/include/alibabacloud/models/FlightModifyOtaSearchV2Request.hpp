// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_TO_JSON(selected_segments, selectedSegments_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_FROM_JSON(selected_segments, selectedSegments_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightModifyOtaSearchV2Request() = default ;
    FlightModifyOtaSearchV2Request(const FlightModifyOtaSearchV2Request &) = default ;
    FlightModifyOtaSearchV2Request(FlightModifyOtaSearchV2Request &&) = default ;
    FlightModifyOtaSearchV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2Request() = default ;
    FlightModifyOtaSearchV2Request& operator=(const FlightModifyOtaSearchV2Request &) = default ;
    FlightModifyOtaSearchV2Request& operator=(FlightModifyOtaSearchV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelectedSegments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedSegments& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_TO_JSON(dep_date_time, depDateTime_);
        DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
        DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
        DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
        DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedSegments& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_date_time, depDateTime_);
        DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
        DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
        DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
        DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
      };
      SelectedSegments() = default ;
      SelectedSegments(const SelectedSegments &) = default ;
      SelectedSegments(SelectedSegments &&) = default ;
      SelectedSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedSegments() = default ;
      SelectedSegments& operator=(const SelectedSegments &) = default ;
      SelectedSegments& operator=(SelectedSegments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->depCityCode_ == nullptr && this->depDateTime_ == nullptr && this->journeySeq_ == nullptr && this->marketingFlightNo_ == nullptr && this->operatingFlightNo_ == nullptr
        && this->segmentSeq_ == nullptr; };
      // arrCityCode Field Functions 
      bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
      void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
      inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
      inline SelectedSegments& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


      // depCityCode Field Functions 
      bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
      void deleteDepCityCode() { this->depCityCode_ = nullptr;};
      inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
      inline SelectedSegments& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


      // depDateTime Field Functions 
      bool hasDepDateTime() const { return this->depDateTime_ != nullptr;};
      void deleteDepDateTime() { this->depDateTime_ = nullptr;};
      inline string getDepDateTime() const { DARABONBA_PTR_GET_DEFAULT(depDateTime_, "") };
      inline SelectedSegments& setDepDateTime(string depDateTime) { DARABONBA_PTR_SET_VALUE(depDateTime_, depDateTime) };


      // journeySeq Field Functions 
      bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
      void deleteJourneySeq() { this->journeySeq_ = nullptr;};
      inline int32_t getJourneySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
      inline SelectedSegments& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


      // marketingFlightNo Field Functions 
      bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
      void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
      inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
      inline SelectedSegments& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


      // operatingFlightNo Field Functions 
      bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
      void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
      inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
      inline SelectedSegments& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


      // segmentSeq Field Functions 
      bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
      void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
      inline int32_t getSegmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
      inline SelectedSegments& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


    protected:
      shared_ptr<string> arrCityCode_ {};
      shared_ptr<string> depCityCode_ {};
      shared_ptr<string> depDateTime_ {};
      shared_ptr<int32_t> journeySeq_ {};
      shared_ptr<string> marketingFlightNo_ {};
      shared_ptr<string> operatingFlightNo_ {};
      shared_ptr<int32_t> segmentSeq_ {};
    };

    class PassengerSegmentRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerSegmentRelations& obj) { 
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerSegmentRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
      };
      PassengerSegmentRelations() = default ;
      PassengerSegmentRelations(const PassengerSegmentRelations &) = default ;
      PassengerSegmentRelations(PassengerSegmentRelations &&) = default ;
      PassengerSegmentRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerSegmentRelations() = default ;
      PassengerSegmentRelations& operator=(const PassengerSegmentRelations &) = default ;
      PassengerSegmentRelations& operator=(PassengerSegmentRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->segmentIdList_ == nullptr; };
      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
      inline PassengerSegmentRelations& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


      // segmentIdList Field Functions 
      bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
      void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
      inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
      inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
      inline PassengerSegmentRelations& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
      inline PassengerSegmentRelations& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


    protected:
      shared_ptr<string> passengerId_ {};
      shared_ptr<vector<string>> segmentIdList_ {};
    };

    virtual bool empty() const override { return this->cabinClass_ == nullptr
        && this->depDate_ == nullptr && this->isvName_ == nullptr && this->orderId_ == nullptr && this->outOrderId_ == nullptr && this->passengerSegmentRelations_ == nullptr
        && this->selectedSegments_ == nullptr && this->sessionId_ == nullptr && this->voluntary_ == nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<int32_t> & getCabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<int32_t>) };
    inline vector<int32_t> getCabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<int32_t>) };
    inline FlightModifyOtaSearchV2Request& setCabinClass(const vector<int32_t> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline FlightModifyOtaSearchV2Request& setCabinClass(vector<int32_t> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline const vector<string> & getDepDate() const { DARABONBA_PTR_GET_CONST(depDate_, vector<string>) };
    inline vector<string> getDepDate() { DARABONBA_PTR_GET(depDate_, vector<string>) };
    inline FlightModifyOtaSearchV2Request& setDepDate(const vector<string> & depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };
    inline FlightModifyOtaSearchV2Request& setDepDate(vector<string> && depDate) { DARABONBA_PTR_SET_RVALUE(depDate_, depDate) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyOtaSearchV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyOtaSearchV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyOtaSearchV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations> & getPassengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations>) };
    inline vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations> getPassengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations>) };
    inline FlightModifyOtaSearchV2Request& setPassengerSegmentRelations(const vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightModifyOtaSearchV2Request& setPassengerSegmentRelations(vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // selectedSegments Field Functions 
    bool hasSelectedSegments() const { return this->selectedSegments_ != nullptr;};
    void deleteSelectedSegments() { this->selectedSegments_ = nullptr;};
    inline const vector<FlightModifyOtaSearchV2Request::SelectedSegments> & getSelectedSegments() const { DARABONBA_PTR_GET_CONST(selectedSegments_, vector<FlightModifyOtaSearchV2Request::SelectedSegments>) };
    inline vector<FlightModifyOtaSearchV2Request::SelectedSegments> getSelectedSegments() { DARABONBA_PTR_GET(selectedSegments_, vector<FlightModifyOtaSearchV2Request::SelectedSegments>) };
    inline FlightModifyOtaSearchV2Request& setSelectedSegments(const vector<FlightModifyOtaSearchV2Request::SelectedSegments> & selectedSegments) { DARABONBA_PTR_SET_VALUE(selectedSegments_, selectedSegments) };
    inline FlightModifyOtaSearchV2Request& setSelectedSegments(vector<FlightModifyOtaSearchV2Request::SelectedSegments> && selectedSegments) { DARABONBA_PTR_SET_RVALUE(selectedSegments_, selectedSegments) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyOtaSearchV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyOtaSearchV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    shared_ptr<vector<int32_t>> cabinClass_ {};
    shared_ptr<vector<string>> depDate_ {};
    shared_ptr<string> isvName_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<vector<FlightModifyOtaSearchV2Request::PassengerSegmentRelations>> passengerSegmentRelations_ {};
    shared_ptr<vector<FlightModifyOtaSearchV2Request::SelectedSegments>> selectedSegments_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> voluntary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
