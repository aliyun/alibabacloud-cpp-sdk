#include <darabonba/Core.hpp>
#include <alibabacloud/ImageSearch20201214.hpp>
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
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ImageSearch20201214::Models;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{

AlibabaCloud::ImageSearch20201214::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "imagesearch.eu-central-1.aliyuncs.com"},
    {"cn-shenzhen" , "imagesearch.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "imagesearch.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "imagesearch.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "imagesearch.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "imagesearch.cn-beijing.aliyuncs.com"},
    {"ap-southeast-2" , "imagesearch.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "imagesearch.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "imagesearch.ap-south-1.aliyuncs.com"},
    {"ap-northeast-1" , "imagesearch.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("imagesearch", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Describes the syntax and provides examples of the AddImage operation, which adds image information to an Image Search instance.
 *
 * @description ## Description
 * This operation adds image information to an Image Search instance.
 * ## QPS limit
 * An instance with a maximum image capacity of 100,000 has a default concurrency of 1, which means that a maximum of 1 image addition request can be processed per second.
 * Instances with other image capacities have a default concurrency of 5, which means that a maximum of 5 image addition requests can be processed per second.
 *
 * @param request AddImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageResponse
 */
AddImageResponse Client::addImageWithOptions(const AddImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasCustomContent()) {
    body["CustomContent"] = request.getCustomContent();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIntAttr()) {
    body["IntAttr"] = request.getIntAttr();
  }

  if (!!request.hasIntAttr2()) {
    body["IntAttr2"] = request.getIntAttr2();
  }

  if (!!request.hasIntAttr3()) {
    body["IntAttr3"] = request.getIntAttr3();
  }

  if (!!request.hasIntAttr4()) {
    body["IntAttr4"] = request.getIntAttr4();
  }

  if (!!request.hasPicContent()) {
    body["PicContent"] = request.getPicContent();
  }

  if (!!request.hasPicName()) {
    body["PicName"] = request.getPicName();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasStrAttr()) {
    body["StrAttr"] = request.getStrAttr();
  }

  if (!!request.hasStrAttr2()) {
    body["StrAttr2"] = request.getStrAttr2();
  }

  if (!!request.hasStrAttr3()) {
    body["StrAttr3"] = request.getStrAttr3();
  }

  if (!!request.hasStrAttr4()) {
    body["StrAttr4"] = request.getStrAttr4();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddImage"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageResponse>();
}

/**
 * @summary Describes the syntax and provides examples of the AddImage operation, which adds image information to an Image Search instance.
 *
 * @description ## Description
 * This operation adds image information to an Image Search instance.
 * ## QPS limit
 * An instance with a maximum image capacity of 100,000 has a default concurrency of 1, which means that a maximum of 1 image addition request can be processed per second.
 * Instances with other image capacities have a default concurrency of 5, which means that a maximum of 5 image addition requests can be processed per second.
 *
 * @param request AddImageRequest
 * @return AddImageResponse
 */
AddImageResponse Client::addImage(const AddImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImageWithOptions(request, runtime);
}

AddImageResponse Client::addImageAdvance(const AddImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ImageSearch"},
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
  AddImageRequest addImageReq = AddImageRequest();
  Utils::Utils::convert(request, addImageReq);
  if (!!request.hasPicContentObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getPicContentObject()},
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
    addImageReq.setPicContent(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  AddImageResponse addImageResp = addImageWithOptions(addImageReq, runtime);
  return addImageResp;
}

/**
 * @summary CheckImageExists
 *
 * @description ## How-To  
 * This API is used to query image information in an Image Search instance based on an image.
 * ## QPS Limit  
 * The default maximum queries per second (QPS) for query operations can be viewed in the console. It corresponds to the Visit Frequency (QPS) you selected when purchasing the instance. Supported QPS values are 1, 5, and 10.
 * ### SDK Version Guide  
 * Upgrade the Image SDK to version V3.1.1 to use the "subject identification" and "similarity score" features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request CheckImageExistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckImageExistsResponse
 */
CheckImageExistsResponse Client::checkImageExistsWithOptions(const CheckImageExistsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPicName()) {
    body["PicName"] = request.getPicName();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CheckImageExists"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckImageExistsResponse>();
}

/**
 * @summary CheckImageExists
 *
 * @description ## How-To  
 * This API is used to query image information in an Image Search instance based on an image.
 * ## QPS Limit  
 * The default maximum queries per second (QPS) for query operations can be viewed in the console. It corresponds to the Visit Frequency (QPS) you selected when purchasing the instance. Supported QPS values are 1, 5, and 10.
 * ### SDK Version Guide  
 * Upgrade the Image SDK to version V3.1.1 to use the "subject identification" and "similarity score" features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request CheckImageExistsRequest
 * @return CheckImageExistsResponse
 */
CheckImageExistsResponse Client::checkImageExists(const CheckImageExistsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkImageExistsWithOptions(request, runtime);
}

/**
 * @summary Compares two images and returns a similarity score.
 *
 * @param request CompareSimilarByImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareSimilarByImageResponse
 */
CompareSimilarByImageResponse Client::compareSimilarByImageWithOptions(const CompareSimilarByImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPrimaryPicContent()) {
    body["PrimaryPicContent"] = request.getPrimaryPicContent();
  }

  if (!!request.hasSecondaryPicContent()) {
    body["SecondaryPicContent"] = request.getSecondaryPicContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CompareSimilarByImage"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareSimilarByImageResponse>();
}

/**
 * @summary Compares two images and returns a similarity score.
 *
 * @param request CompareSimilarByImageRequest
 * @return CompareSimilarByImageResponse
 */
CompareSimilarByImageResponse Client::compareSimilarByImage(const CompareSimilarByImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareSimilarByImageWithOptions(request, runtime);
}

CompareSimilarByImageResponse Client::compareSimilarByImageAdvance(const CompareSimilarByImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ImageSearch"},
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
  CompareSimilarByImageRequest compareSimilarByImageReq = CompareSimilarByImageRequest();
  Utils::Utils::convert(request, compareSimilarByImageReq);
  if (!!request.hasPrimaryPicContentObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getPrimaryPicContentObject()},
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
    compareSimilarByImageReq.setPrimaryPicContent(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  if (!!request.hasSecondaryPicContentObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getSecondaryPicContentObject()},
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
    compareSimilarByImageReq.setSecondaryPicContent(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CompareSimilarByImageResponse compareSimilarByImageResp = compareSimilarByImageWithOptions(compareSimilarByImageReq, runtime);
  return compareSimilarByImageResp;
}

/**
 * @summary This topic describes the syntax and examples of the DeleteImage operation, which is used to delete image information from an Image Search instance.
 *
 * @description ## Operation description
 * This operation is used to delete image information from an Image Search instance.
 * >- If the specified image does not exist in the Image Search instance, this operation still returns a success response. Do not use the response to determine whether the image exists.
 * ## QPS limit
 * The default concurrency for delete operations is 20, which means a maximum of 20 delete requests can be processed per second.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIsDeleteByFilter()) {
    body["IsDeleteByFilter"] = request.getIsDeleteByFilter();
  }

  if (!!request.hasPicName()) {
    body["PicName"] = request.getPicName();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteImage"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageResponse>();
}

/**
 * @summary This topic describes the syntax and examples of the DeleteImage operation, which is used to delete image information from an Image Search instance.
 *
 * @description ## Operation description
 * This operation is used to delete image information from an Image Search instance.
 * >- If the specified image does not exist in the Image Search instance, this operation still returns a success response. Do not use the response to determine whether the image exists.
 * ## QPS limit
 * The default concurrency for delete operations is 20, which means a maximum of 20 delete requests can be processed per second.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary This topic describes the syntax and examples of the Detail operation, which queries information about an Image Search instance by name.
 *
 * @description ## Operation description
 * This operation queries instance information from an Image Search instance.
 * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request DetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailResponse
 */
DetailResponse Client::detailWithOptions(const DetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Detail"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailResponse>();
}

/**
 * @summary This topic describes the syntax and examples of the Detail operation, which queries information about an Image Search instance by name.
 *
 * @description ## Operation description
 * This operation queries instance information from an Image Search instance.
 * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request DetailRequest
 * @return DetailResponse
 */
DetailResponse Client::detail(const DetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detailWithOptions(request, runtime);
}

/**
 * @summary This topic describes the syntax and examples of the DumpMeta operation, which creates a metadata export task for Image Search by name.
 *
 * @description ## Operation description
 * This operation submits a metadata export task to an Image Search instance.
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for submit operations is 1, which means a maximum of 1 request is processed per second.
 * > You cannot submit a new metadata export task while the previous metadata export task is still in progress.
 *
 * @param request DumpMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DumpMetaResponse
 */
DumpMetaResponse Client::dumpMetaWithOptions(const DumpMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DumpMeta"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DumpMetaResponse>();
}

/**
 * @summary This topic describes the syntax and examples of the DumpMeta operation, which creates a metadata export task for Image Search by name.
 *
 * @description ## Operation description
 * This operation submits a metadata export task to an Image Search instance.
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for submit operations is 1, which means a maximum of 1 request is processed per second.
 * > You cannot submit a new metadata export task while the previous metadata export task is still in progress.
 *
 * @param request DumpMetaRequest
 * @return DumpMetaResponse
 */
DumpMetaResponse Client::dumpMeta(const DumpMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dumpMetaWithOptions(request, runtime);
}

/**
 * @summary Describes the syntax and provides examples of the DumpMetaList operation, which queries the list of metadata export tasks in an Image Search instance.
 *
 * @description ## Operation description
 * This operation queries metadata export tasks in an Image Search instance.
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request DumpMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DumpMetaListResponse
 */
DumpMetaListResponse Client::dumpMetaListWithOptions(const DumpMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DumpMetaList"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DumpMetaListResponse>();
}

/**
 * @summary Describes the syntax and provides examples of the DumpMetaList operation, which queries the list of metadata export tasks in an Image Search instance.
 *
 * @description ## Operation description
 * This operation queries metadata export tasks in an Image Search instance.
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request DumpMetaListRequest
 * @return DumpMetaListResponse
 */
DumpMetaListResponse Client::dumpMetaList(const DumpMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dumpMetaListWithOptions(request, runtime);
}

/**
 * @summary Describes the syntax and provides examples of the IncreaseInstance operation, which is used to create a batch task for an Image Search instance by name.
 *
 * @description ## Operation description
 * This operation is used to submit a batch task to an Image Search instance.
 * > <props="china">For more information about the product or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us by using DingTalk group 35035130.
 * ## QPS limit
 * Only one batch task can run at a time.
 * > You cannot submit a new batch task until the previous batch task is complete.
 *
 * @param request IncreaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IncreaseInstanceResponse
 */
IncreaseInstanceResponse Client::increaseInstanceWithOptions(const IncreaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasCallbackAddress()) {
    query["CallbackAddress"] = request.getCallbackAddress();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IncreaseInstance"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IncreaseInstanceResponse>();
}

/**
 * @summary Describes the syntax and provides examples of the IncreaseInstance operation, which is used to create a batch task for an Image Search instance by name.
 *
 * @description ## Operation description
 * This operation is used to submit a batch task to an Image Search instance.
 * > <props="china">For more information about the product or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us by using DingTalk group 35035130.
 * ## QPS limit
 * Only one batch task can run at a time.
 * > You cannot submit a new batch task until the previous batch task is complete.
 *
 * @param request IncreaseInstanceRequest
 * @return IncreaseInstanceResponse
 */
IncreaseInstanceResponse Client::increaseInstance(const IncreaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return increaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the list of batch tasks in an Image Search instance by calling the IncreaseList operation. This topic describes the syntax and provides examples.
 *
 * @description ## Operation description
 * This operation is used to query batch tasks in an Image Search instance.
 * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request IncreaseListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IncreaseListResponse
 */
IncreaseListResponse Client::increaseListWithOptions(const IncreaseListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IncreaseList"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IncreaseListResponse>();
}

/**
 * @summary Queries the list of batch tasks in an Image Search instance by calling the IncreaseList operation. This topic describes the syntax and provides examples.
 *
 * @description ## Operation description
 * This operation is used to query batch tasks in an Image Search instance.
 * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
 *
 * @param request IncreaseListRequest
 * @return IncreaseListResponse
 */
IncreaseListResponse Client::increaseList(const IncreaseListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return increaseListWithOptions(request, runtime);
}

/**
 * @summary This topic describes the syntax and examples of SearchImageByFilter, which is used to query image information in an Image Search instance based on filter conditions.
 *
 * @param request SearchImageByFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageByFilterResponse
 */
SearchImageByFilterResponse Client::searchImageByFilterWithOptions(const SearchImageByFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNum()) {
    body["Num"] = request.getNum();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SearchImageByFilter"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageByFilterResponse>();
}

/**
 * @summary This topic describes the syntax and examples of SearchImageByFilter, which is used to query image information in an Image Search instance based on filter conditions.
 *
 * @param request SearchImageByFilterRequest
 * @return SearchImageByFilterResponse
 */
SearchImageByFilterResponse Client::searchImageByFilter(const SearchImageByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageByFilterWithOptions(request, runtime);
}

/**
 * @summary This topic describes the syntax and examples of the SearchByName operation, which is used to query image information in an Image Search instance by name.
 *
 * @description ### Operation description
 * This operation queries image information in an Image Search instance by name (ProductId and PicName).
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ### QPS limit
 * The default maximum query rate can be viewed in the console. It is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
 *
 * @param request SearchImageByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageByNameResponse
 */
SearchImageByNameResponse Client::searchImageByNameWithOptions(const SearchImageByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScoreThreshold()) {
    query["ScoreThreshold"] = request.getScoreThreshold();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDistinctProductId()) {
    body["DistinctProductId"] = request.getDistinctProductId();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNum()) {
    body["Num"] = request.getNum();
  }

  if (!!request.hasPicName()) {
    body["PicName"] = request.getPicName();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchImageByName"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageByNameResponse>();
}

/**
 * @summary This topic describes the syntax and examples of the SearchByName operation, which is used to query image information in an Image Search instance by name.
 *
 * @description ### Operation description
 * This operation queries image information in an Image Search instance by name (ProductId and PicName).
 * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ### QPS limit
 * The default maximum query rate can be viewed in the console. It is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
 *
 * @param request SearchImageByNameRequest
 * @return SearchImageByNameResponse
 */
SearchImageByNameResponse Client::searchImageByName(const SearchImageByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageByNameWithOptions(request, runtime);
}

/**
 * @summary This topic describes the syntax and examples of SearchByPic, which is used to search for image information in an Image Search instance by image.
 *
 * @description ## Operation description
 * This operation is used to search for image information in an Image Search instance by image.
 * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value that you selected when you made the purchase. The supported values are 1 QPS, 5 QPS, and 10 QPS.
 * ### SDK version description
 * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request SearchImageByPicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageByPicResponse
 */
SearchImageByPicResponse Client::searchImageByPicWithOptions(const SearchImageByPicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScoreThreshold()) {
    query["ScoreThreshold"] = request.getScoreThreshold();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasDistinctProductId()) {
    body["DistinctProductId"] = request.getDistinctProductId();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNum()) {
    body["Num"] = request.getNum();
  }

  if (!!request.hasPicContent()) {
    body["PicContent"] = request.getPicContent();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchImageByPic"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageByPicResponse>();
}

/**
 * @summary This topic describes the syntax and examples of SearchByPic, which is used to search for image information in an Image Search instance by image.
 *
 * @description ## Operation description
 * This operation is used to search for image information in an Image Search instance by image.
 * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
 * ## QPS limit
 * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value that you selected when you made the purchase. The supported values are 1 QPS, 5 QPS, and 10 QPS.
 * ### SDK version description
 * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request SearchImageByPicRequest
 * @return SearchImageByPicResponse
 */
SearchImageByPicResponse Client::searchImageByPic(const SearchImageByPicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageByPicWithOptions(request, runtime);
}

SearchImageByPicResponse Client::searchImageByPicAdvance(const SearchImageByPicAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ImageSearch"},
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
  SearchImageByPicRequest searchImageByPicReq = SearchImageByPicRequest();
  Utils::Utils::convert(request, searchImageByPicReq);
  if (!!request.hasPicContentObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getPicContentObject()},
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
    searchImageByPicReq.setPicContent(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SearchImageByPicResponse searchImageByPicResp = searchImageByPicWithOptions(searchImageByPicReq, runtime);
  return searchImageByPicResp;
}

/**
 * @summary This topic describes the syntax and examples of SearchImageByText, which is used to search for image information in an Image Search instance based on text.
 *
 * @description ## Operation description
 * This operation is used to search for image information in an Image Search instance based on text. This operation is available only for instances whose service type is product multimodal search.
 * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
 * ## QPS limit
 * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
 * ### SDK version description
 * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request SearchImageByTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageByTextResponse
 */
SearchImageByTextResponse Client::searchImageByTextWithOptions(const SearchImageByTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScoreThreshold()) {
    query["ScoreThreshold"] = request.getScoreThreshold();
  }

  json body = {};
  if (!!request.hasDistinctProductId()) {
    body["DistinctProductId"] = request.getDistinctProductId();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNum()) {
    body["Num"] = request.getNum();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  if (!!request.hasText()) {
    body["Text"] = request.getText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchImageByText"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageByTextResponse>();
}

/**
 * @summary This topic describes the syntax and examples of SearchImageByText, which is used to search for image information in an Image Search instance based on text.
 *
 * @description ## Operation description
 * This operation is used to search for image information in an Image Search instance based on text. This operation is available only for instances whose service type is product multimodal search.
 * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
 * ## QPS limit
 * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
 * ### SDK version description
 * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
 *
 * @param request SearchImageByTextRequest
 * @return SearchImageByTextResponse
 */
SearchImageByTextResponse Client::searchImageByText(const SearchImageByTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageByTextWithOptions(request, runtime);
}

/**
 * @summary Updates the image information in an Image Search instance.
 *
 * @description ## Usage notes
 * This operation updates the image information in an Image Search instance based on the product ID and image name.
 * > - The instance must meet the creation date requirements.
 * <props="china">
 * - Instances created after June 2021 in the Shanghai and Hangzhou regions are supported. Instances in other regions can be used normally.
 * <props="intl">
 * - Instances created after December 2021 in the Singapore region are supported. Instances in other regions are currently unavailable.
 * - For more information about the product and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for update operations is 20, which means that a maximum of 20 requests can be processed per second.
 *
 * @param request UpdateImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageResponse
 */
UpdateImageResponse Client::updateImageWithOptions(const UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIntAttr3()) {
    query["IntAttr3"] = request.getIntAttr3();
  }

  if (!!request.hasIntAttr4()) {
    query["IntAttr4"] = request.getIntAttr4();
  }

  if (!!request.hasStrAttr3()) {
    query["StrAttr3"] = request.getStrAttr3();
  }

  if (!!request.hasStrAttr4()) {
    query["StrAttr4"] = request.getStrAttr4();
  }

  json body = {};
  if (!!request.hasCustomContent()) {
    body["CustomContent"] = request.getCustomContent();
  }

  if (!!request.hasInstanceName()) {
    body["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIntAttr()) {
    body["IntAttr"] = request.getIntAttr();
  }

  if (!!request.hasIntAttr2()) {
    body["IntAttr2"] = request.getIntAttr2();
  }

  if (!!request.hasPicName()) {
    body["PicName"] = request.getPicName();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasStrAttr()) {
    body["StrAttr"] = request.getStrAttr();
  }

  if (!!request.hasStrAttr2()) {
    body["StrAttr2"] = request.getStrAttr2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateImage"},
    {"version" , "2020-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageResponse>();
}

/**
 * @summary Updates the image information in an Image Search instance.
 *
 * @description ## Usage notes
 * This operation updates the image information in an Image Search instance based on the product ID and image name.
 * > - The instance must meet the creation date requirements.
 * <props="china">
 * - Instances created after June 2021 in the Shanghai and Hangzhou regions are supported. Instances in other regions can be used normally.
 * <props="intl">
 * - Instances created after December 2021 in the Singapore region are supported. Instances in other regions are currently unavailable.
 * - For more information about the product and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
 * ## QPS limit
 * The default concurrency for update operations is 20, which means that a maximum of 20 requests can be processed per second.
 *
 * @param request UpdateImageRequest
 * @return UpdateImageResponse
 */
UpdateImageResponse Client::updateImage(const UpdateImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ImageSearch20201214