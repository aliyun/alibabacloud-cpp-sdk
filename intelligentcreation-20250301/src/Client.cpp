#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20250301.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::IntelligentCreation20250301::Models;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{

AlibabaCloud::IntelligentCreation20250301::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("intelligentcreation", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建模型标注任务
 *
 * @param request CreateLabelTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLabelTaskResponse
 */
CreateLabelTaskResponse Client::createLabelTaskWithOptions(const CreateLabelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasIdempotentId()) {
    body["IdempotentId"] = request.getIdempotentId();
  }

  if (!!request.hasLabelTemplateId()) {
    body["LabelTemplateId"] = request.getLabelTemplateId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLabelTask"},
    {"version" , "2025-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tongjian/yic-tongjian/openService/v2/aitag/createLabelTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLabelTaskResponse>();
}

/**
 * @summary 创建模型标注任务
 *
 * @param request CreateLabelTaskRequest
 * @return CreateLabelTaskResponse
 */
CreateLabelTaskResponse Client::createLabelTask(const CreateLabelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLabelTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建OSS上传token
 *
 * @param request CreateOssUploadTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOssUploadTokenResponse
 */
CreateOssUploadTokenResponse Client::createOssUploadTokenWithOptions(const CreateOssUploadTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOssUploadToken"},
    {"version" , "2025-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tongjian/yic-tongjian/openService/v2/base/createOssUploadToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOssUploadTokenResponse>();
}

/**
 * @summary 创建OSS上传token
 *
 * @param request CreateOssUploadTokenRequest
 * @return CreateOssUploadTokenResponse
 */
CreateOssUploadTokenResponse Client::createOssUploadToken(const CreateOssUploadTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOssUploadTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 单条文本标注
 *
 * @param request CreateTextLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTextLabelResponse
 */
CreateTextLabelResponse Client::createTextLabelWithOptions(const CreateTextLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasLabelTemplateId()) {
    body["LabelTemplateId"] = request.getLabelTemplateId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTextLabel"},
    {"version" , "2025-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tongjian/yic-tongjian/openService/v2/aitag/createTextLabel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTextLabelResponse>();
}

/**
 * @summary 单条文本标注
 *
 * @param request CreateTextLabelRequest
 * @return CreateTextLabelResponse
 */
CreateTextLabelResponse Client::createTextLabel(const CreateTextLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTextLabelWithOptions(request, headers, runtime);
}

/**
 * @summary 查询模型标注任务
 *
 * @param request GetLabelTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLabelTaskResultResponse
 */
GetLabelTaskResultResponse Client::getLabelTaskResultWithOptions(const GetLabelTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLabelTaskResult"},
    {"version" , "2025-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tongjian/yic-tongjian/openService/v2/aitag/getLabelTaskResult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLabelTaskResultResponse>();
}

/**
 * @summary 查询模型标注任务
 *
 * @param request GetLabelTaskResultRequest
 * @return GetLabelTaskResultResponse
 */
GetLabelTaskResultResponse Client::getLabelTaskResult(const GetLabelTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLabelTaskResultWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301