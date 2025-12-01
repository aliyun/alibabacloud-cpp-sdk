// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class SendCustomEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(EventDescription, eventDescription_);
      DARABONBA_PTR_TO_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_TO_JSON(EventMarkdown, eventMarkdown_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(FindTime, findTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsSend, isSend_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(EventDescription, eventDescription_);
      DARABONBA_PTR_FROM_JSON(EventDetails, eventDetails_);
      DARABONBA_PTR_FROM_JSON(EventMarkdown, eventMarkdown_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(FindTime, findTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsSend, isSend_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    SendCustomEventRequest() = default ;
    SendCustomEventRequest(const SendCustomEventRequest &) = default ;
    SendCustomEventRequest(SendCustomEventRequest &&) = default ;
    SendCustomEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomEventRequest() = default ;
    SendCustomEventRequest& operator=(const SendCustomEventRequest &) = default ;
    SendCustomEventRequest& operator=(SendCustomEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerId_ == nullptr
        && return this->dataSource_ == nullptr && return this->eventDescription_ == nullptr && return this->eventDetails_ == nullptr && return this->eventMarkdown_ == nullptr && return this->eventName_ == nullptr
        && return this->eventType_ == nullptr && return this->findTime_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->isSend_ == nullptr
        && return this->level_ == nullptr && return this->occurrenceTime_ == nullptr && return this->ownerId_ == nullptr && return this->product_ == nullptr && return this->uniqueId_ == nullptr
        && return this->uuid_ == nullptr; };
    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline SendCustomEventRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline SendCustomEventRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // eventDescription Field Functions 
    bool hasEventDescription() const { return this->eventDescription_ != nullptr;};
    void deleteEventDescription() { this->eventDescription_ = nullptr;};
    inline string eventDescription() const { DARABONBA_PTR_GET_DEFAULT(eventDescription_, "") };
    inline SendCustomEventRequest& setEventDescription(string eventDescription) { DARABONBA_PTR_SET_VALUE(eventDescription_, eventDescription) };


    // eventDetails Field Functions 
    bool hasEventDetails() const { return this->eventDetails_ != nullptr;};
    void deleteEventDetails() { this->eventDetails_ = nullptr;};
    inline string eventDetails() const { DARABONBA_PTR_GET_DEFAULT(eventDetails_, "") };
    inline SendCustomEventRequest& setEventDetails(string eventDetails) { DARABONBA_PTR_SET_VALUE(eventDetails_, eventDetails) };


    // eventMarkdown Field Functions 
    bool hasEventMarkdown() const { return this->eventMarkdown_ != nullptr;};
    void deleteEventMarkdown() { this->eventMarkdown_ = nullptr;};
    inline string eventMarkdown() const { DARABONBA_PTR_GET_DEFAULT(eventMarkdown_, "") };
    inline SendCustomEventRequest& setEventMarkdown(string eventMarkdown) { DARABONBA_PTR_SET_VALUE(eventMarkdown_, eventMarkdown) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline SendCustomEventRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SendCustomEventRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // findTime Field Functions 
    bool hasFindTime() const { return this->findTime_ != nullptr;};
    void deleteFindTime() { this->findTime_ = nullptr;};
    inline int64_t findTime() const { DARABONBA_PTR_GET_DEFAULT(findTime_, 0L) };
    inline SendCustomEventRequest& setFindTime(int64_t findTime) { DARABONBA_PTR_SET_VALUE(findTime_, findTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendCustomEventRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SendCustomEventRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isSend Field Functions 
    bool hasIsSend() const { return this->isSend_ != nullptr;};
    void deleteIsSend() { this->isSend_ = nullptr;};
    inline string isSend() const { DARABONBA_PTR_GET_DEFAULT(isSend_, "") };
    inline SendCustomEventRequest& setIsSend(string isSend) { DARABONBA_PTR_SET_VALUE(isSend_, isSend) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SendCustomEventRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline int64_t occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, 0L) };
    inline SendCustomEventRequest& setOccurrenceTime(int64_t occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SendCustomEventRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline SendCustomEventRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string uniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline SendCustomEventRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline SendCustomEventRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // User ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerId_ = nullptr;
    // Data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // Event details.
    std::shared_ptr<string> eventDescription_ = nullptr;
    // Alert event details.
    std::shared_ptr<string> eventDetails_ = nullptr;
    // Details of markdown format
    std::shared_ptr<string> eventMarkdown_ = nullptr;
    // Event name.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventName_ = nullptr;
    // Event type.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventType_ = nullptr;
    // Alert discovery time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> findTime_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Whether to send.
    // 
    // This parameter is required.
    std::shared_ptr<string> isSend_ = nullptr;
    // Event level.
    // 
    // This parameter is required.
    std::shared_ptr<string> level_ = nullptr;
    // The first occurrence time of the alert event.
    std::shared_ptr<int64_t> occurrenceTime_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // Product name.
    std::shared_ptr<string> product_ = nullptr;
    // Unique ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> uniqueId_ = nullptr;
    // UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
