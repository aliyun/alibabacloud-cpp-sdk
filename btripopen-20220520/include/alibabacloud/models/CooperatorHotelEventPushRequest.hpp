// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORHOTELEVENTPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORHOTELEVENTPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CooperatorHotelEventPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorHotelEventPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_status, changeOrderStatus_);
      DARABONBA_PTR_TO_JSON(change_order_status_desc, changeOrderStatusDesc_);
      DARABONBA_PTR_TO_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(event_desc, eventDesc_);
      DARABONBA_PTR_TO_JSON(event_time, eventTime_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CooperatorHotelEventPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_status, changeOrderStatus_);
      DARABONBA_PTR_FROM_JSON(change_order_status_desc, changeOrderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(event_desc, eventDesc_);
      DARABONBA_PTR_FROM_JSON(event_time, eventTime_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    CooperatorHotelEventPushRequest() = default ;
    CooperatorHotelEventPushRequest(const CooperatorHotelEventPushRequest &) = default ;
    CooperatorHotelEventPushRequest(CooperatorHotelEventPushRequest &&) = default ;
    CooperatorHotelEventPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorHotelEventPushRequest() = default ;
    CooperatorHotelEventPushRequest& operator=(const CooperatorHotelEventPushRequest &) = default ;
    CooperatorHotelEventPushRequest& operator=(CooperatorHotelEventPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderStatus_ != nullptr
        && this->changeOrderStatusDesc_ != nullptr && this->cooperatorOrderId_ != nullptr && this->event_ != nullptr && this->eventDesc_ != nullptr && this->eventTime_ != nullptr
        && this->orderId_ != nullptr; };
    // changeOrderStatus Field Functions 
    bool hasChangeOrderStatus() const { return this->changeOrderStatus_ != nullptr;};
    void deleteChangeOrderStatus() { this->changeOrderStatus_ = nullptr;};
    inline int32_t changeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(changeOrderStatus_, 0) };
    inline CooperatorHotelEventPushRequest& setChangeOrderStatus(int32_t changeOrderStatus) { DARABONBA_PTR_SET_VALUE(changeOrderStatus_, changeOrderStatus) };


    // changeOrderStatusDesc Field Functions 
    bool hasChangeOrderStatusDesc() const { return this->changeOrderStatusDesc_ != nullptr;};
    void deleteChangeOrderStatusDesc() { this->changeOrderStatusDesc_ = nullptr;};
    inline string changeOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(changeOrderStatusDesc_, "") };
    inline CooperatorHotelEventPushRequest& setChangeOrderStatusDesc(string changeOrderStatusDesc) { DARABONBA_PTR_SET_VALUE(changeOrderStatusDesc_, changeOrderStatusDesc) };


    // cooperatorOrderId Field Functions 
    bool hasCooperatorOrderId() const { return this->cooperatorOrderId_ != nullptr;};
    void deleteCooperatorOrderId() { this->cooperatorOrderId_ = nullptr;};
    inline string cooperatorOrderId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorOrderId_, "") };
    inline CooperatorHotelEventPushRequest& setCooperatorOrderId(string cooperatorOrderId) { DARABONBA_PTR_SET_VALUE(cooperatorOrderId_, cooperatorOrderId) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline CooperatorHotelEventPushRequest& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventDesc Field Functions 
    bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
    void deleteEventDesc() { this->eventDesc_ = nullptr;};
    inline string eventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
    inline CooperatorHotelEventPushRequest& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline CooperatorHotelEventPushRequest& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CooperatorHotelEventPushRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<int32_t> changeOrderStatus_ = nullptr;
    std::shared_ptr<string> changeOrderStatusDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cooperatorOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> eventDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
