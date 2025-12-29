// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterInspectReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInspectReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(reports, reports_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInspectReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(reports, reports_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListClusterInspectReportsResponseBody() = default ;
    ListClusterInspectReportsResponseBody(const ListClusterInspectReportsResponseBody &) = default ;
    ListClusterInspectReportsResponseBody(ListClusterInspectReportsResponseBody &&) = default ;
    ListClusterInspectReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInspectReportsResponseBody() = default ;
    ListClusterInspectReportsResponseBody& operator=(const ListClusterInspectReportsResponseBody &) = default ;
    ListClusterInspectReportsResponseBody& operator=(ListClusterInspectReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
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
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(adviceCount, adviceCount_);
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(errorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(normalCount, normalCount_);
          DARABONBA_PTR_TO_JSON(warnCount, warnCount_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(adviceCount, adviceCount_);
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(errorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(normalCount, normalCount_);
          DARABONBA_PTR_FROM_JSON(warnCount, warnCount_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adviceCount_ == nullptr
        && this->code_ == nullptr && this->errorCount_ == nullptr && this->normalCount_ == nullptr && this->warnCount_ == nullptr; };
        // adviceCount Field Functions 
        bool hasAdviceCount() const { return this->adviceCount_ != nullptr;};
        void deleteAdviceCount() { this->adviceCount_ = nullptr;};
        inline int32_t getAdviceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceCount_, 0) };
        inline Summary& setAdviceCount(int32_t adviceCount) { DARABONBA_PTR_SET_VALUE(adviceCount_, adviceCount) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Summary& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int32_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
        inline Summary& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // normalCount Field Functions 
        bool hasNormalCount() const { return this->normalCount_ != nullptr;};
        void deleteNormalCount() { this->normalCount_ = nullptr;};
        inline int32_t getNormalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0) };
        inline Summary& setNormalCount(int32_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


        // warnCount Field Functions 
        bool hasWarnCount() const { return this->warnCount_ != nullptr;};
        void deleteWarnCount() { this->warnCount_ = nullptr;};
        inline int32_t getWarnCount() const { DARABONBA_PTR_GET_DEFAULT(warnCount_, 0) };
        inline Summary& setWarnCount(int32_t warnCount) { DARABONBA_PTR_SET_VALUE(warnCount_, warnCount) };


      protected:
        // The number of items whose result is advice.
        shared_ptr<int32_t> adviceCount_ {};
        // Aggregated inspection task result code.
        shared_ptr<string> code_ {};
        // The number of items whose result is error.
        shared_ptr<int32_t> errorCount_ {};
        // The number of items whose result is normal.
        shared_ptr<int32_t> normalCount_ {};
        // The number of items whose result is warning.
        shared_ptr<int32_t> warnCount_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->reportId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Reports& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Reports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Reports& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Reports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Reports::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Reports::Summary) };
      inline Reports::Summary getSummary() { DARABONBA_PTR_GET(summary_, Reports::Summary) };
      inline Reports& setSummary(const Reports::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Reports& setSummary(Reports::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    protected:
      // The report completion time.
      shared_ptr<string> endTime_ {};
      // An inspection report ID.
      shared_ptr<string> reportId_ {};
      // The report start time.
      shared_ptr<string> startTime_ {};
      // The inspection report status.
      shared_ptr<string> status_ {};
      // The inspection summary.
      shared_ptr<Reports::Summary> summary_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->reports_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClusterInspectReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<ListClusterInspectReportsResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<ListClusterInspectReportsResponseBody::Reports>) };
    inline vector<ListClusterInspectReportsResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<ListClusterInspectReportsResponseBody::Reports>) };
    inline ListClusterInspectReportsResponseBody& setReports(const vector<ListClusterInspectReportsResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline ListClusterInspectReportsResponseBody& setReports(vector<ListClusterInspectReportsResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterInspectReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The list of inspection reports.
    shared_ptr<vector<ListClusterInspectReportsResponseBody::Reports>> reports_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
