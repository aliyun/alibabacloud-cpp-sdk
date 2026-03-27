// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiagnoseReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiagnoseReportResponseBody() = default ;
    DescribeDiagnoseReportResponseBody(const DescribeDiagnoseReportResponseBody &) = default ;
    DescribeDiagnoseReportResponseBody(DescribeDiagnoseReportResponseBody &&) = default ;
    DescribeDiagnoseReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportResponseBody() = default ;
    DescribeDiagnoseReportResponseBody& operator=(const DescribeDiagnoseReportResponseBody &) = default ;
    DescribeDiagnoseReportResponseBody& operator=(DescribeDiagnoseReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DiagnoseEndTime, diagnoseEndTime_);
        DARABONBA_PTR_TO_JSON(DiagnoseStartTime, diagnoseStartTime_);
        DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_TO_JSON(Events, events_);
        DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DiagnoseEndTime, diagnoseEndTime_);
        DARABONBA_PTR_FROM_JSON(DiagnoseStartTime, diagnoseStartTime_);
        DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
        DARABONBA_PTR_FROM_JSON(Events, events_);
        DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Reports() = default ;
      Reports(const Reports &) = default ;
      Reports(Reports &&) = default ;
      Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reports() = default ;
      Reports& operator=(const Reports &) = default ;
      Reports& operator=(Reports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Events : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Events& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(RecommendAction, recommendAction_);
          DARABONBA_PTR_TO_JSON(RecommendParams, recommendParams_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Events& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(RecommendAction, recommendAction_);
          DARABONBA_PTR_FROM_JSON(RecommendParams, recommendParams_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        Events() = default ;
        Events(const Events &) = default ;
        Events(Events &&) = default ;
        Events(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Events() = default ;
        Events& operator=(const Events &) = default ;
        Events& operator=(Events &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->eventName_ == nullptr && this->recommendAction_ == nullptr && this->recommendParams_ == nullptr && this->severity_ == nullptr && this->startTime_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Events& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline Events& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // recommendAction Field Functions 
        bool hasRecommendAction() const { return this->recommendAction_ != nullptr;};
        void deleteRecommendAction() { this->recommendAction_ = nullptr;};
        inline string getRecommendAction() const { DARABONBA_PTR_GET_DEFAULT(recommendAction_, "") };
        inline Events& setRecommendAction(string recommendAction) { DARABONBA_PTR_SET_VALUE(recommendAction_, recommendAction) };


        // recommendParams Field Functions 
        bool hasRecommendParams() const { return this->recommendParams_ != nullptr;};
        void deleteRecommendParams() { this->recommendParams_ = nullptr;};
        inline string getRecommendParams() const { DARABONBA_PTR_GET_DEFAULT(recommendParams_, "") };
        inline Events& setRecommendParams(string recommendParams) { DARABONBA_PTR_SET_VALUE(recommendParams_, recommendParams) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline Events& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Events& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> eventName_ {};
        shared_ptr<string> recommendAction_ {};
        shared_ptr<string> recommendParams_ {};
        shared_ptr<string> severity_ {};
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->creationTime_ == nullptr && this->diagnoseEndTime_ == nullptr && this->diagnoseStartTime_ == nullptr && this->diagnoseType_ == nullptr && this->events_ == nullptr
        && this->finishedTime_ == nullptr && this->regionId_ == nullptr && this->reportId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->severity_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Reports& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Reports& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // diagnoseEndTime Field Functions 
      bool hasDiagnoseEndTime() const { return this->diagnoseEndTime_ != nullptr;};
      void deleteDiagnoseEndTime() { this->diagnoseEndTime_ = nullptr;};
      inline int64_t getDiagnoseEndTime() const { DARABONBA_PTR_GET_DEFAULT(diagnoseEndTime_, 0L) };
      inline Reports& setDiagnoseEndTime(int64_t diagnoseEndTime) { DARABONBA_PTR_SET_VALUE(diagnoseEndTime_, diagnoseEndTime) };


      // diagnoseStartTime Field Functions 
      bool hasDiagnoseStartTime() const { return this->diagnoseStartTime_ != nullptr;};
      void deleteDiagnoseStartTime() { this->diagnoseStartTime_ = nullptr;};
      inline int64_t getDiagnoseStartTime() const { DARABONBA_PTR_GET_DEFAULT(diagnoseStartTime_, 0L) };
      inline Reports& setDiagnoseStartTime(int64_t diagnoseStartTime) { DARABONBA_PTR_SET_VALUE(diagnoseStartTime_, diagnoseStartTime) };


      // diagnoseType Field Functions 
      bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
      void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
      inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
      inline Reports& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<Reports::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Reports::Events>) };
      inline vector<Reports::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Reports::Events>) };
      inline Reports& setEvents(const vector<Reports::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline Reports& setEvents(vector<Reports::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
      inline Reports& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Reports& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Reports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Reports& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Reports& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Reports& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Reports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<int64_t> creationTime_ {};
      shared_ptr<int64_t> diagnoseEndTime_ {};
      shared_ptr<int64_t> diagnoseStartTime_ {};
      shared_ptr<string> diagnoseType_ {};
      shared_ptr<vector<Reports::Events>> events_ {};
      shared_ptr<int64_t> finishedTime_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> reportId_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> severity_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->reports_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnoseReportResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<DescribeDiagnoseReportResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<DescribeDiagnoseReportResponseBody::Reports>) };
    inline vector<DescribeDiagnoseReportResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<DescribeDiagnoseReportResponseBody::Reports>) };
    inline DescribeDiagnoseReportResponseBody& setReports(const vector<DescribeDiagnoseReportResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeDiagnoseReportResponseBody& setReports(vector<DescribeDiagnoseReportResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnoseReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiagnoseReportResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<DescribeDiagnoseReportResponseBody::Reports>> reports_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
