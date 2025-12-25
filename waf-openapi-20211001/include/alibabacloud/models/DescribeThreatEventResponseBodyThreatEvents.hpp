// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODYTHREATEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATEVENTRESPONSEBODYTHREATEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeThreatEventResponseBodyThreatEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatEventResponseBodyThreatEvents& obj) { 
      DARABONBA_PTR_TO_JSON(BlockRate, blockRate_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventSrc, eventSrc_);
      DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
      DARABONBA_PTR_TO_JSON(EventTarget, eventTarget_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatEventResponseBodyThreatEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockRate, blockRate_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventSrc, eventSrc_);
      DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
      DARABONBA_PTR_FROM_JSON(EventTarget, eventTarget_);
    };
    DescribeThreatEventResponseBodyThreatEvents() = default ;
    DescribeThreatEventResponseBodyThreatEvents(const DescribeThreatEventResponseBodyThreatEvents &) = default ;
    DescribeThreatEventResponseBodyThreatEvents(DescribeThreatEventResponseBodyThreatEvents &&) = default ;
    DescribeThreatEventResponseBodyThreatEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatEventResponseBodyThreatEvents() = default ;
    DescribeThreatEventResponseBodyThreatEvents& operator=(const DescribeThreatEventResponseBodyThreatEvents &) = default ;
    DescribeThreatEventResponseBodyThreatEvents& operator=(DescribeThreatEventResponseBodyThreatEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockRate_ == nullptr
        && return this->endTime_ == nullptr && return this->eventId_ == nullptr && return this->eventLevel_ == nullptr && return this->eventSrc_ == nullptr && return this->eventTag_ == nullptr
        && return this->eventTarget_ == nullptr; };
    // blockRate Field Functions 
    bool hasBlockRate() const { return this->blockRate_ != nullptr;};
    void deleteBlockRate() { this->blockRate_ = nullptr;};
    inline string blockRate() const { DARABONBA_PTR_GET_DEFAULT(blockRate_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setBlockRate(string blockRate) { DARABONBA_PTR_SET_VALUE(blockRate_, blockRate) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeThreatEventResponseBodyThreatEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventSrc Field Functions 
    bool hasEventSrc() const { return this->eventSrc_ != nullptr;};
    void deleteEventSrc() { this->eventSrc_ = nullptr;};
    inline string eventSrc() const { DARABONBA_PTR_GET_DEFAULT(eventSrc_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setEventSrc(string eventSrc) { DARABONBA_PTR_SET_VALUE(eventSrc_, eventSrc) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    // eventTarget Field Functions 
    bool hasEventTarget() const { return this->eventTarget_ != nullptr;};
    void deleteEventTarget() { this->eventTarget_ = nullptr;};
    inline string eventTarget() const { DARABONBA_PTR_GET_DEFAULT(eventTarget_, "") };
    inline DescribeThreatEventResponseBodyThreatEvents& setEventTarget(string eventTarget) { DARABONBA_PTR_SET_VALUE(eventTarget_, eventTarget) };


  protected:
    std::shared_ptr<string> blockRate_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventSrc_ = nullptr;
    std::shared_ptr<string> eventTag_ = nullptr;
    std::shared_ptr<string> eventTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
