#include <darabonba/Core.hpp>
#include <alibabacloud/CloudauthIntl20220809.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <darabonba/http/Form.hpp>
#include <darabonba/Convert.hpp>
#include <map>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <darabonba/Runtime.hpp>
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


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form) {
Darabonba::RuntimeOptions runtime_(json({}));

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
  auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
  shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

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
 * @summary 地址相似比对
 *
 * @param request AddressCompareIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressCompareIntlResponse
 */
AddressCompareIntlResponse Client::addressCompareIntlWithOptions(const AddressCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultCountry()) {
    query["DefaultCountry"] = request.defaultCountry();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasText1()) {
    query["Text1"] = request.text1();
  }

  if (!!request.hasText2()) {
    query["Text2"] = request.text2();
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
 * @summary 地址相似比对
 *
 * @param request AddressCompareIntlRequest
 * @return AddressCompareIntlResponse
 */
AddressCompareIntlResponse Client::addressCompareIntl(const AddressCompareIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addressCompareIntlWithOptions(request, runtime);
}

/**
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
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasDefaultCity()) {
    query["DefaultCity"] = request.defaultCity();
  }

  if (!!request.hasDefaultCountry()) {
    query["DefaultCountry"] = request.defaultCountry();
  }

  if (!!request.hasDefaultDistrict()) {
    query["DefaultDistrict"] = request.defaultDistrict();
  }

  if (!!request.hasDefaultProvince()) {
    query["DefaultProvince"] = request.defaultProvince();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.latitude();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.longitude();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
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
 * @summary 地址核验
 *
 * @param request AddressVerifyV2IntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressVerifyV2IntlResponse
 */
AddressVerifyV2IntlResponse Client::addressVerifyV2IntlWithOptions(const AddressVerifyV2IntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.deviceToken();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegCountry()) {
    query["RegCountry"] = request.regCountry();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
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
 * @summary 地址核验
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
    query["BankCard"] = request.bankCard();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.identityType();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasVerifyMode()) {
    query["VerifyMode"] = request.verifyMode();
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
    query["DocType"] = request.docType();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.idFaceQuality();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.idOcrPictureUrl();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.ocr();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSpoof()) {
    query["Spoof"] = request.spoof();
  }

  json body = {};
  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.idOcrPictureBase64();
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
    query["ExtraImageControlList"] = request.extraImageControlList();
  }

  if (!!request.hasIsReturnImage()) {
    query["IsReturnImage"] = request.isReturnImage();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasReturnFiveCategorySpoofResult()) {
    query["ReturnFiveCategorySpoofResult"] = request.returnFiveCategorySpoofResult();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.transactionId();
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
    body["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasTransactionId()) {
    body["TransactionId"] = request.transactionId();
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
    query["CredName"] = request.credName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.credType();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  json body = {};
  if (!!request.hasImageFile()) {
    body["ImageFile"] = request.imageFile();
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
      {"content" , request.imageFileObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    credentialVerifyIntlReq.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialVerifyIntlResponse credentialVerifyIntlResp = credentialVerifyIntlWithOptions(credentialVerifyIntlReq, runtime);
  return credentialVerifyIntlResp;
}

/**
 * @summary 人脸凭证核验
 *
 * @param request DeepfakeDetectIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepfakeDetectIntlResponse
 */
DeepfakeDetectIntlResponse Client::deepfakeDetectIntlWithOptions(const DeepfakeDetectIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaceInputType()) {
    query["FaceInputType"] = request.faceInputType();
  }

  if (!!request.hasFaceUrl()) {
    query["FaceUrl"] = request.faceUrl();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  json body = {};
  if (!!request.hasFaceBase64()) {
    body["FaceBase64"] = request.faceBase64();
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
 * @summary 人脸凭证核验
 *
 * @param request DeepfakeDetectIntlRequest
 * @return DeepfakeDetectIntlResponse
 */
DeepfakeDetectIntlResponse Client::deepfakeDetectIntl(const DeepfakeDetectIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepfakeDetectIntlWithOptions(request, runtime);
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
    query["DeleteAfterQuery"] = request.deleteAfterQuery();
  }

  if (!!request.hasDeleteType()) {
    query["DeleteType"] = request.deleteType();
  }

  if (!!request.hasTransactionId()) {
    query["TransactionId"] = request.transactionId();
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
    query["CardSide"] = request.cardSide();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.docType();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.idFaceQuality();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.idOcrPictureUrl();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.idThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.ocr();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSpoof()) {
    query["Spoof"] = request.spoof();
  }

  json body = {};
  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.idOcrPictureBase64();
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
 * @summary 全球证件ocr识别接口
 *
 * @param request DocOcrMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocOcrMaxResponse
 */
DocOcrMaxResponse Client::docOcrMaxWithOptions(const DocOcrMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocPage()) {
    body["DocPage"] = request.docPage();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.docType();
  }

  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.idOcrPictureBase64();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    body["IdOcrPictureUrl"] = request.idOcrPictureUrl();
  }

  if (!!request.hasIdSpoof()) {
    body["IdSpoof"] = request.idSpoof();
  }

  if (!!request.hasIdThreshold()) {
    body["IdThreshold"] = request.idThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasOcrModel()) {
    body["OcrModel"] = request.ocrModel();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.prompt();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasSpoof()) {
    body["Spoof"] = request.spoof();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
 * @summary 全球证件ocr识别接口
 *
 * @param request DocOcrMaxRequest
 * @return DocOcrMaxResponse
 */
DocOcrMaxResponse Client::docOcrMax(const DocOcrMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return docOcrMaxWithOptions(request, runtime);
}

/**
 * @summary ekyc纯服务端接口
 *
 * @param request EkycVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EkycVerifyResponse
 */
EkycVerifyResponse Client::ekycVerifyWithOptions(const EkycVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorize()) {
    query["Authorize"] = request.authorize();
  }

  if (!!request.hasCrop()) {
    query["Crop"] = request.crop();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.docName();
  }

  if (!!request.hasDocNo()) {
    query["DocNo"] = request.docNo();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.docType();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.facePictureUrl();
  }

  if (!!request.hasIdOcrPictureUrl()) {
    query["IdOcrPictureUrl"] = request.idOcrPictureUrl();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.idThreshold();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.facePictureBase64();
  }

  if (!!request.hasIdOcrPictureBase64()) {
    body["IdOcrPictureBase64"] = request.idOcrPictureBase64();
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
 * @summary ekyc纯服务端接口
 *
 * @param request EkycVerifyRequest
 * @return EkycVerifyResponse
 */
EkycVerifyResponse Client::ekycVerify(const EkycVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ekycVerifyWithOptions(request, runtime);
}

/**
 * @summary 人脸比对
 *
 * @param request FaceCompareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceCompareResponse
 */
FaceCompareResponse Client::faceCompareWithOptions(const FaceCompareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasSourceFacePictureUrl()) {
    query["SourceFacePictureUrl"] = request.sourceFacePictureUrl();
  }

  if (!!request.hasTargetFacePictureUrl()) {
    query["TargetFacePictureUrl"] = request.targetFacePictureUrl();
  }

  json body = {};
  if (!!request.hasSourceFacePicture()) {
    body["SourceFacePicture"] = request.sourceFacePicture();
  }

  if (!!request.hasTargetFacePicture()) {
    body["TargetFacePicture"] = request.targetFacePicture();
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
 * @summary 人脸比对
 *
 * @param request FaceCompareRequest
 * @return FaceCompareResponse
 */
FaceCompareResponse Client::faceCompare(const FaceCompareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceCompareWithOptions(request, runtime);
}

/**
 * @summary 国际人脸保镖纯服务端接口
 *
 * @param request FaceGuardRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceGuardRiskResponse
 */
FaceGuardRiskResponse Client::faceGuardRiskWithOptions(const FaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.deviceToken();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
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
 * @summary 国际人脸保镖纯服务端接口
 *
 * @param request FaceGuardRiskRequest
 * @return FaceGuardRiskResponse
 */
FaceGuardRiskResponse Client::faceGuardRisk(const FaceGuardRiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceGuardRiskWithOptions(request, runtime);
}

/**
 * @summary 静默活体API 纯服务端
 *
 * @param request FaceLivenessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FaceLivenessResponse
 */
FaceLivenessResponse Client::faceLivenessWithOptions(const FaceLivenessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrop()) {
    query["Crop"] = request.crop();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.facePictureUrl();
  }

  if (!!request.hasFaceQuality()) {
    query["FaceQuality"] = request.faceQuality();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasOcclusion()) {
    query["Occlusion"] = request.occlusion();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.facePictureBase64();
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
 * @summary 静默活体API 纯服务端
 *
 * @param request FaceLivenessRequest
 * @return FaceLivenessResponse
 */
FaceLivenessResponse Client::faceLiveness(const FaceLivenessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return faceLivenessWithOptions(request, runtime);
}

/**
 * @summary 防伪回调接口
 *
 * @param request FraudResultCallBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FraudResultCallBackResponse
 */
FraudResultCallBackResponse Client::fraudResultCallBackWithOptions(const FraudResultCallBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.extParams();
  }

  if (!!request.hasResultCode()) {
    query["ResultCode"] = request.resultCode();
  }

  if (!!request.hasVerifyDeployEnv()) {
    query["VerifyDeployEnv"] = request.verifyDeployEnv();
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
 * @summary 防伪回调接口
 *
 * @param request FraudResultCallBackRequest
 * @return FraudResultCallBackResponse
 */
FraudResultCallBackResponse Client::fraudResultCallBack(const FraudResultCallBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fraudResultCallBackWithOptions(request, runtime);
}

/**
 * @summary 身份二要素有效期核验
 *
 * @param request Id2MetaPeriodVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaPeriodVerifyIntlResponse
 */
Id2MetaPeriodVerifyIntlResponse Client::id2MetaPeriodVerifyIntlWithOptions(const Id2MetaPeriodVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocName()) {
    body["DocName"] = request.docName();
  }

  if (!!request.hasDocNo()) {
    body["DocNo"] = request.docNo();
  }

  if (!!request.hasDocType()) {
    body["DocType"] = request.docType();
  }

  if (!!request.hasMerchantBizId()) {
    body["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    body["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasValidityEndDate()) {
    body["ValidityEndDate"] = request.validityEndDate();
  }

  if (!!request.hasValidityStartDate()) {
    body["ValidityStartDate"] = request.validityStartDate();
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
 * @summary 身份二要素有效期核验
 *
 * @param request Id2MetaPeriodVerifyIntlRequest
 * @return Id2MetaPeriodVerifyIntlResponse
 */
Id2MetaPeriodVerifyIntlResponse Client::id2MetaPeriodVerifyIntl(const Id2MetaPeriodVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaPeriodVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary 身份二要素国际版接口
 *
 * @param request Id2MetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaVerifyIntlResponse
 */
Id2MetaVerifyIntlResponse Client::id2MetaVerifyIntlWithOptions(const Id2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
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
 * @summary 身份二要素国际版接口
 *
 * @param request Id2MetaVerifyIntlRequest
 * @return Id2MetaVerifyIntlResponse
 */
Id2MetaVerifyIntlResponse Client::id2MetaVerifyIntl(const Id2MetaVerifyIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaVerifyIntlWithOptions(request, runtime);
}

/**
 * @summary 认证初始化
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
    request.setDocPageConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.docPageConfig(), "DocPageConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppQualityCheck()) {
    query["AppQualityCheck"] = request.appQualityCheck();
  }

  if (!!request.hasAuthorize()) {
    query["Authorize"] = request.authorize();
  }

  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.callbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasChameleonFrameEnable()) {
    query["ChameleonFrameEnable"] = request.chameleonFrameEnable();
  }

  if (!!request.hasCrop()) {
    query["Crop"] = request.crop();
  }

  if (!!request.hasDateOfBirth()) {
    query["DateOfBirth"] = request.dateOfBirth();
  }

  if (!!request.hasDateOfExpiry()) {
    query["DateOfExpiry"] = request.dateOfExpiry();
  }

  if (!!request.hasDocName()) {
    query["DocName"] = request.docName();
  }

  if (!!request.hasDocNo()) {
    query["DocNo"] = request.docNo();
  }

  if (!!request.hasDocPageConfigShrink()) {
    query["DocPageConfig"] = request.docPageConfigShrink();
  }

  if (!!request.hasDocScanMode()) {
    query["DocScanMode"] = request.docScanMode();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.docType();
  }

  if (!!request.hasDocVideo()) {
    query["DocVideo"] = request.docVideo();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.documentNumber();
  }

  if (!!request.hasEditOcrResult()) {
    query["EditOcrResult"] = request.editOcrResult();
  }

  if (!!request.hasExperienceCode()) {
    query["ExperienceCode"] = request.experienceCode();
  }

  if (!!request.hasFacePictureUrl()) {
    query["FacePictureUrl"] = request.facePictureUrl();
  }

  if (!!request.hasIdFaceQuality()) {
    query["IdFaceQuality"] = request.idFaceQuality();
  }

  if (!!request.hasIdSpoof()) {
    query["IdSpoof"] = request.idSpoof();
  }

  if (!!request.hasIdThreshold()) {
    query["IdThreshold"] = request.idThreshold();
  }

  if (!!request.hasLanguageConfig()) {
    query["LanguageConfig"] = request.languageConfig();
  }

  if (!!request.hasMRTDInput()) {
    query["MRTDInput"] = request.MRTDInput();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.merchantUserId();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.metaInfo();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasOcr()) {
    query["Ocr"] = request.ocr();
  }

  if (!!request.hasPages()) {
    query["Pages"] = request.pages();
  }

  if (!!request.hasProcedurePriority()) {
    query["ProcedurePriority"] = request.procedurePriority();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductFlow()) {
    query["ProductFlow"] = request.productFlow();
  }

  if (!!request.hasReturnUrl()) {
    query["ReturnUrl"] = request.returnUrl();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasSecurityLevel()) {
    query["SecurityLevel"] = request.securityLevel();
  }

  if (!!request.hasShowAlbumIcon()) {
    query["ShowAlbumIcon"] = request.showAlbumIcon();
  }

  if (!!request.hasShowGuidePage()) {
    query["ShowGuidePage"] = request.showGuidePage();
  }

  if (!!request.hasShowOcrResult()) {
    query["ShowOcrResult"] = request.showOcrResult();
  }

  if (!!request.hasStyleConfig()) {
    query["StyleConfig"] = request.styleConfig();
  }

  if (!!request.hasUseNFC()) {
    query["UseNFC"] = request.useNFC();
  }

  json body = {};
  if (!!request.hasFacePictureBase64()) {
    body["FacePictureBase64"] = request.facePictureBase64();
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
 * @summary 认证初始化
 *
 * @param request InitializeRequest
 * @return InitializeResponse
 */
InitializeResponse Client::initialize(const InitializeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeWithOptions(request, runtime);
}

/**
 * @summary 客户端连接保持
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
 * @summary 客户端连接保持
 *
 * @return KeepaliveIntlResponse
 */
KeepaliveIntlResponse Client::keepaliveIntl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return keepaliveIntlWithOptions(runtime);
}

/**
 * @summary 手机号二要素核验API
 *
 * @param request Mobile2MetaVerifyIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile2MetaVerifyIntlResponse
 */
Mobile2MetaVerifyIntlResponse Client::mobile2MetaVerifyIntlWithOptions(const Mobile2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
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
 * @summary 手机号二要素核验API
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
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
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
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809