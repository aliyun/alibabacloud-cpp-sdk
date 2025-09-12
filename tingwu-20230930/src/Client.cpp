#include <darabonba/Core.hpp>
#include <alibabacloud/Tingwu20230930.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Tingwu20230930::Models;
namespace AlibabaCloud
{
namespace Tingwu20230930
{

AlibabaCloud::Tingwu20230930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("tingwu", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建听悟任务
 *
 * @param request CreateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperation()) {
    query["operation"] = request.operation();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.appKey();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.input();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/tasks")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建听悟任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建热词词表
 *
 * @param request CreateTranscriptionPhrasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTranscriptionPhrasesResponse
 */
CreateTranscriptionPhrasesResponse Client::createTranscriptionPhrasesWithOptions(const CreateTranscriptionPhrasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasWordWeights()) {
    body["WordWeights"] = request.wordWeights();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTranscriptionPhrasesResponse>();
}

/**
 * @summary 创建热词词表
 *
 * @param request CreateTranscriptionPhrasesRequest
 * @return CreateTranscriptionPhrasesResponse
 */
CreateTranscriptionPhrasesResponse Client::createTranscriptionPhrases(const CreateTranscriptionPhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTranscriptionPhrasesWithOptions(request, headers, runtime);
}

/**
 * @summary 删除词表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTranscriptionPhrasesResponse
 */
DeleteTranscriptionPhrasesResponse Client::deleteTranscriptionPhrasesWithOptions(const string &PhraseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Http::URL::percentEncode(PhraseId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTranscriptionPhrasesResponse>();
}

/**
 * @summary 删除词表
 *
 * @return DeleteTranscriptionPhrasesResponse
 */
DeleteTranscriptionPhrasesResponse Client::deleteTranscriptionPhrases(const string &PhraseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTranscriptionPhrasesWithOptions(PhraseId, headers, runtime);
}

/**
 * @summary 查询听悟任务信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskInfoResponse
 */
GetTaskInfoResponse Client::getTaskInfoWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskInfo"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/tasks/" , Darabonba::Http::URL::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskInfoResponse>();
}

/**
 * @summary 查询听悟任务信息
 *
 * @return GetTaskInfoResponse
 */
GetTaskInfoResponse Client::getTaskInfo(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskInfoWithOptions(TaskId, headers, runtime);
}

/**
 * @summary 查询热词词表信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscriptionPhrasesResponse
 */
GetTranscriptionPhrasesResponse Client::getTranscriptionPhrasesWithOptions(const string &PhraseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Http::URL::percentEncode(PhraseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscriptionPhrasesResponse>();
}

/**
 * @summary 查询热词词表信息
 *
 * @return GetTranscriptionPhrasesResponse
 */
GetTranscriptionPhrasesResponse Client::getTranscriptionPhrases(const string &PhraseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTranscriptionPhrasesWithOptions(PhraseId, headers, runtime);
}

/**
 * @summary 列举用户所有热词词表信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscriptionPhrasesResponse
 */
ListTranscriptionPhrasesResponse Client::listTranscriptionPhrasesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTranscriptionPhrasesResponse>();
}

/**
 * @summary 列举用户所有热词词表信息
 *
 * @return ListTranscriptionPhrasesResponse
 */
ListTranscriptionPhrasesResponse Client::listTranscriptionPhrases() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTranscriptionPhrasesWithOptions(headers, runtime);
}

/**
 * @summary 更新热词词表
 *
 * @param request UpdateTranscriptionPhrasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTranscriptionPhrasesResponse
 */
UpdateTranscriptionPhrasesResponse Client::updateTranscriptionPhrasesWithOptions(const string &PhraseId, const UpdateTranscriptionPhrasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasWordWeights()) {
    body["WordWeights"] = request.wordWeights();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Http::URL::percentEncode(PhraseId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTranscriptionPhrasesResponse>();
}

/**
 * @summary 更新热词词表
 *
 * @param request UpdateTranscriptionPhrasesRequest
 * @return UpdateTranscriptionPhrasesResponse
 */
UpdateTranscriptionPhrasesResponse Client::updateTranscriptionPhrases(const string &PhraseId, const UpdateTranscriptionPhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTranscriptionPhrasesWithOptions(PhraseId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Tingwu20230930