// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAAGENTEVENTSEVENTSEQUENCE_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAAGENTEVENTSEVENTSEQUENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAgentEventsEventSequence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
    };
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence() = default ;
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence(const GetCallDetailRecordResponseBodyDataAgentEventsEventSequence &) = default ;
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence(GetCallDetailRecordResponseBodyDataAgentEventsEventSequence &&) = default ;
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAgentEventsEventSequence() = default ;
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& operator=(const GetCallDetailRecordResponseBodyDataAgentEventsEventSequence &) = default ;
    GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& operator=(GetCallDetailRecordResponseBodyDataAgentEventsEventSequence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->event_ != nullptr && this->eventTime_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline GetCallDetailRecordResponseBodyDataAgentEventsEventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<int64_t> eventTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
