#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20260101.hpp>
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
using namespace AlibabaCloud::IntelligentCreation20260101::Models;
namespace AlibabaCloud
{
namespace IntelligentCreation20260101
{

AlibabaCloud::IntelligentCreation20260101::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 检查Turing任务
 *
 * @param request CheckTuringTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTuringTaskResponse
 */
CheckTuringTaskResponse Client::checkTuringTaskWithOptions(const CheckTuringTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckTuringTask"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/aigc-turing/openService/v1/task/checkTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTuringTaskResponse>();
}

/**
 * @summary 检查Turing任务
 *
 * @param request CheckTuringTaskRequest
 * @return CheckTuringTaskResponse
 */
CheckTuringTaskResponse Client::checkTuringTask(const CheckTuringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkTuringTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 任务提交接口
 *
 * @param request SubmitTuringTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTuringTaskResponse
 */
SubmitTuringTaskResponse Client::submitTuringTaskWithOptions(const SubmitTuringTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["duration"] = request.getDuration();
  }

  if (!!request.hasIdempotentKey()) {
    body["idempotentKey"] = request.getIdempotentKey();
  }

  if (!!request.hasImgUrl()) {
    body["imgUrl"] = request.getImgUrl();
  }

  if (!!request.hasResolution()) {
    body["resolution"] = request.getResolution();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitTuringTask"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/yic/aigc-turing/openService/v1/task/submitTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTuringTaskResponse>();
}

/**
 * @summary 任务提交接口
 *
 * @param request SubmitTuringTaskRequest
 * @return SubmitTuringTaskResponse
 */
SubmitTuringTaskResponse Client::submitTuringTask(const SubmitTuringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitTuringTaskWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IntelligentCreation20260101