// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOSSPANS_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACERESPONSEBODYMULTICALLCHAININFOSSPANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList.hpp>
#include <alibabacloud/models/GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetMultipleTraceResponseBodyMultiCallChainInfosSpans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceResponseBodyMultiCallChainInfosSpans& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceResponseBodyMultiCallChainInfosSpans& obj) { 
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
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans(const GetMultipleTraceResponseBodyMultiCallChainInfosSpans &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans(GetMultipleTraceResponseBodyMultiCallChainInfosSpans &&) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceResponseBodyMultiCallChainInfosSpans() = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans& operator=(const GetMultipleTraceResponseBodyMultiCallChainInfosSpans &) = default ;
    GetMultipleTraceResponseBodyMultiCallChainInfosSpans& operator=(GetMultipleTraceResponseBodyMultiCallChainInfosSpans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->haveStack_ != nullptr && this->logEventList_ != nullptr && this->operationName_ != nullptr && this->parentSpanId_ != nullptr && this->resultCode_ != nullptr
        && this->rpcId_ != nullptr && this->rpcType_ != nullptr && this->serviceIp_ != nullptr && this->serviceName_ != nullptr && this->spanId_ != nullptr
        && this->tagEntryList_ != nullptr && this->timestamp_ != nullptr && this->traceID_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // haveStack Field Functions 
    bool hasHaveStack() const { return this->haveStack_ != nullptr;};
    void deleteHaveStack() { this->haveStack_ = nullptr;};
    inline bool haveStack() const { DARABONBA_PTR_GET_DEFAULT(haveStack_, false) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setHaveStack(bool haveStack) { DARABONBA_PTR_SET_VALUE(haveStack_, haveStack) };


    // logEventList Field Functions 
    bool hasLogEventList() const { return this->logEventList_ != nullptr;};
    void deleteLogEventList() { this->logEventList_ = nullptr;};
    inline const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList> & logEventList() const { DARABONBA_PTR_GET_CONST(logEventList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList>) };
    inline vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList> logEventList() { DARABONBA_PTR_GET(logEventList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList>) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setLogEventList(const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList> & logEventList) { DARABONBA_PTR_SET_VALUE(logEventList_, logEventList) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setLogEventList(vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList> && logEventList) { DARABONBA_PTR_SET_RVALUE(logEventList_, logEventList) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // parentSpanId Field Functions 
    bool hasParentSpanId() const { return this->parentSpanId_ != nullptr;};
    void deleteParentSpanId() { this->parentSpanId_ = nullptr;};
    inline string parentSpanId() const { DARABONBA_PTR_GET_DEFAULT(parentSpanId_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setParentSpanId(string parentSpanId) { DARABONBA_PTR_SET_VALUE(parentSpanId_, parentSpanId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // rpcId Field Functions 
    bool hasRpcId() const { return this->rpcId_ != nullptr;};
    void deleteRpcId() { this->rpcId_ = nullptr;};
    inline string rpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


    // rpcType Field Functions 
    bool hasRpcType() const { return this->rpcType_ != nullptr;};
    void deleteRpcType() { this->rpcType_ = nullptr;};
    inline int32_t rpcType() const { DARABONBA_PTR_GET_DEFAULT(rpcType_, 0) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setRpcType(int32_t rpcType) { DARABONBA_PTR_SET_VALUE(rpcType_, rpcType) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // spanId Field Functions 
    bool hasSpanId() const { return this->spanId_ != nullptr;};
    void deleteSpanId() { this->spanId_ = nullptr;};
    inline string spanId() const { DARABONBA_PTR_GET_DEFAULT(spanId_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setSpanId(string spanId) { DARABONBA_PTR_SET_VALUE(spanId_, spanId) };


    // tagEntryList Field Functions 
    bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
    void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
    inline const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList> & tagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList>) };
    inline vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList> tagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList>) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setTagEntryList(const vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setTagEntryList(vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline GetMultipleTraceResponseBodyMultiCallChainInfosSpans& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


  protected:
    // The amount of time consumed by the trace. Unit: milliseconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // Indicates whether a method stack was provided.
    // 
    // *   `true`: A method stack was provided.
    // *   `false`: No method stack was provided.
    std::shared_ptr<bool> haveStack_ = nullptr;
    // The log events in the trace.
    std::shared_ptr<vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansLogEventList>> logEventList_ = nullptr;
    // The name of the traced span.
    std::shared_ptr<string> operationName_ = nullptr;
    // The ID of the parent span.
    std::shared_ptr<string> parentSpanId_ = nullptr;
    // The status code returned.
    std::shared_ptr<string> resultCode_ = nullptr;
    // RPC ID
    std::shared_ptr<string> rpcId_ = nullptr;
    // The type of the remote procedure call (RPC) mode.
    // 
    // *   0: HTTP entry
    // *   25: HTTP call
    // *   1: High-speed Service Framework (HSF) call
    // *   2: HSF provision
    // *   40: on-premises API call
    // *   60: MySQL call
    // *   62: Oracle call
    // *   63: PostgreSQL call
    // *   70: Redis call
    // *   4: Taobao Distributed Data Layer (TDDL) call
    // *   5: Tair call
    // *   13: MetaQ message sending
    // *   252: MetaQ message receiving
    // *   3: notification sending
    // *   254: notification receiving
    // *   7: Apache Dubbo call
    // *   8: Apache Dubbo provision
    // *   19: SOFARPC call
    // *   18: SOFARPC provision
    // *   11: Distributed Service Framework (DSF) call
    // *   12: DSF provision
    // *   \\-1: unknown call
    std::shared_ptr<int32_t> rpcType_ = nullptr;
    // The IP address of the host where the application resides.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The span ID.
    std::shared_ptr<string> spanId_ = nullptr;
    // The tags of the trace.
    std::shared_ptr<vector<Models::GetMultipleTraceResponseBodyMultiCallChainInfosSpansTagEntryList>> tagEntryList_ = nullptr;
    // The timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The trace ID.
    std::shared_ptr<string> traceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
