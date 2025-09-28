// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHistoryEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ExtendedAttribute, extendedAttribute_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ExtendedAttribute, extendedAttribute_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeHistoryEventsResponseBodyEvents() = default ;
    DescribeHistoryEventsResponseBodyEvents(const DescribeHistoryEventsResponseBodyEvents &) = default ;
    DescribeHistoryEventsResponseBodyEvents(DescribeHistoryEventsResponseBodyEvents &&) = default ;
    DescribeHistoryEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsResponseBodyEvents() = default ;
    DescribeHistoryEventsResponseBodyEvents& operator=(const DescribeHistoryEventsResponseBodyEvents &) = default ;
    DescribeHistoryEventsResponseBodyEvents& operator=(DescribeHistoryEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventId_ != nullptr
        && this->eventLevel_ != nullptr && this->eventStatus_ != nullptr && this->eventType_ != nullptr && this->extendedAttribute_ != nullptr && this->notBefore_ != nullptr
        && this->publishTime_ != nullptr && this->reason_ != nullptr && this->resourceId_ != nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // extendedAttribute Field Functions 
    bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
    void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
    inline string extendedAttribute() const { DARABONBA_PTR_GET_DEFAULT(extendedAttribute_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setExtendedAttribute(string extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline int64_t notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
    inline DescribeHistoryEventsResponseBodyEvents& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline DescribeHistoryEventsResponseBodyEvents& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeHistoryEventsResponseBodyEvents& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventStatus_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> extendedAttribute_ = nullptr;
    std::shared_ptr<int64_t> notBefore_ = nullptr;
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
