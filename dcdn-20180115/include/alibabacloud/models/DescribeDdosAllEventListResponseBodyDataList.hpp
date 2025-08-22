// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDdosAllEventListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosAllEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosAllEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DescribeDdosAllEventListResponseBodyDataList() = default ;
    DescribeDdosAllEventListResponseBodyDataList(const DescribeDdosAllEventListResponseBodyDataList &) = default ;
    DescribeDdosAllEventListResponseBodyDataList(DescribeDdosAllEventListResponseBodyDataList &&) = default ;
    DescribeDdosAllEventListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosAllEventListResponseBodyDataList() = default ;
    DescribeDdosAllEventListResponseBodyDataList& operator=(const DescribeDdosAllEventListResponseBodyDataList &) = default ;
    DescribeDdosAllEventListResponseBodyDataList& operator=(DescribeDdosAllEventListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->cps_ != nullptr && this->endTime_ != nullptr && this->eventId_ != nullptr && this->eventType_ != nullptr && this->pps_ != nullptr
        && this->qps_ != nullptr && this->startTime_ != nullptr && this->target_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int64_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
    inline DescribeDdosAllEventListResponseBodyDataList& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribeDdosAllEventListResponseBodyDataList& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDdosAllEventListResponseBodyDataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeDdosAllEventListResponseBodyDataList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeDdosAllEventListResponseBodyDataList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int64_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
    inline DescribeDdosAllEventListResponseBodyDataList& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeDdosAllEventListResponseBodyDataList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDdosAllEventListResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeDdosAllEventListResponseBodyDataList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The peak attack traffic of volumetric attacks. Unit: bit/s.
    std::shared_ptr<int64_t> bps_ = nullptr;
    // The peak of connection flood attacks. Unit: connections per seconds (CPS).
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The type of the DDoS attack event that was queried. Valid values:
    // 
    // *   **web-cc**: web resource exhaustion attacks
    // *   **cc**: connection flood attacks
    // *   **traffic**: volumetric attacks
    // *   If you do not configure this parameter, DDoS attack events of all types are queried.
    std::shared_ptr<string> eventType_ = nullptr;
    // The peak attack traffic of volumetric attacks. Unit: packets per second (PPS).
    std::shared_ptr<int64_t> pps_ = nullptr;
    // The peak of web resource exhaustion attacks. Unit: queries per second (QPS).
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The attack target.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
