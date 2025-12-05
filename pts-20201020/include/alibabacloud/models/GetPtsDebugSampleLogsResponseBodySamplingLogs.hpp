// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSDEBUGSAMPLELOGSRESPONSEBODYSAMPLINGLOGS_HPP_
#define ALIBABACLOUD_MODELS_GETPTSDEBUGSAMPLELOGSRESPONSEBODYSAMPLINGLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsDebugSampleLogsResponseBodySamplingLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsDebugSampleLogsResponseBodySamplingLogs& obj) { 
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(ChainName, chainName_);
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(ExportConfig, exportConfig_);
      DARABONBA_PTR_TO_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_TO_JSON(HttpRequestBody, httpRequestBody_);
      DARABONBA_PTR_TO_JSON(HttpRequestHeaders, httpRequestHeaders_);
      DARABONBA_PTR_TO_JSON(HttpRequestMethod, httpRequestMethod_);
      DARABONBA_PTR_TO_JSON(HttpRequestUrl, httpRequestUrl_);
      DARABONBA_PTR_TO_JSON(HttpResponseBody, httpResponseBody_);
      DARABONBA_PTR_TO_JSON(HttpResponseFailMsg, httpResponseFailMsg_);
      DARABONBA_PTR_TO_JSON(HttpResponseHeaders, httpResponseHeaders_);
      DARABONBA_PTR_TO_JSON(HttpResponseStatus, httpResponseStatus_);
      DARABONBA_PTR_TO_JSON(HttpStartTime, httpStartTime_);
      DARABONBA_PTR_TO_JSON(HttpTiming, httpTiming_);
      DARABONBA_PTR_TO_JSON(ImportContent, importContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsDebugSampleLogsResponseBodySamplingLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(ChainName, chainName_);
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(ExportConfig, exportConfig_);
      DARABONBA_PTR_FROM_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_FROM_JSON(HttpRequestBody, httpRequestBody_);
      DARABONBA_PTR_FROM_JSON(HttpRequestHeaders, httpRequestHeaders_);
      DARABONBA_PTR_FROM_JSON(HttpRequestMethod, httpRequestMethod_);
      DARABONBA_PTR_FROM_JSON(HttpRequestUrl, httpRequestUrl_);
      DARABONBA_PTR_FROM_JSON(HttpResponseBody, httpResponseBody_);
      DARABONBA_PTR_FROM_JSON(HttpResponseFailMsg, httpResponseFailMsg_);
      DARABONBA_PTR_FROM_JSON(HttpResponseHeaders, httpResponseHeaders_);
      DARABONBA_PTR_FROM_JSON(HttpResponseStatus, httpResponseStatus_);
      DARABONBA_PTR_FROM_JSON(HttpStartTime, httpStartTime_);
      DARABONBA_PTR_FROM_JSON(HttpTiming, httpTiming_);
      DARABONBA_PTR_FROM_JSON(ImportContent, importContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetPtsDebugSampleLogsResponseBodySamplingLogs() = default ;
    GetPtsDebugSampleLogsResponseBodySamplingLogs(const GetPtsDebugSampleLogsResponseBodySamplingLogs &) = default ;
    GetPtsDebugSampleLogsResponseBodySamplingLogs(GetPtsDebugSampleLogsResponseBodySamplingLogs &&) = default ;
    GetPtsDebugSampleLogsResponseBodySamplingLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsDebugSampleLogsResponseBodySamplingLogs() = default ;
    GetPtsDebugSampleLogsResponseBodySamplingLogs& operator=(const GetPtsDebugSampleLogsResponseBodySamplingLogs &) = default ;
    GetPtsDebugSampleLogsResponseBodySamplingLogs& operator=(GetPtsDebugSampleLogsResponseBodySamplingLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chainId_ == nullptr
        && return this->chainName_ == nullptr && return this->checkResult_ == nullptr && return this->exportConfig_ == nullptr && return this->exportContent_ == nullptr && return this->httpRequestBody_ == nullptr
        && return this->httpRequestHeaders_ == nullptr && return this->httpRequestMethod_ == nullptr && return this->httpRequestUrl_ == nullptr && return this->httpResponseBody_ == nullptr && return this->httpResponseFailMsg_ == nullptr
        && return this->httpResponseHeaders_ == nullptr && return this->httpResponseStatus_ == nullptr && return this->httpStartTime_ == nullptr && return this->httpTiming_ == nullptr && return this->importContent_ == nullptr
        && return this->nodeId_ == nullptr && return this->rt_ == nullptr && return this->timestamp_ == nullptr; };
    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // chainName Field Functions 
    bool hasChainName() const { return this->chainName_ != nullptr;};
    void deleteChainName() { this->chainName_ = nullptr;};
    inline string chainName() const { DARABONBA_PTR_GET_DEFAULT(chainName_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setChainName(string chainName) { DARABONBA_PTR_SET_VALUE(chainName_, chainName) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline string checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // exportConfig Field Functions 
    bool hasExportConfig() const { return this->exportConfig_ != nullptr;};
    void deleteExportConfig() { this->exportConfig_ = nullptr;};
    inline string exportConfig() const { DARABONBA_PTR_GET_DEFAULT(exportConfig_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setExportConfig(string exportConfig) { DARABONBA_PTR_SET_VALUE(exportConfig_, exportConfig) };


    // exportContent Field Functions 
    bool hasExportContent() const { return this->exportContent_ != nullptr;};
    void deleteExportContent() { this->exportContent_ = nullptr;};
    inline string exportContent() const { DARABONBA_PTR_GET_DEFAULT(exportContent_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setExportContent(string exportContent) { DARABONBA_PTR_SET_VALUE(exportContent_, exportContent) };


    // httpRequestBody Field Functions 
    bool hasHttpRequestBody() const { return this->httpRequestBody_ != nullptr;};
    void deleteHttpRequestBody() { this->httpRequestBody_ = nullptr;};
    inline string httpRequestBody() const { DARABONBA_PTR_GET_DEFAULT(httpRequestBody_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpRequestBody(string httpRequestBody) { DARABONBA_PTR_SET_VALUE(httpRequestBody_, httpRequestBody) };


    // httpRequestHeaders Field Functions 
    bool hasHttpRequestHeaders() const { return this->httpRequestHeaders_ != nullptr;};
    void deleteHttpRequestHeaders() { this->httpRequestHeaders_ = nullptr;};
    inline string httpRequestHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpRequestHeaders_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpRequestHeaders(string httpRequestHeaders) { DARABONBA_PTR_SET_VALUE(httpRequestHeaders_, httpRequestHeaders) };


    // httpRequestMethod Field Functions 
    bool hasHttpRequestMethod() const { return this->httpRequestMethod_ != nullptr;};
    void deleteHttpRequestMethod() { this->httpRequestMethod_ = nullptr;};
    inline string httpRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(httpRequestMethod_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpRequestMethod(string httpRequestMethod) { DARABONBA_PTR_SET_VALUE(httpRequestMethod_, httpRequestMethod) };


    // httpRequestUrl Field Functions 
    bool hasHttpRequestUrl() const { return this->httpRequestUrl_ != nullptr;};
    void deleteHttpRequestUrl() { this->httpRequestUrl_ = nullptr;};
    inline string httpRequestUrl() const { DARABONBA_PTR_GET_DEFAULT(httpRequestUrl_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpRequestUrl(string httpRequestUrl) { DARABONBA_PTR_SET_VALUE(httpRequestUrl_, httpRequestUrl) };


    // httpResponseBody Field Functions 
    bool hasHttpResponseBody() const { return this->httpResponseBody_ != nullptr;};
    void deleteHttpResponseBody() { this->httpResponseBody_ = nullptr;};
    inline string httpResponseBody() const { DARABONBA_PTR_GET_DEFAULT(httpResponseBody_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpResponseBody(string httpResponseBody) { DARABONBA_PTR_SET_VALUE(httpResponseBody_, httpResponseBody) };


    // httpResponseFailMsg Field Functions 
    bool hasHttpResponseFailMsg() const { return this->httpResponseFailMsg_ != nullptr;};
    void deleteHttpResponseFailMsg() { this->httpResponseFailMsg_ = nullptr;};
    inline string httpResponseFailMsg() const { DARABONBA_PTR_GET_DEFAULT(httpResponseFailMsg_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpResponseFailMsg(string httpResponseFailMsg) { DARABONBA_PTR_SET_VALUE(httpResponseFailMsg_, httpResponseFailMsg) };


    // httpResponseHeaders Field Functions 
    bool hasHttpResponseHeaders() const { return this->httpResponseHeaders_ != nullptr;};
    void deleteHttpResponseHeaders() { this->httpResponseHeaders_ = nullptr;};
    inline string httpResponseHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpResponseHeaders_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpResponseHeaders(string httpResponseHeaders) { DARABONBA_PTR_SET_VALUE(httpResponseHeaders_, httpResponseHeaders) };


    // httpResponseStatus Field Functions 
    bool hasHttpResponseStatus() const { return this->httpResponseStatus_ != nullptr;};
    void deleteHttpResponseStatus() { this->httpResponseStatus_ = nullptr;};
    inline string httpResponseStatus() const { DARABONBA_PTR_GET_DEFAULT(httpResponseStatus_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpResponseStatus(string httpResponseStatus) { DARABONBA_PTR_SET_VALUE(httpResponseStatus_, httpResponseStatus) };


    // httpStartTime Field Functions 
    bool hasHttpStartTime() const { return this->httpStartTime_ != nullptr;};
    void deleteHttpStartTime() { this->httpStartTime_ = nullptr;};
    inline int64_t httpStartTime() const { DARABONBA_PTR_GET_DEFAULT(httpStartTime_, 0L) };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpStartTime(int64_t httpStartTime) { DARABONBA_PTR_SET_VALUE(httpStartTime_, httpStartTime) };


    // httpTiming Field Functions 
    bool hasHttpTiming() const { return this->httpTiming_ != nullptr;};
    void deleteHttpTiming() { this->httpTiming_ = nullptr;};
    inline string httpTiming() const { DARABONBA_PTR_GET_DEFAULT(httpTiming_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setHttpTiming(string httpTiming) { DARABONBA_PTR_SET_VALUE(httpTiming_, httpTiming) };


    // importContent Field Functions 
    bool hasImportContent() const { return this->importContent_ != nullptr;};
    void deleteImportContent() { this->importContent_ = nullptr;};
    inline string importContent() const { DARABONBA_PTR_GET_DEFAULT(importContent_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setImportContent(string importContent) { DARABONBA_PTR_SET_VALUE(importContent_, importContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline string rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, "") };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setRt(string rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetPtsDebugSampleLogsResponseBodySamplingLogs& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The ID of the session.
    std::shared_ptr<string> chainId_ = nullptr;
    // The name of the session.
    std::shared_ptr<string> chainName_ = nullptr;
    // The assertion check result.
    std::shared_ptr<string> checkResult_ = nullptr;
    // The parameter export configuration.
    std::shared_ptr<string> exportConfig_ = nullptr;
    // The exported parameters.
    std::shared_ptr<string> exportContent_ = nullptr;
    // The body of the request.
    std::shared_ptr<string> httpRequestBody_ = nullptr;
    // The request headers.
    std::shared_ptr<string> httpRequestHeaders_ = nullptr;
    // The request method.
    std::shared_ptr<string> httpRequestMethod_ = nullptr;
    // The endpoint that specifies where the request is directed.
    std::shared_ptr<string> httpRequestUrl_ = nullptr;
    // The response body.
    std::shared_ptr<string> httpResponseBody_ = nullptr;
    // The error message.
    std::shared_ptr<string> httpResponseFailMsg_ = nullptr;
    // The response headers.
    std::shared_ptr<string> httpResponseHeaders_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpResponseStatus_ = nullptr;
    // The time when the request was sent.
    std::shared_ptr<int64_t> httpStartTime_ = nullptr;
    // The HTTP timing information in a waterfall format.
    std::shared_ptr<string> httpTiming_ = nullptr;
    // The imported parameters.
    std::shared_ptr<string> importContent_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The response time. Unit: ms.
    std::shared_ptr<string> rt_ = nullptr;
    // The timestamp. Unit: ms.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
