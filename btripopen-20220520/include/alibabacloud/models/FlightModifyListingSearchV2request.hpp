// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyListingSearchV2RequestPassengerSegmentRelations.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2RequestSelectedSegments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(interface_caller_is_support_retry, interfaceCallerIsSupportRetry_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_TO_JSON(selected_segments, selectedSegments_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(interface_caller_is_support_retry, interfaceCallerIsSupportRetry_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_FROM_JSON(selected_segments, selectedSegments_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightModifyListingSearchV2Request() = default ;
    FlightModifyListingSearchV2Request(const FlightModifyListingSearchV2Request &) = default ;
    FlightModifyListingSearchV2Request(FlightModifyListingSearchV2Request &&) = default ;
    FlightModifyListingSearchV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2Request() = default ;
    FlightModifyListingSearchV2Request& operator=(const FlightModifyListingSearchV2Request &) = default ;
    FlightModifyListingSearchV2Request& operator=(FlightModifyListingSearchV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->depDate_ != nullptr && this->interfaceCallerIsSupportRetry_ != nullptr && this->isvName_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr
        && this->passengerSegmentRelations_ != nullptr && this->searchMode_ != nullptr && this->searchRetryToken_ != nullptr && this->selectedSegments_ != nullptr && this->sessionId_ != nullptr
        && this->voluntary_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<int32_t> & cabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<int32_t>) };
    inline vector<int32_t> cabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<int32_t>) };
    inline FlightModifyListingSearchV2Request& setCabinClass(const vector<int32_t> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline FlightModifyListingSearchV2Request& setCabinClass(vector<int32_t> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline const vector<string> & depDate() const { DARABONBA_PTR_GET_CONST(depDate_, vector<string>) };
    inline vector<string> depDate() { DARABONBA_PTR_GET(depDate_, vector<string>) };
    inline FlightModifyListingSearchV2Request& setDepDate(const vector<string> & depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };
    inline FlightModifyListingSearchV2Request& setDepDate(vector<string> && depDate) { DARABONBA_PTR_SET_RVALUE(depDate_, depDate) };


    // interfaceCallerIsSupportRetry Field Functions 
    bool hasInterfaceCallerIsSupportRetry() const { return this->interfaceCallerIsSupportRetry_ != nullptr;};
    void deleteInterfaceCallerIsSupportRetry() { this->interfaceCallerIsSupportRetry_ = nullptr;};
    inline bool interfaceCallerIsSupportRetry() const { DARABONBA_PTR_GET_DEFAULT(interfaceCallerIsSupportRetry_, false) };
    inline FlightModifyListingSearchV2Request& setInterfaceCallerIsSupportRetry(bool interfaceCallerIsSupportRetry) { DARABONBA_PTR_SET_VALUE(interfaceCallerIsSupportRetry_, interfaceCallerIsSupportRetry) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyListingSearchV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyListingSearchV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyListingSearchV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations> & passengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations>) };
    inline vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations> passengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations>) };
    inline FlightModifyListingSearchV2Request& setPassengerSegmentRelations(const vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightModifyListingSearchV2Request& setPassengerSegmentRelations(vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightModifyListingSearchV2Request& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // searchRetryToken Field Functions 
    bool hasSearchRetryToken() const { return this->searchRetryToken_ != nullptr;};
    void deleteSearchRetryToken() { this->searchRetryToken_ = nullptr;};
    inline string searchRetryToken() const { DARABONBA_PTR_GET_DEFAULT(searchRetryToken_, "") };
    inline FlightModifyListingSearchV2Request& setSearchRetryToken(string searchRetryToken) { DARABONBA_PTR_SET_VALUE(searchRetryToken_, searchRetryToken) };


    // selectedSegments Field Functions 
    bool hasSelectedSegments() const { return this->selectedSegments_ != nullptr;};
    void deleteSelectedSegments() { this->selectedSegments_ = nullptr;};
    inline const vector<FlightModifyListingSearchV2RequestSelectedSegments> & selectedSegments() const { DARABONBA_PTR_GET_CONST(selectedSegments_, vector<FlightModifyListingSearchV2RequestSelectedSegments>) };
    inline vector<FlightModifyListingSearchV2RequestSelectedSegments> selectedSegments() { DARABONBA_PTR_GET(selectedSegments_, vector<FlightModifyListingSearchV2RequestSelectedSegments>) };
    inline FlightModifyListingSearchV2Request& setSelectedSegments(const vector<FlightModifyListingSearchV2RequestSelectedSegments> & selectedSegments) { DARABONBA_PTR_SET_VALUE(selectedSegments_, selectedSegments) };
    inline FlightModifyListingSearchV2Request& setSelectedSegments(vector<FlightModifyListingSearchV2RequestSelectedSegments> && selectedSegments) { DARABONBA_PTR_SET_RVALUE(selectedSegments_, selectedSegments) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyListingSearchV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyListingSearchV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<vector<int32_t>> cabinClass_ = nullptr;
    std::shared_ptr<vector<string>> depDate_ = nullptr;
    std::shared_ptr<bool> interfaceCallerIsSupportRetry_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations>> passengerSegmentRelations_ = nullptr;
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<string> searchRetryToken_ = nullptr;
    std::shared_ptr<vector<FlightModifyListingSearchV2RequestSelectedSegments>> selectedSegments_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
