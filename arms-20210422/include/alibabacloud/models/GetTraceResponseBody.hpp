// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Spans, spans_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Spans, spans_);
    };
    GetTraceResponseBody() = default ;
    GetTraceResponseBody(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody(GetTraceResponseBody &&) = default ;
    GetTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBody() = default ;
    GetTraceResponseBody& operator=(const GetTraceResponseBody &) = default ;
    GetTraceResponseBody& operator=(GetTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Spans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Spans& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(HaveStack, haveStack_);
        DARABONBA_PTR_TO_JSON(LogEventList, logEventList_);
        DARABONBA_PTR_TO_JSON(OperationName, operationName_);
        DARABONBA_PTR_TO_JSON(ParentSpanId, parentSpanId_);
        DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_TO_JSON(RpcId, rpcId_);
        DARABONBA_PTR_TO_JSON(RpcType, rpcType_);
        DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(SpanId, spanId_);
        DARABONBA_PTR_TO_JSON(TagEntryList, tagEntryList_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TraceID, traceID_);
      };
      friend void from_json(const Darabonba::Json& j, Spans& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(HaveStack, haveStack_);
        DARABONBA_PTR_FROM_JSON(LogEventList, logEventList_);
        DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
        DARABONBA_PTR_FROM_JSON(ParentSpanId, parentSpanId_);
        DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_FROM_JSON(RpcId, rpcId_);
        DARABONBA_PTR_FROM_JSON(RpcType, rpcType_);
        DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(SpanId, spanId_);
        DARABONBA_PTR_FROM_JSON(TagEntryList, tagEntryList_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
      };
      Spans() = default ;
      Spans(const Spans &) = default ;
      Spans(Spans &&) = default ;
      Spans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Spans() = default ;
      Spans& operator=(const Spans &) = default ;
      Spans& operator=(Spans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagEntryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagEntryList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TagEntryList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TagEntryList() = default ;
        TagEntryList(const TagEntryList &) = default ;
        TagEntryList(TagEntryList &&) = default ;
        TagEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagEntryList() = default ;
        TagEntryList& operator=(const TagEntryList &) = default ;
        TagEntryList& operator=(TagEntryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline TagEntryList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TagEntryList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class LogEventList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogEventList& obj) { 
          DARABONBA_PTR_TO_JSON(TagEntryList, tagEntryList_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, LogEventList& obj) { 
          DARABONBA_PTR_FROM_JSON(TagEntryList, tagEntryList_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        LogEventList() = default ;
        LogEventList(const LogEventList &) = default ;
        LogEventList(LogEventList &&) = default ;
        LogEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogEventList() = default ;
        LogEventList& operator=(const LogEventList &) = default ;
        LogEventList& operator=(LogEventList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagEntryList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagEntryList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TagEntryList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TagEntryList() = default ;
          TagEntryList(const TagEntryList &) = default ;
          TagEntryList(TagEntryList &&) = default ;
          TagEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagEntryList() = default ;
          TagEntryList& operator=(const TagEntryList &) = default ;
          TagEntryList& operator=(TagEntryList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline TagEntryList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TagEntryList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->tagEntryList_ == nullptr
        && this->timestamp_ == nullptr; };
        // tagEntryList Field Functions 
        bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
        void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
        inline const vector<LogEventList::TagEntryList> & getTagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<LogEventList::TagEntryList>) };
        inline vector<LogEventList::TagEntryList> getTagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<LogEventList::TagEntryList>) };
        inline LogEventList& setTagEntryList(const vector<LogEventList::TagEntryList> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
        inline LogEventList& setTagEntryList(vector<LogEventList::TagEntryList> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline LogEventList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<vector<LogEventList::TagEntryList>> tagEntryList_ {};
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->duration_ == nullptr
        && this->haveStack_ == nullptr && this->logEventList_ == nullptr && this->operationName_ == nullptr && this->parentSpanId_ == nullptr && this->resultCode_ == nullptr
        && this->rpcId_ == nullptr && this->rpcType_ == nullptr && this->serviceIp_ == nullptr && this->serviceName_ == nullptr && this->spanId_ == nullptr
        && this->tagEntryList_ == nullptr && this->timestamp_ == nullptr && this->traceID_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Spans& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // haveStack Field Functions 
      bool hasHaveStack() const { return this->haveStack_ != nullptr;};
      void deleteHaveStack() { this->haveStack_ = nullptr;};
      inline bool getHaveStack() const { DARABONBA_PTR_GET_DEFAULT(haveStack_, false) };
      inline Spans& setHaveStack(bool haveStack) { DARABONBA_PTR_SET_VALUE(haveStack_, haveStack) };


      // logEventList Field Functions 
      bool hasLogEventList() const { return this->logEventList_ != nullptr;};
      void deleteLogEventList() { this->logEventList_ = nullptr;};
      inline const vector<Spans::LogEventList> & getLogEventList() const { DARABONBA_PTR_GET_CONST(logEventList_, vector<Spans::LogEventList>) };
      inline vector<Spans::LogEventList> getLogEventList() { DARABONBA_PTR_GET(logEventList_, vector<Spans::LogEventList>) };
      inline Spans& setLogEventList(const vector<Spans::LogEventList> & logEventList) { DARABONBA_PTR_SET_VALUE(logEventList_, logEventList) };
      inline Spans& setLogEventList(vector<Spans::LogEventList> && logEventList) { DARABONBA_PTR_SET_RVALUE(logEventList_, logEventList) };


      // operationName Field Functions 
      bool hasOperationName() const { return this->operationName_ != nullptr;};
      void deleteOperationName() { this->operationName_ = nullptr;};
      inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
      inline Spans& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


      // parentSpanId Field Functions 
      bool hasParentSpanId() const { return this->parentSpanId_ != nullptr;};
      void deleteParentSpanId() { this->parentSpanId_ = nullptr;};
      inline string getParentSpanId() const { DARABONBA_PTR_GET_DEFAULT(parentSpanId_, "") };
      inline Spans& setParentSpanId(string parentSpanId) { DARABONBA_PTR_SET_VALUE(parentSpanId_, parentSpanId) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline Spans& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // rpcId Field Functions 
      bool hasRpcId() const { return this->rpcId_ != nullptr;};
      void deleteRpcId() { this->rpcId_ = nullptr;};
      inline string getRpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
      inline Spans& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


      // rpcType Field Functions 
      bool hasRpcType() const { return this->rpcType_ != nullptr;};
      void deleteRpcType() { this->rpcType_ = nullptr;};
      inline int32_t getRpcType() const { DARABONBA_PTR_GET_DEFAULT(rpcType_, 0) };
      inline Spans& setRpcType(int32_t rpcType) { DARABONBA_PTR_SET_VALUE(rpcType_, rpcType) };


      // serviceIp Field Functions 
      bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
      void deleteServiceIp() { this->serviceIp_ = nullptr;};
      inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
      inline Spans& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Spans& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // spanId Field Functions 
      bool hasSpanId() const { return this->spanId_ != nullptr;};
      void deleteSpanId() { this->spanId_ = nullptr;};
      inline string getSpanId() const { DARABONBA_PTR_GET_DEFAULT(spanId_, "") };
      inline Spans& setSpanId(string spanId) { DARABONBA_PTR_SET_VALUE(spanId_, spanId) };


      // tagEntryList Field Functions 
      bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
      void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
      inline const vector<Spans::TagEntryList> & getTagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<Spans::TagEntryList>) };
      inline vector<Spans::TagEntryList> getTagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<Spans::TagEntryList>) };
      inline Spans& setTagEntryList(const vector<Spans::TagEntryList> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
      inline Spans& setTagEntryList(vector<Spans::TagEntryList> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Spans& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // traceID Field Functions 
      bool hasTraceID() const { return this->traceID_ != nullptr;};
      void deleteTraceID() { this->traceID_ = nullptr;};
      inline string getTraceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
      inline Spans& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


    protected:
      shared_ptr<int64_t> duration_ {};
      shared_ptr<bool> haveStack_ {};
      shared_ptr<vector<Spans::LogEventList>> logEventList_ {};
      shared_ptr<string> operationName_ {};
      shared_ptr<string> parentSpanId_ {};
      shared_ptr<string> resultCode_ {};
      shared_ptr<string> rpcId_ {};
      shared_ptr<int32_t> rpcType_ {};
      shared_ptr<string> serviceIp_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> spanId_ {};
      shared_ptr<vector<Spans::TagEntryList>> tagEntryList_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<string> traceID_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->spans_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spans Field Functions 
    bool hasSpans() const { return this->spans_ != nullptr;};
    void deleteSpans() { this->spans_ = nullptr;};
    inline const vector<GetTraceResponseBody::Spans> & getSpans() const { DARABONBA_PTR_GET_CONST(spans_, vector<GetTraceResponseBody::Spans>) };
    inline vector<GetTraceResponseBody::Spans> getSpans() { DARABONBA_PTR_GET(spans_, vector<GetTraceResponseBody::Spans>) };
    inline GetTraceResponseBody& setSpans(const vector<GetTraceResponseBody::Spans> & spans) { DARABONBA_PTR_SET_VALUE(spans_, spans) };
    inline GetTraceResponseBody& setSpans(vector<GetTraceResponseBody::Spans> && spans) { DARABONBA_PTR_SET_RVALUE(spans_, spans) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetTraceResponseBody::Spans>> spans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
