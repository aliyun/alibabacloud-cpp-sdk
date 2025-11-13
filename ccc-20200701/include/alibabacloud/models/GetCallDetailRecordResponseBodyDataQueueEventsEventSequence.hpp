// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAQUEUEEVENTSEVENTSEQUENCE_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAQUEUEEVENTSEVENTSEQUENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataQueueEventsEventSequence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
    };
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence() = default ;
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence(const GetCallDetailRecordResponseBodyDataQueueEventsEventSequence &) = default ;
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence(GetCallDetailRecordResponseBodyDataQueueEventsEventSequence &&) = default ;
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataQueueEventsEventSequence() = default ;
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& operator=(const GetCallDetailRecordResponseBodyDataQueueEventsEventSequence &) = default ;
    GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& operator=(GetCallDetailRecordResponseBodyDataQueueEventsEventSequence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->event_ == nullptr
        && return this->eventTime_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline GetCallDetailRecordResponseBodyDataQueueEventsEventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


  protected:
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<int64_t> eventTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
