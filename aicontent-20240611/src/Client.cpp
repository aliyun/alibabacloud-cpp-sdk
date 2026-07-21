#include <darabonba/Core.hpp>
#include <alibabacloud/AiContent20240611.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AiContent20240611::Models;
namespace AlibabaCloud
{
namespace AiContent20240611
{

AlibabaCloud::AiContent20240611::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"public" , "aicontent.aliyuncs.com"},
    {"cn-shanghai" , "aicontent.aliyuncs.com"},
    {"cn-hangzhou" , "aicontent.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "aicontent.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("aicontent", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Generate Q&A pairs to expand data.
 *
 * @param request AITeacherExpansionPracticeTaskGenerateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AITeacherExpansionPracticeTaskGenerateResponse
 */
AITeacherExpansionPracticeTaskGenerateResponse Client::aITeacherExpansionPracticeTaskGenerateWithOptions(const AITeacherExpansionPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasKeySentences()) {
    body["keySentences"] = request.getKeySentences();
  }

  if (!!request.hasKeyWords()) {
    body["keyWords"] = request.getKeyWords();
  }

  if (!!request.hasLearningObject()) {
    body["learningObject"] = request.getLearningObject();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  if (!!request.hasTextbook()) {
    body["textbook"] = request.getTextbook();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AITeacherExpansionPracticeTaskGenerate"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/expansionPractice/generateTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AITeacherExpansionPracticeTaskGenerateResponse>();
}

/**
 * @summary Generate Q&A pairs to expand data.
 *
 * @param request AITeacherExpansionPracticeTaskGenerateRequest
 * @return AITeacherExpansionPracticeTaskGenerateResponse
 */
AITeacherExpansionPracticeTaskGenerateResponse Client::aITeacherExpansionPracticeTaskGenerate(const AITeacherExpansionPracticeTaskGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aITeacherExpansionPracticeTaskGenerateWithOptions(request, headers, runtime);
}

/**
 * @summary Synchronous basic practice is primarily for dialogue tasks with a ground truth. Although this mode allows some deviation from the ground truth, the AI strictly requires users to follow it.
 *
 * @param request AITeacherSyncPracticeTaskGenerateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AITeacherSyncPracticeTaskGenerateResponse
 */
AITeacherSyncPracticeTaskGenerateResponse Client::aITeacherSyncPracticeTaskGenerateWithOptions(const AITeacherSyncPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasKeySentences()) {
    body["keySentences"] = request.getKeySentences();
  }

  if (!!request.hasKeyWords()) {
    body["keyWords"] = request.getKeyWords();
  }

  if (!!request.hasLearningObject()) {
    body["learningObject"] = request.getLearningObject();
  }

  if (!!request.hasTextContent()) {
    body["textContent"] = request.getTextContent();
  }

  if (!!request.hasTextbook()) {
    body["textbook"] = request.getTextbook();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AITeacherSyncPracticeTaskGenerate"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/syncPractice/generateTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AITeacherSyncPracticeTaskGenerateResponse>();
}

/**
 * @summary Synchronous basic practice is primarily for dialogue tasks with a ground truth. Although this mode allows some deviation from the ground truth, the AI strictly requires users to follow it.
 *
 * @param request AITeacherSyncPracticeTaskGenerateRequest
 * @return AITeacherSyncPracticeTaskGenerateResponse
 */
AITeacherSyncPracticeTaskGenerateResponse Client::aITeacherSyncPracticeTaskGenerate(const AITeacherSyncPracticeTaskGenerateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aITeacherSyncPracticeTaskGenerateWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the services available on the Alibaba Cloud Console.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
 */
AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AliyunConsoleOpenApiQueryAliyunConsoleServcieList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunconsole/queryAliyunConsoleServcieList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse>();
}

/**
 * @summary Lists the services available on the Alibaba Cloud Console.
 *
 * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
 */
AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(headers, runtime);
}

/**
 * @summary Lists the services available in the Alibaba Cloud console.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
 */
AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AliyunConsoleOpenApiQueryAliyunConsoleServiceList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryAliyunConsoleServiceList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse>();
}

/**
 * @summary Lists the services available in the Alibaba Cloud console.
 *
 * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
 */
AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(headers, runtime);
}

/**
 * @summary Alibaba Cloud Management Console / List purchased resources
 *
 * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AliyunConsoleOpenApiQueryPaidResourceResponse
 */
AliyunConsoleOpenApiQueryPaidResourceResponse Client::aliyunConsoleOpenApiQueryPaidResourceWithOptions(const AliyunConsoleOpenApiQueryPaidResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AliyunConsoleOpenApiQueryPaidResource"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryPaidResource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AliyunConsoleOpenApiQueryPaidResourceResponse>();
}

/**
 * @summary Alibaba Cloud Management Console / List purchased resources
 *
 * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
 * @return AliyunConsoleOpenApiQueryPaidResourceResponse
 */
AliyunConsoleOpenApiQueryPaidResourceResponse Client::aliyunConsoleOpenApiQueryPaidResource(const AliyunConsoleOpenApiQueryPaidResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aliyunConsoleOpenApiQueryPaidResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Intelligent Correction / Oral Evaluation / Statistics / call volume
 *
 * @param request CountOralEvaluationStatisticsCallsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountOralEvaluationStatisticsCallsResponse
 */
CountOralEvaluationStatisticsCallsResponse Client::countOralEvaluationStatisticsCallsWithOptions(const CountOralEvaluationStatisticsCallsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CountOralEvaluationStatisticsCalls"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/countOralEvaluationStatisticsCalls")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountOralEvaluationStatisticsCallsResponse>();
}

/**
 * @summary Intelligent Correction / Oral Evaluation / Statistics / call volume
 *
 * @param request CountOralEvaluationStatisticsCallsRequest
 * @return CountOralEvaluationStatisticsCallsResponse
 */
CountOralEvaluationStatisticsCallsResponse Client::countOralEvaluationStatisticsCalls(const CountOralEvaluationStatisticsCallsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return countOralEvaluationStatisticsCallsWithOptions(request, headers, runtime);
}

/**
 * @summary Intelligent grading / oral evaluation / statistics / concurrency
 *
 * @param request CountOralEvaluationStatisticsConcurrentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountOralEvaluationStatisticsConcurrentResponse
 */
CountOralEvaluationStatisticsConcurrentResponse Client::countOralEvaluationStatisticsConcurrentWithOptions(const CountOralEvaluationStatisticsConcurrentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CountOralEvaluationStatisticsConcurrent"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/countOralEvaluationStatisticsConcurrent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountOralEvaluationStatisticsConcurrentResponse>();
}

/**
 * @summary Intelligent grading / oral evaluation / statistics / concurrency
 *
 * @param request CountOralEvaluationStatisticsConcurrentRequest
 * @return CountOralEvaluationStatisticsConcurrentResponse
 */
CountOralEvaluationStatisticsConcurrentResponse Client::countOralEvaluationStatisticsConcurrent(const CountOralEvaluationStatisticsConcurrentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return countOralEvaluationStatisticsConcurrentWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves statistics about API call errors for the oral evaluation service.
 *
 * @param request CountOralEvaluationStatisticsErrorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountOralEvaluationStatisticsErrorResponse
 */
CountOralEvaluationStatisticsErrorResponse Client::countOralEvaluationStatisticsErrorWithOptions(const CountOralEvaluationStatisticsErrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CountOralEvaluationStatisticsError"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/countOralEvaluationStatisticsError")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountOralEvaluationStatisticsErrorResponse>();
}

/**
 * @summary Retrieves statistics about API call errors for the oral evaluation service.
 *
 * @param request CountOralEvaluationStatisticsErrorRequest
 * @return CountOralEvaluationStatisticsErrorResponse
 */
CountOralEvaluationStatisticsErrorResponse Client::countOralEvaluationStatisticsError(const CountOralEvaluationStatisticsErrorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return countOralEvaluationStatisticsErrorWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an access warrant.
 *
 * @param request CreateAccessWarrantRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessWarrantResponse
 */
CreateAccessWarrantResponse Client::createAccessWarrantWithOptions(const CreateAccessWarrantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasRequestSign()) {
    body["requestSign"] = request.getRequestSign();
  }

  if (!!request.hasTimestamp()) {
    body["timestamp"] = request.getTimestamp();
  }

  if (!!request.hasUserClientIp()) {
    body["userClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  if (!!request.hasWarrantAvailable()) {
    body["warrantAvailable"] = request.getWarrantAvailable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAccessWarrant"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/createAccessWarrant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessWarrantResponse>();
}

/**
 * @summary Creates an access warrant.
 *
 * @param request CreateAccessWarrantRequest
 * @return CreateAccessWarrantResponse
 */
CreateAccessWarrantResponse Client::createAccessWarrant(const CreateAccessWarrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAccessWarrantWithOptions(request, headers, runtime);
}

/**
 * @summary Alibaba Cloud console > Create Project
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectName()) {
    body["projectName"] = request.getProjectName();
  }

  if (!!request.hasProjectType()) {
    body["projectType"] = request.getProjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/createProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Alibaba Cloud console > Create Project
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(request, headers, runtime);
}

/**
 * @summary Executes a workflow for Chinese composition tutoring.
 *
 * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
 */
FutureGenerator<ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse> Client::executeAITeacherChineseCompositionTutoringWorkflowRunWithSSE(const ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEssayOutline()) {
    body["essayOutline"] = request.getEssayOutline();
  }

  if (!!request.hasEssayRequirements()) {
    body["essayRequirements"] = request.getEssayRequirements();
  }

  if (!!request.hasEssayTopic()) {
    body["essayTopic"] = request.getEssayTopic();
  }

  if (!!request.hasEssayType()) {
    body["essayType"] = request.getEssayType();
  }

  if (!!request.hasEssayWordCount()) {
    body["essayWordCount"] = request.getEssayWordCount();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherChineseCompositionTutoringWorkflowRun"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/chineseCompositionTutoring/workflowRun")},
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
      })).get<ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Executes a workflow for Chinese composition tutoring.
 *
 * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
 */
ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse Client::executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(const ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEssayOutline()) {
    body["essayOutline"] = request.getEssayOutline();
  }

  if (!!request.hasEssayRequirements()) {
    body["essayRequirements"] = request.getEssayRequirements();
  }

  if (!!request.hasEssayTopic()) {
    body["essayTopic"] = request.getEssayTopic();
  }

  if (!!request.hasEssayType()) {
    body["essayType"] = request.getEssayType();
  }

  if (!!request.hasEssayWordCount()) {
    body["essayWordCount"] = request.getEssayWordCount();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherChineseCompositionTutoringWorkflowRun"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/chineseCompositionTutoring/workflowRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse>();
}

