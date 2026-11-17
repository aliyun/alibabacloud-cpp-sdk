#include <darabonba/Core.hpp>
#include <alibabacloud/QwenEduAiSuite20261102.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::QwenEduAiSuite20261102::Models;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{

AlibabaCloud::QwenEduAiSuite20261102::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "QwenEduAiSuite";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("qweneduaisuite", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 开通千问教育API权限
 *
 * @description 开通千问教育API权限
 *
 * @param request ActivateQwenEduApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateQwenEduApiResponse
 */
ActivateQwenEduApiResponse Client::activateQwenEduApiWithOptions(const ActivateQwenEduApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateQwenEduApi"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/service/activate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateQwenEduApiResponse>();
}

/**
 * @summary 开通千问教育API权限
 *
 * @description 开通千问教育API权限
 *
 * @param request ActivateQwenEduApiRequest
 * @return ActivateQwenEduApiResponse
 */
ActivateQwenEduApiResponse Client::activateQwenEduApi(const ActivateQwenEduApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activateQwenEduApiWithOptions(request, headers, runtime);
}

/**
 * @summary 提交单页作业图片，返回任务ID及初步检测结果。
 *
 * @description ## 请求说明
 * - 该接口用于提交单页作业图片进行批改，支持通过图片URL或Base64编码的图片数据。
 * - 提交后会立即返回任务ID、矫正图及题目检测结果，但不包含具体的批改结论。
 * - 需要通过查询接口轮询获取最终的批改结果。
 * - 支持对图片进行透视矫正，默认开启。
 * - 图片要求：支持多种格式（JPEG, PNG, GIF等），推荐体积不超过1MB，最大支持15MB（Base64编码后）。
 * - 每次请求仅处理一张图片，多张图片需分别提交。
 * - `request_id`字段建议由调用方生成并传递，以便于问题排查和对账。
 *
 * @param request CreateEduHomeworkCorrectSubmitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduHomeworkCorrectSubmitResponse
 */
CreateEduHomeworkCorrectSubmitResponse Client::createEduHomeworkCorrectSubmitWithOptions(const CreateEduHomeworkCorrectSubmitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDewarp()) {
    body["dewarp"] = request.getDewarp();
  }

  if (!!request.hasImageBase64()) {
    body["imageBase64"] = request.getImageBase64();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduHomeworkCorrectSubmit"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/homework/correct/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEduHomeworkCorrectSubmitResponse>();
}

/**
 * @summary 提交单页作业图片，返回任务ID及初步检测结果。
 *
 * @description ## 请求说明
 * - 该接口用于提交单页作业图片进行批改，支持通过图片URL或Base64编码的图片数据。
 * - 提交后会立即返回任务ID、矫正图及题目检测结果，但不包含具体的批改结论。
 * - 需要通过查询接口轮询获取最终的批改结果。
 * - 支持对图片进行透视矫正，默认开启。
 * - 图片要求：支持多种格式（JPEG, PNG, GIF等），推荐体积不超过1MB，最大支持15MB（Base64编码后）。
 * - 每次请求仅处理一张图片，多张图片需分别提交。
 * - `request_id`字段建议由调用方生成并传递，以便于问题排查和对账。
 *
 * @param request CreateEduHomeworkCorrectSubmitRequest
 * @return CreateEduHomeworkCorrectSubmitResponse
 */
CreateEduHomeworkCorrectSubmitResponse Client::createEduHomeworkCorrectSubmit(const CreateEduHomeworkCorrectSubmitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEduHomeworkCorrectSubmitWithOptions(request, headers, runtime);
}

/**
 * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
 *
 * @description ## 请求说明
 * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
 * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
 * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
 * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
 * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
 * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
 * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
 * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
 *
 * @param tmpReq CreateEduProblemSolveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduProblemSolveResponse
 */
FutureGenerator<CreateEduProblemSolveResponse> Client::createEduProblemSolveWithSSE(const CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEduProblemSolveShrinkRequest request = CreateEduProblemSolveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "query", "json"));
  }

  json body = {};
  if (!!request.hasQueryShrink()) {
    body["query"] = request.getQueryShrink();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduProblemSolve"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/problem/solve/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
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
      })).get<CreateEduProblemSolveResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
 *
 * @description ## 请求说明
 * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
 * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
 * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
 * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
 * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
 * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
 * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
 * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
 *
 * @param tmpReq CreateEduProblemSolveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduProblemSolveResponse
 */
CreateEduProblemSolveResponse Client::createEduProblemSolveWithOptions(const CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEduProblemSolveShrinkRequest request = CreateEduProblemSolveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "query", "json"));
  }

  json body = {};
  if (!!request.hasQueryShrink()) {
    body["query"] = request.getQueryShrink();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduProblemSolve"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/problem/solve/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEduProblemSolveResponse>();
}

/**
 * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
 *
 * @description ## 请求说明
 * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
 * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
 * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
 * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
 * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
 * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
 * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
 * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
 *
 * @param request CreateEduProblemSolveRequest
 * @return CreateEduProblemSolveResponse
 */
CreateEduProblemSolveResponse Client::createEduProblemSolve(const CreateEduProblemSolveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEduProblemSolveWithOptions(request, headers, runtime);
}

/**
 * @summary 查询批改进度、增量结果、终态结果及 Token 用量
 *
 * @param request GetEduHomeworkCorrectionResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEduHomeworkCorrectionResultResponse
 */
GetEduHomeworkCorrectionResultResponse Client::getEduHomeworkCorrectionResultWithOptions(const GetEduHomeworkCorrectionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEduHomeworkCorrectionResult"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/homework/correct/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEduHomeworkCorrectionResultResponse>();
}

/**
 * @summary 查询批改进度、增量结果、终态结果及 Token 用量
 *
 * @param request GetEduHomeworkCorrectionResultRequest
 * @return GetEduHomeworkCorrectionResultResponse
 */
GetEduHomeworkCorrectionResultResponse Client::getEduHomeworkCorrectionResult(const GetEduHomeworkCorrectionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEduHomeworkCorrectionResultWithOptions(request, headers, runtime);
}

/**
 * @summary 千问教育API开通状态查询
 *
 * @param request GetQwenEduApiActivationStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQwenEduApiActivationStatusResponse
 */
GetQwenEduApiActivationStatusResponse Client::getQwenEduApiActivationStatusWithOptions(const GetQwenEduApiActivationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQwenEduApiActivationStatus"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/service/activation/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQwenEduApiActivationStatusResponse>();
}

/**
 * @summary 千问教育API开通状态查询
 *
 * @param request GetQwenEduApiActivationStatusRequest
 * @return GetQwenEduApiActivationStatusResponse
 */
GetQwenEduApiActivationStatusResponse Client::getQwenEduApiActivationStatus(const GetQwenEduApiActivationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQwenEduApiActivationStatusWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102