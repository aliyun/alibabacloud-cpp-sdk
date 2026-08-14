#include <darabonba/Core.hpp>
#include <alibabacloud/Tingwu20230930.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "tingwu.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Create offline transcription and real-time meeting tasks in Tingwu.
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
    query["operation"] = request.getOperation();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasInput()) {
    body["Input"] = request.getInput();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
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
 * @summary Create offline transcription and real-time meeting tasks in Tingwu.
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
 * @summary Creates a custom vocabulary of transcription phrases.
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
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasWordWeights()) {
    body["WordWeights"] = request.getWordWeights();
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
 * @summary Creates a custom vocabulary of transcription phrases.
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
 * @summary Deletes phrase tables.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Encode::Encoder::percentEncode(PhraseId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTranscriptionPhrasesResponse>();
}

/**
 * @summary Deletes phrase tables.
 *
 * @return DeleteTranscriptionPhrasesResponse
 */
DeleteTranscriptionPhrasesResponse Client::deleteTranscriptionPhrases(const string &PhraseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTranscriptionPhrasesWithOptions(PhraseId, headers, runtime);
}

/**
 * @summary Query the job status and job result.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskInfoResponse>();
}

/**
 * @summary Query the job status and job result.
 *
 * @return GetTaskInfoResponse
 */
GetTaskInfoResponse Client::getTaskInfo(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskInfoWithOptions(TaskId, headers, runtime);
}

/**
 * @summary Queries information about hotword lists.
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
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Encode::Encoder::percentEncode(PhraseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscriptionPhrasesResponse>();
}

/**
 * @summary Queries information about hotword lists.
 *
 * @return GetTranscriptionPhrasesResponse
 */
GetTranscriptionPhrasesResponse Client::getTranscriptionPhrases(const string &PhraseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTranscriptionPhrasesWithOptions(PhraseId, headers, runtime);
}

/**
 * @summary Lists all of a user\\"s hot phrase lists.
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
 * @summary Lists all of a user\\"s hot phrase lists.
 *
 * @return ListTranscriptionPhrasesResponse
 */
ListTranscriptionPhrasesResponse Client::listTranscriptionPhrases() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTranscriptionPhrasesWithOptions(headers, runtime);
}

/**
 * @summary Update a hotword list.
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
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasWordWeights()) {
    body["WordWeights"] = request.getWordWeights();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTranscriptionPhrases"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/tingwu/v2/resources/phrases/" , Darabonba::Encode::Encoder::percentEncode(PhraseId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTranscriptionPhrasesResponse>();
}

/**
 * @summary Update a hotword list.
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