/**
 * @summary Executes a workflow for Chinese composition tutoring.
 *
 * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
 * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
 */
ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse Client::executeAITeacherChineseCompositionTutoringWorkflowRun(const ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(request, headers, runtime);
}

/**
 * @summary English Composition Tutoring
 *
 * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
 */
FutureGenerator<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse> Client::executeAITeacherEnglishCompositionTutoringWorkflowRunWithSSE(const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEssayOutline()) {
    body["essayOutline"] = request.getEssayOutline();
  }

  if (!!request.hasEssayRequirements()) {
    body["essayRequirements"] = request.getEssayRequirements();
  }

  if (!!request.hasEssayTopic()) {
    body["essayTopic"] = request.getEssayTopic();
  }

  if (!!request.hasEssayType()) {
    body["essayType"] = request.getEssayType();
  }

  if (!!request.hasEssayWordCount()) {
    body["essayWordCount"] = request.getEssayWordCount();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherEnglishCompositionTutoringWorkflowRun"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/englishCompositionTutoring/workflowRun")},
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
      })).get<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary English Composition Tutoring
 *
 * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
 */
ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse Client::executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEssayOutline()) {
    body["essayOutline"] = request.getEssayOutline();
  }

  if (!!request.hasEssayRequirements()) {
    body["essayRequirements"] = request.getEssayRequirements();
  }

  if (!!request.hasEssayTopic()) {
    body["essayTopic"] = request.getEssayTopic();
  }

  if (!!request.hasEssayType()) {
    body["essayType"] = request.getEssayType();
  }

  if (!!request.hasEssayWordCount()) {
    body["essayWordCount"] = request.getEssayWordCount();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherEnglishCompositionTutoringWorkflowRun"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/englishCompositionTutoring/workflowRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse>();
}

/**
 * @summary English Composition Tutoring
 *
 * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
 * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
 */
ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse Client::executeAITeacherEnglishCompositionTutoringWorkflowRun(const ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(request, headers, runtime);
}

/**
 * @summary Answers English-related questions.
 *
 * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
 */
FutureGenerator<ExecuteAITeacherEnglishParaphraseChatMessageResponse> Client::executeAITeacherEnglishParaphraseChatMessageWithSSE(const ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasQuestionId()) {
    body["questionId"] = request.getQuestionId();
  }

  if (!!request.hasQuestionInfo()) {
    body["questionInfo"] = request.getQuestionInfo();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserAnswer()) {
    body["userAnswer"] = request.getUserAnswer();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherEnglishParaphraseChatMessage"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/englishParaphrase/chatMessage")},
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
      })).get<ExecuteAITeacherEnglishParaphraseChatMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Answers English-related questions.
 *
 * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
 */
ExecuteAITeacherEnglishParaphraseChatMessageResponse Client::executeAITeacherEnglishParaphraseChatMessageWithOptions(const ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasQuestionId()) {
    body["questionId"] = request.getQuestionId();
  }

  if (!!request.hasQuestionInfo()) {
    body["questionInfo"] = request.getQuestionInfo();
  }

  if (!!request.hasResponseMode()) {
    body["responseMode"] = request.getResponseMode();
  }

  if (!!request.hasUserAnswer()) {
    body["userAnswer"] = request.getUserAnswer();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherEnglishParaphraseChatMessage"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/intelligentAgent/englishParaphrase/chatMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherEnglishParaphraseChatMessageResponse>();
}

/**
 * @summary Answers English-related questions.
 *
 * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
 * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
 */
ExecuteAITeacherEnglishParaphraseChatMessageResponse Client::executeAITeacherEnglishParaphraseChatMessage(const ExecuteAITeacherEnglishParaphraseChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherEnglishParaphraseChatMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Expansion dialogues are for open-ended conversations. In these conversations, the AI poses open-ended questions, but the user must stay on topic. If a user\\"s response is off-topic, the AI steers the conversation back on topic. If the user gives two consecutive off-topic responses, the AI moves on to the next topic.
 *
 * @param request ExecuteAITeacherExpansionDialogueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherExpansionDialogueResponse
 */
ExecuteAITeacherExpansionDialogueResponse Client::executeAITeacherExpansionDialogueWithOptions(const ExecuteAITeacherExpansionDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackground()) {
    body["background"] = request.getBackground();
  }

  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasLanguageCode()) {
    body["languageCode"] = request.getLanguageCode();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasRoleInfo()) {
    body["roleInfo"] = request.getRoleInfo();
  }

  if (!!request.hasStartSentence()) {
    body["startSentence"] = request.getStartSentence();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherExpansionDialogue"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/expansionPractice/executeExpansionTraining")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherExpansionDialogueResponse>();
}

/**
 * @summary Expansion dialogues are for open-ended conversations. In these conversations, the AI poses open-ended questions, but the user must stay on topic. If a user\\"s response is off-topic, the AI steers the conversation back on topic. If the user gives two consecutive off-topic responses, the AI moves on to the next topic.
 *
 * @param request ExecuteAITeacherExpansionDialogueRequest
 * @return ExecuteAITeacherExpansionDialogueResponse
 */
ExecuteAITeacherExpansionDialogueResponse Client::executeAITeacherExpansionDialogue(const ExecuteAITeacherExpansionDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherExpansionDialogueWithOptions(request, headers, runtime);
}

/**
 * @summary Uses context to polish the expanded text.
 *
 * @param request ExecuteAITeacherExpansionDialogueRefineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherExpansionDialogueRefineResponse
 */
ExecuteAITeacherExpansionDialogueRefineResponse Client::executeAITeacherExpansionDialogueRefineWithOptions(const ExecuteAITeacherExpansionDialogueRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackground()) {
    body["background"] = request.getBackground();
  }

  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasLanguageCode()) {
    body["languageCode"] = request.getLanguageCode();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasRoleInfo()) {
    body["roleInfo"] = request.getRoleInfo();
  }

  if (!!request.hasStartSentence()) {
    body["startSentence"] = request.getStartSentence();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherExpansionDialogueRefine"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/expansionPractice/refineByContext")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherExpansionDialogueRefineResponse>();
}

/**
 * @summary Uses context to polish the expanded text.
 *
 * @param request ExecuteAITeacherExpansionDialogueRefineRequest
 * @return ExecuteAITeacherExpansionDialogueRefineResponse
 */
ExecuteAITeacherExpansionDialogueRefineResponse Client::executeAITeacherExpansionDialogueRefine(const ExecuteAITeacherExpansionDialogueRefineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherExpansionDialogueRefineWithOptions(request, headers, runtime);
}

/**
 * @summary Further Contextual Translation Practice.
 *
 * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherExpansionDialogueTranslateResponse
 */
ExecuteAITeacherExpansionDialogueTranslateResponse Client::executeAITeacherExpansionDialogueTranslateWithOptions(const ExecuteAITeacherExpansionDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackground()) {
    body["background"] = request.getBackground();
  }

  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasRoleInfo()) {
    body["roleInfo"] = request.getRoleInfo();
  }

  if (!!request.hasStartSentence()) {
    body["startSentence"] = request.getStartSentence();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherExpansionDialogueTranslate"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/expansionPractice/translate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherExpansionDialogueTranslateResponse>();
}

/**
 * @summary Further Contextual Translation Practice.
 *
 * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
 * @return ExecuteAITeacherExpansionDialogueTranslateResponse
 */
ExecuteAITeacherExpansionDialogueTranslateResponse Client::executeAITeacherExpansionDialogueTranslate(const ExecuteAITeacherExpansionDialogueTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherExpansionDialogueTranslateWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a grammar check.
 *
 * @param request ExecuteAITeacherGrammarCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherGrammarCheckResponse
 */
ExecuteAITeacherGrammarCheckResponse Client::executeAITeacherGrammarCheckWithOptions(const ExecuteAITeacherGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherGrammarCheck"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/common/grammarChecking")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherGrammarCheckResponse>();
}

/**
 * @summary Performs a grammar check.
 *
 * @param request ExecuteAITeacherGrammarCheckRequest
 * @return ExecuteAITeacherGrammarCheckResponse
 */
ExecuteAITeacherGrammarCheckResponse Client::executeAITeacherGrammarCheck(const ExecuteAITeacherGrammarCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherGrammarCheckWithOptions(request, headers, runtime);
}

/**
 * @summary Practice synchronous dialogue.
 *
 * @param request ExecuteAITeacherSyncDialogueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherSyncDialogueResponse
 */
ExecuteAITeacherSyncDialogueResponse Client::executeAITeacherSyncDialogueWithOptions(const ExecuteAITeacherSyncDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasLanguageCode()) {
    body["languageCode"] = request.getLanguageCode();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherSyncDialogue"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/syncPractice/executeSyncTraining")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherSyncDialogueResponse>();
}

/**
 * @summary Practice synchronous dialogue.
 *
 * @param request ExecuteAITeacherSyncDialogueRequest
 * @return ExecuteAITeacherSyncDialogueResponse
 */
ExecuteAITeacherSyncDialogueResponse Client::executeAITeacherSyncDialogue(const ExecuteAITeacherSyncDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherSyncDialogueWithOptions(request, headers, runtime);
}

/**
 * @summary You can practice contextual translation in real-time.
 *
 * @param request ExecuteAITeacherSyncDialogueTranslateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAITeacherSyncDialogueTranslateResponse
 */
ExecuteAITeacherSyncDialogueTranslateResponse Client::executeAITeacherSyncDialogueTranslateWithOptions(const ExecuteAITeacherSyncDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAITeacherSyncDialogueTranslate"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/syncPractice/translate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAITeacherSyncDialogueTranslateResponse>();
}

/**
 * @summary You can practice contextual translation in real-time.
 *
 * @param request ExecuteAITeacherSyncDialogueTranslateRequest
 * @return ExecuteAITeacherSyncDialogueTranslateResponse
 */
ExecuteAITeacherSyncDialogueTranslateResponse Client::executeAITeacherSyncDialogueTranslate(const ExecuteAITeacherSyncDialogueTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeAITeacherSyncDialogueTranslateWithOptions(request, headers, runtime);
}

/**
 * @summary Executes a dialogue turn with the Textbook Assistant.
 *
 * @param request ExecuteTextbookAssistantDialogueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantDialogueResponse
 */
ExecuteTextbookAssistantDialogueResponse Client::executeTextbookAssistantDialogueWithOptions(const ExecuteTextbookAssistantDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  if (!!request.hasUserMessage()) {
    body["userMessage"] = request.getUserMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantDialogue"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteDialogue")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantDialogueResponse>();
}

