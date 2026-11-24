// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SEGMENTSTARTED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SEGMENTSTARTED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class SegmentStarted : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentStarted& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(start_ms, startMs_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentStarted& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(start_ms, startMs_);
    };
    SegmentStarted() = default ;
    SegmentStarted(const SegmentStarted &) = default ;
    SegmentStarted(SegmentStarted &&) = default ;
    SegmentStarted(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentStarted() = default ;
    SegmentStarted& operator=(const SegmentStarted &) = default ;
    SegmentStarted& operator=(SegmentStarted &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->segmentId_ == nullptr && this->startMs_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SegmentStarted& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SegmentStarted& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SegmentStarted& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline SegmentStarted& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // startMs Field Functions 
    bool hasStartMs() const { return this->startMs_ != nullptr;};
    void deleteStartMs() { this->startMs_ = nullptr;};
    inline int64_t getStartMs() const { DARABONBA_PTR_GET_DEFAULT(startMs_, 0L) };
    inline SegmentStarted& setStartMs(int64_t startMs) { DARABONBA_PTR_SET_VALUE(startMs_, startMs) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> segmentId_ {};
    shared_ptr<int64_t> startMs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
