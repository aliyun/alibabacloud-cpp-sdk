// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDAUREPORTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDAUREPORTDATARESPONSEBODY_HPP_
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
  class QueryDauReportDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDauReportDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DauReportDataModel, dauReportDataModel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDauReportDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DauReportDataModel, dauReportDataModel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDauReportDataResponseBody() = default ;
    QueryDauReportDataResponseBody(const QueryDauReportDataResponseBody &) = default ;
    QueryDauReportDataResponseBody(QueryDauReportDataResponseBody &&) = default ;
    QueryDauReportDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDauReportDataResponseBody() = default ;
    QueryDauReportDataResponseBody& operator=(const QueryDauReportDataResponseBody &) = default ;
    QueryDauReportDataResponseBody& operator=(QueryDauReportDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DauReportDataModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DauReportDataModel& obj) { 
        DARABONBA_PTR_TO_JSON(Dau, dau_);
        DARABONBA_PTR_TO_JSON(StatDate, statDate_);
        DARABONBA_PTR_TO_JSON(StreamingDau, streamingDau_);
      };
      friend void from_json(const Darabonba::Json& j, DauReportDataModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Dau, dau_);
        DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
        DARABONBA_PTR_FROM_JSON(StreamingDau, streamingDau_);
      };
      DauReportDataModel() = default ;
      DauReportDataModel(const DauReportDataModel &) = default ;
      DauReportDataModel(DauReportDataModel &&) = default ;
      DauReportDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DauReportDataModel() = default ;
      DauReportDataModel& operator=(const DauReportDataModel &) = default ;
      DauReportDataModel& operator=(DauReportDataModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dau_ == nullptr
        && this->statDate_ == nullptr && this->streamingDau_ == nullptr; };
      // dau Field Functions 
      bool hasDau() const { return this->dau_ != nullptr;};
      void deleteDau() { this->dau_ = nullptr;};
      inline int64_t getDau() const { DARABONBA_PTR_GET_DEFAULT(dau_, 0L) };
      inline DauReportDataModel& setDau(int64_t dau) { DARABONBA_PTR_SET_VALUE(dau_, dau) };


      // statDate Field Functions 
      bool hasStatDate() const { return this->statDate_ != nullptr;};
      void deleteStatDate() { this->statDate_ = nullptr;};
      inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
      inline DauReportDataModel& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


      // streamingDau Field Functions 
      bool hasStreamingDau() const { return this->streamingDau_ != nullptr;};
      void deleteStreamingDau() { this->streamingDau_ = nullptr;};
      inline int64_t getStreamingDau() const { DARABONBA_PTR_GET_DEFAULT(streamingDau_, 0L) };
      inline DauReportDataModel& setStreamingDau(int64_t streamingDau) { DARABONBA_PTR_SET_VALUE(streamingDau_, streamingDau) };


    protected:
      // The number of active users within the statistical epoch. Unit: users.
      shared_ptr<int64_t> dau_ {};
      // The statistics date. Format: yyyy-MM-dd. The string does not contain a time zone and is interpreted as a natural date in the Asia/Shanghai (UTC+8) time zone.
      shared_ptr<string> statDate_ {};
      // The number of active users who generated sessions through streaming access within the statistical epoch. Unit: users.
      shared_ptr<int64_t> streamingDau_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->dauReportDataModel_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDauReportDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryDauReportDataResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dauReportDataModel Field Functions 
    bool hasDauReportDataModel() const { return this->dauReportDataModel_ != nullptr;};
    void deleteDauReportDataModel() { this->dauReportDataModel_ = nullptr;};
    inline const vector<QueryDauReportDataResponseBody::DauReportDataModel> & getDauReportDataModel() const { DARABONBA_PTR_GET_CONST(dauReportDataModel_, vector<QueryDauReportDataResponseBody::DauReportDataModel>) };
    inline vector<QueryDauReportDataResponseBody::DauReportDataModel> getDauReportDataModel() { DARABONBA_PTR_GET(dauReportDataModel_, vector<QueryDauReportDataResponseBody::DauReportDataModel>) };
    inline QueryDauReportDataResponseBody& setDauReportDataModel(const vector<QueryDauReportDataResponseBody::DauReportDataModel> & dauReportDataModel) { DARABONBA_PTR_SET_VALUE(dauReportDataModel_, dauReportDataModel) };
    inline QueryDauReportDataResponseBody& setDauReportDataModel(vector<QueryDauReportDataResponseBody::DauReportDataModel> && dauReportDataModel) { DARABONBA_PTR_SET_RVALUE(dauReportDataModel_, dauReportDataModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDauReportDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryDauReportDataResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDauReportDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDauReportDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business status code. A value of 200 indicates that the request is processed successfully. Other values indicate that the processing failed.
    shared_ptr<string> code_ {};
    // The total number of records that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The list of daily active user report data.
    shared_ptr<vector<QueryDauReportDataResponseBody::DauReportDataModel>> dauReportDataModel_ {};
    // The description of the request processing result. Typically, success is returned if the request is successful.
    shared_ptr<string> message_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
