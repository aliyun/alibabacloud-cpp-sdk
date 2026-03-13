// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2REQUEST_HPP_
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

    virtual bool empty() const override { return this->cacheKey_ == nullptr
        && this->contactPhone_ == nullptr && this->isvName_ == nullptr && this->itemId_ == nullptr && this->orderId_ == nullptr && this->outOrderId_ == nullptr
        && this->outSubOrderId_ == nullptr && this->passengerSegmentRelations_ == nullptr && this->reason_ == nullptr && this->sessionId_ == nullptr && this->voluntary_ == nullptr; };
    // cacheKey Field Functions 
    bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
    void deleteCacheKey() { this->cacheKey_ = nullptr;};
    inline string getCacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
    inline FlightModifyApplyV2Request& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline FlightModifyApplyV2Request& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyApplyV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightModifyApplyV2Request& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyApplyV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyApplyV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string getOutSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyApplyV2Request& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightModifyApplyV2Request::PassengerSegmentRelations> & getPassengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightModifyApplyV2Request::PassengerSegmentRelations>) };
    inline vector<FlightModifyApplyV2Request::PassengerSegmentRelations> getPassengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightModifyApplyV2Request::PassengerSegmentRelations>) };
    inline FlightModifyApplyV2Request& setPassengerSegmentRelations(const vector<FlightModifyApplyV2Request::PassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightModifyApplyV2Request& setPassengerSegmentRelations(vector<FlightModifyApplyV2Request::PassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline FlightModifyApplyV2Request& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyApplyV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightModifyApplyV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    shared_ptr<string> cacheKey_ {};
    shared_ptr<string> contactPhone_ {};
    shared_ptr<string> isvName_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<string> outSubOrderId_ {};
    shared_ptr<vector<FlightModifyApplyV2Request::PassengerSegmentRelations>> passengerSegmentRelations_ {};
    shared_ptr<string> reason_ {};
    // sessionId
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> voluntary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
