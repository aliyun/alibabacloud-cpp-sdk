// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONREPORTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONREPORTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QuerySessionReportDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionReportDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportDataModel, reportDataModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionReportDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportDataModel, reportDataModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySessionReportDataResponseBody() = default ;
    QuerySessionReportDataResponseBody(const QuerySessionReportDataResponseBody &) = default ;
    QuerySessionReportDataResponseBody(QuerySessionReportDataResponseBody &&) = default ;
    QuerySessionReportDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionReportDataResponseBody() = default ;
    QuerySessionReportDataResponseBody& operator=(const QuerySessionReportDataResponseBody &) = default ;
    QuerySessionReportDataResponseBody& operator=(QuerySessionReportDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectSessionCount, connectSessionCount_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(StatDate, statDate_);
        DARABONBA_PTR_TO_JSON(StreamingSessionCount, streamingSessionCount_);
      };
      friend void from_json(const Darabonba::Json& j, ReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectSessionCount, connectSessionCount_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
        DARABONBA_PTR_FROM_JSON(StreamingSessionCount, streamingSessionCount_);
      };
      ReportDataModel() = default ;
      ReportDataModel(const ReportDataModel &) = default ;
      ReportDataModel(ReportDataModel &&) = default ;
      ReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportDataModel() = default ;
      ReportDataModel& operator=(const ReportDataModel &) = default ;
      ReportDataModel& operator=(ReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectSessionCount_ == nullptr
        && this->sessionCount_ == nullptr && this->statDate_ == nullptr && this->streamingSessionCount_ == nullptr; };
      // connectSessionCount Field Functions 
      bool hasConnectSessionCount() const { return this->connectSessionCount_ != nullptr;};
      void deleteConnectSessionCount() { this->connectSessionCount_ = nullptr;};
      inline int64_t getConnectSessionCount() const { DARABONBA_PTR_GET_DEFAULT(connectSessionCount_, 0L) };
      inline ReportDataModel& setConnectSessionCount(int64_t connectSessionCount) { DARABONBA_PTR_SET_VALUE(connectSessionCount_, connectSessionCount) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline ReportDataModel& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // statDate Field Functions 
      bool hasStatDate() const { return this->statDate_ != nullptr;};
      void deleteStatDate() { this->statDate_ = nullptr;};
      inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
      inline ReportDataModel& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


      // streamingSessionCount Field Functions 
      bool hasStreamingSessionCount() const { return this->streamingSessionCount_ != nullptr;};
      void deleteStreamingSessionCount() { this->streamingSessionCount_ = nullptr;};
      inline int64_t getStreamingSessionCount() const { DARABONBA_PTR_GET_DEFAULT(streamingSessionCount_, 0L) };
      inline ReportDataModel& setStreamingSessionCount(int64_t streamingSessionCount) { DARABONBA_PTR_SET_VALUE(streamingSessionCount_, streamingSessionCount) };


    protected:
      // The number of sessions in the connected state in this record.
      shared_ptr<int64_t> connectSessionCount_ {};
      // The total number of sessions corresponding to this record.
      shared_ptr<int64_t> sessionCount_ {};
      // The statistical time. The `1d` granularity returns `yyyy-MM-dd`. The `1m`, `30m`, and `6h` granularities return `yyyy-MM-dd HH:mm`. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statDate_ {};
      // The number of sessions established through streaming access in this record.
      shared_ptr<int64_t> streamingSessionCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->reportDataModel_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySessionReportDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QuerySessionReportDataResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySessionReportDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QuerySessionReportDataResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySessionReportDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportDataModel Field Functions 
    bool hasReportDataModel() const { return this->reportDataModel_ != nullptr;};
    void deleteReportDataModel() { this->reportDataModel_ = nullptr;};
    inline const vector<QuerySessionReportDataResponseBody::ReportDataModel> & getReportDataModel() const { DARABONBA_PTR_GET_CONST(reportDataModel_, vector<QuerySessionReportDataResponseBody::ReportDataModel>) };
    inline vector<QuerySessionReportDataResponseBody::ReportDataModel> getReportDataModel() { DARABONBA_PTR_GET(reportDataModel_, vector<QuerySessionReportDataResponseBody::ReportDataModel>) };
    inline QuerySessionReportDataResponseBody& setReportDataModel(const vector<QuerySessionReportDataResponseBody::ReportDataModel> & reportDataModel) { DARABONBA_PTR_SET_VALUE(reportDataModel_, reportDataModel) };
    inline QuerySessionReportDataResponseBody& setReportDataModel(vector<QuerySessionReportDataResponseBody::ReportDataModel> && reportDataModel) { DARABONBA_PTR_SET_RVALUE(reportDataModel_, reportDataModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySessionReportDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of `200` indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The description of the request processing result. If the request is successful, `success` is usually returned.
    shared_ptr<string> message_ {};
    // The page number of the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The list of session report data.
    shared_ptr<vector<QuerySessionReportDataResponseBody::ReportDataModel>> reportDataModel_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