/**
 * @summary Executes a dialogue turn with the Textbook Assistant.
 *
 * @param request ExecuteTextbookAssistantDialogueRequest
 * @return ExecuteTextbookAssistantDialogueResponse
 */
ExecuteTextbookAssistantDialogueResponse Client::executeTextbookAssistantDialogue(const ExecuteTextbookAssistantDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantDialogueWithOptions(request, headers, runtime);
}

/**
 * @summary Adjusts the difficulty of the textbook assistant\\"s dialogue.
 *
 * @param request ExecuteTextbookAssistantDifficultyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantDifficultyResponse
 */
ExecuteTextbookAssistantDifficultyResponse Client::executeTextbookAssistantDifficultyWithOptions(const ExecuteTextbookAssistantDifficultyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasAssistant()) {
    body["assistant"] = request.getAssistant();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantDifficulty"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteDifficulty")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantDifficultyResponse>();
}

/**
 * @summary Adjusts the difficulty of the textbook assistant\\"s dialogue.
 *
 * @param request ExecuteTextbookAssistantDifficultyRequest
 * @return ExecuteTextbookAssistantDifficultyResponse
 */
ExecuteTextbookAssistantDifficultyResponse Client::executeTextbookAssistantDifficulty(const ExecuteTextbookAssistantDifficultyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantDifficultyWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a grammar check.
 *
 * @param request ExecuteTextbookAssistantGrammarCheckRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantGrammarCheckResponse
 */
ExecuteTextbookAssistantGrammarCheckResponse Client::executeTextbookAssistantGrammarCheckWithOptions(const ExecuteTextbookAssistantGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  if (!!request.hasUser()) {
    body["user"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantGrammarCheck"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteGrammarCheck")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantGrammarCheckResponse>();
}

/**
 * @summary Performs a grammar check.
 *
 * @param request ExecuteTextbookAssistantGrammarCheckRequest
 * @return ExecuteTextbookAssistantGrammarCheckResponse
 */
ExecuteTextbookAssistantGrammarCheckResponse Client::executeTextbookAssistantGrammarCheck(const ExecuteTextbookAssistantGrammarCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantGrammarCheckWithOptions(request, headers, runtime);
}

/**
 * @summary Refines a sentence based on the conversational context.
 *
 * @param request ExecuteTextbookAssistantRefineByContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantRefineByContextResponse
 */
ExecuteTextbookAssistantRefineByContextResponse Client::executeTextbookAssistantRefineByContextWithOptions(const ExecuteTextbookAssistantRefineByContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  if (!!request.hasUser()) {
    body["user"] = request.getUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantRefineByContext"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/RefineByContext")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantRefineByContextResponse>();
}

/**
 * @summary Refines a sentence based on the conversational context.
 *
 * @param request ExecuteTextbookAssistantRefineByContextRequest
 * @return ExecuteTextbookAssistantRefineByContextResponse
 */
ExecuteTextbookAssistantRefineByContextResponse Client::executeTextbookAssistantRefineByContext(const ExecuteTextbookAssistantRefineByContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantRefineByContextWithOptions(request, headers, runtime);
}

/**
 * @summary This operation retries a conversation.
 *
 * @param request ExecuteTextbookAssistantRetryConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantRetryConversationResponse
 */
ExecuteTextbookAssistantRetryConversationResponse Client::executeTextbookAssistantRetryConversationWithOptions(const ExecuteTextbookAssistantRetryConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistant()) {
    body["assistant"] = request.getAssistant();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantRetryConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/RetryConversation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantRetryConversationResponse>();
}

/**
 * @summary This operation retries a conversation.
 *
 * @param request ExecuteTextbookAssistantRetryConversationRequest
 * @return ExecuteTextbookAssistantRetryConversationResponse
 */
ExecuteTextbookAssistantRetryConversationResponse Client::executeTextbookAssistantRetryConversation(const ExecuteTextbookAssistantRetryConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantRetryConversationWithOptions(request, headers, runtime);
}

/**
 * @summary Starts a conversation and returns a streaming output.
 *
 * @param request ExecuteTextbookAssistantSseDialogueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantSseDialogueResponse
 */
FutureGenerator<ExecuteTextbookAssistantSseDialogueResponse> Client::executeTextbookAssistantSseDialogueWithSSE(const ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  if (!!request.hasUserMessage()) {
    body["userMessage"] = request.getUserMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantSseDialogue"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteSseDialogue")},
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
      })).get<ExecuteTextbookAssistantSseDialogueResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Starts a conversation and returns a streaming output.
 *
 * @param request ExecuteTextbookAssistantSseDialogueRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantSseDialogueResponse
 */
ExecuteTextbookAssistantSseDialogueResponse Client::executeTextbookAssistantSseDialogueWithOptions(const ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  if (!!request.hasUserMessage()) {
    body["userMessage"] = request.getUserMessage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantSseDialogue"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteSseDialogue")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantSseDialogueResponse>();
}

/**
 * @summary Starts a conversation and returns a streaming output.
 *
 * @param request ExecuteTextbookAssistantSseDialogueRequest
 * @return ExecuteTextbookAssistantSseDialogueResponse
 */
ExecuteTextbookAssistantSseDialogueResponse Client::executeTextbookAssistantSseDialogue(const ExecuteTextbookAssistantSseDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantSseDialogueWithOptions(request, headers, runtime);
}

/**
 * @summary Starts a conversation with the AI teacher. The teacher then sends the initial message.
 *
 * @param request ExecuteTextbookAssistantStartConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantStartConversationResponse
 */
ExecuteTextbookAssistantStartConversationResponse Client::executeTextbookAssistantStartConversationWithOptions(const ExecuteTextbookAssistantStartConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArticleId()) {
    body["articleId"] = request.getArticleId();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantStartConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/StartConversation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantStartConversationResponse>();
}

/**
 * @summary Starts a conversation with the AI teacher. The teacher then sends the initial message.
 *
 * @param request ExecuteTextbookAssistantStartConversationRequest
 * @return ExecuteTextbookAssistantStartConversationResponse
 */
ExecuteTextbookAssistantStartConversationResponse Client::executeTextbookAssistantStartConversation(const ExecuteTextbookAssistantStartConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantStartConversationWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a suggested response from the textbook-based AI teacher.
 *
 * @param request ExecuteTextbookAssistantSuggestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantSuggestionResponse
 */
ExecuteTextbookAssistantSuggestionResponse Client::executeTextbookAssistantSuggestionWithOptions(const ExecuteTextbookAssistantSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistant()) {
    body["assistant"] = request.getAssistant();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantSuggestion"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/Suggestion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantSuggestionResponse>();
}

/**
 * @summary Generates a suggested response from the textbook-based AI teacher.
 *
 * @param request ExecuteTextbookAssistantSuggestionRequest
 * @return ExecuteTextbookAssistantSuggestionResponse
 */
ExecuteTextbookAssistantSuggestionResponse Client::executeTextbookAssistantSuggestion(const ExecuteTextbookAssistantSuggestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantSuggestionWithOptions(request, headers, runtime);
}

/**
 * @summary Translates the content of a message.
 *
 * @param request ExecuteTextbookAssistantTranslateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTextbookAssistantTranslateResponse
 */
ExecuteTextbookAssistantTranslateResponse Client::executeTextbookAssistantTranslateWithOptions(const ExecuteTextbookAssistantTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistant()) {
    body["assistant"] = request.getAssistant();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasChatId()) {
    body["chatId"] = request.getChatId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTextbookAssistantTranslate"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/dialogue/ExecuteTranslate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTextbookAssistantTranslateResponse>();
}

/**
 * @summary Translates the content of a message.
 *
 * @param request ExecuteTextbookAssistantTranslateRequest
 * @return ExecuteTextbookAssistantTranslateResponse
 */
ExecuteTextbookAssistantTranslateResponse Client::executeTextbookAssistantTranslate(const ExecuteTextbookAssistantTranslateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTextbookAssistantTranslateWithOptions(request, headers, runtime);
}

/**
 * @summary Supplemental Practice Assistant
 *
 * @param request GetAITeacherExpansionDialogueSuggestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAITeacherExpansionDialogueSuggestionResponse
 */
GetAITeacherExpansionDialogueSuggestionResponse Client::getAITeacherExpansionDialogueSuggestionWithOptions(const GetAITeacherExpansionDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBackground()) {
    body["background"] = request.getBackground();
  }

  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasLanguageCode()) {
    body["languageCode"] = request.getLanguageCode();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasRoleInfo()) {
    body["roleInfo"] = request.getRoleInfo();
  }

  if (!!request.hasStartSentence()) {
    body["startSentence"] = request.getStartSentence();
  }

  if (!!request.hasTopic()) {
    body["topic"] = request.getTopic();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAITeacherExpansionDialogueSuggestion"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/expansionPractice/suggestion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAITeacherExpansionDialogueSuggestionResponse>();
}

/**
 * @summary Supplemental Practice Assistant
 *
 * @param request GetAITeacherExpansionDialogueSuggestionRequest
 * @return GetAITeacherExpansionDialogueSuggestionResponse
 */
GetAITeacherExpansionDialogueSuggestionResponse Client::getAITeacherExpansionDialogueSuggestion(const GetAITeacherExpansionDialogueSuggestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAITeacherExpansionDialogueSuggestionWithOptions(request, headers, runtime);
}

/**
 * @summary Sync Practice Assistant
 *
 * @param request GetAITeacherSyncDialogueSuggestionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAITeacherSyncDialogueSuggestionResponse
 */
GetAITeacherSyncDialogueSuggestionResponse Client::getAITeacherSyncDialogueSuggestionWithOptions(const GetAITeacherSyncDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDialogueTasks()) {
    body["dialogueTasks"] = request.getDialogueTasks();
  }

  if (!!request.hasLanguageCode()) {
    body["languageCode"] = request.getLanguageCode();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAITeacherSyncDialogueSuggestion"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aiteacher/syncPractice/suggestion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAITeacherSyncDialogueSuggestionResponse>();
}

/**
 * @summary Sync Practice Assistant
 *
 * @param request GetAITeacherSyncDialogueSuggestionRequest
 * @return GetAITeacherSyncDialogueSuggestionResponse
 */
GetAITeacherSyncDialogueSuggestionResponse Client::getAITeacherSyncDialogueSuggestion(const GetAITeacherSyncDialogueSuggestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAITeacherSyncDialogueSuggestionWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains an authorization token to make API calls.
 *
 * @param request GetTextbookAssistantTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTextbookAssistantTokenResponse
 */
GetTextbookAssistantTokenResponse Client::getTextbookAssistantTokenWithOptions(const GetTextbookAssistantTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeviceId()) {
    body["deviceId"] = request.getDeviceId();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTextbookAssistantToken"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/GetToken")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTextbookAssistantTokenResponse>();
}

