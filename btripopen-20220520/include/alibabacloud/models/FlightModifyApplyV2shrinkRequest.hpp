// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyApplyV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyApplyV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyApplyV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightModifyApplyV2ShrinkRequest() = default ;
    FlightModifyApplyV2ShrinkRequest(const FlightModifyApplyV2ShrinkRequest &) = default ;
    FlightModifyApplyV2ShrinkRequest(FlightModifyApplyV2ShrinkRequest &&) = default ;
    FlightModifyApplyV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyApplyV2ShrinkRequest() = default ;
    FlightModifyApplyV2ShrinkRequest& operator=(const FlightModifyApplyV2ShrinkRequest &) = default ;
    FlightModifyApplyV2ShrinkRequest& operator=(FlightModifyApplyV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheKey_ != nullptr
        && this->contactPhone_ != nullptr && this->isvName_ != nullptr && this->itemId_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr
        && this->outSubOrderId_ != nullptr && this->passengerSegmentRelationsShrink_ != nullptr && this->reason_ != nullptr && this->sessionId_ != nullptr && this->voluntary_ != nullptr; };
    // cacheKey Field Functions 
    bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
    void deleteCacheKey() { this->cacheKey_ = nullptr;};
    inline string cacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyApplyV2ShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // passengerSegmentRelationsShrink Field Functions 
    bool hasPassengerSegmentRelationsShrink() const { return this->passengerSegmentRelationsShrink_ != nullptr;};
    void deletePassengerSegmentRelationsShrink() { this->passengerSegmentRelationsShrink_ = nullptr;};
    inline string passengerSegmentRelationsShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerSegmentRelationsShrink_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setPassengerSegmentRelationsShrink(string passengerSegmentRelationsShrink) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelationsShrink_, passengerSegmentRelationsShrink) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyApplyV2ShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyApplyV2ShrinkRequest& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> cacheKey_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> passengerSegmentRelationsShrink_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // sessionId
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
