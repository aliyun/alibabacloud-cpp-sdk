// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESRESPONSEBODYTRACEINFOS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESRESPONSEBODYTRACEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesResponseBodyTraceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesResponseBodyTraceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SpanID, spanID_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TraceID, traceID_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesResponseBodyTraceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SpanID, spanID_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
    };
    SearchTracesResponseBodyTraceInfos() = default ;
    SearchTracesResponseBodyTraceInfos(const SearchTracesResponseBodyTraceInfos &) = default ;
    SearchTracesResponseBodyTraceInfos(SearchTracesResponseBodyTraceInfos &&) = default ;
    SearchTracesResponseBodyTraceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesResponseBodyTraceInfos() = default ;
    SearchTracesResponseBodyTraceInfos& operator=(const SearchTracesResponseBodyTraceInfos &) = default ;
    SearchTracesResponseBodyTraceInfos& operator=(SearchTracesResponseBodyTraceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->operationName_ != nullptr && this->serviceIp_ != nullptr && this->serviceName_ != nullptr && this->spanID_ != nullptr && this->timestamp_ != nullptr
        && this->traceID_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline SearchTracesResponseBodyTraceInfos& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline SearchTracesResponseBodyTraceInfos& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string serviceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline SearchTracesResponseBodyTraceInfos& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline SearchTracesResponseBodyTraceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // spanID Field Functions 
    bool hasSpanID() const { return this->spanID_ != nullptr;};
    void deleteSpanID() { this->spanID_ = nullptr;};
    inline string spanID() const { DARABONBA_PTR_GET_DEFAULT(spanID_, "") };
    inline SearchTracesResponseBodyTraceInfos& setSpanID(string spanID) { DARABONBA_PTR_SET_VALUE(spanID_, spanID) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline SearchTracesResponseBodyTraceInfos& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline SearchTracesResponseBodyTraceInfos& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


  protected:
    // The amount of time consumed by the trace. Unit: milliseconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The name of the traced span.
    std::shared_ptr<string> operationName_ = nullptr;
    // The IP address of the host where the application resides.
    std::shared_ptr<string> serviceIp_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Span ID. You can get it from the **Trace Explorer** page of the ARMS console.
    std::shared_ptr<string> spanID_ = nullptr;
    // The timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The trace ID.
    std::shared_ptr<string> traceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
