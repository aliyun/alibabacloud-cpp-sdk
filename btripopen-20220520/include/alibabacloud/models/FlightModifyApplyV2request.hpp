// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyApplyV2RequestPassengerSegmentRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyApplyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyApplyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyApplyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightModifyApplyV2Request() = default ;
    FlightModifyApplyV2Request(const FlightModifyApplyV2Request &) = default ;
    FlightModifyApplyV2Request(FlightModifyApplyV2Request &&) = default ;
    FlightModifyApplyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyApplyV2Request() = default ;
    FlightModifyApplyV2Request& operator=(const FlightModifyApplyV2Request &) = default ;
    FlightModifyApplyV2Request& operator=(FlightModifyApplyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheKey_ != nullptr
        && this->contactPhone_ != nullptr && this->isvName_ != nullptr && this->itemId_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr
        && this->outSubOrderId_ != nullptr && this->passengerSegmentRelations_ != nullptr && this->reason_ != nullptr && this->sessionId_ != nullptr && this->voluntary_ != nullptr; };
    // cacheKey Field Functions 
    bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
    void deleteCacheKey() { this->cacheKey_ = nullptr;};
    inline string cacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
    inline FlightModifyApplyV2Request& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline FlightModifyApplyV2Request& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyApplyV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightModifyApplyV2Request& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyApplyV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyApplyV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyApplyV2Request& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightModifyApplyV2RequestPassengerSegmentRelations> & passengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightModifyApplyV2RequestPassengerSegmentRelations>) };
    inline vector<FlightModifyApplyV2RequestPassengerSegmentRelations> passengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightModifyApplyV2RequestPassengerSegmentRelations>) };
    inline FlightModifyApplyV2Request& setPassengerSegmentRelations(const vector<FlightModifyApplyV2RequestPassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightModifyApplyV2Request& setPassengerSegmentRelations(vector<FlightModifyApplyV2RequestPassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightModifyApplyV2Request& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyApplyV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyApplyV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> cacheKey_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<vector<FlightModifyApplyV2RequestPassengerSegmentRelations>> passengerSegmentRelations_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // sessionId
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
