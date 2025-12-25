// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODYTHREATEVENTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTDETAILRESPONSEBODYTHREATEVENTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventDetailResponseBodyThreatEventDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventDetailResponseBodyThreatEventDetail& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventDetailResponseBodyThreatEventDetail& obj) { 
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
    DescribeThreatEventDetailResponseBodyThreatEventDetail() = default ;
    DescribeThreatEventDetailResponseBodyThreatEventDetail(const DescribeThreatEventDetailResponseBodyThreatEventDetail &) = default ;
    DescribeThreatEventDetailResponseBodyThreatEventDetail(DescribeThreatEventDetailResponseBodyThreatEventDetail &&) = default ;
    DescribeThreatEventDetailResponseBodyThreatEventDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventDetailResponseBodyThreatEventDetail() = default ;
    DescribeThreatEventDetailResponseBodyThreatEventDetail& operator=(const DescribeThreatEventDetailResponseBodyThreatEventDetail &) = default ;
    DescribeThreatEventDetailResponseBodyThreatEventDetail& operator=(DescribeThreatEventDetailResponseBodyThreatEventDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->eventBlock_ == nullptr && return this->eventCnt_ == nullptr && return this->eventCondition_ == nullptr && return this->eventIntelligence_ == nullptr && return this->eventLevel_ == nullptr
        && return this->eventSrc_ == nullptr && return this->eventSrcCountry_ == nullptr && return this->eventSrcRegion_ == nullptr && return this->eventSuggest_ == nullptr && return this->eventTag_ == nullptr
        && return this->isPersistent_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventBlock Field Functions 
    bool hasEventBlock() const { return this->eventBlock_ != nullptr;};
    void deleteEventBlock() { this->eventBlock_ = nullptr;};
    inline string eventBlock() const { DARABONBA_PTR_GET_DEFAULT(eventBlock_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventBlock(string eventBlock) { DARABONBA_PTR_SET_VALUE(eventBlock_, eventBlock) };


    // eventCnt Field Functions 
    bool hasEventCnt() const { return this->eventCnt_ != nullptr;};
    void deleteEventCnt() { this->eventCnt_ = nullptr;};
    inline string eventCnt() const { DARABONBA_PTR_GET_DEFAULT(eventCnt_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventCnt(string eventCnt) { DARABONBA_PTR_SET_VALUE(eventCnt_, eventCnt) };


    // eventCondition Field Functions 
    bool hasEventCondition() const { return this->eventCondition_ != nullptr;};
    void deleteEventCondition() { this->eventCondition_ = nullptr;};
    inline string eventCondition() const { DARABONBA_PTR_GET_DEFAULT(eventCondition_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventCondition(string eventCondition) { DARABONBA_PTR_SET_VALUE(eventCondition_, eventCondition) };


    // eventIntelligence Field Functions 
    bool hasEventIntelligence() const { return this->eventIntelligence_ != nullptr;};
    void deleteEventIntelligence() { this->eventIntelligence_ = nullptr;};
    inline string eventIntelligence() const { DARABONBA_PTR_GET_DEFAULT(eventIntelligence_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventIntelligence(string eventIntelligence) { DARABONBA_PTR_SET_VALUE(eventIntelligence_, eventIntelligence) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventSrc Field Functions 
    bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
    void deleteEventSrc() { this->eventSrc_ = nullptr;};
    inline string eventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


    // eventSrcCountry Field Functions 
    bool hasEventSrcCountry() const { return this->eventSrcCountry_ != nullptr;};
    void deleteEventSrcCountry() { this->eventSrcCountry_ = nullptr;};
    inline string eventSrcCountry() const { DARABONBA_PTR_GET_DEFAULT(eventSrcCountry_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventSrcCountry(string eventSrcCountry) { DARABONBA_PTR_SET_VALUE(eventSrcCountry_, eventSrcCountry) };


    // eventSrcRegion Field Functions 
    bool hasEventSrcRegion() const { return this->eventSrcRegion_ != nullptr;};
    void deleteEventSrcRegion() { this->eventSrcRegion_ = nullptr;};
    inline string eventSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(eventSrcRegion_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventSrcRegion(string eventSrcRegion) { DARABONBA_PTR_SET_VALUE(eventSrcRegion_, eventSrcRegion) };


    // eventSuggest Field Functions 
    bool hasEventSuggest() const { return this->eventSuggest_ != nullptr;};
    void deleteEventSuggest() { this->eventSuggest_ = nullptr;};
    inline string eventSuggest() const { DARABONBA_PTR_GET_DEFAULT(eventSuggest_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventSuggest(string eventSuggest) { DARABONBA_PTR_SET_VALUE(eventSuggest_, eventSuggest) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    // isPersistent Field Functions 
    bool hasIsPersistent() const { return this->isPersistent_ != nullptr;};
    void deleteIsPersistent() { this->isPersistent_ = nullptr;};
    inline int64_t isPersistent() const { DARABONBA_PTR_GET_DEFAULT(isPersistent_, 0L) };
    inline DescribeThreatEventDetailResponseBodyThreatEventDetail& setIsPersistent(int64_t isPersistent) { DARABONBA_PTR_SET_VALUE(isPersistent_, isPersistent) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> eventBlock_ = nullptr;
    std::shared_ptr<string> eventCnt_ = nullptr;
    std::shared_ptr<string> eventCondition_ = nullptr;
    std::shared_ptr<string> eventIntelligence_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventSrc_ = nullptr;
    std::shared_ptr<string> eventSrcCountry_ = nullptr;
    std::shared_ptr<string> eventSrcRegion_ = nullptr;
    std::shared_ptr<string> eventSuggest_ = nullptr;
    std::shared_ptr<string> eventTag_ = nullptr;
    std::shared_ptr<int64_t> isPersistent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
