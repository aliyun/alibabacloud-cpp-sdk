// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENT_HPP_
#define ALIBABACLOUD_MODELS_EVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Event : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Event& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(TriggerTenantId, triggerTenantId_);
      DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
      DARABONBA_PTR_TO_JSON(TriggerUserId, triggerUserId_);
      DARABONBA_PTR_TO_JSON(TriggeredBy, triggeredBy_);
    };
    friend void from_json(const Darabonba::Json& j, Event& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(TriggerTenantId, triggerTenantId_);
      DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
      DARABONBA_PTR_FROM_JSON(TriggerUserId, triggerUserId_);
      DARABONBA_PTR_FROM_JSON(TriggeredBy, triggeredBy_);
    };
    Event() = default ;
    Event(const Event &) = default ;
    Event(Event &&) = default ;
    Event(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Event() = default ;
    Event& operator=(const Event &) = default ;
    Event& operator=(Event &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->eventId_ == nullptr && this->eventType_ == nullptr && this->function_ == nullptr && this->isTruncated_ == nullptr && this->objectId_ == nullptr
        && this->objectType_ == nullptr && this->triggerTenantId_ == nullptr && this->triggerTime_ == nullptr && this->triggerUserId_ == nullptr && this->triggeredBy_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline Event& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline Event& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline Event& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline Event& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline Event& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline Event& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline Event& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // triggerTenantId Field Functions 
    bool hasTriggerTenantId() const { return this->triggerTenantId_ != nullptr;};
    void deleteTriggerTenantId() { this->triggerTenantId_ = nullptr;};
    inline string getTriggerTenantId() const { DARABONBA_PTR_GET_DEFAULT(triggerTenantId_, "") };
    inline Event& setTriggerTenantId(string triggerTenantId) { DARABONBA_PTR_SET_VALUE(triggerTenantId_, triggerTenantId) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline string getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, "") };
    inline Event& setTriggerTime(string triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    // triggerUserId Field Functions 
    bool hasTriggerUserId() const { return this->triggerUserId_ != nullptr;};
    void deleteTriggerUserId() { this->triggerUserId_ = nullptr;};
    inline string getTriggerUserId() const { DARABONBA_PTR_GET_DEFAULT(triggerUserId_, "") };
    inline Event& setTriggerUserId(string triggerUserId) { DARABONBA_PTR_SET_VALUE(triggerUserId_, triggerUserId) };


    // triggeredBy Field Functions 
    bool hasTriggeredBy() const { return this->triggeredBy_ != nullptr;};
    void deleteTriggeredBy() { this->triggeredBy_ = nullptr;};
    inline string getTriggeredBy() const { DARABONBA_PTR_GET_DEFAULT(triggeredBy_, "") };
    inline Event& setTriggeredBy(string triggeredBy) { DARABONBA_PTR_SET_VALUE(triggeredBy_, triggeredBy) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> eventType_ {};
    shared_ptr<string> function_ {};
    shared_ptr<bool> isTruncated_ {};
    shared_ptr<string> objectId_ {};
    shared_ptr<string> objectType_ {};
    shared_ptr<string> triggerTenantId_ {};
    shared_ptr<string> triggerTime_ {};
    shared_ptr<string> triggerUserId_ {};
    shared_ptr<string> triggeredBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
