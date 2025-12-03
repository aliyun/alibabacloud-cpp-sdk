#include <darabonba/Core.hpp>
#include <alibabacloud/Alimt20181012.hpp>
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
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Alimt20181012::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Alimt20181012
{

AlibabaCloud::Alimt20181012::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "mt.cn-hangzhou.aliyuncs.com"},
    {"ap-northeast-1" , "mt.aliyuncs.com"},
    {"ap-northeast-2-pop" , "mt.aliyuncs.com"},
    {"ap-south-1" , "mt.aliyuncs.com"},
    {"ap-southeast-1" , "mt.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "mt.aliyuncs.com"},
    {"ap-southeast-3" , "mt.aliyuncs.com"},
    {"ap-southeast-5" , "mt.aliyuncs.com"},
    {"cn-beijing" , "mt.aliyuncs.com"},
    {"cn-beijing-finance-1" , "mt.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "mt.aliyuncs.com"},
    {"cn-beijing-gov-1" , "mt.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "mt.aliyuncs.com"},
    {"cn-chengdu" , "mt.aliyuncs.com"},
    {"cn-edge-1" , "mt.aliyuncs.com"},
    {"cn-fujian" , "mt.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "mt.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "mt.aliyuncs.com"},
    {"cn-hangzhou-finance" , "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "mt.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "mt.aliyuncs.com"},
    {"cn-hongkong" , "mt.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "mt.aliyuncs.com"},
    {"cn-huhehaote" , "mt.aliyuncs.com"},
    {"cn-north-2-gov-1" , "mt.aliyuncs.com"},
    {"cn-qingdao" , "mt.aliyuncs.com"},
    {"cn-qingdao-nebula" , "mt.aliyuncs.com"},
    {"cn-shanghai" , "mt.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "mt.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "mt.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "mt.aliyuncs.com"},
    {"cn-shanghai-inner" , "mt.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "mt.aliyuncs.com"},
    {"cn-shenzhen" , "mt.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "mt.aliyuncs.com"},
    {"cn-shenzhen-inner" , "mt.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "mt.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "mt.aliyuncs.com"},
    {"cn-wuhan" , "mt.aliyuncs.com"},
    {"cn-yushanfang" , "mt.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "mt.aliyuncs.com"},
    {"cn-zhangjiakou" , "mt.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "mt.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "mt.aliyuncs.com"},
    {"eu-central-1" , "mt.aliyuncs.com"},
    {"eu-west-1" , "mt.aliyuncs.com"},
    {"eu-west-1-oxs" , "mt.aliyuncs.com"},
    {"me-east-1" , "mt.aliyuncs.com"},
    {"rus-west-1-pop" , "mt.aliyuncs.com"},
    {"us-east-1" , "mt.aliyuncs.com"},
    {"us-west-1" , "mt.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("alimt", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime) {
  Darabonba::RuntimeOptions runtime_(json({
    {"key", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.key(), _key))},
    {"cert", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.cert(), _cert))},
    {"ca", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.ca(), _ca))},
    {"readTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.readTimeout(), _readTimeout))},
    {"connectTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.connectTimeout(), _connectTimeout))},
    {"httpProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.httpProxy(), _httpProxy))},
    {"httpsProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.httpsProxy(), _httpsProxy))},
    {"noProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.noProxy(), _noProxy))},
    {"socks5Proxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.socks5Proxy(), _socks5Proxy))},
    {"socks5NetWork", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.socks5NetWork(), _socks5NetWork))},
    {"maxIdleConns", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.maxIdleConns(), _maxIdleConns))},
    {"retryOptions", _retryOptions},
    {"ignoreSSL", Darabonba::Convert::boolVal(Darabonba::defaultVal(runtime.ignoreSSL(), false))},
    {"tlsMinVersion", _tlsMinVersion}
    }));

  shared_ptr<Darabonba::Http::Request> _lastRequest = nullptr;
  shared_ptr<Darabonba::Http::MCurlResponse> _lastResponse = nullptr;
  Darabonba::Exception _lastException;
  int _retriesAttempted = 0;
  Darabonba::Policy::RetryPolicyContext _context = json({
    {"retriesAttempted" , _retriesAttempted}
  });
  while (Darabonba::allowRetry(runtime_.retryOptions(), _context)) {
    if (_retriesAttempted > 0) {
      int _backoffTime = Darabonba::getBackoffTime(runtime_.retryOptions(), _context);
      if (_backoffTime > 0) {
        Darabonba::sleep(_backoffTime);
      }
    }
    _retriesAttempted++;
    try {
      Darabonba::Http::Request request_ = Darabonba::Http::Request();
      string boundary = Darabonba::Http::Form::getBoundary();
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , Darabonba::Convert::stringVal(form["host"])},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.addHeader("content-type", DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary));
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      _lastRequest = make_shared<Darabonba::Http::Request>(request_);
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();
      _lastResponse  = response_;

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->body());
      if ((response_->statusCode() >= 400) && (response_->statusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap["Error"]);
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err["Code"])},
          {"message" , Darabonba::Convert::stringVal(err["Message"])},
          {"data" , json({
            {"httpCode" , response_->statusCode()},
            {"requestId" , Darabonba::Convert::stringVal(err["RequestId"])},
            {"hostId" , Darabonba::Convert::stringVal(err["HostId"])}
          })}
        }));
      }

      respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
      return Darabonba::Core::merge(respMap
      );
    } catch (const Darabonba::Exception& ex) {
      _context = Darabonba::Policy::RetryPolicyContext(json({
        {"retriesAttempted" , _retriesAttempted},
        {"lastRequest" , _lastRequest},
        {"lastResponse" , _lastResponse},
        {"exception" , ex},
      }));
      continue;
    }
  }

  throw *_context.exception();
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
 * @summary 大文本异步翻译，支持5000-50000字翻译
 *
 * @param request CreateAsyncTranslateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsyncTranslateResponse
 */
