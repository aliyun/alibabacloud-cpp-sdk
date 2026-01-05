// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ThreatEvents, threatEvents_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ThreatEvents, threatEvents_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeThreatEventResponseBody() = default ;
    DescribeThreatEventResponseBody(const DescribeThreatEventResponseBody &) = default ;
    DescribeThreatEventResponseBody(DescribeThreatEventResponseBody &&) = default ;
    DescribeThreatEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventResponseBody() = default ;
    DescribeThreatEventResponseBody& operator=(const DescribeThreatEventResponseBody &) = default ;
    DescribeThreatEventResponseBody& operator=(DescribeThreatEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ThreatEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ThreatEvents& obj) { 
        DARABONBA_PTR_TO_JSON(BlockRate, blockRate_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_TO_JSON(EventSrc, eventSrc_);
        DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
        DARABONBA_PTR_TO_JSON(EventTarget, eventTarget_);
      };
      friend void from_json(const Darabonba::Json& j, ThreatEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockRate, blockRate_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_FROM_JSON(EventSrc, eventSrc_);
        DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
        DARABONBA_PTR_FROM_JSON(EventTarget, eventTarget_);
      };
      ThreatEvents() = default ;
      ThreatEvents(const ThreatEvents &) = default ;
      ThreatEvents(ThreatEvents &&) = default ;
      ThreatEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ThreatEvents() = default ;
      ThreatEvents& operator=(const ThreatEvents &) = default ;
      ThreatEvents& operator=(ThreatEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockRate_ == nullptr
        && this->endTime_ == nullptr && this->eventId_ == nullptr && this->eventLevel_ == nullptr && this->eventSrc_ == nullptr && this->eventTag_ == nullptr
        && this->eventTarget_ == nullptr; };
      // blockRate Field Functions 
      bool hasBlockRate() const { return this->blockRate_ != nullptr;};
      void deleteBlockRate() { this->blockRate_ = nullptr;};
      inline string getBlockRate() const { DARABONBA_PTR_GET_DEFAULT(blockRate_, "") };
      inline ThreatEvents& setBlockRate(string blockRate) { DARABONBA_PTR_SET_VALUE(blockRate_, blockRate) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ThreatEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline ThreatEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline ThreatEvents& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventSrc Field Functions 
      bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
      void deleteEventSrc() { this->eventSrc_ = nullptr;};
      inline string getEventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
      inline ThreatEvents& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


      // eventTag Field Functions 
      bool hasEventTag() const { return this->eventTag_ != nullptr;};
      void deleteEventTag() { this->eventTag_ = nullptr;};
      inline string getEventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
      inline ThreatEvents& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


      // eventTarget Field Functions 
      bool hasEventTarget() const { return this->eventTarget_ != nullptr;};
      void deleteEventTarget() { this->eventTarget_ = nullptr;};
      inline string getEventTarget() const { DARABONBA_PTR_GET_DEFAULT(eventTarget_, "") };
      inline ThreatEvents& setEventTarget(string eventTarget) { DARABONBA_PTR_SET_VALUE(eventTarget_, eventTarget) };


    protected:
      shared_ptr<string> blockRate_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> eventId_ {};
      shared_ptr<string> eventLevel_ {};
      shared_ptr<string> eventSrc_ {};
      shared_ptr<string> eventTag_ {};
      shared_ptr<string> eventTarget_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->threatEvents_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threatEvents Field Functions 
    bool hasThreatEvents() const { return this->threatEvents_ != nullptr;};
    void deleteThreatEvents() { this->threatEvents_ = nullptr;};
    inline const vector<DescribeThreatEventResponseBody::ThreatEvents> & getThreatEvents() const { DARABONBA_PTR_GET_CONST(threatEvents_, vector<DescribeThreatEventResponseBody::ThreatEvents>) };
    inline vector<DescribeThreatEventResponseBody::ThreatEvents> getThreatEvents() { DARABONBA_PTR_GET(threatEvents_, vector<DescribeThreatEventResponseBody::ThreatEvents>) };
    inline DescribeThreatEventResponseBody& setThreatEvents(const vector<DescribeThreatEventResponseBody::ThreatEvents> & threatEvents) { DARABONBA_PTR_SET_VALUE(threatEvents_, threatEvents) };
    inline DescribeThreatEventResponseBody& setThreatEvents(vector<DescribeThreatEventResponseBody::ThreatEvents> && threatEvents) { DARABONBA_PTR_SET_RVALUE(threatEvents_, threatEvents) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeThreatEventResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeThreatEventResponseBody::ThreatEvents>> threatEvents_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
