// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKCONCURRENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKCONCURRENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class QueryTaskConcurrencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    QueryTaskConcurrencyResponseBody() = default ;
    QueryTaskConcurrencyResponseBody(const QueryTaskConcurrencyResponseBody &) = default ;
    QueryTaskConcurrencyResponseBody(QueryTaskConcurrencyResponseBody &&) = default ;
    QueryTaskConcurrencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskConcurrencyResponseBody() = default ;
    QueryTaskConcurrencyResponseBody& operator=(const QueryTaskConcurrencyResponseBody &) = default ;
    QueryTaskConcurrencyResponseBody& operator=(QueryTaskConcurrencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableConcurrency, availableConcurrency_);
        DARABONBA_PTR_TO_JSON(CurrentConcurrency, currentConcurrency_);
        DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableConcurrency, availableConcurrency_);
        DARABONBA_PTR_FROM_JSON(CurrentConcurrency, currentConcurrency_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableConcurrency_ == nullptr
        && this->currentConcurrency_ == nullptr && this->maxConcurrency_ == nullptr; };
      // availableConcurrency Field Functions 
      bool hasAvailableConcurrency() const { return this->availableConcurrency_ != nullptr;};
      void deleteAvailableConcurrency() { this->availableConcurrency_ = nullptr;};
      inline int64_t getAvailableConcurrency() const { DARABONBA_PTR_GET_DEFAULT(availableConcurrency_, 0L) };
      inline Data& setAvailableConcurrency(int64_t availableConcurrency) { DARABONBA_PTR_SET_VALUE(availableConcurrency_, availableConcurrency) };


      // currentConcurrency Field Functions 
      bool hasCurrentConcurrency() const { return this->currentConcurrency_ != nullptr;};
      void deleteCurrentConcurrency() { this->currentConcurrency_ = nullptr;};
      inline int64_t getCurrentConcurrency() const { DARABONBA_PTR_GET_DEFAULT(currentConcurrency_, 0L) };
      inline Data& setCurrentConcurrency(int64_t currentConcurrency) { DARABONBA_PTR_SET_VALUE(currentConcurrency_, currentConcurrency) };


      // maxConcurrency Field Functions 
      bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
      void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
      inline int64_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
      inline Data& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    protected:
      shared_ptr<int64_t> availableConcurrency_ {};
      shared_ptr<int64_t> currentConcurrency_ {};
      shared_ptr<int64_t> maxConcurrency_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTaskConcurrencyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskConcurrencyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskConcurrencyResponseBody::Data) };
    inline QueryTaskConcurrencyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTaskConcurrencyResponseBody::Data) };
    inline QueryTaskConcurrencyResponseBody& setData(const QueryTaskConcurrencyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskConcurrencyResponseBody& setData(QueryTaskConcurrencyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTaskConcurrencyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskConcurrencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTaskConcurrencyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline QueryTaskConcurrencyResponseBody& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryTaskConcurrencyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryTaskConcurrencyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> timestamp_ {};
    // Trace ID。
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
