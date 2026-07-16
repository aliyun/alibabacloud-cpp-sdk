#include <darabonba/Core.hpp>
#include <alibabacloud/Green20220302.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/WebsocketUtils.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Green20220302::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OpenApi::WebsocketUtils;
namespace AlibabaCloud
{
namespace Green20220302
{

AlibabaCloud::Green20220302::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "green.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu" , "green.aliyuncs.com"},
    {"cn-hongkong" , "green.aliyuncs.com"},
    {"cn-huhehaote" , "green.aliyuncs.com"},
    {"cn-qingdao" , "green.aliyuncs.com"},
    {"cn-zhangjiakou" , "green.aliyuncs.com"},
    {"eu-central-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "green.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "green.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "green.aliyuncs.com"},
    {"cn-north-2-gov-1" , "green.aliyuncs.com"},
    {"cn-shenzhen" , "green-cip.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "green-cip.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "green-cip.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "green-cip.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "green-cip.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("green", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Document review results
 *
 * @param request DescribeFileModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileModerationResultResponse
 */
DescribeFileModerationResultResponse Client::describeFileModerationResultWithOptions(const DescribeFileModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeFileModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileModerationResultResponse>();
}

/**
 * @summary Document review results
 *
 * @param request DescribeFileModerationResultRequest
 * @return DescribeFileModerationResultResponse
 */
DescribeFileModerationResultResponse Client::describeFileModerationResult(const DescribeFileModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileModerationResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of an Image Moderation Pro task.
 *
 * @description - Billing information: This operation is not billed.
 * - QPS limit: This operation is limited to 100 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeImageModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageModerationResultResponse
 */
DescribeImageModerationResultResponse Client::describeImageModerationResultWithOptions(const DescribeImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeImageModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageModerationResultResponse>();
}

/**
 * @summary Retrieves the results of an Image Moderation Pro task.
 *
 * @description - Billing information: This operation is not billed.
 * - QPS limit: This operation is limited to 100 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeImageModerationResultRequest
 * @return DescribeImageModerationResultResponse
 */
DescribeImageModerationResultResponse Client::describeImageModerationResult(const DescribeImageModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageModerationResultWithOptions(request, runtime);
}

/**
 * @summary The enhanced image moderation auxiliary information API operation retrieves additional auxiliary information detected by the enhanced image moderation API operation, including OCR results and custom image library hit information.
 *
 * @description This API operation must be used with the enhanced image moderation API. After you call the enhanced image moderation API operation, you can call this API operation to obtain additional detection information. This API operation is free of charge.
 *
 * @param request DescribeImageResultExtRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageResultExtResponse
 */
DescribeImageResultExtResponse Client::describeImageResultExtWithOptions(const DescribeImageResultExtRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInfoType()) {
    body["InfoType"] = request.getInfoType();
  }

  if (!!request.hasReqId()) {
    body["ReqId"] = request.getReqId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeImageResultExt"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImageResultExtResponse>();
}

/**
 * @summary The enhanced image moderation auxiliary information API operation retrieves additional auxiliary information detected by the enhanced image moderation API operation, including OCR results and custom image library hit information.
 *
 * @description This API operation must be used with the enhanced image moderation API. After you call the enhanced image moderation API operation, you can call this API operation to obtain additional detection information. This API operation is free of charge.
 *
 * @param request DescribeImageResultExtRequest
 * @return DescribeImageResultExtResponse
 */
DescribeImageResultExtResponse Client::describeImageResultExt(const DescribeImageResultExtRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageResultExtWithOptions(request, runtime);
}

/**
 * @summary Query the results of an asynchronous multimodal moderation task.
 *
 * @description - Billing information: This API call is free.
 * - Query timeout: Wait 30 seconds after you submit an asynchronous moderation task before querying the result. Do not wait longer than 24 hours, or the result will be automatically deleted.
 * - This API has a per-user rate limiting limit of 10 requests per second. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
 *
 * @param request DescribeMultimodalModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultimodalModerationResultResponse
 */
DescribeMultimodalModerationResultResponse Client::describeMultimodalModerationResultWithOptions(const DescribeMultimodalModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultimodalModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultimodalModerationResultResponse>();
}

/**
 * @summary Query the results of an asynchronous multimodal moderation task.
 *
 * @description - Billing information: This API call is free.
 * - Query timeout: Wait 30 seconds after you submit an asynchronous moderation task before querying the result. Do not wait longer than 24 hours, or the result will be automatically deleted.
 * - This API has a per-user rate limiting limit of 10 requests per second. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
 *
 * @param request DescribeMultimodalModerationResultRequest
 * @return DescribeMultimodalModerationResultResponse
 */
DescribeMultimodalModerationResultResponse Client::describeMultimodalModerationResult(const DescribeMultimodalModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultimodalModerationResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves an upload token.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUploadTokenResponse
 */
DescribeUploadTokenResponse Client::describeUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeUploadToken"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUploadTokenResponse>();
}

/**
 * @summary Retrieves an upload token.
 *
 * @return DescribeUploadTokenResponse
 */
DescribeUploadTokenResponse Client::describeUploadToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUploadTokenWithOptions(runtime);
}

/**
 * @summary Queries moderation results based on the ReqId returned by asynchronous URL moderation.
 *
 * @description - Billing information: This operation is free of charge.
 * - Query timeout: We recommend that you set the query interval to 480 seconds (query the results 480 seconds after you submit the asynchronous moderation task). The maximum timeout period is 3 days. After this period, the results are automatically deleted.
 * - The QPS limit for this operation is 100 queries per second (QPS) per user. If the limit is exceeded, your API calls will be throttled, which may affect your business. Make sure you call the operation at a reasonable rate.
 *
 * @param request DescribeUrlModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUrlModerationResultResponse
 */
DescribeUrlModerationResultResponse Client::describeUrlModerationResultWithOptions(const DescribeUrlModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReqId()) {
    body["ReqId"] = request.getReqId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUrlModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUrlModerationResultResponse>();
}

/**
 * @summary Queries moderation results based on the ReqId returned by asynchronous URL moderation.
 *
 * @description - Billing information: This operation is free of charge.
 * - Query timeout: We recommend that you set the query interval to 480 seconds (query the results 480 seconds after you submit the asynchronous moderation task). The maximum timeout period is 3 days. After this period, the results are automatically deleted.
 * - The QPS limit for this operation is 100 queries per second (QPS) per user. If the limit is exceeded, your API calls will be throttled, which may affect your business. Make sure you call the operation at a reasonable rate.
 *
 * @param request DescribeUrlModerationResultRequest
 * @return DescribeUrlModerationResultResponse
 */
DescribeUrlModerationResultResponse Client::describeUrlModerationResult(const DescribeUrlModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUrlModerationResultWithOptions(request, runtime);
}

/**
 * @summary Moderates document content.
 *
 * @param request FileModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileModerationResponse
 */
FileModerationResponse Client::fileModerationWithOptions(const FileModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FileModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FileModerationResponse>();
}

/**
 * @summary Moderates document content.
 *
 * @param request FileModerationRequest
 * @return FileModerationResponse
 */
FileModerationResponse Client::fileModeration(const FileModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fileModerationWithOptions(request, runtime);
}

/**
 * @summary This API is used for asynchronous image moderation. Asynchronous moderation tasks do not return detection results in real time. You can obtain the detection results using a callback or by polling. The detection results are retained for up to three days.
 *
 * @description - The following image formats are supported: PNG, JPG, JPEG, BMP, WEBP, TIFF, ICO, HEIC, and SVG.
 * - The image size cannot exceed 10 MB. The recommended image resolution is greater than 200 × 200 pixels. A low resolution may compromise the accuracy of the Content Moderation algorithm.
 * - The timeout period for image downloads is 3 seconds. If an image download exceeds this duration, a download timeout error is returned.
 *
 * @param request ImageAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageAsyncModerationResponse
 */
ImageAsyncModerationResponse Client::imageAsyncModerationWithOptions(const ImageAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImageAsyncModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImageAsyncModerationResponse>();
}

/**
 * @summary This API is used for asynchronous image moderation. Asynchronous moderation tasks do not return detection results in real time. You can obtain the detection results using a callback or by polling. The detection results are retained for up to three days.
 *
 * @description - The following image formats are supported: PNG, JPG, JPEG, BMP, WEBP, TIFF, ICO, HEIC, and SVG.
 * - The image size cannot exceed 10 MB. The recommended image resolution is greater than 200 × 200 pixels. A low resolution may compromise the accuracy of the Content Moderation algorithm.
 * - The timeout period for image downloads is 3 seconds. If an image download exceeds this duration, a download timeout error is returned.
 *
 * @param request ImageAsyncModerationRequest
 * @return ImageAsyncModerationResponse
 */
ImageAsyncModerationResponse Client::imageAsyncModeration(const ImageAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary Batch Invocation of Images
 *
 * @param request ImageBatchModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageBatchModerationResponse
 */
ImageBatchModerationResponse Client::imageBatchModerationWithOptions(const ImageBatchModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImageBatchModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImageBatchModerationResponse>();
}

/**
 * @summary Batch Invocation of Images
 *
 * @param request ImageBatchModerationRequest
 * @return ImageBatchModerationResponse
 */
ImageBatchModerationResponse Client::imageBatchModeration(const ImageBatchModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageBatchModerationWithOptions(request, runtime);
}

/**
 * @summary Image moderation
 *
 * @description Before you call this operation, complete the following steps:
 * 1. [Activate AI Guardrails-Enhanced Edition](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn).
 * 2. Understand the [billing methods and pricing](https://help.aliyun.com/document_detail/467826.html?#section-h06-qz6-1pt) of the enhanced image moderation feature.
 * 3. For more information about API usage and parameters, see the [API reference](https://help.aliyun.com/document_detail/467829.html).
 *
 * @param request ImageModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageModerationResponse
 */
ImageModerationResponse Client::imageModerationWithOptions(const ImageModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImageModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImageModerationResponse>();
}

/**
 * @summary Image moderation
 *
 * @description Before you call this operation, complete the following steps:
 * 1. [Activate AI Guardrails-Enhanced Edition](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn).
 * 2. Understand the [billing methods and pricing](https://help.aliyun.com/document_detail/467826.html?#section-h06-qz6-1pt) of the enhanced image moderation feature.
 * 3. For more information about API usage and parameters, see the [API reference](https://help.aliyun.com/document_detail/467829.html).
 *
 * @param request ImageModerationRequest
 * @return ImageModerationResponse
 */
ImageModerationResponse Client::imageModeration(const ImageModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageModerationWithOptions(request, runtime);
}

/**
 * @summary 图片审核
 *
 * @param request ImageQueueModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageQueueModerationResponse
 */
ImageQueueModerationResponse Client::imageQueueModerationWithOptions(const ImageQueueModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImageQueueModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImageQueueModerationResponse>();
}

/**
 * @summary 图片审核
 *
 * @param request ImageQueueModerationRequest
 * @return ImageQueueModerationResponse
 */
ImageQueueModerationResponse Client::imageQueueModeration(const ImageQueueModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageQueueModerationWithOptions(request, runtime);
}

/**
 * @summary The channel callback API for manual review results in Content Moderation.
 *
 * @param request ManualCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualCallbackResponse
 */
ManualCallbackResponse Client::manualCallbackWithOptions(const ManualCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasChecksum()) {
    body["Checksum"] = request.getChecksum();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasMsg()) {
    body["Msg"] = request.getMsg();
  }

  if (!!request.hasReqId()) {
    body["ReqId"] = request.getReqId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManualCallback"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManualCallbackResponse>();
}

/**
 * @summary The channel callback API for manual review results in Content Moderation.
 *
 * @param request ManualCallbackRequest
 * @return ManualCallbackResponse
 */
ManualCallbackResponse Client::manualCallback(const ManualCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualCallbackWithOptions(request, runtime);
}

/**
 * @summary Interface for submitting Content Moderation manual review requests
 *
 * @param request ManualModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualModerationResponse
 */
ManualModerationResponse Client::manualModerationWithOptions(const ManualModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManualModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManualModerationResponse>();
}

/**
 * @summary Interface for submitting Content Moderation manual review requests
 *
 * @param request ManualModerationRequest
 * @return ManualModerationResponse
 */
ManualModerationResponse Client::manualModeration(const ManualModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualModerationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the manual review result.
 *
 * @param request ManualModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualModerationResultResponse
 */
ManualModerationResultResponse Client::manualModerationResultWithOptions(const ManualModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManualModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManualModerationResultResponse>();
}

/**
 * @summary Retrieves the manual review result.
 *
 * @param request ManualModerationResultRequest
 * @return ManualModerationResultResponse
 */
ManualModerationResultResponse Client::manualModerationResult(const ManualModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualModerationResultWithOptions(request, runtime);
}

/**
 * @summary This is the synchronous detection API for the multi-modal agent.
 *
 * @description This is the AI Guardrails agent.
 *
 * @param request MultiModalAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalAgentResponse
 */
MultiModalAgentResponse Client::multiModalAgentWithOptions(const MultiModalAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppID()) {
    body["AppID"] = request.getAppID();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalAgent"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalAgentResponse>();
}

/**
 * @summary This is the synchronous detection API for the multi-modal agent.
 *
 * @description This is the AI Guardrails agent.
 *
 * @param request MultiModalAgentRequest
 * @return MultiModalAgentResponse
 */
MultiModalAgentResponse Client::multiModalAgent(const MultiModalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalAgentWithOptions(request, runtime);
}

/**
 * @summary Synchronously detects multimodal content by using the Agent API.
 *
 * @description The content moderation Agent.
 *
 * @param request MultiModalAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalAgentSSEResponse
 */
FutureGenerator<MultiModalAgentSSEResponse> Client::multiModalAgentSSEWithSSE(const MultiModalAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppID()) {
    body["AppID"] = request.getAppID();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalAgentSSE"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<MultiModalAgentSSEResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Synchronously detects multimodal content by using the Agent API.
 *
 * @description The content moderation Agent.
 *
 * @param request MultiModalAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalAgentSSEResponse
 */
MultiModalAgentSSEResponse Client::multiModalAgentSSEWithOptions(const MultiModalAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppID()) {
    body["AppID"] = request.getAppID();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalAgentSSE"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalAgentSSEResponse>();
}

/**
 * @summary Synchronously detects multimodal content by using the Agent API.
 *
 * @description The content moderation Agent.
 *
 * @param request MultiModalAgentSSERequest
 * @return MultiModalAgentSSEResponse
 */
MultiModalAgentSSEResponse Client::multiModalAgentSSE(const MultiModalAgentSSERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalAgentSSEWithOptions(request, runtime);
}

/**
 * @summary API for synchronous detection
 *
 * @param request MultiModalGuardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardResponse
 */
MultiModalGuardResponse Client::multiModalGuardWithOptions(const MultiModalGuardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalGuard"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalGuardResponse>();
}

/**
 * @summary API for synchronous detection
 *
 * @param request MultiModalGuardRequest
 * @return MultiModalGuardResponse
 */
MultiModalGuardResponse Client::multiModalGuard(const MultiModalGuardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardWithOptions(request, runtime);
}

/**
 * @summary An asynchronous multimodal AI safety guardrail API for audio and video. It provides comprehensive detection of non-compliant content, sensitive content, prompt injection attacks, malicious files, and malicious URLs.
 *
 * @description If an API is subject to billing, add the following sentence in bold: "Before using this API, ensure that you fully understand the billing methods and pricing of the XXX product." The word "pricing" must be a hyperlink to https\\://www\\.aliyun.com/price/product#/ecs/detail.
 *
 * @param request MultiModalGuardAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardAsyncResponse
 */
MultiModalGuardAsyncResponse Client::multiModalGuardAsyncWithOptions(const MultiModalGuardAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalGuardAsync"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalGuardAsyncResponse>();
}

/**
 * @summary An asynchronous multimodal AI safety guardrail API for audio and video. It provides comprehensive detection of non-compliant content, sensitive content, prompt injection attacks, malicious files, and malicious URLs.
 *
 * @description If an API is subject to billing, add the following sentence in bold: "Before using this API, ensure that you fully understand the billing methods and pricing of the XXX product." The word "pricing" must be a hyperlink to https\\://www\\.aliyun.com/price/product#/ecs/detail.
 *
 * @param request MultiModalGuardAsyncRequest
 * @return MultiModalGuardAsyncResponse
 */
MultiModalGuardAsyncResponse Client::multiModalGuardAsync(const MultiModalGuardAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardAsyncWithOptions(request, runtime);
}

/**
 * @summary Queries the asynchronous results of AI safety guardrail multimodal content moderation, supporting audio and video modalities.
 *
 * @description If an API involves fees, add the following bold statement as the first sentence: **Make sure that you fully understand the billing methods and pricing of XXX before you call this operation.** In this statement, "pricing" is a hyperlink that points to: https://www.aliyun.com/price/product#/ecs/detail.
 *
 * @param request MultiModalGuardAsyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardAsyncResultResponse
 */
MultiModalGuardAsyncResultResponse Client::multiModalGuardAsyncResultWithOptions(const MultiModalGuardAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MultiModalGuardAsyncResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalGuardAsyncResultResponse>();
}

/**
 * @summary Queries the asynchronous results of AI safety guardrail multimodal content moderation, supporting audio and video modalities.
 *
 * @description If an API involves fees, add the following bold statement as the first sentence: **Make sure that you fully understand the billing methods and pricing of XXX before you call this operation.** In this statement, "pricing" is a hyperlink that points to: https://www.aliyun.com/price/product#/ecs/detail.
 *
 * @param request MultiModalGuardAsyncResultRequest
 * @return MultiModalGuardAsyncResultResponse
 */
MultiModalGuardAsyncResultResponse Client::multiModalGuardAsyncResult(const MultiModalGuardAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardAsyncResultWithOptions(request, runtime);
}

/**
 * @summary Performs synchronous multimodal content moderation. Supports base64-encoded image strings.
 *
 * @param request MultiModalGuardForBase64Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardForBase64Response
 */
MultiModalGuardForBase64Response Client::multiModalGuardForBase64WithOptions(const MultiModalGuardForBase64Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  json body = {};
  if (!!request.hasImageBase64Str()) {
    body["ImageBase64Str"] = request.getImageBase64Str();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MultiModalGuardForBase64"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultiModalGuardForBase64Response>();
}

/**
 * @summary Performs synchronous multimodal content moderation. Supports base64-encoded image strings.
 *
 * @param request MultiModalGuardForBase64Request
 * @return MultiModalGuardForBase64Response
 */
MultiModalGuardForBase64Response Client::multiModalGuardForBase64(const MultiModalGuardForBase64Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardForBase64WithOptions(request, runtime);
}

/**
 * @summary Provides a WebSocket-based multimodal detection API for AI safety guardrails. This API supports content compliance detection, sensitive content detection, prompt attack detection, malicious file detection, malicious URL detection, and other comprehensive detection capabilities.
 *
 * @param request MultiModalGuardWsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardWsResponse
 */
MultiModalGuardWsResponse Client::multiModalGuardWsWithOptions(const MultiModalGuardWsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MultiModalGuardWs"},
    {"version" , "2022-03-02"},
    {"protocol" , "wss"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"},
    {"websocketSubProtocol" , "awap"}
  }).get<map<string, string>>());
  MultiModalGuardWsResponse res = MultiModalGuardWsResponse();
  json tmp = callApi(params, req, runtime);
  if (!Darabonba::isNull(tmp.at("webSocketClient"))) {
    res.setWebSocketClient(Client::createWebSocketClient(tmp.at("webSocketClient")));
  }

  return res;
}

/**
 * @summary Provides a WebSocket-based multimodal detection API for AI safety guardrails. This API supports content compliance detection, sensitive content detection, prompt attack detection, malicious file detection, malicious URL detection, and other comprehensive detection capabilities.
 *
 * @param request MultiModalGuardWsRequest
 * @return MultiModalGuardWsResponse
 */
MultiModalGuardWsResponse Client::multiModalGuardWs(const MultiModalGuardWsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardWsWithOptions(request, runtime);
}

/**
 * @summary Multimodal-Asynchronous Detection
 *
 * @description The asynchronous URL moderation service supports two billing methods: pay-as-you-go and resource plan usage.
 * - After you activate the enhanced text moderation service, the default billing method is pay-as-you-go. You are billed daily based on actual usage. No charges apply if you do not invoke the service.
 * - If your moderation volume is large or your moderation needs are relatively stable, purchase a resource plan in advance. Larger resource plans offer greater discounts. You can stack multiple resource plans.
 *
 * @param request MultimodalAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultimodalAsyncModerationResponse
 */
MultimodalAsyncModerationResponse Client::multimodalAsyncModerationWithOptions(const MultimodalAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MultimodalAsyncModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultimodalAsyncModerationResponse>();
}

/**
 * @summary Multimodal-Asynchronous Detection
 *
 * @description The asynchronous URL moderation service supports two billing methods: pay-as-you-go and resource plan usage.
 * - After you activate the enhanced text moderation service, the default billing method is pay-as-you-go. You are billed daily based on actual usage. No charges apply if you do not invoke the service.
 * - If your moderation volume is large or your moderation needs are relatively stable, purchase a resource plan in advance. Larger resource plans offer greater discounts. You can stack multiple resource plans.
 *
 * @param request MultimodalAsyncModerationRequest
 * @return MultimodalAsyncModerationResponse
 */
MultimodalAsyncModerationResponse Client::multimodalAsyncModeration(const MultimodalAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multimodalAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary This service uses dynamic policies and models to defend against adversarial content. It provides moderation services for various business scenarios and detects different types of violations.
 *
 * @description Before you use this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) for Text Moderation Plus.
 *
 * @param request TextModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextModerationResponse
 */
TextModerationResponse Client::textModerationWithOptions(const TextModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TextModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TextModerationResponse>();
}

/**
 * @summary This service uses dynamic policies and models to defend against adversarial content. It provides moderation services for various business scenarios and detects different types of violations.
 *
 * @description Before you use this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) for Text Moderation Plus.
 *
 * @param request TextModerationRequest
 * @return TextModerationResponse
 */
TextModerationResponse Client::textModeration(const TextModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return textModerationWithOptions(request, runtime);
}

/**
 * @summary Text Moderation Plus is an upgraded service that moderates the input instructions and generated text of large language models (LLMs). This service can retrieve standard answers for specific input instructions and lets you enable or disable moderation labels.
 *
 * @description Before you use this API, [activate AI Guardrails Pro](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) for Text Moderation Plus.
 *
 * @param request TextModerationPlusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextModerationPlusResponse
 */
TextModerationPlusResponse Client::textModerationPlusWithOptions(const TextModerationPlusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TextModerationPlus"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TextModerationPlusResponse>();
}

/**
 * @summary Text Moderation Plus is an upgraded service that moderates the input instructions and generated text of large language models (LLMs). This service can retrieve standard answers for specific input instructions and lets you enable or disable moderation labels.
 *
 * @description Before you use this API, [activate AI Guardrails Pro](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) for Text Moderation Plus.
 *
 * @param request TextModerationPlusRequest
 * @return TextModerationPlusResponse
 */
TextModerationPlusResponse Client::textModerationPlus(const TextModerationPlusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return textModerationPlusWithOptions(request, runtime);
}

/**
 * @summary The URL asynchronous moderation service detects threats such as fraud, pornography, and gambling in URLs to protect the content ecosystem of your platform.
 *
 * @description The URL asynchronous moderation service supports the pay-as-you-go and resource plan billing methods.
 * - After you activate the enhanced edition of Text Moderation, the default billing method is pay-as-you-go. You are charged CNY 30 per 10,000 calls based on your daily usage. No fees are incurred if you do not call the service.
 * - If you have many moderation requests or relatively fixed moderation requirements, we recommend that you purchase resource plans in advance. The larger the resource plan you purchase, the greater the discount you receive. You can purchase and use multiple resource plans.
 *
 * @param request UrlAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UrlAsyncModerationResponse
 */
UrlAsyncModerationResponse Client::urlAsyncModerationWithOptions(const UrlAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UrlAsyncModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UrlAsyncModerationResponse>();
}

/**
 * @summary The URL asynchronous moderation service detects threats such as fraud, pornography, and gambling in URLs to protect the content ecosystem of your platform.
 *
 * @description The URL asynchronous moderation service supports the pay-as-you-go and resource plan billing methods.
 * - After you activate the enhanced edition of Text Moderation, the default billing method is pay-as-you-go. You are charged CNY 30 per 10,000 calls based on your daily usage. No fees are incurred if you do not call the service.
 * - If you have many moderation requests or relatively fixed moderation requirements, we recommend that you purchase resource plans in advance. The larger the resource plan you purchase, the greater the discount you receive. You can purchase and use multiple resource plans.
 *
 * @param request UrlAsyncModerationRequest
 * @return UrlAsyncModerationResponse
 */
UrlAsyncModerationResponse Client::urlAsyncModeration(const UrlAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return urlAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary The enhanced video moderation feature of Content Moderation detects threats and non-compliant content in video files. Use this operation to submit a moderation task.
 *
 * @description Before you call this operation, make sure that you have activated the [enhanced Content Moderation](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) service and understand the [billing methods](https://help.aliyun.com/document_detail/2505807.html) and [pricing](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of the enhanced video moderation feature.
 *
 * @param request VideoModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationResponse
 */
VideoModerationResponse Client::videoModerationWithOptions(const VideoModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VideoModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VideoModerationResponse>();
}

/**
 * @summary The enhanced video moderation feature of Content Moderation detects threats and non-compliant content in video files. Use this operation to submit a moderation task.
 *
 * @description Before you call this operation, make sure that you have activated the [enhanced Content Moderation](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) service and understand the [billing methods](https://help.aliyun.com/document_detail/2505807.html) and [pricing](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of the enhanced video moderation feature.
 *
 * @param request VideoModerationRequest
 * @return VideoModerationResponse
 */
VideoModerationResponse Client::videoModeration(const VideoModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationWithOptions(request, runtime);
}

/**
 * @summary Cancels an ApsaraVideo Live moderation task.
 *
 * @param request VideoModerationCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationCancelResponse
 */
VideoModerationCancelResponse Client::videoModerationCancelWithOptions(const VideoModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VideoModerationCancel"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VideoModerationCancelResponse>();
}

/**
 * @summary Cancels an ApsaraVideo Live moderation task.
 *
 * @param request VideoModerationCancelRequest
 * @return VideoModerationCancelResponse
 */
VideoModerationCancelResponse Client::videoModerationCancel(const VideoModerationCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationCancelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the task result of an enhanced video content moderation node.
 *
 * @description This operation is not billed. Set the polling interval to 30 seconds (query results 30 seconds after submitting the asynchronous moderation task). The maximum query window is 24 hours. After that, results are automatically deleted.
 *
 * @param request VideoModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationResultResponse
 */
VideoModerationResultResponse Client::videoModerationResultWithOptions(const VideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VideoModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VideoModerationResultResponse>();
}

/**
 * @summary Retrieves the task result of an enhanced video content moderation node.
 *
 * @description This operation is not billed. Set the polling interval to 30 seconds (query results 30 seconds after submitting the asynchronous moderation task). The maximum query window is 24 hours. After that, results are automatically deleted.
 *
 * @param request VideoModerationResultRequest
 * @return VideoModerationResultResponse
 */
VideoModerationResultResponse Client::videoModerationResult(const VideoModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationResultWithOptions(request, runtime);
}

/**
 * @summary Submits a task for enhanced voice moderation.
 *
 * @param request VoiceModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationResponse
 */
VoiceModerationResponse Client::voiceModerationWithOptions(const VoiceModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VoiceModeration"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VoiceModerationResponse>();
}

/**
 * @summary Submits a task for enhanced voice moderation.
 *
 * @param request VoiceModerationRequest
 * @return VoiceModerationResponse
 */
VoiceModerationResponse Client::voiceModeration(const VoiceModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return voiceModerationWithOptions(request, runtime);
}

/**
 * @summary This operation cancels an enhanced voice moderation task.
 *
 * @param request VoiceModerationCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationCancelResponse
 */
VoiceModerationCancelResponse Client::voiceModerationCancelWithOptions(const VoiceModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VoiceModerationCancel"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VoiceModerationCancelResponse>();
}

/**
 * @summary This operation cancels an enhanced voice moderation task.
 *
 * @param request VoiceModerationCancelRequest
 * @return VoiceModerationCancelResponse
 */
VoiceModerationCancelResponse Client::voiceModerationCancel(const VoiceModerationCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return voiceModerationCancelWithOptions(request, runtime);
}

/**
 * @summary Retrieve the detection results for enhanced voice moderation.
 *
 * @param request VoiceModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationResultResponse
 */
VoiceModerationResultResponse Client::voiceModerationResultWithOptions(const VoiceModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.getService();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "VoiceModerationResult"},
    {"version" , "2022-03-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VoiceModerationResultResponse>();
}

/**
 * @summary Retrieve the detection results for enhanced voice moderation.
 *
 * @param request VoiceModerationResultRequest
 * @return VoiceModerationResultResponse
 */
VoiceModerationResultResponse Client::voiceModerationResult(const VoiceModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return voiceModerationResultWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Green20220302