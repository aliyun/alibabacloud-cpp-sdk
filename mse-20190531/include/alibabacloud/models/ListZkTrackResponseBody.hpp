// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZKTRACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTZKTRACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListZkTrackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZkTrackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Traces, traces_);
    };
    friend void from_json(const Darabonba::Json& j, ListZkTrackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Traces, traces_);
    };
    ListZkTrackResponseBody() = default ;
    ListZkTrackResponseBody(const ListZkTrackResponseBody &) = default ;
    ListZkTrackResponseBody(ListZkTrackResponseBody &&) = default ;
    ListZkTrackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZkTrackResponseBody() = default ;
    ListZkTrackResponseBody& operator=(const ListZkTrackResponseBody &) = default ;
    ListZkTrackResponseBody& operator=(ListZkTrackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traces& obj) { 
        DARABONBA_PTR_TO_JSON(Acl, acl_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Finished, finished_);
        DARABONBA_PTR_TO_JSON(LogDate, logDate_);
        DARABONBA_PTR_TO_JSON(MultiSize, multiSize_);
        DARABONBA_PTR_TO_JSON(OpType, opType_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TraceType, traceType_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Watch, watch_);
      };
      friend void from_json(const Darabonba::Json& j, Traces& obj) { 
        DARABONBA_PTR_FROM_JSON(Acl, acl_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Finished, finished_);
        DARABONBA_PTR_FROM_JSON(LogDate, logDate_);
        DARABONBA_PTR_FROM_JSON(MultiSize, multiSize_);
        DARABONBA_PTR_FROM_JSON(OpType, opType_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Watch, watch_);
      };
      Traces() = default ;
      Traces(const Traces &) = default ;
      Traces(Traces &&) = default ;
      Traces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Traces() = default ;
      Traces& operator=(const Traces &) = default ;
      Traces& operator=(Traces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acl_ == nullptr
        && this->dataType_ == nullptr && this->eventType_ == nullptr && this->finished_ == nullptr && this->logDate_ == nullptr && this->multiSize_ == nullptr
        && this->opType_ == nullptr && this->path_ == nullptr && this->result_ == nullptr && this->sessionId_ == nullptr && this->timestamp_ == nullptr
        && this->traceType_ == nullptr && this->ttl_ == nullptr && this->watch_ == nullptr; };
      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
      inline Traces& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Traces& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Traces& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // finished Field Functions 
      bool hasFinished() const { return this->finished_ != nullptr;};
      void deleteFinished() { this->finished_ = nullptr;};
      inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
      inline Traces& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


      // logDate Field Functions 
      bool hasLogDate() const { return this->logDate_ != nullptr;};
      void deleteLogDate() { this->logDate_ = nullptr;};
      inline string getLogDate() const { DARABONBA_PTR_GET_DEFAULT(logDate_, "") };
      inline Traces& setLogDate(string logDate) { DARABONBA_PTR_SET_VALUE(logDate_, logDate) };


      // multiSize Field Functions 
      bool hasMultiSize() const { return this->multiSize_ != nullptr;};
      void deleteMultiSize() { this->multiSize_ = nullptr;};
      inline int64_t getMultiSize() const { DARABONBA_PTR_GET_DEFAULT(multiSize_, 0L) };
      inline Traces& setMultiSize(int64_t multiSize) { DARABONBA_PTR_SET_VALUE(multiSize_, multiSize) };


      // opType Field Functions 
      bool hasOpType() const { return this->opType_ != nullptr;};
      void deleteOpType() { this->opType_ = nullptr;};
      inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
      inline Traces& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Traces& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Traces& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Traces& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Traces& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // traceType Field Functions 
      bool hasTraceType() const { return this->traceType_ != nullptr;};
      void deleteTraceType() { this->traceType_ = nullptr;};
      inline string getTraceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
      inline Traces& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
      inline Traces& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // watch Field Functions 
      bool hasWatch() const { return this->watch_ != nullptr;};
      void deleteWatch() { this->watch_ = nullptr;};
      inline bool getWatch() const { DARABONBA_PTR_GET_DEFAULT(watch_, false) };
      inline Traces& setWatch(bool watch) { DARABONBA_PTR_SET_VALUE(watch_, watch) };


    protected:
      // The access control list (ACL).
      shared_ptr<string> acl_ {};
      // The data type. Valid values:
      // 
      // *   persist
      // *   ephemeral
      shared_ptr<string> dataType_ {};
      // The type of the event. For trajectory of the Notify type:
      // 
      // *   NodeCreated
      // *   NodeDeleted
      // *   NodeDataChanged
      // *   NodeChildrenChanged
      shared_ptr<string> eventType_ {};
      // Indicates whether the transaction ended.
      shared_ptr<bool> finished_ {};
      // The logging time.
      shared_ptr<string> logDate_ {};
      // The transaction size.
      shared_ptr<int64_t> multiSize_ {};
      // The type of the operation. For trajectory of the Push type:
      // 
      // *   Create
      // *   Update
      // *   Delete
      // *   SetAcl
      // *   Multi
      // 
      // For trajectory of the Pull type:
      // 
      // *   GetData
      // *   GetChild
      // *   GetStat
      shared_ptr<string> opType_ {};
      // The path.
      shared_ptr<string> path_ {};
      // The returned result.
      shared_ptr<string> result_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
      // The timestamp. It is not available.
      shared_ptr<string> timestamp_ {};
      // The type of the trajectory. Valid values:
      // 
      // *   Push
      // *   Pull
      // *   Notify
      shared_ptr<string> traceType_ {};
      // The time to live (TTL).
      shared_ptr<int64_t> ttl_ {};
      // Indicates whether the monitoring feature is enabled.
      shared_ptr<bool> watch_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr && this->traces_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListZkTrackResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListZkTrackResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListZkTrackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListZkTrackResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListZkTrackResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListZkTrackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListZkTrackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListZkTrackResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<ListZkTrackResponseBody::Traces> & getTraces() const { DARABONBA_PTR_GET_CONST(traces_, vector<ListZkTrackResponseBody::Traces>) };
    inline vector<ListZkTrackResponseBody::Traces> getTraces() { DARABONBA_PTR_GET(traces_, vector<ListZkTrackResponseBody::Traces>) };
    inline ListZkTrackResponseBody& setTraces(const vector<ListZkTrackResponseBody::Traces> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline ListZkTrackResponseBody& setTraces(vector<ListZkTrackResponseBody::Traces> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The track data.
    shared_ptr<vector<ListZkTrackResponseBody::Traces>> traces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
