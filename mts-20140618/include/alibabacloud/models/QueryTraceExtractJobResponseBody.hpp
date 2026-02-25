// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEEXTRACTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEEXTRACTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTraceExtractJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceExtractJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceExtractJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryTraceExtractJobResponseBody() = default ;
    QueryTraceExtractJobResponseBody(const QueryTraceExtractJobResponseBody &) = default ;
    QueryTraceExtractJobResponseBody(QueryTraceExtractJobResponseBody &&) = default ;
    QueryTraceExtractJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceExtractJobResponseBody() = default ;
    QueryTraceExtractJobResponseBody& operator=(const QueryTraceExtractJobResponseBody &) = default ;
    QueryTraceExtractJobResponseBody& operator=(QueryTraceExtractJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Trace, trace_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Trace, trace_);
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
      virtual bool empty() const override { return this->trace_ == nullptr; };
      // trace Field Functions 
      bool hasTrace() const { return this->trace_ != nullptr;};
      void deleteTrace() { this->trace_ = nullptr;};
      inline string getTrace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
      inline Data& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    protected:
      shared_ptr<string> trace_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->statusCode_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTraceExtractJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTraceExtractJobResponseBody::Data) };
    inline QueryTraceExtractJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTraceExtractJobResponseBody::Data) };
    inline QueryTraceExtractJobResponseBody& setData(const QueryTraceExtractJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTraceExtractJobResponseBody& setData(QueryTraceExtractJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTraceExtractJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTraceExtractJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
    inline QueryTraceExtractJobResponseBody& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<QueryTraceExtractJobResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