CreateAsyncTranslateResponse Client::createAsyncTranslateWithOptions(const CreateAsyncTranslateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAsyncTranslate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAsyncTranslateResponse>();
}

/**
 * @summary 大文本异步翻译，支持5000-50000字翻译
 *
 * @param request CreateAsyncTranslateRequest
 * @return CreateAsyncTranslateResponse
 */
CreateAsyncTranslateResponse Client::createAsyncTranslate(const CreateAsyncTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsyncTranslateWithOptions(request, runtime);
}

/**
 * @param request CreateDocTranslateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocTranslateTaskResponse
 */
CreateDocTranslateTaskResponse Client::createDocTranslateTaskWithOptions(const CreateDocTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDocTranslateTask"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocTranslateTaskResponse>();
}

/**
 * @param request CreateDocTranslateTaskRequest
 * @return CreateDocTranslateTaskResponse
 */
CreateDocTranslateTaskResponse Client::createDocTranslateTask(const CreateDocTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocTranslateTaskWithOptions(request, runtime);
}

CreateDocTranslateTaskResponse Client::createDocTranslateTaskAdvance(const CreateDocTranslateTaskAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
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
    {"Product" , "alimt"},
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
  CreateDocTranslateTaskRequest createDocTranslateTaskReq = CreateDocTranslateTaskRequest();
  Utils::Utils::convert(request, createDocTranslateTaskReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    createDocTranslateTaskReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateDocTranslateTaskResponse createDocTranslateTaskResp = createDocTranslateTaskWithOptions(createDocTranslateTaskReq, runtime);
  return createDocTranslateTaskResp;
}

/**
 * @summary 创建图片翻译任务
 *
 * @param request CreateImageTranslateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageTranslateTaskResponse
 */
CreateImageTranslateTaskResponse Client::createImageTranslateTaskWithOptions(const CreateImageTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasUrlList()) {
    body["UrlList"] = request.urlList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateImageTranslateTask"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageTranslateTaskResponse>();
}

/**
 * @summary 创建图片翻译任务
 *
 * @param request CreateImageTranslateTaskRequest
 * @return CreateImageTranslateTaskResponse
 */
CreateImageTranslateTaskResponse Client::createImageTranslateTask(const CreateImageTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageTranslateTaskWithOptions(request, runtime);
}

/**
 * @summary 大文本异步翻译，支持5000-50000字翻译
 *
 * @param request GetAsyncTranslateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncTranslateResponse
 */
GetAsyncTranslateResponse Client::getAsyncTranslateWithOptions(const GetAsyncTranslateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAsyncTranslate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncTranslateResponse>();
}

/**
 * @summary 大文本异步翻译，支持5000-50000字翻译
 *
 * @param request GetAsyncTranslateRequest
 * @return GetAsyncTranslateResponse
 */
GetAsyncTranslateResponse Client::getAsyncTranslate(const GetAsyncTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncTranslateWithOptions(request, runtime);
}

/**
 * @summary 批量文本翻译
 *
 * @param request GetBatchTranslateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTranslateResponse
 */
GetBatchTranslateResponse Client::getBatchTranslateWithOptions(const GetBatchTranslateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBatchTranslate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTranslateResponse>();
}

/**
 * @summary 批量文本翻译
 *
 * @param request GetBatchTranslateRequest
 * @return GetBatchTranslateResponse
 */
GetBatchTranslateResponse Client::getBatchTranslate(const GetBatchTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTranslateWithOptions(request, runtime);
}

/**
 * @summary GetBatchTranslateByVPC
 *
 * @param request GetBatchTranslateByVPCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTranslateByVPCResponse
 */
GetBatchTranslateByVPCResponse Client::getBatchTranslateByVPCWithOptions(const GetBatchTranslateByVPCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBatchTranslateByVPC"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTranslateByVPCResponse>();
}

/**
 * @summary GetBatchTranslateByVPC
 *
 * @param request GetBatchTranslateByVPCRequest
 * @return GetBatchTranslateByVPCResponse
 */
GetBatchTranslateByVPCResponse Client::getBatchTranslateByVPC(const GetBatchTranslateByVPCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTranslateByVPCWithOptions(request, runtime);
}

/**
 * @summary 语种识别
 *
 * @param request GetDetectLanguageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetectLanguageResponse
 */
GetDetectLanguageResponse Client::getDetectLanguageWithOptions(const GetDetectLanguageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDetectLanguage"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetectLanguageResponse>();
}

/**
 * @summary 语种识别
 *
 * @param request GetDetectLanguageRequest
 * @return GetDetectLanguageResponse
 */
GetDetectLanguageResponse Client::getDetectLanguage(const GetDetectLanguageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetectLanguageWithOptions(request, runtime);
}

/**
 * @summary 语种识别
 *
 * @param request GetDetectLanguageVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetectLanguageVpcResponse
 */
GetDetectLanguageVpcResponse Client::getDetectLanguageVpcWithOptions(const GetDetectLanguageVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDetectLanguageVpc"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetectLanguageVpcResponse>();
}

/**
 * @summary 语种识别
 *
 * @param request GetDetectLanguageVpcRequest
 * @return GetDetectLanguageVpcResponse
 */
GetDetectLanguageVpcResponse Client::getDetectLanguageVpc(const GetDetectLanguageVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetectLanguageVpcWithOptions(request, runtime);
}

/**
 * @summary 获取文档翻译任务
 *
 * @param request GetDocTranslateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocTranslateTaskResponse
 */
GetDocTranslateTaskResponse Client::getDocTranslateTaskWithOptions(const GetDocTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocTranslateTask"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocTranslateTaskResponse>();
}

/**
 * @summary 获取文档翻译任务
 *
 * @param request GetDocTranslateTaskRequest
 * @return GetDocTranslateTaskResponse
 */
GetDocTranslateTaskResponse Client::getDocTranslateTask(const GetDocTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocTranslateTaskWithOptions(request, runtime);
}

/**
 * @param request GetImageDiagnoseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageDiagnoseResponse
 */
GetImageDiagnoseResponse Client::getImageDiagnoseWithOptions(const GetImageDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetImageDiagnose"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageDiagnoseResponse>();
}

/**
 * @param request GetImageDiagnoseRequest
 * @return GetImageDiagnoseResponse
 */
GetImageDiagnoseResponse Client::getImageDiagnose(const GetImageDiagnoseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageDiagnoseWithOptions(request, runtime);
}

/**
 * @summary 获取图片翻译结果
 *
 * @param request GetImageTranslateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageTranslateResponse
 */
GetImageTranslateResponse Client::getImageTranslateWithOptions(const GetImageTranslateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetImageTranslate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageTranslateResponse>();
}

/**
 * @summary 获取图片翻译结果
 *
 * @param request GetImageTranslateRequest
 * @return GetImageTranslateResponse
 */
GetImageTranslateResponse Client::getImageTranslate(const GetImageTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageTranslateWithOptions(request, runtime);
}

/**
 * @summary 获取图片翻译任务
 *
 * @param request GetImageTranslateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageTranslateTaskResponse
 */
GetImageTranslateTaskResponse Client::getImageTranslateTaskWithOptions(const GetImageTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetImageTranslateTask"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageTranslateTaskResponse>();
}

/**
 * @summary 获取图片翻译任务
 *
 * @param request GetImageTranslateTaskRequest
 * @return GetImageTranslateTaskResponse
 */
GetImageTranslateTaskResponse Client::getImageTranslateTask(const GetImageTranslateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageTranslateTaskWithOptions(request, runtime);
}

/**
 * @summary GetTitleDiagnose
 *
 * @param request GetTitleDiagnoseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTitleDiagnoseResponse
 */
GetTitleDiagnoseResponse Client::getTitleDiagnoseWithOptions(const GetTitleDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTitleDiagnose"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTitleDiagnoseResponse>();
}

/**
 * @summary GetTitleDiagnose
 *
 * @param request GetTitleDiagnoseRequest
 * @return GetTitleDiagnoseResponse
 */
GetTitleDiagnoseResponse Client::getTitleDiagnose(const GetTitleDiagnoseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTitleDiagnoseWithOptions(request, runtime);
}

/**
 * @summary GetTitleGenerate
 *
 * @param request GetTitleGenerateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTitleGenerateResponse
 */
GetTitleGenerateResponse Client::getTitleGenerateWithOptions(const GetTitleGenerateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["Attributes"] = request.attributes();
  }

  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasHotWords()) {
    body["HotWords"] = request.hotWords();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTitleGenerate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTitleGenerateResponse>();
}

