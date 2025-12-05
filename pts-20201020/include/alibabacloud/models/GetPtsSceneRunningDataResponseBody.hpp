// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERUNNINGDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneRunningDataResponseBodyAgentLocation.hpp>
#include <alibabacloud/models/GetPtsSceneRunningDataResponseBodyChainMonitorDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneRunningDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneRunningDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentLocation, agentLocation_);
      DARABONBA_PTR_TO_JSON(AliveAgents, aliveAgents_);
      DARABONBA_PTR_TO_JSON(AverageRt, averageRt_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ChainMonitorDataList, chainMonitorDataList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ConcurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_TO_JSON(FailedBusinessCount, failedBusinessCount_);
      DARABONBA_PTR_TO_JSON(FailedRequestCount, failedRequestCount_);
      DARABONBA_PTR_TO_JSON(HasReport, hasReport_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestBps, requestBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseBps, responseBps_);
      DARABONBA_PTR_TO_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_TO_JSON(TotalRealQps, totalRealQps_);
      DARABONBA_PTR_TO_JSON(TotalRequestCount, totalRequestCount_);
      DARABONBA_PTR_TO_JSON(TpsLimit, tpsLimit_);
      DARABONBA_PTR_TO_JSON(Vum, vum_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneRunningDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentLocation, agentLocation_);
      DARABONBA_PTR_FROM_JSON(AliveAgents, aliveAgents_);
      DARABONBA_PTR_FROM_JSON(AverageRt, averageRt_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ChainMonitorDataList, chainMonitorDataList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ConcurrencyLimit, concurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(FailedBusinessCount, failedBusinessCount_);
      DARABONBA_PTR_FROM_JSON(FailedRequestCount, failedRequestCount_);
      DARABONBA_PTR_FROM_JSON(HasReport, hasReport_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestBps, requestBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseBps, responseBps_);
      DARABONBA_PTR_FROM_JSON(Seg90Rt, seg90Rt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
      DARABONBA_PTR_FROM_JSON(TotalRealQps, totalRealQps_);
      DARABONBA_PTR_FROM_JSON(TotalRequestCount, totalRequestCount_);
      DARABONBA_PTR_FROM_JSON(TpsLimit, tpsLimit_);
      DARABONBA_PTR_FROM_JSON(Vum, vum_);
    };
    GetPtsSceneRunningDataResponseBody() = default ;
    GetPtsSceneRunningDataResponseBody(const GetPtsSceneRunningDataResponseBody &) = default ;
    GetPtsSceneRunningDataResponseBody(GetPtsSceneRunningDataResponseBody &&) = default ;
    GetPtsSceneRunningDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneRunningDataResponseBody() = default ;
    GetPtsSceneRunningDataResponseBody& operator=(const GetPtsSceneRunningDataResponseBody &) = default ;
    GetPtsSceneRunningDataResponseBody& operator=(GetPtsSceneRunningDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentLocation_ == nullptr
        && return this->aliveAgents_ == nullptr && return this->averageRt_ == nullptr && return this->beginTime_ == nullptr && return this->chainMonitorDataList_ == nullptr && return this->code_ == nullptr
        && return this->concurrency_ == nullptr && return this->concurrencyLimit_ == nullptr && return this->failedBusinessCount_ == nullptr && return this->failedRequestCount_ == nullptr && return this->hasReport_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestBps_ == nullptr && return this->requestId_ == nullptr && return this->responseBps_ == nullptr
        && return this->seg90Rt_ == nullptr && return this->status_ == nullptr && return this->success_ == nullptr && return this->totalAgents_ == nullptr && return this->totalRealQps_ == nullptr
        && return this->totalRequestCount_ == nullptr && return this->tpsLimit_ == nullptr && return this->vum_ == nullptr; };
    // agentLocation Field Functions 
    bool hasAgentLocation() const { return this->agentLocation_ != nullptr;};
    void deleteAgentLocation() { this->agentLocation_ = nullptr;};
    inline const vector<GetPtsSceneRunningDataResponseBodyAgentLocation> & agentLocation() const { DARABONBA_PTR_GET_CONST(agentLocation_, vector<GetPtsSceneRunningDataResponseBodyAgentLocation>) };
    inline vector<GetPtsSceneRunningDataResponseBodyAgentLocation> agentLocation() { DARABONBA_PTR_GET(agentLocation_, vector<GetPtsSceneRunningDataResponseBodyAgentLocation>) };
    inline GetPtsSceneRunningDataResponseBody& setAgentLocation(const vector<GetPtsSceneRunningDataResponseBodyAgentLocation> & agentLocation) { DARABONBA_PTR_SET_VALUE(agentLocation_, agentLocation) };
    inline GetPtsSceneRunningDataResponseBody& setAgentLocation(vector<GetPtsSceneRunningDataResponseBodyAgentLocation> && agentLocation) { DARABONBA_PTR_SET_RVALUE(agentLocation_, agentLocation) };


    // aliveAgents Field Functions 
    bool hasAliveAgents() const { return this->aliveAgents_ != nullptr;};
    void deleteAliveAgents() { this->aliveAgents_ = nullptr;};
    inline int32_t aliveAgents() const { DARABONBA_PTR_GET_DEFAULT(aliveAgents_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setAliveAgents(int32_t aliveAgents) { DARABONBA_PTR_SET_VALUE(aliveAgents_, aliveAgents) };


    // averageRt Field Functions 
    bool hasAverageRt() const { return this->averageRt_ != nullptr;};
    void deleteAverageRt() { this->averageRt_ = nullptr;};
    inline int64_t averageRt() const { DARABONBA_PTR_GET_DEFAULT(averageRt_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setAverageRt(int64_t averageRt) { DARABONBA_PTR_SET_VALUE(averageRt_, averageRt) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // chainMonitorDataList Field Functions 
    bool hasChainMonitorDataList() const { return this->chainMonitorDataList_ != nullptr;};
    void deleteChainMonitorDataList() { this->chainMonitorDataList_ = nullptr;};
    inline const vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList> & chainMonitorDataList() const { DARABONBA_PTR_GET_CONST(chainMonitorDataList_, vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList>) };
    inline vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList> chainMonitorDataList() { DARABONBA_PTR_GET(chainMonitorDataList_, vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList>) };
    inline GetPtsSceneRunningDataResponseBody& setChainMonitorDataList(const vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList> & chainMonitorDataList) { DARABONBA_PTR_SET_VALUE(chainMonitorDataList_, chainMonitorDataList) };
    inline GetPtsSceneRunningDataResponseBody& setChainMonitorDataList(vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList> && chainMonitorDataList) { DARABONBA_PTR_SET_RVALUE(chainMonitorDataList_, chainMonitorDataList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPtsSceneRunningDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // concurrencyLimit Field Functions 
    bool hasConcurrencyLimit() const { return this->concurrencyLimit_ != nullptr;};
    void deleteConcurrencyLimit() { this->concurrencyLimit_ = nullptr;};
    inline int32_t concurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(concurrencyLimit_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setConcurrencyLimit(int32_t concurrencyLimit) { DARABONBA_PTR_SET_VALUE(concurrencyLimit_, concurrencyLimit) };


    // failedBusinessCount Field Functions 
    bool hasFailedBusinessCount() const { return this->failedBusinessCount_ != nullptr;};
    void deleteFailedBusinessCount() { this->failedBusinessCount_ = nullptr;};
    inline int64_t failedBusinessCount() const { DARABONBA_PTR_GET_DEFAULT(failedBusinessCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setFailedBusinessCount(int64_t failedBusinessCount) { DARABONBA_PTR_SET_VALUE(failedBusinessCount_, failedBusinessCount) };


    // failedRequestCount Field Functions 
    bool hasFailedRequestCount() const { return this->failedRequestCount_ != nullptr;};
    void deleteFailedRequestCount() { this->failedRequestCount_ = nullptr;};
    inline int64_t failedRequestCount() const { DARABONBA_PTR_GET_DEFAULT(failedRequestCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setFailedRequestCount(int64_t failedRequestCount) { DARABONBA_PTR_SET_VALUE(failedRequestCount_, failedRequestCount) };


    // hasReport Field Functions 
    bool hasHasReport() const { return this->hasReport_ != nullptr;};
    void deleteHasReport() { this->hasReport_ = nullptr;};
    inline bool hasReport() const { DARABONBA_PTR_GET_DEFAULT(hasReport_, false) };
    inline GetPtsSceneRunningDataResponseBody& setHasReport(bool hasReport) { DARABONBA_PTR_SET_VALUE(hasReport_, hasReport) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPtsSceneRunningDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestBps Field Functions 
    bool hasRequestBps() const { return this->requestBps_ != nullptr;};
    void deleteRequestBps() { this->requestBps_ = nullptr;};
    inline string requestBps() const { DARABONBA_PTR_GET_DEFAULT(requestBps_, "") };
    inline GetPtsSceneRunningDataResponseBody& setRequestBps(string requestBps) { DARABONBA_PTR_SET_VALUE(requestBps_, requestBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPtsSceneRunningDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseBps Field Functions 
    bool hasResponseBps() const { return this->responseBps_ != nullptr;};
    void deleteResponseBps() { this->responseBps_ = nullptr;};
    inline string responseBps() const { DARABONBA_PTR_GET_DEFAULT(responseBps_, "") };
    inline GetPtsSceneRunningDataResponseBody& setResponseBps(string responseBps) { DARABONBA_PTR_SET_VALUE(responseBps_, responseBps) };


    // seg90Rt Field Functions 
    bool hasSeg90Rt() const { return this->seg90Rt_ != nullptr;};
    void deleteSeg90Rt() { this->seg90Rt_ = nullptr;};
    inline int64_t seg90Rt() const { DARABONBA_PTR_GET_DEFAULT(seg90Rt_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setSeg90Rt(int64_t seg90Rt) { DARABONBA_PTR_SET_VALUE(seg90Rt_, seg90Rt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPtsSceneRunningDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalAgents Field Functions 
    bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
    void deleteTotalAgents() { this->totalAgents_ = nullptr;};
    inline int32_t totalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setTotalAgents(int32_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


    // totalRealQps Field Functions 
    bool hasTotalRealQps() const { return this->totalRealQps_ != nullptr;};
    void deleteTotalRealQps() { this->totalRealQps_ = nullptr;};
    inline int32_t totalRealQps() const { DARABONBA_PTR_GET_DEFAULT(totalRealQps_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setTotalRealQps(int32_t totalRealQps) { DARABONBA_PTR_SET_VALUE(totalRealQps_, totalRealQps) };


    // totalRequestCount Field Functions 
    bool hasTotalRequestCount() const { return this->totalRequestCount_ != nullptr;};
    void deleteTotalRequestCount() { this->totalRequestCount_ = nullptr;};
    inline int64_t totalRequestCount() const { DARABONBA_PTR_GET_DEFAULT(totalRequestCount_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setTotalRequestCount(int64_t totalRequestCount) { DARABONBA_PTR_SET_VALUE(totalRequestCount_, totalRequestCount) };


    // tpsLimit Field Functions 
    bool hasTpsLimit() const { return this->tpsLimit_ != nullptr;};
    void deleteTpsLimit() { this->tpsLimit_ = nullptr;};
    inline int32_t tpsLimit() const { DARABONBA_PTR_GET_DEFAULT(tpsLimit_, 0) };
    inline GetPtsSceneRunningDataResponseBody& setTpsLimit(int32_t tpsLimit) { DARABONBA_PTR_SET_VALUE(tpsLimit_, tpsLimit) };


    // vum Field Functions 
    bool hasVum() const { return this->vum_ != nullptr;};
    void deleteVum() { this->vum_ = nullptr;};
    inline int64_t vum() const { DARABONBA_PTR_GET_DEFAULT(vum_, 0L) };
    inline GetPtsSceneRunningDataResponseBody& setVum(int64_t vum) { DARABONBA_PTR_SET_VALUE(vum_, vum) };


  protected:
    // The location information of stress testers.
    std::shared_ptr<vector<GetPtsSceneRunningDataResponseBodyAgentLocation>> agentLocation_ = nullptr;
    // The number of healthy engines.
    std::shared_ptr<int32_t> aliveAgents_ = nullptr;
    // The average RT.
    std::shared_ptr<int64_t> averageRt_ = nullptr;
    // The start time of the stress testing that is displayed as a timestamp. Unit: ms.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The stress testing details of the GetPtsSceneRunningData operation.
    std::shared_ptr<vector<GetPtsSceneRunningDataResponseBodyChainMonitorDataList>> chainMonitorDataList_ = nullptr;
    // The system status code. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The total concurrency.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // The maximum concurrency.
    std::shared_ptr<int32_t> concurrencyLimit_ = nullptr;
    // The total number of failed businesses.
    std::shared_ptr<int64_t> failedBusinessCount_ = nullptr;
    // The number of failed requests.
    std::shared_ptr<int64_t> failedRequestCount_ = nullptr;
    // Indicates whether a report is generated.
    std::shared_ptr<bool> hasReport_ = nullptr;
    // The HTTP status code. If the request was successful, this parameter is not returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The size of the request body.
    std::shared_ptr<string> requestBps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The size of the response body.
    std::shared_ptr<string> responseBps_ = nullptr;
    // The 90th percentile of reaction time (RT).
    std::shared_ptr<int64_t> seg90Rt_ = nullptr;
    // The scenario status. The default parameter value is 7.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of stress testers.
    std::shared_ptr<int32_t> totalAgents_ = nullptr;
    // The total number of queries per second (QPS).
    std::shared_ptr<int32_t> totalRealQps_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> totalRequestCount_ = nullptr;
    // The maximum transactions per second (TPS).
    std::shared_ptr<int32_t> tpsLimit_ = nullptr;
    // The consumed Virtual User Minutes (VUM).
    std::shared_ptr<int64_t> vum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
