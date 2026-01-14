// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGTRACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGTRACKRESPONSEBODY_HPP_
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
  class ListConfigTrackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigTrackResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListConfigTrackResponseBody& obj) { 
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
    ListConfigTrackResponseBody() = default ;
    ListConfigTrackResponseBody(const ListConfigTrackResponseBody &) = default ;
    ListConfigTrackResponseBody(ListConfigTrackResponseBody &&) = default ;
    ListConfigTrackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigTrackResponseBody() = default ;
    ListConfigTrackResponseBody& operator=(const ListConfigTrackResponseBody &) = default ;
    ListConfigTrackResponseBody& operator=(ListConfigTrackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traces& obj) { 
        DARABONBA_PTR_TO_JSON(Client, client_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(LogDate, logDate_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Push, push_);
        DARABONBA_PTR_TO_JSON(RequestIp, requestIp_);
        DARABONBA_PTR_TO_JSON(ResponseIp, responseIp_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Ts, ts_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Traces& obj) { 
        DARABONBA_PTR_FROM_JSON(Client, client_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(LogDate, logDate_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Push, push_);
        DARABONBA_PTR_FROM_JSON(RequestIp, requestIp_);
        DARABONBA_PTR_FROM_JSON(ResponseIp, responseIp_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Ts, ts_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->client_ == nullptr
        && this->dataId_ == nullptr && this->delay_ == nullptr && this->event_ == nullptr && this->group_ == nullptr && this->logDate_ == nullptr
        && this->md5_ == nullptr && this->push_ == nullptr && this->requestIp_ == nullptr && this->responseIp_ == nullptr && this->result_ == nullptr
        && this->ts_ == nullptr && this->type_ == nullptr; };
      // client Field Functions 
      bool hasClient() const { return this->client_ != nullptr;};
      void deleteClient() { this->client_ = nullptr;};
      inline bool getClient() const { DARABONBA_PTR_GET_DEFAULT(client_, false) };
      inline Traces& setClient(bool client) { DARABONBA_PTR_SET_VALUE(client_, client) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Traces& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline string getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
      inline Traces& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Traces& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Traces& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // logDate Field Functions 
      bool hasLogDate() const { return this->logDate_ != nullptr;};
      void deleteLogDate() { this->logDate_ = nullptr;};
      inline string getLogDate() const { DARABONBA_PTR_GET_DEFAULT(logDate_, "") };
      inline Traces& setLogDate(string logDate) { DARABONBA_PTR_SET_VALUE(logDate_, logDate) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Traces& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // push Field Functions 
      bool hasPush() const { return this->push_ != nullptr;};
      void deletePush() { this->push_ = nullptr;};
      inline bool getPush() const { DARABONBA_PTR_GET_DEFAULT(push_, false) };
      inline Traces& setPush(bool push) { DARABONBA_PTR_SET_VALUE(push_, push) };


      // requestIp Field Functions 
      bool hasRequestIp() const { return this->requestIp_ != nullptr;};
      void deleteRequestIp() { this->requestIp_ = nullptr;};
      inline string getRequestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
      inline Traces& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


      // responseIp Field Functions 
      bool hasResponseIp() const { return this->responseIp_ != nullptr;};
      void deleteResponseIp() { this->responseIp_ = nullptr;};
      inline string getResponseIp() const { DARABONBA_PTR_GET_DEFAULT(responseIp_, "") };
      inline Traces& setResponseIp(string responseIp) { DARABONBA_PTR_SET_VALUE(responseIp_, responseIp) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Traces& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // ts Field Functions 
      bool hasTs() const { return this->ts_ != nullptr;};
      void deleteTs() { this->ts_ = nullptr;};
      inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
      inline Traces& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Traces& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether the request is sent from the client. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> client_ {};
      // The ID of the configuration.
      shared_ptr<string> dataId_ {};
      // The response latency. Unit: milliseconds.
      shared_ptr<string> delay_ {};
      // The event. Valid values:
      // 
      // *   pull: configuration acquisition events
      // *   persist: persistence events
      shared_ptr<string> event_ {};
      // The name of the configuration group.
      shared_ptr<string> group_ {};
      // The logging time.
      shared_ptr<string> logDate_ {};
      // The MD5 value.
      shared_ptr<string> md5_ {};
      // Indicates whether messages are pushed by a server. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> push_ {};
      // The source IP address of the request.
      shared_ptr<string> requestIp_ {};
      // The response node.
      shared_ptr<string> responseIp_ {};
      // The result.
      shared_ptr<string> result_ {};
      // The timestamp that indicates the time when the metric value is collected.
      // 
      // Unit: seconds.
      shared_ptr<string> ts_ {};
      // The release type. Valid values:
      // 
      // *   beta: beta release
      // *   tag: canary release
      // *   batch: batch release
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr && this->traces_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListConfigTrackResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListConfigTrackResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConfigTrackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListConfigTrackResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListConfigTrackResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigTrackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListConfigTrackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListConfigTrackResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<ListConfigTrackResponseBody::Traces> & getTraces() const { DARABONBA_PTR_GET_CONST(traces_, vector<ListConfigTrackResponseBody::Traces>) };
    inline vector<ListConfigTrackResponseBody::Traces> getTraces() { DARABONBA_PTR_GET(traces_, vector<ListConfigTrackResponseBody::Traces>) };
    inline ListConfigTrackResponseBody& setTraces(const vector<ListConfigTrackResponseBody::Traces> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline ListConfigTrackResponseBody& setTraces(vector<ListConfigTrackResponseBody::Traces> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
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
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The track data.
    shared_ptr<vector<ListConfigTrackResponseBody::Traces>> traces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
