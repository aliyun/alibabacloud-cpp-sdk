#include <darabonba/Core.hpp>
#include <alibabacloud/CloudauthIntl20220809.hpp>
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
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::CloudauthIntl20220809::Models;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{

AlibabaCloud::CloudauthIntl20220809::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudauth-intl", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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

  shared_ptr<Darabonba::Http::Request> _lastRequest = nullptr;
  shared_ptr<Darabonba::Http::MCurlResponse> _lastResponse = nullptr;
  Darabonba::Exception _lastException;
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
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , Darabonba::Convert::stringVal(form["host"])},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.getHeaders()["content-type"] = DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary);
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      _lastRequest = make_shared<Darabonba::Http::Request>(request_);
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();
      _lastResponse  = response_;

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->getBody());
      if ((response_->getStatusCode() >= 400) && (response_->getStatusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap["Error"]);
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err["Code"])},
          {"message" , Darabonba::Convert::stringVal(err["Message"])},
          {"data" , json({
            {"httpCode" , response_->getStatusCode()},
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

  throw *_context.getException();
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
 * @summary 人脸图片入库
 *
 * @param request AddFaceRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFaceRecordResponse
 */
AddFaceRecordResponse Client::addFaceRecordWithOptions(const AddFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFaceGroupCode()) {
    body["FaceGroupCode"] = request.getFaceGroupCode();
  }

  if (!!request.hasFacePicture()) {
    body["FacePicture"] = request.getFacePicture();
  }

  if (!!request.hasFacePictureFile()) {
    body["FacePictureFile"] = request.getFacePictureFile();
  }

  if (!!request.hasFacePictureUrl()) {
    body["FacePictureUrl"] = request.getFacePictureUrl();
  }

  if (!!request.hasFaceQualityCheck()) {
    body["FaceQualityCheck"] = request.getFaceQualityCheck();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddFaceRecord"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFaceRecordResponse>();
}

/**
 * @summary 人脸图片入库
 *
 * @param request AddFaceRecordRequest
 * @return AddFaceRecordResponse
 */
AddFaceRecordResponse Client::addFaceRecord(const AddFaceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFaceRecordWithOptions(request, runtime);
}

AddFaceRecordResponse Client::addFaceRecordAdvance(const AddFaceRecordAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth-intl"},
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
  AddFaceRecordRequest addFaceRecordReq = AddFaceRecordRequest();
  Utils::Utils::convert(request, addFaceRecordReq);
  if (!!request.hasFacePictureFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFacePictureFileObject()},
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
    addFaceRecordReq.setFacePictureFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  AddFaceRecordResponse addFaceRecordResp = addFaceRecordWithOptions(addFaceRecordReq, runtime);
  return addFaceRecordResp;
}

/**
 * @summary Address Similarity Comparison
 *
 * @description API for comparing two addresses, standardizing and checking address consistency.
 *
 * @param request AddressCompareIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressCompareIntlResponse
 */
AddressCompareIntlResponse Client::addressCompareIntlWithOptions(const AddressCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultCountry()) {
    query["DefaultCountry"] = request.getDefaultCountry();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasText1()) {
    query["Text1"] = request.getText1();
  }

  if (!!request.hasText2()) {
    query["Text2"] = request.getText2();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddressCompareIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddressCompareIntlResponse>();
}

/**
 * @summary Address Similarity Comparison
 *
 * @description API for comparing two addresses, standardizing and checking address consistency.
 *
 * @param request AddressCompareIntlRequest
 * @return AddressCompareIntlResponse
 */
AddressCompareIntlResponse Client::addressCompareIntl(const AddressCompareIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addressCompareIntlWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddressVerifyIntl is deprecated, please use Cloudauth-intl::2022-08-09::AddressVerifyV2Intl instead.
 *
 * @summary Address Verification
 *
 * @description Based on the operator\\"s capabilities, input the phone number and address (or latitude and longitude) to verify whether the provided address is the user\\"s usual residence.
 *
 * @param request AddressVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressVerifyIntlResponse
 */
AddressVerifyIntlResponse Client::addressVerifyIntlWithOptions(const AddressVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasDefaultCity()) {
    query["DefaultCity"] = request.getDefaultCity();
  }

  if (!!request.hasDefaultCountry()) {
    query["DefaultCountry"] = request.getDefaultCountry();
  }

  if (!!request.hasDefaultDistrict()) {
    query["DefaultDistrict"] = request.getDefaultDistrict();
  }

  if (!!request.hasDefaultProvince()) {
    query["DefaultProvince"] = request.getDefaultProvince();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.getLatitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.getLongitude();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddressVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddressVerifyIntlResponse>();
}

/**
 * @deprecated OpenAPI AddressVerifyIntl is deprecated, please use Cloudauth-intl::2022-08-09::AddressVerifyV2Intl instead.
 *
 * @summary Address Verification
 *
 * @description Based on the operator\\"s capabilities, input the phone number and address (or latitude and longitude) to verify whether the provided address is the user\\"s usual residence.
 *
 * @param request AddressVerifyIntlRequest
 * @return AddressVerifyIntlResponse
 */
AddressVerifyIntlResponse Client::addressVerifyIntl(const AddressVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addressVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary This topic describes the address verification API operation, which verifies the region and address of a device using device data and carrier big data capabilities.
 *
 * @param request AddressVerifyV2IntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressVerifyV2IntlResponse
 */
AddressVerifyV2IntlResponse Client::addressVerifyV2IntlWithOptions(const AddressVerifyV2IntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.getDeviceToken();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRegCountry()) {
    query["RegCountry"] = request.getRegCountry();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddressVerifyV2Intl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddressVerifyV2IntlResponse>();
}

/**
 * @summary This topic describes the address verification API operation, which verifies the region and address of a device using device data and carrier big data capabilities.
 *
 * @param request AddressVerifyV2IntlRequest
 * @return AddressVerifyV2IntlResponse
 */
AddressVerifyV2IntlResponse Client::addressVerifyV2Intl(const AddressVerifyV2IntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addressVerifyV2IntlWithOptions(request, runtime);
}

/**
 * @summary Bank Card Verification
 *
 * @description Verification of bank card elements, including: two-element verification (name + bank card number), three-element verification (name + ID number + bank card number), and four-element verification (name + ID number + phone number + bank card number) for consistency.
 *
 * @param request BankMetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BankMetaVerifyIntlResponse
 */
BankMetaVerifyIntlResponse Client::bankMetaVerifyIntlWithOptions(const BankMetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBankCard()) {
    query["BankCard"] = request.getBankCard();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVerifyMode()) {
    query["VerifyMode"] = request.getVerifyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BankMetaVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BankMetaVerifyIntlResponse>();
}

/**
 * @summary Bank Card Verification
 *
 * @description Verification of bank card elements, including: two-element verification (name + bank card number), three-element verification (name + ID number + bank card number), and four-element verification (name + ID number + phone number + bank card number) for consistency.
 *
 * @param request BankMetaVerifyIntlRequest
 * @return BankMetaVerifyIntlResponse
 */
BankMetaVerifyIntlResponse Client::bankMetaVerifyIntl(const BankMetaVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bankMetaVerifyIntlWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
 *
 * @summary Pure server-side interface for document OCR recognition
 *
 * @param request CardOcrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CardOcrResponse
 */
CardOcrResponse Client::cardOcrWithOptions(const CardOcrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.getIdFaceQuality();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.getIdOcrPictureUrl();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.getOcr();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSpoof()) {
    query["Spoof"] = request.getSpoof();
  }

  json body = {};
  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.getIdOcrPictureBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CardOcr"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CardOcrResponse>();
}

/**
 * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
 *
 * @summary Pure server-side interface for document OCR recognition
 *
 * @param request CardOcrRequest
 * @return CardOcrResponse
 */
CardOcrResponse Client::cardOcr(const CardOcrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cardOcrWithOptions(request, runtime);
}

/**
 * @summary Result Query
 *
 * @param request CheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckResultResponse
 */
CheckResultResponse Client::checkResultWithOptions(const CheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraImageControlList()) {
    query["ExtraImageControlList"] = request.getExtraImageControlList();
  }

  if (!!request.hasIsReturnImage()) {
    query["IsReturnImage"] = request.getIsReturnImage();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasReturnFiveCategorySpoofResult()) {
    query["ReturnFiveCategorySpoofResult"] = request.getReturnFiveCategorySpoofResult();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.getTransactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckResult"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckResultResponse>();
}

/**
 * @summary Result Query
 *
 * @param request CheckResultRequest
 * @return CheckResultResponse
 */
CheckResultResponse Client::checkResult(const CheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResultWithOptions(request, runtime);
}

/**
 * @summary Authentication Log Query Interface
 *
 * @param request CheckVerifyLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckVerifyLogResponse
 */
CheckVerifyLogResponse Client::checkVerifyLogWithOptions(const CheckVerifyLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasTransactionId()) {
    body["TransactionId"] = request.getTransactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CheckVerifyLog"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckVerifyLogResponse>();
}

/**
 * @summary Authentication Log Query Interface
 *
 * @param request CheckVerifyLogRequest
 * @return CheckVerifyLogResponse
 */
CheckVerifyLogResponse Client::checkVerifyLog(const CheckVerifyLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkVerifyLogWithOptions(request, runtime);
}

/**
 * @summary Credential Recognition Query
 *
 * @description After obtaining the TransactionId, you can use this interface on the server side to get the corresponding authentication result.
 *
 * @param request CredentialGetResultIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialGetResultIntlResponse
 */
CredentialGetResultIntlResponse Client::credentialGetResultIntlWithOptions(const CredentialGetResultIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.getTransactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CredentialGetResultIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialGetResultIntlResponse>();
}

/**
 * @summary Credential Recognition Query
 *
 * @description After obtaining the TransactionId, you can use this interface on the server side to get the corresponding authentication result.
 *
 * @param request CredentialGetResultIntlRequest
 * @return CredentialGetResultIntlResponse
 */
CredentialGetResultIntlResponse Client::credentialGetResultIntl(const CredentialGetResultIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialGetResultIntlWithOptions(request, runtime);
}

/**
 * @summary Credential Recognition
 *
 * @description Detects whether a voucher (such as water, electricity, gas, credit card, etc., e-bills) is forged using AI technology and extracts key information from the voucher.
 *
 * @param request CredentialRecognitionIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialRecognitionIntlResponse
 */
CredentialRecognitionIntlResponse Client::credentialRecognitionIntlWithOptions(const CredentialRecognitionIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasFraudCheck()) {
    query["FraudCheck"] = request.getFraudCheck();
  }

  if (!!request.hasOcrArea()) {
    query["OcrArea"] = request.getOcrArea();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  json body = {};
  if (!!request.hasCredentialOcrPictureBase64()) {
    body["CredentialOcrPictureBase64"] = request.getCredentialOcrPictureBase64();
  }

  if (!!request.hasCredentialOcrPictureUrl()) {
    body["CredentialOcrPictureUrl"] = request.getCredentialOcrPictureUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CredentialRecognitionIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialRecognitionIntlResponse>();
}

/**
 * @summary Credential Recognition
 *
 * @description Detects whether a voucher (such as water, electricity, gas, credit card, etc., e-bills) is forged using AI technology and extracts key information from the voucher.
 *
 * @param request CredentialRecognitionIntlRequest
 * @return CredentialRecognitionIntlResponse
 */
CredentialRecognitionIntlResponse Client::credentialRecognitionIntl(const CredentialRecognitionIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialRecognitionIntlWithOptions(request, runtime);
}

/**
 * @summary Credential Recognition Submission
 *
 * @description Initialization interface for credential recognition OCR, through which you can obtain the transactionId.
 *
 * @param request CredentialSubmitIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialSubmitIntlResponse
 */
CredentialSubmitIntlResponse Client::credentialSubmitIntlWithOptions(const CredentialSubmitIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasFraudCheck()) {
    query["FraudCheck"] = request.getFraudCheck();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasOcrArea()) {
    query["OcrArea"] = request.getOcrArea();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  json body = {};
  if (!!request.hasCredentialOcrPictureBase64()) {
    body["CredentialOcrPictureBase64"] = request.getCredentialOcrPictureBase64();
  }

  if (!!request.hasCredentialOcrPictureUrl()) {
    body["CredentialOcrPictureUrl"] = request.getCredentialOcrPictureUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CredentialSubmitIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialSubmitIntlResponse>();
}

/**
 * @summary Credential Recognition Submission
 *
 * @description Initialization interface for credential recognition OCR, through which you can obtain the transactionId.
 *
 * @param request CredentialSubmitIntlRequest
 * @return CredentialSubmitIntlResponse
 */
CredentialSubmitIntlResponse Client::credentialSubmitIntl(const CredentialSubmitIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialSubmitIntlWithOptions(request, runtime);
}

/**
 * @summary Credential Verification
 *
 * @description Input credential image information, perform image quality, tampering, and forgery detection, and return the detection results.
 *
 * @param request CredentialVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialVerifyIntlResponse
 */
CredentialVerifyIntlResponse Client::credentialVerifyIntlWithOptions(const CredentialVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredName()) {
    query["CredName"] = request.getCredName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.getCredType();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  json body = {};
  if (!!request.hasImageFile()) {
    body["ImageFile"] = request.getImageFile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CredentialVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialVerifyIntlResponse>();
}

/**
 * @summary Credential Verification
 *
 * @description Input credential image information, perform image quality, tampering, and forgery detection, and return the detection results.
 *
 * @param request CredentialVerifyIntlRequest
 * @return CredentialVerifyIntlResponse
 */
CredentialVerifyIntlResponse Client::credentialVerifyIntl(const CredentialVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialVerifyIntlWithOptions(request, runtime);
}

CredentialVerifyIntlResponse Client::credentialVerifyIntlAdvance(const CredentialVerifyIntlAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth-intl"},
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
  CredentialVerifyIntlRequest credentialVerifyIntlReq = CredentialVerifyIntlRequest();
  Utils::Utils::convert(request, credentialVerifyIntlReq);
  if (!!request.hasImageFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getImageFileObject()},
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
    credentialVerifyIntlReq.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialVerifyIntlResponse credentialVerifyIntlResp = credentialVerifyIntlWithOptions(credentialVerifyIntlReq, runtime);
  return credentialVerifyIntlResp;
}

/**
 * @summary Face Credential Verification
 *
 * @description Input a face image and use the algorithm to detect if there is a risk of deep forgery. This includes risk scenarios such as AIGC-generated faces, deepfake face swapping, template faces, and rephotographed faces, and outputs risk labels and confidence levels.
 *
 * @param request DeepfakeDetectIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepfakeDetectIntlResponse
 */
DeepfakeDetectIntlResponse Client::deepfakeDetectIntlWithOptions(const DeepfakeDetectIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaceInputType()) {
    query["FaceInputType"] = request.getFaceInputType();
  }

  if (!!request.hasFaceUrl()) {
    query["FaceUrl"] = request.getFaceUrl();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  json body = {};
  if (!!request.hasFaceBase64()) {
    body["FaceBase64"] = request.getFaceBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeepfakeDetectIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeepfakeDetectIntlResponse>();
}

/**
 * @summary Face Credential Verification
 *
 * @description Input a face image and use the algorithm to detect if there is a risk of deep forgery. This includes risk scenarios such as AIGC-generated faces, deepfake face swapping, template faces, and rephotographed faces, and outputs risk labels and confidence levels.
 *
 * @param request DeepfakeDetectIntlRequest
 * @return DeepfakeDetectIntlResponse
 */
DeepfakeDetectIntlResponse Client::deepfakeDetectIntl(const DeepfakeDetectIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepfakeDetectIntlWithOptions(request, runtime);
}

/**
 * @summary deepfake file stream API
 *
 * @description Input a face image and use the algorithm to detect if there is a risk of deepfake. This includes risk scenarios such as AIGC-generated faces, deepfake face swaps, template faces, and rephotographed faces, and outputs risk labels and confidence scores.
 *
 * @param request DeepfakeDetectIntlStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepfakeDetectIntlStreamResponse
 */
DeepfakeDetectIntlStreamResponse Client::deepfakeDetectIntlStreamWithOptions(const DeepfakeDetectIntlStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFaceBase64()) {
    body["FaceBase64"] = request.getFaceBase64();
  }

  if (!!request.hasFaceFile()) {
    body["FaceFile"] = request.getFaceFile();
  }

  if (!!request.hasFaceInputType()) {
    body["FaceInputType"] = request.getFaceInputType();
  }

  if (!!request.hasFaceUrl()) {
    body["FaceUrl"] = request.getFaceUrl();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.getSceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeepfakeDetectIntlStream"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeepfakeDetectIntlStreamResponse>();
}

/**
 * @summary deepfake file stream API
 *
 * @description Input a face image and use the algorithm to detect if there is a risk of deepfake. This includes risk scenarios such as AIGC-generated faces, deepfake face swaps, template faces, and rephotographed faces, and outputs risk labels and confidence scores.
 *
 * @param request DeepfakeDetectIntlStreamRequest
 * @return DeepfakeDetectIntlStreamResponse
 */
DeepfakeDetectIntlStreamResponse Client::deepfakeDetectIntlStream(const DeepfakeDetectIntlStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepfakeDetectIntlStreamWithOptions(request, runtime);
}

DeepfakeDetectIntlStreamResponse Client::deepfakeDetectIntlStreamAdvance(const DeepfakeDetectIntlStreamAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth-intl"},
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
  DeepfakeDetectIntlStreamRequest deepfakeDetectIntlStreamReq = DeepfakeDetectIntlStreamRequest();
  Utils::Utils::convert(request, deepfakeDetectIntlStreamReq);
  if (!!request.hasFaceFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFaceFileObject()},
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
    deepfakeDetectIntlStreamReq.setFaceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  DeepfakeDetectIntlStreamResponse deepfakeDetectIntlStreamResp = deepfakeDetectIntlStreamWithOptions(deepfakeDetectIntlStreamReq, runtime);
  return deepfakeDetectIntlStreamResp;
}

/**
 * @summary Delete Face Group
 *
 * @param request DeleteFaceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceGroupResponse
 */
DeleteFaceGroupResponse Client::deleteFaceGroupWithOptions(const DeleteFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFaceGroup"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceGroupResponse>();
}

/**
 * @summary Delete Face Group
 *
 * @param request DeleteFaceGroupRequest
 * @return DeleteFaceGroupResponse
 */
DeleteFaceGroupResponse Client::deleteFaceGroup(const DeleteFaceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceGroupWithOptions(request, runtime);
}

/**
 * @summary Delete Face
 *
 * @param request DeleteFaceRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceRecordResponse
 */
DeleteFaceRecordResponse Client::deleteFaceRecordWithOptions(const DeleteFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFaceRecord"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceRecordResponse>();
}

/**
 * @summary Delete Face
 *
 * @param request DeleteFaceRecordRequest
 * @return DeleteFaceRecordResponse
 */
DeleteFaceRecordResponse Client::deleteFaceRecord(const DeleteFaceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceRecordWithOptions(request, runtime);
}

/**
 * @summary Delete user authentication record results
 *
 * @param request DeleteVerifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVerifyResultResponse
 */
DeleteVerifyResultResponse Client::deleteVerifyResultWithOptions(const DeleteVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteAfterQuery()) {
    query["DeleteAfterQuery"] = request.getDeleteAfterQuery();
  }

  if (!!request.hasDeleteType()) {
    query["DeleteType"] = request.getDeleteType();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.getTransactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVerifyResult"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVerifyResultResponse>();
}

/**
 * @summary Delete user authentication record results
 *
 * @param request DeleteVerifyResultRequest
 * @return DeleteVerifyResultResponse
 */
DeleteVerifyResultResponse Client::deleteVerifyResult(const DeleteVerifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVerifyResultWithOptions(request, runtime);
}

/**
 * @summary Card and document OCR pure server-side
 *
 * @param request DocOcrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocOcrResponse
 */
DocOcrResponse Client::docOcrWithOptions(const DocOcrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardSide()) {
    query["CardSide"] = request.getCardSide();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.getIdFaceQuality();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.getIdOcrPictureUrl();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.getIdThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.getOcr();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSpoof()) {
    query["Spoof"] = request.getSpoof();
  }

  json body = {};
  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.getIdOcrPictureBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocOcr"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocOcrResponse>();
}

/**
 * @summary Card and document OCR pure server-side
 *
 * @param request DocOcrRequest
 * @return DocOcrResponse
 */
DocOcrResponse Client::docOcr(const DocOcrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return docOcrWithOptions(request, runtime);
}

/**
 * @summary Global Document OCR Recognition Interface
 *
 * @param request DocOcrMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocOcrMaxResponse
 */
DocOcrMaxResponse Client::docOcrMaxWithOptions(const DocOcrMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOcrValueStandard()) {
    query["OcrValueStandard"] = request.getOcrValueStandard();
  }

  json body = {};
  if (!!request.hasAuthorize()) {
    body["Authorize"] = request.getAuthorize();
  }

  if (!!request.hasDocPage()) {
    body["DocPage"] = request.getDocPage();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.getIdOcrPictureBase64();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    body["IdOcrPictureUrl"] = request.getIdOcrPictureUrl();
  }

  if (!!request.hasIdSpoof()) {
    body["IdSpoof"] = request.getIdSpoof();
  }

  if (!!request.hasIdThreshold()) {
    body["IdThreshold"] = request.getIdThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasOcrModel()) {
    body["OcrModel"] = request.getOcrModel();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasSpoof()) {
    body["Spoof"] = request.getSpoof();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocOcrMax"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocOcrMaxResponse>();
}

/**
 * @summary Global Document OCR Recognition Interface
 *
 * @param request DocOcrMaxRequest
 * @return DocOcrMaxResponse
 */
DocOcrMaxResponse Client::docOcrMax(const DocOcrMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return docOcrMaxWithOptions(request, runtime);
}

/**
 * @summary Console Export Records
 *
 * @param request DownloadVerifyRecordIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadVerifyRecordIntlResponse
 */
DownloadVerifyRecordIntlResponse Client::downloadVerifyRecordIntlWithOptions(const DownloadVerifyRecordIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasDownloadMode()) {
    query["DownloadMode"] = request.getDownloadMode();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadVerifyRecordIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadVerifyRecordIntlResponse>();
}

/**
 * @summary Console Export Records
 *
 * @param request DownloadVerifyRecordIntlRequest
 * @return DownloadVerifyRecordIntlResponse
 */
DownloadVerifyRecordIntlResponse Client::downloadVerifyRecordIntl(const DownloadVerifyRecordIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadVerifyRecordIntlWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to integrate with ID Verification using only the server-side API.
 *
 * @param request EkycVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EkycVerifyResponse
 */
EkycVerifyResponse Client::ekycVerifyWithOptions(const EkycVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorize()) {
    query["Authorize"] = request.getAuthorize();
  }

  if (!!request.hasCrop()) {
    query["Crop"] = request.getCrop();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.getDocName();
  }

  if (!!request.hasDocNo()) {
    query["DocNo"] = request.getDocNo();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.getFacePictureUrl();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.getIdOcrPictureUrl();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.getIdThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.getFacePictureBase64();
  }

  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.getIdOcrPictureBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EkycVerify"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EkycVerifyResponse>();
}

/**
 * @summary This topic describes how to integrate with ID Verification using only the server-side API.
 *
 * @param request EkycVerifyRequest
 * @return EkycVerifyResponse
 */
EkycVerifyResponse Client::ekycVerify(const EkycVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ekycVerifyWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to integrate FaceCompare using only the server-side API.
 *
 * @param request FaceCompareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceCompareResponse
 */
FaceCompareResponse Client::faceCompareWithOptions(const FaceCompareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFacePictureQualityCheck()) {
    query["FacePictureQualityCheck"] = request.getFacePictureQualityCheck();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasSourceFacePictureUrl()) {
    query["SourceFacePictureUrl"] = request.getSourceFacePictureUrl();
  }

  if (!!request.hasTargetFacePictureUrl()) {
    query["TargetFacePictureUrl"] = request.getTargetFacePictureUrl();
  }

  json body = {};
  if (!!request.hasSourceFacePicture()) {
    body["SourceFacePicture"] = request.getSourceFacePicture();
  }

  if (!!request.hasTargetFacePicture()) {
    body["TargetFacePicture"] = request.getTargetFacePicture();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FaceCompare"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FaceCompareResponse>();
}

/**
 * @summary This topic describes how to integrate FaceCompare using only the server-side API.
 *
 * @param request FaceCompareRequest
 * @return FaceCompareResponse
 */
FaceCompareResponse Client::faceCompare(const FaceCompareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceCompareWithOptions(request, runtime);
}

/**
 * @summary Face Cross Comparison
 *
 * @param request FaceCrossCompareIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceCrossCompareIntlResponse
 */
FaceCrossCompareIntlResponse Client::faceCrossCompareIntlWithOptions(const FaceCrossCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompareModel()) {
    query["CompareModel"] = request.getCompareModel();
  }

  if (!!request.hasFaceVerifyThreshold()) {
    query["FaceVerifyThreshold"] = request.getFaceVerifyThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasSourceAFacePictureUrl()) {
    query["SourceAFacePictureUrl"] = request.getSourceAFacePictureUrl();
  }

  if (!!request.hasSourceBFacePictureUrl()) {
    query["SourceBFacePictureUrl"] = request.getSourceBFacePictureUrl();
  }

  if (!!request.hasSourceCFacePictureUrl()) {
    query["SourceCFacePictureUrl"] = request.getSourceCFacePictureUrl();
  }

  json body = {};
  if (!!request.hasSourceAFacePicture()) {
    body["SourceAFacePicture"] = request.getSourceAFacePicture();
  }

  if (!!request.hasSourceBFacePicture()) {
    body["SourceBFacePicture"] = request.getSourceBFacePicture();
  }

  if (!!request.hasSourceCFacePicture()) {
    body["SourceCFacePicture"] = request.getSourceCFacePicture();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FaceCrossCompareIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FaceCrossCompareIntlResponse>();
}

/**
 * @summary Face Cross Comparison
 *
 * @param request FaceCrossCompareIntlRequest
 * @return FaceCrossCompareIntlResponse
 */
FaceCrossCompareIntlResponse Client::faceCrossCompareIntl(const FaceCrossCompareIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceCrossCompareIntlWithOptions(request, runtime);
}

/**
 * @summary Face Duplication Detection API
 *
 * @param request FaceDuplicationCheckIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceDuplicationCheckIntlResponse
 */
FaceDuplicationCheckIntlResponse Client::faceDuplicationCheckIntlWithOptions(const FaceDuplicationCheckIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  json body = {};
  if (!!request.hasAutoRegistration()) {
    body["AutoRegistration"] = request.getAutoRegistration();
  }

  if (!!request.hasFaceGroupCodes()) {
    body["FaceGroupCodes"] = request.getFaceGroupCodes();
  }

  if (!!request.hasFaceRegisterGroupCode()) {
    body["FaceRegisterGroupCode"] = request.getFaceRegisterGroupCode();
  }

  if (!!request.hasFaceVerifyThreshold()) {
    body["FaceVerifyThreshold"] = request.getFaceVerifyThreshold();
  }

  if (!!request.hasLiveness()) {
    body["Liveness"] = request.getLiveness();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasReturnFaces()) {
    body["ReturnFaces"] = request.getReturnFaces();
  }

  if (!!request.hasSaveFacePicture()) {
    body["SaveFacePicture"] = request.getSaveFacePicture();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasSourceFacePicture()) {
    body["SourceFacePicture"] = request.getSourceFacePicture();
  }

  if (!!request.hasSourceFacePictureUrl()) {
    body["SourceFacePictureUrl"] = request.getSourceFacePictureUrl();
  }

  if (!!request.hasTargetFacePicture()) {
    body["TargetFacePicture"] = request.getTargetFacePicture();
  }

  if (!!request.hasTargetFacePictureUrl()) {
    body["TargetFacePictureUrl"] = request.getTargetFacePictureUrl();
  }

  if (!!request.hasVerifyModel()) {
    body["VerifyModel"] = request.getVerifyModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FaceDuplicationCheckIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FaceDuplicationCheckIntlResponse>();
}

/**
 * @summary Face Duplication Detection API
 *
 * @param request FaceDuplicationCheckIntlRequest
 * @return FaceDuplicationCheckIntlResponse
 */
FaceDuplicationCheckIntlResponse Client::faceDuplicationCheckIntl(const FaceDuplicationCheckIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceDuplicationCheckIntlWithOptions(request, runtime);
}

/**
 * @summary This topic describes how to set up the server for FACE_GUARD.
 *
 * @param request FaceGuardRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceGuardRiskResponse
 */
FaceGuardRiskResponse Client::faceGuardRiskWithOptions(const FaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.getDeviceToken();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FaceGuardRisk"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FaceGuardRiskResponse>();
}

/**
 * @summary This topic describes how to set up the server for FACE_GUARD.
 *
 * @param request FaceGuardRiskRequest
 * @return FaceGuardRiskResponse
 */
FaceGuardRiskResponse Client::faceGuardRisk(const FaceGuardRiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceGuardRiskWithOptions(request, runtime);
}

/**
 * @summary Passive liveness detection (FaceLiveness) is a service that detects whether a pre-captured facial image, submitted to an API operation, is a real face. The algorithm primarily detects presentation attacks, such as screen replays and printed photos. This service is suitable for low-risk business scen
 *
 * @param request FaceLivenessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceLivenessResponse
 */
FaceLivenessResponse Client::faceLivenessWithOptions(const FaceLivenessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrop()) {
    query["Crop"] = request.getCrop();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.getFacePictureUrl();
  }

  if (!!request.hasFaceQuality()) {
    query["FaceQuality"] = request.getFaceQuality();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasOcclusion()) {
    query["Occlusion"] = request.getOcclusion();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.getFacePictureBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FaceLiveness"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FaceLivenessResponse>();
}

/**
 * @summary Passive liveness detection (FaceLiveness) is a service that detects whether a pre-captured facial image, submitted to an API operation, is a real face. The algorithm primarily detects presentation attacks, such as screen replays and printed photos. This service is suitable for low-risk business scen
 *
 * @param request FaceLivenessRequest
 * @return FaceLivenessResponse
 */
FaceLivenessResponse Client::faceLiveness(const FaceLivenessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceLivenessWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI FraudResultCallBack is deprecated
 *
 * @summary Anti-Fraud Callback Interface
 *
 * @param request FraudResultCallBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FraudResultCallBackResponse
 */
FraudResultCallBackResponse Client::fraudResultCallBackWithOptions(const FraudResultCallBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.getExtParams();
  }

  if (!!request.hasResultCode()) {
    query["ResultCode"] = request.getResultCode();
  }

  if (!!request.hasVerifyDeployEnv()) {
    query["VerifyDeployEnv"] = request.getVerifyDeployEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FraudResultCallBack"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FraudResultCallBackResponse>();
}

/**
 * @deprecated OpenAPI FraudResultCallBack is deprecated
 *
 * @summary Anti-Fraud Callback Interface
 *
 * @param request FraudResultCallBackRequest
 * @return FraudResultCallBackResponse
 */
FraudResultCallBackResponse Client::fraudResultCallBack(const FraudResultCallBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fraudResultCallBackWithOptions(request, runtime);
}

/**
 * @summary This operation verifies the authenticity and consistency of a name, ID card number, and the start and end dates of the ID card\\"s validity period against an authoritative source.
 *
 * @param request Id2MetaPeriodVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaPeriodVerifyIntlResponse
 */
Id2MetaPeriodVerifyIntlResponse Client::id2MetaPeriodVerifyIntlWithOptions(const Id2MetaPeriodVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocName()) {
    body["DocName"] = request.getDocName();
  }

  if (!!request.hasDocNo()) {
    body["DocNo"] = request.getDocNo();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.getDocType();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasValidityEndDate()) {
    body["ValidityEndDate"] = request.getValidityEndDate();
  }

  if (!!request.hasValidityStartDate()) {
    body["ValidityStartDate"] = request.getValidityStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Id2MetaPeriodVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaPeriodVerifyIntlResponse>();
}

/**
 * @summary This operation verifies the authenticity and consistency of a name, ID card number, and the start and end dates of the ID card\\"s validity period against an authoritative source.
 *
 * @param request Id2MetaPeriodVerifyIntlRequest
 * @return Id2MetaPeriodVerifyIntlResponse
 */
Id2MetaPeriodVerifyIntlResponse Client::id2MetaPeriodVerifyIntl(const Id2MetaPeriodVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaPeriodVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary Verifies that a name and an ID card number are consistent.
 *
 * @param request Id2MetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaVerifyIntlResponse
 */
Id2MetaVerifyIntlResponse Client::id2MetaVerifyIntlWithOptions(const Id2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Id2MetaVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaVerifyIntlResponse>();
}

/**
 * @summary Verifies that a name and an ID card number are consistent.
 *
 * @param request Id2MetaVerifyIntlRequest
 * @return Id2MetaVerifyIntlResponse
 */
Id2MetaVerifyIntlResponse Client::id2MetaVerifyIntl(const Id2MetaVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary Authentication Initialization
 *
 * @param tmpReq InitializeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeResponse
 */
InitializeResponse Client::initializeWithOptions(const InitializeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InitializeShrinkRequest request = InitializeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocPageConfig()) {
    request.setDocPageConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocPageConfig(), "DocPageConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppQualityCheck()) {
    query["AppQualityCheck"] = request.getAppQualityCheck();
  }

  if (!!request.hasAuthorize()) {
    query["Authorize"] = request.getAuthorize();
  }

  if (!!request.hasAutoRegistration()) {
    query["AutoRegistration"] = request.getAutoRegistration();
  }

  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.getCallbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasChameleonFrameEnable()) {
    query["ChameleonFrameEnable"] = request.getChameleonFrameEnable();
  }

  if (!!request.hasCrop()) {
    query["Crop"] = request.getCrop();
  }

  if (!!request.hasDateOfBirth()) {
    query["DateOfBirth"] = request.getDateOfBirth();
  }

  if (!!request.hasDateOfExpiry()) {
    query["DateOfExpiry"] = request.getDateOfExpiry();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.getDocName();
  }

  if (!!request.hasDocNo()) {
    query["DocNo"] = request.getDocNo();
  }

  if (!!request.hasDocPageConfigShrink()) {
    query["DocPageConfig"] = request.getDocPageConfigShrink();
  }

  if (!!request.hasDocScanMode()) {
    query["DocScanMode"] = request.getDocScanMode();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasDocVideo()) {
    query["DocVideo"] = request.getDocVideo();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.getDocumentNumber();
  }

  if (!!request.hasEditOcrResult()) {
    query["EditOcrResult"] = request.getEditOcrResult();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasExperienceCode()) {
    query["ExperienceCode"] = request.getExperienceCode();
  }

  if (!!request.hasFaceGroupCodes()) {
    query["FaceGroupCodes"] = request.getFaceGroupCodes();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.getFacePictureUrl();
  }

  if (!!request.hasFaceRegisterGroupCode()) {
    query["FaceRegisterGroupCode"] = request.getFaceRegisterGroupCode();
  }

  if (!!request.hasFaceVerifyThreshold()) {
    query["FaceVerifyThreshold"] = request.getFaceVerifyThreshold();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.getIdFaceQuality();
  }

  if (!!request.hasIdSpoof()) {
    query["IdSpoof"] = request.getIdSpoof();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.getIdThreshold();
  }

  if (!!request.hasLanguageConfig()) {
    query["LanguageConfig"] = request.getLanguageConfig();
  }

  if (!!request.hasMRTDInput()) {
    query["MRTDInput"] = request.getMRTDInput();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.getMetaInfo();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.getOcr();
  }

  if (!!request.hasPages()) {
    query["Pages"] = request.getPages();
  }

  if (!!request.hasProcedurePriority()) {
    query["ProcedurePriority"] = request.getProcedurePriority();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductFlow()) {
    query["ProductFlow"] = request.getProductFlow();
  }

  if (!!request.hasReturnFaces()) {
    query["ReturnFaces"] = request.getReturnFaces();
  }

  if (!!request.hasReturnUrl()) {
    query["ReturnUrl"] = request.getReturnUrl();
  }

  if (!!request.hasSaveFacePicture()) {
    query["SaveFacePicture"] = request.getSaveFacePicture();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasSecurityLevel()) {
    query["SecurityLevel"] = request.getSecurityLevel();
  }

  if (!!request.hasShowAlbumIcon()) {
    query["ShowAlbumIcon"] = request.getShowAlbumIcon();
  }

  if (!!request.hasShowGuidePage()) {
    query["ShowGuidePage"] = request.getShowGuidePage();
  }

  if (!!request.hasShowOcrResult()) {
    query["ShowOcrResult"] = request.getShowOcrResult();
  }

  if (!!request.hasStyleConfig()) {
    query["StyleConfig"] = request.getStyleConfig();
  }

  if (!!request.hasTargetFacePicture()) {
    query["TargetFacePicture"] = request.getTargetFacePicture();
  }

  if (!!request.hasTargetFacePictureUrl()) {
    query["TargetFacePictureUrl"] = request.getTargetFacePictureUrl();
  }

  if (!!request.hasUseNFC()) {
    query["UseNFC"] = request.getUseNFC();
  }

  if (!!request.hasVerifyModel()) {
    query["VerifyModel"] = request.getVerifyModel();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.getFacePictureBase64();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Initialize"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeResponse>();
}

/**
 * @summary Authentication Initialization
 *
 * @param request InitializeRequest
 * @return InitializeResponse
 */
InitializeResponse Client::initialize(const InitializeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeWithOptions(request, runtime);
}

/**
 * @summary If your server makes infrequent calls to the ID Verification API, you can call the KeepaliveIntl operation to maintain the client connection.
 *
 * @param request KeepaliveIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KeepaliveIntlResponse
 */
KeepaliveIntlResponse Client::keepaliveIntlWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "KeepaliveIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KeepaliveIntlResponse>();
}

/**
 * @summary If your server makes infrequent calls to the ID Verification API, you can call the KeepaliveIntl operation to maintain the client connection.
 *
 * @return KeepaliveIntlResponse
 */
KeepaliveIntlResponse Client::keepaliveIntl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return keepaliveIntlWithOptions(runtime);
}

/**
 * @summary Verifies the authenticity and consistency of a mobile number and name against an authoritative data source.
 *
 * @param request Mobile2MetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile2MetaVerifyIntlResponse
 */
Mobile2MetaVerifyIntlResponse Client::mobile2MetaVerifyIntlWithOptions(const Mobile2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile2MetaVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile2MetaVerifyIntlResponse>();
}

/**
 * @summary Verifies the authenticity and consistency of a mobile number and name against an authoritative data source.
 *
 * @param request Mobile2MetaVerifyIntlRequest
 * @return Mobile2MetaVerifyIntlResponse
 */
Mobile2MetaVerifyIntlResponse Client::mobile2MetaVerifyIntl(const Mobile2MetaVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile2MetaVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary International Version of Mobile Three Elements API
 *
 * @param request Mobile3MetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaVerifyIntlResponse
 */
Mobile3MetaVerifyIntlResponse Client::mobile3MetaVerifyIntlWithOptions(const Mobile3MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Mobile3MetaVerifyIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile3MetaVerifyIntlResponse>();
}

/**
 * @summary International Version of Mobile Three Elements API
 *
 * @param request Mobile3MetaVerifyIntlRequest
 * @return Mobile3MetaVerifyIntlResponse
 */
Mobile3MetaVerifyIntlResponse Client::mobile3MetaVerifyIntl(const Mobile3MetaVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary 修改人脸库
 *
 * @param request ModifyFaceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFaceGroupResponse
 */
ModifyFaceGroupResponse Client::modifyFaceGroupWithOptions(const ModifyFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyFaceGroup"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFaceGroupResponse>();
}

/**
 * @summary 修改人脸库
 *
 * @param request ModifyFaceGroupRequest
 * @return ModifyFaceGroupResponse
 */
ModifyFaceGroupResponse Client::modifyFaceGroup(const ModifyFaceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFaceGroupWithOptions(request, runtime);
}

/**
 * @summary 新增人脸
 *
 * @param request ModifyFaceRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFaceRecordResponse
 */
ModifyFaceRecordResponse Client::modifyFaceRecordWithOptions(const ModifyFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFaceGroupCode()) {
    body["FaceGroupCode"] = request.getFaceGroupCode();
  }

  if (!!request.hasImgOssInfos()) {
    body["ImgOssInfos"] = request.getImgOssInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyFaceRecord"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFaceRecordResponse>();
}

/**
 * @summary 新增人脸
 *
 * @param request ModifyFaceRecordRequest
 * @return ModifyFaceRecordResponse
 */
ModifyFaceRecordResponse Client::modifyFaceRecord(const ModifyFaceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFaceRecordWithOptions(request, runtime);
}

/**
 * @summary 查询人脸库
 *
 * @param request QueryFaceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceGroupResponse
 */
QueryFaceGroupResponse Client::queryFaceGroupWithOptions(const QueryFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasGroupCode()) {
    query["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceGroup"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceGroupResponse>();
}

/**
 * @summary 查询人脸库
 *
 * @param request QueryFaceGroupRequest
 * @return QueryFaceGroupResponse
 */
QueryFaceGroupResponse Client::queryFaceGroup(const QueryFaceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceGroupWithOptions(request, runtime);
}

/**
 * @summary Query Face Records
 *
 * @param request QueryFaceRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFaceRecordResponse
 */
QueryFaceRecordResponse Client::queryFaceRecordWithOptions(const QueryFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFaceGroupCode()) {
    query["FaceGroupCode"] = request.getFaceGroupCode();
  }

  if (!!request.hasFaceId()) {
    query["FaceId"] = request.getFaceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegistrationType()) {
    query["RegistrationType"] = request.getRegistrationType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFaceRecord"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFaceRecordResponse>();
}

/**
 * @summary Query Face Records
 *
 * @param request QueryFaceRecordRequest
 * @return QueryFaceRecordResponse
 */
QueryFaceRecordResponse Client::queryFaceRecord(const QueryFaceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFaceRecordWithOptions(request, runtime);
}

/**
 * @summary Get Temporary Token
 *
 * @param request TempAccessTokenIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempAccessTokenIntlResponse
 */
TempAccessTokenIntlResponse Client::tempAccessTokenIntlWithOptions(const TempAccessTokenIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TempAccessTokenIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempAccessTokenIntlResponse>();
}

/**
 * @summary Get Temporary Token
 *
 * @param request TempAccessTokenIntlRequest
 * @return TempAccessTokenIntlResponse
 */
TempAccessTokenIntlResponse Client::tempAccessTokenIntl(const TempAccessTokenIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempAccessTokenIntlWithOptions(request, runtime);
}

/**
 * @summary Get Temporary File URL
 *
 * @param request TempOssUrlIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempOssUrlIntlResponse
 */
TempOssUrlIntlResponse Client::tempOssUrlIntlWithOptions(const TempOssUrlIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasObjectName()) {
    body["ObjectName"] = request.getObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TempOssUrlIntl"},
    {"version" , "2022-08-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempOssUrlIntlResponse>();
}

/**
 * @summary Get Temporary File URL
 *
 * @param request TempOssUrlIntlRequest
 * @return TempOssUrlIntlResponse
 */
TempOssUrlIntlResponse Client::tempOssUrlIntl(const TempOssUrlIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempOssUrlIntlWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809