#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20190307.hpp>
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    contrastFaceVerifyReq.setFaceContrastFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ContrastFaceVerifyResponse contrastFaceVerifyResp = contrastFaceVerifyWithOptions(contrastFaceVerifyReq, runtime);
  return contrastFaceVerifyResp;
}

/**
 * @summary Create a financial-grade authentication scenario
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateAntCloudAuthSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAntCloudAuthSceneResponse
 */
CreateAntCloudAuthSceneResponse Client::createAntCloudAuthSceneWithOptions(const CreateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindMiniProgram()) {
    query["BindMiniProgram"] = request.bindMiniProgram();
  }

  if (!!request.hasCheckFileBody()) {
    query["CheckFileBody"] = request.checkFileBody();
  }

  if (!!request.hasCheckFileName()) {
    query["CheckFileName"] = request.checkFileName();
  }

  if (!!request.hasMiniProgramName()) {
    query["MiniProgramName"] = request.miniProgramName();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasReturnPicCount()) {
    query["ReturnPicCount"] = request.returnPicCount();
  }

  if (!!request.hasReturnVideoLength()) {
    query["ReturnVideoLength"] = request.returnVideoLength();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.storeImage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAntCloudAuthScene"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAntCloudAuthSceneResponse>();
}

/**
 * @summary Create a financial-grade authentication scenario
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateAntCloudAuthSceneRequest
 * @return CreateAntCloudAuthSceneResponse
 */
