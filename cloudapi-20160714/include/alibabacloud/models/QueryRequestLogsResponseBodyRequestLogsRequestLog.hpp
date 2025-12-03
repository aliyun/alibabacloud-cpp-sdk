// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODYREQUESTLOGSREQUESTLOG_HPP_
#define ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODYREQUESTLOGSREQUESTLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class QueryRequestLogsResponseBodyRequestLogsRequestLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRequestLogsResponseBodyRequestLogsRequestLog& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BackendRequestEnd, backendRequestEnd_);
      DARABONBA_PTR_TO_JSON(BackendRequestStart, backendRequestStart_);
      DARABONBA_PTR_TO_JSON(BackendResponseEnd, backendResponseEnd_);
      DARABONBA_PTR_TO_JSON(BackendResponseStart, backendResponseStart_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientNonce, clientNonce_);
      DARABONBA_PTR_TO_JSON(ConsumerAppId, consumerAppId_);
      DARABONBA_PTR_TO_JSON(ConsumerAppKey, consumerAppKey_);
      DARABONBA_PTR_TO_JSON(CustomTraceId, customTraceId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(FrontRequestEnd, frontRequestEnd_);
      DARABONBA_PTR_TO_JSON(FrontRequestStart, frontRequestStart_);
      DARABONBA_PTR_TO_JSON(FrontResponseEnd, frontResponseEnd_);
      DARABONBA_PTR_TO_JSON(FrontResponseStart, frontResponseStart_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_TO_JSON(InitialRequestId, initialRequestId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JwtClaims, jwtClaims_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestProtocol, requestProtocol_);
      DARABONBA_PTR_TO_JSON(RequestQueryString, requestQueryString_);
      DARABONBA_PTR_TO_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(ResponseBody, responseBody_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_TO_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_TO_JSON(ServiceLatency, serviceLatency_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(TotalLatency, totalLatency_);
      DARABONBA_PTR_TO_JSON(plugin, plugin_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRequestLogsResponseBodyRequestLogsRequestLog& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BackendRequestEnd, backendRequestEnd_);
      DARABONBA_PTR_FROM_JSON(BackendRequestStart, backendRequestStart_);
      DARABONBA_PTR_FROM_JSON(BackendResponseEnd, backendResponseEnd_);
      DARABONBA_PTR_FROM_JSON(BackendResponseStart, backendResponseStart_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientNonce, clientNonce_);
      DARABONBA_PTR_FROM_JSON(ConsumerAppId, consumerAppId_);
      DARABONBA_PTR_FROM_JSON(ConsumerAppKey, consumerAppKey_);
      DARABONBA_PTR_FROM_JSON(CustomTraceId, customTraceId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(FrontRequestEnd, frontRequestEnd_);
      DARABONBA_PTR_FROM_JSON(FrontRequestStart, frontRequestStart_);
      DARABONBA_PTR_FROM_JSON(FrontResponseEnd, frontResponseEnd_);
      DARABONBA_PTR_FROM_JSON(FrontResponseStart, frontResponseStart_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_FROM_JSON(InitialRequestId, initialRequestId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JwtClaims, jwtClaims_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestProtocol, requestProtocol_);
      DARABONBA_PTR_FROM_JSON(RequestQueryString, requestQueryString_);
      DARABONBA_PTR_FROM_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(ResponseBody, responseBody_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_FROM_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_FROM_JSON(ServiceLatency, serviceLatency_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(TotalLatency, totalLatency_);
      DARABONBA_PTR_FROM_JSON(plugin, plugin_);
    };
    QueryRequestLogsResponseBodyRequestLogsRequestLog() = default ;
    QueryRequestLogsResponseBodyRequestLogsRequestLog(const QueryRequestLogsResponseBodyRequestLogsRequestLog &) = default ;
    QueryRequestLogsResponseBodyRequestLogsRequestLog(QueryRequestLogsResponseBodyRequestLogsRequestLog &&) = default ;
    QueryRequestLogsResponseBodyRequestLogsRequestLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRequestLogsResponseBodyRequestLogsRequestLog() = default ;
    QueryRequestLogsResponseBodyRequestLogsRequestLog& operator=(const QueryRequestLogsResponseBodyRequestLogsRequestLog &) = default ;
    QueryRequestLogsResponseBodyRequestLogsRequestLog& operator=(QueryRequestLogsResponseBodyRequestLogsRequestLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->appName_ == nullptr && return this->backendRequestEnd_ == nullptr && return this->backendRequestStart_ == nullptr && return this->backendResponseEnd_ == nullptr
        && return this->backendResponseStart_ == nullptr && return this->clientIp_ == nullptr && return this->clientNonce_ == nullptr && return this->consumerAppId_ == nullptr && return this->consumerAppKey_ == nullptr
        && return this->customTraceId_ == nullptr && return this->domain_ == nullptr && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->exception_ == nullptr
        && return this->frontRequestEnd_ == nullptr && return this->frontRequestStart_ == nullptr && return this->frontResponseEnd_ == nullptr && return this->frontResponseStart_ == nullptr && return this->groupId_ == nullptr
        && return this->groupName_ == nullptr && return this->httpMethod_ == nullptr && return this->httpPath_ == nullptr && return this->initialRequestId_ == nullptr && return this->instanceId_ == nullptr
        && return this->jwtClaims_ == nullptr && return this->region_ == nullptr && return this->requestBody_ == nullptr && return this->requestHeaders_ == nullptr && return this->requestId_ == nullptr
        && return this->requestProtocol_ == nullptr && return this->requestQueryString_ == nullptr && return this->requestSize_ == nullptr && return this->requestTime_ == nullptr && return this->responseBody_ == nullptr
        && return this->responseHeaders_ == nullptr && return this->responseSize_ == nullptr && return this->serviceLatency_ == nullptr && return this->stageId_ == nullptr && return this->stageName_ == nullptr
        && return this->statusCode_ == nullptr && return this->totalLatency_ == nullptr && return this->plugin_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // backendRequestEnd Field Functions 
    bool hasBackendRequestEnd() const { return this->backendRequestEnd_ != nullptr;};
    void deleteBackendRequestEnd() { this->backendRequestEnd_ = nullptr;};
    inline int64_t backendRequestEnd() const { DARABONBA_PTR_GET_DEFAULT(backendRequestEnd_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setBackendRequestEnd(int64_t backendRequestEnd) { DARABONBA_PTR_SET_VALUE(backendRequestEnd_, backendRequestEnd) };


    // backendRequestStart Field Functions 
    bool hasBackendRequestStart() const { return this->backendRequestStart_ != nullptr;};
    void deleteBackendRequestStart() { this->backendRequestStart_ = nullptr;};
    inline int64_t backendRequestStart() const { DARABONBA_PTR_GET_DEFAULT(backendRequestStart_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setBackendRequestStart(int64_t backendRequestStart) { DARABONBA_PTR_SET_VALUE(backendRequestStart_, backendRequestStart) };


    // backendResponseEnd Field Functions 
    bool hasBackendResponseEnd() const { return this->backendResponseEnd_ != nullptr;};
    void deleteBackendResponseEnd() { this->backendResponseEnd_ = nullptr;};
    inline int64_t backendResponseEnd() const { DARABONBA_PTR_GET_DEFAULT(backendResponseEnd_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setBackendResponseEnd(int64_t backendResponseEnd) { DARABONBA_PTR_SET_VALUE(backendResponseEnd_, backendResponseEnd) };


    // backendResponseStart Field Functions 
    bool hasBackendResponseStart() const { return this->backendResponseStart_ != nullptr;};
    void deleteBackendResponseStart() { this->backendResponseStart_ = nullptr;};
    inline int64_t backendResponseStart() const { DARABONBA_PTR_GET_DEFAULT(backendResponseStart_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setBackendResponseStart(int64_t backendResponseStart) { DARABONBA_PTR_SET_VALUE(backendResponseStart_, backendResponseStart) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientNonce Field Functions 
    bool hasClientNonce() const { return this->clientNonce_ != nullptr;};
    void deleteClientNonce() { this->clientNonce_ = nullptr;};
    inline string clientNonce() const { DARABONBA_PTR_GET_DEFAULT(clientNonce_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setClientNonce(string clientNonce) { DARABONBA_PTR_SET_VALUE(clientNonce_, clientNonce) };


    // consumerAppId Field Functions 
    bool hasConsumerAppId() const { return this->consumerAppId_ != nullptr;};
    void deleteConsumerAppId() { this->consumerAppId_ = nullptr;};
    inline string consumerAppId() const { DARABONBA_PTR_GET_DEFAULT(consumerAppId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setConsumerAppId(string consumerAppId) { DARABONBA_PTR_SET_VALUE(consumerAppId_, consumerAppId) };


    // consumerAppKey Field Functions 
    bool hasConsumerAppKey() const { return this->consumerAppKey_ != nullptr;};
    void deleteConsumerAppKey() { this->consumerAppKey_ = nullptr;};
    inline string consumerAppKey() const { DARABONBA_PTR_GET_DEFAULT(consumerAppKey_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setConsumerAppKey(string consumerAppKey) { DARABONBA_PTR_SET_VALUE(consumerAppKey_, consumerAppKey) };


    // customTraceId Field Functions 
    bool hasCustomTraceId() const { return this->customTraceId_ != nullptr;};
    void deleteCustomTraceId() { this->customTraceId_ = nullptr;};
    inline string customTraceId() const { DARABONBA_PTR_GET_DEFAULT(customTraceId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setCustomTraceId(string customTraceId) { DARABONBA_PTR_SET_VALUE(customTraceId_, customTraceId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // frontRequestEnd Field Functions 
    bool hasFrontRequestEnd() const { return this->frontRequestEnd_ != nullptr;};
    void deleteFrontRequestEnd() { this->frontRequestEnd_ = nullptr;};
    inline int64_t frontRequestEnd() const { DARABONBA_PTR_GET_DEFAULT(frontRequestEnd_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setFrontRequestEnd(int64_t frontRequestEnd) { DARABONBA_PTR_SET_VALUE(frontRequestEnd_, frontRequestEnd) };


    // frontRequestStart Field Functions 
    bool hasFrontRequestStart() const { return this->frontRequestStart_ != nullptr;};
    void deleteFrontRequestStart() { this->frontRequestStart_ = nullptr;};
    inline int64_t frontRequestStart() const { DARABONBA_PTR_GET_DEFAULT(frontRequestStart_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setFrontRequestStart(int64_t frontRequestStart) { DARABONBA_PTR_SET_VALUE(frontRequestStart_, frontRequestStart) };


    // frontResponseEnd Field Functions 
    bool hasFrontResponseEnd() const { return this->frontResponseEnd_ != nullptr;};
    void deleteFrontResponseEnd() { this->frontResponseEnd_ = nullptr;};
    inline int64_t frontResponseEnd() const { DARABONBA_PTR_GET_DEFAULT(frontResponseEnd_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setFrontResponseEnd(int64_t frontResponseEnd) { DARABONBA_PTR_SET_VALUE(frontResponseEnd_, frontResponseEnd) };


    // frontResponseStart Field Functions 
    bool hasFrontResponseStart() const { return this->frontResponseStart_ != nullptr;};
    void deleteFrontResponseStart() { this->frontResponseStart_ = nullptr;};
    inline int64_t frontResponseStart() const { DARABONBA_PTR_GET_DEFAULT(frontResponseStart_, 0L) };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setFrontResponseStart(int64_t frontResponseStart) { DARABONBA_PTR_SET_VALUE(frontResponseStart_, frontResponseStart) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string httpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // initialRequestId Field Functions 
    bool hasInitialRequestId() const { return this->initialRequestId_ != nullptr;};
    void deleteInitialRequestId() { this->initialRequestId_ = nullptr;};
    inline string initialRequestId() const { DARABONBA_PTR_GET_DEFAULT(initialRequestId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setInitialRequestId(string initialRequestId) { DARABONBA_PTR_SET_VALUE(initialRequestId_, initialRequestId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jwtClaims Field Functions 
    bool hasJwtClaims() const { return this->jwtClaims_ != nullptr;};
    void deleteJwtClaims() { this->jwtClaims_ = nullptr;};
    inline string jwtClaims() const { DARABONBA_PTR_GET_DEFAULT(jwtClaims_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setJwtClaims(string jwtClaims) { DARABONBA_PTR_SET_VALUE(jwtClaims_, jwtClaims) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string requestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline string requestHeaders() const { DARABONBA_PTR_GET_DEFAULT(requestHeaders_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestHeaders(string requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestProtocol Field Functions 
    bool hasRequestProtocol() const { return this->requestProtocol_ != nullptr;};
    void deleteRequestProtocol() { this->requestProtocol_ = nullptr;};
    inline string requestProtocol() const { DARABONBA_PTR_GET_DEFAULT(requestProtocol_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestProtocol(string requestProtocol) { DARABONBA_PTR_SET_VALUE(requestProtocol_, requestProtocol) };


    // requestQueryString Field Functions 
    bool hasRequestQueryString() const { return this->requestQueryString_ != nullptr;};
    void deleteRequestQueryString() { this->requestQueryString_ = nullptr;};
    inline string requestQueryString() const { DARABONBA_PTR_GET_DEFAULT(requestQueryString_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestQueryString(string requestQueryString) { DARABONBA_PTR_SET_VALUE(requestQueryString_, requestQueryString) };


    // requestSize Field Functions 
    bool hasRequestSize() const { return this->requestSize_ != nullptr;};
    void deleteRequestSize() { this->requestSize_ = nullptr;};
    inline string requestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestSize(string requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // responseBody Field Functions 
    bool hasResponseBody() const { return this->responseBody_ != nullptr;};
    void deleteResponseBody() { this->responseBody_ = nullptr;};
    inline string responseBody() const { DARABONBA_PTR_GET_DEFAULT(responseBody_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setResponseBody(string responseBody) { DARABONBA_PTR_SET_VALUE(responseBody_, responseBody) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline string responseHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseHeaders_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setResponseHeaders(string responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };


    // responseSize Field Functions 
    bool hasResponseSize() const { return this->responseSize_ != nullptr;};
    void deleteResponseSize() { this->responseSize_ = nullptr;};
    inline string responseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setResponseSize(string responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


    // serviceLatency Field Functions 
    bool hasServiceLatency() const { return this->serviceLatency_ != nullptr;};
    void deleteServiceLatency() { this->serviceLatency_ = nullptr;};
    inline string serviceLatency() const { DARABONBA_PTR_GET_DEFAULT(serviceLatency_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setServiceLatency(string serviceLatency) { DARABONBA_PTR_SET_VALUE(serviceLatency_, serviceLatency) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // totalLatency Field Functions 
    bool hasTotalLatency() const { return this->totalLatency_ != nullptr;};
    void deleteTotalLatency() { this->totalLatency_ = nullptr;};
    inline string totalLatency() const { DARABONBA_PTR_GET_DEFAULT(totalLatency_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setTotalLatency(string totalLatency) { DARABONBA_PTR_SET_VALUE(totalLatency_, totalLatency) };


    // plugin Field Functions 
    bool hasPlugin() const { return this->plugin_ != nullptr;};
    void deletePlugin() { this->plugin_ = nullptr;};
    inline string plugin() const { DARABONBA_PTR_GET_DEFAULT(plugin_, "") };
    inline QueryRequestLogsResponseBodyRequestLogsRequestLog& setPlugin(string plugin) { DARABONBA_PTR_SET_VALUE(plugin_, plugin) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when API Gateway finished forwarding the request to the backend service.
    std::shared_ptr<int64_t> backendRequestEnd_ = nullptr;
    // The time when API Gateway started to forward the request to the backend service.
    std::shared_ptr<int64_t> backendRequestStart_ = nullptr;
    // The time when API Gateway finished receiving the response from the backend service.
    std::shared_ptr<int64_t> backendResponseEnd_ = nullptr;
    // The time when API Gateway started to receive the response from the backend service.
    std::shared_ptr<int64_t> backendResponseStart_ = nullptr;
    // The IP address of the client that sends the request.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The X-Ca-Nonce header included in the request from the client.
    std::shared_ptr<string> clientNonce_ = nullptr;
    // The application ID that is used by the caller.
    std::shared_ptr<string> consumerAppId_ = nullptr;
    // The App Key that is used by the caller.
    std::shared_ptr<string> consumerAppKey_ = nullptr;
    // The custom trace ID.
    std::shared_ptr<string> customTraceId_ = nullptr;
    // The requested domain name in the request.
    std::shared_ptr<string> domain_ = nullptr;
    // The error code that is returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the call fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The specific error message returned by the backend service.
    std::shared_ptr<string> exception_ = nullptr;
    // The time when API Gateway finished receiving the request.
    std::shared_ptr<int64_t> frontRequestEnd_ = nullptr;
    // The time when API Gateway started to receive the request.
    std::shared_ptr<int64_t> frontRequestStart_ = nullptr;
    // The time when API Gateway finished forwarding the response to the client.
    std::shared_ptr<int64_t> frontResponseEnd_ = nullptr;
    // The time when API Gateway started to forward the response to the client.
    std::shared_ptr<int64_t> frontResponseStart_ = nullptr;
    // The ID of the API group to which the API belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The HTTP method that is used to send the request.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The path of the request.
    std::shared_ptr<string> httpPath_ = nullptr;
    // The initial request ID when API Gateway calls an API. For example, if API-1 calls API-2, the initialRequestId parameter in the log of API-2 indicates the ID of the request from API-1.
    std::shared_ptr<string> initialRequestId_ = nullptr;
    // The ID of the API Gateway instance to which the API belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The JSON web token (JWT) claims. The claims can be configured at the group level.
    std::shared_ptr<string> jwtClaims_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The request body. A request body cannot exceed 1,024 bytes in size.
    std::shared_ptr<string> requestBody_ = nullptr;
    // The request headers.
    std::shared_ptr<string> requestHeaders_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The protocol used by the client to send the request. Valid values: HTTP, HTTPS, and WS.
    std::shared_ptr<string> requestProtocol_ = nullptr;
    // The query string for the request.
    std::shared_ptr<string> requestQueryString_ = nullptr;
    // The size of the request. Unit: bytes.
    std::shared_ptr<string> requestSize_ = nullptr;
    // The request time, in UTC.
    std::shared_ptr<string> requestTime_ = nullptr;
    // The response body. A response body cannot exceed 1,024 bytes in size.
    std::shared_ptr<string> responseBody_ = nullptr;
    // The headers in the API response.
    std::shared_ptr<string> responseHeaders_ = nullptr;
    // The size of returned data. Unit: bytes.
    std::shared_ptr<string> responseSize_ = nullptr;
    // The total time consumed to access the backend resources. The total time includes the time consumed to request a connection to the resources, the time consumed to establish the connection, and the time consumed to call the backend service. Unit: milliseconds.
    std::shared_ptr<string> serviceLatency_ = nullptr;
    // The ID of the API environment.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the API environment.
    std::shared_ptr<string> stageName_ = nullptr;
    // The status code returned.
    std::shared_ptr<string> statusCode_ = nullptr;
    // The total time consumed by the request. Unit: milliseconds.
    std::shared_ptr<string> totalLatency_ = nullptr;
    // The plug-in hit by the request and the relevant context.
    std::shared_ptr<string> plugin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
