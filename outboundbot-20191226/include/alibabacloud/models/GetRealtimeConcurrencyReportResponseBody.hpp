// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetRealtimeConcurrencyReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeConcurrencyReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeConcurrencyReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRealtimeConcurrencyReportResponseBody() = default ;
    GetRealtimeConcurrencyReportResponseBody(const GetRealtimeConcurrencyReportResponseBody &) = default ;
    GetRealtimeConcurrencyReportResponseBody(GetRealtimeConcurrencyReportResponseBody &&) = default ;
    GetRealtimeConcurrencyReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeConcurrencyReportResponseBody() = default ;
    GetRealtimeConcurrencyReportResponseBody& operator=(const GetRealtimeConcurrencyReportResponseBody &) = default ;
    GetRealtimeConcurrencyReportResponseBody& operator=(GetRealtimeConcurrencyReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
          DARABONBA_PTR_TO_JSON(MaxConcurrencyLimit, maxConcurrencyLimit_);
          DARABONBA_PTR_TO_JSON(MinConcurrencyLimit, minConcurrencyLimit_);
          DARABONBA_PTR_TO_JSON(OccupiedConcurrencyCount, occupiedConcurrencyCount_);
          DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrencyLimit, maxConcurrencyLimit_);
          DARABONBA_PTR_FROM_JSON(MinConcurrencyLimit, minConcurrencyLimit_);
          DARABONBA_PTR_FROM_JSON(OccupiedConcurrencyCount, occupiedConcurrencyCount_);
          DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr && this->maxConcurrencyLimit_ == nullptr && this->minConcurrencyLimit_ == nullptr
        && this->occupiedConcurrencyCount_ == nullptr && this->reportDate_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // jobGroupId Field Functions 
        bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
        void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
        inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
        inline List& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


        // jobGroupName Field Functions 
        bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
        void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
        inline string getJobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
        inline List& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


        // maxConcurrencyLimit Field Functions 
        bool hasMaxConcurrencyLimit() const { return this->maxConcurrencyLimit_ != nullptr;};
        void deleteMaxConcurrencyLimit() { this->maxConcurrencyLimit_ = nullptr;};
        inline int64_t getMaxConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrencyLimit_, 0L) };
        inline List& setMaxConcurrencyLimit(int64_t maxConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(maxConcurrencyLimit_, maxConcurrencyLimit) };


        // minConcurrencyLimit Field Functions 
        bool hasMinConcurrencyLimit() const { return this->minConcurrencyLimit_ != nullptr;};
        void deleteMinConcurrencyLimit() { this->minConcurrencyLimit_ = nullptr;};
        inline int64_t getMinConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(minConcurrencyLimit_, 0L) };
        inline List& setMinConcurrencyLimit(int64_t minConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(minConcurrencyLimit_, minConcurrencyLimit) };


        // occupiedConcurrencyCount Field Functions 
        bool hasOccupiedConcurrencyCount() const { return this->occupiedConcurrencyCount_ != nullptr;};
        void deleteOccupiedConcurrencyCount() { this->occupiedConcurrencyCount_ = nullptr;};
        inline int64_t getOccupiedConcurrencyCount() const { DARABONBA_PTR_GET_DEFAULT(occupiedConcurrencyCount_, 0L) };
        inline List& setOccupiedConcurrencyCount(int64_t occupiedConcurrencyCount) { DARABONBA_PTR_SET_VALUE(occupiedConcurrencyCount_, occupiedConcurrencyCount) };


        // reportDate Field Functions 
        bool hasReportDate() const { return this->reportDate_ != nullptr;};
        void deleteReportDate() { this->reportDate_ = nullptr;};
        inline int64_t getReportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, 0L) };
        inline List& setReportDate(int64_t reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> jobGroupId_ {};
        shared_ptr<string> jobGroupName_ {};
        shared_ptr<int64_t> maxConcurrencyLimit_ {};
        shared_ptr<int64_t> minConcurrencyLimit_ {};
        shared_ptr<int64_t> occupiedConcurrencyCount_ {};
        shared_ptr<int64_t> reportDate_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Reports::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Reports::List>) };
      inline vector<Reports::List> getList() { DARABONBA_PTR_GET(list_, vector<Reports::List>) };
      inline Reports& setList(const vector<Reports::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Reports& setList(vector<Reports::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Reports& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Reports& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Reports& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Reports::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->reportDate_ == nullptr && this->reports_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRealtimeConcurrencyReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reportDate Field Functions 
    bool hasReportDate() const { return this->reportDate_ != nullptr;};
    void deleteReportDate() { this->reportDate_ = nullptr;};
    inline int64_t getReportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBody& setReportDate(int64_t reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const GetRealtimeConcurrencyReportResponseBody::Reports & getReports() const { DARABONBA_PTR_GET_CONST(reports_, GetRealtimeConcurrencyReportResponseBody::Reports) };
    inline GetRealtimeConcurrencyReportResponseBody::Reports getReports() { DARABONBA_PTR_GET(reports_, GetRealtimeConcurrencyReportResponseBody::Reports) };
    inline GetRealtimeConcurrencyReportResponseBody& setReports(const GetRealtimeConcurrencyReportResponseBody::Reports & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline GetRealtimeConcurrencyReportResponseBody& setReports(GetRealtimeConcurrencyReportResponseBody::Reports && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeConcurrencyReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRealtimeConcurrencyReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> reportDate_ {};
    shared_ptr<GetRealtimeConcurrencyReportResponseBody::Reports> reports_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
