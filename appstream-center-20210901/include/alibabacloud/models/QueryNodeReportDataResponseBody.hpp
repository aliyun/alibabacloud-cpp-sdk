// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNODEREPORTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNODEREPORTDATARESPONSEBODY_HPP_
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
  class QueryNodeReportDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNodeReportDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportDataModel, reportDataModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNodeReportDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportDataModel, reportDataModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryNodeReportDataResponseBody() = default ;
    QueryNodeReportDataResponseBody(const QueryNodeReportDataResponseBody &) = default ;
    QueryNodeReportDataResponseBody(QueryNodeReportDataResponseBody &&) = default ;
    QueryNodeReportDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNodeReportDataResponseBody() = default ;
    QueryNodeReportDataResponseBody& operator=(const QueryNodeReportDataResponseBody &) = default ;
    QueryNodeReportDataResponseBody& operator=(QueryNodeReportDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(PostpaidNodeCount, postpaidNodeCount_);
        DARABONBA_PTR_TO_JSON(PrepaidNodeCount, prepaidNodeCount_);
        DARABONBA_PTR_TO_JSON(StatDate, statDate_);
      };
      friend void from_json(const Darabonba::Json& j, ReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(PostpaidNodeCount, postpaidNodeCount_);
        DARABONBA_PTR_FROM_JSON(PrepaidNodeCount, prepaidNodeCount_);
        DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
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
      virtual bool empty() const override { return this->nodeCount_ == nullptr
        && this->postpaidNodeCount_ == nullptr && this->prepaidNodeCount_ == nullptr && this->statDate_ == nullptr; };
      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
      inline ReportDataModel& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // postpaidNodeCount Field Functions 
      bool hasPostpaidNodeCount() const { return this->postpaidNodeCount_ != nullptr;};
      void deletePostpaidNodeCount() { this->postpaidNodeCount_ = nullptr;};
      inline int64_t getPostpaidNodeCount() const { DARABONBA_PTR_GET_DEFAULT(postpaidNodeCount_, 0L) };
      inline ReportDataModel& setPostpaidNodeCount(int64_t postpaidNodeCount) { DARABONBA_PTR_SET_VALUE(postpaidNodeCount_, postpaidNodeCount) };


      // prepaidNodeCount Field Functions 
      bool hasPrepaidNodeCount() const { return this->prepaidNodeCount_ != nullptr;};
      void deletePrepaidNodeCount() { this->prepaidNodeCount_ = nullptr;};
      inline int64_t getPrepaidNodeCount() const { DARABONBA_PTR_GET_DEFAULT(prepaidNodeCount_, 0L) };
      inline ReportDataModel& setPrepaidNodeCount(int64_t prepaidNodeCount) { DARABONBA_PTR_SET_VALUE(prepaidNodeCount_, prepaidNodeCount) };


      // statDate Field Functions 
      bool hasStatDate() const { return this->statDate_ != nullptr;};
      void deleteStatDate() { this->statDate_ = nullptr;};
      inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
      inline ReportDataModel& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


    protected:
      // The total number of nodes for the record.
      shared_ptr<int64_t> nodeCount_ {};
      // The number of pay-as-you-go nodes in the record.
      shared_ptr<int64_t> postpaidNodeCount_ {};
      // The number of subscription nodes in the record.
      shared_ptr<int64_t> prepaidNodeCount_ {};
      // The statistical time. The 1d granularity returns the time in the yyyy-MM-dd format. The 1m, 30m, and 6h granularities return the time in the yyyy-MM-dd HH:mm format. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->reportDataModel_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryNodeReportDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryNodeReportDataResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryNodeReportDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryNodeReportDataResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryNodeReportDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportDataModel Field Functions 
    bool hasReportDataModel() const { return this->reportDataModel_ != nullptr;};
    void deleteReportDataModel() { this->reportDataModel_ = nullptr;};
    inline const vector<QueryNodeReportDataResponseBody::ReportDataModel> & getReportDataModel() const { DARABONBA_PTR_GET_CONST(reportDataModel_, vector<QueryNodeReportDataResponseBody::ReportDataModel>) };
    inline vector<QueryNodeReportDataResponseBody::ReportDataModel> getReportDataModel() { DARABONBA_PTR_GET(reportDataModel_, vector<QueryNodeReportDataResponseBody::ReportDataModel>) };
    inline QueryNodeReportDataResponseBody& setReportDataModel(const vector<QueryNodeReportDataResponseBody::ReportDataModel> & reportDataModel) { DARABONBA_PTR_SET_VALUE(reportDataModel_, reportDataModel) };
    inline QueryNodeReportDataResponseBody& setReportDataModel(vector<QueryNodeReportDataResponseBody::ReportDataModel> && reportDataModel) { DARABONBA_PTR_SET_RVALUE(reportDataModel_, reportDataModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNodeReportDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The description of the request processing result. If the request is successful, success is usually returned.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The list of node report data.
    shared_ptr<vector<QueryNodeReportDataResponseBody::ReportDataModel>> reportDataModel_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
