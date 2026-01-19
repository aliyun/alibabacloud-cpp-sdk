// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREQUESTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class QueryRequestLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRequestLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestLogs, requestLogs_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRequestLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestLogs, requestLogs_);
    };
    QueryRequestLogsResponseBody() = default ;
    QueryRequestLogsResponseBody(const QueryRequestLogsResponseBody &) = default ;
    QueryRequestLogsResponseBody(QueryRequestLogsResponseBody &&) = default ;
    QueryRequestLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRequestLogsResponseBody() = default ;
    QueryRequestLogsResponseBody& operator=(const QueryRequestLogsResponseBody &) = default ;
    QueryRequestLogsResponseBody& operator=(QueryRequestLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RequestLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestLogs& obj) { 
        DARABONBA_PTR_TO_JSON(RequestLog, requestLog_);
      };
      friend void from_json(const Darabonba::Json& j, RequestLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestLog, requestLog_);
      };
      RequestLogs() = default ;
      RequestLogs(const RequestLogs &) = default ;
      RequestLogs(RequestLogs &&) = default ;
      RequestLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestLogs() = default ;
      RequestLogs& operator=(const RequestLogs &) = default ;
      RequestLogs& operator=(RequestLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestLog& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RequestLog& obj) { 
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
        RequestLog() = default ;
        RequestLog(const RequestLog &) = default ;
        RequestLog(RequestLog &&) = default ;
        RequestLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestLog() = default ;
        RequestLog& operator=(const RequestLog &) = default ;
        RequestLog& operator=(RequestLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->appName_ == nullptr && this->backendRequestEnd_ == nullptr && this->backendRequestStart_ == nullptr && this->backendResponseEnd_ == nullptr
        && this->backendResponseStart_ == nullptr && this->clientIp_ == nullptr && this->clientNonce_ == nullptr && this->consumerAppId_ == nullptr && this->consumerAppKey_ == nullptr
        && this->customTraceId_ == nullptr && this->domain_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->exception_ == nullptr
        && this->frontRequestEnd_ == nullptr && this->frontRequestStart_ == nullptr && this->frontResponseEnd_ == nullptr && this->frontResponseStart_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->httpMethod_ == nullptr && this->httpPath_ == nullptr && this->initialRequestId_ == nullptr && this->instanceId_ == nullptr
        && this->jwtClaims_ == nullptr && this->region_ == nullptr && this->requestBody_ == nullptr && this->requestHeaders_ == nullptr && this->requestId_ == nullptr
        && this->requestProtocol_ == nullptr && this->requestQueryString_ == nullptr && this->requestSize_ == nullptr && this->requestTime_ == nullptr && this->responseBody_ == nullptr
        && this->responseHeaders_ == nullptr && this->responseSize_ == nullptr && this->serviceLatency_ == nullptr && this->stageId_ == nullptr && this->stageName_ == nullptr
        && this->statusCode_ == nullptr && this->totalLatency_ == nullptr && this->plugin_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline RequestLog& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline RequestLog& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline RequestLog& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // backendRequestEnd Field Functions 
        bool hasBackendRequestEnd() const { return this->backendRequestEnd_ != nullptr;};
        void deleteBackendRequestEnd() { this->backendRequestEnd_ = nullptr;};
        inline int64_t getBackendRequestEnd() const { DARABONBA_PTR_GET_DEFAULT(backendRequestEnd_, 0L) };
        inline RequestLog& setBackendRequestEnd(int64_t backendRequestEnd) { DARABONBA_PTR_SET_VALUE(backendRequestEnd_, backendRequestEnd) };


        // backendRequestStart Field Functions 
        bool hasBackendRequestStart() const { return this->backendRequestStart_ != nullptr;};
        void deleteBackendRequestStart() { this->backendRequestStart_ = nullptr;};
        inline int64_t getBackendRequestStart() const { DARABONBA_PTR_GET_DEFAULT(backendRequestStart_, 0L) };
        inline RequestLog& setBackendRequestStart(int64_t backendRequestStart) { DARABONBA_PTR_SET_VALUE(backendRequestStart_, backendRequestStart) };


        // backendResponseEnd Field Functions 
        bool hasBackendResponseEnd() const { return this->backendResponseEnd_ != nullptr;};
        void deleteBackendResponseEnd() { this->backendResponseEnd_ = nullptr;};
        inline int64_t getBackendResponseEnd() const { DARABONBA_PTR_GET_DEFAULT(backendResponseEnd_, 0L) };
        inline RequestLog& setBackendResponseEnd(int64_t backendResponseEnd) { DARABONBA_PTR_SET_VALUE(backendResponseEnd_, backendResponseEnd) };


        // backendResponseStart Field Functions 
        bool hasBackendResponseStart() const { return this->backendResponseStart_ != nullptr;};
        void deleteBackendResponseStart() { this->backendResponseStart_ = nullptr;};
        inline int64_t getBackendResponseStart() const { DARABONBA_PTR_GET_DEFAULT(backendResponseStart_, 0L) };
        inline RequestLog& setBackendResponseStart(int64_t backendResponseStart) { DARABONBA_PTR_SET_VALUE(backendResponseStart_, backendResponseStart) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline RequestLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // clientNonce Field Functions 
        bool hasClientNonce() const { return this->clientNonce_ != nullptr;};
        void deleteClientNonce() { this->clientNonce_ = nullptr;};
        inline string getClientNonce() const { DARABONBA_PTR_GET_DEFAULT(clientNonce_, "") };
        inline RequestLog& setClientNonce(string clientNonce) { DARABONBA_PTR_SET_VALUE(clientNonce_, clientNonce) };


        // consumerAppId Field Functions 
        bool hasConsumerAppId() const { return this->consumerAppId_ != nullptr;};
        void deleteConsumerAppId() { this->consumerAppId_ = nullptr;};
        inline string getConsumerAppId() const { DARABONBA_PTR_GET_DEFAULT(consumerAppId_, "") };
        inline RequestLog& setConsumerAppId(string consumerAppId) { DARABONBA_PTR_SET_VALUE(consumerAppId_, consumerAppId) };


        // consumerAppKey Field Functions 
        bool hasConsumerAppKey() const { return this->consumerAppKey_ != nullptr;};
        void deleteConsumerAppKey() { this->consumerAppKey_ = nullptr;};
        inline string getConsumerAppKey() const { DARABONBA_PTR_GET_DEFAULT(consumerAppKey_, "") };
        inline RequestLog& setConsumerAppKey(string consumerAppKey) { DARABONBA_PTR_SET_VALUE(consumerAppKey_, consumerAppKey) };


        // customTraceId Field Functions 
        bool hasCustomTraceId() const { return this->customTraceId_ != nullptr;};
        void deleteCustomTraceId() { this->customTraceId_ = nullptr;};
        inline string getCustomTraceId() const { DARABONBA_PTR_GET_DEFAULT(customTraceId_, "") };
        inline RequestLog& setCustomTraceId(string customTraceId) { DARABONBA_PTR_SET_VALUE(customTraceId_, customTraceId) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline RequestLog& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline RequestLog& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline RequestLog& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // exception Field Functions 
        bool hasException() const { return this->exception_ != nullptr;};
        void deleteException() { this->exception_ = nullptr;};
        inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
        inline RequestLog& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


        // frontRequestEnd Field Functions 
        bool hasFrontRequestEnd() const { return this->frontRequestEnd_ != nullptr;};
        void deleteFrontRequestEnd() { this->frontRequestEnd_ = nullptr;};
        inline int64_t getFrontRequestEnd() const { DARABONBA_PTR_GET_DEFAULT(frontRequestEnd_, 0L) };
        inline RequestLog& setFrontRequestEnd(int64_t frontRequestEnd) { DARABONBA_PTR_SET_VALUE(frontRequestEnd_, frontRequestEnd) };


        // frontRequestStart Field Functions 
        bool hasFrontRequestStart() const { return this->frontRequestStart_ != nullptr;};
        void deleteFrontRequestStart() { this->frontRequestStart_ = nullptr;};
        inline int64_t getFrontRequestStart() const { DARABONBA_PTR_GET_DEFAULT(frontRequestStart_, 0L) };
        inline RequestLog& setFrontRequestStart(int64_t frontRequestStart) { DARABONBA_PTR_SET_VALUE(frontRequestStart_, frontRequestStart) };


        // frontResponseEnd Field Functions 
        bool hasFrontResponseEnd() const { return this->frontResponseEnd_ != nullptr;};
        void deleteFrontResponseEnd() { this->frontResponseEnd_ = nullptr;};
        inline int64_t getFrontResponseEnd() const { DARABONBA_PTR_GET_DEFAULT(frontResponseEnd_, 0L) };
        inline RequestLog& setFrontResponseEnd(int64_t frontResponseEnd) { DARABONBA_PTR_SET_VALUE(frontResponseEnd_, frontResponseEnd) };


        // frontResponseStart Field Functions 
        bool hasFrontResponseStart() const { return this->frontResponseStart_ != nullptr;};
        void deleteFrontResponseStart() { this->frontResponseStart_ = nullptr;};
        inline int64_t getFrontResponseStart() const { DARABONBA_PTR_GET_DEFAULT(frontResponseStart_, 0L) };
        inline RequestLog& setFrontResponseStart(int64_t frontResponseStart) { DARABONBA_PTR_SET_VALUE(frontResponseStart_, frontResponseStart) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline RequestLog& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline RequestLog& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline RequestLog& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // httpPath Field Functions 
        bool hasHttpPath() const { return this->httpPath_ != nullptr;};
        void deleteHttpPath() { this->httpPath_ = nullptr;};
        inline string getHttpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
        inline RequestLog& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


        // initialRequestId Field Functions 
        bool hasInitialRequestId() const { return this->initialRequestId_ != nullptr;};
        void deleteInitialRequestId() { this->initialRequestId_ = nullptr;};
        inline string getInitialRequestId() const { DARABONBA_PTR_GET_DEFAULT(initialRequestId_, "") };
        inline RequestLog& setInitialRequestId(string initialRequestId) { DARABONBA_PTR_SET_VALUE(initialRequestId_, initialRequestId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RequestLog& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jwtClaims Field Functions 
        bool hasJwtClaims() const { return this->jwtClaims_ != nullptr;};
        void deleteJwtClaims() { this->jwtClaims_ = nullptr;};
        inline string getJwtClaims() const { DARABONBA_PTR_GET_DEFAULT(jwtClaims_, "") };
        inline RequestLog& setJwtClaims(string jwtClaims) { DARABONBA_PTR_SET_VALUE(jwtClaims_, jwtClaims) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RequestLog& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // requestBody Field Functions 
        bool hasRequestBody() const { return this->requestBody_ != nullptr;};
        void deleteRequestBody() { this->requestBody_ = nullptr;};
        inline string getRequestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
        inline RequestLog& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


        // requestHeaders Field Functions 
        bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
        void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
        inline string getRequestHeaders() const { DARABONBA_PTR_GET_DEFAULT(requestHeaders_, "") };
        inline RequestLog& setRequestHeaders(string requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline RequestLog& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // requestProtocol Field Functions 
        bool hasRequestProtocol() const { return this->requestProtocol_ != nullptr;};
        void deleteRequestProtocol() { this->requestProtocol_ = nullptr;};
        inline string getRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(requestProtocol_, "") };
        inline RequestLog& setRequestProtocol(string requestProtocol) { DARABONBA_PTR_SET_VALUE(requestProtocol_, requestProtocol) };


        // requestQueryString Field Functions 
        bool hasRequestQueryString() const { return this->requestQueryString_ != nullptr;};
        void deleteRequestQueryString() { this->requestQueryString_ = nullptr;};
        inline string getRequestQueryString() const { DARABONBA_PTR_GET_DEFAULT(requestQueryString_, "") };
        inline RequestLog& setRequestQueryString(string requestQueryString) { DARABONBA_PTR_SET_VALUE(requestQueryString_, requestQueryString) };


        // requestSize Field Functions 
        bool hasRequestSize() const { return this->requestSize_ != nullptr;};
        void deleteRequestSize() { this->requestSize_ = nullptr;};
        inline string getRequestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, "") };
        inline RequestLog& setRequestSize(string requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


        // requestTime Field Functions 
        bool hasRequestTime() const { return this->requestTime_ != nullptr;};
        void deleteRequestTime() { this->requestTime_ = nullptr;};
        inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
        inline RequestLog& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


        // responseBody Field Functions 
        bool hasResponseBody() const { return this->responseBody_ != nullptr;};
        void deleteResponseBody() { this->responseBody_ = nullptr;};
        inline string getResponseBody() const { DARABONBA_PTR_GET_DEFAULT(responseBody_, "") };
        inline RequestLog& setResponseBody(string responseBody) { DARABONBA_PTR_SET_VALUE(responseBody_, responseBody) };


        // responseHeaders Field Functions 
        bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
        void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
        inline string getResponseHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseHeaders_, "") };
        inline RequestLog& setResponseHeaders(string responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };


        // responseSize Field Functions 
        bool hasResponseSize() const { return this->responseSize_ != nullptr;};
        void deleteResponseSize() { this->responseSize_ = nullptr;};
        inline string getResponseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, "") };
        inline RequestLog& setResponseSize(string responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


        // serviceLatency Field Functions 
        bool hasServiceLatency() const { return this->serviceLatency_ != nullptr;};
        void deleteServiceLatency() { this->serviceLatency_ = nullptr;};
        inline string getServiceLatency() const { DARABONBA_PTR_GET_DEFAULT(serviceLatency_, "") };
        inline RequestLog& setServiceLatency(string serviceLatency) { DARABONBA_PTR_SET_VALUE(serviceLatency_, serviceLatency) };


        // stageId Field Functions 
        bool hasStageId() const { return this->stageId_ != nullptr;};
        void deleteStageId() { this->stageId_ = nullptr;};
        inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
        inline RequestLog& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline RequestLog& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline RequestLog& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // totalLatency Field Functions 
        bool hasTotalLatency() const { return this->totalLatency_ != nullptr;};
        void deleteTotalLatency() { this->totalLatency_ = nullptr;};
        inline string getTotalLatency() const { DARABONBA_PTR_GET_DEFAULT(totalLatency_, "") };
        inline RequestLog& setTotalLatency(string totalLatency) { DARABONBA_PTR_SET_VALUE(totalLatency_, totalLatency) };


        // plugin Field Functions 
        bool hasPlugin() const { return this->plugin_ != nullptr;};
        void deletePlugin() { this->plugin_ = nullptr;};
        inline string getPlugin() const { DARABONBA_PTR_GET_DEFAULT(plugin_, "") };
        inline RequestLog& setPlugin(string plugin) { DARABONBA_PTR_SET_VALUE(plugin_, plugin) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The time when API Gateway finished forwarding the request to the backend service.
        shared_ptr<int64_t> backendRequestEnd_ {};
        // The time when API Gateway started to forward the request to the backend service.
        shared_ptr<int64_t> backendRequestStart_ {};
        // The time when API Gateway finished receiving the response from the backend service.
        shared_ptr<int64_t> backendResponseEnd_ {};
        // The time when API Gateway started to receive the response from the backend service.
        shared_ptr<int64_t> backendResponseStart_ {};
        // The IP address of the client that sends the request.
        shared_ptr<string> clientIp_ {};
        // The X-Ca-Nonce header included in the request from the client.
        shared_ptr<string> clientNonce_ {};
        // The application ID that is used by the caller.
        shared_ptr<string> consumerAppId_ {};
        // The App Key that is used by the caller.
        shared_ptr<string> consumerAppKey_ {};
        // The custom trace ID.
        shared_ptr<string> customTraceId_ {};
        // The requested domain name in the request.
        shared_ptr<string> domain_ {};
        // The error code that is returned.
        shared_ptr<string> errorCode_ {};
        // The error message returned if the call fails.
        shared_ptr<string> errorMessage_ {};
        // The specific error message returned by the backend service.
        shared_ptr<string> exception_ {};
        // The time when API Gateway finished receiving the request.
        shared_ptr<int64_t> frontRequestEnd_ {};
        // The time when API Gateway started to receive the request.
        shared_ptr<int64_t> frontRequestStart_ {};
        // The time when API Gateway finished forwarding the response to the client.
        shared_ptr<int64_t> frontResponseEnd_ {};
        // The time when API Gateway started to forward the response to the client.
        shared_ptr<int64_t> frontResponseStart_ {};
        // The ID of the API group to which the API belongs.
        shared_ptr<string> groupId_ {};
        // The name of the API group to which the API belongs.
        shared_ptr<string> groupName_ {};
        // The HTTP method that is used to send the request.
        shared_ptr<string> httpMethod_ {};
        // The path of the request.
        shared_ptr<string> httpPath_ {};
        // The initial request ID when API Gateway calls an API. For example, if API-1 calls API-2, the initialRequestId parameter in the log of API-2 indicates the ID of the request from API-1.
        shared_ptr<string> initialRequestId_ {};
        // The ID of the API Gateway instance to which the API belongs.
        shared_ptr<string> instanceId_ {};
        // The JSON web token (JWT) claims. The claims can be configured at the group level.
        shared_ptr<string> jwtClaims_ {};
        // The region in which the instance resides.
        shared_ptr<string> region_ {};
        // The request body. A request body cannot exceed 1,024 bytes in size.
        shared_ptr<string> requestBody_ {};
        // The request headers.
        shared_ptr<string> requestHeaders_ {};
        // The request ID.
        shared_ptr<string> requestId_ {};
        // The protocol used by the client to send the request. Valid values: HTTP, HTTPS, and WS.
        shared_ptr<string> requestProtocol_ {};
        // The query string for the request.
        shared_ptr<string> requestQueryString_ {};
        // The size of the request. Unit: bytes.
        shared_ptr<string> requestSize_ {};
        // The request time, in UTC.
        shared_ptr<string> requestTime_ {};
        // The response body. A response body cannot exceed 1,024 bytes in size.
        shared_ptr<string> responseBody_ {};
        // The headers in the API response.
        shared_ptr<string> responseHeaders_ {};
        // The size of returned data. Unit: bytes.
        shared_ptr<string> responseSize_ {};
        // The total time consumed to access the backend resources. The total time includes the time consumed to request a connection to the resources, the time consumed to establish the connection, and the time consumed to call the backend service. Unit: milliseconds.
        shared_ptr<string> serviceLatency_ {};
        // The ID of the API environment.
        shared_ptr<string> stageId_ {};
        // The name of the API environment.
        shared_ptr<string> stageName_ {};
        // The status code returned.
        shared_ptr<string> statusCode_ {};
        // The total time consumed by the request. Unit: milliseconds.
        shared_ptr<string> totalLatency_ {};
        // The plug-in hit by the request and the relevant context.
        shared_ptr<string> plugin_ {};
      };

      virtual bool empty() const override { return this->requestLog_ == nullptr; };
      // requestLog Field Functions 
      bool hasRequestLog() const { return this->requestLog_ != nullptr;};
      void deleteRequestLog() { this->requestLog_ = nullptr;};
      inline const vector<RequestLogs::RequestLog> & getRequestLog() const { DARABONBA_PTR_GET_CONST(requestLog_, vector<RequestLogs::RequestLog>) };
      inline vector<RequestLogs::RequestLog> getRequestLog() { DARABONBA_PTR_GET(requestLog_, vector<RequestLogs::RequestLog>) };
      inline RequestLogs& setRequestLog(const vector<RequestLogs::RequestLog> & requestLog) { DARABONBA_PTR_SET_VALUE(requestLog_, requestLog) };
      inline RequestLogs& setRequestLog(vector<RequestLogs::RequestLog> && requestLog) { DARABONBA_PTR_SET_RVALUE(requestLog_, requestLog) };


    protected:
      shared_ptr<vector<RequestLogs::RequestLog>> requestLog_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->requestLogs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRequestLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestLogs Field Functions 
    bool hasRequestLogs() const { return this->requestLogs_ != nullptr;};
    void deleteRequestLogs() { this->requestLogs_ = nullptr;};
    inline const QueryRequestLogsResponseBody::RequestLogs & getRequestLogs() const { DARABONBA_PTR_GET_CONST(requestLogs_, QueryRequestLogsResponseBody::RequestLogs) };
    inline QueryRequestLogsResponseBody::RequestLogs getRequestLogs() { DARABONBA_PTR_GET(requestLogs_, QueryRequestLogsResponseBody::RequestLogs) };
    inline QueryRequestLogsResponseBody& setRequestLogs(const QueryRequestLogsResponseBody::RequestLogs & requestLogs) { DARABONBA_PTR_SET_VALUE(requestLogs_, requestLogs) };
    inline QueryRequestLogsResponseBody& setRequestLogs(QueryRequestLogsResponseBody::RequestLogs && requestLogs) { DARABONBA_PTR_SET_RVALUE(requestLogs_, requestLogs) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The request logs.
    shared_ptr<QueryRequestLogsResponseBody::RequestLogs> requestLogs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