/**
 * @summary Obtains an authorization token to make API calls.
 *
 * @param request GetTextbookAssistantTokenRequest
 * @return GetTextbookAssistantTokenResponse
 */
GetTextbookAssistantTokenResponse Client::getTextbookAssistantToken(const GetTextbookAssistantTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTextbookAssistantTokenWithOptions(request, headers, runtime);
}

/**
 * @summary Batch get article details
 *
 * @param request ListTextbookAssistantArticleDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantArticleDetailsResponse
 */
ListTextbookAssistantArticleDetailsResponse Client::listTextbookAssistantArticleDetailsWithOptions(const ListTextbookAssistantArticleDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArticleIdList()) {
    body["articleIdList"] = request.getArticleIdList();
  }

  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantArticleDetails"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListArticleDetails")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantArticleDetailsResponse>();
}

/**
 * @summary Batch get article details
 *
 * @param request ListTextbookAssistantArticleDetailsRequest
 * @return ListTextbookAssistantArticleDetailsResponse
 */
ListTextbookAssistantArticleDetailsResponse Client::listTextbookAssistantArticleDetails(const ListTextbookAssistantArticleDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantArticleDetailsWithOptions(request, headers, runtime);
}

/**
 * @summary Returns a list of articles.
 *
 * @param request ListTextbookAssistantArticlesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantArticlesResponse
 */
ListTextbookAssistantArticlesResponse Client::listTextbookAssistantArticlesWithOptions(const ListTextbookAssistantArticlesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasDirectoryId()) {
    body["directoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantArticles"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListArticles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantArticlesResponse>();
}

/**
 * @summary Returns a list of articles.
 *
 * @param request ListTextbookAssistantArticlesRequest
 * @return ListTextbookAssistantArticlesResponse
 */
ListTextbookAssistantArticlesResponse Client::listTextbookAssistantArticles(const ListTextbookAssistantArticlesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantArticlesWithOptions(request, headers, runtime);
}

/**
 * @summary Gets the table of contents of a book.
 *
 * @param request ListTextbookAssistantBookDirectoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantBookDirectoriesResponse
 */
ListTextbookAssistantBookDirectoriesResponse Client::listTextbookAssistantBookDirectoriesWithOptions(const ListTextbookAssistantBookDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasBookId()) {
    body["bookId"] = request.getBookId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantBookDirectories"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListBookDirectories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantBookDirectoriesResponse>();
}

/**
 * @summary Gets the table of contents of a book.
 *
 * @param request ListTextbookAssistantBookDirectoriesRequest
 * @return ListTextbookAssistantBookDirectoriesResponse
 */
ListTextbookAssistantBookDirectoriesResponse Client::listTextbookAssistantBookDirectories(const ListTextbookAssistantBookDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantBookDirectoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of books for a specified grade.
 *
 * @param request ListTextbookAssistantBooksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantBooksResponse
 */
ListTextbookAssistantBooksResponse Client::listTextbookAssistantBooksWithOptions(const ListTextbookAssistantBooksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasBookId()) {
    body["bookId"] = request.getBookId();
  }

  if (!!request.hasGrade()) {
    body["grade"] = request.getGrade();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasVolume()) {
    body["volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantBooks"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListBooks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantBooksResponse>();
}

/**
 * @summary Retrieves a list of books for a specified grade.
 *
 * @param request ListTextbookAssistantBooksRequest
 * @return ListTextbookAssistantBooksResponse
 */
ListTextbookAssistantBooksResponse Client::listTextbookAssistantBooks(const ListTextbookAssistantBooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantBooksWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the available grades and volumes for the Textbook Assistant.
 *
 * @param request ListTextbookAssistantGradeVolumesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantGradeVolumesResponse
 */
ListTextbookAssistantGradeVolumesResponse Client::listTextbookAssistantGradeVolumesWithOptions(const ListTextbookAssistantGradeVolumesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantGradeVolumes"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListGradeVolumes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantGradeVolumesResponse>();
}

/**
 * @summary Retrieves the available grades and volumes for the Textbook Assistant.
 *
 * @param request ListTextbookAssistantGradeVolumesRequest
 * @return ListTextbookAssistantGradeVolumesResponse
 */
ListTextbookAssistantGradeVolumesResponse Client::listTextbookAssistantGradeVolumes(const ListTextbookAssistantGradeVolumesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantGradeVolumesWithOptions(request, headers, runtime);
}

/**
 * @summary Get Article Details
 *
 * @param request ListTextbookAssistantSceneDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTextbookAssistantSceneDetailsResponse
 */
ListTextbookAssistantSceneDetailsResponse Client::listTextbookAssistantSceneDetailsWithOptions(const ListTextbookAssistantSceneDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthToken()) {
    body["authToken"] = request.getAuthToken();
  }

  if (!!request.hasSceneIdList()) {
    body["sceneIdList"] = request.getSceneIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTextbookAssistantSceneDetails"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/textbookAssistant/teachingResource/ListSceneDetails")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTextbookAssistantSceneDetailsResponse>();
}

/**
 * @summary Get Article Details
 *
 * @param request ListTextbookAssistantSceneDetailsRequest
 * @return ListTextbookAssistantSceneDetailsResponse
 */
ListTextbookAssistantSceneDetailsResponse Client::listTextbookAssistantSceneDetails(const ListTextbookAssistantSceneDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTextbookAssistantSceneDetailsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the tab configuration for usage monitoring.
 *
 * @param request ModelRouterBillingCostTabsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterBillingCostTabsResponse
 */
ModelRouterBillingCostTabsResponse Client::modelRouterBillingCostTabsWithOptions(const ModelRouterBillingCostTabsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterBillingCostTabs"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/tabs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterBillingCostTabsResponse>();
}

/**
 * @summary Retrieves the tab configuration for usage monitoring.
 *
 * @param request ModelRouterBillingCostTabsRequest
 * @return ModelRouterBillingCostTabsResponse
 */
ModelRouterBillingCostTabsResponse Client::modelRouterBillingCostTabs(const ModelRouterBillingCostTabsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterBillingCostTabsWithOptions(request, headers, runtime);
}

/**
 * @summary Generates a chat completion.
 *
 * @param request ModelRouterChatCompletionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterChatCompletionsResponse
 */
FutureGenerator<ModelRouterChatCompletionsResponse> Client::modelRouterChatCompletionsWithSSE(const ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterChatCompletions"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/chat/completions")},
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
      })).get<ModelRouterChatCompletionsResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Generates a chat completion.
 *
 * @param request ModelRouterChatCompletionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterChatCompletionsResponse
 */
ModelRouterChatCompletionsResponse Client::modelRouterChatCompletionsWithOptions(const ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterChatCompletions"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/chat/completions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterChatCompletionsResponse>();
}

/**
 * @summary Generates a chat completion.
 *
 * @param request ModelRouterChatCompletionsRequest
 * @return ModelRouterChatCompletionsResponse
 */
ModelRouterChatCompletionsResponse Client::modelRouterChatCompletions(const ModelRouterChatCompletionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterChatCompletionsWithOptions(request, headers, runtime);
}

/**
 * @summary Configures balance throttling for a department.
 *
 * @param request ModelRouterConfigureClientBalanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterConfigureClientBalanceResponse
 */
ModelRouterConfigureClientBalanceResponse Client::modelRouterConfigureClientBalanceWithOptions(const string &id, const ModelRouterConfigureClientBalanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBalanceType()) {
    body["balanceType"] = request.getBalanceType();
  }

  if (!!request.hasEnableBalance()) {
    body["enableBalance"] = request.getEnableBalance();
  }

  if (!!request.hasInitialBalance()) {
    body["initialBalance"] = request.getInitialBalance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterConfigureClientBalance"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterConfigureClientBalanceResponse>();
}

/**
 * @summary Configures balance throttling for a department.
 *
 * @param request ModelRouterConfigureClientBalanceRequest
 * @return ModelRouterConfigureClientBalanceResponse
 */
ModelRouterConfigureClientBalanceResponse Client::modelRouterConfigureClientBalance(const string &id, const ModelRouterConfigureClientBalanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterConfigureClientBalanceWithOptions(id, request, headers, runtime);
}

/**
 * @summary Copies an API key.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCopyApiKeyResponse
 */
ModelRouterCopyApiKeyResponse Client::modelRouterCopyApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterCopyApiKey"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/apikeys/" , Darabonba::Encode::Encoder::percentEncode(id) , "/copy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCopyApiKeyResponse>();
}

/**
 * @summary Copies an API key.
 *
 * @return ModelRouterCopyApiKeyResponse
 */
ModelRouterCopyApiKeyResponse Client::modelRouterCopyApiKey(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCopyApiKeyWithOptions(id, headers, runtime);
}

/**
 * @summary API key management / Create an API key
 *
 * @param request ModelRouterCreateApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateApiKeyResponse
 */
ModelRouterCreateApiKeyResponse Client::modelRouterCreateApiKeyWithOptions(const ModelRouterCreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["clientId"] = request.getClientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateApiKey"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/apikeys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateApiKeyResponse>();
}

/**
 * @summary API key management / Create an API key
 *
 * @param request ModelRouterCreateApiKeyRequest
 * @return ModelRouterCreateApiKeyResponse
 */
