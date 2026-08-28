#include <darabonba/Core.hpp>
#include <alibabacloud/DtsAI20260401.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/policy/Retry.hpp>
#include <darabonba/Exception.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/http/Form.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::DtsAI20260401::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace DtsAI20260401
{

AlibabaCloud::DtsAI20260401::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "dtsai.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dtsai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime) {
  Darabonba::RuntimeOptions runtime_(json({
    {"key", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getKey(), _key))},
    {"cert", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getCert(), _cert))},
    {"ca", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getCa(), _ca))},
    {"readTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getReadTimeout(), _readTimeout))},
    {"connectTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getConnectTimeout(), _connectTimeout))},
    {"httpProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getHttpProxy(), _httpProxy))},
    {"httpsProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getHttpsProxy(), _httpsProxy))},
    {"noProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getNoProxy(), _noProxy))},
    {"socks5Proxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getSocks5Proxy(), _socks5Proxy))},
    {"socks5NetWork", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getSocks5NetWork(), _socks5NetWork))},
    {"maxIdleConns", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getMaxIdleConns(), _maxIdleConns))},
    {"retryOptions", _retryOptions},
    {"ignoreSSL", Darabonba::Convert::boolVal(Darabonba::defaultVal(runtime.getIgnoreSSL(), false))},
    {"tlsMinVersion", _tlsMinVersion}
    }));

  std::exception_ptr _lastExceptionPtr;
  int _retriesAttempted = 0;
  Darabonba::Policy::RetryPolicyContext _context = json({
    {"retriesAttempted" , _retriesAttempted}
  });
  while (Darabonba::allowRetry(runtime_.getRetryOptions(), _context)) {
    if (_retriesAttempted > 0) {
      int _backoffTime = Darabonba::getBackoffTime(runtime_.getRetryOptions(), _context);
      if (_backoffTime > 0) {
        Darabonba::sleep(_backoffTime);
      }
    }
    _retriesAttempted++;
    try {
      Darabonba::Http::Request request_ = Darabonba::Http::Request();
      string boundary = Darabonba::Http::Form::getBoundary();
      string tmp = Darabonba::Convert::stringVal(form.value("host", Darabonba::Json()));
      string host = DARA_STRING_TEMPLATE("" , bucketName , "." , tmp);
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , host},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.getHeaders()["content-type"] = DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary);
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->getBody());
      if ((response_->getStatusCode() >= 400) && (response_->getStatusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap.value("Error", Darabonba::Json()));
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err.value("Code", Darabonba::Json()))},
          {"message" , Darabonba::Convert::stringVal(err.value("Message", Darabonba::Json()))},
          {"data" , json({
            {"httpCode" , response_->getStatusCode()},
            {"requestId" , Darabonba::Convert::stringVal(err.value("RequestId", Darabonba::Json()))},
            {"hostId" , Darabonba::Convert::stringVal(err.value("HostId", Darabonba::Json()))}
          })}
        }));
      }

      respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
      return Darabonba::Core::merge(respMap
      );
    } catch (const Darabonba::DaraException& ex) {
      _lastExceptionPtr = std::current_exception();
      _context = Darabonba::Policy::RetryPolicyContext(json({
        {"retriesAttempted" , _retriesAttempted},
        {"exception" , ex},
      }));
      continue;
    }
  }

  std::rethrow_exception(_lastExceptionPtr);
}

string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Uploads a file directly to the Bucket/ObjectKey specified in the response, and then uses the object URL as OssFileUrl to create a parsing task.
 *
 * @param request AuthorizeFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeFileUploadResponse
 */
AuthorizeFileUploadResponse Client::authorizeFileUploadWithOptions(const AuthorizeFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasBatchSize()) {
    query["BatchSize"] = request.getBatchSize();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.getFileFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeFileUploadResponse>();
}

/**
 * @summary Uploads a file directly to the Bucket/ObjectKey specified in the response, and then uses the object URL as OssFileUrl to create a parsing task.
 *
 * @param request AuthorizeFileUploadRequest
 * @return AuthorizeFileUploadResponse
 */
AuthorizeFileUploadResponse Client::authorizeFileUpload(const AuthorizeFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeFileUploadWithOptions(request, runtime);
}

/**
 * @summary Creates a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: The service is free of charge during the public preview period.
 *
 * @param request CreateDocParserJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocParserJobResponse
 */
