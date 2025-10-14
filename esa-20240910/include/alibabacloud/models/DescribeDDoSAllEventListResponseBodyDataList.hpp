// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSAllEventListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSAllEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventResult, eventResult_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSAllEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventResult, eventResult_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    DescribeDDoSAllEventListResponseBodyDataList() = default ;
    DescribeDDoSAllEventListResponseBodyDataList(const DescribeDDoSAllEventListResponseBodyDataList &) = default ;
    DescribeDDoSAllEventListResponseBodyDataList(DescribeDDoSAllEventListResponseBodyDataList &&) = default ;
    DescribeDDoSAllEventListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSAllEventListResponseBodyDataList() = default ;
    DescribeDDoSAllEventListResponseBodyDataList& operator=(const DescribeDDoSAllEventListResponseBodyDataList &) = default ;
    DescribeDDoSAllEventListResponseBodyDataList& operator=(DescribeDDoSAllEventListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bps_ == nullptr
        && return this->coverage_ == nullptr && return this->cps_ == nullptr && return this->endTime_ == nullptr && return this->eventId_ == nullptr && return this->eventResult_ == nullptr
        && return this->eventType_ == nullptr && return this->pps_ == nullptr && return this->qps_ == nullptr && return this->startTime_ == nullptr && return this->target_ == nullptr
        && return this->targetId_ == nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeDDoSAllEventListResponseBodyDataList& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribeDDoSAllEventListResponseBodyDataList& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventResult Field Functions 
    bool hasEventResult() const { return this->eventResult_ != nullptr;};
    void deleteEventResult() { this->eventResult_ = nullptr;};
    inline string eventResult() const { DARABONBA_PTR_GET_DEFAULT(eventResult_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setEventResult(string eventResult) { DARABONBA_PTR_SET_VALUE(eventResult_, eventResult) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeDDoSAllEventListResponseBodyDataList& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeDDoSAllEventListResponseBodyDataList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeDDoSAllEventListResponseBodyDataList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The peak of volumetric attacks. Unit: bit/s.
    std::shared_ptr<int64_t> bps_ = nullptr;
    std::shared_ptr<string> coverage_ = nullptr;
    // The peak of connection flood attacks. Unit: connections per seconds (CPS).
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The time when the DDoS attack ends.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The attack event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> eventResult_ = nullptr;
    // The type of DDoS attacks that was queried. Valid values:
    // 
    // *   **web-cc**: web resource exhaustion attacks.
    // *   **cc**: connection flood attacks.
    // *   **traffic**: volumetric attacks.
    std::shared_ptr<string> eventType_ = nullptr;
    // The peak of volumetric attacks. Unit: packets per second (PPS).
    std::shared_ptr<int64_t> pps_ = nullptr;
    // The peak QPS of web resource exhaustion attacks.
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The time when the DDoS attack starts.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The attack target.
    std::shared_ptr<string> target_ = nullptr;
    // The ID of the web resource exhaustion attack target.
    std::shared_ptr<string> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
