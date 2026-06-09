#include <darabonba/Core.hpp>
#include <alibabacloud/EduTutor20250707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::EduTutor20250707::Models;
namespace AlibabaCloud
{
namespace EduTutor20250707
{

AlibabaCloud::EduTutor20250707::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("edututor", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary AnswerSSE
 *
 * @param request AnswerSSERequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerSSEResponse
 */
FutureGenerator<AnswerSSEResponse> Client::answerSSEWithSSE(const AnswerSSERequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnswerSSE"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/service/answerSSE")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
      })).get<AnswerSSEResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary AnswerSSE
 *
 * @param request AnswerSSERequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerSSEResponse
 */
AnswerSSEResponse Client::answerSSEWithOptions(const AnswerSSERequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AnswerSSE"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/service/answerSSE")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnswerSSEResponse>();
}

/**
 * @summary AnswerSSE
 *
 * @param request AnswerSSERequest
 * @return AnswerSSEResponse
 */
AnswerSSEResponse Client::answerSSE(const AnswerSSERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return answerSSEWithOptions(request, headers, runtime);
}

/**
 * @summary CutQuestions
 *
 * @param request CutQuestionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CutQuestionsResponse
 */
CutQuestionsResponse Client::cutQuestionsWithOptions(const CutQuestionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasImage()) {
    body["image"] = request.getImage();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CutQuestions"},
    {"version" , "2025-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/service/cutApi")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CutQuestionsResponse>();
}

/**
 * @summary CutQuestions
 *
 * @param request CutQuestionsRequest
 * @return CutQuestionsResponse
 */
CutQuestionsResponse Client::cutQuestions(const CutQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cutQuestionsWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace EduTutor20250707