ModelRouterCreateApiKeyResponse Client::modelRouterCreateApiKey(const ModelRouterCreateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateApiKeyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a balance transaction for customer management.
 *
 * @description This operation is deprecated. Do not use it.
 *
 * @param request ModelRouterCreateBalanceTransactionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateBalanceTransactionResponse
 */
ModelRouterCreateBalanceTransactionResponse Client::modelRouterCreateBalanceTransactionWithOptions(const string &id, const ModelRouterCreateBalanceTransactionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmount()) {
    body["amount"] = request.getAmount();
  }

  if (!!request.hasBalanceType()) {
    body["balanceType"] = request.getBalanceType();
  }

  if (!!request.hasIdempotencyKey()) {
    body["idempotencyKey"] = request.getIdempotencyKey();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateBalanceTransaction"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance/transactions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateBalanceTransactionResponse>();
}

/**
 * @summary Creates a balance transaction for customer management.
 *
 * @description This operation is deprecated. Do not use it.
 *
 * @param request ModelRouterCreateBalanceTransactionRequest
 * @return ModelRouterCreateBalanceTransactionResponse
 */
ModelRouterCreateBalanceTransactionResponse Client::modelRouterCreateBalanceTransaction(const string &id, const ModelRouterCreateBalanceTransactionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateBalanceTransactionWithOptions(id, request, headers, runtime);
}

/**
 * @summary Billing Management/Create Billing Rule
 *
 * @param request ModelRouterCreateBillingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateBillingRuleResponse
 */
ModelRouterCreateBillingRuleResponse Client::modelRouterCreateBillingRuleWithOptions(const ModelRouterCreateBillingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillingType()) {
    body["billingType"] = request.getBillingType();
  }

  if (!!request.hasEffectiveTime()) {
    body["effectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasExpireTime()) {
    body["expireTime"] = request.getExpireTime();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasPricingConfig()) {
    body["pricingConfig"] = request.getPricingConfig();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateBillingRule"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/rules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateBillingRuleResponse>();
}

/**
 * @summary Billing Management/Create Billing Rule
 *
 * @param request ModelRouterCreateBillingRuleRequest
 * @return ModelRouterCreateBillingRuleResponse
 */
ModelRouterCreateBillingRuleResponse Client::modelRouterCreateBillingRule(const ModelRouterCreateBillingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateBillingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Client management / Create client
 *
 * @param request ModelRouterCreateClientRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateClientResponse
 */
ModelRouterCreateClientResponse Client::modelRouterCreateClientWithOptions(const ModelRouterCreateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddress()) {
    body["address"] = request.getAddress();
  }

  if (!!request.hasAllowedModels()) {
    body["allowedModels"] = request.getAllowedModels();
  }

  if (!!request.hasContact()) {
    body["contact"] = request.getContact();
  }

  if (!!request.hasDiscount()) {
    body["discount"] = request.getDiscount();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    body["parentId"] = request.getParentId();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateClient"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateClientResponse>();
}

/**
 * @summary Client management / Create client
 *
 * @param request ModelRouterCreateClientRequest
 * @return ModelRouterCreateClientResponse
 */
ModelRouterCreateClientResponse Client::modelRouterCreateClient(const ModelRouterCreateClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateClientWithOptions(request, headers, runtime);
}

/**
 * @summary Conversation management / Create conversation
 *
 * @param request ModelRouterCreateConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateConversationResponse
 */
ModelRouterCreateConversationResponse Client::modelRouterCreateConversationWithOptions(const ModelRouterCreateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatData()) {
    body["chatData"] = request.getChatData();
  }

  if (!!request.hasModelIds()) {
    body["modelIds"] = request.getModelIds();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/conversations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateConversationResponse>();
}

/**
 * @summary Conversation management / Create conversation
 *
 * @param request ModelRouterCreateConversationRequest
 * @return ModelRouterCreateConversationResponse
 */
ModelRouterCreateConversationResponse Client::modelRouterCreateConversation(const ModelRouterCreateConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateConversationWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a model.
 *
 * @param request ModelRouterCreateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateModelResponse
 */
ModelRouterCreateModelResponse Client::modelRouterCreateModelWithOptions(const ModelRouterCreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    body["baseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExtensions()) {
    body["extensions"] = request.getExtensions();
  }

  if (!!request.hasInOut()) {
    body["inOut"] = request.getInOut();
  }

  if (!!request.hasMaxInputLength()) {
    body["maxInputLength"] = request.getMaxInputLength();
  }

  if (!!request.hasMaxOutputLength()) {
    body["maxOutputLength"] = request.getMaxOutputLength();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasModelType()) {
    body["modelType"] = request.getModelType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSymbol()) {
    body["symbol"] = request.getSymbol();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateModel"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/models")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateModelResponse>();
}

/**
 * @summary Creates a model.
 *
 * @param request ModelRouterCreateModelRequest
 * @return ModelRouterCreateModelResponse
 */
ModelRouterCreateModelResponse Client::modelRouterCreateModel(const ModelRouterCreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateModelWithOptions(request, headers, runtime);
}

/**
 * @summary 客户管理/创建周期充值订阅
 *
 * @description 该接口已弃用，请勿使用
 *
 * @param request ModelRouterCreateSubscriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterCreateSubscriptionResponse
 */
ModelRouterCreateSubscriptionResponse Client::modelRouterCreateSubscriptionWithOptions(const string &id, const ModelRouterCreateSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBalanceType()) {
    body["balanceType"] = request.getBalanceType();
  }

  if (!!request.hasEffectiveTime()) {
    body["effectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasIdempotencyKey()) {
    body["idempotencyKey"] = request.getIdempotencyKey();
  }

  if (!!request.hasSubscriptionAmount()) {
    body["subscriptionAmount"] = request.getSubscriptionAmount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterCreateSubscription"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance/subscription")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterCreateSubscriptionResponse>();
}

/**
 * @summary 客户管理/创建周期充值订阅
 *
 * @description 该接口已弃用，请勿使用
 *
 * @param request ModelRouterCreateSubscriptionRequest
 * @return ModelRouterCreateSubscriptionResponse
 */
ModelRouterCreateSubscriptionResponse Client::modelRouterCreateSubscription(const string &id, const ModelRouterCreateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterCreateSubscriptionWithOptions(id, request, headers, runtime);
}

/**
 * @summary API Key Management / Delete API Key
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterDeleteApiKeyResponse
 */
ModelRouterDeleteApiKeyResponse Client::modelRouterDeleteApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterDeleteApiKey"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/apikeys/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterDeleteApiKeyResponse>();
}

/**
 * @summary API Key Management / Delete API Key
 *
 * @return ModelRouterDeleteApiKeyResponse
 */
ModelRouterDeleteApiKeyResponse Client::modelRouterDeleteApiKey(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterDeleteApiKeyWithOptions(id, headers, runtime);
}

/**
 * @summary Deletes a client.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterDeleteClientResponse
 */
ModelRouterDeleteClientResponse Client::modelRouterDeleteClientWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterDeleteClient"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterDeleteClientResponse>();
}

/**
 * @summary Deletes a client.
 *
 * @return ModelRouterDeleteClientResponse
 */
ModelRouterDeleteClientResponse Client::modelRouterDeleteClient(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterDeleteClientWithOptions(id, headers, runtime);
}

/**
 * @summary Conversation management/Delete conversation
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterDeleteConversationResponse
 */
ModelRouterDeleteConversationResponse Client::modelRouterDeleteConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterDeleteConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/conversations/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterDeleteConversationResponse>();
}

/**
 * @summary Conversation management/Delete conversation
 *
 * @return ModelRouterDeleteConversationResponse
 */
ModelRouterDeleteConversationResponse Client::modelRouterDeleteConversation(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterDeleteConversationWithOptions(id, headers, runtime);
}

/**
 * @summary Model Management / Delete Model
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterDeleteModelResponse
 */
ModelRouterDeleteModelResponse Client::modelRouterDeleteModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterDeleteModel"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/models/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterDeleteModelResponse>();
}

/**
 * @summary Model Management / Delete Model
 *
 * @return ModelRouterDeleteModelResponse
 */
ModelRouterDeleteModelResponse Client::modelRouterDeleteModel(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterDeleteModelWithOptions(id, headers, runtime);
}

/**
 * @summary Client Management/Get department balance
 *
 * @param request ModelRouterGetClientBalanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterGetClientBalanceResponse
 */
ModelRouterGetClientBalanceResponse Client::modelRouterGetClientBalanceWithOptions(const string &id, const ModelRouterGetClientBalanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterGetClientBalance"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterGetClientBalanceResponse>();
}

/**
 * @summary Client Management/Get department balance
 *
 * @param request ModelRouterGetClientBalanceRequest
 * @return ModelRouterGetClientBalanceResponse
 */
ModelRouterGetClientBalanceResponse Client::modelRouterGetClientBalance(const string &id, const ModelRouterGetClientBalanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterGetClientBalanceWithOptions(id, request, headers, runtime);
}

/**
 * @summary Gets the balance change log for a specified department.
 *
 * @param request ModelRouterGetClientBalanceLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterGetClientBalanceLogsResponse
 */
ModelRouterGetClientBalanceLogsResponse Client::modelRouterGetClientBalanceLogsWithOptions(const string &id, const ModelRouterGetClientBalanceLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeType()) {
    query["changeType"] = request.getChangeType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasSize()) {
    query["size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterGetClientBalanceLogs"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterGetClientBalanceLogsResponse>();
}

/**
 * @summary Gets the balance change log for a specified department.
 *
 * @param request ModelRouterGetClientBalanceLogsRequest
 * @return ModelRouterGetClientBalanceLogsResponse
 */
ModelRouterGetClientBalanceLogsResponse Client::modelRouterGetClientBalanceLogs(const string &id, const ModelRouterGetClientBalanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterGetClientBalanceLogsWithOptions(id, request, headers, runtime);
}

/**
 * @summary 客户管理/查询周期充值订阅列表
 *
 * @description 该接口已弃用，请勿使用
 *
 * @param request ModelRouterListSubscriptionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterListSubscriptionsResponse
 */
ModelRouterListSubscriptionsResponse Client::modelRouterListSubscriptionsWithOptions(const string &id, const ModelRouterListSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBalanceType()) {
    query["balanceType"] = request.getBalanceType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterListSubscriptions"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance/subscription")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterListSubscriptionsResponse>();
}

/**
 * @summary 客户管理/查询周期充值订阅列表
 *
 * @description 该接口已弃用，请勿使用
 *
 * @param request ModelRouterListSubscriptionsRequest
 * @return ModelRouterListSubscriptionsResponse
 */
ModelRouterListSubscriptionsResponse Client::modelRouterListSubscriptions(const string &id, const ModelRouterListSubscriptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterListSubscriptionsWithOptions(id, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific API key.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryApiKeyResponse
 */
ModelRouterQueryApiKeyResponse Client::modelRouterQueryApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryApiKey"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/apikeys/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryApiKeyResponse>();
}

/**
 * @summary Retrieves the details of a specific API key.
 *
 * @return ModelRouterQueryApiKeyResponse
 */
ModelRouterQueryApiKeyResponse Client::modelRouterQueryApiKey(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryApiKeyWithOptions(id, headers, runtime);
}

/**
 * @summary Retrieves a list of API keys.
 *
 * @param request ModelRouterQueryApiKeyListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryApiKeyListResponse
 */
ModelRouterQueryApiKeyListResponse Client::modelRouterQueryApiKeyListWithOptions(const ModelRouterQueryApiKeyListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryApiKeyList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/apikeys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryApiKeyListResponse>();
}

/**
 * @summary Retrieves a list of API keys.
 *
 * @param request ModelRouterQueryApiKeyListRequest
 * @return ModelRouterQueryApiKeyListResponse
 */
ModelRouterQueryApiKeyListResponse Client::modelRouterQueryApiKeyList(const ModelRouterQueryApiKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryApiKeyListWithOptions(request, headers, runtime);
}

/**
 * @summary Billing > Query billing cost breakdown
 *
 * @param request ModelRouterQueryBillingCostBreakdownRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryBillingCostBreakdownResponse
 */
ModelRouterQueryBillingCostBreakdownResponse Client::modelRouterQueryBillingCostBreakdownWithOptions(const ModelRouterQueryBillingCostBreakdownRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasModelTypes()) {
    query["modelTypes"] = request.getModelTypes();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryBillingCostBreakdown"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/breakdown")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryBillingCostBreakdownResponse>();
}

