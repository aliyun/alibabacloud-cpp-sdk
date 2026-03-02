// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACEINFODETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_TRACEINFODETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TraceSpansLogEventList.hpp>
#include <alibabacloud/models/TagEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class TraceInfoDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceInfoDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(traceDetails, traceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, TraceInfoDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(traceDetails, traceDetails_);
    };
    TraceInfoDetailResult() = default ;
    TraceInfoDetailResult(const TraceInfoDetailResult &) = default ;
    TraceInfoDetailResult(TraceInfoDetailResult &&) = default ;
    TraceInfoDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceInfoDetailResult() = default ;
    TraceInfoDetailResult& operator=(const TraceInfoDetailResult &) = default ;
    TraceInfoDetailResult& operator=(TraceInfoDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(children, children_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(haveStack, haveStack_);
        DARABONBA_PTR_TO_JSON(logEventList, logEventList_);
        DARABONBA_PTR_TO_JSON(operationName, operationName_);
        DARABONBA_PTR_TO_JSON(parentSpanId, parentSpanId_);
        DARABONBA_PTR_TO_JSON(resultCode, resultCode_);
        DARABONBA_PTR_TO_JSON(rpcId, rpcId_);
        DARABONBA_PTR_TO_JSON(rpcType, rpcType_);
        DARABONBA_PTR_TO_JSON(rpcTypeName, rpcTypeName_);
        DARABONBA_PTR_TO_JSON(serviceIp, serviceIp_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(spanId, spanId_);
        DARABONBA_PTR_TO_JSON(tagEntryList, tagEntryList_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, TraceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(children, children_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(haveStack, haveStack_);
        DARABONBA_PTR_FROM_JSON(logEventList, logEventList_);
        DARABONBA_PTR_FROM_JSON(operationName, operationName_);
        DARABONBA_PTR_FROM_JSON(parentSpanId, parentSpanId_);
        DARABONBA_PTR_FROM_JSON(resultCode, resultCode_);
        DARABONBA_PTR_FROM_JSON(rpcId, rpcId_);
        DARABONBA_PTR_FROM_JSON(rpcType, rpcType_);
        DARABONBA_PTR_FROM_JSON(rpcTypeName, rpcTypeName_);
        DARABONBA_PTR_FROM_JSON(serviceIp, serviceIp_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(spanId, spanId_);
        DARABONBA_PTR_FROM_JSON(tagEntryList, tagEntryList_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      };
      TraceDetails() = default ;
      TraceDetails(const TraceDetails &) = default ;
      TraceDetails(TraceDetails &&) = default ;
      TraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceDetails() = default ;
      TraceDetails& operator=(const TraceDetails &) = default ;
      TraceDetails& operator=(TraceDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->children_ == nullptr
        && this->duration_ == nullptr && this->haveStack_ == nullptr && this->logEventList_ == nullptr && this->operationName_ == nullptr && this->parentSpanId_ == nullptr
        && this->resultCode_ == nullptr && this->rpcId_ == nullptr && this->rpcType_ == nullptr && this->rpcTypeName_ == nullptr && this->serviceIp_ == nullptr
        && this->serviceName_ == nullptr && this->spanId_ == nullptr && this->tagEntryList_ == nullptr && this->timestamp_ == nullptr && this->traceId_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
      inline TraceDetails& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline TraceDetails& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline TraceDetails& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // haveStack Field Functions 
      bool hasHaveStack() const { return this->haveStack_ != nullptr;};
      void deleteHaveStack() { this->haveStack_ = nullptr;};
      inline bool getHaveStack() const { DARABONBA_PTR_GET_DEFAULT(haveStack_, false) };
      inline TraceDetails& setHaveStack(bool haveStack) { DARABONBA_PTR_SET_VALUE(haveStack_, haveStack) };


      // logEventList Field Functions 
      bool hasLogEventList() const { return this->logEventList_ != nullptr;};
      void deleteLogEventList() { this->logEventList_ = nullptr;};
      inline const vector<TraceSpansLogEventList> & getLogEventList() const { DARABONBA_PTR_GET_CONST(logEventList_, vector<TraceSpansLogEventList>) };
      inline vector<TraceSpansLogEventList> getLogEventList() { DARABONBA_PTR_GET(logEventList_, vector<TraceSpansLogEventList>) };
      inline TraceDetails& setLogEventList(const vector<TraceSpansLogEventList> & logEventList) { DARABONBA_PTR_SET_VALUE(logEventList_, logEventList) };
      inline TraceDetails& setLogEventList(vector<TraceSpansLogEventList> && logEventList) { DARABONBA_PTR_SET_RVALUE(logEventList_, logEventList) };


      // operationName Field Functions 
      bool hasOperationName() const { return this->operationName_ != nullptr;};
      void deleteOperationName() { this->operationName_ = nullptr;};
      inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
      inline TraceDetails& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


      // parentSpanId Field Functions 
      bool hasParentSpanId() const { return this->parentSpanId_ != nullptr;};
      void deleteParentSpanId() { this->parentSpanId_ = nullptr;};
      inline string getParentSpanId() const { DARABONBA_PTR_GET_DEFAULT(parentSpanId_, "") };
      inline TraceDetails& setParentSpanId(string parentSpanId) { DARABONBA_PTR_SET_VALUE(parentSpanId_, parentSpanId) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline TraceDetails& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // rpcId Field Functions 
      bool hasRpcId() const { return this->rpcId_ != nullptr;};
      void deleteRpcId() { this->rpcId_ = nullptr;};
      inline string getRpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
      inline TraceDetails& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


      // rpcType Field Functions 
      bool hasRpcType() const { return this->rpcType_ != nullptr;};
      void deleteRpcType() { this->rpcType_ = nullptr;};
      inline int64_t getRpcType() const { DARABONBA_PTR_GET_DEFAULT(rpcType_, 0L) };
      inline TraceDetails& setRpcType(int64_t rpcType) { DARABONBA_PTR_SET_VALUE(rpcType_, rpcType) };


      // rpcTypeName Field Functions 
      bool hasRpcTypeName() const { return this->rpcTypeName_ != nullptr;};
      void deleteRpcTypeName() { this->rpcTypeName_ = nullptr;};
      inline string getRpcTypeName() const { DARABONBA_PTR_GET_DEFAULT(rpcTypeName_, "") };
      inline TraceDetails& setRpcTypeName(string rpcTypeName) { DARABONBA_PTR_SET_VALUE(rpcTypeName_, rpcTypeName) };


      // serviceIp Field Functions 
      bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
      void deleteServiceIp() { this->serviceIp_ = nullptr;};
      inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
      inline TraceDetails& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline TraceDetails& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // spanId Field Functions 
      bool hasSpanId() const { return this->spanId_ != nullptr;};
      void deleteSpanId() { this->spanId_ = nullptr;};
      inline string getSpanId() const { DARABONBA_PTR_GET_DEFAULT(spanId_, "") };
      inline TraceDetails& setSpanId(string spanId) { DARABONBA_PTR_SET_VALUE(spanId_, spanId) };


      // tagEntryList Field Functions 
      bool hasTagEntryList() const { return this->tagEntryList_ != nullptr;};
      void deleteTagEntryList() { this->tagEntryList_ = nullptr;};
      inline const vector<TagEntry> & getTagEntryList() const { DARABONBA_PTR_GET_CONST(tagEntryList_, vector<TagEntry>) };
      inline vector<TagEntry> getTagEntryList() { DARABONBA_PTR_GET(tagEntryList_, vector<TagEntry>) };
      inline TraceDetails& setTagEntryList(const vector<TagEntry> & tagEntryList) { DARABONBA_PTR_SET_VALUE(tagEntryList_, tagEntryList) };
      inline TraceDetails& setTagEntryList(vector<TagEntry> && tagEntryList) { DARABONBA_PTR_SET_RVALUE(tagEntryList_, tagEntryList) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline TraceDetails& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline TraceDetails& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<vector<Darabonba::Json>> children_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<bool> haveStack_ {};
      shared_ptr<vector<TraceSpansLogEventList>> logEventList_ {};
      shared_ptr<string> operationName_ {};
      shared_ptr<string> parentSpanId_ {};
      shared_ptr<string> resultCode_ {};
      shared_ptr<string> rpcId_ {};
      shared_ptr<int64_t> rpcType_ {};
      shared_ptr<string> rpcTypeName_ {};
      shared_ptr<string> serviceIp_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> spanId_ {};
      shared_ptr<vector<TagEntry>> tagEntryList_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->traceDetails_ == nullptr; };
    // traceDetails Field Functions 
    bool hasTraceDetails() const { return this->traceDetails_ != nullptr;};
    void deleteTraceDetails() { this->traceDetails_ = nullptr;};
    inline const vector<TraceInfoDetailResult::TraceDetails> & getTraceDetails() const { DARABONBA_PTR_GET_CONST(traceDetails_, vector<TraceInfoDetailResult::TraceDetails>) };
    inline vector<TraceInfoDetailResult::TraceDetails> getTraceDetails() { DARABONBA_PTR_GET(traceDetails_, vector<TraceInfoDetailResult::TraceDetails>) };
    inline TraceInfoDetailResult& setTraceDetails(const vector<TraceInfoDetailResult::TraceDetails> & traceDetails) { DARABONBA_PTR_SET_VALUE(traceDetails_, traceDetails) };
    inline TraceInfoDetailResult& setTraceDetails(vector<TraceInfoDetailResult::TraceDetails> && traceDetails) { DARABONBA_PTR_SET_RVALUE(traceDetails_, traceDetails) };


  protected:
    shared_ptr<vector<TraceInfoDetailResult::TraceDetails>> traceDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
