#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20190307.hpp>
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
using namespace AlibabaCloud::Cloudauth20190307::Models;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{

AlibabaCloud::Cloudauth20190307::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "cloudauth.aliyuncs.com"},
    {"us-east-1" , "cloudauth.aliyuncs.com"},
    {"me-east-1" , "cloudauth.aliyuncs.com"},
    {"eu-west-1" , "cloudauth.aliyuncs.com"},
    {"eu-central-1" , "cloudauth.aliyuncs.com"},
    {"cn-zhangjiakou" , "cloudauth.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "cloudauth.aliyuncs.com"},
    {"cn-shenzhen" , "cloudauth.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "cloudauth.aliyuncs.com"},
    {"cn-shanghai" , "cloudauth.aliyuncs.com"},
    {"cn-qingdao" , "cloudauth.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "cloudauth.aliyuncs.com"},
    {"cn-huhehaote" , "cloudauth.aliyuncs.com"},
    {"cn-hongkong" , "cloudauth.aliyuncs.com"},
    {"cn-hangzhou-finance" , "cloudauth.aliyuncs.com"},
    {"cn-hangzhou" , "cloudauth.aliyuncs.com"},
    {"cn-chengdu" , "cloudauth.aliyuncs.com"},
    {"cn-beijing" , "cloudauth.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "cloudauth.aliyuncs.com"},
    {"ap-southeast-3" , "cloudauth.aliyuncs.com"},
    {"ap-southeast-2" , "cloudauth.aliyuncs.com"},
    {"ap-southeast-1" , "cloudauth.aliyuncs.com"},
    {"ap-south-1" , "cloudauth.aliyuncs.com"},
    {"ap-northeast-1" , "cloudauth.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudauth", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Detects whether an image is generated by AIGC and returns the detection result.
 *
 * @param request AIGCFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AIGCFaceVerifyResponse
 */
AIGCFaceVerifyResponse Client::aIGCFaceVerifyWithOptions(const AIGCFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaceContrastPictureUrl()) {
    query["FaceContrastPictureUrl"] = request.getFaceContrastPictureUrl();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssObjectName()) {
    query["OssObjectName"] = request.getOssObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  json body = {};
  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.getFaceContrastPicture();
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
 * @summary Detects whether an image is generated by AIGC and returns the detection result.
 *
 * @param request AIGCFaceVerifyRequest
 * @return AIGCFaceVerifyResponse
 */
AIGCFaceVerifyResponse Client::aIGCFaceVerify(const AIGCFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return aIGCFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Provides API operations for bank card element verification, including two-element, three-element, and four-element verification.
 *
 * @description Verifies bank card information consistency, including two-element verification (name + bank card number), three-element verification (name + ID card number + bank card number), and four-element verification (name + ID card number + phone number + bank card number).
 * - Service endpoint:
 *   - Singapore region: cloudauth.ap-southeast-1.aliyuncs.com (IPv4) or cloudauth-dualstack.ap-southeast-1.aliyuncs.com (IPv6).
 *   - Malaysia region: cloudauth.ap-southeast-3.aliyuncs.com (IPv4) or cloudauth-dualstack.ap-southeast-3.aliyuncs.com (IPv6).
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
 * @summary Provides API operations for bank card element verification, including two-element, three-element, and four-element verification.
 *
 * @description Verifies bank card information consistency, including two-element verification (name + bank card number), three-element verification (name + ID card number + bank card number), and four-element verification (name + ID card number + phone number + bank card number).
 * - Service endpoint:
 *   - Singapore region: cloudauth.ap-southeast-1.aliyuncs.com (IPv4) or cloudauth-dualstack.ap-southeast-1.aliyuncs.com (IPv6).
 *   - Malaysia region: cloudauth.ap-southeast-3.aliyuncs.com (IPv4) or cloudauth-dualstack.ap-southeast-3.aliyuncs.com (IPv6).
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
 * @summary Provides a financial-grade server-side API for face comparison.
 *
 * @description - API operation: CompareFaceVerify.
 * - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: Implements ID Verification through server-side integration.
 * #### Photo format requirements
 * When performing face comparison, submit two face photos that meet all of the following conditions:
 * - Recent photos or recent reference photos with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - Clear photos with normal exposure. The face must not be too dark, too bright, or have lens flare, and the angle must not deviate significantly.
 * - Resolution must not exceed 1920×1080 and must be at least 640×480. The short side is recommended to be scaled to 720 pixels with a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
 *
 * @param request CompareFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareFaceVerifyResponse
 */
CompareFaceVerifyResponse Client::compareFaceVerifyWithOptions(const CompareFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSourceCertifyId()) {
    body["SourceCertifyId"] = request.getSourceCertifyId();
  }

  if (!!request.hasSourceFaceContrastPicture()) {
    body["SourceFaceContrastPicture"] = request.getSourceFaceContrastPicture();
  }

  if (!!request.hasSourceFaceContrastPictureUrl()) {
    body["SourceFaceContrastPictureUrl"] = request.getSourceFaceContrastPictureUrl();
  }

  if (!!request.hasSourceOssBucketName()) {
    body["SourceOssBucketName"] = request.getSourceOssBucketName();
  }

  if (!!request.hasSourceOssObjectName()) {
    body["SourceOssObjectName"] = request.getSourceOssObjectName();
  }

  if (!!request.hasTargetCertifyId()) {
    body["TargetCertifyId"] = request.getTargetCertifyId();
  }

  if (!!request.hasTargetFaceContrastPicture()) {
    body["TargetFaceContrastPicture"] = request.getTargetFaceContrastPicture();
  }

  if (!!request.hasTargetFaceContrastPictureUrl()) {
    body["TargetFaceContrastPictureUrl"] = request.getTargetFaceContrastPictureUrl();
  }

  if (!!request.hasTargetOssBucketName()) {
    body["TargetOssBucketName"] = request.getTargetOssBucketName();
  }

  if (!!request.hasTargetOssObjectName()) {
    body["TargetOssObjectName"] = request.getTargetOssObjectName();
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
 * @summary Provides a financial-grade server-side API for face comparison.
 *
 * @description - API operation: CompareFaceVerify.
 * - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: Implements ID Verification through server-side integration.
 * #### Photo format requirements
 * When performing face comparison, submit two face photos that meet all of the following conditions:
 * - Recent photos or recent reference photos with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - Clear photos with normal exposure. The face must not be too dark, too bright, or have lens flare, and the angle must not deviate significantly.
 * - Resolution must not exceed 1920×1080 and must be at least 640×480. The short side is recommended to be scaled to 720 pixels with a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
 *
 * @param request CompareFaceVerifyRequest
 * @return CompareFaceVerifyResponse
 */
CompareFaceVerifyResponse Client::compareFaceVerify(const CompareFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Performs face comparison.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 * Operation description: Specifies two face images for comparison and returns a similarity score between the faces in the two images.
 * - At least one of the specified comparison images must be of the face photo type (FacePic).
 * - If an image contains multiple faces, the algorithm automatically selects the face that occupies the largest area in the image.
 * - If no face is detected in one of the two comparison images, the system returns a "No face detected" error.
 * When you submit images, you must provide the corresponding HTTP URL or Base64 encoding of each image.
 * - HTTP URL: A publicly accessible HTTP URL. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 encoding: A Base64-encoded image in the format `base64://<Base64-encoded image string>`.
 * Image limits.
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep the size of each image within 2 MB to avoid algorithm retrieval timeout.
 * - The body of a single request has a size limit of 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
 * - When you use Base64 to transmit images, set the request method to POST. Remove the header description from the Base64 character string, such as `data:image/png;base64,`.
 *
 * @param request CompareFacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareFacesResponse
 */
CompareFacesResponse Client::compareFacesWithOptions(const CompareFacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceImageType()) {
    body["SourceImageType"] = request.getSourceImageType();
  }

  if (!!request.hasSourceImageValue()) {
    body["SourceImageValue"] = request.getSourceImageValue();
  }

  if (!!request.hasTargetImageType()) {
    body["TargetImageType"] = request.getTargetImageType();
  }

  if (!!request.hasTargetImageValue()) {
    body["TargetImageValue"] = request.getTargetImageValue();
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
 * @summary Performs face comparison.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 * Operation description: Specifies two face images for comparison and returns a similarity score between the faces in the two images.
 * - At least one of the specified comparison images must be of the face photo type (FacePic).
 * - If an image contains multiple faces, the algorithm automatically selects the face that occupies the largest area in the image.
 * - If no face is detected in one of the two comparison images, the system returns a "No face detected" error.
 * When you submit images, you must provide the corresponding HTTP URL or Base64 encoding of each image.
 * - HTTP URL: A publicly accessible HTTP URL. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 encoding: A Base64-encoded image in the format `base64://<Base64-encoded image string>`.
 * Image limits.
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep the size of each image within 2 MB to avoid algorithm retrieval timeout.
 * - The body of a single request has a size limit of 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
 * - When you use Base64 to transmit images, set the request method to POST. Remove the header description from the Base64 character string, such as `data:image/png;base64,`.
 *
 * @param request CompareFacesRequest
 * @return CompareFacesResponse
 */
CompareFacesResponse Client::compareFaces(const CompareFacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareFacesWithOptions(request, runtime);
}

/**
 * @summary Submits verification materials for identity comparison and synchronously returns the verification result.
 *
 * @description - API operation: ContrastFaceVerify.
 * - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: An API operation that implements ID Verification through server-side integration.
 * #### Image format requirements
 * When performing ID Verification, submit images that meet all of the following conditions:
 * - A recent photo with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - A clear photo with normal exposure. The face must not be too dark, too bright, or have glare, and the angle must not deviate significantly.
 * - The resolution must not exceed 1920 × 1080 and must be at least 640 × 480. We recommend scaling the short side to 720 pixels with a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
 *
 * @param request ContrastFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContrastFaceVerifyResponse
 */
ContrastFaceVerifyResponse Client::contrastFaceVerifyWithOptions(const ContrastFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  json body = {};
  if (!!request.hasCertName()) {
    body["CertName"] = request.getCertName();
  }

  if (!!request.hasCertNo()) {
    body["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertType()) {
    body["CertType"] = request.getCertType();
  }

  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasDeviceToken()) {
    body["DeviceToken"] = request.getDeviceToken();
  }

  if (!!request.hasEncryptType()) {
    body["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasFaceContrastFile()) {
    body["FaceContrastFile"] = request.getFaceContrastFile();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.getFaceContrastPicture();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    body["FaceContrastPictureUrl"] = request.getFaceContrastPictureUrl();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.getIp();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasOssBucketName()) {
    body["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssObjectName()) {
    body["OssObjectName"] = request.getOssObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
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
 * @summary Submits verification materials for identity comparison and synchronously returns the verification result.
 *
 * @description - API operation: ContrastFaceVerify.
 * - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: An API operation that implements ID Verification through server-side integration.
 * #### Image format requirements
 * When performing ID Verification, submit images that meet all of the following conditions:
 * - A recent photo with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - A clear photo with normal exposure. The face must not be too dark, too bright, or have glare, and the angle must not deviate significantly.
 * - The resolution must not exceed 1920 × 1080 and must be at least 640 × 480. We recommend scaling the short side to 720 pixels with a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
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
      {"content" , request.getFaceContrastFileObject()},
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
    contrastFaceVerifyReq.setFaceContrastFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ContrastFaceVerifyResponse contrastFaceVerifyResp = contrastFaceVerifyWithOptions(contrastFaceVerifyReq, runtime);
  return contrastFaceVerifyResp;
}

/**
 * @summary Creates a network access credential.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateAntCloudAuthSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAntCloudAuthSceneResponse
 */
CreateAntCloudAuthSceneResponse Client::createAntCloudAuthSceneWithOptions(const CreateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindMiniProgram()) {
    query["BindMiniProgram"] = request.getBindMiniProgram();
  }

  if (!!request.hasCheckFileBody()) {
    query["CheckFileBody"] = request.getCheckFileBody();
  }

  if (!!request.hasCheckFileName()) {
    query["CheckFileName"] = request.getCheckFileName();
  }

  if (!!request.hasDeviceRiskPlus()) {
    query["DeviceRiskPlus"] = request.getDeviceRiskPlus();
  }

  if (!!request.hasMiniProgramName()) {
    query["MiniProgramName"] = request.getMiniProgramName();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasReturnPicCount()) {
    query["ReturnPicCount"] = request.getReturnPicCount();
  }

  if (!!request.hasReturnVideoLength()) {
    query["ReturnVideoLength"] = request.getReturnVideoLength();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.getSceneName();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.getStoreImage();
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
 * @summary Creates a network access credential.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateAntCloudAuthSceneRequest
 * @return CreateAntCloudAuthSceneResponse
 */
CreateAntCloudAuthSceneResponse Client::createAntCloudAuthScene(const CreateAntCloudAuthSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAntCloudAuthSceneWithOptions(request, runtime);
}

/**
 * @summary Obtains an authorization key for activating the offline facial recognition SDK.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateAuthKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuthKeyResponse
 */
CreateAuthKeyResponse Client::createAuthKeyWithOptions(const CreateAuthKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthYears()) {
    query["AuthYears"] = request.getAuthYears();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasTest()) {
    query["Test"] = request.getTest();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.getUserDeviceId();
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
 * @summary Obtains an authorization key for activating the offline facial recognition SDK.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateAuthKeyRequest
 * @return CreateAuthKeyResponse
 */
CreateAuthKeyResponse Client::createAuthKey(const CreateAuthKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuthKeyWithOptions(request, runtime);
}

/**
 * @summary Creates an authentication scenario for enhanced ID Verification.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
 *
 * @param request CreateCloudauthstSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudauthstSceneResponse
 */
CreateCloudauthstSceneResponse Client::createCloudauthstSceneWithOptions(const CreateCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.getSceneName();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.getStoreImage();
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
 * @summary Creates an authentication scenario for enhanced ID Verification.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
 *
 * @param request CreateCloudauthstSceneRequest
 * @return CreateCloudauthstSceneResponse
 */
CreateCloudauthstSceneResponse Client::createCloudauthstScene(const CreateCloudauthstSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudauthstSceneWithOptions(request, runtime);
}

/**
 * @summary Creates a willingness authentication configuration.
 *
 * @description Request method: Send requests by using the HTTPS POST method.
 * Request URL: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneConfigResponse
 */
CreateSceneConfigResponse Client::createSceneConfigWithOptions(const CreateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasSceneId()) {
    body["sceneId"] = request.getSceneId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
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
 * @summary Creates a willingness authentication configuration.
 *
 * @description Request method: Send requests by using the HTTPS POST method.
 * Request URL: cloudauth.aliyuncs.com.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request CreateSceneConfigRequest
 * @return CreateSceneConfigResponse
 */
CreateSceneConfigResponse Client::createSceneConfig(const CreateSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Creates an ID Verification scenario configuration. This is equivalent to creating a verification scenario in the console.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request CreateVerifySettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVerifySettingResponse
 */
CreateVerifySettingResponse Client::createVerifySettingWithOptions(const CreateVerifySettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizName()) {
    query["BizName"] = request.getBizName();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasGuideStep()) {
    query["GuideStep"] = request.getGuideStep();
  }

  if (!!request.hasPrivacyStep()) {
    query["PrivacyStep"] = request.getPrivacyStep();
  }

  if (!!request.hasResultStep()) {
    query["ResultStep"] = request.getResultStep();
  }

  if (!!request.hasSolution()) {
    query["Solution"] = request.getSolution();
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
 * @summary Creates an ID Verification scenario configuration. This is equivalent to creating a verification scenario in the console.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request CreateVerifySettingRequest
 * @return CreateVerifySettingResponse
 */
CreateVerifySettingResponse Client::createVerifySetting(const CreateVerifySettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVerifySettingWithOptions(request, runtime);
}

/**
 * @summary Creates an authentication whitelist.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request CreateWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWhitelistSettingResponse
 */
CreateWhitelistSettingResponse Client::createWhitelistSettingWithOptions(const CreateWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasValidDay()) {
    query["ValidDay"] = request.getValidDay();
  }

  if (!!request.hasWhitelistType()) {
    query["WhitelistType"] = request.getWhitelistType();
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
 * @summary Creates an authentication whitelist.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request CreateWhitelistSettingRequest
 * @return CreateWhitelistSettingResponse
 */
CreateWhitelistSettingResponse Client::createWhitelistSetting(const CreateWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWhitelistSettingWithOptions(request, runtime);
}

/**
 * @summary API operation for the product image tampering detection service. Detects image tampering, quality (clarity), and similar images.
 *
 * @description Submits an e-commerce product image to perform tampering detection, quality (clarity) assessment, and similar image detection. Returns risk labels and risk scores.
 *
 * @param request CredentialProductVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CredentialProductVerifyV2Response
 */
CredentialProductVerifyV2Response Client::credentialProductVerifyV2WithOptions(const CredentialProductVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.getMerchantId();
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
 * @summary API operation for the product image tampering detection service. Detects image tampering, quality (clarity), and similar images.
 *
 * @description Submits an e-commerce product image to perform tampering detection, quality (clarity) assessment, and similar image detection. Returns risk labels and risk scores.
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
      {"content" , request.getImageFileObject()},
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
    credentialProductVerifyV2Req.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialProductVerifyV2Response credentialProductVerifyV2Resp = credentialProductVerifyV2WithOptions(credentialProductVerifyV2Req, runtime);
  return credentialProductVerifyV2Resp;
}

/**
 * @summary Credential verification.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
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
    request.setMerchantDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMerchantDetail(), "MerchantDetail", "json"));
  }

  json query = {};
  if (!!request.hasCertNum()) {
    query["CertNum"] = request.getCertNum();
  }

  if (!!request.hasCredName()) {
    query["CredName"] = request.getCredName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.getCredType();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasIsCheck()) {
    query["IsCheck"] = request.getIsCheck();
  }

  if (!!request.hasIsOCR()) {
    query["IsOCR"] = request.getIsOCR();
  }

  if (!!request.hasMerchantDetailShrink()) {
    query["MerchantDetail"] = request.getMerchantDetailShrink();
  }

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.getMerchantId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptModel()) {
    query["PromptModel"] = request.getPromptModel();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  json body = {};
  if (!!request.hasImageContext()) {
    body["ImageContext"] = request.getImageContext();
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
 * @summary Credential verification.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
 * - Request method: POST and GET.
 * - Transfer protocol: HTTPS.
 *
 * @param request CredentialVerifyRequest
 * @return CredentialVerifyResponse
 */
CredentialVerifyResponse Client::credentialVerify(const CredentialVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return credentialVerifyWithOptions(request, runtime);
}

/**
 * @summary Credential verification.
 *
 * @description Submits a credential image to perform image tampering and forgery detection and image semantic understanding. Returns risk detection results.
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
    request.setMerchantDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMerchantDetail(), "MerchantDetail", "json"));
  }

  json query = {};
  if (!!request.hasCertNum()) {
    query["CertNum"] = request.getCertNum();
  }

  if (!!request.hasCredName()) {
    query["CredName"] = request.getCredName();
  }

  if (!!request.hasCredType()) {
    query["CredType"] = request.getCredType();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasIsCheck()) {
    query["IsCheck"] = request.getIsCheck();
  }

  if (!!request.hasIsOcr()) {
    query["IsOcr"] = request.getIsOcr();
  }

  if (!!request.hasMerchantDetailShrink()) {
    query["MerchantDetail"] = request.getMerchantDetailShrink();
  }

  if (!!request.hasMerchantId()) {
    query["MerchantId"] = request.getMerchantId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptModel()) {
    query["PromptModel"] = request.getPromptModel();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  json body = {};
  if (!!request.hasImageContext()) {
    body["ImageContext"] = request.getImageContext();
  }

  if (!!request.hasImageFile()) {
    body["ImageFile"] = request.getImageFile();
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
 * @summary Credential verification.
 *
 * @description Submits a credential image to perform image tampering and forgery detection and image semantic understanding. Returns risk detection results.
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
      {"content" , request.getImageFileObject()},
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
    credentialVerifyV2Req.setImageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CredentialVerifyV2Response credentialVerifyV2Resp = credentialVerifyV2WithOptions(credentialVerifyV2Req, runtime);
  return credentialVerifyV2Resp;
}

/**
 * @summary Accepts a face image and uses algorithms to detect deepfake risks. Covers risk scenarios such as AIGC-generated faces, deepfake face swaps, template faces, and recaptured faces. Returns risk labels and confidence levels.
 *
 * @description > The face deepfake detection operation is currently in free public preview. The free public preview ends at 23:59:59 on August 30, 2024. During the public preview, the QPS cannot exceed 3 queries per second.
 * - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
    query["FaceInputType"] = request.getFaceInputType();
  }

  if (!!request.hasFaceUrl()) {
    query["FaceUrl"] = request.getFaceUrl();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.getOuterOrderNo();
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
 * @summary Accepts a face image and uses algorithms to detect deepfake risks. Covers risk scenarios such as AIGC-generated faces, deepfake face swaps, template faces, and recaptured faces. Returns risk labels and confidence levels.
 *
 * @description > The face deepfake detection operation is currently in free public preview. The free public preview ends at 23:59:59 on August 30, 2024. During the public preview, the QPS cannot exceed 3 queries per second.
 * - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
 * @summary Deletes all custom rate limiting policies.
 *
 * @description Request method: Supports sending requests by using the HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DeleteAllCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllCustomizeFlowStrategyResponse
 */
DeleteAllCustomizeFlowStrategyResponse Client::deleteAllCustomizeFlowStrategyWithOptions(const DeleteAllCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Deletes all custom rate limiting policies.
 *
 * @description Request method: Supports sending requests by using the HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DeleteAllCustomizeFlowStrategyRequest
 * @return DeleteAllCustomizeFlowStrategyResponse
 */
DeleteAllCustomizeFlowStrategyResponse Client::deleteAllCustomizeFlowStrategy(const DeleteAllCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllCustomizeFlowStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes a China Finance Verification scene.
 *
 * @description - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DeleteAntCloudAuthSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAntCloudAuthSceneResponse
 */
DeleteAntCloudAuthSceneResponse Client::deleteAntCloudAuthSceneWithOptions(const DeleteAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary Deletes a China Finance Verification scene.
 *
 * @description - Endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DeleteAntCloudAuthSceneRequest
 * @return DeleteAntCloudAuthSceneResponse
 */
DeleteAntCloudAuthSceneResponse Client::deleteAntCloudAuthScene(const DeleteAntCloudAuthSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAntCloudAuthSceneWithOptions(request, runtime);
}

/**
 * @summary Deletes a blacklist rule.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DeleteBlackListStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBlackListStrategyResponse
 */
DeleteBlackListStrategyResponse Client::deleteBlackListStrategyWithOptions(const DeleteBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a blacklist rule.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DeleteBlackListStrategyRequest
 * @return DeleteBlackListStrategyResponse
 */
DeleteBlackListStrategyResponse Client::deleteBlackListStrategy(const DeleteBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Delete a specified authentication scene for Enhanced Real-person Identity Verification
 *
 * @description Request method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. We recommend that you obtain a new key before each activation.
 *
 * @param request DeleteCloudauthstSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudauthstSceneResponse
 */
DeleteCloudauthstSceneResponse Client::deleteCloudauthstSceneWithOptions(const DeleteCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary Delete a specified authentication scene for Enhanced Real-person Identity Verification
 *
 * @description Request method: Supports sending requests using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. We recommend that you obtain a new key before each activation.
 *
 * @param request DeleteCloudauthstSceneRequest
 * @return DeleteCloudauthstSceneResponse
 */
DeleteCloudauthstSceneResponse Client::deleteCloudauthstScene(const DeleteCloudauthstSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudauthstSceneWithOptions(request, runtime);
}

/**
 * @summary Delete a stability alert rule.
 *
 * @description Request method: Supports sending requests using the HTTPS POST method.
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
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Delete a stability alert rule.
 *
 * @description Request method: Supports sending requests using the HTTPS POST method.
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
 * @summary Deletes a custom rate limiting policy.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DeleteCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizeFlowStrategyResponse
 */
DeleteCustomizeFlowStrategyResponse Client::deleteCustomizeFlowStrategyWithOptions(const DeleteCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Deletes a custom rate limiting policy.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DeleteCustomizeFlowStrategyRequest
 * @return DeleteCustomizeFlowStrategyResponse
 */
DeleteCustomizeFlowStrategyResponse Client::deleteCustomizeFlowStrategy(const DeleteCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomizeFlowStrategyWithOptions(request, runtime);
}

/**
 * @summary API for deleting sensitive data in financial-grade services.
 *
 * @description Deletes all personal information fields from the request, including name, ID card number, phone number, IP address, images, videos, device information, etc.
 *
 * @param request DeleteFaceVerifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaceVerifyResultResponse
 */
DeleteFaceVerifyResultResponse Client::deleteFaceVerifyResultWithOptions(const DeleteFaceVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasDeleteAfterQuery()) {
    query["DeleteAfterQuery"] = request.getDeleteAfterQuery();
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
 * @summary API for deleting sensitive data in financial-grade services.
 *
 * @description Deletes all personal information fields from the request, including name, ID card number, phone number, IP address, images, videos, device information, etc.
 *
 * @param request DeleteFaceVerifyResultRequest
 * @return DeleteFaceVerifyResultResponse
 */
DeleteFaceVerifyResultResponse Client::deleteFaceVerifyResult(const DeleteFaceVerifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFaceVerifyResultWithOptions(request, runtime);
}

/**
 * @summary Deletes a scenario configuration.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Request URL: cloudauth.aliyuncs.com.
 * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
 *
 * @param request DeleteSceneConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneConfigResponse
 */
DeleteSceneConfigResponse Client::deleteSceneConfigWithOptions(const DeleteSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSceneConfigId()) {
    body["sceneConfigId"] = request.getSceneConfigId();
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
 * @summary Deletes a scenario configuration.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Request URL: cloudauth.aliyuncs.com.
 * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
 *
 * @param request DeleteSceneConfigRequest
 * @return DeleteSceneConfigResponse
 */
DeleteSceneConfigResponse Client::deleteSceneConfig(const DeleteSceneConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSceneConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes the version of a specified cluster.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DeleteWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWhitelistSettingResponse
 */
DeleteWhitelistSettingResponse Client::deleteWhitelistSettingWithOptions(const DeleteWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes the version of a specified cluster.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DeleteWhitelistSettingRequest
 * @return DeleteWhitelistSettingResponse
 */
DeleteWhitelistSettingResponse Client::deleteWhitelistSetting(const DeleteWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWhitelistSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the activation status of different ID Verification product plans.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
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
 * @summary Queries the activation status of different ID Verification product plans.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @return DescribeAntAndCloudAuthUserStatusResponse
 */
DescribeAntAndCloudAuthUserStatusResponse Client::describeAntAndCloudAuthUserStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAntAndCloudAuthUserStatusWithOptions(runtime);
}

/**
 * @summary Retrieves OCR results.
 *
 * @param request DescribeAuthVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthVerifyResponse
 */
DescribeAuthVerifyResponse Client::describeAuthVerifyWithOptions(const DescribeAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
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
 * @summary Retrieves OCR results.
 *
 * @param request DescribeAuthVerifyRequest
 * @return DescribeAuthVerifyResponse
 */
DescribeAuthVerifyResponse Client::describeAuthVerify(const DescribeAuthVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthVerifyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the verification result for image element verification.
 *
 * @description After you receive a callback notification, you can call this operation on the server side to obtain the corresponding verification status and verification materials.
 *
 * @param request DescribeCardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCardVerifyResponse
 */
DescribeCardVerifyResponse Client::describeCardVerifyWithOptions(const DescribeCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
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
 * @summary Retrieves the verification result for image element verification.
 *
 * @description After you receive a callback notification, you can call this operation on the server side to obtain the corresponding verification status and verification materials.
 *
 * @param request DescribeCardVerifyRequest
 * @return DescribeCardVerifyResponse
 */
DescribeCardVerifyResponse Client::describeCardVerify(const DescribeCardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCardVerifyWithOptions(request, runtime);
}

/**
 * @summary Queries the authentication scenarios for enhanced ID Verification.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DescribeCloudauthstSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudauthstSceneListResponse
 */
DescribeCloudauthstSceneListResponse Client::describeCloudauthstSceneListWithOptions(const DescribeCloudauthstSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
 * @summary Queries the authentication scenarios for enhanced ID Verification.
 *
 * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DescribeCloudauthstSceneListRequest
 * @return DescribeCloudauthstSceneListResponse
 */
DescribeCloudauthstSceneListResponse Client::describeCloudauthstSceneList(const DescribeCloudauthstSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudauthstSceneListWithOptions(request, runtime);
}

/**
 * @summary Such as authorization validity period, custom business identifiers defined by the integrating party, and device IDs.
 *
 * @description Request method: supports sending requests using HTTPS POST and GET methods.
 *
 * @param request DescribeDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfoWithOptions(const DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasExpiredEndDay()) {
    query["ExpiredEndDay"] = request.getExpiredEndDay();
  }

  if (!!request.hasExpiredStartDay()) {
    query["ExpiredStartDay"] = request.getExpiredStartDay();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.getUserDeviceId();
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
 * @summary Such as authorization validity period, custom business identifiers defined by the integrating party, and device IDs.
 *
 * @description Request method: supports sending requests using HTTPS POST and GET methods.
 *
 * @param request DescribeDeviceInfoRequest
 * @return DescribeDeviceInfoResponse
 */
DescribeDeviceInfoResponse Client::describeDeviceInfo(const DescribeDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Financial-grade Face Guard service.
 *
 * @param request DescribeFaceGuardRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaceGuardRiskResponse
 */
DescribeFaceGuardRiskResponse Client::describeFaceGuardRiskWithOptions(const DescribeFaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeviceToken()) {
    query["DeviceToken"] = request.getDeviceToken();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
 * @summary Financial-grade Face Guard service.
 *
 * @param request DescribeFaceGuardRiskRequest
 * @return DescribeFaceGuardRiskResponse
 */
DescribeFaceGuardRiskResponse Client::describeFaceGuardRisk(const DescribeFaceGuardRiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaceGuardRiskWithOptions(request, runtime);
}

/**
 * @summary After the China site (Chinese mainland) mobile client receives a callback, the China site (Chinese mainland) server can call this operation to obtain the corresponding verification status and verification materials.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaceVerifyResponse
 */
DescribeFaceVerifyResponse Client::describeFaceVerifyWithOptions(const DescribeFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasPictureReturnType()) {
    query["PictureReturnType"] = request.getPictureReturnType();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary After the China site (Chinese mainland) mobile client receives a callback, the China site (Chinese mainland) server can call this operation to obtain the corresponding verification status and verification materials.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeFaceVerifyRequest
 * @return DescribeFaceVerifyResponse
 */
DescribeFaceVerifyResponse Client::describeFaceVerify(const DescribeFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Queries information verification export tasks by page.
 *
 * @description Request method: Supports sending requests by using the HTTPS POST and GET methods.
 *
 * @param request DescribeInfoCheckExportRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInfoCheckExportRecordResponse
 */
DescribeInfoCheckExportRecordResponse Client::describeInfoCheckExportRecordWithOptions(const DescribeInfoCheckExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries information verification export tasks by page.
 *
 * @description Request method: Supports sending requests by using the HTTPS POST and GET methods.
 *
 * @param request DescribeInfoCheckExportRecordRequest
 * @return DescribeInfoCheckExportRecordResponse
 */
DescribeInfoCheckExportRecordResponse Client::describeInfoCheckExportRecord(const DescribeInfoCheckExportRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInfoCheckExportRecordWithOptions(request, runtime);
}

/**
 * @summary Queries a specified.
 *
 * @description Request method: Supports HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DescribeListAntCloudAuthScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListAntCloudAuthScenesResponse
 */
DescribeListAntCloudAuthScenesResponse Client::describeListAntCloudAuthScenesWithOptions(const DescribeListAntCloudAuthScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary Queries a specified.
 *
 * @description Request method: Supports HTTPS POST and GET methods.
 * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
 *
 * @param request DescribeListAntCloudAuthScenesRequest
 * @return DescribeListAntCloudAuthScenesResponse
 */
DescribeListAntCloudAuthScenesResponse Client::describeListAntCloudAuthScenes(const DescribeListAntCloudAuthScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListAntCloudAuthScenesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of facial recognition data.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListFaceVerifyDataResponse
 */
DescribeListFaceVerifyDataResponse Client::describeListFaceVerifyDataWithOptions(const DescribeListFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.getGmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.getGmtStart();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary Queries the list of facial recognition data.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeListFaceVerifyDataRequest
 * @return DescribeListFaceVerifyDataResponse
 */
DescribeListFaceVerifyDataResponse Client::describeListFaceVerifyData(const DescribeListFaceVerifyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListFaceVerifyDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves facial recognition authentication records (legacy).
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.getGmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.getGmtStart();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Retrieves facial recognition authentication records (legacy).
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
 * @summary Queries information verification details by paging.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeMetaSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaSearchPageListResponse
 */
DescribeMetaSearchPageListResponse Client::describeMetaSearchPageListWithOptions(const DescribeMetaSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasBankCard()) {
    query["BankCard"] = request.getBankCard();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasIspName()) {
    query["IspName"] = request.getIspName();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubCode()) {
    query["SubCode"] = request.getSubCode();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
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
 * @summary Queries information verification details by paging.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeMetaSearchPageListRequest
 * @return DescribeMetaSearchPageListResponse
 */
DescribeMetaSearchPageListResponse Client::describeMetaSearchPageList(const DescribeMetaSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaSearchPageListWithOptions(request, runtime);
}

/**
 * @summary Queries statistics information for information verification and authentication.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeMetaStatisticsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaStatisticsListResponse
 */
DescribeMetaStatisticsListResponse Client::describeMetaStatisticsListWithOptions(const DescribeMetaStatisticsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries statistics information for information verification and authentication.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeMetaStatisticsListRequest
 * @return DescribeMetaStatisticsListResponse
 */
DescribeMetaStatisticsListResponse Client::describeMetaStatisticsList(const DescribeMetaStatisticsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaStatisticsListWithOptions(request, runtime);
}

/**
 * @summary Queries information verification and authentication data with pagination.
 *
 * @description - Request method: Supports sending requests using HTTPS POST and GET methods.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeMetaStatisticsPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetaStatisticsPageListResponse
 */
DescribeMetaStatisticsPageListResponse Client::describeMetaStatisticsPageListWithOptions(const DescribeMetaStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries information verification and authentication data with pagination.
 *
 * @description - Request method: Supports sending requests using HTTPS POST and GET methods.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeMetaStatisticsPageListRequest
 * @return DescribeMetaStatisticsPageListResponse
 */
DescribeMetaStatisticsPageListResponse Client::describeMetaStatisticsPageList(const DescribeMetaStatisticsPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetaStatisticsPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the status of OSS.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Endpoint: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssStatusResponse
 */
DescribeOssStatusResponse Client::describeOssStatusWithOptions(const DescribeOssStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
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
 * @summary Queries the status of OSS.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Endpoint: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusRequest
 * @return DescribeOssStatusResponse
 */
DescribeOssStatusResponse Client::describeOssStatus(const DescribeOssStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the OSS status of a user (V2).
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssStatusV2Response
 */
DescribeOssStatusV2Response Client::describeOssStatusV2WithOptions(const DescribeOssStatusV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the OSS status of a user (V2).
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeOssStatusV2Request
 * @return DescribeOssStatusV2Response
 */
DescribeOssStatusV2Response Client::describeOssStatusV2(const DescribeOssStatusV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssStatusV2WithOptions(request, runtime);
}

/**
 * @summary Retrieves the token required for uploading photos to OSS.
 *
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
 * @summary Retrieves the token required for uploading photos to OSS.
 *
 * @return DescribeOssUploadTokenResponse
 */
DescribeOssUploadTokenResponse Client::describeOssUploadToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssUploadTokenWithOptions(runtime);
}

/**
 * @summary Queries financial-grade ID Verification call statistics by using a paging query operation.
 *
 * @param request DescribePageFaceVerifyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePageFaceVerifyDataResponse
 */
DescribePageFaceVerifyDataResponse Client::describePageFaceVerifyDataWithOptions(const DescribePageFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries financial-grade ID Verification call statistics by using a paging query operation.
 *
 * @param request DescribePageFaceVerifyDataRequest
 * @return DescribePageFaceVerifyDataResponse
 */
DescribePageFaceVerifyDataResponse Client::describePageFaceVerifyData(const DescribePageFaceVerifyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageFaceVerifyDataWithOptions(request, runtime);
}

/**
 * @summary Queries page settings and returns the reasons for authentication failure.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
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
 * @summary Queries page settings and returns the reasons for authentication failure.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @return DescribePageSettingResponse
 */
DescribePageSettingResponse Client::describePageSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageSettingWithOptions(runtime);
}

/**
 * @summary Retrieves the product codes for financial-grade ID Verification.
 *
 * @description Request method: Send requests by using the HTTPS GET or POST method.
 *
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
 * @summary Retrieves the product codes for financial-grade ID Verification.
 *
 * @description Request method: Send requests by using the HTTPS GET or POST method.
 *
 * @return DescribeProductCodeResponse
 */
DescribeProductCodeResponse Client::describeProductCode() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductCodeWithOptions(runtime);
}

/**
 * @summary Queries the invoke statistics of enhanced ID Verification by using a paged query.
 *
 * @param request DescribeSmartStatisticsPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmartStatisticsPageListResponse
 */
DescribeSmartStatisticsPageListResponse Client::describeSmartStatisticsPageListWithOptions(const DescribeSmartStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the invoke statistics of enhanced ID Verification by using a paged query.
 *
 * @param request DescribeSmartStatisticsPageListRequest
 * @return DescribeSmartStatisticsPageListResponse
 */
DescribeSmartStatisticsPageListResponse Client::describeSmartStatisticsPageList(const DescribeSmartStatisticsPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmartStatisticsPageListWithOptions(request, runtime);
}

/**
 * @summary Retrieves statistics of verification devices.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Retrieves statistics of verification devices.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
 * @summary Queries the total number of failed authentication requests.
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
    query["AgeGt"] = request.getAgeGt();
  }

  if (!!request.hasApi()) {
    query["Api"] = request.getApi();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the total number of failed authentication requests.
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
 * @summary Queries the distribution data of phone models used by authenticated users.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
 */
DescribeVerifyPersonasDeviceModelStatisticsResponse Client::describeVerifyPersonasDeviceModelStatisticsWithOptions(const DescribeVerifyPersonasDeviceModelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
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
 * @summary Queries the distribution data of phone models used by authenticated users.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
 * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
 */
DescribeVerifyPersonasDeviceModelStatisticsResponse Client::describeVerifyPersonasDeviceModelStatistics(const DescribeVerifyPersonasDeviceModelStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasDeviceModelStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution data of ID Verification devices.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
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
 * @summary Queries the distribution data of ID Verification devices.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
 * @summary Queries authentication statistics by province of the individual.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasProvinceStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyPersonasProvinceStatisticsResponse
 */
DescribeVerifyPersonasProvinceStatisticsResponse Client::describeVerifyPersonasProvinceStatisticsWithOptions(const DescribeVerifyPersonasProvinceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
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
 * @summary Queries authentication statistics by province of the individual.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 *
 * @param request DescribeVerifyPersonasProvinceStatisticsRequest
 * @return DescribeVerifyPersonasProvinceStatisticsResponse
 */
DescribeVerifyPersonasProvinceStatisticsResponse Client::describeVerifyPersonasProvinceStatistics(const DescribeVerifyPersonasProvinceStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyPersonasProvinceStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries ID Verification statistics by gender.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
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
 * @summary Queries ID Verification statistics by gender.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
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
 * @summary Queries the result of an ID Verification task.
 *
 * @description Before you begin: Before calling this API, make sure that you have completed the required preparations. For more information, see [ID Verification server-side integration preparations](https://help.aliyun.com/document_detail/127471.html) and [Face liveness verification server-side integration preparations](https://help.aliyun.com/document_detail/127717.html).
 * > Alibaba Cloud ID Verification retains verification data for only the last 180 days. To use verification data for subsequent business purposes, call this operation promptly to retrieve and store the data to avoid data loss.
 * Request method: HTTPS POST and GET.
 * Operation description: After the caller\\"s mobile client receives a callback, the server can call this operation to obtain the corresponding verification status and verification materials.
 * Applicable scope: This operation is applicable to the SDK + server-side integration verification solution.
 *
 * @param request DescribeVerifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyResultResponse
 */
DescribeVerifyResultResponse Client::describeVerifyResultWithOptions(const DescribeVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
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
 * @summary Queries the result of an ID Verification task.
 *
 * @description Before you begin: Before calling this API, make sure that you have completed the required preparations. For more information, see [ID Verification server-side integration preparations](https://help.aliyun.com/document_detail/127471.html) and [Face liveness verification server-side integration preparations](https://help.aliyun.com/document_detail/127717.html).
 * > Alibaba Cloud ID Verification retains verification data for only the last 180 days. To use verification data for subsequent business purposes, call this operation promptly to retrieve and store the data to avoid data loss.
 * Request method: HTTPS POST and GET.
 * Operation description: After the caller\\"s mobile client receives a callback, the server can call this operation to obtain the corresponding verification status and verification materials.
 * Applicable scope: This operation is applicable to the SDK + server-side integration verification solution.
 *
 * @param request DescribeVerifyResultRequest
 * @return DescribeVerifyResultResponse
 */
DescribeVerifyResultResponse Client::describeVerifyResult(const DescribeVerifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URL of an offline SDK.
 *
 * @description Request method: Supports HTTPS POST and GET methods.
 * Operation description: Retrieves the result of an offline facial recognition SDK generation task based on the task ID.
 *
 * @param request DescribeVerifySDKRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifySDKResponse
 */
DescribeVerifySDKResponse Client::describeVerifySDKWithOptions(const DescribeVerifySDKRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Retrieves the download URL of an offline SDK.
 *
 * @description Request method: Supports HTTPS POST and GET methods.
 * Operation description: Retrieves the result of an offline facial recognition SDK generation task based on the task ID.
 *
 * @param request DescribeVerifySDKRequest
 * @return DescribeVerifySDKResponse
 */
DescribeVerifySDKResponse Client::describeVerifySDK(const DescribeVerifySDKRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifySDKWithOptions(request, runtime);
}

/**
 * @summary Query authentication details by page with conditions.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request methods: HTTPS POST and GET.
 *
 * @param request DescribeVerifySearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifySearchPageListResponse
 */
DescribeVerifySearchPageListResponse Client::describeVerifySearchPageListWithOptions(const DescribeVerifySearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasHasDeviceRisk()) {
    query["HasDeviceRisk"] = request.getHasDeviceRisk();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPassed()) {
    query["Passed"] = request.getPassed();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRiskBizScenario()) {
    query["RiskBizScenario"] = request.getRiskBizScenario();
  }

  if (!!request.hasRiskDevice()) {
    query["RiskDevice"] = request.getRiskDevice();
  }

  if (!!request.hasRiskDeviceToken()) {
    query["RiskDeviceToken"] = request.getRiskDeviceToken();
  }

  if (!!request.hasRiskGeneric()) {
    query["RiskGeneric"] = request.getRiskGeneric();
  }

  if (!!request.hasRiskModelMining()) {
    query["RiskModelMining"] = request.getRiskModelMining();
  }

  if (!!request.hasRoot()) {
    query["Root"] = request.getRoot();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSimulator()) {
    query["Simulator"] = request.getSimulator();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubCode()) {
    query["SubCode"] = request.getSubCode();
  }

  if (!!request.hasSubCodes()) {
    query["SubCodes"] = request.getSubCodes();
  }

  if (!!request.hasVirtualVideo()) {
    query["VirtualVideo"] = request.getVirtualVideo();
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
 * @summary Query authentication details by page with conditions.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com.
 * - Request methods: HTTPS POST and GET.
 *
 * @param request DescribeVerifySearchPageListRequest
 * @return DescribeVerifySearchPageListResponse
 */
DescribeVerifySearchPageListResponse Client::describeVerifySearchPageList(const DescribeVerifySearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifySearchPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics information of authentication requests.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeVerifyStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyStatisticsResponse
 */
DescribeVerifyStatisticsResponse Client::describeVerifyStatisticsWithOptions(const DescribeVerifyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgeGt()) {
    query["AgeGt"] = request.getAgeGt();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the statistics information of authentication requests.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Service address: cloudauth.aliyuncs.com.
 *
 * @param request DescribeVerifyStatisticsRequest
 * @return DescribeVerifyStatisticsResponse
 */
DescribeVerifyStatisticsResponse Client::describeVerifyStatistics(const DescribeVerifyStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyStatisticsWithOptions(request, runtime);
}

/**
 * @summary Initiates an authentication request and obtains an authentication token. This operation is applicable to authentication schemes that use SDK and server-side integration.
 *
 * @description Preparations: Before calling this operation, make sure that you have completed the required preparations. For more information, see [Overview of the ID Verification scheme integration process](https://help.aliyun.com/document_detail/127536.html) and [Overview of the face liveness verification scheme (liveness detection scheme) integration process](https://help.aliyun.com/document_detail/127687.html).
 * Request method: HTTPS POST and GET.
 * Operation description: Before each authentication, call this operation to obtain an authentication token (VerifyToken), which is used to connect the various operations in the authentication request.
 * Scope of application: This operation is applicable to mobile SDK integration.
 * Image URL: Use a publicly accessible HTTP or HTTPS URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * Image limits:
 * - The relative path or absolute path of local images is not supported.
 * - Keep the size of a single image within 2 MB to avoid algorithm fetch timeout.
 * - The face area in the image must be at least 64 × 64 pixels (px).
 * - The body of a single request has a size limit of 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
 *
 * @param request DescribeVerifyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyTokenResponse
 */
DescribeVerifyTokenResponse Client::describeVerifyTokenWithOptions(const DescribeVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCallbackSeed()) {
    query["CallbackSeed"] = request.getCallbackSeed();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasFaceRetainedImageUrl()) {
    query["FaceRetainedImageUrl"] = request.getFaceRetainedImageUrl();
  }

  if (!!request.hasFailedRedirectUrl()) {
    query["FailedRedirectUrl"] = request.getFailedRedirectUrl();
  }

  if (!!request.hasIdCardBackImageUrl()) {
    query["IdCardBackImageUrl"] = request.getIdCardBackImageUrl();
  }

  if (!!request.hasIdCardFrontImageUrl()) {
    query["IdCardFrontImageUrl"] = request.getIdCardFrontImageUrl();
  }

  if (!!request.hasIdCardNumber()) {
    query["IdCardNumber"] = request.getIdCardNumber();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPassedRedirectUrl()) {
    query["PassedRedirectUrl"] = request.getPassedRedirectUrl();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserIp()) {
    query["UserIp"] = request.getUserIp();
  }

  if (!!request.hasUserPhoneNumber()) {
    query["UserPhoneNumber"] = request.getUserPhoneNumber();
  }

  if (!!request.hasUserRegistTime()) {
    query["UserRegistTime"] = request.getUserRegistTime();
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
 * @summary Initiates an authentication request and obtains an authentication token. This operation is applicable to authentication schemes that use SDK and server-side integration.
 *
 * @description Preparations: Before calling this operation, make sure that you have completed the required preparations. For more information, see [Overview of the ID Verification scheme integration process](https://help.aliyun.com/document_detail/127536.html) and [Overview of the face liveness verification scheme (liveness detection scheme) integration process](https://help.aliyun.com/document_detail/127687.html).
 * Request method: HTTPS POST and GET.
 * Operation description: Before each authentication, call this operation to obtain an authentication token (VerifyToken), which is used to connect the various operations in the authentication request.
 * Scope of application: This operation is applicable to mobile SDK integration.
 * Image URL: Use a publicly accessible HTTP or HTTPS URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * Image limits:
 * - The relative path or absolute path of local images is not supported.
 * - Keep the size of a single image within 2 MB to avoid algorithm fetch timeout.
 * - The face area in the image must be at least 64 × 64 pixels (px).
 * - The body of a single request has a size limit of 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
 *
 * @param request DescribeVerifyTokenRequest
 * @return DescribeVerifyTokenResponse
 */
DescribeVerifyTokenResponse Client::describeVerifyToken(const DescribeVerifyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist of a scenario.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DescribeWhitelistSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhitelistSettingResponse
 */
DescribeWhitelistSettingResponse Client::describeWhitelistSettingWithOptions(const DescribeWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasValidEndDate()) {
    query["ValidEndDate"] = request.getValidEndDate();
  }

  if (!!request.hasValidStartDate()) {
    query["ValidStartDate"] = request.getValidStartDate();
  }

  if (!!request.hasWhitelistType()) {
    query["WhitelistType"] = request.getWhitelistType();
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
 * @summary Queries the whitelist of a scenario.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 *
 * @param request DescribeWhitelistSettingRequest
 * @return DescribeWhitelistSettingResponse
 */
DescribeWhitelistSettingResponse Client::describeWhitelistSetting(const DescribeWhitelistSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhitelistSettingWithOptions(request, runtime);
}

/**
 * @summary Detects validity attributes of faces in a photo.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 * Operation description: Detects validity-related attributes of faces in an input photo, helping you determine whether the photo meets your business requirements for retention or comparison. Currently supported face validity attributes include: whether a face is present, whether the face is blurry, whether glasses are worn, facial pose, and whether the face is smiling.
 * Notes on uploading image addresses: When submitting an image, provide its HTTP URL, OSS address, or Base64 encoding.
 * - HTTP address: A publicly accessible HTTP URL. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 encoding: A Base64-encoded image in the format `base64://<Base64-encoded image string>`.
 * Image limits:
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep the size of a single image within 2 MB to avoid algorithm fetch timeouts.
 * - The request body has a size limit of 8 MB. Make sure the total size of all images and other information in the request does not exceed this limit.
 * - When using Base64 to transmit images, set the request method to POST. Remove the header description from the Base64 character string, such as `data:image/png,base64`.
 *
 * @param request DetectFaceAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectFaceAttributesResponse
 */
DetectFaceAttributesResponse Client::detectFaceAttributesWithOptions(const DetectFaceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasMaterialValue()) {
    body["MaterialValue"] = request.getMaterialValue();
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
 * @summary Detects validity attributes of faces in a photo.
 *
 * @description Request method: Only HTTPS POST requests are supported.
 * Operation description: Detects validity-related attributes of faces in an input photo, helping you determine whether the photo meets your business requirements for retention or comparison. Currently supported face validity attributes include: whether a face is present, whether the face is blurry, whether glasses are worn, facial pose, and whether the face is smiling.
 * Notes on uploading image addresses: When submitting an image, provide its HTTP URL, OSS address, or Base64 encoding.
 * - HTTP address: A publicly accessible HTTP URL. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - Base64 encoding: A Base64-encoded image in the format `base64://<Base64-encoded image string>`.
 * Image limits:
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep the size of a single image within 2 MB to avoid algorithm fetch timeouts.
 * - The request body has a size limit of 8 MB. Make sure the total size of all images and other information in the request does not exceed this limit.
 * - When using Base64 to transmit images, set the request method to POST. Remove the header description from the Base64 character string, such as `data:image/png,base64`.
 *
 * @param request DetectFaceAttributesRequest
 * @return DetectFaceAttributesResponse
 */
DetectFaceAttributesResponse Client::detectFaceAttributes(const DetectFaceAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectFaceAttributesWithOptions(request, runtime);
}

/**
 * @summary Retrieves statistical call volume data.
 *
 * @description Retrieves the download link for the statistical call data file under a product plan based on the specified query conditions.
 * - Method: HTTPS POST
 * - Endpoint: cloudauth.aliyuncs.com
 * > ID Verification counts call volume by CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
 *
 * @param request DownloadVerifyRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadVerifyRecordsResponse
 */
DownloadVerifyRecordsResponse Client::downloadVerifyRecordsWithOptions(const DownloadVerifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizParam()) {
    query["BizParam"] = request.getBizParam();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
 * @summary Retrieves statistical call volume data.
 *
 * @description Retrieves the download link for the statistical call data file under a product plan based on the specified query conditions.
 * - Method: HTTPS POST
 * - Endpoint: cloudauth.aliyuncs.com
 * > ID Verification counts call volume by CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
 *
 * @param request DownloadVerifyRecordsRequest
 * @return DownloadVerifyRecordsResponse
 */
DownloadVerifyRecordsResponse Client::downloadVerifyRecords(const DownloadVerifyRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadVerifyRecordsWithOptions(request, runtime);
}

/**
 * @summary Verifies the validity period of a two-factor identity document.
 *
 * @param request Id2MetaPeriodVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaPeriodVerifyResponse
 */
Id2MetaPeriodVerifyResponse Client::id2MetaPeriodVerifyWithOptions(const Id2MetaPeriodVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the validity period of a two-factor identity document.
 *
 * @param request Id2MetaPeriodVerifyRequest
 * @return Id2MetaPeriodVerifyResponse
 */
Id2MetaPeriodVerifyResponse Client::id2MetaPeriodVerify(const Id2MetaPeriodVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaPeriodVerifyWithOptions(request, runtime);
}

/**
 * @summary Two-factor identity verification Standard Edition.
 *
 * @param request Id2MetaStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaStandardVerifyResponse
 */
Id2MetaStandardVerifyResponse Client::id2MetaStandardVerifyWithOptions(const Id2MetaStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Two-factor identity verification Standard Edition.
 *
 * @param request Id2MetaStandardVerifyRequest
 * @return Id2MetaStandardVerifyResponse
 */
Id2MetaStandardVerifyResponse Client::id2MetaStandardVerify(const Id2MetaStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return id2MetaStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Verifies the authenticity and consistency of a name and ID card number against an authoritative data source.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the authenticity and consistency of a name and ID card number against an authoritative data source.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
 * @summary Verifies the authenticity and consistency of an identity by taking images of both sides of an ID card, extracting the name and ID number via OCR, and checking them against an authoritative source.
 *
 * @description Takes images of both sides of an ID card and returns the verification result of the two factors from an authoritative data source.
 *
 * @param request Id2MetaVerifyWithOCRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id2MetaVerifyWithOCRResponse
 */
Id2MetaVerifyWithOCRResponse Client::id2MetaVerifyWithOCRWithOptions(const Id2MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertFile()) {
    body["CertFile"] = request.getCertFile();
  }

  if (!!request.hasCertNationalFile()) {
    body["CertNationalFile"] = request.getCertNationalFile();
  }

  if (!!request.hasCertNationalUrl()) {
    body["CertNationalUrl"] = request.getCertNationalUrl();
  }

  if (!!request.hasCertUrl()) {
    body["CertUrl"] = request.getCertUrl();
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
 * @summary Verifies the authenticity and consistency of an identity by taking images of both sides of an ID card, extracting the name and ID number via OCR, and checking them against an authoritative source.
 *
 * @description Takes images of both sides of an ID card and returns the verification result of the two factors from an authoritative data source.
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
      {"content" , request.getCertFileObject()},
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
    id2MetaVerifyWithOCRReq.setCertFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  if (!!request.hasCertNationalFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getCertNationalFileObject()},
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
    id2MetaVerifyWithOCRReq.setCertNationalFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRResp = id2MetaVerifyWithOCRWithOptions(id2MetaVerifyWithOCRReq, runtime);
  return id2MetaVerifyWithOCRResp;
}

/**
 * @summary Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
 *
 * @description Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
 *
 * @param request Id3MetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id3MetaVerifyResponse
 */
Id3MetaVerifyResponse Client::id3MetaVerifyWithOptions(const Id3MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasFaceFile()) {
    body["FaceFile"] = request.getFaceFile();
  }

  if (!!request.hasFacePicture()) {
    body["FacePicture"] = request.getFacePicture();
  }

  if (!!request.hasFaceUrl()) {
    body["FaceUrl"] = request.getFaceUrl();
  }

  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
 *
 * @description Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
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
      {"content" , request.getFaceFileObject()},
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
    id3MetaVerifyReq.setFaceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id3MetaVerifyResponse id3MetaVerifyResp = id3MetaVerifyWithOptions(id3MetaVerifyReq, runtime);
  return id3MetaVerifyResp;
}

/**
 * @summary Accepts images of the front and back of an ID card, extracts the name, ID number, and facial photo by using OCR, and verifies the authenticity and consistency of the three facial elements against an authoritative source.
 *
 * @description Submits images of the front and back of an ID card and returns the verification result of the three facial elements from an authoritative data source.
 *
 * @param request Id3MetaVerifyWithOCRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Id3MetaVerifyWithOCRResponse
 */
Id3MetaVerifyWithOCRResponse Client::id3MetaVerifyWithOCRWithOptions(const Id3MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertFile()) {
    body["CertFile"] = request.getCertFile();
  }

  if (!!request.hasCertNationalFile()) {
    body["CertNationalFile"] = request.getCertNationalFile();
  }

  if (!!request.hasCertNationalUrl()) {
    body["CertNationalUrl"] = request.getCertNationalUrl();
  }

  if (!!request.hasCertUrl()) {
    body["CertUrl"] = request.getCertUrl();
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
 * @summary Accepts images of the front and back of an ID card, extracts the name, ID number, and facial photo by using OCR, and verifies the authenticity and consistency of the three facial elements against an authoritative source.
 *
 * @description Submits images of the front and back of an ID card and returns the verification result of the three facial elements from an authoritative data source.
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
      {"content" , request.getCertFileObject()},
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
    id3MetaVerifyWithOCRReq.setCertFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  if (!!request.hasCertNationalFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getCertNationalFileObject()},
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
    id3MetaVerifyWithOCRReq.setCertNationalFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRResp = id3MetaVerifyWithOCRWithOptions(id3MetaVerifyWithOCRReq, runtime);
  return id3MetaVerifyWithOCRResp;
}

/**
 * @summary Initiates an OCR request.
 *
 * @param request InitAuthVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitAuthVerifyResponse
 */
InitAuthVerifyResponse Client::initAuthVerifyWithOptions(const InitAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallbackToken()) {
    body["CallbackToken"] = request.getCallbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasCardPageNumber()) {
    body["CardPageNumber"] = request.getCardPageNumber();
  }

  if (!!request.hasCardType()) {
    body["CardType"] = request.getCardType();
  }

  if (!!request.hasDocScanMode()) {
    body["DocScanMode"] = request.getDocScanMode();
  }

  if (!!request.hasIdSpoof()) {
    body["IdSpoof"] = request.getIdSpoof();
  }

  if (!!request.hasMetaInfo()) {
    body["MetaInfo"] = request.getMetaInfo();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
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
 * @summary Initiates an OCR request.
 *
 * @param request InitAuthVerifyRequest
 * @return InitAuthVerifyResponse
 */
InitAuthVerifyResponse Client::initAuthVerify(const InitAuthVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initAuthVerifyWithOptions(request, runtime);
}

/**
 * @summary Initiates an image verification authentication request.
 *
 * @description Retrieves a CertifyId before each authentication session. The CertifyId links all API operations within the authentication request.
 *
 * @param request InitCardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitCardVerifyResponse
 */
InitCardVerifyResponse Client::initCardVerifyWithOptions(const InitCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.getCallbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasCardPageNumber()) {
    query["CardPageNumber"] = request.getCardPageNumber();
  }

  if (!!request.hasCardType()) {
    query["CardType"] = request.getCardType();
  }

  if (!!request.hasDocScanMode()) {
    query["DocScanMode"] = request.getDocScanMode();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.getMetaInfo();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasPictureSave()) {
    query["PictureSave"] = request.getPictureSave();
  }

  if (!!request.hasVerifyMeta()) {
    query["VerifyMeta"] = request.getVerifyMeta();
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
 * @summary Initiates an image verification authentication request.
 *
 * @description Retrieves a CertifyId before each authentication session. The CertifyId links all API operations within the authentication request.
 *
 * @param request InitCardVerifyRequest
 * @return InitCardVerifyResponse
 */
InitCardVerifyResponse Client::initCardVerify(const InitCardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initCardVerifyWithOptions(request, runtime);
}

/**
 * @summary Obtains a CertifyId before each authentication to link the interfaces in the authentication request.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This operation uses different parameters for different product plans. For more information, refer to the [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
 * #### Image format requirements
 * When performing ID Verification, submit images that meet all of the following conditions:
 * - A recent photo with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - A clear photo with normal exposure. The face must not be too dark, too bright, or have glare, and the angle must not deviate significantly.
 * - Resolution must not exceed 1920×1080 and must be at least 640×480. Scale the short side to 720 pixels and use a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. For photos with multiple faces, the largest face is selected.
 *
 * @param request InitFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitFaceVerifyResponse
 */
InitFaceVerifyResponse Client::initFaceVerifyWithOptions(const InitFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppQualityCheck()) {
    query["AppQualityCheck"] = request.getAppQualityCheck();
  }

  if (!!request.hasBirthday()) {
    query["Birthday"] = request.getBirthday();
  }

  if (!!request.hasCallbackToken()) {
    query["CallbackToken"] = request.getCallbackToken();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasCameraSelection()) {
    query["CameraSelection"] = request.getCameraSelection();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCertifyUrlStyle()) {
    query["CertifyUrlStyle"] = request.getCertifyUrlStyle();
  }

  if (!!request.hasCertifyUrlType()) {
    query["CertifyUrlType"] = request.getCertifyUrlType();
  }

  if (!!request.hasEnableBeauty()) {
    query["EnableBeauty"] = request.getEnableBeauty();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    query["FaceContrastPictureUrl"] = request.getFaceContrastPictureUrl();
  }

  if (!!request.hasFaceGuardOutput()) {
    query["FaceGuardOutput"] = request.getFaceGuardOutput();
  }

  if (!!request.hasH5DegradeConfirmBtn()) {
    query["H5DegradeConfirmBtn"] = request.getH5DegradeConfirmBtn();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasMetaInfo()) {
    query["MetaInfo"] = request.getMetaInfo();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasNeedMultiFaceCheck()) {
    query["NeedMultiFaceCheck"] = request.getNeedMultiFaceCheck();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssObjectName()) {
    query["OssObjectName"] = request.getOssObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    query["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProcedurePriority()) {
    query["ProcedurePriority"] = request.getProcedurePriority();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRarelyCharacters()) {
    query["RarelyCharacters"] = request.getRarelyCharacters();
  }

  if (!!request.hasReadImg()) {
    query["ReadImg"] = request.getReadImg();
  }

  if (!!request.hasReturnUrl()) {
    query["ReturnUrl"] = request.getReturnUrl();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSuitableType()) {
    query["SuitableType"] = request.getSuitableType();
  }

  if (!!request.hasUiCustomUrl()) {
    query["UiCustomUrl"] = request.getUiCustomUrl();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasValidityDate()) {
    query["ValidityDate"] = request.getValidityDate();
  }

  if (!!request.hasVideoEvidence()) {
    query["VideoEvidence"] = request.getVideoEvidence();
  }

  if (!!request.hasVoluntaryCustomizedContent()) {
    query["VoluntaryCustomizedContent"] = request.getVoluntaryCustomizedContent();
  }

  json body = {};
  if (!!request.hasAuthId()) {
    body["AuthId"] = request.getAuthId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.getFaceContrastPicture();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
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
 * @summary Obtains a CertifyId before each authentication to link the interfaces in the authentication request.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This operation uses different parameters for different product plans. For more information, refer to the [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
 * #### Image format requirements
 * When performing ID Verification, submit images that meet all of the following conditions:
 * - A recent photo with a complete, clear, and unobstructed face, a natural expression, and the subject facing the camera directly.
 * - A clear photo with normal exposure. The face must not be too dark, too bright, or have glare, and the angle must not deviate significantly.
 * - Resolution must not exceed 1920×1080 and must be at least 640×480. Scale the short side to 720 pixels and use a compression ratio greater than 0.9.
 * - Photo size: < 1 MB.
 * - Photos rotated 90, 180, and 270 degrees are supported. For photos with multiple faces, the largest face is selected.
 *
 * @param request InitFaceVerifyRequest
 * @return InitFaceVerifyResponse
 */
InitFaceVerifyResponse Client::initFaceVerify(const InitFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Adds an ID Verification whitelist entry.
 *
 * @param request InsertWhiteListSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertWhiteListSettingResponse
 */
InsertWhiteListSettingResponse Client::insertWhiteListSettingWithOptions(const InsertWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasValidDay()) {
    query["ValidDay"] = request.getValidDay();
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
 * @summary Adds an ID Verification whitelist entry.
 *
 * @param request InsertWhiteListSettingRequest
 * @return InsertWhiteListSettingResponse
 */
InsertWhiteListSettingResponse Client::insertWhiteListSetting(const InsertWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary LivenessFaceVerify is a service that performs passive liveness detection on face images submitted through an API operation. The algorithm primarily identifies liveness attack types such as screen replay and printed photo attacks. This service is suitable for low-risk business scenarios or for use in conjunction with an offline facial recognition SDK. If your business requires a higher level of security for real face verification, integrate the App or WebSDK pattern, or integrate the face Deepfake detection service to identify face forgery risks across more dimensions.
 *
 * @description Calls the LivenessFaceVerify operation to perform liveness detection on a face image.
 *
 * @param request LivenessFaceVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LivenessFaceVerifyResponse
 */
LivenessFaceVerifyResponse Client::livenessFaceVerifyWithOptions(const LivenessFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  json body = {};
  if (!!request.hasCertifyId()) {
    body["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCrop()) {
    body["Crop"] = request.getCrop();
  }

  if (!!request.hasDeviceToken()) {
    body["DeviceToken"] = request.getDeviceToken();
  }

  if (!!request.hasFaceContrastPicture()) {
    body["FaceContrastPicture"] = request.getFaceContrastPicture();
  }

  if (!!request.hasFaceContrastPictureUrl()) {
    body["FaceContrastPictureUrl"] = request.getFaceContrastPictureUrl();
  }

  if (!!request.hasIp()) {
    body["Ip"] = request.getIp();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasOssBucketName()) {
    body["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssObjectName()) {
    body["OssObjectName"] = request.getOssObjectName();
  }

  if (!!request.hasOuterOrderNo()) {
    body["OuterOrderNo"] = request.getOuterOrderNo();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
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
 * @summary LivenessFaceVerify is a service that performs passive liveness detection on face images submitted through an API operation. The algorithm primarily identifies liveness attack types such as screen replay and printed photo attacks. This service is suitable for low-risk business scenarios or for use in conjunction with an offline facial recognition SDK. If your business requires a higher level of security for real face verification, integrate the App or WebSDK pattern, or integrate the face Deepfake detection service to identify face forgery risks across more dimensions.
 *
 * @description Calls the LivenessFaceVerify operation to perform liveness detection on a face image.
 *
 * @param request LivenessFaceVerifyRequest
 * @return LivenessFaceVerifyResponse
 */
LivenessFaceVerifyResponse Client::livenessFaceVerify(const LivenessFaceVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return livenessFaceVerifyWithOptions(request, runtime);
}

/**
 * @summary Verifies the consistency of a mobile phone number and the owner\\"s name.
 *
 * @description Passes in a mobile phone number and a name, and verifies their authenticity and consistency through an authoritative data source.
 *
 * @param request Mobile2MetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile2MetaVerifyResponse
 */
Mobile2MetaVerifyResponse Client::mobile2MetaVerifyWithOptions(const Mobile2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the consistency of a mobile phone number and the owner\\"s name.
 *
 * @description Passes in a mobile phone number and a name, and verifies their authenticity and consistency through an authoritative data source.
 *
 * @param request Mobile2MetaVerifyRequest
 * @return Mobile2MetaVerifyResponse
 */
Mobile2MetaVerifyResponse Client::mobile2MetaVerify(const Mobile2MetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile2MetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Verifies the three-element identity of a phone number (detailed version - standard edition).
 *
 * @description Passes in a phone number, name, and ID card number, and verifies their authenticity and consistency through an authoritative data source. If the information is inconsistent, the reason for the inconsistency is returned.
 *
 * @param request Mobile3MetaDetailStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaDetailStandardVerifyResponse
 */
Mobile3MetaDetailStandardVerifyResponse Client::mobile3MetaDetailStandardVerifyWithOptions(const Mobile3MetaDetailStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the three-element identity of a phone number (detailed version - standard edition).
 *
 * @description Passes in a phone number, name, and ID card number, and verifies their authenticity and consistency through an authoritative data source. If the information is inconsistent, the reason for the inconsistency is returned.
 *
 * @param request Mobile3MetaDetailStandardVerifyRequest
 * @return Mobile3MetaDetailStandardVerifyResponse
 */
Mobile3MetaDetailStandardVerifyResponse Client::mobile3MetaDetailStandardVerify(const Mobile3MetaDetailStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaDetailStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Verifies the authenticity and consistency of a phone number, name, and ID card number against authoritative data sources, and returns the reason for any inconsistency.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the authenticity and consistency of a phone number, name, and ID card number against authoritative data sources, and returns the reason for any inconsistency.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
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
 * @summary Verifies the three-element identity of a phone number (Standard Edition).
 *
 * @description Passes in a phone number, name, and ID card number, and verifies their authenticity and consistency through an authoritative data source.
 *
 * @param request Mobile3MetaSimpleStandardVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Mobile3MetaSimpleStandardVerifyResponse
 */
Mobile3MetaSimpleStandardVerifyResponse Client::mobile3MetaSimpleStandardVerifyWithOptions(const Mobile3MetaSimpleStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentifyNum()) {
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Verifies the three-element identity of a phone number (Standard Edition).
 *
 * @description Passes in a phone number, name, and ID card number, and verifies their authenticity and consistency through an authoritative data source.
 *
 * @param request Mobile3MetaSimpleStandardVerifyRequest
 * @return Mobile3MetaSimpleStandardVerifyResponse
 */
Mobile3MetaSimpleStandardVerifyResponse Client::mobile3MetaSimpleStandardVerify(const Mobile3MetaSimpleStandardVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobile3MetaSimpleStandardVerifyWithOptions(request, runtime);
}

/**
 * @summary Pass in the name and ID card number to verify their authenticity and consistency through authoritative data sources.
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
    body["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
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
 * @summary Pass in the name and ID card number to verify their authenticity and consistency through authoritative data sources.
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
 * @summary Detects phone numbers.
 *
 * @param request MobileDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileDetectResponse
 */
MobileDetectResponse Client::mobileDetectWithOptions(const MobileDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobiles()) {
    body["Mobiles"] = request.getMobiles();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
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
 * @summary Detects phone numbers.
 *
 * @param request MobileDetectRequest
 * @return MobileDetectResponse
 */
MobileDetectResponse Client::mobileDetect(const MobileDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileDetectWithOptions(request, runtime);
}

/**
 * @summary Queries the network availability status of a phone number.
 *
 * @param request MobileOnlineStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileOnlineStatusResponse
 */
MobileOnlineStatusResponse Client::mobileOnlineStatusWithOptions(const MobileOnlineStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
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
 * @summary Queries the network availability status of a phone number.
 *
 * @param request MobileOnlineStatusRequest
 * @return MobileOnlineStatusResponse
 */
MobileOnlineStatusResponse Client::mobileOnlineStatus(const MobileOnlineStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileOnlineStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the length of time a phone number has been active on a network.
 *
 * @param request MobileOnlineTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileOnlineTimeResponse
 */
MobileOnlineTimeResponse Client::mobileOnlineTimeWithOptions(const MobileOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    body["ParamType"] = request.getParamType();
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
 * @summary Queries the length of time a phone number has been active on a network.
 *
 * @param request MobileOnlineTimeRequest
 * @return MobileOnlineTimeResponse
 */
MobileOnlineTimeResponse Client::mobileOnlineTime(const MobileOnlineTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileOnlineTimeWithOptions(request, runtime);
}

/**
 * @summary Verifies whether a phone number has been reassigned to a new subscriber.
 *
 * @description Passes in a phone number and its registration date, and verifies the authenticity and consistency of the information through an authoritative data source.
 *
 * @param request MobileRecycledMetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileRecycledMetaVerifyResponse
 */
MobileRecycledMetaVerifyResponse Client::mobileRecycledMetaVerifyWithOptions(const MobileRecycledMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasRegisterDate()) {
    query["RegisterDate"] = request.getRegisterDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MobileRecycledMetaVerify"},
    {"version" , "2019-03-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MobileRecycledMetaVerifyResponse>();
}

/**
 * @summary Verifies whether a phone number has been reassigned to a new subscriber.
 *
 * @description Passes in a phone number and its registration date, and verifies the authenticity and consistency of the information through an authoritative data source.
 *
 * @param request MobileRecycledMetaVerifyRequest
 * @return MobileRecycledMetaVerifyResponse
 */
MobileRecycledMetaVerifyResponse Client::mobileRecycledMetaVerify(const MobileRecycledMetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mobileRecycledMetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a blacklist rule.
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: Creates or modifies a blacklist rule.
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
    request.setBlackListStrategyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBlackListStrategy(), "BlackListStrategy", "json"));
  }

  json query = {};
  if (!!request.hasBlackListStrategyShrink()) {
    query["BlackListStrategy"] = request.getBlackListStrategyShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates or modifies a blacklist rule.
 *
 * @description - Service address: cloudauth.aliyuncs.com.
 * - Request method: HTTPS POST and GET.
 * - Operation description: Creates or modifies a blacklist rule.
 *
 * @param request ModifyBlackListStrategyRequest
 * @return ModifyBlackListStrategyResponse
 */
ModifyBlackListStrategyResponse Client::modifyBlackListStrategy(const ModifyBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Adjusts stability alert rules.
 *
 * @description - Request method: HTTPS POST.
 * - Request URL: cloudauth.aliyuncs.com.
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
    request.setControlStrategyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getControlStrategyList(), "ControlStrategyList", "json"));
  }

  json query = {};
  if (!!request.hasControlStrategyListShrink()) {
    query["ControlStrategyList"] = request.getControlStrategyListShrink();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Adjusts stability alert rules.
 *
 * @description - Request method: HTTPS POST.
 * - Request URL: cloudauth.aliyuncs.com.
 *
 * @param request ModifyControlStrategyRequest
 * @return ModifyControlStrategyResponse
 */
ModifyControlStrategyResponse Client::modifyControlStrategy(const ModifyControlStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlStrategyWithOptions(request, runtime);
}

/**
 * @summary Adjusts the list of custom rate limiting policies.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Endpoint: cloudauth.aliyuncs.com.
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
    request.setStrategyObjectShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStrategyObject(), "StrategyObject", "json"));
  }

  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasStrategyObjectShrink()) {
    query["StrategyObject"] = request.getStrategyObjectShrink();
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
 * @summary Adjusts the list of custom rate limiting policies.
 *
 * @description - Request method: HTTPS POST and GET methods are supported.
 * - Endpoint: cloudauth.aliyuncs.com.
 *
 * @param request ModifyCustomizeFlowStrategyListRequest
 * @return ModifyCustomizeFlowStrategyListResponse
 */
ModifyCustomizeFlowStrategyListResponse Client::modifyCustomizeFlowStrategyList(const ModifyCustomizeFlowStrategyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomizeFlowStrategyListWithOptions(request, runtime);
}

/**
 * @summary Updates device-related information, such as extending the device authorization validity period, updating custom business identifiers, and updating device IDs. This operation is applicable to scenarios such as device validity period renewal.
 *
 * @description Request method: You can send requests by using the HTTPS POST and GET methods.
 *
 * @param request ModifyDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDeviceInfoResponse
 */
ModifyDeviceInfoResponse Client::modifyDeviceInfoWithOptions(const ModifyDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExpiredDay()) {
    query["ExpiredDay"] = request.getExpiredDay();
  }

  if (!!request.hasUserDeviceId()) {
    query["UserDeviceId"] = request.getUserDeviceId();
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
 * @summary Updates device-related information, such as extending the device authorization validity period, updating custom business identifiers, and updating device IDs. This operation is applicable to scenarios such as device validity period renewal.
 *
 * @description Request method: You can send requests by using the HTTPS POST and GET methods.
 *
 * @param request ModifyDeviceInfoRequest
 * @return ModifyDeviceInfoResponse
 */
ModifyDeviceInfoResponse Client::modifyDeviceInfo(const ModifyDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDeviceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries ID Verification whitelist configurations by using paging.
 *
 * @param request PageQueryWhiteListSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageQueryWhiteListSettingResponse
 */
PageQueryWhiteListSettingResponse Client::pageQueryWhiteListSettingWithOptions(const PageQueryWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertifyId()) {
    query["CertifyId"] = request.getCertifyId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasValidEndDate()) {
    query["ValidEndDate"] = request.getValidEndDate();
  }

  if (!!request.hasValidStartDate()) {
    query["ValidStartDate"] = request.getValidStartDate();
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
 * @summary Queries ID Verification whitelist configurations by using paging.
 *
 * @param request PageQueryWhiteListSettingRequest
 * @return PageQueryWhiteListSettingResponse
 */
PageQueryWhiteListSettingResponse Client::pageQueryWhiteListSetting(const PageQueryWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageQueryWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the blacklist configuration list.
 *
 * @description - Request endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * > You can configure blacklists for IP addresses, ID card numbers, phone numbers, and bank card numbers. When a request matches a blacklist entry, the system rejects the request and returns a fixed error code.
 * You can configure blacklists for IP addresses, ID card numbers, phone numbers, and bank card numbers. When a request matches a blacklist entry, the system rejects the request and returns a fixed error code.
 *
 * @param request QueryBlackListStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBlackListStrategyResponse
 */
QueryBlackListStrategyResponse Client::queryBlackListStrategyWithOptions(const QueryBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the blacklist configuration list.
 *
 * @description - Request endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * > You can configure blacklists for IP addresses, ID card numbers, phone numbers, and bank card numbers. When a request matches a blacklist entry, the system rejects the request and returns a fixed error code.
 * You can configure blacklists for IP addresses, ID card numbers, phone numbers, and bank card numbers. When a request matches a blacklist entry, the system rejects the request and returns a fixed error code.
 *
 * @param request QueryBlackListStrategyRequest
 * @return QueryBlackListStrategyResponse
 */
QueryBlackListStrategyResponse Client::queryBlackListStrategy(const QueryBlackListStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBlackListStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of stability rules. The system monitors the stability of the server-side InitFaceVerify operation and API integration operations. If a threshold is triggered, the system sends an alert.
 *
 * @description - Request method: HTTPS POST and GET.
 * - Request URL: cloudauth.aliyuncs.com.
 *
 * @param request QueryControlStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryControlStrategyResponse
 */
QueryControlStrategyResponse Client::queryControlStrategyWithOptions(const QueryControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the list of stability rules. The system monitors the stability of the server-side InitFaceVerify operation and API integration operations. If a threshold is triggered, the system sends an alert.
 *
 * @description - Request method: HTTPS POST and GET.
 * - Request URL: cloudauth.aliyuncs.com.
 *
 * @param request QueryControlStrategyRequest
 * @return QueryControlStrategyResponse
 */
QueryControlStrategyResponse Client::queryControlStrategy(const QueryControlStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryControlStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries security rules.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - Security rules: monitoring rules that ensure system security, such as API abuse and abnormal account theft. When a threshold is triggered, the system sends an alert.
 *
 * @param request QueryCustomizeFlowStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomizeFlowStrategyResponse
 */
QueryCustomizeFlowStrategyResponse Client::queryCustomizeFlowStrategyWithOptions(const QueryCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries security rules.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - Security rules: monitoring rules that ensure system security, such as API abuse and abnormal account theft. When a threshold is triggered, the system sends an alert.
 *
 * @param request QueryCustomizeFlowStrategyRequest
 * @return QueryCustomizeFlowStrategyResponse
 */
QueryCustomizeFlowStrategyResponse Client::queryCustomizeFlowStrategy(const QueryCustomizeFlowStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomizeFlowStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of intent verification settings.
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
    query["type"] = request.getType();
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
 * @summary Queries the list of intent verification settings.
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
 * @summary Queries an ID Verification download task.
 *
 * @description Retrieves the download link of a statistical call data file under a product plan based on query conditions.
 * - Method: HTTPS POST
 * - Endpoint: cloudauth.aliyuncs.com
 * > ID Verification uses CertifyId to calculate the call volume. To facilitate reconciliation, retain the CertifyId field in your system.
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
 * @summary Queries an ID Verification download task.
 *
 * @description Retrieves the download link of a statistical call data file under a product plan based on query conditions.
 * - Method: HTTPS POST
 * - Endpoint: cloudauth.aliyuncs.com
 * > ID Verification uses CertifyId to calculate the call volume. To facilitate reconciliation, retain the CertifyId field in your system.
 *
 * @param request QueryVerifyDownloadTaskRequest
 * @return QueryVerifyDownloadTaskResponse
 */
QueryVerifyDownloadTaskResponse Client::queryVerifyDownloadTask(const QueryVerifyDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries data transfer plans.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This operation uses different parameters for different product plans. For more information, see [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
 *
 * @param request QueryVerifyFlowPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVerifyFlowPackageResponse
 */
QueryVerifyFlowPackageResponse Client::queryVerifyFlowPackageWithOptions(const QueryVerifyFlowPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
 * @summary Queries data transfer plans.
 *
 * @description - Service endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * - This operation uses different parameters for different product plans. For more information, see [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
 *
 * @param request QueryVerifyFlowPackageRequest
 * @return QueryVerifyFlowPackageResponse
 */
QueryVerifyFlowPackageResponse Client::queryVerifyFlowPackage(const QueryVerifyFlowPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyFlowPackageWithOptions(request, runtime);
}

/**
 * @summary Queries the call volume of a product code based on different product plans.
 *
 * @description - Request endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * > ID Verification counts call volume by CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
 *
 * @param request QueryVerifyInvokeSatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVerifyInvokeSatisticResponse
 */
QueryVerifyInvokeSatisticResponse Client::queryVerifyInvokeSatisticWithOptions(const QueryVerifyInvokeSatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductProgramList()) {
    query["ProductProgramList"] = request.getProductProgramList();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSceneIdList()) {
    query["SceneIdList"] = request.getSceneIdList();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatisticsType()) {
    query["StatisticsType"] = request.getStatisticsType();
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
 * @summary Queries the call volume of a product code based on different product plans.
 *
 * @description - Request endpoint: cloudauth.aliyuncs.com
 * - Request method: HTTPS POST and GET.
 * > ID Verification counts call volume by CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
 *
 * @param request QueryVerifyInvokeSatisticRequest
 * @return QueryVerifyInvokeSatisticResponse
 */
QueryVerifyInvokeSatisticResponse Client::queryVerifyInvokeSatistic(const QueryVerifyInvokeSatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVerifyInvokeSatisticWithOptions(request, runtime);
}

/**
 * @summary Deletes an ID Verification whitelist.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
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
 * @summary Deletes an ID Verification whitelist.
 *
 * @param request RemoveWhiteListSettingRequest
 * @return RemoveWhiteListSettingResponse
 */
RemoveWhiteListSettingResponse Client::removeWhiteListSetting(const RemoveWhiteListSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeWhiteListSettingWithOptions(request, runtime);
}

/**
 * @summary Updates a China Finance Certification Initiative (CFCI) scenario.
 *
 * @description Updates the information of a China Finance Certification Initiative (CFCI) scenario based on the scenario ID.
 * - Service endpoint: cloudauth.aliyuncs.com.
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
    query["BindMiniProgram"] = request.getBindMiniProgram();
  }

  if (!!request.hasCheckFileBody()) {
    query["CheckFileBody"] = request.getCheckFileBody();
  }

  if (!!request.hasCheckFileName()) {
    query["CheckFileName"] = request.getCheckFileName();
  }

  if (!!request.hasDeviceRiskPlus()) {
    query["DeviceRiskPlus"] = request.getDeviceRiskPlus();
  }

  if (!!request.hasMiniProgramName()) {
    query["MiniProgramName"] = request.getMiniProgramName();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasReturnPicCount()) {
    query["ReturnPicCount"] = request.getReturnPicCount();
  }

  if (!!request.hasReturnVideoLength()) {
    query["ReturnVideoLength"] = request.getReturnVideoLength();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.getSceneName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStoreImage()) {
    query["StoreImage"] = request.getStoreImage();
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
 * @summary Updates a China Finance Certification Initiative (CFCI) scenario.
 *
 * @description Updates the information of a China Finance Certification Initiative (CFCI) scenario based on the scenario ID.
 * - Service endpoint: cloudauth.aliyuncs.com.
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
 * @summary Updates the intent scenario configuration.
 *
 * @description - Request method: HTTPS POST.
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
    body["config"] = request.getConfig();
  }

  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasSceneId()) {
    body["sceneId"] = request.getSceneId();
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
 * @summary Updates the intent scenario configuration.
 *
 * @description - Request method: HTTPS POST.
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
 * @summary Identifies the five key attributes of a vehicle.
 *
 * @description Queries basic vehicle information by license plate number and vehicle type.
 *
 * @param request Vehicle5ItemQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return Vehicle5ItemQueryResponse
 */
Vehicle5ItemQueryResponse Client::vehicle5ItemQueryWithOptions(const Vehicle5ItemQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.getVehicleType();
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
 * @summary Identifies the five key attributes of a vehicle.
 *
 * @description Queries basic vehicle information by license plate number and vehicle type.
 *
 * @param request Vehicle5ItemQueryRequest
 * @return Vehicle5ItemQueryResponse
 */
Vehicle5ItemQueryResponse Client::vehicle5ItemQuery(const Vehicle5ItemQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicle5ItemQueryWithOptions(request, runtime);
}

/**
 * @summary Queries the insurance date of a vehicle.
 *
 * @description Queries the insurance date of a vehicle by license plate number, vehicle type, and vehicle identification number (VIN).
 *
 * @param request VehicleInsureQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleInsureQueryResponse
 */
VehicleInsureQueryResponse Client::vehicleInsureQueryWithOptions(const VehicleInsureQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.getVehicleType();
  }

  if (!!request.hasVin()) {
    query["Vin"] = request.getVin();
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
 * @summary Queries the insurance date of a vehicle.
 *
 * @description Queries the insurance date of a vehicle by license plate number, vehicle type, and vehicle identification number (VIN).
 *
 * @param request VehicleInsureQueryRequest
 * @return VehicleInsureQueryResponse
 */
VehicleInsureQueryResponse Client::vehicleInsureQuery(const VehicleInsureQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleInsureQueryWithOptions(request, runtime);
}

/**
 * @summary Verifies vehicle element consistency.
 *
 * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type.
 *
 * @param request VehicleMetaVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleMetaVerifyResponse
 */
VehicleMetaVerifyResponse Client::vehicleMetaVerifyWithOptions(const VehicleMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.getVehicleType();
  }

  if (!!request.hasVerifyMetaType()) {
    query["VerifyMetaType"] = request.getVerifyMetaType();
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
 * @summary Verifies vehicle element consistency.
 *
 * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type.
 *
 * @param request VehicleMetaVerifyRequest
 * @return VehicleMetaVerifyResponse
 */
VehicleMetaVerifyResponse Client::vehicleMetaVerify(const VehicleMetaVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleMetaVerifyWithOptions(request, runtime);
}

/**
 * @summary Verifies vehicle element information (enhanced edition).
 *
 * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type, and supports returning vehicle details.
 *
 * @param request VehicleMetaVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleMetaVerifyV2Response
 */
VehicleMetaVerifyV2Response Client::vehicleMetaVerifyV2WithOptions(const VehicleMetaVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifyNum()) {
    query["IdentifyNum"] = request.getIdentifyNum();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.getVehicleType();
  }

  if (!!request.hasVerifyMetaType()) {
    query["VerifyMetaType"] = request.getVerifyMetaType();
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
 * @summary Verifies vehicle element information (enhanced edition).
 *
 * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type, and supports returning vehicle details.
 *
 * @param request VehicleMetaVerifyV2Request
 * @return VehicleMetaVerifyV2Response
 */
VehicleMetaVerifyV2Response Client::vehicleMetaVerifyV2(const VehicleMetaVerifyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleMetaVerifyV2WithOptions(request, runtime);
}

/**
 * @summary Identifies vehicle information.
 *
 * @description Queries detailed vehicle information by license plate number and vehicle type.
 *
 * @param request VehicleQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VehicleQueryResponse
 */
VehicleQueryResponse Client::vehicleQueryWithOptions(const VehicleQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasVehicleNum()) {
    query["VehicleNum"] = request.getVehicleNum();
  }

  if (!!request.hasVehicleType()) {
    query["VehicleType"] = request.getVehicleType();
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
 * @summary Identifies vehicle information.
 *
 * @description Queries detailed vehicle information by license plate number and vehicle type.
 *
 * @param request VehicleQueryRequest
 * @return VehicleQueryResponse
 */
VehicleQueryResponse Client::vehicleQuery(const VehicleQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vehicleQueryWithOptions(request, runtime);
}

/**
 * @summary Submits a name, ID card number, facial photo, and optional front and back photos of the ID card for ID Verification, and synchronously returns the result.
 *
 * @description Before you begin: Before calling this API, ensure that you have completed the required preparations. For more information, see [Server-side integration preparations](https://help.aliyun.com/document_detail/127471.html).
 * Request method: HTTPS POST and GET.
 * Operation description: The caller\\"s server submits verification materials to the ID Verification service for comparison and validation. The result is returned synchronously.
 * Applicable scope: This operation is applicable only to server-side-only verification solutions.
 * Image URL description:
 * - HTTP or HTTPS URL: Publicly accessible HTTP or HTTPS URLs are supported. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - OSS URL: If the caller\\"s images are local files, Alibaba Cloud provides an upload SDK that allows you to upload images to the OSS bucket designated by the ID Verification service and obtain the corresponding OSS URL to use as the image URL parameter. If your business requires the upload SDK, [submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
 * Image restrictions:
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep each image within 2 MB to avoid algorithm fetch timeouts.
 * - The face area in the image must be at least 64 × 64 pixels.
 * - The request body has an 8 MB size limit. Ensure that the total size of all images and other information in the request does not exceed this limit.
 *
 * @param request VerifyMaterialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyMaterialResponse
 */
VerifyMaterialResponse Client::verifyMaterialWithOptions(const VerifyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasFaceImageUrl()) {
    query["FaceImageUrl"] = request.getFaceImageUrl();
  }

  if (!!request.hasIdCardBackImageUrl()) {
    query["IdCardBackImageUrl"] = request.getIdCardBackImageUrl();
  }

  if (!!request.hasIdCardFrontImageUrl()) {
    query["IdCardFrontImageUrl"] = request.getIdCardFrontImageUrl();
  }

  if (!!request.hasIdCardNumber()) {
    query["IdCardNumber"] = request.getIdCardNumber();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Submits a name, ID card number, facial photo, and optional front and back photos of the ID card for ID Verification, and synchronously returns the result.
 *
 * @description Before you begin: Before calling this API, ensure that you have completed the required preparations. For more information, see [Server-side integration preparations](https://help.aliyun.com/document_detail/127471.html).
 * Request method: HTTPS POST and GET.
 * Operation description: The caller\\"s server submits verification materials to the ID Verification service for comparison and validation. The result is returned synchronously.
 * Applicable scope: This operation is applicable only to server-side-only verification solutions.
 * Image URL description:
 * - HTTP or HTTPS URL: Publicly accessible HTTP or HTTPS URLs are supported. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
 * - OSS URL: If the caller\\"s images are local files, Alibaba Cloud provides an upload SDK that allows you to upload images to the OSS bucket designated by the ID Verification service and obtain the corresponding OSS URL to use as the image URL parameter. If your business requires the upload SDK, [submit a ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
 * Image restrictions:
 * - Relative paths or absolute paths of local images are not supported.
 * - Keep each image within 2 MB to avoid algorithm fetch timeouts.
 * - The face area in the image must be at least 64 × 64 pixels.
 * - The request body has an 8 MB size limit. Ensure that the total size of all images and other information in the request does not exceed this limit.
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