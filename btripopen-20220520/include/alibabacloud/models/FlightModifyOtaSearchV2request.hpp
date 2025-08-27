// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyOtaSearchV2RequestPassengerSegmentRelations.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2RequestSelectedSegments.hpp>
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
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->depDate_ != nullptr && this->isvName_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->passengerSegmentRelations_ != nullptr
        && this->selectedSegments_ != nullptr && this->sessionId_ != nullptr && this->voluntary_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<int32_t> & cabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<int32_t>) };
    inline vector<int32_t> cabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<int32_t>) };
    inline FlightModifyOtaSearchV2Request& setCabinClass(const vector<int32_t> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline FlightModifyOtaSearchV2Request& setCabinClass(vector<int32_t> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline const vector<string> & depDate() const { DARABONBA_PTR_GET_CONST(depDate_, vector<string>) };
    inline vector<string> depDate() { DARABONBA_PTR_GET(depDate_, vector<string>) };
    inline FlightModifyOtaSearchV2Request& setDepDate(const vector<string> & depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };
    inline FlightModifyOtaSearchV2Request& setDepDate(vector<string> && depDate) { DARABONBA_PTR_SET_RVALUE(depDate_, depDate) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyOtaSearchV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyOtaSearchV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyOtaSearchV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations> & passengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations>) };
    inline vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations> passengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations>) };
    inline FlightModifyOtaSearchV2Request& setPassengerSegmentRelations(const vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightModifyOtaSearchV2Request& setPassengerSegmentRelations(vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // selectedSegments Field Functions 
    bool hasSelectedSegments() const { return this->selectedSegments_ != nullptr;};
    void deleteSelectedSegments() { this->selectedSegments_ = nullptr;};
    inline const vector<FlightModifyOtaSearchV2RequestSelectedSegments> & selectedSegments() const { DARABONBA_PTR_GET_CONST(selectedSegments_, vector<FlightModifyOtaSearchV2RequestSelectedSegments>) };
    inline vector<FlightModifyOtaSearchV2RequestSelectedSegments> selectedSegments() { DARABONBA_PTR_GET(selectedSegments_, vector<FlightModifyOtaSearchV2RequestSelectedSegments>) };
    inline FlightModifyOtaSearchV2Request& setSelectedSegments(const vector<FlightModifyOtaSearchV2RequestSelectedSegments> & selectedSegments) { DARABONBA_PTR_SET_VALUE(selectedSegments_, selectedSegments) };
    inline FlightModifyOtaSearchV2Request& setSelectedSegments(vector<FlightModifyOtaSearchV2RequestSelectedSegments> && selectedSegments) { DARABONBA_PTR_SET_RVALUE(selectedSegments_, selectedSegments) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyOtaSearchV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyOtaSearchV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<vector<int32_t>> cabinClass_ = nullptr;
    std::shared_ptr<vector<string>> depDate_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations>> passengerSegmentRelations_ = nullptr;
    std::shared_ptr<vector<FlightModifyOtaSearchV2RequestSelectedSegments>> selectedSegments_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