/**
 * @summary Billing > Query billing cost breakdown
 *
 * @param request ModelRouterQueryBillingCostBreakdownRequest
 * @return ModelRouterQueryBillingCostBreakdownResponse
 */
ModelRouterQueryBillingCostBreakdownResponse Client::modelRouterQueryBillingCostBreakdown(const ModelRouterQueryBillingCostBreakdownRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryBillingCostBreakdownWithOptions(request, headers, runtime);
}

/**
 * @summary Billing management / Query billing rule list
 *
 * @param request ModelRouterQueryBillingRuleListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryBillingRuleListResponse
 */
ModelRouterQueryBillingRuleListResponse Client::modelRouterQueryBillingRuleListWithOptions(const ModelRouterQueryBillingRuleListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveOnly()) {
    query["activeOnly"] = request.getActiveOnly();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelCode()) {
    query["modelCode"] = request.getModelCode();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryBillingRuleList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryBillingRuleListResponse>();
}

/**
 * @summary Billing management / Query billing rule list
 *
 * @param request ModelRouterQueryBillingRuleListRequest
 * @return ModelRouterQueryBillingRuleListResponse
 */
ModelRouterQueryBillingRuleListResponse Client::modelRouterQueryBillingRuleList(const ModelRouterQueryBillingRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryBillingRuleListWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the discount modification history for a client.
 *
 * @param request ModelRouterQueryClientDiscountLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryClientDiscountLogsResponse
 */
ModelRouterQueryClientDiscountLogsResponse Client::modelRouterQueryClientDiscountLogsWithOptions(const string &id, const ModelRouterQueryClientDiscountLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryClientDiscountLogs"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/discount-logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryClientDiscountLogsResponse>();
}

/**
 * @summary Retrieves the discount modification history for a client.
 *
 * @param request ModelRouterQueryClientDiscountLogsRequest
 * @return ModelRouterQueryClientDiscountLogsResponse
 */
ModelRouterQueryClientDiscountLogsResponse Client::modelRouterQueryClientDiscountLogs(const string &id, const ModelRouterQueryClientDiscountLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryClientDiscountLogsWithOptions(id, request, headers, runtime);
}

/**
 * @summary Retrieves a list of clients.
 *
 * @param request ModelRouterQueryClientListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryClientListResponse
 */
ModelRouterQueryClientListResponse Client::modelRouterQueryClientListWithOptions(const ModelRouterQueryClientListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryClientList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryClientListResponse>();
}

/**
 * @summary Retrieves a list of clients.
 *
 * @param request ModelRouterQueryClientListRequest
 * @return ModelRouterQueryClientListResponse
 */
ModelRouterQueryClientListResponse Client::modelRouterQueryClientList(const ModelRouterQueryClientListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryClientListWithOptions(request, headers, runtime);
}

/**
 * @summary Returns a hierarchical tree of customers.
 *
 * @param request ModelRouterQueryClientTreeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryClientTreeResponse
 */
ModelRouterQueryClientTreeResponse Client::modelRouterQueryClientTreeWithOptions(const ModelRouterQueryClientTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryClientTree"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/tree")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryClientTreeResponse>();
}

/**
 * @summary Returns a hierarchical tree of customers.
 *
 * @param request ModelRouterQueryClientTreeRequest
 * @return ModelRouterQueryClientTreeResponse
 */
ModelRouterQueryClientTreeResponse Client::modelRouterQueryClientTree(const ModelRouterQueryClientTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryClientTreeWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a conversation.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryConversationResponse
 */
ModelRouterQueryConversationResponse Client::modelRouterQueryConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/conversations/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryConversationResponse>();
}

/**
 * @summary Retrieves the details of a conversation.
 *
 * @return ModelRouterQueryConversationResponse
 */
ModelRouterQueryConversationResponse Client::modelRouterQueryConversation(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryConversationWithOptions(id, headers, runtime);
}

/**
 * @summary Conversation management/Conversation list
 *
 * @param request ModelRouterQueryConversationListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryConversationListResponse
 */
ModelRouterQueryConversationListResponse Client::modelRouterQueryConversationListWithOptions(const ModelRouterQueryConversationListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryConversationList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/conversations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryConversationListResponse>();
}

/**
 * @summary Conversation management/Conversation list
 *
 * @param request ModelRouterQueryConversationListRequest
 * @return ModelRouterQueryConversationListResponse
 */
ModelRouterQueryConversationListResponse Client::modelRouterQueryConversationList(const ModelRouterQueryConversationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryConversationListWithOptions(request, headers, runtime);
}

/**
 * @summary billing management / Model details
 *
 * @param request ModelRouterQueryCostModelDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryCostModelDetailResponse
 */
ModelRouterQueryCostModelDetailResponse Client::modelRouterQueryCostModelDetailWithOptions(const ModelRouterQueryCostModelDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryCostModelDetail"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/model-detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryCostModelDetailResponse>();
}

/**
 * @summary billing management / Model details
 *
 * @param request ModelRouterQueryCostModelDetailRequest
 * @return ModelRouterQueryCostModelDetailResponse
 */
ModelRouterQueryCostModelDetailResponse Client::modelRouterQueryCostModelDetail(const ModelRouterQueryCostModelDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryCostModelDetailWithOptions(request, headers, runtime);
}

/**
 * @summary billing management / Retrieves a list of invoked models
 *
 * @param request ModelRouterQueryCostModelListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryCostModelListResponse
 */
ModelRouterQueryCostModelListResponse Client::modelRouterQueryCostModelListWithOptions(const ModelRouterQueryCostModelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelTypes()) {
    query["modelTypes"] = request.getModelTypes();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.getSearch();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryCostModelList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryCostModelListResponse>();
}

/**
 * @summary billing management / Retrieves a list of invoked models
 *
 * @param request ModelRouterQueryCostModelListRequest
 * @return ModelRouterQueryCostModelListResponse
 */
ModelRouterQueryCostModelListResponse Client::modelRouterQueryCostModelList(const ModelRouterQueryCostModelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryCostModelListWithOptions(request, headers, runtime);
}

/**
 * @summary billing management / Get cost overview metrics
 *
 * @param request ModelRouterQueryCostOverviewMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryCostOverviewMetricsResponse
 */
ModelRouterQueryCostOverviewMetricsResponse Client::modelRouterQueryCostOverviewMetricsWithOptions(const ModelRouterQueryCostOverviewMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelTypes()) {
    query["modelTypes"] = request.getModelTypes();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryCostOverviewMetrics"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/overview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryCostOverviewMetricsResponse>();
}

/**
 * @summary billing management / Get cost overview metrics
 *
 * @param request ModelRouterQueryCostOverviewMetricsRequest
 * @return ModelRouterQueryCostOverviewMetricsResponse
 */
ModelRouterQueryCostOverviewMetricsResponse Client::modelRouterQueryCostOverviewMetrics(const ModelRouterQueryCostOverviewMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryCostOverviewMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary billing management / Cost trends
 *
 * @param request ModelRouterQueryCostTrendMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryCostTrendMetricsResponse
 */
ModelRouterQueryCostTrendMetricsResponse Client::modelRouterQueryCostTrendMetricsWithOptions(const ModelRouterQueryCostTrendMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelTypes()) {
    query["modelTypes"] = request.getModelTypes();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryCostTrendMetrics"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/cost/trend")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryCostTrendMetricsResponse>();
}

/**
 * @summary billing management / Cost trends
 *
 * @param request ModelRouterQueryCostTrendMetricsRequest
 * @return ModelRouterQueryCostTrendMetricsResponse
 */
ModelRouterQueryCostTrendMetricsResponse Client::modelRouterQueryCostTrendMetrics(const ModelRouterQueryCostTrendMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryCostTrendMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves details for a specific model.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryModelResponse
 */
ModelRouterQueryModelResponse Client::modelRouterQueryModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryModel"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/models/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryModelResponse>();
}

/**
 * @summary Retrieves details for a specific model.
 *
 * @return ModelRouterQueryModelResponse
 */
ModelRouterQueryModelResponse Client::modelRouterQueryModel(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryModelWithOptions(id, headers, runtime);
}

/**
 * @summary Model management/Get model list
 *
 * @param request ModelRouterQueryModelListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryModelListResponse
 */
ModelRouterQueryModelListResponse Client::modelRouterQueryModelListWithOptions(const ModelRouterQueryModelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryModelList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryModelListResponse>();
}

/**
 * @summary Model management/Get model list
 *
 * @param request ModelRouterQueryModelListRequest
 * @return ModelRouterQueryModelListResponse
 */
ModelRouterQueryModelListResponse Client::modelRouterQueryModelList(const ModelRouterQueryModelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryModelListWithOptions(request, headers, runtime);
}

/**
 * @summary Configures Nacos or retrieves the list of Nacos service providers.
 *
 * @description This operation is deprecated. Do not use it.
 *
 * @param request ModelRouterQueryNacosProvidersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryNacosProvidersResponse
 */
ModelRouterQueryNacosProvidersResponse Client::modelRouterQueryNacosProvidersWithOptions(const ModelRouterQueryNacosProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryNacosProviders"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/nacos/providers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryNacosProvidersResponse>();
}

/**
 * @summary Configures Nacos or retrieves the list of Nacos service providers.
 *
 * @description This operation is deprecated. Do not use it.
 *
 * @param request ModelRouterQueryNacosProvidersRequest
 * @return ModelRouterQueryNacosProvidersResponse
 */
