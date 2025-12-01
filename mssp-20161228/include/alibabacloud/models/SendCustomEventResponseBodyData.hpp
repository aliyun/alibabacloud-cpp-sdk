// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class SendCustomEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(WorkTaskName, workTaskName_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(WorkTaskName, workTaskName_);
    };
    SendCustomEventResponseBodyData() = default ;
    SendCustomEventResponseBodyData(const SendCustomEventResponseBodyData &) = default ;
    SendCustomEventResponseBodyData(SendCustomEventResponseBodyData &&) = default ;
    SendCustomEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomEventResponseBodyData() = default ;
    SendCustomEventResponseBodyData& operator=(const SendCustomEventResponseBodyData &) = default ;
    SendCustomEventResponseBodyData& operator=(SendCustomEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerId_ == nullptr
        && return this->customerName_ == nullptr && return this->eventId_ == nullptr && return this->eventType_ == nullptr && return this->id_ == nullptr && return this->ownerId_ == nullptr
        && return this->ownerName_ == nullptr && return this->workTaskName_ == nullptr; };
    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline SendCustomEventResponseBodyData& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline SendCustomEventResponseBodyData& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SendCustomEventResponseBodyData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SendCustomEventResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SendCustomEventResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SendCustomEventResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline SendCustomEventResponseBodyData& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // workTaskName Field Functions 
    bool hasWorkTaskName() const { return this->workTaskName_ != nullptr;};
    void deleteWorkTaskName() { this->workTaskName_ = nullptr;};
    inline string workTaskName() const { DARABONBA_PTR_GET_DEFAULT(workTaskName_, "") };
    inline SendCustomEventResponseBodyData& setWorkTaskName(string workTaskName) { DARABONBA_PTR_SET_VALUE(workTaskName_, workTaskName) };


  protected:
    // Service UID.
    std::shared_ptr<string> customerId_ = nullptr;
    // Customer name.
    std::shared_ptr<string> customerName_ = nullptr;
    // Alert ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // Alert type.
    std::shared_ptr<string> eventType_ = nullptr;
    // Work order ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Owner name.
    std::shared_ptr<string> ownerName_ = nullptr;
    // Work order name.
    std::shared_ptr<string> workTaskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
