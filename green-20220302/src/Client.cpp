#include <darabonba/Core.hpp>
#include <alibabacloud/Green20220302.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Green20220302::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
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
    {"cn-north-2-gov-1" , "green.aliyuncs.com"}
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
 * @summary 文档审核结果
 *
 * @param request DescribeFileModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileModerationResultResponse
 */
DescribeFileModerationResultResponse Client::describeFileModerationResultWithOptions(const DescribeFileModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 文档审核结果
 *
 * @param request DescribeFileModerationResultRequest
 * @return DescribeFileModerationResultResponse
 */
DescribeFileModerationResultResponse Client::describeFileModerationResult(const DescribeFileModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileModerationResultWithOptions(request, runtime);
}

/**
 * @summary Obtains the moderation results of an Image Moderation 2.0 task.
 *
 * @description *   Billing: This operation is free of charge.
 * *   QPS limit: You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeImageModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageModerationResultResponse
 */
DescribeImageModerationResultResponse Client::describeImageModerationResultWithOptions(const DescribeImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
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
 * @summary Obtains the moderation results of an Image Moderation 2.0 task.
 *
 * @description *   Billing: This operation is free of charge.
 * *   QPS limit: You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeImageModerationResultRequest
 * @return DescribeImageModerationResultResponse
 */
DescribeImageModerationResultResponse Client::describeImageModerationResult(const DescribeImageModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageModerationResultWithOptions(request, runtime);
}

/**
 * @summary 查询检测结果辅助信息
 *
 * @param request DescribeImageResultExtRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImageResultExtResponse
 */
DescribeImageResultExtResponse Client::describeImageResultExtWithOptions(const DescribeImageResultExtRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInfoType()) {
    body["InfoType"] = request.infoType();
  }

  if (!!request.hasReqId()) {
    body["ReqId"] = request.reqId();
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
 * @summary 查询检测结果辅助信息
 *
 * @param request DescribeImageResultExtRequest
 * @return DescribeImageResultExtResponse
 */
DescribeImageResultExtResponse Client::describeImageResultExt(const DescribeImageResultExtRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImageResultExtWithOptions(request, runtime);
}

/**
 * @summary 查询异步多模态检测结果
 *
 * @param request DescribeMultimodalModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultimodalModerationResultResponse
 */
DescribeMultimodalModerationResultResponse Client::describeMultimodalModerationResultWithOptions(const DescribeMultimodalModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
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
 * @summary 查询异步多模态检测结果
 *
 * @param request DescribeMultimodalModerationResultRequest
 * @return DescribeMultimodalModerationResultResponse
 */
DescribeMultimodalModerationResultResponse Client::describeMultimodalModerationResult(const DescribeMultimodalModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultimodalModerationResultWithOptions(request, runtime);
}

/**
 * @summary 查询上传token
 *
 * @param request DescribeUploadTokenRequest
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
 * @summary 查询上传token
 *
 * @return DescribeUploadTokenResponse
 */
DescribeUploadTokenResponse Client::describeUploadToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUploadTokenWithOptions(runtime);
}

/**
 * @summary Queries the moderation results based on the ReqId returned by asynchronous URL moderation.
 *
 * @description *   Billing: This operation is free of charge.
 * *   Query timeout: We recommend that you query moderation results at least 480 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for up to 3 days. After 3 days, the results are deleted.
 * *   You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUrlModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUrlModerationResultResponse
 */
DescribeUrlModerationResultResponse Client::describeUrlModerationResultWithOptions(const DescribeUrlModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReqId()) {
    body["ReqId"] = request.reqId();
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
 * @summary Queries the moderation results based on the ReqId returned by asynchronous URL moderation.
 *
 * @description *   Billing: This operation is free of charge.
 * *   Query timeout: We recommend that you query moderation results at least 480 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for up to 3 days. After 3 days, the results are deleted.
 * *   You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUrlModerationResultRequest
 * @return DescribeUrlModerationResultResponse
 */
DescribeUrlModerationResultResponse Client::describeUrlModerationResult(const DescribeUrlModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUrlModerationResultWithOptions(request, runtime);
}

/**
 * @summary 文档审核
 *
 * @param request FileModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileModerationResponse
 */
FileModerationResponse Client::fileModerationWithOptions(const FileModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 文档审核
 *
 * @param request FileModerationRequest
 * @return FileModerationResponse
 */
FileModerationResponse Client::fileModeration(const FileModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fileModerationWithOptions(request, runtime);
}

/**
 * @summary 图片异步检测
 *
 * @param request ImageAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageAsyncModerationResponse
 */
ImageAsyncModerationResponse Client::imageAsyncModerationWithOptions(const ImageAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.serviceParameters();
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
 * @summary 图片异步检测
 *
 * @param request ImageAsyncModerationRequest
 * @return ImageAsyncModerationResponse
 */
ImageAsyncModerationResponse Client::imageAsyncModeration(const ImageAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary 图片批量调用
 *
 * @param request ImageBatchModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageBatchModerationResponse
 */
ImageBatchModerationResponse Client::imageBatchModerationWithOptions(const ImageBatchModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.serviceParameters();
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
 * @summary 图片批量调用
 *
 * @param request ImageBatchModerationRequest
 * @return ImageBatchModerationResponse
 */
ImageBatchModerationResponse Client::imageBatchModeration(const ImageBatchModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imageBatchModerationWithOptions(request, runtime);
}

/**
 * @summary Identifies whether an image contains content or elements that violate relevant regulations on network content dissemination, affect the content order of a specific platform, or affect user experience. Image Moderation 2.0 supports over 90 content risk labels and over 100 risk control items. Image Moderation 2.0 of Content Moderation allows you to develop further moderation or governance measures for specific image content based on business scenarios, platform-specific content governance rules, or rich risk labels and scores of confidence levels returned by API calls.
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/467826.html)[](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of Image Moderation 2.0.
 *
 * @param request ImageModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImageModerationResponse
 */
ImageModerationResponse Client::imageModerationWithOptions(const ImageModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Identifies whether an image contains content or elements that violate relevant regulations on network content dissemination, affect the content order of a specific platform, or affect user experience. Image Moderation 2.0 supports over 90 content risk labels and over 100 risk control items. Image Moderation 2.0 of Content Moderation allows you to develop further moderation or governance measures for specific image content based on business scenarios, platform-specific content governance rules, or rich risk labels and scores of confidence levels returned by API calls.
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/467826.html)[](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of Image Moderation 2.0.
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
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Content Security Manual Review Result Callback Interface
 *
 * @param request ManualCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualCallbackResponse
 */
ManualCallbackResponse Client::manualCallbackWithOptions(const ManualCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["Channel"] = request.channel();
  }

  if (!!request.hasChecksum()) {
    body["Checksum"] = request.checksum();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.code();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasMsg()) {
    body["Msg"] = request.msg();
  }

  if (!!request.hasReqId()) {
    body["ReqId"] = request.reqId();
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
 * @summary Content Security Manual Review Result Callback Interface
 *
 * @param request ManualCallbackRequest
 * @return ManualCallbackResponse
 */
ManualCallbackResponse Client::manualCallback(const ManualCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualCallbackWithOptions(request, runtime);
}

/**
 * @summary Content Security Manual Review Request Interface
 *
 * @param request ManualModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualModerationResponse
 */
ManualModerationResponse Client::manualModerationWithOptions(const ManualModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Content Security Manual Review Request Interface
 *
 * @param request ManualModerationRequest
 * @return ManualModerationResponse
 */
ManualModerationResponse Client::manualModeration(const ManualModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualModerationWithOptions(request, runtime);
}

/**
 * @summary Retrieve manual review results
 *
 * @param request ManualModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManualModerationResultResponse
 */
ManualModerationResultResponse Client::manualModerationResultWithOptions(const ManualModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Retrieve manual review results
 *
 * @param request ManualModerationResultRequest
 * @return ManualModerationResultResponse
 */
ManualModerationResultResponse Client::manualModerationResult(const ManualModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manualModerationResultWithOptions(request, runtime);
}

/**
 * @summary 同步检测接口
 *
 * @param request MultiModalGuardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultiModalGuardResponse
 */
MultiModalGuardResponse Client::multiModalGuardWithOptions(const MultiModalGuardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 同步检测接口
 *
 * @param request MultiModalGuardRequest
 * @return MultiModalGuardResponse
 */
MultiModalGuardResponse Client::multiModalGuard(const MultiModalGuardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multiModalGuardWithOptions(request, runtime);
}

/**
 * @summary 多模态-异步检测
 *
 * @param request MultimodalAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultimodalAsyncModerationResponse
 */
MultimodalAsyncModerationResponse Client::multimodalAsyncModerationWithOptions(const MultimodalAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.serviceParameters();
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
 * @summary 多模态-异步检测
 *
 * @param request MultimodalAsyncModerationRequest
 * @return MultimodalAsyncModerationResponse
 */
MultimodalAsyncModerationResponse Client::multimodalAsyncModeration(const MultimodalAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return multimodalAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary Provides moderation services for multiple business scenarios and identifies various violation risks.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) of Text Moderation 2.0.
 *
 * @param request TextModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextModerationResponse
 */
TextModerationResponse Client::textModerationWithOptions(const TextModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Provides moderation services for multiple business scenarios and identifies various violation risks.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) of Text Moderation 2.0.
 *
 * @param request TextModerationRequest
 * @return TextModerationResponse
 */
TextModerationResponse Client::textModeration(const TextModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return textModerationWithOptions(request, runtime);
}

/**
 * @summary Moderates the input command and generated text of large language models (LLMs). Specific model input commands can be used to retrieve standard answers. The feature of enabling and disabling the moderation labels is also available.
 *
 * @description Before you call this operation, make sure that you have [activated the Content Moderation 2.0 service](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and are familiar with the [billing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) of the Text Moderation 2.0 Plus service.
 *
 * @param request TextModerationPlusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextModerationPlusResponse
 */
TextModerationPlusResponse Client::textModerationPlusWithOptions(const TextModerationPlusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Moderates the input command and generated text of large language models (LLMs). Specific model input commands can be used to retrieve standard answers. The feature of enabling and disabling the moderation labels is also available.
 *
 * @description Before you call this operation, make sure that you have [activated the Content Moderation 2.0 service](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and are familiar with the [billing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) of the Text Moderation 2.0 Plus service.
 *
 * @param request TextModerationPlusRequest
 * @return TextModerationPlusResponse
 */
TextModerationPlusResponse Client::textModerationPlus(const TextModerationPlusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return textModerationPlusWithOptions(request, runtime);
}

/**
 * @summary url异步检测
 *
 * @param request UrlAsyncModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UrlAsyncModerationResponse
 */
UrlAsyncModerationResponse Client::urlAsyncModerationWithOptions(const UrlAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    query["ServiceParameters"] = request.serviceParameters();
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
 * @summary url异步检测
 *
 * @param request UrlAsyncModerationRequest
 * @return UrlAsyncModerationResponse
 */
UrlAsyncModerationResponse Client::urlAsyncModeration(const UrlAsyncModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return urlAsyncModerationWithOptions(request, runtime);
}

/**
 * @summary 视频检测任务提交
 *
 * @param request VideoModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationResponse
 */
VideoModerationResponse Client::videoModerationWithOptions(const VideoModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 视频检测任务提交
 *
 * @param request VideoModerationRequest
 * @return VideoModerationResponse
 */
VideoModerationResponse Client::videoModeration(const VideoModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationWithOptions(request, runtime);
}

/**
 * @summary 取消视频直播流检测
 *
 * @param request VideoModerationCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationCancelResponse
 */
VideoModerationCancelResponse Client::videoModerationCancelWithOptions(const VideoModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 取消视频直播流检测
 *
 * @param request VideoModerationCancelRequest
 * @return VideoModerationCancelResponse
 */
VideoModerationCancelResponse Client::videoModerationCancel(const VideoModerationCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationCancelWithOptions(request, runtime);
}

/**
 * @summary Get Video Detection Results
 *
 * @description This operation is free of charge. We recommend that you query moderation results at least 30 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for at most 24 hours. After 24 hours, the results are deleted.
 *
 * @param request VideoModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoModerationResultResponse
 */
VideoModerationResultResponse Client::videoModerationResultWithOptions(const VideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Get Video Detection Results
 *
 * @description This operation is free of charge. We recommend that you query moderation results at least 30 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for at most 24 hours. After 24 hours, the results are deleted.
 *
 * @param request VideoModerationResultRequest
 * @return VideoModerationResultResponse
 */
VideoModerationResultResponse Client::videoModerationResult(const VideoModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return videoModerationResultWithOptions(request, runtime);
}

/**
 * @summary 语音审核
 *
 * @param request VoiceModerationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationResponse
 */
VoiceModerationResponse Client::voiceModerationWithOptions(const VoiceModerationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 语音审核
 *
 * @param request VoiceModerationRequest
 * @return VoiceModerationResponse
 */
VoiceModerationResponse Client::voiceModeration(const VoiceModerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return voiceModerationWithOptions(request, runtime);
}

/**
 * @summary 取消检测
 *
 * @param request VoiceModerationCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationCancelResponse
 */
VoiceModerationCancelResponse Client::voiceModerationCancelWithOptions(const VoiceModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary 取消检测
 *
 * @param request VoiceModerationCancelRequest
 * @return VoiceModerationCancelResponse
 */
VoiceModerationCancelResponse Client::voiceModerationCancel(const VoiceModerationCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return voiceModerationCancelWithOptions(request, runtime);
}

/**
 * @summary Obtains the moderation results of a Voice Moderation 2.0 task.
 *
 * @param request VoiceModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VoiceModerationResultResponse
 */
VoiceModerationResultResponse Client::voiceModerationResultWithOptions(const VoiceModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasService()) {
    body["Service"] = request.service();
  }

  if (!!request.hasServiceParameters()) {
    body["ServiceParameters"] = request.serviceParameters();
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
 * @summary Obtains the moderation results of a Voice Moderation 2.0 task.
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