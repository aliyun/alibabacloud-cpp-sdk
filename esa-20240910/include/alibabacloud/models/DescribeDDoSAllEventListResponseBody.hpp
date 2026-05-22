// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSALLEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSAllEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSAllEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSAllEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDDoSAllEventListResponseBody() = default ;
    DescribeDDoSAllEventListResponseBody(const DescribeDDoSAllEventListResponseBody &) = default ;
    DescribeDDoSAllEventListResponseBody(DescribeDDoSAllEventListResponseBody &&) = default ;
    DescribeDDoSAllEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSAllEventListResponseBody() = default ;
    DescribeDDoSAllEventListResponseBody& operator=(const DescribeDDoSAllEventListResponseBody &) = default ;
    DescribeDDoSAllEventListResponseBody& operator=(DescribeDDoSAllEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
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
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bps_ == nullptr
        && this->coverage_ == nullptr && this->cps_ == nullptr && this->endTime_ == nullptr && this->eventId_ == nullptr && this->eventResult_ == nullptr
        && this->eventType_ == nullptr && this->pps_ == nullptr && this->qps_ == nullptr && this->startTime_ == nullptr && this->target_ == nullptr
        && this->targetId_ == nullptr; };
      // bps Field Functions 
      bool hasBps() const { return this->bps_ != nullptr;};
      void deleteBps() { this->bps_ = nullptr;};
      inline int64_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
      inline DataList& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


      // coverage Field Functions 
      bool hasCoverage() const { return this->coverage_ != nullptr;};
      void deleteCoverage() { this->coverage_ = nullptr;};
      inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
      inline DataList& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int64_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
      inline DataList& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline DataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline DataList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventResult Field Functions 
      bool hasEventResult() const { return this->eventResult_ != nullptr;};
      void deleteEventResult() { this->eventResult_ = nullptr;};
      inline string getEventResult() const { DARABONBA_PTR_GET_DEFAULT(eventResult_, "") };
      inline DataList& setEventResult(string eventResult) { DARABONBA_PTR_SET_VALUE(eventResult_, eventResult) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline DataList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int64_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
      inline DataList& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline DataList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline DataList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline DataList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    protected:
      // The peak of volumetric attacks. Unit: bit/s.
      shared_ptr<int64_t> bps_ {};
      shared_ptr<string> coverage_ {};
      // The peak of connection flood attacks. Unit: connections per seconds (CPS).
      shared_ptr<int64_t> cps_ {};
      // The time when the DDoS attack ends.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The attack event ID.
      shared_ptr<string> eventId_ {};
      shared_ptr<string> eventResult_ {};
      // The type of DDoS attacks that was queried. Valid values:
      // 
      // *   **web-cc**: web resource exhaustion attacks.
      // *   **cc**: connection flood attacks.
      // *   **traffic**: volumetric attacks.
      shared_ptr<string> eventType_ {};
      // The peak of volumetric attacks. Unit: packets per second (PPS).
      shared_ptr<int64_t> pps_ {};
      // The peak QPS of web resource exhaustion attacks.
      shared_ptr<int64_t> qps_ {};
      // The time when the DDoS attack starts.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The attack target.
      shared_ptr<string> target_ {};
      // The ID of the web resource exhaustion attack target.
      shared_ptr<string> targetId_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->siteId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeDDoSAllEventListResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeDDoSAllEventListResponseBody::DataList>) };
    inline vector<DescribeDDoSAllEventListResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeDDoSAllEventListResponseBody::DataList>) };
    inline DescribeDDoSAllEventListResponseBody& setDataList(const vector<DescribeDDoSAllEventListResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeDDoSAllEventListResponseBody& setDataList(vector<DescribeDDoSAllEventListResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDDoSAllEventListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDDoSAllEventListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSAllEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribeDDoSAllEventListResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDDoSAllEventListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The DDoS attack events.
    shared_ptr<vector<DescribeDDoSAllEventListResponseBody::DataList>> dataList_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
