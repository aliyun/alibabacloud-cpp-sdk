// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODYDATAAPPEVENTENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODYDATAAPPEVENTENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppEventsResponseBodyDataAppEventEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppEventsResponseBodyDataAppEventEntity& obj) { 
      DARABONBA_PTR_TO_JSON(CauseAnalysis, causeAnalysis_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(FirstTimestamp, firstTimestamp_);
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ObjectKind, objectKind_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppEventsResponseBodyDataAppEventEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(CauseAnalysis, causeAnalysis_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(FirstTimestamp, firstTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ObjectKind, objectKind_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ListAppEventsResponseBodyDataAppEventEntity() = default ;
    ListAppEventsResponseBodyDataAppEventEntity(const ListAppEventsResponseBodyDataAppEventEntity &) = default ;
    ListAppEventsResponseBodyDataAppEventEntity(ListAppEventsResponseBodyDataAppEventEntity &&) = default ;
    ListAppEventsResponseBodyDataAppEventEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppEventsResponseBodyDataAppEventEntity() = default ;
    ListAppEventsResponseBodyDataAppEventEntity& operator=(const ListAppEventsResponseBodyDataAppEventEntity &) = default ;
    ListAppEventsResponseBodyDataAppEventEntity& operator=(ListAppEventsResponseBodyDataAppEventEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->causeAnalysis_ != nullptr
        && this->eventType_ != nullptr && this->firstTimestamp_ != nullptr && this->lastTimestamp_ != nullptr && this->message_ != nullptr && this->objectKind_ != nullptr
        && this->objectName_ != nullptr && this->reason_ != nullptr; };
    // causeAnalysis Field Functions 
    bool hasCauseAnalysis() const { return this->causeAnalysis_ != nullptr;};
    void deleteCauseAnalysis() { this->causeAnalysis_ = nullptr;};
    inline string causeAnalysis() const { DARABONBA_PTR_GET_DEFAULT(causeAnalysis_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setCauseAnalysis(string causeAnalysis) { DARABONBA_PTR_SET_VALUE(causeAnalysis_, causeAnalysis) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // firstTimestamp Field Functions 
    bool hasFirstTimestamp() const { return this->firstTimestamp_ != nullptr;};
    void deleteFirstTimestamp() { this->firstTimestamp_ = nullptr;};
    inline string firstTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstTimestamp_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setFirstTimestamp(string firstTimestamp) { DARABONBA_PTR_SET_VALUE(firstTimestamp_, firstTimestamp) };


    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline string lastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setLastTimestamp(string lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectKind Field Functions 
    bool hasObjectKind() const { return this->objectKind_ != nullptr;};
    void deleteObjectKind() { this->objectKind_ = nullptr;};
    inline string objectKind() const { DARABONBA_PTR_GET_DEFAULT(objectKind_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setObjectKind(string objectKind) { DARABONBA_PTR_SET_VALUE(objectKind_, objectKind) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListAppEventsResponseBodyDataAppEventEntity& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> causeAnalysis_ = nullptr;
    // The type of the event. Valid values:
    std::shared_ptr<string> eventType_ = nullptr;
    // The timestamp of the first occurrence of the event.
    std::shared_ptr<string> firstTimestamp_ = nullptr;
    // The timestamp of the last occurrence of the event.
    std::shared_ptr<string> lastTimestamp_ = nullptr;
    // The information about the event.
    std::shared_ptr<string> message_ = nullptr;
    // The type of the object.
    std::shared_ptr<string> objectKind_ = nullptr;
    // The name of the object.
    std::shared_ptr<string> objectName_ = nullptr;
    // The cause of the event.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
