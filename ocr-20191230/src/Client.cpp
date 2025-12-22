#include <darabonba/Core.hpp>
#include <alibabacloud/Ocr20191230.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <darabonba/Runtime.hpp>
#include <darabonba/policy/Retry.hpp>
#include <darabonba/Exception.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/http/Form.hpp>
#include <map>
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
using namespace AlibabaCloud::Ocr20191230::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ocr20191230
{

AlibabaCloud::Ocr20191230::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ocr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request GetAsyncJobResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncJobResultResponse
 */
GetAsyncJobResultResponse Client::getAsyncJobResultWithOptions(const GetAsyncJobResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAsyncJobResult"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncJobResultResponse>();
}

/**
 * @param request GetAsyncJobResultRequest
 * @return GetAsyncJobResultResponse
 */
GetAsyncJobResultResponse Client::getAsyncJobResult(const GetAsyncJobResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncJobResultWithOptions(request, runtime);
}

/**
 * @param request RecognizeBankCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeBankCardResponse
 */
RecognizeBankCardResponse Client::recognizeBankCardWithOptions(const RecognizeBankCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeBankCard"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeBankCardResponse>();
}

/**
 * @param request RecognizeBankCardRequest
 * @return RecognizeBankCardResponse
 */
RecognizeBankCardResponse Client::recognizeBankCard(const RecognizeBankCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeBankCardWithOptions(request, runtime);
}

RecognizeBankCardResponse Client::recognizeBankCardAdvance(const RecognizeBankCardAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeBankCardRequest recognizeBankCardReq = RecognizeBankCardRequest();
  Utils::Utils::convert(request, recognizeBankCardReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeBankCardReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeBankCardResponse recognizeBankCardResp = recognizeBankCardWithOptions(recognizeBankCardReq, runtime);
  return recognizeBankCardResp;
}

/**
 * @param request RecognizeBusinessLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeBusinessLicenseResponse
 */
RecognizeBusinessLicenseResponse Client::recognizeBusinessLicenseWithOptions(const RecognizeBusinessLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeBusinessLicense"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeBusinessLicenseResponse>();
}

/**
 * @param request RecognizeBusinessLicenseRequest
 * @return RecognizeBusinessLicenseResponse
 */
RecognizeBusinessLicenseResponse Client::recognizeBusinessLicense(const RecognizeBusinessLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeBusinessLicenseWithOptions(request, runtime);
}

RecognizeBusinessLicenseResponse Client::recognizeBusinessLicenseAdvance(const RecognizeBusinessLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeBusinessLicenseRequest recognizeBusinessLicenseReq = RecognizeBusinessLicenseRequest();
  Utils::Utils::convert(request, recognizeBusinessLicenseReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeBusinessLicenseReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeBusinessLicenseResponse recognizeBusinessLicenseResp = recognizeBusinessLicenseWithOptions(recognizeBusinessLicenseReq, runtime);
  return recognizeBusinessLicenseResp;
}

/**
 * @summary 通用文字识别
 *
 * @param request RecognizeCharacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeCharacterResponse
 */
RecognizeCharacterResponse Client::recognizeCharacterWithOptions(const RecognizeCharacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  if (!!request.hasMinHeight()) {
    body["MinHeight"] = request.minHeight();
  }

  if (!!request.hasOutputProbability()) {
    body["OutputProbability"] = request.outputProbability();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeCharacter"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeCharacterResponse>();
}

/**
 * @summary 通用文字识别
 *
 * @param request RecognizeCharacterRequest
 * @return RecognizeCharacterResponse
 */
RecognizeCharacterResponse Client::recognizeCharacter(const RecognizeCharacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeCharacterWithOptions(request, runtime);
}

RecognizeCharacterResponse Client::recognizeCharacterAdvance(const RecognizeCharacterAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeCharacterRequest recognizeCharacterReq = RecognizeCharacterRequest();
  Utils::Utils::convert(request, recognizeCharacterReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeCharacterReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeCharacterResponse recognizeCharacterResp = recognizeCharacterWithOptions(recognizeCharacterReq, runtime);
  return recognizeCharacterResp;
}

/**
 * @param request RecognizeDriverLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeDriverLicenseResponse
 */
RecognizeDriverLicenseResponse Client::recognizeDriverLicenseWithOptions(const RecognizeDriverLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  if (!!request.hasSide()) {
    body["Side"] = request.side();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeDriverLicense"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeDriverLicenseResponse>();
}

/**
 * @param request RecognizeDriverLicenseRequest
 * @return RecognizeDriverLicenseResponse
 */
RecognizeDriverLicenseResponse Client::recognizeDriverLicense(const RecognizeDriverLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeDriverLicenseWithOptions(request, runtime);
}

RecognizeDriverLicenseResponse Client::recognizeDriverLicenseAdvance(const RecognizeDriverLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeDriverLicenseRequest recognizeDriverLicenseReq = RecognizeDriverLicenseRequest();
  Utils::Utils::convert(request, recognizeDriverLicenseReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeDriverLicenseReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeDriverLicenseResponse recognizeDriverLicenseResp = recognizeDriverLicenseWithOptions(recognizeDriverLicenseReq, runtime);
  return recognizeDriverLicenseResp;
}

/**
 * @param request RecognizeDrivingLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeDrivingLicenseResponse
 */
RecognizeDrivingLicenseResponse Client::recognizeDrivingLicenseWithOptions(const RecognizeDrivingLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  if (!!request.hasSide()) {
    body["Side"] = request.side();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeDrivingLicense"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeDrivingLicenseResponse>();
}

/**
 * @param request RecognizeDrivingLicenseRequest
 * @return RecognizeDrivingLicenseResponse
 */
RecognizeDrivingLicenseResponse Client::recognizeDrivingLicense(const RecognizeDrivingLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeDrivingLicenseWithOptions(request, runtime);
}

RecognizeDrivingLicenseResponse Client::recognizeDrivingLicenseAdvance(const RecognizeDrivingLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeDrivingLicenseRequest recognizeDrivingLicenseReq = RecognizeDrivingLicenseRequest();
  Utils::Utils::convert(request, recognizeDrivingLicenseReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeDrivingLicenseReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeDrivingLicenseResponse recognizeDrivingLicenseResp = recognizeDrivingLicenseWithOptions(recognizeDrivingLicenseReq, runtime);
  return recognizeDrivingLicenseResp;
}

/**
 * @param request RecognizeIdentityCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeIdentityCardResponse
 */
RecognizeIdentityCardResponse Client::recognizeIdentityCardWithOptions(const RecognizeIdentityCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  if (!!request.hasSide()) {
    body["Side"] = request.side();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeIdentityCard"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeIdentityCardResponse>();
}

/**
 * @param request RecognizeIdentityCardRequest
 * @return RecognizeIdentityCardResponse
 */
RecognizeIdentityCardResponse Client::recognizeIdentityCard(const RecognizeIdentityCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeIdentityCardWithOptions(request, runtime);
}

RecognizeIdentityCardResponse Client::recognizeIdentityCardAdvance(const RecognizeIdentityCardAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeIdentityCardRequest recognizeIdentityCardReq = RecognizeIdentityCardRequest();
  Utils::Utils::convert(request, recognizeIdentityCardReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeIdentityCardReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeIdentityCardResponse recognizeIdentityCardResp = recognizeIdentityCardWithOptions(recognizeIdentityCardReq, runtime);
  return recognizeIdentityCardResp;
}

/**
 * @param request RecognizeLicensePlateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeLicensePlateResponse
 */
RecognizeLicensePlateResponse Client::recognizeLicensePlateWithOptions(const RecognizeLicensePlateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeLicensePlate"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeLicensePlateResponse>();
}

/**
 * @param request RecognizeLicensePlateRequest
 * @return RecognizeLicensePlateResponse
 */
RecognizeLicensePlateResponse Client::recognizeLicensePlate(const RecognizeLicensePlateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeLicensePlateWithOptions(request, runtime);
}

RecognizeLicensePlateResponse Client::recognizeLicensePlateAdvance(const RecognizeLicensePlateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeLicensePlateRequest recognizeLicensePlateReq = RecognizeLicensePlateRequest();
  Utils::Utils::convert(request, recognizeLicensePlateReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeLicensePlateReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeLicensePlateResponse recognizeLicensePlateResp = recognizeLicensePlateWithOptions(recognizeLicensePlateReq, runtime);
  return recognizeLicensePlateResp;
}

/**
 * @summary PDF识别
 *
 * @param request RecognizePdfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizePdfResponse
 */
RecognizePdfResponse Client::recognizePdfWithOptions(const RecognizePdfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileURL()) {
    body["FileURL"] = request.fileURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizePdf"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizePdfResponse>();
}

/**
 * @summary PDF识别
 *
 * @param request RecognizePdfRequest
 * @return RecognizePdfResponse
 */
RecognizePdfResponse Client::recognizePdf(const RecognizePdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizePdfWithOptions(request, runtime);
}

RecognizePdfResponse Client::recognizePdfAdvance(const RecognizePdfAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizePdfRequest recognizePdfReq = RecognizePdfRequest();
  Utils::Utils::convert(request, recognizePdfReq);
  if (!!request.hasFileURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileURLObject()},
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
    recognizePdfReq.setFileURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizePdfResponse recognizePdfResp = recognizePdfWithOptions(recognizePdfReq, runtime);
  return recognizePdfResp;
}

/**
 * @param request RecognizeQrCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeQrCodeResponse
 */
RecognizeQrCodeResponse Client::recognizeQrCodeWithOptions(const RecognizeQrCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTasks()) {
    body["Tasks"] = request.tasks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeQrCode"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeQrCodeResponse>();
}

/**
 * @param request RecognizeQrCodeRequest
 * @return RecognizeQrCodeResponse
 */
RecognizeQrCodeResponse Client::recognizeQrCode(const RecognizeQrCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeQrCodeWithOptions(request, runtime);
}

RecognizeQrCodeResponse Client::recognizeQrCodeAdvance(const RecognizeQrCodeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeQrCodeRequest recognizeQrCodeReq = RecognizeQrCodeRequest();
  Utils::Utils::convert(request, recognizeQrCodeReq);
  if (!!request.hasTasks()) {
    int32_t i0 = 0;
    for (RecognizeQrCodeAdvanceRequestTasks item0 : request.tasks()) {
      if (!!item0.hasImageURLObject()) {
        authResponse = authClient->callApi(authParams, authReq, runtime);
        tmpBody = json(authResponse.at("body"));
        useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
        authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
        fileObj = FileField(json({
          {"filename" , authResponseBody.at("ObjectKey")},
          {"content" , item0.imageURLObject()},
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
        RecognizeQrCodeRequestTasks tmpObj = recognizeQrCodeReq.tasks().at(i0);
        tmpObj.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
        i0++;
      }

    }
  }

  RecognizeQrCodeResponse recognizeQrCodeResp = recognizeQrCodeWithOptions(recognizeQrCodeReq, runtime);
  return recognizeQrCodeResp;
}

/**
 * @summary 定额发票识别
 *
 * @param request RecognizeQuotaInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeQuotaInvoiceResponse
 */
RecognizeQuotaInvoiceResponse Client::recognizeQuotaInvoiceWithOptions(const RecognizeQuotaInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeQuotaInvoice"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeQuotaInvoiceResponse>();
}

/**
 * @summary 定额发票识别
 *
 * @param request RecognizeQuotaInvoiceRequest
 * @return RecognizeQuotaInvoiceResponse
 */
RecognizeQuotaInvoiceResponse Client::recognizeQuotaInvoice(const RecognizeQuotaInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeQuotaInvoiceWithOptions(request, runtime);
}

RecognizeQuotaInvoiceResponse Client::recognizeQuotaInvoiceAdvance(const RecognizeQuotaInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeQuotaInvoiceRequest recognizeQuotaInvoiceReq = RecognizeQuotaInvoiceRequest();
  Utils::Utils::convert(request, recognizeQuotaInvoiceReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeQuotaInvoiceReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceResp = recognizeQuotaInvoiceWithOptions(recognizeQuotaInvoiceReq, runtime);
  return recognizeQuotaInvoiceResp;
}

/**
 * @param request RecognizeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeTableResponse
 */
RecognizeTableResponse Client::recognizeTableWithOptions(const RecognizeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssureDirection()) {
    body["AssureDirection"] = request.assureDirection();
  }

  if (!!request.hasHasLine()) {
    body["HasLine"] = request.hasLine();
  }

  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  if (!!request.hasOutputFormat()) {
    body["OutputFormat"] = request.outputFormat();
  }

  if (!!request.hasSkipDetection()) {
    body["SkipDetection"] = request.skipDetection();
  }

  if (!!request.hasUseFinanceModel()) {
    body["UseFinanceModel"] = request.useFinanceModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeTable"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeTableResponse>();
}

/**
 * @param request RecognizeTableRequest
 * @return RecognizeTableResponse
 */
RecognizeTableResponse Client::recognizeTable(const RecognizeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeTableWithOptions(request, runtime);
}

RecognizeTableResponse Client::recognizeTableAdvance(const RecognizeTableAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeTableRequest recognizeTableReq = RecognizeTableRequest();
  Utils::Utils::convert(request, recognizeTableReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeTableReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeTableResponse recognizeTableResp = recognizeTableWithOptions(recognizeTableReq, runtime);
  return recognizeTableResp;
}

/**
 * @param request RecognizeTaxiInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeTaxiInvoiceResponse
 */
RecognizeTaxiInvoiceResponse Client::recognizeTaxiInvoiceWithOptions(const RecognizeTaxiInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeTaxiInvoice"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeTaxiInvoiceResponse>();
}

/**
 * @param request RecognizeTaxiInvoiceRequest
 * @return RecognizeTaxiInvoiceResponse
 */
RecognizeTaxiInvoiceResponse Client::recognizeTaxiInvoice(const RecognizeTaxiInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeTaxiInvoiceWithOptions(request, runtime);
}

RecognizeTaxiInvoiceResponse Client::recognizeTaxiInvoiceAdvance(const RecognizeTaxiInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeTaxiInvoiceRequest recognizeTaxiInvoiceReq = RecognizeTaxiInvoiceRequest();
  Utils::Utils::convert(request, recognizeTaxiInvoiceReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeTaxiInvoiceReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceResp = recognizeTaxiInvoiceWithOptions(recognizeTaxiInvoiceReq, runtime);
  return recognizeTaxiInvoiceResp;
}

/**
 * @summary 增值税发票卷票
 *
 * @param request RecognizeTicketInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeTicketInvoiceResponse
 */
RecognizeTicketInvoiceResponse Client::recognizeTicketInvoiceWithOptions(const RecognizeTicketInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeTicketInvoice"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeTicketInvoiceResponse>();
}

/**
 * @summary 增值税发票卷票
 *
 * @param request RecognizeTicketInvoiceRequest
 * @return RecognizeTicketInvoiceResponse
 */
RecognizeTicketInvoiceResponse Client::recognizeTicketInvoice(const RecognizeTicketInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeTicketInvoiceWithOptions(request, runtime);
}

RecognizeTicketInvoiceResponse Client::recognizeTicketInvoiceAdvance(const RecognizeTicketInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeTicketInvoiceRequest recognizeTicketInvoiceReq = RecognizeTicketInvoiceRequest();
  Utils::Utils::convert(request, recognizeTicketInvoiceReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeTicketInvoiceReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeTicketInvoiceResponse recognizeTicketInvoiceResp = recognizeTicketInvoiceWithOptions(recognizeTicketInvoiceReq, runtime);
  return recognizeTicketInvoiceResp;
}

/**
 * @param request RecognizeTrainTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeTrainTicketResponse
 */
RecognizeTrainTicketResponse Client::recognizeTrainTicketWithOptions(const RecognizeTrainTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageURL()) {
    body["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeTrainTicket"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeTrainTicketResponse>();
}

/**
 * @param request RecognizeTrainTicketRequest
 * @return RecognizeTrainTicketResponse
 */
RecognizeTrainTicketResponse Client::recognizeTrainTicket(const RecognizeTrainTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeTrainTicketWithOptions(request, runtime);
}

RecognizeTrainTicketResponse Client::recognizeTrainTicketAdvance(const RecognizeTrainTicketAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeTrainTicketRequest recognizeTrainTicketReq = RecognizeTrainTicketRequest();
  Utils::Utils::convert(request, recognizeTrainTicketReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeTrainTicketReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeTrainTicketResponse recognizeTrainTicketResp = recognizeTrainTicketWithOptions(recognizeTrainTicketReq, runtime);
  return recognizeTrainTicketResp;
}

/**
 * @param request RecognizeVATInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeVATInvoiceResponse
 */
RecognizeVATInvoiceResponse Client::recognizeVATInvoiceWithOptions(const RecognizeVATInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasFileURL()) {
    body["FileURL"] = request.fileURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeVATInvoice"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeVATInvoiceResponse>();
}

/**
 * @param request RecognizeVATInvoiceRequest
 * @return RecognizeVATInvoiceResponse
 */
RecognizeVATInvoiceResponse Client::recognizeVATInvoice(const RecognizeVATInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeVATInvoiceWithOptions(request, runtime);
}

RecognizeVATInvoiceResponse Client::recognizeVATInvoiceAdvance(const RecognizeVATInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeVATInvoiceRequest recognizeVATInvoiceReq = RecognizeVATInvoiceRequest();
  Utils::Utils::convert(request, recognizeVATInvoiceReq);
  if (!!request.hasFileURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileURLObject()},
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
    recognizeVATInvoiceReq.setFileURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeVATInvoiceResponse recognizeVATInvoiceResp = recognizeVATInvoiceWithOptions(recognizeVATInvoiceReq, runtime);
  return recognizeVATInvoiceResp;
}

/**
 * @param request RecognizeVINCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeVINCodeResponse
 */
RecognizeVINCodeResponse Client::recognizeVINCodeWithOptions(const RecognizeVINCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageURL()) {
    query["ImageURL"] = request.imageURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecognizeVINCode"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeVINCodeResponse>();
}

/**
 * @param request RecognizeVINCodeRequest
 * @return RecognizeVINCodeResponse
 */
RecognizeVINCodeResponse Client::recognizeVINCode(const RecognizeVINCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeVINCodeWithOptions(request, runtime);
}

RecognizeVINCodeResponse Client::recognizeVINCodeAdvance(const RecognizeVINCodeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeVINCodeRequest recognizeVINCodeReq = RecognizeVINCodeRequest();
  Utils::Utils::convert(request, recognizeVINCodeReq);
  if (!!request.hasImageURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.imageURLObject()},
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
    recognizeVINCodeReq.setImageURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeVINCodeResponse recognizeVINCodeResp = recognizeVINCodeWithOptions(recognizeVINCodeReq, runtime);
  return recognizeVINCodeResp;
}

/**
 * @summary 通用视频文字识别
 *
 * @param request RecognizeVideoCharacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeVideoCharacterResponse
 */
RecognizeVideoCharacterResponse Client::recognizeVideoCharacterWithOptions(const RecognizeVideoCharacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVideoURL()) {
    body["VideoURL"] = request.videoURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RecognizeVideoCharacter"},
    {"version" , "2019-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeVideoCharacterResponse>();
}

/**
 * @summary 通用视频文字识别
 *
 * @param request RecognizeVideoCharacterRequest
 * @return RecognizeVideoCharacterResponse
 */
RecognizeVideoCharacterResponse Client::recognizeVideoCharacter(const RecognizeVideoCharacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeVideoCharacterWithOptions(request, runtime);
}

RecognizeVideoCharacterResponse Client::recognizeVideoCharacterAdvance(const RecognizeVideoCharacterAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ocr"},
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
  RecognizeVideoCharacterRequest recognizeVideoCharacterReq = RecognizeVideoCharacterRequest();
  Utils::Utils::convert(request, recognizeVideoCharacterReq);
  if (!!request.hasVideoURLObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.videoURLObject()},
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
    recognizeVideoCharacterReq.setVideoURL(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  RecognizeVideoCharacterResponse recognizeVideoCharacterResp = recognizeVideoCharacterWithOptions(recognizeVideoCharacterReq, runtime);
  return recognizeVideoCharacterResp;
}
} // namespace AlibabaCloud
} // namespace Ocr20191230