ModelRouterQueryNacosProvidersResponse Client::modelRouterQueryNacosProviders(const ModelRouterQueryNacosProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryNacosProvidersWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of tags from Nacos.
 *
 * @param request ModelRouterQueryNacosTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryNacosTagsResponse
 */
ModelRouterQueryNacosTagsResponse Client::modelRouterQueryNacosTagsWithOptions(const ModelRouterQueryNacosTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigType()) {
    query["configType"] = request.getConfigType();
  }

  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryNacosTags"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/nacos/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryNacosTagsResponse>();
}

/**
 * @summary Retrieves a list of tags from Nacos.
 *
 * @param request ModelRouterQueryNacosTagsRequest
 * @return ModelRouterQueryNacosTagsResponse
 */
ModelRouterQueryNacosTagsResponse Client::modelRouterQueryNacosTags(const ModelRouterQueryNacosTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryNacosTagsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves chart data for model observation.
 *
 * @param request ModelRouterQueryObservationChartsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryObservationChartsResponse
 */
ModelRouterQueryObservationChartsResponse Client::modelRouterQueryObservationChartsWithOptions(const ModelRouterQueryObservationChartsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryObservationCharts"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/observation/charts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryObservationChartsResponse>();
}

/**
 * @summary Retrieves chart data for model observation.
 *
 * @param request ModelRouterQueryObservationChartsRequest
 * @return ModelRouterQueryObservationChartsResponse
 */
ModelRouterQueryObservationChartsResponse Client::modelRouterQueryObservationCharts(const ModelRouterQueryObservationChartsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryObservationChartsWithOptions(request, headers, runtime);
}

/**
 * @summary Model Observation / Observation Logs
 *
 * @param request ModelRouterQueryObservationLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryObservationLogsResponse
 */
ModelRouterQueryObservationLogsResponse Client::modelRouterQueryObservationLogsWithOptions(const ModelRouterQueryObservationLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryObservationLogs"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/observation/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryObservationLogsResponse>();
}

/**
 * @summary Model Observation / Observation Logs
 *
 * @param request ModelRouterQueryObservationLogsRequest
 * @return ModelRouterQueryObservationLogsResponse
 */
ModelRouterQueryObservationLogsResponse Client::modelRouterQueryObservationLogs(const ModelRouterQueryObservationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryObservationLogsWithOptions(request, headers, runtime);
}

/**
 * @summary Model Observation > Get Observation Metric Data
 *
 * @param request ModelRouterQueryObservationMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryObservationMetricsResponse
 */
ModelRouterQueryObservationMetricsResponse Client::modelRouterQueryObservationMetricsWithOptions(const ModelRouterQueryObservationMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGroupBy()) {
    query["groupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasNeedTotalCount()) {
    query["needTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryObservationMetrics"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/observation/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryObservationMetricsResponse>();
}

/**
 * @summary Model Observation > Get Observation Metric Data
 *
 * @param request ModelRouterQueryObservationMetricsRequest
 * @return ModelRouterQueryObservationMetricsResponse
 */
ModelRouterQueryObservationMetricsResponse Client::modelRouterQueryObservationMetrics(const ModelRouterQueryObservationMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryObservationMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries usage details in batches for usage management.
 *
 * @param request ModelRouterQueryUsageBreakdownRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterQueryUsageBreakdownResponse
 */
ModelRouterQueryUsageBreakdownResponse Client::modelRouterQueryUsageBreakdownWithOptions(const ModelRouterQueryUsageBreakdownRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKeyId()) {
    query["apiKeyId"] = request.getApiKeyId();
  }

  if (!!request.hasClientId()) {
    query["clientId"] = request.getClientId();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasGranularity()) {
    query["granularity"] = request.getGranularity();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelRouterQueryUsageBreakdown"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/usage/breakdown")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterQueryUsageBreakdownResponse>();
}

/**
 * @summary Queries usage details in batches for usage management.
 *
 * @param request ModelRouterQueryUsageBreakdownRequest
 * @return ModelRouterQueryUsageBreakdownResponse
 */
ModelRouterQueryUsageBreakdownResponse Client::modelRouterQueryUsageBreakdown(const ModelRouterQueryUsageBreakdownRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterQueryUsageBreakdownWithOptions(request, headers, runtime);
}

/**
 * @summary Flow control management / Save flow control configuration
 *
 * @param request ModelRouterSaveFlowConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterSaveFlowConfigResponse
 */
ModelRouterSaveFlowConfigResponse Client::modelRouterSaveFlowConfigWithOptions(const ModelRouterSaveFlowConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasRpm()) {
    body["rpm"] = request.getRpm();
  }

  if (!!request.hasSmoothFlowEnabled()) {
    body["smoothFlowEnabled"] = request.getSmoothFlowEnabled();
  }

  if (!!request.hasTpm()) {
    body["tpm"] = request.getTpm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterSaveFlowConfig"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/flow-config")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterSaveFlowConfigResponse>();
}

/**
 * @summary Flow control management / Save flow control configuration
 *
 * @param request ModelRouterSaveFlowConfigRequest
 * @return ModelRouterSaveFlowConfigResponse
 */
ModelRouterSaveFlowConfigResponse Client::modelRouterSaveFlowConfig(const ModelRouterSaveFlowConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterSaveFlowConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 客户管理/停止周期充值订阅
 *
 * @param request ModelRouterStopSubscriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterStopSubscriptionResponse
 */
ModelRouterStopSubscriptionResponse Client::modelRouterStopSubscriptionWithOptions(const string &id, const ModelRouterStopSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBalanceType()) {
    body["balanceType"] = request.getBalanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterStopSubscription"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id) , "/balance/subscription/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterStopSubscriptionResponse>();
}

/**
 * @summary 客户管理/停止周期充值订阅
 *
 * @param request ModelRouterStopSubscriptionRequest
 * @return ModelRouterStopSubscriptionResponse
 */
ModelRouterStopSubscriptionResponse Client::modelRouterStopSubscription(const string &id, const ModelRouterStopSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterStopSubscriptionWithOptions(id, request, headers, runtime);
}

/**
 * @summary Billing management/Update billing rules
 *
 * @param request ModelRouterUpdateBillingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterUpdateBillingRuleResponse
 */
ModelRouterUpdateBillingRuleResponse Client::modelRouterUpdateBillingRuleWithOptions(const string &id, const ModelRouterUpdateBillingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillingType()) {
    body["billingType"] = request.getBillingType();
  }

  if (!!request.hasEffectiveTime()) {
    body["effectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasExpireTime()) {
    body["expireTime"] = request.getExpireTime();
  }

  if (!!request.hasPricingConfig()) {
    body["pricingConfig"] = request.getPricingConfig();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterUpdateBillingRule"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/billing/rules/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterUpdateBillingRuleResponse>();
}

/**
 * @summary Billing management/Update billing rules
 *
 * @param request ModelRouterUpdateBillingRuleRequest
 * @return ModelRouterUpdateBillingRuleResponse
 */
ModelRouterUpdateBillingRuleResponse Client::modelRouterUpdateBillingRule(const string &id, const ModelRouterUpdateBillingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterUpdateBillingRuleWithOptions(id, request, headers, runtime);
}

/**
 * @summary Updates a specified client\\"s information.
 *
 * @param request ModelRouterUpdateClientRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterUpdateClientResponse
 */
ModelRouterUpdateClientResponse Client::modelRouterUpdateClientWithOptions(const string &id, const ModelRouterUpdateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddress()) {
    body["address"] = request.getAddress();
  }

  if (!!request.hasAllowedModels()) {
    body["allowedModels"] = request.getAllowedModels();
  }

  if (!!request.hasContact()) {
    body["contact"] = request.getContact();
  }

  if (!!request.hasDiscount()) {
    body["discount"] = request.getDiscount();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.getRemark();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterUpdateClient"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/clients/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterUpdateClientResponse>();
}

/**
 * @summary Updates a specified client\\"s information.
 *
 * @param request ModelRouterUpdateClientRequest
 * @return ModelRouterUpdateClientResponse
 */
ModelRouterUpdateClientResponse Client::modelRouterUpdateClient(const string &id, const ModelRouterUpdateClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterUpdateClientWithOptions(id, request, headers, runtime);
}

/**
 * @summary Conversation management / Update conversation
 *
 * @param request ModelRouterUpdateConversationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterUpdateConversationResponse
 */
ModelRouterUpdateConversationResponse Client::modelRouterUpdateConversationWithOptions(const string &id, const ModelRouterUpdateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatData()) {
    body["chatData"] = request.getChatData();
  }

  if (!!request.hasMessageCount()) {
    body["messageCount"] = request.getMessageCount();
  }

  if (!!request.hasModelIds()) {
    body["modelIds"] = request.getModelIds();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterUpdateConversation"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/conversations/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterUpdateConversationResponse>();
}

/**
 * @summary Conversation management / Update conversation
 *
 * @param request ModelRouterUpdateConversationRequest
 * @return ModelRouterUpdateConversationResponse
 */
ModelRouterUpdateConversationResponse Client::modelRouterUpdateConversation(const string &id, const ModelRouterUpdateConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterUpdateConversationWithOptions(id, request, headers, runtime);
}

/**
 * @summary Model Management / Update Model
 *
 * @param request ModelRouterUpdateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelRouterUpdateModelResponse
 */
ModelRouterUpdateModelResponse Client::modelRouterUpdateModelWithOptions(const string &id, const ModelRouterUpdateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["apiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    body["baseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasMaxInputLength()) {
    body["maxInputLength"] = request.getMaxInputLength();
  }

  if (!!request.hasMaxOutputLength()) {
    body["maxOutputLength"] = request.getMaxOutputLength();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasModelType()) {
    body["modelType"] = request.getModelType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasSymbol()) {
    body["symbol"] = request.getSymbol();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelRouterUpdateModel"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelRouter/open/models/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelRouterUpdateModelResponse>();
}

/**
 * @summary Model Management / Update Model
 *
 * @param request ModelRouterUpdateModelRequest
 * @return ModelRouterUpdateModelResponse
 */
ModelRouterUpdateModelResponse Client::modelRouterUpdateModel(const string &id, const ModelRouterUpdateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modelRouterUpdateModelWithOptions(id, request, headers, runtime);
}

/**
 * @summary Personalized text-to-image: Create image inference tasks using a pre-trained model.
 *
 * @param request PersonalizedTextToImageAddInferenceJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PersonalizedTextToImageAddInferenceJobResponse
 */
PersonalizedTextToImageAddInferenceJobResponse Client::personalizedTextToImageAddInferenceJobWithOptions(const PersonalizedTextToImageAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageNumber()) {
    body["imageNumber"] = request.getImageNumber();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasPrompt()) {
    body["prompt"] = request.getPrompt();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  if (!!request.hasStrength()) {
    body["strength"] = request.getStrength();
  }

  if (!!request.hasTrainSteps()) {
    body["trainSteps"] = request.getTrainSteps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PersonalizedTextToImageAddInferenceJob"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/addPreModelInferenceJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PersonalizedTextToImageAddInferenceJobResponse>();
}

/**
 * @summary Personalized text-to-image: Create image inference tasks using a pre-trained model.
 *
 * @param request PersonalizedTextToImageAddInferenceJobRequest
 * @return PersonalizedTextToImageAddInferenceJobResponse
 */
PersonalizedTextToImageAddInferenceJobResponse Client::personalizedTextToImageAddInferenceJob(const PersonalizedTextToImageAddInferenceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedTextToImageAddInferenceJobWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the content of an image from the personalized text-to-image service using its unique image ID.
 *
 * @param request PersonalizedTextToImageQueryImageAssetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PersonalizedTextToImageQueryImageAssetResponse
 */
PersonalizedTextToImageQueryImageAssetResponse Client::personalizedTextToImageQueryImageAssetWithOptions(const PersonalizedTextToImageQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncodeFormat()) {
    query["encodeFormat"] = request.getEncodeFormat();
  }

  if (!!request.hasImageId()) {
    query["imageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PersonalizedTextToImageQueryImageAsset"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryImageAssetFromImageId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "any"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PersonalizedTextToImageQueryImageAssetResponse>();
}

/**
 * @summary Retrieves the content of an image from the personalized text-to-image service using its unique image ID.
 *
 * @param request PersonalizedTextToImageQueryImageAssetRequest
 * @return PersonalizedTextToImageQueryImageAssetResponse
 */
PersonalizedTextToImageQueryImageAssetResponse Client::personalizedTextToImageQueryImageAsset(const PersonalizedTextToImageQueryImageAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedTextToImageQueryImageAssetWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of a personalized text-to-image inference job.
 *
 * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
 */
PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Client::personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(const PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInferenceJobId()) {
    query["inferenceJobId"] = request.getInferenceJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PersonalizedTextToImageQueryPreModelInferenceJobInfo"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryPreModelInferenceJobInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse>();
}

/**
 * @summary Queries the status of a personalized text-to-image inference job.
 *
 * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
 * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
 */
PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Client::personalizedTextToImageQueryPreModelInferenceJobInfo(const PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an inference job to generate images based on a personalized text-to-image model.
 *
 * @param request Personalizedtxt2imgAddInferenceJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgAddInferenceJobResponse
 */
Personalizedtxt2imgAddInferenceJobResponse Client::personalizedtxt2imgAddInferenceJobWithOptions(const Personalizedtxt2imgAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageNumber()) {
    body["imageNumber"] = request.getImageNumber();
  }

  if (!!request.hasModelId()) {
    body["modelId"] = request.getModelId();
  }

  if (!!request.hasPrompt()) {
    body["prompt"] = request.getPrompt();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgAddInferenceJob"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/addInferenceJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgAddInferenceJobResponse>();
}

/**
 * @summary Creates an inference job to generate images based on a personalized text-to-image model.
 *
 * @param request Personalizedtxt2imgAddInferenceJobRequest
 * @return Personalizedtxt2imgAddInferenceJobResponse
 */
Personalizedtxt2imgAddInferenceJobResponse Client::personalizedtxt2imgAddInferenceJob(const Personalizedtxt2imgAddInferenceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgAddInferenceJobWithOptions(request, headers, runtime);
}

/**
 * @summary Personalized text-to-image: Create a model training task.
 *
 * @param request Personalizedtxt2imgAddModelTrainJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgAddModelTrainJobResponse
 */
Personalizedtxt2imgAddModelTrainJobResponse Client::personalizedtxt2imgAddModelTrainJobWithOptions(const Personalizedtxt2imgAddModelTrainJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasObjectType()) {
    body["objectType"] = request.getObjectType();
  }

  if (!!request.hasTrainSteps()) {
    body["trainSteps"] = request.getTrainSteps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgAddModelTrainJob"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/addModelTrainJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgAddModelTrainJobResponse>();
}

/**
 * @summary Personalized text-to-image: Create a model training task.
 *
 * @param request Personalizedtxt2imgAddModelTrainJobRequest
 * @return Personalizedtxt2imgAddModelTrainJobResponse
 */
Personalizedtxt2imgAddModelTrainJobResponse Client::personalizedtxt2imgAddModelTrainJob(const Personalizedtxt2imgAddModelTrainJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgAddModelTrainJobWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the binary data of an image generated by the personalized text-to-image service.
 *
 * @param request Personalizedtxt2imgQueryImageAssetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgQueryImageAssetResponse
 */
Personalizedtxt2imgQueryImageAssetResponse Client::personalizedtxt2imgQueryImageAssetWithOptions(const Personalizedtxt2imgQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncodeFormat()) {
    query["encodeFormat"] = request.getEncodeFormat();
  }

  if (!!request.hasImageId()) {
    query["imageId"] = request.getImageId();
  }

  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  if (!!request.hasPromptId()) {
    query["promptId"] = request.getPromptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgQueryImageAsset"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryImageAsset")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "any"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgQueryImageAssetResponse>();
}

/**
 * @summary Retrieves the binary data of an image generated by the personalized text-to-image service.
 *
 * @param request Personalizedtxt2imgQueryImageAssetRequest
 * @return Personalizedtxt2imgQueryImageAssetResponse
 */
Personalizedtxt2imgQueryImageAssetResponse Client::personalizedtxt2imgQueryImageAsset(const Personalizedtxt2imgQueryImageAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgQueryImageAssetWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the status and results of a Personalizedtxt2img inference job.
 *
 * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
 */
Personalizedtxt2imgQueryInferenceJobInfoResponse Client::personalizedtxt2imgQueryInferenceJobInfoWithOptions(const Personalizedtxt2imgQueryInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInferenceJobId()) {
    query["inferenceJobId"] = request.getInferenceJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgQueryInferenceJobInfo"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryInferenceJobInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgQueryInferenceJobInfoResponse>();
}

/**
 * @summary Retrieves the status and results of a Personalizedtxt2img inference job.
 *
 * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
 * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
 */
Personalizedtxt2imgQueryInferenceJobInfoResponse Client::personalizedtxt2imgQueryInferenceJobInfo(const Personalizedtxt2imgQueryInferenceJobInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgQueryInferenceJobInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Your personalized model training tasks: image generation and query models.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgQueryModelTrainJobListResponse
 */
Personalizedtxt2imgQueryModelTrainJobListResponse Client::personalizedtxt2imgQueryModelTrainJobListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgQueryModelTrainJobList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryModelTrainJobList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgQueryModelTrainJobListResponse>();
}

/**
 * @summary Your personalized model training tasks: image generation and query models.
 *
 * @return Personalizedtxt2imgQueryModelTrainJobListResponse
 */
Personalizedtxt2imgQueryModelTrainJobListResponse Client::personalizedtxt2imgQueryModelTrainJobList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgQueryModelTrainJobListWithOptions(headers, runtime);
}

/**
 * @summary Queries the training status of a personalized text-to-image model.
 *
 * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return Personalizedtxt2imgQueryModelTrainStatusResponse
 */
Personalizedtxt2imgQueryModelTrainStatusResponse Client::personalizedtxt2imgQueryModelTrainStatusWithOptions(const Personalizedtxt2imgQueryModelTrainStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelId()) {
    query["modelId"] = request.getModelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Personalizedtxt2imgQueryModelTrainStatus"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/personalizedtxt2img/queryModelTrainStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<Personalizedtxt2imgQueryModelTrainStatusResponse>();
}

/**
 * @summary Queries the training status of a personalized text-to-image model.
 *
 * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
 * @return Personalizedtxt2imgQueryModelTrainStatusResponse
 */
Personalizedtxt2imgQueryModelTrainStatusResponse Client::personalizedtxt2imgQueryModelTrainStatus(const Personalizedtxt2imgQueryModelTrainStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return personalizedtxt2imgQueryModelTrainStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Queries information about an application access ID (appkey).
 *
 * @param request QueryApplicationAccessIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryApplicationAccessIdResponse
 */
QueryApplicationAccessIdResponse Client::queryApplicationAccessIdWithOptions(const QueryApplicationAccessIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationAccessId()) {
    query["applicationAccessId"] = request.getApplicationAccessId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryApplicationAccessId"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryApplicationAccessId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryApplicationAccessIdResponse>();
}

/**
 * @summary Queries information about an application access ID (appkey).
 *
 * @param request QueryApplicationAccessIdRequest
 * @return QueryApplicationAccessIdResponse
 */
QueryApplicationAccessIdResponse Client::queryApplicationAccessId(const QueryApplicationAccessIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryApplicationAccessIdWithOptions(request, headers, runtime);
}

/**
 * @summary Alibaba Cloud console / Project list
 *
 * @param request QueryProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProjectResponse
 */
QueryProjectResponse Client::queryProjectWithOptions(const QueryProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["projectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProject"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryProject")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProjectResponse>();
}

/**
 * @summary Alibaba Cloud console / Project list
 *
 * @param request QueryProjectRequest
 * @return QueryProjectResponse
 */
QueryProjectResponse Client::queryProject(const QueryProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryProjectWithOptions(request, headers, runtime);
}

/**
 * @summary Alibaba Cloud console / Project List
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProjectListResponse
 */
QueryProjectListResponse Client::queryProjectListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProjectList"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryProjectList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProjectListResponse>();
}

/**
 * @summary Alibaba Cloud console / Project List
 *
 * @return QueryProjectListResponse
 */
QueryProjectListResponse Client::queryProjectList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryProjectListWithOptions(headers, runtime);
}

/**
 * @summary Alibaba Cloud Console / Purchased Services
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPurchasedServiceResponse
 */
QueryPurchasedServiceResponse Client::queryPurchasedServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPurchasedService"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/queryPurchasedService")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPurchasedServiceResponse>();
}

/**
 * @summary Alibaba Cloud Console / Purchased Services
 *
 * @return QueryPurchasedServiceResponse
 */
QueryPurchasedServiceResponse Client::queryPurchasedService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryPurchasedServiceWithOptions(headers, runtime);
}

/**
 * @summary Alibaba Cloud Console / Update project information
 *
 * @param request UpdateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    body["projectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "20240611"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/aliyunConsole/updateProject")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary Alibaba Cloud Console / Update project information
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AiContent20240611