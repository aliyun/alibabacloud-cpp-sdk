// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODYPAGERESULTCALLLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSRESPONSEBODYPAGERESULTCALLLOGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallsResponseBodyPageResultCallLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallsResponseBodyPageResultCallLogList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(BizCodeDescription, bizCodeDescription_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ExecuteCostTime, executeCostTime_);
      DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusDescription, httpStatusDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
      DARABONBA_PTR_TO_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_TO_JSON(ResponseParameter, responseParameter_);
      DARABONBA_PTR_TO_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_TO_JSON(ResultCount, resultCount_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Successful, successful_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallsResponseBodyPageResultCallLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(BizCodeDescription, bizCodeDescription_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ExecuteCostTime, executeCostTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusDescription, httpStatusDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
      DARABONBA_PTR_FROM_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_FROM_JSON(ResponseParameter, responseParameter_);
      DARABONBA_PTR_FROM_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_FROM_JSON(ResultCount, resultCount_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Successful, successful_);
    };
    ListDataServiceApiCallsResponseBodyPageResultCallLogList() = default ;
    ListDataServiceApiCallsResponseBodyPageResultCallLogList(const ListDataServiceApiCallsResponseBodyPageResultCallLogList &) = default ;
    ListDataServiceApiCallsResponseBodyPageResultCallLogList(ListDataServiceApiCallsResponseBodyPageResultCallLogList &&) = default ;
    ListDataServiceApiCallsResponseBodyPageResultCallLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallsResponseBodyPageResultCallLogList() = default ;
    ListDataServiceApiCallsResponseBodyPageResultCallLogList& operator=(const ListDataServiceApiCallsResponseBodyPageResultCallLogList &) = default ;
    ListDataServiceApiCallsResponseBodyPageResultCallLogList& operator=(ListDataServiceApiCallsResponseBodyPageResultCallLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->appKey_ == nullptr && return this->appName_ == nullptr && return this->bizCode_ == nullptr && return this->bizCodeDescription_ == nullptr
        && return this->clientIp_ == nullptr && return this->costTime_ == nullptr && return this->endTime_ == nullptr && return this->env_ == nullptr && return this->executeCostTime_ == nullptr
        && return this->executeMode_ == nullptr && return this->httpStatusCode_ == nullptr && return this->httpStatusDescription_ == nullptr && return this->jobId_ == nullptr && return this->projectId_ == nullptr
        && return this->projectName_ == nullptr && return this->requestId_ == nullptr && return this->requestParameter_ == nullptr && return this->requestSize_ == nullptr && return this->responseParameter_ == nullptr
        && return this->responseSize_ == nullptr && return this->resultCount_ == nullptr && return this->sql_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->successful_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizCodeDescription Field Functions 
    bool hasBizCodeDescription() const { return this->bizCodeDescription_ != nullptr;};
    void deleteBizCodeDescription() { this->bizCodeDescription_ = nullptr;};
    inline string bizCodeDescription() const { DARABONBA_PTR_GET_DEFAULT(bizCodeDescription_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setBizCodeDescription(string bizCodeDescription) { DARABONBA_PTR_SET_VALUE(bizCodeDescription_, bizCodeDescription) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline int32_t costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setCostTime(int32_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline int32_t env() const { DARABONBA_PTR_GET_DEFAULT(env_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setEnv(int32_t env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // executeCostTime Field Functions 
    bool hasExecuteCostTime() const { return this->executeCostTime_ != nullptr;};
    void deleteExecuteCostTime() { this->executeCostTime_ = nullptr;};
    inline int32_t executeCostTime() const { DARABONBA_PTR_GET_DEFAULT(executeCostTime_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setExecuteCostTime(int32_t executeCostTime) { DARABONBA_PTR_SET_VALUE(executeCostTime_, executeCostTime) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline int32_t executeMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setExecuteMode(int32_t executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // httpStatusDescription Field Functions 
    bool hasHttpStatusDescription() const { return this->httpStatusDescription_ != nullptr;};
    void deleteHttpStatusDescription() { this->httpStatusDescription_ = nullptr;};
    inline string httpStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(httpStatusDescription_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setHttpStatusDescription(string httpStatusDescription) { DARABONBA_PTR_SET_VALUE(httpStatusDescription_, httpStatusDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameter Field Functions 
    bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
    void deleteRequestParameter() { this->requestParameter_ = nullptr;};
    inline string requestParameter() const { DARABONBA_PTR_GET_DEFAULT(requestParameter_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setRequestParameter(string requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };


    // requestSize Field Functions 
    bool hasRequestSize() const { return this->requestSize_ != nullptr;};
    void deleteRequestSize() { this->requestSize_ = nullptr;};
    inline int32_t requestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setRequestSize(int32_t requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


    // responseParameter Field Functions 
    bool hasResponseParameter() const { return this->responseParameter_ != nullptr;};
    void deleteResponseParameter() { this->responseParameter_ = nullptr;};
    inline string responseParameter() const { DARABONBA_PTR_GET_DEFAULT(responseParameter_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setResponseParameter(string responseParameter) { DARABONBA_PTR_SET_VALUE(responseParameter_, responseParameter) };


    // responseSize Field Functions 
    bool hasResponseSize() const { return this->responseSize_ != nullptr;};
    void deleteResponseSize() { this->responseSize_ = nullptr;};
    inline int32_t responseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setResponseSize(int32_t responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


    // resultCount Field Functions 
    bool hasResultCount() const { return this->resultCount_ != nullptr;};
    void deleteResultCount() { this->resultCount_ = nullptr;};
    inline int32_t resultCount() const { DARABONBA_PTR_GET_DEFAULT(resultCount_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setResultCount(int32_t resultCount) { DARABONBA_PTR_SET_VALUE(resultCount_, resultCount) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successful Field Functions 
    bool hasSuccessful() const { return this->successful_ != nullptr;};
    void deleteSuccessful() { this->successful_ = nullptr;};
    inline bool successful() const { DARABONBA_PTR_GET_DEFAULT(successful_, false) };
    inline ListDataServiceApiCallsResponseBodyPageResultCallLogList& setSuccessful(bool successful) { DARABONBA_PTR_SET_VALUE(successful_, successful) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> bizCodeDescription_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<int32_t> costTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> env_ = nullptr;
    std::shared_ptr<int32_t> executeCostTime_ = nullptr;
    std::shared_ptr<int32_t> executeMode_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    std::shared_ptr<string> httpStatusDescription_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> requestParameter_ = nullptr;
    std::shared_ptr<int32_t> requestSize_ = nullptr;
    std::shared_ptr<string> responseParameter_ = nullptr;
    std::shared_ptr<int32_t> responseSize_ = nullptr;
    std::shared_ptr<int32_t> resultCount_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<bool> successful_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
