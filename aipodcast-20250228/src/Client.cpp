#include <darabonba/Core.hpp>
#include <alibabacloud/AIPodcast20250228.hpp>
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
using namespace AlibabaCloud::AIPodcast20250228::Models;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{

AlibabaCloud::AIPodcast20250228::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aipodcast", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary ai播客生成任务结果查询
 *
 * @param request PodcastTaskResultQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PodcastTaskResultQueryResponse
 */
PodcastTaskResultQueryResponse Client::podcastTaskResultQueryWithOptions(const PodcastTaskResultQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PodcastTaskResultQuery"},
    {"version" , "2025-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/podcast/task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PodcastTaskResultQueryResponse>();
}

/**
 * @summary ai播客生成任务结果查询
 *
 * @param request PodcastTaskResultQueryRequest
 * @return PodcastTaskResultQueryResponse
 */
PodcastTaskResultQueryResponse Client::podcastTaskResultQuery(const PodcastTaskResultQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return podcastTaskResultQueryWithOptions(request, headers, runtime);
}

/**
 * @summary ai播客生成任务提交
 *
 * @param tmpReq PodcastTaskSubmitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PodcastTaskSubmitResponse
 */
PodcastTaskSubmitResponse Client::podcastTaskSubmitWithOptions(const PodcastTaskSubmitRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PodcastTaskSubmitShrinkRequest request = PodcastTaskSubmitShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileUrls()) {
    request.setFileUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fileUrls(), "fileUrls", "json"));
  }

  if (!!tmpReq.hasVoices()) {
    request.setVoicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.voices(), "voices", "json"));
  }

  json body = {};
  if (!!request.hasCounts()) {
    body["counts"] = request.counts();
  }

  if (!!request.hasFileUrlsShrink()) {
    body["fileUrls"] = request.fileUrlsShrink();
  }

  if (!!request.hasSourceLang()) {
    body["sourceLang"] = request.sourceLang();
  }

  if (!!request.hasText()) {
    body["text"] = request.text();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.topic();
  }

  if (!!request.hasVoicesShrink()) {
    body["voices"] = request.voicesShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PodcastTaskSubmit"},
    {"version" , "2025-02-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/podcast/task/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PodcastTaskSubmitResponse>();
}

/**
 * @summary ai播客生成任务提交
 *
 * @param request PodcastTaskSubmitRequest
 * @return PodcastTaskSubmitResponse
 */
PodcastTaskSubmitResponse Client::podcastTaskSubmit(const PodcastTaskSubmitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return podcastTaskSubmitWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AIPodcast20250228