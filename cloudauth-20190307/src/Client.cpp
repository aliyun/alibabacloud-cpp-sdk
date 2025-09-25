#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20190307.hpp>
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
using namespace AlibabaCloud::Cloudauth20190307::Models;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{

AlibabaCloud::Cloudauth20190307::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudauth", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Add AIGC Face Detection Capability
 *
 * @param request AIGCFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AIGCFaceVerifyResponse
 */
AIGCFaceVerifyResponse Client::aIGCFaceVerifyWithOptions(const AIGCFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaceContrastPictureUrl()) {
    query["FaceContrastPictureUrl"] = request.faceContrastPictureUrl();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssObjectName()) {
    query["OssObjectName"] = request.ossObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  json body = {};
  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.faceContrastPicture();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AIGCFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AIGCFaceVerifyResponse>();
}

/**
 * @summary Add AIGC Face Detection Capability
 *
 * @param request AIGCFaceVerifyRequest
 * @return AIGCFaceVerifyResponse
 */
AIGCFaceVerifyResponse Client::aIGCFaceVerify(const AIGCFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aIGCFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Bank Card Element Verification Interface
 *
 * @description Bank card verification, including: two elements (name + bank card number), three elements (name + ID number + bank card number), and four elements (name + ID number + mobile phone number + bank card number) consistency verification.
 * - Service address:
 *   - Beijing region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
 *   - Shanghai region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request BankMetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BankMetaVerifyResponse
 */
BankMetaVerifyResponse Client::bankMetaVerifyWithOptions(const BankMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "BankMetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BankMetaVerifyResponse>();
}

/**
 * @summary Bank Card Element Verification Interface
 *
 * @description Bank card verification, including: two elements (name + bank card number), three elements (name + ID number + bank card number), and four elements (name + ID number + mobile phone number + bank card number) consistency verification.
 * - Service address:
 *   - Beijing region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
 *   - Shanghai region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request BankMetaVerifyRequest
 * @return BankMetaVerifyResponse
 */
BankMetaVerifyResponse Client::bankMetaVerify(const BankMetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bankMetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Financial-grade Pure Server-Side API for Face Comparison.
 *
 * @description - API Name: CompareFaceVerify.
 * - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - API Description: An interface to achieve real-person authentication through server-side integration.
 * #### Photo Format Requirements
 * When performing face comparison, please upload 2 facial photos that meet all the following conditions:
 * - Recent photo/recent database photo, with a complete, clear, unobstructed face, natural expression, and facing the camera directly.
 * - Clear photo with normal exposure, no overly dark, overly bright, or halo effects on the face, and no significant angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, recommended to scale the shorter side to 720 pixels, with a compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
 *
 * @param request CompareFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareFaceVerifyResponse
 */
CompareFaceVerifyResponse Client::compareFaceVerifyWithOptions(const CompareFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCrop()) {
    body["Crop"] = request.crop();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  if (!!request.hasSourceCertifyId()) {
    body["SourceCertifyId"] = request.sourceCertifyId();
  }

  if (!!request.hasSourceFaceContrastPicture()) {
    body["SourceFaceContrastPicture"] = request.sourceFaceContrastPicture();
  }

  if (!!request.hasSourceFaceContrastPictureUrl()) {
    body["SourceFaceContrastPictureUrl"] = request.sourceFaceContrastPictureUrl();
  }

  if (!!request.hasSourceOssBucketName()) {
    body["SourceOssBucketName"] = request.sourceOssBucketName();
  }

  if (!!request.hasSourceOssObjectName()) {
    body["SourceOssObjectName"] = request.sourceOssObjectName();
  }

  if (!!request.hasTargetCertifyId()) {
    body["TargetCertifyId"] = request.targetCertifyId();
  }

  if (!!request.hasTargetFaceContrastPicture()) {
    body["TargetFaceContrastPicture"] = request.targetFaceContrastPicture();
  }

  if (!!request.hasTargetFaceContrastPictureUrl()) {
    body["TargetFaceContrastPictureUrl"] = request.targetFaceContrastPictureUrl();
  }

  if (!!request.hasTargetOssBucketName()) {
    body["TargetOssBucketName"] = request.targetOssBucketName();
  }

  if (!!request.hasTargetOssObjectName()) {
    body["TargetOssObjectName"] = request.targetOssObjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CompareFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareFaceVerifyResponse>();
}

/**
 * @summary Financial-grade Pure Server-Side API for Face Comparison.
 *
 * @description - API Name: CompareFaceVerify.
 * - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - API Description: An interface to achieve real-person authentication through server-side integration.
 * #### Photo Format Requirements
 * When performing face comparison, please upload 2 facial photos that meet all the following conditions:
 * - Recent photo/recent database photo, with a complete, clear, unobstructed face, natural expression, and facing the camera directly.
 * - Clear photo with normal exposure, no overly dark, overly bright, or halo effects on the face, and no significant angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, recommended to scale the shorter side to 720 pixels, with a compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
 *
 * @param request CompareFaceVerifyRequest
 * @return CompareFaceVerifyResponse
 */
CompareFaceVerifyResponse Client::compareFaceVerify(const CompareFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Invoke CompareFaces for face comparison.
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 * Interface Description: Compares two face images and outputs the similarity score of the faces in the two images as the result.
 * - At least one of the specified comparison images should be a face photo (FacePic).
 * - If an image contains multiple faces, the algorithm will automatically select the largest face in the image.
 * - If one of the two comparison images does not detect a face, the system will return an error message stating \\"No face detected\\".
 * When uploading images, you need to provide the HTTP address or base64 encoding of the image.
 * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 Encoding: An image encoded in base64, formatted as `base64://<base64 string of the image>`.
 * Image Restrictions
 * - Does not support relative or absolute paths for local images.
 * - Please keep the size of a single image within 2MB to avoid timeout during retrieval by the algorithm.
 * - The body of a single request has a size limit of 8MB; please calculate the total size of all images and other information in the request to ensure it does not exceed this limit.
 * - When using base64 to transmit images, the request method must be changed to POST; the header description such as `data:image/png;base64,` should be removed from the base64 string of the image.
 *
 * @param request CompareFacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareFacesResponse
 */
CompareFacesResponse Client::compareFacesWithOptions(const CompareFacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceImageType()) {
    body["SourceImageType"] = request.sourceImageType();
  }

  if (!!request.hasSourceImageValue()) {
    body["SourceImageValue"] = request.sourceImageValue();
  }

  if (!!request.hasTargetImageType()) {
    body["TargetImageType"] = request.targetImageType();
  }

  if (!!request.hasTargetImageValue()) {
    body["TargetImageValue"] = request.targetImageValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CompareFaces"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareFacesResponse>();
}

/**
 * @summary Invoke CompareFaces for face comparison.
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 * Interface Description: Compares two face images and outputs the similarity score of the faces in the two images as the result.
 * - At least one of the specified comparison images should be a face photo (FacePic).
 * - If an image contains multiple faces, the algorithm will automatically select the largest face in the image.
 * - If one of the two comparison images does not detect a face, the system will return an error message stating \\"No face detected\\".
 * When uploading images, you need to provide the HTTP address or base64 encoding of the image.
 * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 Encoding: An image encoded in base64, formatted as `base64://<base64 string of the image>`.
 * Image Restrictions
 * - Does not support relative or absolute paths for local images.
 * - Please keep the size of a single image within 2MB to avoid timeout during retrieval by the algorithm.
 * - The body of a single request has a size limit of 8MB; please calculate the total size of all images and other information in the request to ensure it does not exceed this limit.
 * - When using base64 to transmit images, the request method must be changed to POST; the header description such as `data:image/png;base64,` should be removed from the base64 string of the image.
 *
 * @param request CompareFacesRequest
 * @return CompareFacesResponse
 */
CompareFacesResponse Client::compareFaces(const CompareFacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareFacesWithOptions(request, runtime);
}

/**
 * @summary This interface is used to submit authentication materials for verification and comparison, and it synchronously returns the authentication result.
 *
 * @description - Interface Name: ContrastFaceVerify.
 * - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - Interface Description: An interface for real person authentication through server-side integration.
 * #### Image Format Requirements
 * When performing real person authentication, please ensure that the images you upload meet all of the following conditions:
 * - Recent photo with a clear, unobstructed, and natural expression, facing the camera directly.
 * - Clear and properly exposed photo, without overly dark, bright, or haloed faces, and with minimal angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, with the shorter side recommended to be resized to 720 pixels, and a compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
 *
 * @param request ContrastFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContrastFaceVerifyResponse
 */
ContrastFaceVerifyResponse Client::contrastFaceVerifyWithOptions(const ContrastFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  json body = {};
  if (!!request.hasCertName()) {
    body["CertName"] = request.certName();
  }

  if (!!request.hasCertNo()) {
    body["CertNo"] = request.certNo();
  }

  if (!!request.hasCertType()) {
    body["CertType"] = request.certType();
  }

  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.certifyId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.crop();
  }

  if (!!request.hasDeviceToken()) {
    body["DeviceToken"] = request.deviceToken();
  }

  if (!!request.hasEncryptType()) {
    body["EncryptType"] = request.encryptType();
  }

  if (!!request.hasFaceContrastFile()) {
    body["FaceContrastFile"] = request.faceContrastFile();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.faceContrastPicture();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    body["FaceContrastPictureUrl"] = request.faceContrastPictureUrl();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasOssBucketName()) {
    body["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssObjectName()) {
    body["OssObjectName"] = request.ossObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContrastFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContrastFaceVerifyResponse>();
}

/**
 * @summary This interface is used to submit authentication materials for verification and comparison, and it synchronously returns the authentication result.
 *
 * @description - Interface Name: ContrastFaceVerify.
 * - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - Interface Description: An interface for real person authentication through server-side integration.
 * #### Image Format Requirements
 * When performing real person authentication, please ensure that the images you upload meet all of the following conditions:
 * - Recent photo with a clear, unobstructed, and natural expression, facing the camera directly.
 * - Clear and properly exposed photo, without overly dark, bright, or haloed faces, and with minimal angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, with the shorter side recommended to be resized to 720 pixels, and a compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
 *
 * @param request ContrastFaceVerifyRequest
 * @return ContrastFaceVerifyResponse
 */
ContrastFaceVerifyResponse Client::contrastFaceVerify(const ContrastFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contrastFaceVerifyWithOptions(request, runtime);
}

ContrastFaceVerifyResponse Client::contrastFaceVerifyAdvance(const ContrastFaceVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth"},
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
  ContrastFaceVerifyRequest contrastFaceVerifyReq = ContrastFaceVerifyRequest();
  Utils::Utils::convert(request, contrastFaceVerifyReq);
  if (!!request.hasFaceContrastFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.faceContrastFileObject()},
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
    contrastFaceVerifyReq.setFaceContrastFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ContrastFaceVerifyResponse contrastFaceVerifyResp = contrastFaceVerifyWithOptions(contrastFaceVerifyReq, runtime);
  return contrastFaceVerifyResp;
}

/**
 * @summary Call CreateAuthKey to get the authorization key, which is used for offline face recognition SDK activation.
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request CreateAuthKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuthKeyResponse
 */
CreateAuthKeyResponse Client::createAuthKeyWithOptions(const CreateAuthKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthYears()) {
    query["AuthYears"] = request.authYears();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasTest()) {
    query["Test"] = request.test();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.userDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAuthKey"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAuthKeyResponse>();
}

/**
 * @summary Call CreateAuthKey to get the authorization key, which is used for offline face recognition SDK activation.
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request CreateAuthKeyRequest
 * @return CreateAuthKeyResponse
 */
CreateAuthKeyResponse Client::createAuthKey(const CreateAuthKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuthKeyWithOptions(request, runtime);
}

/**
 * @summary Call CreateVerifySetting to create a verification scenario configuration. This operation is equivalent to creating a new verification scenario on the console.
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 *
 * @param request CreateVerifySettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVerifySettingResponse
 */
CreateVerifySettingResponse Client::createVerifySettingWithOptions(const CreateVerifySettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizName()) {
    query["BizName"] = request.bizName();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasGuideStep()) {
    query["GuideStep"] = request.guideStep();
  }

  if (!!request.hasPrivacyStep()) {
    query["PrivacyStep"] = request.privacyStep();
  }

  if (!!request.hasResultStep()) {
    query["ResultStep"] = request.resultStep();
  }

  if (!!request.hasSolution()) {
    query["Solution"] = request.solution();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVerifySetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVerifySettingResponse>();
}

/**
 * @summary Call CreateVerifySetting to create a verification scenario configuration. This operation is equivalent to creating a new verification scenario on the console.
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 *
 * @param request CreateVerifySettingRequest
 * @return CreateVerifySettingResponse
 */
CreateVerifySettingResponse Client::createVerifySetting(const CreateVerifySettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVerifySettingWithOptions(request, runtime);
}

/**
 * @summary Product Credential Verification
 *
 * @description Upload e-commerce product images to perform tampering, quality (clarity), and similar image detection, returning risk labels and scores.
 *
 * @param request CredentialProductVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialProductVerifyV2Response
 */
CredentialProductVerifyV2Response Client::credentialProductVerifyV2WithOptions(const CredentialProductVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.merchantId();
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
    {"action" , "CredentialProductVerifyV2"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialProductVerifyV2Response>();
}

/**
 * @summary Product Credential Verification
 *
 * @description Upload e-commerce product images to perform tampering, quality (clarity), and similar image detection, returning risk labels and scores.
 *
 * @param request CredentialProductVerifyV2Request
 * @return CredentialProductVerifyV2Response
 */
CredentialProductVerifyV2Response Client::credentialProductVerifyV2(const CredentialProductVerifyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialProductVerifyV2WithOptions(request, runtime);
}

CredentialProductVerifyV2Response Client::credentialProductVerifyV2Advance(const CredentialProductVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth"},
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
  CredentialProductVerifyV2Request credentialProductVerifyV2Req = CredentialProductVerifyV2Request();
  Utils::Utils::convert(request, credentialProductVerifyV2Req);
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
    credentialProductVerifyV2Req.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialProductVerifyV2Response credentialProductVerifyV2Resp = credentialProductVerifyV2WithOptions(credentialProductVerifyV2Req, runtime);
  return credentialProductVerifyV2Resp;
}

/**
 * @summary Credential verification
 *
 * @param tmpReq CredentialVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialVerifyResponse
 */
CredentialVerifyResponse Client::credentialVerifyWithOptions(const CredentialVerifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CredentialVerifyShrinkRequest request = CredentialVerifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMerchantDetail()) {
    request.setMerchantDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.merchantDetail(), "MerchantDetail", "json"));
  }

  json query = {};
  if (!!request.hasCertNum()) {
    query["CertNum"] = request.certNum();
  }

  if (!!request.hasCredName()) {
    query["CredName"] = request.credName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.credType();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasIsCheck()) {
    query["IsCheck"] = request.isCheck();
  }

  if (!!request.hasIsOCR()) {
    query["IsOCR"] = request.isOCR();
  }

  if (!!request.hasMerchantDetailShrink()) {
    query["MerchantDetail"] = request.merchantDetailShrink();
  }

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.merchantId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  if (!!request.hasPromptModel()) {
    query["PromptModel"] = request.promptModel();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  json body = {};
  if (!!request.hasImageContext()) {
    body["ImageContext"] = request.imageContext();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CredentialVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialVerifyResponse>();
}

/**
 * @summary Credential verification
 *
 * @param request CredentialVerifyRequest
 * @return CredentialVerifyResponse
 */
CredentialVerifyResponse Client::credentialVerify(const CredentialVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialVerifyWithOptions(request, runtime);
}

/**
 * @summary Credential Verification
 *
 * @description Input credential image information, perform image tampering and forgery detection, and image semantic understanding. Return the risk detection results.
 *
 * @param tmpReq CredentialVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialVerifyV2Response
 */
CredentialVerifyV2Response Client::credentialVerifyV2WithOptions(const CredentialVerifyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CredentialVerifyV2ShrinkRequest request = CredentialVerifyV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMerchantDetail()) {
    request.setMerchantDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.merchantDetail(), "MerchantDetail", "json"));
  }

  json query = {};
  if (!!request.hasCertNum()) {
    query["CertNum"] = request.certNum();
  }

  if (!!request.hasCredName()) {
    query["CredName"] = request.credName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.credType();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasIsCheck()) {
    query["IsCheck"] = request.isCheck();
  }

  if (!!request.hasIsOcr()) {
    query["IsOcr"] = request.isOcr();
  }

  if (!!request.hasMerchantDetailShrink()) {
    query["MerchantDetail"] = request.merchantDetailShrink();
  }

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.merchantId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  if (!!request.hasPromptModel()) {
    query["PromptModel"] = request.promptModel();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  json body = {};
  if (!!request.hasImageContext()) {
    body["ImageContext"] = request.imageContext();
  }

  if (!!request.hasImageFile()) {
    body["ImageFile"] = request.imageFile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CredentialVerifyV2"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CredentialVerifyV2Response>();
}

/**
 * @summary Credential Verification
 *
 * @description Input credential image information, perform image tampering and forgery detection, and image semantic understanding. Return the risk detection results.
 *
 * @param request CredentialVerifyV2Request
 * @return CredentialVerifyV2Response
 */
CredentialVerifyV2Response Client::credentialVerifyV2(const CredentialVerifyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialVerifyV2WithOptions(request, runtime);
}

CredentialVerifyV2Response Client::credentialVerifyV2Advance(const CredentialVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth"},
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
  CredentialVerifyV2Request credentialVerifyV2Req = CredentialVerifyV2Request();
  Utils::Utils::convert(request, credentialVerifyV2Req);
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
    credentialVerifyV2Req.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialVerifyV2Response credentialVerifyV2Resp = credentialVerifyV2WithOptions(credentialVerifyV2Req, runtime);
  return credentialVerifyV2Resp;
}

/**
 * @summary Face Credential Verification Service
 *
 * @description > The Face Deepfake Detection API is currently in the free public beta stage, which will end on August 30, 2024, at 23:59:59. During the public beta, the QPS (Queries Per Second) cannot exceed 3 times/second.
 * - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request DeepfakeDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepfakeDetectResponse
 */
DeepfakeDetectResponse Client::deepfakeDetectWithOptions(const DeepfakeDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaceInputType()) {
    query["FaceInputType"] = request.faceInputType();
  }

  if (!!request.hasFaceUrl()) {
    query["FaceUrl"] = request.faceUrl();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.outerOrderNo();
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
    {"action" , "DeepfakeDetect"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeepfakeDetectResponse>();
}

/**
 * @summary Face Credential Verification Service
 *
 * @description > The Face Deepfake Detection API is currently in the free public beta stage, which will end on August 30, 2024, at 23:59:59. During the public beta, the QPS (Queries Per Second) cannot exceed 3 times/second.
 * - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request DeepfakeDetectRequest
 * @return DeepfakeDetectResponse
 */
DeepfakeDetectResponse Client::deepfakeDetect(const DeepfakeDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepfakeDetectWithOptions(request, runtime);
}

/**
 * @summary Financial Level Sensitive Data Deletion Interface
 *
 * @description Deletes all personal information fields in the request, including name, ID number, phone number, IP, images, videos, and device information, etc.
 *
 * @param request DeleteFaceVerifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceVerifyResultResponse
 */
DeleteFaceVerifyResultResponse Client::deleteFaceVerifyResultWithOptions(const DeleteFaceVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasDeleteAfterQuery()) {
    query["DeleteAfterQuery"] = request.deleteAfterQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaceVerifyResult"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaceVerifyResultResponse>();
}

/**
 * @summary Financial Level Sensitive Data Deletion Interface
 *
 * @description Deletes all personal information fields in the request, including name, ID number, phone number, IP, images, videos, and device information, etc.
 *
 * @param request DeleteFaceVerifyResultRequest
 * @return DeleteFaceVerifyResultResponse
 */
DeleteFaceVerifyResultResponse Client::deleteFaceVerifyResult(const DeleteFaceVerifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceVerifyResultWithOptions(request, runtime);
}

/**
 * @summary Obtain Authentication Results from Image Element Verification
 *
 * @description After receiving the callback notification, you can use this interface on the server side to obtain the corresponding authentication status and information.
 *
 * @param request DescribeCardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCardVerifyResponse
 */
DescribeCardVerifyResponse Client::describeCardVerifyWithOptions(const DescribeCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCardVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCardVerifyResponse>();
}

/**
 * @summary Obtain Authentication Results from Image Element Verification
 *
 * @description After receiving the callback notification, you can use this interface on the server side to obtain the corresponding authentication status and information.
 *
 * @param request DescribeCardVerifyRequest
 * @return DescribeCardVerifyResponse
 */
DescribeCardVerifyResponse Client::describeCardVerify(const DescribeCardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCardVerifyWithOptions(request, runtime);
}

/**
 * @summary Call DescribeDeviceInfo to query device-related information, such as the validity period of authorization, business identifiers customized by the access party, and device ID, etc.
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 *
 * @param request DescribeDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfoWithOptions(const DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasExpiredEndDay()) {
    query["ExpiredEndDay"] = request.expiredEndDay();
  }

  if (!!request.hasExpiredStartDay()) {
    query["ExpiredStartDay"] = request.expiredStartDay();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.userDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceInfo"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeviceInfoResponse>();
}

/**
 * @summary Call DescribeDeviceInfo to query device-related information, such as the validity period of authorization, business identifiers customized by the access party, and device ID, etc.
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 *
 * @param request DescribeDeviceInfoRequest
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfo(const DescribeDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Financial-Grade Face Guard Service
 *
 * @param request DescribeFaceGuardRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaceGuardRiskResponse
 */
DescribeFaceGuardRiskResponse Client::describeFaceGuardRiskWithOptions(const DescribeFaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.deviceToken();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaceGuardRisk"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaceGuardRiskResponse>();
}

/**
 * @summary Financial-Grade Face Guard Service
 *
 * @param request DescribeFaceGuardRiskRequest
 * @return DescribeFaceGuardRiskResponse
 */
DescribeFaceGuardRiskResponse Client::describeFaceGuardRisk(const DescribeFaceGuardRiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaceGuardRiskWithOptions(request, runtime);
}

/**
 * @summary After the mobile end of the integrator receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaceVerifyResponse
 */
DescribeFaceVerifyResponse Client::describeFaceVerifyWithOptions(const DescribeFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasPictureReturnType()) {
    query["PictureReturnType"] = request.pictureReturnType();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaceVerifyResponse>();
}

/**
 * @summary After the mobile end of the integrator receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeFaceVerifyRequest
 * @return DescribeFaceVerifyResponse
 */
DescribeFaceVerifyResponse Client::describeFaceVerify(const DescribeFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Call DescribeOssUploadToken to get the Token required for uploading photos to OSS.
 *
 * @param request DescribeOssUploadTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssUploadTokenResponse
 */
DescribeOssUploadTokenResponse Client::describeOssUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeOssUploadToken"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssUploadTokenResponse>();
}

/**
 * @summary Call DescribeOssUploadToken to get the Token required for uploading photos to OSS.
 *
 * @return DescribeOssUploadTokenResponse
 */
DescribeOssUploadTokenResponse Client::describeOssUploadToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssUploadTokenWithOptions(runtime);
}

/**
 * @summary Open API adds financial-grade data statistics API
 *
 * @param request DescribePageFaceVerifyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePageFaceVerifyDataResponse
 */
DescribePageFaceVerifyDataResponse Client::describePageFaceVerifyDataWithOptions(const DescribePageFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePageFaceVerifyData"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePageFaceVerifyDataResponse>();
}

/**
 * @summary Open API adds financial-grade data statistics API
 *
 * @param request DescribePageFaceVerifyDataRequest
 * @return DescribePageFaceVerifyDataResponse
 */
DescribePageFaceVerifyDataResponse Client::describePageFaceVerifyData(const DescribePageFaceVerifyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageFaceVerifyDataWithOptions(request, runtime);
}

/**
 * @summary Enhanced Real Person Authentication Call Statistics Pagination Query Interface
 *
 * @param request DescribeSmartStatisticsPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartStatisticsPageListResponse
 */
DescribeSmartStatisticsPageListResponse Client::describeSmartStatisticsPageListWithOptions(const DescribeSmartStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmartStatisticsPageList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmartStatisticsPageListResponse>();
}

/**
 * @summary Enhanced Real Person Authentication Call Statistics Pagination Query Interface
 *
 * @param request DescribeSmartStatisticsPageListRequest
 * @return DescribeSmartStatisticsPageListResponse
 */
DescribeSmartStatisticsPageListResponse Client::describeSmartStatisticsPageList(const DescribeSmartStatisticsPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartStatisticsPageListWithOptions(request, runtime);
}

/**
 * @summary Query the result of real-person authentication.
 *
 * @description Prerequisites: Before accessing this API, please ensure that you have completed the necessary preparations. For more details, see [Real Person Authentication Server-side Preparation](https://help.aliyun.com/document_detail/127471.html) and [Liveness Face Verification Server-side Preparation](https://help.aliyun.com/document_detail/127717.html).
 * > Alibaba Cloud Real Person Authentication only stores authentication data for the last 180 days. For any subsequent business use, please call this interface in a timely manner to retrieve and store the data yourself to avoid any impact on usage.
 * Request Method: HTTPS POST and GET.
 * Interface Description: After the mobile end of the access party receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
 * Applicable Scope: This interface is applicable to the authentication solution with SDK + server-side integration.
 *
 * @param request DescribeVerifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyResultResponse
 */
DescribeVerifyResultResponse Client::describeVerifyResultWithOptions(const DescribeVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyResult"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyResultResponse>();
}

/**
 * @summary Query the result of real-person authentication.
 *
 * @description Prerequisites: Before accessing this API, please ensure that you have completed the necessary preparations. For more details, see [Real Person Authentication Server-side Preparation](https://help.aliyun.com/document_detail/127471.html) and [Liveness Face Verification Server-side Preparation](https://help.aliyun.com/document_detail/127717.html).
 * > Alibaba Cloud Real Person Authentication only stores authentication data for the last 180 days. For any subsequent business use, please call this interface in a timely manner to retrieve and store the data yourself to avoid any impact on usage.
 * Request Method: HTTPS POST and GET.
 * Interface Description: After the mobile end of the access party receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
 * Applicable Scope: This interface is applicable to the authentication solution with SDK + server-side integration.
 *
 * @param request DescribeVerifyResultRequest
 * @return DescribeVerifyResultResponse
 */
DescribeVerifyResultResponse Client::describeVerifyResult(const DescribeVerifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyResultWithOptions(request, runtime);
}

/**
 * @summary Call DescribeVerifySDK to get the offline SDK download address.
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * Interface Description: Obtain the SDK generation result based on the task ID for generating an offline facial recognition SDK.
 *
 * @param request DescribeVerifySDKRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifySDKResponse
 */
DescribeVerifySDKResponse Client::describeVerifySDKWithOptions(const DescribeVerifySDKRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifySDK"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifySDKResponse>();
}

/**
 * @summary Call DescribeVerifySDK to get the offline SDK download address.
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * Interface Description: Obtain the SDK generation result based on the task ID for generating an offline facial recognition SDK.
 *
 * @param request DescribeVerifySDKRequest
 * @return DescribeVerifySDKResponse
 */
DescribeVerifySDKResponse Client::describeVerifySDK(const DescribeVerifySDKRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifySDKWithOptions(request, runtime);
}

/**
 * @summary Call DescribeVerifyToken to initiate an authentication request and obtain an authentication Token. This interface is suitable for authentication solutions using SDK + server-side integration.
 *
 * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparations have been completed. For details, see [Overview of Real Person Authentication Solution Integration Process](https://help.aliyun.com/document_detail/127536.html) and [Overview of Live Face Verification Solution (Liveness Detection Solution) Integration Process](https://help.aliyun.com/document_detail/127687.html).
 * Request Method: HTTPS POST and GET
 * API Description: Before each authentication, use this interface to obtain an authentication Token (VerifyToken), which is used to link various interfaces in the authentication request.
 * Applicable Scope: This interface is suitable for wireless SDK integration.
 * Image Address: Use HTTP or HTTPS addresses that are publicly accessible over the Internet. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * Image Restrictions:
 * - Relative or absolute paths of local images are not supported.
 * - The size of a single image should be controlled within 2 MB to avoid algorithm retrieval timeout.
 * - The face area in the image must be at least 64*64 pixels (px).
 * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
 *
 * @param request DescribeVerifyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyTokenResponse
 */
DescribeVerifyTokenResponse Client::describeVerifyTokenWithOptions(const DescribeVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCallbackSeed()) {
    query["CallbackSeed"] = request.callbackSeed();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasFaceRetainedImageUrl()) {
    query["FaceRetainedImageUrl"] = request.faceRetainedImageUrl();
  }

  if (!!request.hasFailedRedirectUrl()) {
    query["FailedRedirectUrl"] = request.failedRedirectUrl();
  }

  if (!!request.hasIdCardBackImageUrl()) {
    query["IdCardBackImageUrl"] = request.idCardBackImageUrl();
  }

  if (!!request.hasIdCardFrontImageUrl()) {
    query["IdCardFrontImageUrl"] = request.idCardFrontImageUrl();
  }

  if (!!request.hasIdCardNumber()) {
    query["IdCardNumber"] = request.idCardNumber();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPassedRedirectUrl()) {
    query["PassedRedirectUrl"] = request.passedRedirectUrl();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserIp()) {
    query["UserIp"] = request.userIp();
  }

  if (!!request.hasUserPhoneNumber()) {
    query["UserPhoneNumber"] = request.userPhoneNumber();
  }

  if (!!request.hasUserRegistTime()) {
    query["UserRegistTime"] = request.userRegistTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyToken"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyTokenResponse>();
}

/**
 * @summary Call DescribeVerifyToken to initiate an authentication request and obtain an authentication Token. This interface is suitable for authentication solutions using SDK + server-side integration.
 *
 * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparations have been completed. For details, see [Overview of Real Person Authentication Solution Integration Process](https://help.aliyun.com/document_detail/127536.html) and [Overview of Live Face Verification Solution (Liveness Detection Solution) Integration Process](https://help.aliyun.com/document_detail/127687.html).
 * Request Method: HTTPS POST and GET
 * API Description: Before each authentication, use this interface to obtain an authentication Token (VerifyToken), which is used to link various interfaces in the authentication request.
 * Applicable Scope: This interface is suitable for wireless SDK integration.
 * Image Address: Use HTTP or HTTPS addresses that are publicly accessible over the Internet. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * Image Restrictions:
 * - Relative or absolute paths of local images are not supported.
 * - The size of a single image should be controlled within 2 MB to avoid algorithm retrieval timeout.
 * - The face area in the image must be at least 64*64 pixels (px).
 * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
 *
 * @param request DescribeVerifyTokenRequest
 * @return DescribeVerifyTokenResponse
 */
DescribeVerifyTokenResponse Client::describeVerifyToken(const DescribeVerifyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyTokenWithOptions(request, runtime);
}

/**
 * @summary Detect Validity Attributes in Face Photos
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 * Interface Description: Detects the validity-related attributes of faces in the input photo, which helps the business side to determine whether the photo meets their own business retention or comparison requirements. The currently supported face validity-related attributes include: whether it is a face, whether it is blurry, whether glasses are worn, face pose, whether it is a smile, etc.
 * Instructions for Uploading Image Addresses: When passing in images, you need to upload their corresponding HTTP, OSS addresses, or Base64 encoding.
 * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 Encoding: An image encoded through base64, with the format being `base64://<image base64 string>`.
 * Image Limitations:
 * - Does not support relative or absolute paths of local images.
 * - Please keep the size of a single image within 2 MB to avoid algorithm timeout.
 * - There is an 8 MB size limit for the Body of a single request; please calculate the total size of all images and other information in the request and do not exceed the limit.
 * - When using Base64 to pass images, the request method needs to be changed to POST; the header description of the image Base64 string, such as `data:image/png;base64`, should be removed.
 *
 * @param request DetectFaceAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectFaceAttributesResponse
 */
DetectFaceAttributesResponse Client::detectFaceAttributesWithOptions(const DetectFaceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasMaterialValue()) {
    body["MaterialValue"] = request.materialValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetectFaceAttributes"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectFaceAttributesResponse>();
}

/**
 * @summary Detect Validity Attributes in Face Photos
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 * Interface Description: Detects the validity-related attributes of faces in the input photo, which helps the business side to determine whether the photo meets their own business retention or comparison requirements. The currently supported face validity-related attributes include: whether it is a face, whether it is blurry, whether glasses are worn, face pose, whether it is a smile, etc.
 * Instructions for Uploading Image Addresses: When passing in images, you need to upload their corresponding HTTP, OSS addresses, or Base64 encoding.
 * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 Encoding: An image encoded through base64, with the format being `base64://<image base64 string>`.
 * Image Limitations:
 * - Does not support relative or absolute paths of local images.
 * - Please keep the size of a single image within 2 MB to avoid algorithm timeout.
 * - There is an 8 MB size limit for the Body of a single request; please calculate the total size of all images and other information in the request and do not exceed the limit.
 * - When using Base64 to pass images, the request method needs to be changed to POST; the header description of the image Base64 string, such as `data:image/png;base64`, should be removed.
 *
 * @param request DetectFaceAttributesRequest
 * @return DetectFaceAttributesResponse
 */
DetectFaceAttributesResponse Client::detectFaceAttributes(const DetectFaceAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectFaceAttributesWithOptions(request, runtime);
}

/**
 * @summary Two-Factor Validity Verification API
 *
 * @param request Id2MetaPeriodVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaPeriodVerifyResponse
 */
Id2MetaPeriodVerifyResponse Client::id2MetaPeriodVerifyWithOptions(const Id2MetaPeriodVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
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
    {"action" , "Id2MetaPeriodVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaPeriodVerifyResponse>();
}

/**
 * @summary Two-Factor Validity Verification API
 *
 * @param request Id2MetaPeriodVerifyRequest
 * @return Id2MetaPeriodVerifyResponse
 */
Id2MetaPeriodVerifyResponse Client::id2MetaPeriodVerify(const Id2MetaPeriodVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaPeriodVerifyWithOptions(request, runtime);
}

/**
 * @summary Identity Two-Factor Standard
 *
 * @param request Id2MetaStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaStandardVerifyResponse
 */
Id2MetaStandardVerifyResponse Client::id2MetaStandardVerifyWithOptions(const Id2MetaStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Id2MetaStandardVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaStandardVerifyResponse>();
}

/**
 * @summary Identity Two-Factor Standard
 *
 * @param request Id2MetaStandardVerifyRequest
 * @return Id2MetaStandardVerifyResponse
 */
Id2MetaStandardVerifyResponse Client::id2MetaStandardVerify(const Id2MetaStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Identity Two-Factor Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Id2MetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaVerifyResponse
 */
Id2MetaVerifyResponse Client::id2MetaVerifyWithOptions(const Id2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Id2MetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaVerifyResponse>();
}

/**
 * @summary Identity Two-Factor Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Id2MetaVerifyRequest
 * @return Id2MetaVerifyResponse
 */
Id2MetaVerifyResponse Client::id2MetaVerify(const Id2MetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaVerifyWithOptions(request, runtime);
}

/**
 * @summary ID Two-Factor Image Verification
 *
 * @description Upload both sides of the ID card, and get the verification result of the two factors from an authoritative data source.
 *
 * @param request Id2MetaVerifyWithOCRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaVerifyWithOCRResponse
 */
Id2MetaVerifyWithOCRResponse Client::id2MetaVerifyWithOCRWithOptions(const Id2MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertFile()) {
    body["CertFile"] = request.certFile();
  }

  if (!!request.hasCertNationalFile()) {
    body["CertNationalFile"] = request.certNationalFile();
  }

  if (!!request.hasCertNationalUrl()) {
    body["CertNationalUrl"] = request.certNationalUrl();
  }

  if (!!request.hasCertUrl()) {
    body["CertUrl"] = request.certUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Id2MetaVerifyWithOCR"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id2MetaVerifyWithOCRResponse>();
}

/**
 * @summary ID Two-Factor Image Verification
 *
 * @description Upload both sides of the ID card, and get the verification result of the two factors from an authoritative data source.
 *
 * @param request Id2MetaVerifyWithOCRRequest
 * @return Id2MetaVerifyWithOCRResponse
 */
Id2MetaVerifyWithOCRResponse Client::id2MetaVerifyWithOCR(const Id2MetaVerifyWithOCRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaVerifyWithOCRWithOptions(request, runtime);
}

Id2MetaVerifyWithOCRResponse Client::id2MetaVerifyWithOCRAdvance(const Id2MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth"},
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
  Id2MetaVerifyWithOCRRequest id2MetaVerifyWithOCRReq = Id2MetaVerifyWithOCRRequest();
  Utils::Utils::convert(request, id2MetaVerifyWithOCRReq);
  if (!!request.hasCertFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.certFileObject()},
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
    id2MetaVerifyWithOCRReq.setCertFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  if (!!request.hasCertNationalFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.certNationalFileObject()},
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
    id2MetaVerifyWithOCRReq.setCertNationalFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRResp = id2MetaVerifyWithOCRWithOptions(id2MetaVerifyWithOCRReq, runtime);
  return id2MetaVerifyWithOCRResp;
}

/**
 * @summary Identity Three Elements Verification
 *
 * @description Input name, ID number, and face photo to verify their authenticity and consistency through authoritative sources.
 *
 * @param request Id3MetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id3MetaVerifyResponse
 */
Id3MetaVerifyResponse Client::id3MetaVerifyWithOptions(const Id3MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCrop()) {
    body["Crop"] = request.crop();
  }

  if (!!request.hasFaceFile()) {
    body["FaceFile"] = request.faceFile();
  }

  if (!!request.hasFaceUrl()) {
    body["FaceUrl"] = request.faceUrl();
  }

  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Id3MetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id3MetaVerifyResponse>();
}

/**
 * @summary Identity Three Elements Verification
 *
 * @description Input name, ID number, and face photo to verify their authenticity and consistency through authoritative sources.
 *
 * @param request Id3MetaVerifyRequest
 * @return Id3MetaVerifyResponse
 */
Id3MetaVerifyResponse Client::id3MetaVerify(const Id3MetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id3MetaVerifyWithOptions(request, runtime);
}

Id3MetaVerifyResponse Client::id3MetaVerifyAdvance(const Id3MetaVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "Cloudauth"},
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
  Id3MetaVerifyRequest id3MetaVerifyReq = Id3MetaVerifyRequest();
  Utils::Utils::convert(request, id3MetaVerifyReq);
  if (!!request.hasFaceFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.faceFileObject()},
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
    id3MetaVerifyReq.setFaceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id3MetaVerifyResponse id3MetaVerifyResp = id3MetaVerifyWithOptions(id3MetaVerifyReq, runtime);
  return id3MetaVerifyResp;
}

/**
 * @summary Initiate an authentication request for image verification
 *
 * @description Before each authentication, use this interface to obtain the CertifyId, which is used to link various interfaces in the authentication request.
 *
 * @param request InitCardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitCardVerifyResponse
 */
InitCardVerifyResponse Client::initCardVerifyWithOptions(const InitCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.callbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasCardPageNumber()) {
    query["CardPageNumber"] = request.cardPageNumber();
  }

  if (!!request.hasCardType()) {
    query["CardType"] = request.cardType();
  }

  if (!!request.hasDocScanMode()) {
    query["DocScanMode"] = request.docScanMode();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.merchantBizId();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.metaInfo();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasPictureSave()) {
    query["PictureSave"] = request.pictureSave();
  }

  if (!!request.hasVerifyMeta()) {
    query["VerifyMeta"] = request.verifyMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitCardVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitCardVerifyResponse>();
}

/**
 * @summary Initiate an authentication request for image verification
 *
 * @description Before each authentication, use this interface to obtain the CertifyId, which is used to link various interfaces in the authentication request.
 *
 * @param request InitCardVerifyRequest
 * @return InitCardVerifyResponse
 */
InitCardVerifyResponse Client::initCardVerify(const InitCardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initCardVerifyWithOptions(request, runtime);
}

/**
 * @summary Real-Person Server Initialization Interface
 *
 * @description - Service Address: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
 * #### Image Format Requirements
 * When performing real-person authentication, please provide images that meet all of the following conditions:
 * - Recent photo with a clear, unobstructed face, natural expression, and facing the camera directly.
 * - Clear photo with normal exposure, no overexposure, underexposure, or halo effects, and no significant angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, recommended short side scaled to 720 pixels, compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in the case of multiple faces, the largest face will be selected.
 *
 * @param request InitFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitFaceVerifyResponse
 */
InitFaceVerifyResponse Client::initFaceVerifyWithOptions(const InitFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppQualityCheck()) {
    query["AppQualityCheck"] = request.appQualityCheck();
  }

  if (!!request.hasBirthday()) {
    query["Birthday"] = request.birthday();
  }

  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.callbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasCameraSelection()) {
    query["CameraSelection"] = request.cameraSelection();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasCertNo()) {
    query["CertNo"] = request.certNo();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasCertifyUrlStyle()) {
    query["CertifyUrlStyle"] = request.certifyUrlStyle();
  }

  if (!!request.hasCertifyUrlType()) {
    query["CertifyUrlType"] = request.certifyUrlType();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.encryptType();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    query["FaceContrastPictureUrl"] = request.faceContrastPictureUrl();
  }

  if (!!request.hasFaceGuardOutput()) {
    query["FaceGuardOutput"] = request.faceGuardOutput();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.metaInfo();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasNeedMultiFaceCheck()) {
    query["NeedMultiFaceCheck"] = request.needMultiFaceCheck();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssObjectName()) {
    query["OssObjectName"] = request.ossObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProcedurePriority()) {
    query["ProcedurePriority"] = request.procedurePriority();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRarelyCharacters()) {
    query["RarelyCharacters"] = request.rarelyCharacters();
  }

  if (!!request.hasReadImg()) {
    query["ReadImg"] = request.readImg();
  }

  if (!!request.hasReturnUrl()) {
    query["ReturnUrl"] = request.returnUrl();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSuitableType()) {
    query["SuitableType"] = request.suitableType();
  }

  if (!!request.hasUiCustomUrl()) {
    query["UiCustomUrl"] = request.uiCustomUrl();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasValidityDate()) {
    query["ValidityDate"] = request.validityDate();
  }

  if (!!request.hasVideoEvidence()) {
    query["VideoEvidence"] = request.videoEvidence();
  }

  if (!!request.hasVoluntaryCustomizedContent()) {
    query["VoluntaryCustomizedContent"] = request.voluntaryCustomizedContent();
  }

  json body = {};
  if (!!request.hasAuthId()) {
    body["AuthId"] = request.authId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.crop();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.faceContrastPicture();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InitFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitFaceVerifyResponse>();
}

/**
 * @summary Real-Person Server Initialization Interface
 *
 * @description - Service Address: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
 * #### Image Format Requirements
 * When performing real-person authentication, please provide images that meet all of the following conditions:
 * - Recent photo with a clear, unobstructed face, natural expression, and facing the camera directly.
 * - Clear photo with normal exposure, no overexposure, underexposure, or halo effects, and no significant angle deviation.
 * - Resolution not exceeding 1920*1080, at least 640*480, recommended short side scaled to 720 pixels, compression ratio greater than 0.9.
 * - Photo size: <1MB.
 * - Supports 90, 180, and 270-degree photos; in the case of multiple faces, the largest face will be selected.
 *
 * @param request InitFaceVerifyRequest
 * @return InitFaceVerifyResponse
 */
InitFaceVerifyResponse Client::initFaceVerify(const InitFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Add Real Person Whitelist
 *
 * @param request InsertWhiteListSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertWhiteListSettingResponse
 */
InsertWhiteListSettingResponse Client::insertWhiteListSettingWithOptions(const InsertWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.certNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasValidDay()) {
    query["ValidDay"] = request.validDay();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertWhiteListSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertWhiteListSettingResponse>();
}

/**
 * @summary Add Real Person Whitelist
 *
 * @param request InsertWhiteListSettingRequest
 * @return InsertWhiteListSettingResponse
 */
InsertWhiteListSettingResponse Client::insertWhiteListSetting(const InsertWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary Silent Liveness Face (LivenessFaceVerify) refers to a service that performs real face detection by inputting pre-obtained face images through an API. The algorithm primarily identifies whether the face is from a screen recording, printed picture, or other types of liveness attacks. This service is suitable for low-risk business scenarios or in conjunction with offline facial recognition SDKs. If your business has higher requirements for real face security, it is recommended to integrate App or WebSDK mode, or integrate with Deepfake face detection services to assist in identifying more dimensions of face forgery risks.
 *
 * @description Invoke the LivenessFaceVerify interface to perform liveness detection on a face image.
 *
 * @param request LivenessFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LivenessFaceVerifyResponse
 */
LivenessFaceVerifyResponse Client::livenessFaceVerifyWithOptions(const LivenessFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  json body = {};
  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.certifyId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.crop();
  }

  if (!!request.hasDeviceToken()) {
    body["DeviceToken"] = request.deviceToken();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.faceContrastPicture();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    body["FaceContrastPictureUrl"] = request.faceContrastPictureUrl();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.ip();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasOssBucketName()) {
    body["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssObjectName()) {
    body["OssObjectName"] = request.ossObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "LivenessFaceVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LivenessFaceVerifyResponse>();
}

/**
 * @summary Silent Liveness Face (LivenessFaceVerify) refers to a service that performs real face detection by inputting pre-obtained face images through an API. The algorithm primarily identifies whether the face is from a screen recording, printed picture, or other types of liveness attacks. This service is suitable for low-risk business scenarios or in conjunction with offline facial recognition SDKs. If your business has higher requirements for real face security, it is recommended to integrate App or WebSDK mode, or integrate with Deepfake face detection services to assist in identifying more dimensions of face forgery risks.
 *
 * @description Invoke the LivenessFaceVerify interface to perform liveness detection on a face image.
 *
 * @param request LivenessFaceVerifyRequest
 * @return LivenessFaceVerifyResponse
 */
LivenessFaceVerifyResponse Client::livenessFaceVerify(const LivenessFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return livenessFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Mobile Two-Factor Verification
 *
 * @description Input the phone number and name, verify their authenticity and consistency through authoritative data sources.
 *
 * @param request Mobile2MetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile2MetaVerifyResponse
 */
Mobile2MetaVerifyResponse Client::mobile2MetaVerifyWithOptions(const Mobile2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile2MetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile2MetaVerifyResponse>();
}

/**
 * @summary Mobile Two-Factor Verification
 *
 * @description Input the phone number and name, verify their authenticity and consistency through authoritative data sources.
 *
 * @param request Mobile2MetaVerifyRequest
 * @return Mobile2MetaVerifyResponse
 */
Mobile2MetaVerifyResponse Client::mobile2MetaVerify(const Mobile2MetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile2MetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Detailed Three-Element Verification for Phone Number_Standard Version
 *
 * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources. If they do not match, the reason for the mismatch is returned.
 *
 * @param request Mobile3MetaDetailStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaDetailStandardVerifyResponse
 */
Mobile3MetaDetailStandardVerifyResponse Client::mobile3MetaDetailStandardVerifyWithOptions(const Mobile3MetaDetailStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile3MetaDetailStandardVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile3MetaDetailStandardVerifyResponse>();
}

/**
 * @summary Detailed Three-Element Verification for Phone Number_Standard Version
 *
 * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources. If they do not match, the reason for the mismatch is returned.
 *
 * @param request Mobile3MetaDetailStandardVerifyRequest
 * @return Mobile3MetaDetailStandardVerifyResponse
 */
Mobile3MetaDetailStandardVerifyResponse Client::mobile3MetaDetailStandardVerify(const Mobile3MetaDetailStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaDetailStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Detailed Mobile Three-Element Verification Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Mobile3MetaDetailVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaDetailVerifyResponse
 */
Mobile3MetaDetailVerifyResponse Client::mobile3MetaDetailVerifyWithOptions(const Mobile3MetaDetailVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile3MetaDetailVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile3MetaDetailVerifyResponse>();
}

/**
 * @summary Detailed Mobile Three-Element Verification Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Mobile3MetaDetailVerifyRequest
 * @return Mobile3MetaDetailVerifyResponse
 */
Mobile3MetaDetailVerifyResponse Client::mobile3MetaDetailVerify(const Mobile3MetaDetailVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaDetailVerifyWithOptions(request, runtime);
}

/**
 * @summary Simplified Three-Element Verification for Phone Number_Standard Version
 *
 * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources.
 *
 * @param request Mobile3MetaSimpleStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaSimpleStandardVerifyResponse
 */
Mobile3MetaSimpleStandardVerifyResponse Client::mobile3MetaSimpleStandardVerifyWithOptions(const Mobile3MetaSimpleStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile3MetaSimpleStandardVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile3MetaSimpleStandardVerifyResponse>();
}

/**
 * @summary Simplified Three-Element Verification for Phone Number_Standard Version
 *
 * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources.
 *
 * @param request Mobile3MetaSimpleStandardVerifyRequest
 * @return Mobile3MetaSimpleStandardVerifyResponse
 */
Mobile3MetaSimpleStandardVerifyResponse Client::mobile3MetaSimpleStandardVerify(const Mobile3MetaSimpleStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaSimpleStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Mobile Three Elements Simplified Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Mobile3MetaSimpleVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaSimpleVerifyResponse
 */
Mobile3MetaSimpleVerifyResponse Client::mobile3MetaSimpleVerifyWithOptions(const Mobile3MetaSimpleVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Mobile3MetaSimpleVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Mobile3MetaSimpleVerifyResponse>();
}

/**
 * @summary Mobile Three Elements Simplified Interface
 *
 * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request Mobile3MetaSimpleVerifyRequest
 * @return Mobile3MetaSimpleVerifyResponse
 */
Mobile3MetaSimpleVerifyResponse Client::mobile3MetaSimpleVerify(const Mobile3MetaSimpleVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaSimpleVerifyWithOptions(request, runtime);
}

/**
 * @summary Number Detection
 *
 * @param request MobileDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileDetectResponse
 */
MobileDetectResponse Client::mobileDetectWithOptions(const MobileDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobiles()) {
    body["Mobiles"] = request.mobiles();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MobileDetect"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MobileDetectResponse>();
}

/**
 * @summary Number Detection
 *
 * @param request MobileDetectRequest
 * @return MobileDetectResponse
 */
MobileDetectResponse Client::mobileDetect(const MobileDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileDetectWithOptions(request, runtime);
}

/**
 * @summary Query the online status of a mobile number
 *
 * @param request MobileOnlineStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileOnlineStatusResponse
 */
MobileOnlineStatusResponse Client::mobileOnlineStatusWithOptions(const MobileOnlineStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MobileOnlineStatus"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MobileOnlineStatusResponse>();
}

/**
 * @summary Query the online status of a mobile number
 *
 * @param request MobileOnlineStatusRequest
 * @return MobileOnlineStatusResponse
 */
MobileOnlineStatusResponse Client::mobileOnlineStatus(const MobileOnlineStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileOnlineStatusWithOptions(request, runtime);
}

/**
 * @summary Query the online duration of a mobile number
 *
 * @param request MobileOnlineTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileOnlineTimeResponse
 */
MobileOnlineTimeResponse Client::mobileOnlineTimeWithOptions(const MobileOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.paramType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MobileOnlineTime"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MobileOnlineTimeResponse>();
}

/**
 * @summary Query the online duration of a mobile number
 *
 * @param request MobileOnlineTimeRequest
 * @return MobileOnlineTimeResponse
 */
MobileOnlineTimeResponse Client::mobileOnlineTime(const MobileOnlineTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileOnlineTimeWithOptions(request, runtime);
}

/**
 * @summary Call ModifyDeviceInfo to update device-related information, such as extending the device authorization validity period, updating the business party\\"s custom business identifier, and device ID. Suitable for scenarios like renewing the device validity period.
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 *
 * @param request ModifyDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceInfoResponse
 */
ModifyDeviceInfoResponse Client::modifyDeviceInfoWithOptions(const ModifyDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExpiredDay()) {
    query["ExpiredDay"] = request.expiredDay();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.userDeviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDeviceInfo"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDeviceInfoResponse>();
}

/**
 * @summary Call ModifyDeviceInfo to update device-related information, such as extending the device authorization validity period, updating the business party\\"s custom business identifier, and device ID. Suitable for scenarios like renewing the device validity period.
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 *
 * @param request ModifyDeviceInfoRequest
 * @return ModifyDeviceInfoResponse
 */
ModifyDeviceInfoResponse Client::modifyDeviceInfo(const ModifyDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Paging Query for Real Person Whitelist Configuration
 *
 * @param request PageQueryWhiteListSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageQueryWhiteListSettingResponse
 */
PageQueryWhiteListSettingResponse Client::pageQueryWhiteListSettingWithOptions(const PageQueryWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.certNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasValidEndDate()) {
    query["ValidEndDate"] = request.validEndDate();
  }

  if (!!request.hasValidStartDate()) {
    query["ValidStartDate"] = request.validStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PageQueryWhiteListSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageQueryWhiteListSettingResponse>();
}

/**
 * @summary Paging Query for Real Person Whitelist Configuration
 *
 * @param request PageQueryWhiteListSettingRequest
 * @return PageQueryWhiteListSettingResponse
 */
PageQueryWhiteListSettingResponse Client::pageQueryWhiteListSetting(const PageQueryWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageQueryWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary Delete Real Person Whitelist
 *
 * @param tmpReq RemoveWhiteListSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveWhiteListSettingResponse
 */
RemoveWhiteListSettingResponse Client::removeWhiteListSettingWithOptions(const RemoveWhiteListSettingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveWhiteListSettingShrinkRequest request = RemoveWhiteListSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveWhiteListSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveWhiteListSettingResponse>();
}

/**
 * @summary Delete Real Person Whitelist
 *
 * @param request RemoveWhiteListSettingRequest
 * @return RemoveWhiteListSettingResponse
 */
RemoveWhiteListSettingResponse Client::removeWhiteListSetting(const RemoveWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary Five-Item Vehicle Information Recognition
 *
 * @description Query basic vehicle information through the license plate number and vehicle type.
 *
 * @param request Vehicle5ItemQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Vehicle5ItemQueryResponse
 */
Vehicle5ItemQueryResponse Client::vehicle5ItemQueryWithOptions(const Vehicle5ItemQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.vehicleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Vehicle5ItemQuery"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Vehicle5ItemQueryResponse>();
}

/**
 * @summary Five-Item Vehicle Information Recognition
 *
 * @description Query basic vehicle information through the license plate number and vehicle type.
 *
 * @param request Vehicle5ItemQueryRequest
 * @return Vehicle5ItemQueryResponse
 */
Vehicle5ItemQueryResponse Client::vehicle5ItemQuery(const Vehicle5ItemQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicle5ItemQueryWithOptions(request, runtime);
}

/**
 * @summary Vehicle Insurance Date Inquiry
 *
 * @description Query the vehicle insurance date through the license plate number, vehicle type, and vehicle identification number (VIN).
 *
 * @param request VehicleInsureQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleInsureQueryResponse
 */
VehicleInsureQueryResponse Client::vehicleInsureQueryWithOptions(const VehicleInsureQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.vehicleType();
  }

  if (!!request.hasVin()) {
    query["Vin"] = request.vin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VehicleInsureQuery"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VehicleInsureQueryResponse>();
}

/**
 * @summary Vehicle Insurance Date Inquiry
 *
 * @description Query the vehicle insurance date through the license plate number, vehicle type, and vehicle identification number (VIN).
 *
 * @param request VehicleInsureQueryRequest
 * @return VehicleInsureQueryResponse
 */
VehicleInsureQueryResponse Client::vehicleInsureQuery(const VehicleInsureQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleInsureQueryWithOptions(request, runtime);
}

/**
 * @summary Vehicle Element Verification
 *
 * @description Verifies the consistency of name, ID number, vehicle license plate, and vehicle type.
 *
 * @param request VehicleMetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleMetaVerifyResponse
 */
VehicleMetaVerifyResponse Client::vehicleMetaVerifyWithOptions(const VehicleMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.vehicleType();
  }

  if (!!request.hasVerifyMetaType()) {
    query["VerifyMetaType"] = request.verifyMetaType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VehicleMetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VehicleMetaVerifyResponse>();
}

/**
 * @summary Vehicle Element Verification
 *
 * @description Verifies the consistency of name, ID number, vehicle license plate, and vehicle type.
 *
 * @param request VehicleMetaVerifyRequest
 * @return VehicleMetaVerifyResponse
 */
VehicleMetaVerifyResponse Client::vehicleMetaVerify(const VehicleMetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleMetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Enhanced Vehicle Element Verification
 *
 * @description Verifies the consistency of name, ID number, license plate number, and vehicle type, and supports returning detailed vehicle information.
 *
 * @param request VehicleMetaVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleMetaVerifyV2Response
 */
VehicleMetaVerifyV2Response Client::vehicleMetaVerifyV2WithOptions(const VehicleMetaVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.vehicleType();
  }

  if (!!request.hasVerifyMetaType()) {
    query["VerifyMetaType"] = request.verifyMetaType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VehicleMetaVerifyV2"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VehicleMetaVerifyV2Response>();
}

/**
 * @summary Enhanced Vehicle Element Verification
 *
 * @description Verifies the consistency of name, ID number, license plate number, and vehicle type, and supports returning detailed vehicle information.
 *
 * @param request VehicleMetaVerifyV2Request
 * @return VehicleMetaVerifyV2Response
 */
VehicleMetaVerifyV2Response Client::vehicleMetaVerifyV2(const VehicleMetaVerifyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleMetaVerifyV2WithOptions(request, runtime);
}

/**
 * @summary Vehicle Information Recognition
 *
 * @description Query detailed vehicle information through the license plate number and vehicle type.
 *
 * @param request VehicleQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleQueryResponse
 */
VehicleQueryResponse Client::vehicleQueryWithOptions(const VehicleQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.paramType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.vehicleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VehicleQuery"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VehicleQueryResponse>();
}

/**
 * @summary Vehicle Information Recognition
 *
 * @description Query detailed vehicle information through the license plate number and vehicle type.
 *
 * @param request VehicleQueryRequest
 * @return VehicleQueryResponse
 */
VehicleQueryResponse Client::vehicleQuery(const VehicleQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleQueryWithOptions(request, runtime);
}

/**
 * @summary Call VerifyMaterial, in a pure server-side access authentication solution, input name, ID number, portrait photo, and front and back photos of the ID card (optional) for real-person authentication, and return the authentication result synchronously.
 *
 * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparatory work has been completed. For details, please refer to [Server-side Access Preparation](https://help.aliyun.com/document_detail/127471.html).
 * Request Method: HTTPS POST and GET.
 * API Description: The server of the access party submits the authentication materials to the real-person authentication service for verification and comparison, with the results returned synchronously.
 * Applicable Scope: This interface is only applicable to pure server-side access authentication solutions.
 * Image Upload Address Explanation:
 * - HTTP or HTTPS address: Supports publicly accessible HTTP or HTTPS addresses. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - OSS address: If the images from the access party are local files, Alibaba Cloud also provides an upload SDK, supporting the business party to upload the images to the specified OSS bucket of the real-person authentication service, and use the obtained OSS address as the image address parameter in the interface. If your business needs to use the upload SDK, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us for acquisition.
 * Image Limitations:
 * - Does not support relative or absolute paths of local images.
 * - Please keep the size of a single image within 2 MB to avoid algorithm retrieval timeout.
 * - The face area in the image should be at least 64*64 pixels.
 * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request, and do not exceed the limit.
 *
 * @param request VerifyMaterialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyMaterialResponse
 */
VerifyMaterialResponse Client::verifyMaterialWithOptions(const VerifyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasFaceImageUrl()) {
    query["FaceImageUrl"] = request.faceImageUrl();
  }

  if (!!request.hasIdCardBackImageUrl()) {
    query["IdCardBackImageUrl"] = request.idCardBackImageUrl();
  }

  if (!!request.hasIdCardFrontImageUrl()) {
    query["IdCardFrontImageUrl"] = request.idCardFrontImageUrl();
  }

  if (!!request.hasIdCardNumber()) {
    query["IdCardNumber"] = request.idCardNumber();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyMaterial"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyMaterialResponse>();
}

/**
 * @summary Call VerifyMaterial, in a pure server-side access authentication solution, input name, ID number, portrait photo, and front and back photos of the ID card (optional) for real-person authentication, and return the authentication result synchronously.
 *
 * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparatory work has been completed. For details, please refer to [Server-side Access Preparation](https://help.aliyun.com/document_detail/127471.html).
 * Request Method: HTTPS POST and GET.
 * API Description: The server of the access party submits the authentication materials to the real-person authentication service for verification and comparison, with the results returned synchronously.
 * Applicable Scope: This interface is only applicable to pure server-side access authentication solutions.
 * Image Upload Address Explanation:
 * - HTTP or HTTPS address: Supports publicly accessible HTTP or HTTPS addresses. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - OSS address: If the images from the access party are local files, Alibaba Cloud also provides an upload SDK, supporting the business party to upload the images to the specified OSS bucket of the real-person authentication service, and use the obtained OSS address as the image address parameter in the interface. If your business needs to use the upload SDK, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us for acquisition.
 * Image Limitations:
 * - Does not support relative or absolute paths of local images.
 * - Please keep the size of a single image within 2 MB to avoid algorithm retrieval timeout.
 * - The face area in the image should be at least 64*64 pixels.
 * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request, and do not exceed the limit.
 *
 * @param request VerifyMaterialRequest
 * @return VerifyMaterialResponse
 */
VerifyMaterialResponse Client::verifyMaterial(const VerifyMaterialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyMaterialWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudauth20190307