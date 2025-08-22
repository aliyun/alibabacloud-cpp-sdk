// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALLCHAININFO_HPP_
#define ALIBABACLOUD_MODELS_CALLCHAININFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CallChainInfo.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CallChainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CallChainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(HaveSpan, haveSpan_);
      DARABONBA_PTR_TO_JSON(LogMap, logMap_);
      DARABONBA_PTR_TO_JSON(LogTime, logTime_);
      DARABONBA_PTR_TO_JSON(ParentSpanId, parentSpanId_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(Rpc, rpc_);
      DARABONBA_PTR_TO_JSON(RpcId, rpcId_);
      DARABONBA_PTR_TO_JSON(RpcType, rpcType_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(Span, span_);
      DARABONBA_PTR_TO_JSON(SpanId, spanId_);
      DARABONBA_PTR_TO_JSON(TagMap, tagMap_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CallChainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(HaveSpan, haveSpan_);
      DARABONBA_PTR_FROM_JSON(LogMap, logMap_);
      DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
      DARABONBA_PTR_FROM_JSON(ParentSpanId, parentSpanId_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(Rpc, rpc_);
      DARABONBA_PTR_FROM_JSON(RpcId, rpcId_);
      DARABONBA_PTR_FROM_JSON(RpcType, rpcType_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(Span, span_);
      DARABONBA_PTR_FROM_JSON(SpanId, spanId_);
      DARABONBA_PTR_FROM_JSON(TagMap, tagMap_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CallChainInfo() = default ;
    CallChainInfo(const CallChainInfo &) = default ;
    CallChainInfo(CallChainInfo &&) = default ;
    CallChainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CallChainInfo() = default ;
    CallChainInfo& operator=(const CallChainInfo &) = default ;
    CallChainInfo& operator=(CallChainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalInfo_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->children_ != nullptr && this->haveSpan_ != nullptr && this->logMap_ != nullptr
        && this->logTime_ != nullptr && this->parentSpanId_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->resultCode_ != nullptr
        && this->rpc_ != nullptr && this->rpcId_ != nullptr && this->rpcType_ != nullptr && this->serverIp_ != nullptr && this->span_ != nullptr
        && this->spanId_ != nullptr && this->tagMap_ != nullptr && this->traceId_ != nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline string additionalInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalInfo_, "") };
    inline CallChainInfo& setAdditionalInfo(string additionalInfo) { DARABONBA_PTR_SET_VALUE(additionalInfo_, additionalInfo) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CallChainInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CallChainInfo& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<CallChainInfo> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<CallChainInfo>) };
    inline vector<CallChainInfo> children() { DARABONBA_PTR_GET(children_, vector<CallChainInfo>) };
    inline CallChainInfo& setChildren(const vector<CallChainInfo> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline CallChainInfo& setChildren(vector<CallChainInfo> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // haveSpan Field Functions 
    bool hasHaveSpan() const { return this->haveSpan_ != nullptr;};
    void deleteHaveSpan() { this->haveSpan_ = nullptr;};
    inline bool haveSpan() const { DARABONBA_PTR_GET_DEFAULT(haveSpan_, false) };
    inline CallChainInfo& setHaveSpan(bool haveSpan) { DARABONBA_PTR_SET_VALUE(haveSpan_, haveSpan) };


    // logMap Field Functions 
    bool hasLogMap() const { return this->logMap_ != nullptr;};
    void deleteLogMap() { this->logMap_ = nullptr;};
    inline const map<string, Darabonba::Json> & logMap() const { DARABONBA_PTR_GET_CONST(logMap_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> logMap() { DARABONBA_PTR_GET(logMap_, map<string, Darabonba::Json>) };
    inline CallChainInfo& setLogMap(const map<string, Darabonba::Json> & logMap) { DARABONBA_PTR_SET_VALUE(logMap_, logMap) };
    inline CallChainInfo& setLogMap(map<string, Darabonba::Json> && logMap) { DARABONBA_PTR_SET_RVALUE(logMap_, logMap) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline int64_t logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
    inline CallChainInfo& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // parentSpanId Field Functions 
    bool hasParentSpanId() const { return this->parentSpanId_ != nullptr;};
    void deleteParentSpanId() { this->parentSpanId_ = nullptr;};
    inline string parentSpanId() const { DARABONBA_PTR_GET_DEFAULT(parentSpanId_, "") };
    inline CallChainInfo& setParentSpanId(string parentSpanId) { DARABONBA_PTR_SET_VALUE(parentSpanId_, parentSpanId) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CallChainInfo& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CallChainInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CallChainInfo& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // rpc Field Functions 
    bool hasRpc() const { return this->rpc_ != nullptr;};
    void deleteRpc() { this->rpc_ = nullptr;};
    inline string rpc() const { DARABONBA_PTR_GET_DEFAULT(rpc_, "") };
    inline CallChainInfo& setRpc(string rpc) { DARABONBA_PTR_SET_VALUE(rpc_, rpc) };


    // rpcId Field Functions 
    bool hasRpcId() const { return this->rpcId_ != nullptr;};
    void deleteRpcId() { this->rpcId_ = nullptr;};
    inline string rpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
    inline CallChainInfo& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


    // rpcType Field Functions 
    bool hasRpcType() const { return this->rpcType_ != nullptr;};
    void deleteRpcType() { this->rpcType_ = nullptr;};
    inline int64_t rpcType() const { DARABONBA_PTR_GET_DEFAULT(rpcType_, 0L) };
    inline CallChainInfo& setRpcType(int64_t rpcType) { DARABONBA_PTR_SET_VALUE(rpcType_, rpcType) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline CallChainInfo& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // span Field Functions 
    bool hasSpan() const { return this->span_ != nullptr;};
    void deleteSpan() { this->span_ = nullptr;};
    inline int64_t span() const { DARABONBA_PTR_GET_DEFAULT(span_, 0L) };
    inline CallChainInfo& setSpan(int64_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


    // spanId Field Functions 
    bool hasSpanId() const { return this->spanId_ != nullptr;};
    void deleteSpanId() { this->spanId_ = nullptr;};
    inline string spanId() const { DARABONBA_PTR_GET_DEFAULT(spanId_, "") };
    inline CallChainInfo& setSpanId(string spanId) { DARABONBA_PTR_SET_VALUE(spanId_, spanId) };


    // tagMap Field Functions 
    bool hasTagMap() const { return this->tagMap_ != nullptr;};
    void deleteTagMap() { this->tagMap_ = nullptr;};
    inline const map<string, string> & tagMap() const { DARABONBA_PTR_GET_CONST(tagMap_, map<string, string>) };
    inline map<string, string> tagMap() { DARABONBA_PTR_GET(tagMap_, map<string, string>) };
    inline CallChainInfo& setTagMap(const map<string, string> & tagMap) { DARABONBA_PTR_SET_VALUE(tagMap_, tagMap) };
    inline CallChainInfo& setTagMap(map<string, string> && tagMap) { DARABONBA_PTR_SET_RVALUE(tagMap_, tagMap) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CallChainInfo& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> additionalInfo_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<vector<CallChainInfo>> children_ = nullptr;
    std::shared_ptr<bool> haveSpan_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> logMap_ = nullptr;
    std::shared_ptr<int64_t> logTime_ = nullptr;
    std::shared_ptr<string> parentSpanId_ = nullptr;
    std::shared_ptr<string> pid_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> rpc_ = nullptr;
    std::shared_ptr<string> rpcId_ = nullptr;
    std::shared_ptr<int64_t> rpcType_ = nullptr;
    std::shared_ptr<string> serverIp_ = nullptr;
    std::shared_ptr<int64_t> span_ = nullptr;
    std::shared_ptr<string> spanId_ = nullptr;
    std::shared_ptr<map<string, string>> tagMap_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
