// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ThreatEventDetail, threatEventDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ThreatEventDetail, threatEventDetail_);
    };
    DescribeThreatEventDetailResponseBody() = default ;
    DescribeThreatEventDetailResponseBody(const DescribeThreatEventDetailResponseBody &) = default ;
    DescribeThreatEventDetailResponseBody(DescribeThreatEventDetailResponseBody &&) = default ;
    DescribeThreatEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventDetailResponseBody() = default ;
    DescribeThreatEventDetailResponseBody& operator=(const DescribeThreatEventDetailResponseBody &) = default ;
    DescribeThreatEventDetailResponseBody& operator=(DescribeThreatEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ThreatEventDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ThreatEventDetail& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventBlock, eventBlock_);
        DARABONBA_PTR_TO_JSON(EventCnt, eventCnt_);
        DARABONBA_PTR_TO_JSON(EventCondition, eventCondition_);
        DARABONBA_PTR_TO_JSON(EventIntelligence, eventIntelligence_);
        DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_TO_JSON(EventSrc, eventSrc_);
        DARABONBA_PTR_TO_JSON(EventSrcCountry, eventSrcCountry_);
        DARABONBA_PTR_TO_JSON(EventSrcRegion, eventSrcRegion_);
        DARABONBA_PTR_TO_JSON(EventSuggest, eventSuggest_);
        DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
        DARABONBA_PTR_TO_JSON(IsPersistent, isPersistent_);
      };
      friend void from_json(const Darabonba::Json& j, ThreatEventDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventBlock, eventBlock_);
        DARABONBA_PTR_FROM_JSON(EventCnt, eventCnt_);
        DARABONBA_PTR_FROM_JSON(EventCondition, eventCondition_);
        DARABONBA_PTR_FROM_JSON(EventIntelligence, eventIntelligence_);
        DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_FROM_JSON(EventSrc, eventSrc_);
        DARABONBA_PTR_FROM_JSON(EventSrcCountry, eventSrcCountry_);
        DARABONBA_PTR_FROM_JSON(EventSrcRegion, eventSrcRegion_);
        DARABONBA_PTR_FROM_JSON(EventSuggest, eventSuggest_);
        DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
        DARABONBA_PTR_FROM_JSON(IsPersistent, isPersistent_);
      };
      ThreatEventDetail() = default ;
      ThreatEventDetail(const ThreatEventDetail &) = default ;
      ThreatEventDetail(ThreatEventDetail &&) = default ;
      ThreatEventDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ThreatEventDetail() = default ;
      ThreatEventDetail& operator=(const ThreatEventDetail &) = default ;
      ThreatEventDetail& operator=(ThreatEventDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventBlock_ == nullptr && this->eventCnt_ == nullptr && this->eventCondition_ == nullptr && this->eventIntelligence_ == nullptr && this->eventLevel_ == nullptr
        && this->eventSrc_ == nullptr && this->eventSrcCountry_ == nullptr && this->eventSrcRegion_ == nullptr && this->eventSuggest_ == nullptr && this->eventTag_ == nullptr
        && this->isPersistent_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ThreatEventDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventBlock Field Functions 
      bool hasEventBlock() const { return this->eventBlock_ != nullptr;};
      void deleteEventBlock() { this->eventBlock_ = nullptr;};
      inline string getEventBlock() const { DARABONBA_PTR_GET_DEFAULT(eventBlock_, "") };
      inline ThreatEventDetail& setEventBlock(string eventBlock) { DARABONBA_PTR_SET_VALUE(eventBlock_, eventBlock) };


      // eventCnt Field Functions 
      bool hasEventCnt() const { return this->eventCnt_ != nullptr;};
      void deleteEventCnt() { this->eventCnt_ = nullptr;};
      inline string getEventCnt() const { DARABONBA_PTR_GET_DEFAULT(eventCnt_, "") };
      inline ThreatEventDetail& setEventCnt(string eventCnt) { DARABONBA_PTR_SET_VALUE(eventCnt_, eventCnt) };


      // eventCondition Field Functions 
      bool hasEventCondition() const { return this->eventCondition_ != nullptr;};
      void deleteEventCondition() { this->eventCondition_ = nullptr;};
      inline string getEventCondition() const { DARABONBA_PTR_GET_DEFAULT(eventCondition_, "") };
      inline ThreatEventDetail& setEventCondition(string eventCondition) { DARABONBA_PTR_SET_VALUE(eventCondition_, eventCondition) };


      // eventIntelligence Field Functions 
      bool hasEventIntelligence() const { return this->eventIntelligence_ != nullptr;};
      void deleteEventIntelligence() { this->eventIntelligence_ = nullptr;};
      inline string getEventIntelligence() const { DARABONBA_PTR_GET_DEFAULT(eventIntelligence_, "") };
      inline ThreatEventDetail& setEventIntelligence(string eventIntelligence) { DARABONBA_PTR_SET_VALUE(eventIntelligence_, eventIntelligence) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline ThreatEventDetail& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventSrc Field Functions 
      bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
      void deleteEventSrc() { this->eventSrc_ = nullptr;};
      inline string getEventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
      inline ThreatEventDetail& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


      // eventSrcCountry Field Functions 
      bool hasEventSrcCountry() const { return this->eventSrcCountry_ != nullptr;};
      void deleteEventSrcCountry() { this->eventSrcCountry_ = nullptr;};
      inline string getEventSrcCountry() const { DARABONBA_PTR_GET_DEFAULT(eventSrcCountry_, "") };
      inline ThreatEventDetail& setEventSrcCountry(string eventSrcCountry) { DARABONBA_PTR_SET_VALUE(eventSrcCountry_, eventSrcCountry) };


      // eventSrcRegion Field Functions 
      bool hasEventSrcRegion() const { return this->eventSrcRegion_ != nullptr;};
      void deleteEventSrcRegion() { this->eventSrcRegion_ = nullptr;};
      inline string getEventSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(eventSrcRegion_, "") };
      inline ThreatEventDetail& setEventSrcRegion(string eventSrcRegion) { DARABONBA_PTR_SET_VALUE(eventSrcRegion_, eventSrcRegion) };


      // eventSuggest Field Functions 
      bool hasEventSuggest() const { return this->eventSuggest_ != nullptr;};
      void deleteEventSuggest() { this->eventSuggest_ = nullptr;};
      inline string getEventSuggest() const { DARABONBA_PTR_GET_DEFAULT(eventSuggest_, "") };
      inline ThreatEventDetail& setEventSuggest(string eventSuggest) { DARABONBA_PTR_SET_VALUE(eventSuggest_, eventSuggest) };


      // eventTag Field Functions 
      bool hasEventTag() const { return this->eventTag_ != nullptr;};
      void deleteEventTag() { this->eventTag_ = nullptr;};
      inline string getEventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
      inline ThreatEventDetail& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


      // isPersistent Field Functions 
      bool hasIsPersistent() const { return this->isPersistent_ != nullptr;};
      void deleteIsPersistent() { this->isPersistent_ = nullptr;};
      inline int64_t getIsPersistent() const { DARABONBA_PTR_GET_DEFAULT(isPersistent_, 0L) };
      inline ThreatEventDetail& setIsPersistent(int64_t isPersistent) { DARABONBA_PTR_SET_VALUE(isPersistent_, isPersistent) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> eventBlock_ {};
      shared_ptr<string> eventCnt_ {};
      shared_ptr<string> eventCondition_ {};
      shared_ptr<string> eventIntelligence_ {};
      shared_ptr<string> eventLevel_ {};
      shared_ptr<string> eventSrc_ {};
      shared_ptr<string> eventSrcCountry_ {};
      shared_ptr<string> eventSrcRegion_ {};
      shared_ptr<string> eventSuggest_ {};
      shared_ptr<string> eventTag_ {};
      shared_ptr<int64_t> isPersistent_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->threatEventDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threatEventDetail Field Functions 
    bool hasThreatEventDetail() const { return this->threatEventDetail_ != nullptr;};
    void deleteThreatEventDetail() { this->threatEventDetail_ = nullptr;};
    inline const DescribeThreatEventDetailResponseBody::ThreatEventDetail & getThreatEventDetail() const { DARABONBA_PTR_GET_CONST(threatEventDetail_, DescribeThreatEventDetailResponseBody::ThreatEventDetail) };
    inline DescribeThreatEventDetailResponseBody::ThreatEventDetail getThreatEventDetail() { DARABONBA_PTR_GET(threatEventDetail_, DescribeThreatEventDetailResponseBody::ThreatEventDetail) };
    inline DescribeThreatEventDetailResponseBody& setThreatEventDetail(const DescribeThreatEventDetailResponseBody::ThreatEventDetail & threatEventDetail) { DARABONBA_PTR_SET_VALUE(threatEventDetail_, threatEventDetail) };
    inline DescribeThreatEventDetailResponseBody& setThreatEventDetail(DescribeThreatEventDetailResponseBody::ThreatEventDetail && threatEventDetail) { DARABONBA_PTR_SET_RVALUE(threatEventDetail_, threatEventDetail) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeThreatEventDetailResponseBody::ThreatEventDetail> threatEventDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