/**
 * @summary GetTitleGenerate
 *
 * @param request GetTitleGenerateRequest
 * @return GetTitleGenerateResponse
 */
GetTitleGenerateResponse Client::getTitleGenerate(const GetTitleGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTitleGenerateWithOptions(request, runtime);
}

/**
 * @summary GetTitleIntelligence
 *
 * @param request GetTitleIntelligenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTitleIntelligenceResponse
 */
GetTitleIntelligenceResponse Client::getTitleIntelligenceWithOptions(const GetTitleIntelligenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCatLevelThreeId()) {
    body["CatLevelThreeId"] = request.catLevelThreeId();
  }

  if (!!request.hasCatLevelTwoId()) {
    body["CatLevelTwoId"] = request.catLevelTwoId();
  }

  if (!!request.hasExtra()) {
    body["Extra"] = request.extra();
  }

  if (!!request.hasKeywords()) {
    body["Keywords"] = request.keywords();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTitleIntelligence"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTitleIntelligenceResponse>();
}

/**
 * @summary GetTitleIntelligence
 *
 * @param request GetTitleIntelligenceRequest
 * @return GetTitleIntelligenceResponse
 */
GetTitleIntelligenceResponse Client::getTitleIntelligence(const GetTitleIntelligenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTitleIntelligenceWithOptions(request, runtime);
}

