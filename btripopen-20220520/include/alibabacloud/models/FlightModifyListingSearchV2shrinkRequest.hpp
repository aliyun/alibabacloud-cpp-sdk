// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClassShrink_);
      DARABONBA_PTR_TO_JSON(dep_date, depDateShrink_);
      DARABONBA_PTR_TO_JSON(interface_caller_is_support_retry, interfaceCallerIsSupportRetry_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_TO_JSON(selected_segments, selectedSegmentsShrink_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClassShrink_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDateShrink_);
      DARABONBA_PTR_FROM_JSON(interface_caller_is_support_retry, interfaceCallerIsSupportRetry_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_FROM_JSON(selected_segments, selectedSegmentsShrink_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightModifyListingSearchV2ShrinkRequest() = default ;
    FlightModifyListingSearchV2ShrinkRequest(const FlightModifyListingSearchV2ShrinkRequest &) = default ;
    FlightModifyListingSearchV2ShrinkRequest(FlightModifyListingSearchV2ShrinkRequest &&) = default ;
    FlightModifyListingSearchV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ShrinkRequest() = default ;
    FlightModifyListingSearchV2ShrinkRequest& operator=(const FlightModifyListingSearchV2ShrinkRequest &) = default ;
    FlightModifyListingSearchV2ShrinkRequest& operator=(FlightModifyListingSearchV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClassShrink_ != nullptr
        && this->depDateShrink_ != nullptr && this->interfaceCallerIsSupportRetry_ != nullptr && this->isvName_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr
        && this->passengerSegmentRelationsShrink_ != nullptr && this->searchMode_ != nullptr && this->searchRetryToken_ != nullptr && this->selectedSegmentsShrink_ != nullptr && this->sessionId_ != nullptr
        && this->voluntary_ != nullptr; };
    // cabinClassShrink Field Functions 
    bool hasCabinClassShrink() const { return this->cabinClassShrink_ != nullptr;};
    void deleteCabinClassShrink() { this->cabinClassShrink_ = nullptr;};
    inline string cabinClassShrink() const { DARABONBA_PTR_GET_DEFAULT(cabinClassShrink_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setCabinClassShrink(string cabinClassShrink) { DARABONBA_PTR_SET_VALUE(cabinClassShrink_, cabinClassShrink) };


    // depDateShrink Field Functions 
    bool hasDepDateShrink() const { return this->depDateShrink_ != nullptr;};
    void deleteDepDateShrink() { this->depDateShrink_ = nullptr;};
    inline string depDateShrink() const { DARABONBA_PTR_GET_DEFAULT(depDateShrink_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setDepDateShrink(string depDateShrink) { DARABONBA_PTR_SET_VALUE(depDateShrink_, depDateShrink) };


    // interfaceCallerIsSupportRetry Field Functions 
    bool hasInterfaceCallerIsSupportRetry() const { return this->interfaceCallerIsSupportRetry_ != nullptr;};
    void deleteInterfaceCallerIsSupportRetry() { this->interfaceCallerIsSupportRetry_ = nullptr;};
    inline bool interfaceCallerIsSupportRetry() const { DARABONBA_PTR_GET_DEFAULT(interfaceCallerIsSupportRetry_, false) };
    inline FlightModifyListingSearchV2ShrinkRequest& setInterfaceCallerIsSupportRetry(bool interfaceCallerIsSupportRetry) { DARABONBA_PTR_SET_VALUE(interfaceCallerIsSupportRetry_, interfaceCallerIsSupportRetry) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyListingSearchV2ShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelationsShrink Field Functions 
    bool hasPassengerSegmentRelationsShrink() const { return this->passengerSegmentRelationsShrink_ != nullptr;};
    void deletePassengerSegmentRelationsShrink() { this->passengerSegmentRelationsShrink_ = nullptr;};
    inline string passengerSegmentRelationsShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerSegmentRelationsShrink_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setPassengerSegmentRelationsShrink(string passengerSegmentRelationsShrink) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelationsShrink_, passengerSegmentRelationsShrink) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightModifyListingSearchV2ShrinkRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // searchRetryToken Field Functions 
    bool hasSearchRetryToken() const { return this->searchRetryToken_ != nullptr;};
    void deleteSearchRetryToken() { this->searchRetryToken_ = nullptr;};
    inline string searchRetryToken() const { DARABONBA_PTR_GET_DEFAULT(searchRetryToken_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setSearchRetryToken(string searchRetryToken) { DARABONBA_PTR_SET_VALUE(searchRetryToken_, searchRetryToken) };


    // selectedSegmentsShrink Field Functions 
    bool hasSelectedSegmentsShrink() const { return this->selectedSegmentsShrink_ != nullptr;};
    void deleteSelectedSegmentsShrink() { this->selectedSegmentsShrink_ = nullptr;};
    inline string selectedSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedSegmentsShrink_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setSelectedSegmentsShrink(string selectedSegmentsShrink) { DARABONBA_PTR_SET_VALUE(selectedSegmentsShrink_, selectedSegmentsShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyListingSearchV2ShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyListingSearchV2ShrinkRequest& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> cabinClassShrink_ = nullptr;
    std::shared_ptr<string> depDateShrink_ = nullptr;
    std::shared_ptr<bool> interfaceCallerIsSupportRetry_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> passengerSegmentRelationsShrink_ = nullptr;
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<string> searchRetryToken_ = nullptr;
    std::shared_ptr<string> selectedSegmentsShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