CreateAntCloudAuthSceneResponse Client::createAntCloudAuthScene(const CreateAntCloudAuthSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAntCloudAuthSceneWithOptions(request, runtime);
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
 * @summary Create Cloud Scene
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateCloudauthstSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudauthstSceneResponse
 */
CreateCloudauthstSceneResponse Client::createCloudauthstSceneWithOptions(const CreateCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.storeImage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudauthstScene"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudauthstSceneResponse>();
}

/**
 * @summary Create Cloud Scene
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateCloudauthstSceneRequest
 * @return CreateCloudauthstSceneResponse
 */
CreateCloudauthstSceneResponse Client::createCloudauthstScene(const CreateCloudauthstSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudauthstSceneWithOptions(request, runtime);
}

/**
 * @summary Create Scene Configuration
 *
 * @description Request Method: Supports sending requests via HTTPS POST.
 * Request Address: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneConfigResponse
 */
CreateSceneConfigResponse Client::createSceneConfigWithOptions(const CreateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasSceneId()) {
    body["sceneId"] = request.sceneId();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSceneConfig"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSceneConfigResponse>();
}

/**
 * @summary Create Scene Configuration
 *
 * @description Request Method: Supports sending requests via HTTPS POST.
 * Request Address: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request CreateSceneConfigRequest
 * @return CreateSceneConfigResponse
 */
CreateSceneConfigResponse Client::createSceneConfig(const CreateSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSceneConfigWithOptions(request, runtime);
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
 * @summary Create Whitelist
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 *
 * @param request CreateWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWhitelistSettingResponse
 */
CreateWhitelistSettingResponse Client::createWhitelistSettingWithOptions(const CreateWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.certNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasValidDay()) {
    query["ValidDay"] = request.validDay();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWhitelistSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWhitelistSettingResponse>();
}

/**
 * @summary Create Whitelist
 *
 * @description Request Method: Only supports sending requests via HTTPS POST.
 *
 * @param request CreateWhitelistSettingRequest
 * @return CreateWhitelistSettingResponse
 */
CreateWhitelistSettingResponse Client::createWhitelistSetting(const CreateWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWhitelistSettingWithOptions(request, runtime);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
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
 * @summary Delete All Custom Flow Control Strategies
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DeleteAllCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllCustomizeFlowStrategyResponse
 */
DeleteAllCustomizeFlowStrategyResponse Client::deleteAllCustomizeFlowStrategyWithOptions(const DeleteAllCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAllCustomizeFlowStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAllCustomizeFlowStrategyResponse>();
}

/**
 * @summary Delete All Custom Flow Control Strategies
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DeleteAllCustomizeFlowStrategyRequest
 * @return DeleteAllCustomizeFlowStrategyResponse
 */
DeleteAllCustomizeFlowStrategyResponse Client::deleteAllCustomizeFlowStrategy(const DeleteAllCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllCustomizeFlowStrategyWithOptions(request, runtime);
}

/**
 * @summary Delete Watermark Scene
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DeleteAntCloudAuthSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAntCloudAuthSceneResponse
 */
DeleteAntCloudAuthSceneResponse Client::deleteAntCloudAuthSceneWithOptions(const DeleteAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAntCloudAuthScene"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAntCloudAuthSceneResponse>();
}

/**
 * @summary Delete Watermark Scene
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DeleteAntCloudAuthSceneRequest
 * @return DeleteAntCloudAuthSceneResponse
 */
DeleteAntCloudAuthSceneResponse Client::deleteAntCloudAuthScene(const DeleteAntCloudAuthSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAntCloudAuthSceneWithOptions(request, runtime);
}

/**
 * @summary Delete Black and White List Policy
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DeleteBlackListStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBlackListStrategyResponse
 */
DeleteBlackListStrategyResponse Client::deleteBlackListStrategyWithOptions(const DeleteBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBlackListStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBlackListStrategyResponse>();
}

/**
 * @summary Delete Black and White List Policy
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DeleteBlackListStrategyRequest
 * @return DeleteBlackListStrategyResponse
 */
DeleteBlackListStrategyResponse Client::deleteBlackListStrategy(const DeleteBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Delete Cloud Scene
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DeleteCloudauthstSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudauthstSceneResponse
 */
DeleteCloudauthstSceneResponse Client::deleteCloudauthstSceneWithOptions(const DeleteCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudauthstScene"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudauthstSceneResponse>();
}

/**
 * @summary Delete Cloud Scene
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DeleteCloudauthstSceneRequest
 * @return DeleteCloudauthstSceneResponse
 */
DeleteCloudauthstSceneResponse Client::deleteCloudauthstScene(const DeleteCloudauthstSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudauthstSceneWithOptions(request, runtime);
}

/**
 * @summary Delete Security Control Strategy
 *
 * @description Request Method: Supports sending requests via HTTPS POST.
 * Request URL: cloudauth.aliyuncs.com.
 *
 * @param request DeleteControlStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlStrategyResponse
 */
DeleteControlStrategyResponse Client::deleteControlStrategyWithOptions(const DeleteControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteControlStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteControlStrategyResponse>();
}

/**
 * @summary Delete Security Control Strategy
 *
 * @description Request Method: Supports sending requests via HTTPS POST.
 * Request URL: cloudauth.aliyuncs.com.
 *
 * @param request DeleteControlStrategyRequest
 * @return DeleteControlStrategyResponse
 */
DeleteControlStrategyResponse Client::deleteControlStrategy(const DeleteControlStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteControlStrategyWithOptions(request, runtime);
}

/**
 * @summary Delete Customized Flow Control Strategy
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DeleteCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizeFlowStrategyResponse
 */
DeleteCustomizeFlowStrategyResponse Client::deleteCustomizeFlowStrategyWithOptions(const DeleteCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomizeFlowStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomizeFlowStrategyResponse>();
}

/**
 * @summary Delete Customized Flow Control Strategy
 *
 * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DeleteCustomizeFlowStrategyRequest
 * @return DeleteCustomizeFlowStrategyResponse
 */
DeleteCustomizeFlowStrategyResponse Client::deleteCustomizeFlowStrategy(const DeleteCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomizeFlowStrategyWithOptions(request, runtime);
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
 * @summary Delete Scene Configuration
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Request URL: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DeleteSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneConfigResponse
 */
DeleteSceneConfigResponse Client::deleteSceneConfigWithOptions(const DeleteSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSceneConfigId()) {
    body["sceneConfigId"] = request.sceneConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSceneConfig"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSceneConfigResponse>();
}

/**
 * @summary Delete Scene Configuration
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Request URL: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DeleteSceneConfigRequest
 * @return DeleteSceneConfigResponse
 */
DeleteSceneConfigResponse Client::deleteSceneConfig(const DeleteSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Delete Whitelist Configuration
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DeleteWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWhitelistSettingResponse
 */
DeleteWhitelistSettingResponse Client::deleteWhitelistSettingWithOptions(const DeleteWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWhitelistSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWhitelistSettingResponse>();
}

/**
 * @summary Delete Whitelist Configuration
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DeleteWhitelistSettingRequest
 * @return DeleteWhitelistSettingResponse
 */
DeleteWhitelistSettingResponse Client::deleteWhitelistSetting(const DeleteWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWhitelistSettingWithOptions(request, runtime);
}

/**
 * @summary Query the User Status of Ant Blockchain
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DescribeAntAndCloudAuthUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAntAndCloudAuthUserStatusResponse
 */
DescribeAntAndCloudAuthUserStatusResponse Client::describeAntAndCloudAuthUserStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAntAndCloudAuthUserStatus"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAntAndCloudAuthUserStatusResponse>();
}

/**
 * @summary Query the User Status of Ant Blockchain
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @return DescribeAntAndCloudAuthUserStatusResponse
 */
DescribeAntAndCloudAuthUserStatusResponse Client::describeAntAndCloudAuthUserStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAntAndCloudAuthUserStatusWithOptions(runtime);
}

/**
 * @summary 获取结果
 *
 * @param request DescribeAuthVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthVerifyResponse
 */
DescribeAuthVerifyResponse Client::describeAuthVerifyWithOptions(const DescribeAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.certifyId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeAuthVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthVerifyResponse>();
}

/**
 * @summary 获取结果
 *
 * @param request DescribeAuthVerifyRequest
 * @return DescribeAuthVerifyResponse
 */
DescribeAuthVerifyResponse Client::describeAuthVerify(const DescribeAuthVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthVerifyWithOptions(request, runtime);
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
 * @summary Query Dashboard Data
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DescribeCloudauthstSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudauthstSceneListResponse
 */
DescribeCloudauthstSceneListResponse Client::describeCloudauthstSceneListWithOptions(const DescribeCloudauthstSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudauthstSceneList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudauthstSceneListResponse>();
}

/**
 * @summary Query Dashboard Data
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
 *
 * @param request DescribeCloudauthstSceneListRequest
 * @return DescribeCloudauthstSceneListResponse
 */
DescribeCloudauthstSceneListResponse Client::describeCloudauthstSceneList(const DescribeCloudauthstSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudauthstSceneListWithOptions(request, runtime);
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
 * @summary 查询任务导出记录
 *
 * @param request DescribeInfoCheckExportRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInfoCheckExportRecordResponse
 */
DescribeInfoCheckExportRecordResponse Client::describeInfoCheckExportRecordWithOptions(const DescribeInfoCheckExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInfoCheckExportRecord"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInfoCheckExportRecordResponse>();
}

/**
 * @summary 查询任务导出记录
 *
 * @param request DescribeInfoCheckExportRecordRequest
 * @return DescribeInfoCheckExportRecordResponse
 */
DescribeInfoCheckExportRecordResponse Client::describeInfoCheckExportRecord(const DescribeInfoCheckExportRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInfoCheckExportRecordWithOptions(request, runtime);
}

/**
 * @summary Query the cloud scenario authentication records of a specific region
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DescribeListAntCloudAuthScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListAntCloudAuthScenesResponse
 */
DescribeListAntCloudAuthScenesResponse Client::describeListAntCloudAuthScenesWithOptions(const DescribeListAntCloudAuthScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListAntCloudAuthScenes"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListAntCloudAuthScenesResponse>();
}

/**
 * @summary Query the cloud scenario authentication records of a specific region
 *
 * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
 *
 * @param request DescribeListAntCloudAuthScenesRequest
 * @return DescribeListAntCloudAuthScenesResponse
 */
DescribeListAntCloudAuthScenesResponse Client::describeListAntCloudAuthScenes(const DescribeListAntCloudAuthScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListAntCloudAuthScenesWithOptions(request, runtime);
}

/**
 * @summary Query Face Verification Data
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListFaceVerifyDataResponse
 */
DescribeListFaceVerifyDataResponse Client::describeListFaceVerifyDataWithOptions(const DescribeListFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.gmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.gmtStart();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListFaceVerifyData"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListFaceVerifyDataResponse>();
}

/**
 * @summary Query Face Verification Data
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyDataRequest
 * @return DescribeListFaceVerifyDataResponse
 */
DescribeListFaceVerifyDataResponse Client::describeListFaceVerifyData(const DescribeListFaceVerifyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListFaceVerifyDataWithOptions(request, runtime);
}

/**
 * @summary Get Face Verification Information
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListFaceVerifyInfosResponse
 */
DescribeListFaceVerifyInfosResponse Client::describeListFaceVerifyInfosWithOptions(const DescribeListFaceVerifyInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.certifyId();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.gmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.gmtStart();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListFaceVerifyInfos"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListFaceVerifyInfosResponse>();
}

/**
 * @summary Get Face Verification Information
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyInfosRequest
 * @return DescribeListFaceVerifyInfosResponse
 */
DescribeListFaceVerifyInfosResponse Client::describeListFaceVerifyInfos(const DescribeListFaceVerifyInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListFaceVerifyInfosWithOptions(request, runtime);
}

/**
 * @summary 查询页面元数据
 *
 * @param request DescribeMetaSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaSearchPageListResponse
 */
DescribeMetaSearchPageListResponse Client::describeMetaSearchPageListWithOptions(const DescribeMetaSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.api();
  }

  if (!!request.hasBankCard()) {
    query["BankCard"] = request.bankCard();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.bizCode();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.identifyNum();
  }

  if (!!request.hasIspName()) {
    query["IspName"] = request.ispName();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasSubCode()) {
    query["SubCode"] = request.subCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.vehicleNum();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetaSearchPageList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetaSearchPageListResponse>();
}

/**
 * @summary 查询页面元数据
 *
 * @param request DescribeMetaSearchPageListRequest
 * @return DescribeMetaSearchPageListResponse
 */
DescribeMetaSearchPageListResponse Client::describeMetaSearchPageList(const DescribeMetaSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaSearchPageListWithOptions(request, runtime);
}

/**
 * @summary 查询认证统计信息
 *
 * @param request DescribeMetaStatisticsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaStatisticsListResponse
 */
DescribeMetaStatisticsListResponse Client::describeMetaStatisticsListWithOptions(const DescribeMetaStatisticsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.api();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetaStatisticsList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetaStatisticsListResponse>();
}

/**
 * @summary 查询认证统计信息
 *
 * @param request DescribeMetaStatisticsListRequest
 * @return DescribeMetaStatisticsListResponse
 */
DescribeMetaStatisticsListResponse Client::describeMetaStatisticsList(const DescribeMetaStatisticsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaStatisticsListWithOptions(request, runtime);
}

/**
 * @summary 查询认证统计页面
 *
 * @param request DescribeMetaStatisticsPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaStatisticsPageListResponse
 */
DescribeMetaStatisticsPageListResponse Client::describeMetaStatisticsPageListWithOptions(const DescribeMetaStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.api();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetaStatisticsPageList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetaStatisticsPageListResponse>();
}

/**
 * @summary 查询认证统计页面
 *
 * @param request DescribeMetaStatisticsPageListRequest
 * @return DescribeMetaStatisticsPageListResponse
 */
DescribeMetaStatisticsPageListResponse Client::describeMetaStatisticsPageList(const DescribeMetaStatisticsPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaStatisticsPageListWithOptions(request, runtime);
}

/**
 * @summary Query OSS status
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssStatusResponse
 */
DescribeOssStatusResponse Client::describeOssStatusWithOptions(const DescribeOssStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssStatus"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssStatusResponse>();
}

/**
 * @summary Query OSS status
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusRequest
 * @return DescribeOssStatusResponse
 */
DescribeOssStatusResponse Client::describeOssStatus(const DescribeOssStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssStatusWithOptions(request, runtime);
}

/**
 * @summary Get OSS Activation Status
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssStatusV2Response
 */
DescribeOssStatusV2Response Client::describeOssStatusV2WithOptions(const DescribeOssStatusV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssStatusV2"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssStatusV2Response>();
}

/**
 * @summary Get OSS Activation Status
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusV2Request
 * @return DescribeOssStatusV2Response
 */
DescribeOssStatusV2Response Client::describeOssStatusV2(const DescribeOssStatusV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssStatusV2WithOptions(request, runtime);
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
 * @summary Query Page Settings
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DescribePageSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePageSettingResponse
 */
DescribePageSettingResponse Client::describePageSettingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribePageSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePageSettingResponse>();
}

/**
 * @summary Query Page Settings
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @return DescribePageSettingResponse
 */
DescribePageSettingResponse Client::describePageSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageSettingWithOptions(runtime);
}

/**
 * @summary Get Product Code
 *
 * @description Request Method: Supports sending requests via HTTPS GET/POST methods.
 *
 * @param request DescribeProductCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductCodeResponse
 */
DescribeProductCodeResponse Client::describeProductCodeWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeProductCode"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductCodeResponse>();
}

/**
 * @summary Get Product Code
 *
 * @description Request Method: Supports sending requests via HTTPS GET/POST methods.
 *
 * @return DescribeProductCodeResponse
 */
DescribeProductCodeResponse Client::describeProductCode() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductCodeWithOptions(runtime);
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
 * @summary Get Verification Device Statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyDeviceRiskStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyDeviceRiskStatisticsResponse
 */
DescribeVerifyDeviceRiskStatisticsResponse Client::describeVerifyDeviceRiskStatisticsWithOptions(const DescribeVerifyDeviceRiskStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
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
    {"action" , "DescribeVerifyDeviceRiskStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyDeviceRiskStatisticsResponse>();
}

/**
 * @summary Get Verification Device Statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyDeviceRiskStatisticsRequest
 * @return DescribeVerifyDeviceRiskStatisticsResponse
 */
DescribeVerifyDeviceRiskStatisticsResponse Client::describeVerifyDeviceRiskStatistics(const DescribeVerifyDeviceRiskStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyDeviceRiskStatisticsWithOptions(request, runtime);
}

/**
 * @summary Overview of authentication request statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyFailStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyFailStatisticsResponse
 */
DescribeVerifyFailStatisticsResponse Client::describeVerifyFailStatisticsWithOptions(const DescribeVerifyFailStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgeGt()) {
    query["AgeGt"] = request.ageGt();
  }

  if (!!request.hasApi()) {
    query["Api"] = request.api();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.deviceType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
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
    {"action" , "DescribeVerifyFailStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyFailStatisticsResponse>();
}

/**
 * @summary Overview of authentication request statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyFailStatisticsRequest
 * @return DescribeVerifyFailStatisticsResponse
 */
DescribeVerifyFailStatisticsResponse Client::describeVerifyFailStatistics(const DescribeVerifyFailStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyFailStatisticsWithOptions(request, runtime);
}

/**
 * @summary Query Statistics on Device Face Comparison
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
 */
DescribeVerifyPersonasDeviceModelStatisticsResponse Client::describeVerifyPersonasDeviceModelStatisticsWithOptions(const DescribeVerifyPersonasDeviceModelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyPersonasDeviceModelStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyPersonasDeviceModelStatisticsResponse>();
}

/**
 * @summary Query Statistics on Device Face Comparison
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
 * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
 */
DescribeVerifyPersonasDeviceModelStatisticsResponse Client::describeVerifyPersonasDeviceModelStatistics(const DescribeVerifyPersonasDeviceModelStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasDeviceModelStatisticsWithOptions(request, runtime);
}

/**
 * @summary Query Authentication Personnel Statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasOsStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasOsStatisticsResponse
 */
DescribeVerifyPersonasOsStatisticsResponse Client::describeVerifyPersonasOsStatisticsWithOptions(const DescribeVerifyPersonasOsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyPersonasOsStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyPersonasOsStatisticsResponse>();
}

/**
 * @summary Query Authentication Personnel Statistics
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasOsStatisticsRequest
 * @return DescribeVerifyPersonasOsStatisticsResponse
 */
DescribeVerifyPersonasOsStatisticsResponse Client::describeVerifyPersonasOsStatistics(const DescribeVerifyPersonasOsStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasOsStatisticsWithOptions(request, runtime);
}

/**
 * @summary Obtain statistical information on the location of authenticated individuals
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasProvinceStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasProvinceStatisticsResponse
 */
DescribeVerifyPersonasProvinceStatisticsResponse Client::describeVerifyPersonasProvinceStatisticsWithOptions(const DescribeVerifyPersonasProvinceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyPersonasProvinceStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyPersonasProvinceStatisticsResponse>();
}

/**
 * @summary Obtain statistical information on the location of authenticated individuals
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasProvinceStatisticsRequest
 * @return DescribeVerifyPersonasProvinceStatisticsResponse
 */
DescribeVerifyPersonasProvinceStatisticsResponse Client::describeVerifyPersonasProvinceStatistics(const DescribeVerifyPersonasProvinceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasProvinceStatisticsWithOptions(request, runtime);
}

/**
 * @summary Query gender statistics of authentication
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasSexStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasSexStatisticsResponse
 */
DescribeVerifyPersonasSexStatisticsResponse Client::describeVerifyPersonasSexStatisticsWithOptions(const DescribeVerifyPersonasSexStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyPersonasSexStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyPersonasSexStatisticsResponse>();
}

/**
 * @summary Query gender statistics of authentication
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasSexStatisticsRequest
 * @return DescribeVerifyPersonasSexStatisticsResponse
 */
DescribeVerifyPersonasSexStatisticsResponse Client::describeVerifyPersonasSexStatistics(const DescribeVerifyPersonasSexStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasSexStatisticsWithOptions(request, runtime);
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
 * @summary Query the list of authentication schemes
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifySearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifySearchPageListResponse
 */
DescribeVerifySearchPageListResponse Client::describeVerifySearchPageListWithOptions(const DescribeVerifySearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasHasDeviceRisk()) {
    query["HasDeviceRisk"] = request.hasDeviceRisk();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.outerOrderNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPassed()) {
    query["Passed"] = request.passed();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRoot()) {
    query["Root"] = request.root();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSimulator()) {
    query["Simulator"] = request.simulator();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasSubCode()) {
    query["SubCode"] = request.subCode();
  }

  if (!!request.hasSubCodes()) {
    query["SubCodes"] = request.subCodes();
  }

  if (!!request.hasVirtualVideo()) {
    query["VirtualVideo"] = request.virtualVideo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifySearchPageList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifySearchPageListResponse>();
}

/**
 * @summary Query the list of authentication schemes
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 *
 * @param request DescribeVerifySearchPageListRequest
 * @return DescribeVerifySearchPageListResponse
 */
DescribeVerifySearchPageListResponse Client::describeVerifySearchPageList(const DescribeVerifySearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifySearchPageListWithOptions(request, runtime);
}

/**
 * @summary Query Authentication Statistics
 *
 * @description - Request Method: Supports sending requests using HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeVerifyStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyStatisticsResponse
 */
DescribeVerifyStatisticsResponse Client::describeVerifyStatisticsWithOptions(const DescribeVerifyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgeGt()) {
    query["AgeGt"] = request.ageGt();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
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
    {"action" , "DescribeVerifyStatistics"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyStatisticsResponse>();
}

/**
 * @summary Query Authentication Statistics
 *
 * @description - Request Method: Supports sending requests using HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeVerifyStatisticsRequest
 * @return DescribeVerifyStatisticsResponse
 */
DescribeVerifyStatisticsResponse Client::describeVerifyStatistics(const DescribeVerifyStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyStatisticsWithOptions(request, runtime);
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
 * @summary Get Whitelist Collection Get Whitelist Collection
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DescribeWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhitelistSettingResponse
 */
DescribeWhitelistSettingResponse Client::describeWhitelistSettingWithOptions(const DescribeWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
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
    {"action" , "DescribeWhitelistSetting"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWhitelistSettingResponse>();
}

/**
 * @summary Get Whitelist Collection Get Whitelist Collection
 *
 * @description Request Method: Only supports sending requests via HTTPS POST method.
 *
 * @param request DescribeWhitelistSettingRequest
 * @return DescribeWhitelistSettingResponse
 */
DescribeWhitelistSettingResponse Client::describeWhitelistSetting(const DescribeWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhitelistSettingWithOptions(request, runtime);
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
 * @summary Real-person Authentication Record Download
 *
 * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
 * - Method: HTTPS POST
 * - Service Address: cloudauth.aliyuncs.com
 * > Real-person authentication products use CertifyId to count call volumes. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request DownloadVerifyRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadVerifyRecordsResponse
 */
DownloadVerifyRecordsResponse Client::downloadVerifyRecordsWithOptions(const DownloadVerifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizParam()) {
    query["BizParam"] = request.bizParam();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadVerifyRecords"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadVerifyRecordsResponse>();
}

/**
 * @summary Real-person Authentication Record Download
 *
 * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
 * - Method: HTTPS POST
 * - Service Address: cloudauth.aliyuncs.com
 * > Real-person authentication products use CertifyId to count call volumes. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request DownloadVerifyRecordsRequest
 * @return DownloadVerifyRecordsResponse
 */
DownloadVerifyRecordsResponse Client::downloadVerifyRecords(const DownloadVerifyRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadVerifyRecordsWithOptions(request, runtime);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    id3MetaVerifyReq.setFaceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id3MetaVerifyResponse id3MetaVerifyResp = id3MetaVerifyWithOptions(id3MetaVerifyReq, runtime);
  return id3MetaVerifyResp;
}

/**
 * @summary Identity Three Elements Image Verification
 *
 * @description Upload both sides of the ID card to get the verification result of the three identity elements from an authoritative data source.
 *
 * @param request Id3MetaVerifyWithOCRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id3MetaVerifyWithOCRResponse
 */
Id3MetaVerifyWithOCRResponse Client::id3MetaVerifyWithOCRWithOptions(const Id3MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "Id3MetaVerifyWithOCR"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Id3MetaVerifyWithOCRResponse>();
}

/**
 * @summary Identity Three Elements Image Verification
 *
 * @description Upload both sides of the ID card to get the verification result of the three identity elements from an authoritative data source.
 *
 * @param request Id3MetaVerifyWithOCRRequest
 * @return Id3MetaVerifyWithOCRResponse
 */
Id3MetaVerifyWithOCRResponse Client::id3MetaVerifyWithOCR(const Id3MetaVerifyWithOCRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id3MetaVerifyWithOCRWithOptions(request, runtime);
}

Id3MetaVerifyWithOCRResponse Client::id3MetaVerifyWithOCRAdvance(const Id3MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
  Id3MetaVerifyWithOCRRequest id3MetaVerifyWithOCRReq = Id3MetaVerifyWithOCRRequest();
  Utils::Utils::convert(request, id3MetaVerifyWithOCRReq);
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    id3MetaVerifyWithOCRReq.setCertFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    id3MetaVerifyWithOCRReq.setCertNationalFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRResp = id3MetaVerifyWithOCRWithOptions(id3MetaVerifyWithOCRReq, runtime);
  return id3MetaVerifyWithOCRResp;
}

/**
 * @summary 服务端初始化
 *
 * @param request InitAuthVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitAuthVerifyResponse
 */
InitAuthVerifyResponse Client::initAuthVerifyWithOptions(const InitAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallbackToken()) {
    body["CallbackToken"] = request.callbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasCardPageNumber()) {
    body["CardPageNumber"] = request.cardPageNumber();
  }

  if (!!request.hasCardType()) {
    body["CardType"] = request.cardType();
  }

  if (!!request.hasDocScanMode()) {
    body["DocScanMode"] = request.docScanMode();
  }

  if (!!request.hasIdSpoof()) {
    body["IdSpoof"] = request.idSpoof();
  }

  if (!!request.hasMetaInfo()) {
    body["MetaInfo"] = request.metaInfo();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InitAuthVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitAuthVerifyResponse>();
}

/**
 * @summary 服务端初始化
 *
 * @param request InitAuthVerifyRequest
 * @return InitAuthVerifyResponse
 */
InitAuthVerifyResponse Client::initAuthVerify(const InitAuthVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initAuthVerifyWithOptions(request, runtime);
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

  if (!!request.hasH5DegradeConfirmBtn()) {
    query["H5DegradeConfirmBtn"] = request.h5DegradeConfirmBtn();
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
 * @summary Modify Black and White List Policy
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - Interface Description: Add or modify blacklist rule.
 *
 * @param tmpReq ModifyBlackListStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBlackListStrategyResponse
 */
ModifyBlackListStrategyResponse Client::modifyBlackListStrategyWithOptions(const ModifyBlackListStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBlackListStrategyShrinkRequest request = ModifyBlackListStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBlackListStrategy()) {
    request.setBlackListStrategyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.blackListStrategy(), "BlackListStrategy", "json"));
  }

  json query = {};
  if (!!request.hasBlackListStrategyShrink()) {
    query["BlackListStrategy"] = request.blackListStrategyShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBlackListStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBlackListStrategyResponse>();
}

/**
 * @summary Modify Black and White List Policy
 *
 * @description - Service Address: cloudauth.aliyuncs.com.
 * - Request Method: HTTPS POST and GET.
 * - Interface Description: Add or modify blacklist rule.
 *
 * @param request ModifyBlackListStrategyRequest
 * @return ModifyBlackListStrategyResponse
 */
ModifyBlackListStrategyResponse Client::modifyBlackListStrategy(const ModifyBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Modify Security Control Strategy
 *
 * @description - Request Method: Supports sending requests via HTTPS POST method.
 * - Request Address: cloudauth.aliyuncs.com.
 *
 * @param tmpReq ModifyControlStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlStrategyResponse
 */
ModifyControlStrategyResponse Client::modifyControlStrategyWithOptions(const ModifyControlStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyControlStrategyShrinkRequest request = ModifyControlStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasControlStrategyList()) {
    request.setControlStrategyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.controlStrategyList(), "ControlStrategyList", "json"));
  }

  json query = {};
  if (!!request.hasControlStrategyListShrink()) {
    query["ControlStrategyList"] = request.controlStrategyListShrink();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyControlStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyControlStrategyResponse>();
}

/**
 * @summary Modify Security Control Strategy
 *
 * @description - Request Method: Supports sending requests via HTTPS POST method.
 * - Request Address: cloudauth.aliyuncs.com.
 *
 * @param request ModifyControlStrategyRequest
 * @return ModifyControlStrategyResponse
 */
ModifyControlStrategyResponse Client::modifyControlStrategy(const ModifyControlStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlStrategyWithOptions(request, runtime);
}

/**
 * @summary Information Verification Security Management
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param tmpReq ModifyCustomizeFlowStrategyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomizeFlowStrategyListResponse
 */
ModifyCustomizeFlowStrategyListResponse Client::modifyCustomizeFlowStrategyListWithOptions(const ModifyCustomizeFlowStrategyListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCustomizeFlowStrategyListShrinkRequest request = ModifyCustomizeFlowStrategyListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStrategyObject()) {
    request.setStrategyObjectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.strategyObject(), "StrategyObject", "json"));
  }

  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasStrategyObjectShrink()) {
    query["StrategyObject"] = request.strategyObjectShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomizeFlowStrategyList"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomizeFlowStrategyListResponse>();
}

/**
 * @summary Information Verification Security Management
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Service Address: cloudauth.aliyuncs.com.
 *
 * @param request ModifyCustomizeFlowStrategyListRequest
 * @return ModifyCustomizeFlowStrategyListResponse
 */
ModifyCustomizeFlowStrategyListResponse Client::modifyCustomizeFlowStrategyList(const ModifyCustomizeFlowStrategyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomizeFlowStrategyListWithOptions(request, runtime);
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
 * @summary Query Blacklist and Whitelist Policies
 *
 * @description - Request URL: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * > Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
 * Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
 *
 * @param request QueryBlackListStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBlackListStrategyResponse
 */
QueryBlackListStrategyResponse Client::queryBlackListStrategyWithOptions(const QueryBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBlackListStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBlackListStrategyResponse>();
}

/**
 * @summary Query Blacklist and Whitelist Policies
 *
 * @description - Request URL: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * > Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
 * Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
 *
 * @param request QueryBlackListStrategyRequest
 * @return QueryBlackListStrategyResponse
 */
QueryBlackListStrategyResponse Client::queryBlackListStrategy(const QueryBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Query Security Control Strategy
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Request Address: cloudauth.aliyuncs.com.
 *
 * @param request QueryControlStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryControlStrategyResponse
 */
QueryControlStrategyResponse Client::queryControlStrategyWithOptions(const QueryControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryControlStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryControlStrategyResponse>();
}

/**
 * @summary Query Security Control Strategy
 *
 * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
 * - Request Address: cloudauth.aliyuncs.com.
 *
 * @param request QueryControlStrategyRequest
 * @return QueryControlStrategyResponse
 */
QueryControlStrategyResponse Client::queryControlStrategy(const QueryControlStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryControlStrategyWithOptions(request, runtime);
}

/**
 * @summary Query Custom Flow Control Strategy
 *
 * @description - Service Address: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * - Security Rules: These are rules to ensure system security, such as monitoring for API abuse, account theft, etc. When a threshold is triggered, the system supports alerting.
 *
 * @param request QueryCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomizeFlowStrategyResponse
 */
QueryCustomizeFlowStrategyResponse Client::queryCustomizeFlowStrategyWithOptions(const QueryCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomizeFlowStrategy"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomizeFlowStrategyResponse>();
}

/**
 * @summary Query Custom Flow Control Strategy
 *
 * @description - Service Address: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * - Security Rules: These are rules to ensure system security, such as monitoring for API abuse, account theft, etc. When a threshold is triggered, the system supports alerting.
 *
 * @param request QueryCustomizeFlowStrategyRequest
 * @return QueryCustomizeFlowStrategyResponse
 */
QueryCustomizeFlowStrategyResponse Client::queryCustomizeFlowStrategy(const QueryCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomizeFlowStrategyWithOptions(request, runtime);
}

/**
 * @summary Query Scene Configuration
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request QuerySceneConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySceneConfigsResponse
 */
QuerySceneConfigsResponse Client::querySceneConfigsWithOptions(const QuerySceneConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySceneConfigs"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySceneConfigsResponse>();
}

/**
 * @summary Query Scene Configuration
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request QuerySceneConfigsRequest
 * @return QuerySceneConfigsResponse
 */
QuerySceneConfigsResponse Client::querySceneConfigs(const QuerySceneConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySceneConfigsWithOptions(request, runtime);
}

/**
 * @summary Query Real-Person Download Task
 *
 * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
 * - Method: HTTPS POST
 * - Service Address: cloudauth.aliyuncs.com
 * > The real-person authentication product uses CertifyId to count the number of calls. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request QueryVerifyDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVerifyDownloadTaskResponse
 */
QueryVerifyDownloadTaskResponse Client::queryVerifyDownloadTaskWithOptions(const QueryVerifyDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVerifyDownloadTask"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVerifyDownloadTaskResponse>();
}

/**
 * @summary Query Real-Person Download Task
 *
 * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
 * - Method: HTTPS POST
 * - Service Address: cloudauth.aliyuncs.com
 * > The real-person authentication product uses CertifyId to count the number of calls. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request QueryVerifyDownloadTaskRequest
 * @return QueryVerifyDownloadTaskResponse
 */
QueryVerifyDownloadTaskResponse Client::queryVerifyDownloadTask(const QueryVerifyDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Query Flow Package
 *
 * @description - Service address: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
 *
 * @param request QueryVerifyFlowPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVerifyFlowPackageResponse
 */
QueryVerifyFlowPackageResponse Client::queryVerifyFlowPackageWithOptions(const QueryVerifyFlowPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVerifyFlowPackage"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVerifyFlowPackageResponse>();
}

/**
 * @summary Query Flow Package
 *
 * @description - Service address: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
 *
 * @param request QueryVerifyFlowPackageRequest
 * @return QueryVerifyFlowPackageResponse
 */
QueryVerifyFlowPackageResponse Client::queryVerifyFlowPackage(const QueryVerifyFlowPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyFlowPackageWithOptions(request, runtime);
}

/**
 * @summary Call Volume Statistics
 *
 * @description - Request URL: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * > Real-person authentication products use CertifyId to count call volume. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request QueryVerifyInvokeSatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVerifyInvokeSatisticResponse
 */
QueryVerifyInvokeSatisticResponse Client::queryVerifyInvokeSatisticWithOptions(const QueryVerifyInvokeSatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasProductProgramList()) {
    query["ProductProgramList"] = request.productProgramList();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSceneIdList()) {
    query["SceneIdList"] = request.sceneIdList();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStatisticsType()) {
    query["StatisticsType"] = request.statisticsType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVerifyInvokeSatistic"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVerifyInvokeSatisticResponse>();
}

/**
 * @summary Call Volume Statistics
 *
 * @description - Request URL: cloudauth.aliyuncs.com
 * - Request Method: HTTPS POST and GET.
 * > Real-person authentication products use CertifyId to count call volume. For ease of reconciliation, please retain the CertifyId field in your system.
 *
 * @param request QueryVerifyInvokeSatisticRequest
 * @return QueryVerifyInvokeSatisticResponse
 */
QueryVerifyInvokeSatisticResponse Client::queryVerifyInvokeSatistic(const QueryVerifyInvokeSatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyInvokeSatisticWithOptions(request, runtime);
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
 * @summary Update Ant Blockchain Transaction Scenario
 *
 * @description Update the information of a financial-level authentication scenario based on the scenario ID.
 * - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST.
 *
 * @param request UpdateAntCloudAuthSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAntCloudAuthSceneResponse
 */
UpdateAntCloudAuthSceneResponse Client::updateAntCloudAuthSceneWithOptions(const UpdateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindMiniProgram()) {
    query["BindMiniProgram"] = request.bindMiniProgram();
  }

  if (!!request.hasCheckFileBody()) {
    query["CheckFileBody"] = request.checkFileBody();
  }

  if (!!request.hasCheckFileName()) {
    query["CheckFileName"] = request.checkFileName();
  }

  if (!!request.hasMiniProgramName()) {
    query["MiniProgramName"] = request.miniProgramName();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasReturnPicCount()) {
    query["ReturnPicCount"] = request.returnPicCount();
  }

  if (!!request.hasReturnVideoLength()) {
    query["ReturnVideoLength"] = request.returnVideoLength();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.storeImage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAntCloudAuthScene"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAntCloudAuthSceneResponse>();
}

/**
 * @summary Update Ant Blockchain Transaction Scenario
 *
 * @description Update the information of a financial-level authentication scenario based on the scenario ID.
 * - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST.
 *
 * @param request UpdateAntCloudAuthSceneRequest
 * @return UpdateAntCloudAuthSceneResponse
 */
UpdateAntCloudAuthSceneResponse Client::updateAntCloudAuthScene(const UpdateAntCloudAuthSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAntCloudAuthSceneWithOptions(request, runtime);
}

/**
 * @summary Update Scene Configuration
 *
 * @description - Request Method: Supports sending requests via HTTPS POST.
 * - Request URL: cloudauth.aliyuncs.com.
 *
 * @param request UpdateSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSceneConfigResponse
 */
UpdateSceneConfigResponse Client::updateSceneConfigWithOptions(const UpdateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasId()) {
    body["id"] = request.id();
  }

  if (!!request.hasSceneId()) {
    body["sceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSceneConfig"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSceneConfigResponse>();
}

/**
 * @summary Update Scene Configuration
 *
 * @description - Request Method: Supports sending requests via HTTPS POST.
 * - Request URL: cloudauth.aliyuncs.com.
 *
 * @param request UpdateSceneConfigRequest
 * @return UpdateSceneConfigResponse
 */
UpdateSceneConfigResponse Client::updateSceneConfig(const UpdateSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSceneConfigWithOptions(request, runtime);
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