/**
 * @summary 获取图片批量翻译结果
 *
 * @param request GetTranslateImageBatchResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranslateImageBatchResultResponse
 */
GetTranslateImageBatchResultResponse Client::getTranslateImageBatchResultWithOptions(const GetTranslateImageBatchResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTranslateImageBatchResult"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranslateImageBatchResultResponse>();
}

/**
 * @summary 获取图片批量翻译结果
 *
 * @param request GetTranslateImageBatchResultRequest
 * @return GetTranslateImageBatchResultResponse
 */
GetTranslateImageBatchResultResponse Client::getTranslateImageBatchResult(const GetTranslateImageBatchResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranslateImageBatchResultWithOptions(request, runtime);
}

/**
 * @summary GetTranslateReport
 *
 * @param request GetTranslateReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranslateReportResponse
 */
GetTranslateReportResponse Client::getTranslateReportWithOptions(const GetTranslateReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.group();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranslateReport"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranslateReportResponse>();
}

/**
 * @summary GetTranslateReport
 *
 * @param request GetTranslateReportRequest
 * @return GetTranslateReportResponse
 */
GetTranslateReportResponse Client::getTranslateReport(const GetTranslateReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranslateReportWithOptions(request, runtime);
}

/**
 * @summary 开通服务
 *
 * @param request OpenAlimtServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenAlimtServiceResponse
 */