CreateDocParserJobResponse Client::createDocParserJobWithOptions(const CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasAsrLanguage()) {
    query["AsrLanguage"] = request.getAsrLanguage();
  }

  if (!!request.hasAudioClipOutput()) {
    query["AudioClipOutput"] = request.getAudioClipOutput();
  }

  if (!!request.hasAudioWindowSeconds()) {
    query["AudioWindowSeconds"] = request.getAudioWindowSeconds();
  }

  if (!!request.hasChunkSummary()) {
    query["ChunkSummary"] = request.getChunkSummary();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.getFileFormat();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFrameOutput()) {
    query["FrameOutput"] = request.getFrameOutput();
  }

  if (!!request.hasGlobalSummary()) {
    query["GlobalSummary"] = request.getGlobalSummary();
  }

  if (!!request.hasImageMode()) {
    query["ImageMode"] = request.getImageMode();
  }

  if (!!request.hasImageUnderstanding()) {
    query["ImageUnderstanding"] = request.getImageUnderstanding();
  }

  if (!!request.hasMediaChunkIntervalSeconds()) {
    query["MediaChunkIntervalSeconds"] = request.getMediaChunkIntervalSeconds();
  }

  if (!!request.hasMediaChunkStrategy()) {
    query["MediaChunkStrategy"] = request.getMediaChunkStrategy();
  }

  if (!!request.hasMediaFramesPerMinute()) {
    query["MediaFramesPerMinute"] = request.getMediaFramesPerMinute();
  }

  if (!!request.hasMediaMaxFrameBudget()) {
    query["MediaMaxFrameBudget"] = request.getMediaMaxFrameBudget();
  }

  if (!!request.hasMediaMinFrameBudget()) {
    query["MediaMinFrameBudget"] = request.getMediaMinFrameBudget();
  }

  if (!!request.hasOssFileUrl()) {
    query["OssFileUrl"] = request.getOssFileUrl();
  }

  if (!!request.hasOutputFormat()) {
    query["OutputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasParseScene()) {
    query["ParseScene"] = request.getParseScene();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResponseMode()) {
    query["ResponseMode"] = request.getResponseMode();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasTableFormat()) {
    query["TableFormat"] = request.getTableFormat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDocParserJob"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocParserJobResponse>();
}

/**
 * @summary Creates a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: The service is free of charge during the public preview period.
 *
 * @param request CreateDocParserJobRequest
 * @return CreateDocParserJobResponse
 */
CreateDocParserJobResponse Client::createDocParserJob(const CreateDocParserJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocParserJobWithOptions(request, runtime);
}

CreateDocParserJobResponse Client::createDocParserJobAdvance(const CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "DtsAI"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  CreateDocParserJobRequest createDocParserJobReq = CreateDocParserJobRequest();
  Utils::Utils::convert(request, createDocParserJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    createDocParserJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateDocParserJobResponse createDocParserJobResp = createDocParserJobWithOptions(createDocParserJobReq, runtime);
  return createDocParserJobResp;
}

/**
 * @summary Retrieves the result of a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: Free of charge during the public preview period.
 * - Call DescribeDocParserJobResult to retrieve the parsing result of a document parsing task. Call this operation only after DescribeDocParserJobStatus returns a Status of success. Task results are retained for 72 hours and cannot be retrieved after expiration.
 *
 * @param request DescribeDocParserJobResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocParserJobResultResponse
 */
DescribeDocParserJobResultResponse Client::describeDocParserJobResultWithOptions(const DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocParserJobResult"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocParserJobResultResponse>();
}

/**
 * @summary Retrieves the result of a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: Free of charge during the public preview period.
 * - Call DescribeDocParserJobResult to retrieve the parsing result of a document parsing task. Call this operation only after DescribeDocParserJobStatus returns a Status of success. Task results are retained for 72 hours and cannot be retrieved after expiration.
 *
 * @param request DescribeDocParserJobResultRequest
 * @return DescribeDocParserJobResultResponse
 */
DescribeDocParserJobResultResponse Client::describeDocParserJobResult(const DescribeDocParserJobResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocParserJobResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: The service is free of charge during the public preview period.
 *
 * @param request DescribeDocParserJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocParserJobStatusResponse
 */
DescribeDocParserJobStatusResponse Client::describeDocParserJobStatusWithOptions(const DescribeDocParserJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocParserJobStatus"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocParserJobStatusResponse>();
}

/**
 * @summary Queries the status of a document parsing task.
 *
 * @description - Region: Only China (Beijing) is supported.
 * - Fees: The service is free of charge during the public preview period.
 *
 * @param request DescribeDocParserJobStatusRequest
 * @return DescribeDocParserJobStatusResponse
 */
DescribeDocParserJobStatusResponse Client::describeDocParserJobStatus(const DescribeDocParserJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocParserJobStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the content of a web page.
 *
 * @description - Region: Only China (Beijing) and Singapore regions are supported.
 * - Fees: Free of charge during the public preview period.
 *
 * @param request WebFetchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WebFetchResponse
 */
WebFetchResponse Client::webFetchWithOptions(const WebFetchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasOutputFormat()) {
    query["OutputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WebFetch"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WebFetchResponse>();
}

/**
 * @summary Retrieves the content of a web page.
 *
 * @description - Region: Only China (Beijing) and Singapore regions are supported.
 * - Fees: Free of charge during the public preview period.
 *
 * @param request WebFetchRequest
 * @return WebFetchResponse
 */
WebFetchResponse Client::webFetch(const WebFetchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return webFetchWithOptions(request, runtime);
}

/**
 * @summary Performs a web search.
 *
 * @description - Region: Only China (Beijing) and Singapore regions are supported.
 * - Fees: Free during the public preview period. No fees are charged.
 *
 * @param request WebSearchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WebSearchResponse
 */
WebSearchResponse Client::webSearchWithOptions(const WebSearchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUrlScopeDomains()) {
    query["UrlScopeDomains"] = request.getUrlScopeDomains();
  }

  if (!!request.hasUrlScopeMode()) {
    query["UrlScopeMode"] = request.getUrlScopeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WebSearch"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WebSearchResponse>();
}

/**
 * @summary Performs a web search.
 *
 * @description - Region: Only China (Beijing) and Singapore regions are supported.
 * - Fees: Free during the public preview period. No fees are charged.
 *
 * @param request WebSearchRequest
 * @return WebSearchResponse
 */
WebSearchResponse Client::webSearch(const WebSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return webSearchWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DtsAI20260401