OpenAlimtServiceResponse Client::openAlimtServiceWithOptions(const OpenAlimtServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenAlimtService"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenAlimtServiceResponse>();
}

/**
 * @summary 开通服务
 *
 * @param request OpenAlimtServiceRequest
 * @return OpenAlimtServiceResponse
 */
OpenAlimtServiceResponse Client::openAlimtService(const OpenAlimtServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openAlimtServiceWithOptions(request, runtime);
}

/**
 * @summary 专业文本翻译
 *
 * @param request TranslateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateResponse
 */
TranslateResponse Client::translateWithOptions(const TranslateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  json body = {};
  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Translate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateResponse>();
}

/**
 * @summary 专业文本翻译
 *
 * @param request TranslateRequest
 * @return TranslateResponse
 */
TranslateResponse Client::translate(const TranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateWithOptions(request, runtime);
}

/**
 * @summary TranslateCertificate
 *
 * @param request TranslateCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateCertificateResponse
 */
TranslateCertificateResponse Client::translateCertificateWithOptions(const TranslateCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertificateType()) {
    body["CertificateType"] = request.certificateType();
  }

  if (!!request.hasImageUrl()) {
    body["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasResultType()) {
    body["ResultType"] = request.resultType();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TranslateCertificate"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateCertificateResponse>();
}

/**
 * @summary TranslateCertificate
 *
 * @param request TranslateCertificateRequest
 * @return TranslateCertificateResponse
 */
TranslateCertificateResponse Client::translateCertificate(const TranslateCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateCertificateWithOptions(request, runtime);
}

TranslateCertificateResponse Client::translateCertificateAdvance(const TranslateCertificateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
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
    {"Product" , "alimt"},
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
  TranslateCertificateRequest translateCertificateReq = TranslateCertificateRequest();
  Utils::Utils::convert(request, translateCertificateReq);
  if (!!request.hasImageUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    translateCertificateReq.setImageUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  TranslateCertificateResponse translateCertificateResp = translateCertificateWithOptions(translateCertificateReq, runtime);
  return translateCertificateResp;
}

/**
 * @deprecated OpenAPI TranslateECommerce is deprecated, please use alimt::2018-10-12::Translate instead.
 *
 * @summary TranslateECommerce
 *
 * @param request TranslateECommerceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateECommerceResponse
 */
TranslateECommerceResponse Client::translateECommerceWithOptions(const TranslateECommerceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  json body = {};
  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TranslateECommerce"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateECommerceResponse>();
}

/**
 * @deprecated OpenAPI TranslateECommerce is deprecated, please use alimt::2018-10-12::Translate instead.
 *
 * @summary TranslateECommerce
 *
 * @param request TranslateECommerceRequest
 * @return TranslateECommerceResponse
 */
TranslateECommerceResponse Client::translateECommerce(const TranslateECommerceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateECommerceWithOptions(request, runtime);
}

/**
 * @summary 文本通用翻译
 *
 * @param request TranslateGeneralRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateGeneralResponse
 */
TranslateGeneralResponse Client::translateGeneralWithOptions(const TranslateGeneralRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  json body = {};
  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TranslateGeneral"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateGeneralResponse>();
}

/**
 * @summary 文本通用翻译
 *
 * @param request TranslateGeneralRequest
 * @return TranslateGeneralResponse
 */
TranslateGeneralResponse Client::translateGeneral(const TranslateGeneralRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateGeneralWithOptions(request, runtime);
}

/**
 * @summary TranslateGeneralVpc
 *
 * @param request TranslateGeneralVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateGeneralVpcResponse
 */
TranslateGeneralVpcResponse Client::translateGeneralVpcWithOptions(const TranslateGeneralVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  json body = {};
  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TranslateGeneralVpc"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateGeneralVpcResponse>();
}

/**
 * @summary TranslateGeneralVpc
 *
 * @param request TranslateGeneralVpcRequest
 * @return TranslateGeneralVpcResponse
 */
TranslateGeneralVpcResponse Client::translateGeneralVpc(const TranslateGeneralVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateGeneralVpcWithOptions(request, runtime);
}

/**
 * @summary 公有云图片翻译产品API
 *
 * @param request TranslateImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateImageResponse
 */
TranslateImageResponse Client::translateImageWithOptions(const TranslateImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExt()) {
    body["Ext"] = request.ext();
  }

  if (!!request.hasField()) {
    body["Field"] = request.field();
  }

  if (!!request.hasImageBase64()) {
    body["ImageBase64"] = request.imageBase64();
  }

  if (!!request.hasImageUrl()) {
    body["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TranslateImage"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateImageResponse>();
}

/**
 * @summary 公有云图片翻译产品API
 *
 * @param request TranslateImageRequest
 * @return TranslateImageResponse
 */
TranslateImageResponse Client::translateImage(const TranslateImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateImageWithOptions(request, runtime);
}

/**
 * @summary 批量图片翻译接口
 *
 * @param request TranslateImageBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateImageBatchResponse
 */
TranslateImageBatchResponse Client::translateImageBatchWithOptions(const TranslateImageBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomTaskId()) {
    body["CustomTaskId"] = request.customTaskId();
  }

  if (!!request.hasExt()) {
    body["Ext"] = request.ext();
  }

  if (!!request.hasField()) {
    body["Field"] = request.field();
  }

  if (!!request.hasImageUrls()) {
    body["ImageUrls"] = request.imageUrls();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TranslateImageBatch"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateImageBatchResponse>();
}

/**
 * @summary 批量图片翻译接口
 *
 * @param request TranslateImageBatchRequest
 * @return TranslateImageBatchResponse
 */
TranslateImageBatchResponse Client::translateImageBatch(const TranslateImageBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateImageBatchWithOptions(request, runtime);
}

/**
 * @summary 搜索翻译
 *
 * @param request TranslateSearchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TranslateSearchResponse
 */
TranslateSearchResponse Client::translateSearchWithOptions(const TranslateSearchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSourceLanguage()) {
    body["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasSourceText()) {
    body["SourceText"] = request.sourceText();
  }

  if (!!request.hasTargetLanguage()) {
    body["TargetLanguage"] = request.targetLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TranslateSearch"},
    {"version" , "2018-10-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TranslateSearchResponse>();
}

/**
 * @summary 搜索翻译
 *
 * @param request TranslateSearchRequest
 * @return TranslateSearchResponse
 */
TranslateSearchResponse Client::translateSearch(const TranslateSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return translateSearchWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Alimt20181012